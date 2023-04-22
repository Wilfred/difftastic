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

#define LANGUAGE_VERSION 14
#define STATE_COUNT 147
#define LARGE_STATE_COUNT 60
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym__intertoken_token1 = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_POUND_SEMI = 3,
  anon_sym_POUND_BANG = 4,
  anon_sym_POUND_PIPE = 5,
  aux_sym_block_comment_token1 = 6,
  anon_sym_PIPE_POUND = 7,
  sym_boolean = 8,
  aux_sym_number_token1 = 9,
  sym_character = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_string_token1 = 12,
  sym_escape_sequence = 13,
  aux_sym_symbol_token1 = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_LBRACK = 17,
  anon_sym_RBRACK = 18,
  anon_sym_LBRACE = 19,
  anon_sym_RBRACE = 20,
  anon_sym_SQUOTE = 21,
  anon_sym_BQUOTE = 22,
  anon_sym_POUND_SQUOTE = 23,
  anon_sym_POUND_BQUOTE = 24,
  anon_sym_COMMA = 25,
  anon_sym_COMMA_AT = 26,
  anon_sym_POUND_COMMA = 27,
  anon_sym_POUND_COMMA_AT = 28,
  anon_sym_POUND_LPAREN = 29,
  anon_sym_POUNDvu8_LPAREN = 30,
  sym_program = 31,
  sym__token = 32,
  sym__intertoken = 33,
  sym_comment = 34,
  sym_directive = 35,
  sym_block_comment = 36,
  sym__datum = 37,
  sym_number = 38,
  sym_string = 39,
  sym_symbol = 40,
  sym_list = 41,
  sym_quote = 42,
  sym_quasiquote = 43,
  sym_syntax = 44,
  sym_quasisyntax = 45,
  sym_unquote = 46,
  sym_unquote_splicing = 47,
  sym_unsyntax = 48,
  sym_unsyntax_splicing = 49,
  sym_vector = 50,
  sym_byte_vector = 51,
  aux_sym_program_repeat1 = 52,
  aux_sym_comment_repeat1 = 53,
  aux_sym_block_comment_repeat1 = 54,
  aux_sym_string_repeat1 = 55,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__intertoken_token1] = "_intertoken_token1",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_POUND_SEMI] = "#;",
  [anon_sym_POUND_BANG] = "#!",
  [anon_sym_POUND_PIPE] = "#|",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_PIPE_POUND] = "|#",
  [sym_boolean] = "boolean",
  [aux_sym_number_token1] = "number_token1",
  [sym_character] = "character",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym_symbol_token1] = "symbol_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_POUND_SQUOTE] = "#'",
  [anon_sym_POUND_BQUOTE] = "#`",
  [anon_sym_COMMA] = ",",
  [anon_sym_COMMA_AT] = ",@",
  [anon_sym_POUND_COMMA] = "#,",
  [anon_sym_POUND_COMMA_AT] = "#,@",
  [anon_sym_POUND_LPAREN] = "#(",
  [anon_sym_POUNDvu8_LPAREN] = "#vu8(",
  [sym_program] = "program",
  [sym__token] = "_token",
  [sym__intertoken] = "_intertoken",
  [sym_comment] = "comment",
  [sym_directive] = "directive",
  [sym_block_comment] = "block_comment",
  [sym__datum] = "_datum",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_symbol] = "symbol",
  [sym_list] = "list",
  [sym_quote] = "quote",
  [sym_quasiquote] = "quasiquote",
  [sym_syntax] = "syntax",
  [sym_quasisyntax] = "quasisyntax",
  [sym_unquote] = "unquote",
  [sym_unquote_splicing] = "unquote_splicing",
  [sym_unsyntax] = "unsyntax",
  [sym_unsyntax_splicing] = "unsyntax_splicing",
  [sym_vector] = "vector",
  [sym_byte_vector] = "byte_vector",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__intertoken_token1] = aux_sym__intertoken_token1,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_POUND_SEMI] = anon_sym_POUND_SEMI,
  [anon_sym_POUND_BANG] = anon_sym_POUND_BANG,
  [anon_sym_POUND_PIPE] = anon_sym_POUND_PIPE,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_PIPE_POUND] = anon_sym_PIPE_POUND,
  [sym_boolean] = sym_boolean,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [sym_character] = sym_character,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym_symbol_token1] = aux_sym_symbol_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_POUND_SQUOTE] = anon_sym_POUND_SQUOTE,
  [anon_sym_POUND_BQUOTE] = anon_sym_POUND_BQUOTE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COMMA_AT] = anon_sym_COMMA_AT,
  [anon_sym_POUND_COMMA] = anon_sym_POUND_COMMA,
  [anon_sym_POUND_COMMA_AT] = anon_sym_POUND_COMMA_AT,
  [anon_sym_POUND_LPAREN] = anon_sym_POUND_LPAREN,
  [anon_sym_POUNDvu8_LPAREN] = anon_sym_POUNDvu8_LPAREN,
  [sym_program] = sym_program,
  [sym__token] = sym__token,
  [sym__intertoken] = sym__intertoken,
  [sym_comment] = sym_comment,
  [sym_directive] = sym_directive,
  [sym_block_comment] = sym_block_comment,
  [sym__datum] = sym__datum,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_symbol] = sym_symbol,
  [sym_list] = sym_list,
  [sym_quote] = sym_quote,
  [sym_quasiquote] = sym_quasiquote,
  [sym_syntax] = sym_syntax,
  [sym_quasisyntax] = sym_quasisyntax,
  [sym_unquote] = sym_unquote,
  [sym_unquote_splicing] = sym_unquote_splicing,
  [sym_unsyntax] = sym_unsyntax,
  [sym_unsyntax_splicing] = sym_unsyntax_splicing,
  [sym_vector] = sym_vector,
  [sym_byte_vector] = sym_byte_vector,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__intertoken_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
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
  [anon_sym_POUND_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_number_token1] = {
    .visible = false,
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
  [aux_sym_symbol_token1] = {
    .visible = false,
    .named = false,
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA_AT] = {
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
  [anon_sym_POUND_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDvu8_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [sym__intertoken] = {
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
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__datum] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_quasiquote] = {
    .visible = true,
    .named = true,
  },
  [sym_syntax] = {
    .visible = true,
    .named = true,
  },
  [sym_quasisyntax] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote_splicing] = {
    .visible = true,
    .named = true,
  },
  [sym_unsyntax] = {
    .visible = true,
    .named = true,
  },
  [sym_unsyntax_splicing] = {
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
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 3,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 11,
  [14] = 14,
  [15] = 15,
  [16] = 12,
  [17] = 15,
  [18] = 5,
  [19] = 9,
  [20] = 10,
  [21] = 8,
  [22] = 4,
  [23] = 6,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 25,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 39,
  [41] = 38,
  [42] = 37,
  [43] = 43,
  [44] = 31,
  [45] = 35,
  [46] = 30,
  [47] = 34,
  [48] = 29,
  [49] = 24,
  [50] = 28,
  [51] = 33,
  [52] = 27,
  [53] = 32,
  [54] = 26,
  [55] = 55,
  [56] = 56,
  [57] = 43,
  [58] = 56,
  [59] = 55,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 95,
  [97] = 94,
  [98] = 60,
  [99] = 87,
  [100] = 71,
  [101] = 89,
  [102] = 92,
  [103] = 78,
  [104] = 75,
  [105] = 85,
  [106] = 76,
  [107] = 84,
  [108] = 88,
  [109] = 83,
  [110] = 82,
  [111] = 81,
  [112] = 80,
  [113] = 62,
  [114] = 79,
  [115] = 63,
  [116] = 65,
  [117] = 66,
  [118] = 67,
  [119] = 68,
  [120] = 69,
  [121] = 70,
  [122] = 64,
  [123] = 72,
  [124] = 61,
  [125] = 73,
  [126] = 74,
  [127] = 77,
  [128] = 86,
  [129] = 90,
  [130] = 91,
  [131] = 93,
  [132] = 132,
  [133] = 133,
  [134] = 133,
  [135] = 132,
  [136] = 136,
  [137] = 132,
  [138] = 133,
  [139] = 139,
  [140] = 140,
  [141] = 140,
  [142] = 139,
  [143] = 143,
  [144] = 79,
  [145] = 90,
  [146] = 146,
};

static inline bool aux_sym__intertoken_token1_character_set_1(int32_t c) {
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

static inline bool sym_character_character_set_1(int32_t c) {
  return (c < 'l'
    ? (c < 'S'
      ? (c < 'N'
        ? c == 0
        : c <= 'N')
      : (c <= 'S' || (c < 'd'
        ? (c >= 'a' && c <= 'b')
        : c <= 'e')))
    : (c <= 'l' || (c < 'r'
      ? (c < 'p'
        ? c == 'n'
        : c <= 'p')
      : (c <= 't' || (c < 'x'
        ? c == 'v'
        : c <= 'x')))));
}

static inline bool aux_sym_symbol_token1_character_set_1(int32_t c) {
  return (c < '`'
    ? (c < '\''
      ? (c < ' '
        ? (c < '\t'
          ? c == 0
          : c <= '\r')
        : (c <= ' ' || c == '"'))
      : (c <= ')' || (c < ';'
        ? c == ','
        : (c <= ';' || (c >= '[' && c <= ']')))))
    : (c <= '`' || (c < 8232
      ? (c < 5760
        ? (c < 160
          ? (c >= '{' && c <= '}')
          : c <= 160)
        : (c <= 5760 || (c >= 8192 && c <= 8202)))
      : (c <= 8233 || (c < 8287
        ? c == 8239
        : (c <= 8287 || c == 12288))))));
}

static inline bool aux_sym_symbol_token1_character_set_2(int32_t c) {
  return (c < '{'
    ? (c < '\''
      ? (c < ' '
        ? (c < '\t'
          ? c == 0
          : c <= '\r')
        : (c <= ' ' || c == '"'))
      : (c <= ')' || (c < '['
        ? (c < ';'
          ? c == ','
          : c <= ';')
        : (c <= ']' || c == '`'))))
    : (c <= '{' || (c < 8232
      ? (c < 5760
        ? (c < 160
          ? c == '}'
          : c <= 160)
        : (c <= 5760 || (c >= 8192 && c <= 8202)))
      : (c <= 8233 || (c < 8287
        ? c == 8239
        : (c <= 8287 || c == 12288))))));
}

static inline bool aux_sym_symbol_token1_character_set_3(int32_t c) {
  return (c < '`'
    ? (c < '\''
      ? (c < ' '
        ? (c < '\t'
          ? c == 0
          : c <= '\r')
        : (c <= ' ' || (c >= '"' && c <= '#')))
      : (c <= ')' || (c < ';'
        ? c == ','
        : (c <= ';' || (c >= '[' && c <= ']')))))
    : (c <= '`' || (c < 8232
      ? (c < 5760
        ? (c < 160
          ? (c >= '{' && c <= '}')
          : c <= 160)
        : (c <= 5760 || (c >= 8192 && c <= 8202)))
      : (c <= 8233 || (c < 8287
        ? c == 8239
        : (c <= 8287 || c == 12288))))));
}

static inline bool aux_sym_symbol_token1_character_set_4(int32_t c) {
  return (c < '{'
    ? (c < '\''
      ? (c < ' '
        ? (c < '\t'
          ? c == 0
          : c <= '\r')
        : (c <= ' ' || (c >= '"' && c <= '#')))
      : (c <= ')' || (c < '['
        ? (c < ';'
          ? c == ','
          : c <= ';')
        : (c <= ']' || c == '`'))))
    : (c <= '{' || (c < 8232
      ? (c < 5760
        ? (c < 160
          ? c == '}'
          : c <= 160)
        : (c <= 5760 || (c >= 8192 && c <= 8202)))
      : (c <= 8233 || (c < 8287
        ? c == 8239
        : (c <= 8287 || c == 12288))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(205);
      if (aux_sym__intertoken_token1_character_set_1(lookahead)) ADVANCE(206);
      if (lookahead == '"') ADVANCE(372);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(436);
      if (lookahead == '(') ADVANCE(430);
      if (lookahead == ')') ADVANCE(431);
      if (lookahead == ',') ADVANCE(440);
      if (lookahead == ';') ADVANCE(207);
      if (lookahead == '[') ADVANCE(432);
      if (lookahead == ']') ADVANCE(433);
      if (lookahead == '`') ADVANCE(437);
      if (lookahead == '{') ADVANCE(434);
      if (lookahead == '|') ADVANCE(212);
      if (lookahead == '}') ADVANCE(435);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(125);
      if (lookahead == '\n' ||
          lookahead == 133 ||
          lookahead == 8232) ADVANCE(192);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(209);
      if (lookahead == '\'') ADVANCE(438);
      if (lookahead == '(') ADVANCE(445);
      if (lookahead == ',') ADVANCE(443);
      if (lookahead == ';') ADVANCE(208);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(220);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(20);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(5);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(270);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(283);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '`') ADVANCE(439);
      if (lookahead == 'v') ADVANCE(123);
      if (lookahead == '|') ADVANCE(210);
      if (lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(215);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(209);
      if (lookahead == ';') ADVANCE(208);
      if (lookahead == '|') ADVANCE(210);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(372);
      if (lookahead == '\\') ADVANCE(375);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(135);
      if (lookahead == '.') ADVANCE(163);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(216);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(216);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(127);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '|') ADVANCE(172);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '|') ADVANCE(172);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(216);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(127);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(216);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '/') ADVANCE(145);
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '/') ADVANCE(145);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == ';') ADVANCE(207);
      if (aux_sym__intertoken_token1_character_set_1(lookahead)) ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(429);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(153);
      if (lookahead == '.') ADVANCE(163);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'i') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '(') ADVANCE(446);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(48);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '/') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '|') ADVANCE(172);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(163);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(167);
      if (lookahead == 'i') ADVANCE(332);
      if (lookahead == 'n') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == 'i') ADVANCE(331);
      if (lookahead == 'n') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(181);
      if (lookahead == 'i') ADVANCE(331);
      if (lookahead == 'n') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(52);
      END_STATE();
    case 44:
      if (lookahead == '/') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == '/') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == '0') ADVANCE(216);
      END_STATE();
    case 48:
      if (lookahead == '0') ADVANCE(308);
      END_STATE();
    case 49:
      if (lookahead == '0') ADVANCE(88);
      END_STATE();
    case 50:
      if (lookahead == '0') ADVANCE(319);
      END_STATE();
    case 51:
      if (lookahead == '0') ADVANCE(311);
      END_STATE();
    case 52:
      if (lookahead == '0') ADVANCE(314);
      END_STATE();
    case 53:
      if (lookahead == '8') ADVANCE(25);
      END_STATE();
    case 54:
      if (lookahead == ';') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 55:
      if (lookahead == 'A') ADVANCE(136);
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'C') ADVANCE(137);
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 57:
      if (lookahead == 'I') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == 'L') ADVANCE(138);
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 59:
      if (lookahead == 'N') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 60:
      if (lookahead == 'W') ADVANCE(139);
      if (lookahead == 'w') ADVANCE(58);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 70:
      if (lookahead == 'b') ADVANCE(357);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(357);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(357);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 80:
      if (lookahead == 'f') ADVANCE(26);
      END_STATE();
    case 81:
      if (lookahead == 'f') ADVANCE(79);
      END_STATE();
    case 82:
      if (lookahead == 'f') ADVANCE(29);
      END_STATE();
    case 83:
      if (lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 84:
      if (lookahead == 'f') ADVANCE(41);
      END_STATE();
    case 85:
      if (lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 86:
      if (lookahead == 'f') ADVANCE(43);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '|') ADVANCE(172);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '|') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(13);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(92);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(22);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(94);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(331);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == '|') ADVANCE(172);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(13);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(331);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == '|') ADVANCE(172);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(44);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(331);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == '|') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(22);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(331);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == '|') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(45);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(331);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == '|') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(331);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == '|') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 104:
      if (lookahead == 'k') ADVANCE(120);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(357);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 107:
      if (lookahead == 'm') ADVANCE(357);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 125:
      if (lookahead == '\n' ||
          lookahead == 133) ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(374);
      END_STATE();
    case 126:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 127:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 128:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 129:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 130:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 131:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 132:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 133:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 135:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(298);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(28);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(300);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(302);
      END_STATE();
    case 136:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 138:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 139:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 140:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 141:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(139);
      END_STATE();
    case 142:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(260);
      END_STATE();
    case 143:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(253);
      END_STATE();
    case 144:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(267);
      END_STATE();
    case 145:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(15);
      END_STATE();
    case 146:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(92);
      END_STATE();
    case 147:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(262);
      END_STATE();
    case 148:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(269);
      END_STATE();
    case 149:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(349);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(273);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(254);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(280);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(16);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(94);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(275);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(282);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(351);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 171:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 172:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 173:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      END_STATE();
    case 192:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(374);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(284);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      END_STATE();
    case 196:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 197:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(286);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(355);
      END_STATE();
    case 202:
      if (!sym_character_character_set_1(lookahead)) ADVANCE(357);
      if (lookahead == 'N') ADVANCE(369);
      if (lookahead == 'S') ADVANCE(370);
      if (lookahead == 'a') ADVANCE(366);
      if (lookahead == 'b') ADVANCE(360);
      if (lookahead == 'd') ADVANCE(363);
      if (lookahead == 'e') ADVANCE(367);
      if (lookahead == 'l') ADVANCE(365);
      if (lookahead == 'n') ADVANCE(358);
      if (lookahead == 'p') ADVANCE(361);
      if (lookahead == 'r') ADVANCE(364);
      if (lookahead == 's') ADVANCE(359);
      if (lookahead == 't') ADVANCE(362);
      if (lookahead == 'v') ADVANCE(368);
      if (lookahead == 'x') ADVANCE(371);
      END_STATE();
    case 203:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '|') ADVANCE(211);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '|') ADVANCE(212);
      END_STATE();
    case 204:
      if (eof) ADVANCE(205);
      if (lookahead == '"') ADVANCE(372);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(436);
      if (lookahead == '(') ADVANCE(430);
      if (lookahead == ')') ADVANCE(431);
      if (lookahead == ',') ADVANCE(441);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == ';') ADVANCE(207);
      if (lookahead == '[') ADVANCE(432);
      if (lookahead == ']') ADVANCE(433);
      if (lookahead == '`') ADVANCE(437);
      if (lookahead == '{') ADVANCE(434);
      if (lookahead == '}') ADVANCE(435);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (aux_sym__intertoken_token1_character_set_1(lookahead)) ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(429);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__intertoken_token1);
      if (aux_sym__intertoken_token1_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '#') ADVANCE(214);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '|') ADVANCE(210);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_number_token1);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == '/') ADVANCE(413);
      if (lookahead == '@') ADVANCE(385);
      if (lookahead == '|') ADVANCE(414);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(386);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(429);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == '/') ADVANCE(164);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(133);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '|') ADVANCE(190);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(150);
      if (lookahead == '@') ADVANCE(335);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(297);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(227);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '@') ADVANCE(385);
      if (lookahead == '|') ADVANCE(414);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(386);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(429);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(133);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '|') ADVANCE(190);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == '/') ADVANCE(416);
      if (lookahead == '@') ADVANCE(385);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == '|') ADVANCE(417);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(386);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(429);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(129);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '.') ADVANCE(231);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '|') ADVANCE(191);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead == '@') ADVANCE(335);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == '@') ADVANCE(345);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(91);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '@') ADVANCE(385);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == '|') ADVANCE(417);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(386);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(429);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(129);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '|') ADVANCE(191);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '@') ADVANCE(385);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (!aux_sym_symbol_token1_character_set_2(lookahead)) ADVANCE(429);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '.') ADVANCE(249);
      if (lookahead == '/') ADVANCE(421);
      if (lookahead == '|') ADVANCE(422);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(429);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '.') ADVANCE(251);
      if (lookahead == '/') ADVANCE(176);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '.') ADVANCE(250);
      if (lookahead == '/') ADVANCE(176);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == '|') ADVANCE(165);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == '/') ADVANCE(143);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == '@') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == '@') ADVANCE(345);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(91);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(245);
      if (lookahead == '@') ADVANCE(385);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      if (!aux_sym_symbol_token1_character_set_2(lookahead)) ADVANCE(429);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(245);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(245);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(245);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '|') ADVANCE(165);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '|') ADVANCE(422);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(429);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(250);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(250);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(252);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if (!aux_sym_symbol_token1_character_set_2(lookahead)) ADVANCE(429);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == '@') ADVANCE(346);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(93);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(261);
      if (lookahead == '@') ADVANCE(335);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(261);
      if (lookahead == '@') ADVANCE(345);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(91);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(261);
      if (lookahead == '@') ADVANCE(345);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(91);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == '/') ADVANCE(155);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == '/') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(266);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(266);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == '@') ADVANCE(346);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(93);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '@') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '@') ADVANCE(345);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(91);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '@') ADVANCE(345);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(91);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == '|') ADVANCE(182);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(258);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '@') ADVANCE(337);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '@') ADVANCE(347);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '@') ADVANCE(346);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(93);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '@') ADVANCE(346);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '/') ADVANCE(194);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '/') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == '@') ADVANCE(337);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '/') ADVANCE(200);
      if (lookahead == '@') ADVANCE(347);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(281);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(281);
      if (lookahead == '@') ADVANCE(346);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(93);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(281);
      if (lookahead == '@') ADVANCE(346);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '@') ADVANCE(337);
      if (lookahead == '|') ADVANCE(186);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '@') ADVANCE(337);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '@') ADVANCE(347);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '@') ADVANCE(347);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '@') ADVANCE(337);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '@') ADVANCE(347);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '@') ADVANCE(347);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(343);
      if (lookahead == '/') ADVANCE(422);
      if (lookahead == '|') ADVANCE(422);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(429);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(341);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == '|') ADVANCE(165);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(385);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == '|') ADVANCE(417);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(429);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(385);
      if (lookahead == '|') ADVANCE(414);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(429);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(329);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(242);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(335);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(297);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(227);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == '|') ADVANCE(184);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(265);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == '|') ADVANCE(182);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(258);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(337);
      if (lookahead == 'i') ADVANCE(334);
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead == '|') ADVANCE(187);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(337);
      if (lookahead == '|') ADVANCE(186);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(388);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(388);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(389);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(388);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(338);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(338);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(338);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(339);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(101);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(339);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(339);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(340);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(103);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(340);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(340);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '|') ADVANCE(191);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '|') ADVANCE(190);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == '|') ADVANCE(165);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(241);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == '|') ADVANCE(165);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(292);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == '|') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(264);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == '|') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(293);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == '|') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == '|') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'n') ADVANCE(396);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'n') ADVANCE(397);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(165);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(322);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(241);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(165);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(264);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(165);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(165);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(323);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(292);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(165);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(293);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(165);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(165);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(422);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(429);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(429);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(348);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(241);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(264);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(241);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(264);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'E') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'P') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(134);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == 'x') ADVANCE(197);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(1);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '.') ADVANCE(377);
      if (lookahead == '/') ADVANCE(424);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == '|') ADVANCE(425);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(429);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == '|') ADVANCE(425);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(429);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(378);
      if (!aux_sym_symbol_token1_character_set_2(lookahead)) ADVANCE(429);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(391);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(399);
      if (lookahead == '/') ADVANCE(425);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == '|') ADVANCE(425);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(429);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == 'i') ADVANCE(328);
      if (lookahead == 'n') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(392);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(390);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == 'i') ADVANCE(406);
      if (lookahead == 'n') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'i') ADVANCE(330);
      if (lookahead == 'n') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'i') ADVANCE(406);
      if (lookahead == 'n') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(428);
      if (lookahead == 'i') ADVANCE(330);
      if (lookahead == 'n') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0') ADVANCE(356);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0') ADVANCE(306);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0') ADVANCE(402);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'a') ADVANCE(403);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'a') ADVANCE(404);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'a') ADVANCE(405);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'f') ADVANCE(379);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'f') ADVANCE(382);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'f') ADVANCE(383);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == '|') ADVANCE(425);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(429);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == '|') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(400);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(429);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'i') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'i') ADVANCE(356);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(379);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(382);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(383);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(398);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(400);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(378);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(400);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_POUND_BQUOTE);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(442);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA);
      if (lookahead == '@') ADVANCE(444);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA_AT);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_POUNDvu8_LPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 204},
  [2] = {.lex_state = 204},
  [3] = {.lex_state = 204},
  [4] = {.lex_state = 204},
  [5] = {.lex_state = 204},
  [6] = {.lex_state = 204},
  [7] = {.lex_state = 204},
  [8] = {.lex_state = 204},
  [9] = {.lex_state = 204},
  [10] = {.lex_state = 204},
  [11] = {.lex_state = 204},
  [12] = {.lex_state = 204},
  [13] = {.lex_state = 204},
  [14] = {.lex_state = 204},
  [15] = {.lex_state = 204},
  [16] = {.lex_state = 204},
  [17] = {.lex_state = 204},
  [18] = {.lex_state = 204},
  [19] = {.lex_state = 204},
  [20] = {.lex_state = 204},
  [21] = {.lex_state = 204},
  [22] = {.lex_state = 204},
  [23] = {.lex_state = 204},
  [24] = {.lex_state = 204},
  [25] = {.lex_state = 204},
  [26] = {.lex_state = 204},
  [27] = {.lex_state = 204},
  [28] = {.lex_state = 204},
  [29] = {.lex_state = 204},
  [30] = {.lex_state = 204},
  [31] = {.lex_state = 204},
  [32] = {.lex_state = 204},
  [33] = {.lex_state = 204},
  [34] = {.lex_state = 204},
  [35] = {.lex_state = 204},
  [36] = {.lex_state = 204},
  [37] = {.lex_state = 204},
  [38] = {.lex_state = 204},
  [39] = {.lex_state = 204},
  [40] = {.lex_state = 204},
  [41] = {.lex_state = 204},
  [42] = {.lex_state = 204},
  [43] = {.lex_state = 204},
  [44] = {.lex_state = 204},
  [45] = {.lex_state = 204},
  [46] = {.lex_state = 204},
  [47] = {.lex_state = 204},
  [48] = {.lex_state = 204},
  [49] = {.lex_state = 204},
  [50] = {.lex_state = 204},
  [51] = {.lex_state = 204},
  [52] = {.lex_state = 204},
  [53] = {.lex_state = 204},
  [54] = {.lex_state = 204},
  [55] = {.lex_state = 204},
  [56] = {.lex_state = 204},
  [57] = {.lex_state = 204},
  [58] = {.lex_state = 204},
  [59] = {.lex_state = 204},
  [60] = {.lex_state = 204},
  [61] = {.lex_state = 204},
  [62] = {.lex_state = 204},
  [63] = {.lex_state = 204},
  [64] = {.lex_state = 204},
  [65] = {.lex_state = 204},
  [66] = {.lex_state = 204},
  [67] = {.lex_state = 204},
  [68] = {.lex_state = 204},
  [69] = {.lex_state = 204},
  [70] = {.lex_state = 204},
  [71] = {.lex_state = 204},
  [72] = {.lex_state = 204},
  [73] = {.lex_state = 204},
  [74] = {.lex_state = 204},
  [75] = {.lex_state = 204},
  [76] = {.lex_state = 204},
  [77] = {.lex_state = 204},
  [78] = {.lex_state = 204},
  [79] = {.lex_state = 204},
  [80] = {.lex_state = 204},
  [81] = {.lex_state = 204},
  [82] = {.lex_state = 204},
  [83] = {.lex_state = 204},
  [84] = {.lex_state = 204},
  [85] = {.lex_state = 204},
  [86] = {.lex_state = 204},
  [87] = {.lex_state = 204},
  [88] = {.lex_state = 204},
  [89] = {.lex_state = 204},
  [90] = {.lex_state = 204},
  [91] = {.lex_state = 204},
  [92] = {.lex_state = 204},
  [93] = {.lex_state = 204},
  [94] = {.lex_state = 19},
  [95] = {.lex_state = 19},
  [96] = {.lex_state = 19},
  [97] = {.lex_state = 19},
  [98] = {.lex_state = 19},
  [99] = {.lex_state = 19},
  [100] = {.lex_state = 19},
  [101] = {.lex_state = 19},
  [102] = {.lex_state = 19},
  [103] = {.lex_state = 19},
  [104] = {.lex_state = 19},
  [105] = {.lex_state = 19},
  [106] = {.lex_state = 19},
  [107] = {.lex_state = 19},
  [108] = {.lex_state = 19},
  [109] = {.lex_state = 19},
  [110] = {.lex_state = 19},
  [111] = {.lex_state = 19},
  [112] = {.lex_state = 19},
  [113] = {.lex_state = 19},
  [114] = {.lex_state = 19},
  [115] = {.lex_state = 19},
  [116] = {.lex_state = 19},
  [117] = {.lex_state = 19},
  [118] = {.lex_state = 19},
  [119] = {.lex_state = 19},
  [120] = {.lex_state = 19},
  [121] = {.lex_state = 19},
  [122] = {.lex_state = 19},
  [123] = {.lex_state = 19},
  [124] = {.lex_state = 19},
  [125] = {.lex_state = 19},
  [126] = {.lex_state = 19},
  [127] = {.lex_state = 19},
  [128] = {.lex_state = 19},
  [129] = {.lex_state = 19},
  [130] = {.lex_state = 19},
  [131] = {.lex_state = 19},
  [132] = {.lex_state = 203},
  [133] = {.lex_state = 203},
  [134] = {.lex_state = 203},
  [135] = {.lex_state = 203},
  [136] = {.lex_state = 203},
  [137] = {.lex_state = 203},
  [138] = {.lex_state = 203},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 203},
  [145] = {.lex_state = 203},
  [146] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__intertoken_token1] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_POUND_PIPE] = ACTIONS(1),
    [aux_sym_block_comment_token1] = ACTIONS(1),
    [anon_sym_PIPE_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(146),
    [sym__token] = STATE(14),
    [sym__intertoken] = STATE(14),
    [sym_comment] = STATE(14),
    [sym_directive] = STATE(14),
    [sym_block_comment] = STATE(14),
    [sym__datum] = STATE(14),
    [sym_number] = STATE(14),
    [sym_string] = STATE(14),
    [sym_symbol] = STATE(14),
    [sym_list] = STATE(14),
    [sym_quote] = STATE(14),
    [sym_quasiquote] = STATE(14),
    [sym_syntax] = STATE(14),
    [sym_quasisyntax] = STATE(14),
    [sym_unquote] = STATE(14),
    [sym_unquote_splicing] = STATE(14),
    [sym_unsyntax] = STATE(14),
    [sym_unsyntax_splicing] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_byte_vector] = STATE(14),
    [aux_sym_program_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__intertoken_token1] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(5),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [2] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_number] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(47),
    [aux_sym__intertoken_token1] = ACTIONS(49),
    [aux_sym_comment_token1] = ACTIONS(52),
    [anon_sym_POUND_SEMI] = ACTIONS(55),
    [anon_sym_POUND_BANG] = ACTIONS(58),
    [anon_sym_POUND_PIPE] = ACTIONS(61),
    [sym_boolean] = ACTIONS(49),
    [aux_sym_number_token1] = ACTIONS(64),
    [sym_character] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [aux_sym_symbol_token1] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(76),
    [anon_sym_RBRACK] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(82),
    [anon_sym_BQUOTE] = ACTIONS(85),
    [anon_sym_POUND_SQUOTE] = ACTIONS(88),
    [anon_sym_POUND_BQUOTE] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(94),
    [anon_sym_COMMA_AT] = ACTIONS(97),
    [anon_sym_POUND_COMMA] = ACTIONS(100),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(103),
    [anon_sym_POUND_LPAREN] = ACTIONS(106),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(109),
  },
  [3] = {
    [sym__token] = STATE(16),
    [sym__intertoken] = STATE(16),
    [sym_comment] = STATE(16),
    [sym_directive] = STATE(16),
    [sym_block_comment] = STATE(16),
    [sym__datum] = STATE(16),
    [sym_number] = STATE(16),
    [sym_string] = STATE(16),
    [sym_symbol] = STATE(16),
    [sym_list] = STATE(16),
    [sym_quote] = STATE(16),
    [sym_quasiquote] = STATE(16),
    [sym_syntax] = STATE(16),
    [sym_quasisyntax] = STATE(16),
    [sym_unquote] = STATE(16),
    [sym_unquote_splicing] = STATE(16),
    [sym_unsyntax] = STATE(16),
    [sym_unsyntax_splicing] = STATE(16),
    [sym_vector] = STATE(16),
    [sym_byte_vector] = STATE(16),
    [aux_sym_program_repeat1] = STATE(16),
    [aux_sym__intertoken_token1] = ACTIONS(112),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(112),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(112),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(114),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [4] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_number] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__intertoken_token1] = ACTIONS(116),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(116),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(118),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [5] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_number] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__intertoken_token1] = ACTIONS(116),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(116),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(118),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [6] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_number] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__intertoken_token1] = ACTIONS(116),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(116),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [7] = {
    [sym__token] = STATE(12),
    [sym__intertoken] = STATE(12),
    [sym_comment] = STATE(12),
    [sym_directive] = STATE(12),
    [sym_block_comment] = STATE(12),
    [sym__datum] = STATE(12),
    [sym_number] = STATE(12),
    [sym_string] = STATE(12),
    [sym_symbol] = STATE(12),
    [sym_list] = STATE(12),
    [sym_quote] = STATE(12),
    [sym_quasiquote] = STATE(12),
    [sym_syntax] = STATE(12),
    [sym_quasisyntax] = STATE(12),
    [sym_unquote] = STATE(12),
    [sym_unquote_splicing] = STATE(12),
    [sym_unsyntax] = STATE(12),
    [sym_unsyntax_splicing] = STATE(12),
    [sym_vector] = STATE(12),
    [sym_byte_vector] = STATE(12),
    [aux_sym_program_repeat1] = STATE(12),
    [aux_sym__intertoken_token1] = ACTIONS(120),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(120),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(122),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [8] = {
    [sym__token] = STATE(23),
    [sym__intertoken] = STATE(23),
    [sym_comment] = STATE(23),
    [sym_directive] = STATE(23),
    [sym_block_comment] = STATE(23),
    [sym__datum] = STATE(23),
    [sym_number] = STATE(23),
    [sym_string] = STATE(23),
    [sym_symbol] = STATE(23),
    [sym_list] = STATE(23),
    [sym_quote] = STATE(23),
    [sym_quasiquote] = STATE(23),
    [sym_syntax] = STATE(23),
    [sym_quasisyntax] = STATE(23),
    [sym_unquote] = STATE(23),
    [sym_unquote_splicing] = STATE(23),
    [sym_unsyntax] = STATE(23),
    [sym_unsyntax_splicing] = STATE(23),
    [sym_vector] = STATE(23),
    [sym_byte_vector] = STATE(23),
    [aux_sym_program_repeat1] = STATE(23),
    [aux_sym__intertoken_token1] = ACTIONS(124),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(124),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(126),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [9] = {
    [sym__token] = STATE(18),
    [sym__intertoken] = STATE(18),
    [sym_comment] = STATE(18),
    [sym_directive] = STATE(18),
    [sym_block_comment] = STATE(18),
    [sym__datum] = STATE(18),
    [sym_number] = STATE(18),
    [sym_string] = STATE(18),
    [sym_symbol] = STATE(18),
    [sym_list] = STATE(18),
    [sym_quote] = STATE(18),
    [sym_quasiquote] = STATE(18),
    [sym_syntax] = STATE(18),
    [sym_quasisyntax] = STATE(18),
    [sym_unquote] = STATE(18),
    [sym_unquote_splicing] = STATE(18),
    [sym_unsyntax] = STATE(18),
    [sym_unsyntax_splicing] = STATE(18),
    [sym_vector] = STATE(18),
    [sym_byte_vector] = STATE(18),
    [aux_sym_program_repeat1] = STATE(18),
    [aux_sym__intertoken_token1] = ACTIONS(128),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(128),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(128),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(126),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [10] = {
    [sym__token] = STATE(22),
    [sym__intertoken] = STATE(22),
    [sym_comment] = STATE(22),
    [sym_directive] = STATE(22),
    [sym_block_comment] = STATE(22),
    [sym__datum] = STATE(22),
    [sym_number] = STATE(22),
    [sym_string] = STATE(22),
    [sym_symbol] = STATE(22),
    [sym_list] = STATE(22),
    [sym_quote] = STATE(22),
    [sym_quasiquote] = STATE(22),
    [sym_syntax] = STATE(22),
    [sym_quasisyntax] = STATE(22),
    [sym_unquote] = STATE(22),
    [sym_unquote_splicing] = STATE(22),
    [sym_unsyntax] = STATE(22),
    [sym_unsyntax_splicing] = STATE(22),
    [sym_vector] = STATE(22),
    [sym_byte_vector] = STATE(22),
    [aux_sym_program_repeat1] = STATE(22),
    [aux_sym__intertoken_token1] = ACTIONS(130),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(130),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(130),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(126),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [11] = {
    [sym__token] = STATE(17),
    [sym__intertoken] = STATE(17),
    [sym_comment] = STATE(17),
    [sym_directive] = STATE(17),
    [sym_block_comment] = STATE(17),
    [sym__datum] = STATE(17),
    [sym_number] = STATE(17),
    [sym_string] = STATE(17),
    [sym_symbol] = STATE(17),
    [sym_list] = STATE(17),
    [sym_quote] = STATE(17),
    [sym_quasiquote] = STATE(17),
    [sym_syntax] = STATE(17),
    [sym_quasisyntax] = STATE(17),
    [sym_unquote] = STATE(17),
    [sym_unquote_splicing] = STATE(17),
    [sym_unsyntax] = STATE(17),
    [sym_unsyntax_splicing] = STATE(17),
    [sym_vector] = STATE(17),
    [sym_byte_vector] = STATE(17),
    [aux_sym_program_repeat1] = STATE(17),
    [aux_sym__intertoken_token1] = ACTIONS(132),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(132),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(132),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [12] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_number] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__intertoken_token1] = ACTIONS(116),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(116),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [13] = {
    [sym__token] = STATE(15),
    [sym__intertoken] = STATE(15),
    [sym_comment] = STATE(15),
    [sym_directive] = STATE(15),
    [sym_block_comment] = STATE(15),
    [sym__datum] = STATE(15),
    [sym_number] = STATE(15),
    [sym_string] = STATE(15),
    [sym_symbol] = STATE(15),
    [sym_list] = STATE(15),
    [sym_quote] = STATE(15),
    [sym_quasiquote] = STATE(15),
    [sym_syntax] = STATE(15),
    [sym_quasisyntax] = STATE(15),
    [sym_unquote] = STATE(15),
    [sym_unquote_splicing] = STATE(15),
    [sym_unsyntax] = STATE(15),
    [sym_unsyntax_splicing] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_byte_vector] = STATE(15),
    [aux_sym_program_repeat1] = STATE(15),
    [aux_sym__intertoken_token1] = ACTIONS(138),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(138),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(138),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(140),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [14] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_number] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(142),
    [aux_sym__intertoken_token1] = ACTIONS(116),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(116),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [15] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_number] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__intertoken_token1] = ACTIONS(116),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(116),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [16] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_number] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__intertoken_token1] = ACTIONS(116),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(116),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(146),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [17] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_number] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__intertoken_token1] = ACTIONS(116),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(116),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(148),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [18] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_number] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__intertoken_token1] = ACTIONS(116),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(116),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [19] = {
    [sym__token] = STATE(5),
    [sym__intertoken] = STATE(5),
    [sym_comment] = STATE(5),
    [sym_directive] = STATE(5),
    [sym_block_comment] = STATE(5),
    [sym__datum] = STATE(5),
    [sym_number] = STATE(5),
    [sym_string] = STATE(5),
    [sym_symbol] = STATE(5),
    [sym_list] = STATE(5),
    [sym_quote] = STATE(5),
    [sym_quasiquote] = STATE(5),
    [sym_syntax] = STATE(5),
    [sym_quasisyntax] = STATE(5),
    [sym_unquote] = STATE(5),
    [sym_unquote_splicing] = STATE(5),
    [sym_unsyntax] = STATE(5),
    [sym_unsyntax_splicing] = STATE(5),
    [sym_vector] = STATE(5),
    [sym_byte_vector] = STATE(5),
    [aux_sym_program_repeat1] = STATE(5),
    [aux_sym__intertoken_token1] = ACTIONS(152),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(152),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(152),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [20] = {
    [sym__token] = STATE(4),
    [sym__intertoken] = STATE(4),
    [sym_comment] = STATE(4),
    [sym_directive] = STATE(4),
    [sym_block_comment] = STATE(4),
    [sym__datum] = STATE(4),
    [sym_number] = STATE(4),
    [sym_string] = STATE(4),
    [sym_symbol] = STATE(4),
    [sym_list] = STATE(4),
    [sym_quote] = STATE(4),
    [sym_quasiquote] = STATE(4),
    [sym_syntax] = STATE(4),
    [sym_quasisyntax] = STATE(4),
    [sym_unquote] = STATE(4),
    [sym_unquote_splicing] = STATE(4),
    [sym_unsyntax] = STATE(4),
    [sym_unsyntax_splicing] = STATE(4),
    [sym_vector] = STATE(4),
    [sym_byte_vector] = STATE(4),
    [aux_sym_program_repeat1] = STATE(4),
    [aux_sym__intertoken_token1] = ACTIONS(156),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(156),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(156),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(154),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [21] = {
    [sym__token] = STATE(6),
    [sym__intertoken] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_directive] = STATE(6),
    [sym_block_comment] = STATE(6),
    [sym__datum] = STATE(6),
    [sym_number] = STATE(6),
    [sym_string] = STATE(6),
    [sym_symbol] = STATE(6),
    [sym_list] = STATE(6),
    [sym_quote] = STATE(6),
    [sym_quasiquote] = STATE(6),
    [sym_syntax] = STATE(6),
    [sym_quasisyntax] = STATE(6),
    [sym_unquote] = STATE(6),
    [sym_unquote_splicing] = STATE(6),
    [sym_unsyntax] = STATE(6),
    [sym_unsyntax_splicing] = STATE(6),
    [sym_vector] = STATE(6),
    [sym_byte_vector] = STATE(6),
    [aux_sym_program_repeat1] = STATE(6),
    [aux_sym__intertoken_token1] = ACTIONS(158),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(158),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(158),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(154),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [22] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_number] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__intertoken_token1] = ACTIONS(116),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(116),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(150),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [23] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_number] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__intertoken_token1] = ACTIONS(116),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(116),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(150),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [24] = {
    [sym__intertoken] = STATE(60),
    [sym_comment] = STATE(60),
    [sym_directive] = STATE(60),
    [sym_block_comment] = STATE(60),
    [sym__datum] = STATE(123),
    [sym_number] = STATE(123),
    [sym_string] = STATE(123),
    [sym_symbol] = STATE(123),
    [sym_list] = STATE(123),
    [sym_quote] = STATE(123),
    [sym_quasiquote] = STATE(123),
    [sym_syntax] = STATE(123),
    [sym_quasisyntax] = STATE(123),
    [sym_unquote] = STATE(123),
    [sym_unquote_splicing] = STATE(123),
    [sym_unsyntax] = STATE(123),
    [sym_unsyntax_splicing] = STATE(123),
    [sym_vector] = STATE(123),
    [sym_byte_vector] = STATE(123),
    [aux_sym_comment_repeat1] = STATE(60),
    [aux_sym__intertoken_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(162),
    [aux_sym_number_token1] = ACTIONS(164),
    [sym_character] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [aux_sym_symbol_token1] = ACTIONS(168),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [anon_sym_BQUOTE] = ACTIONS(178),
    [anon_sym_POUND_SQUOTE] = ACTIONS(180),
    [anon_sym_POUND_BQUOTE] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_COMMA_AT] = ACTIONS(186),
    [anon_sym_POUND_COMMA] = ACTIONS(188),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(190),
    [anon_sym_POUND_LPAREN] = ACTIONS(192),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(194),
  },
  [25] = {
    [sym__intertoken] = STATE(60),
    [sym_comment] = STATE(60),
    [sym_directive] = STATE(60),
    [sym_block_comment] = STATE(60),
    [sym__datum] = STATE(69),
    [sym_number] = STATE(69),
    [sym_string] = STATE(69),
    [sym_symbol] = STATE(69),
    [sym_list] = STATE(69),
    [sym_quote] = STATE(69),
    [sym_quasiquote] = STATE(69),
    [sym_syntax] = STATE(69),
    [sym_quasisyntax] = STATE(69),
    [sym_unquote] = STATE(69),
    [sym_unquote_splicing] = STATE(69),
    [sym_unsyntax] = STATE(69),
    [sym_unsyntax_splicing] = STATE(69),
    [sym_vector] = STATE(69),
    [sym_byte_vector] = STATE(69),
    [aux_sym_comment_repeat1] = STATE(60),
    [aux_sym__intertoken_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(196),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(196),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [26] = {
    [sym__intertoken] = STATE(25),
    [sym_comment] = STATE(25),
    [sym_directive] = STATE(25),
    [sym_block_comment] = STATE(25),
    [sym__datum] = STATE(89),
    [sym_number] = STATE(89),
    [sym_string] = STATE(89),
    [sym_symbol] = STATE(89),
    [sym_list] = STATE(89),
    [sym_quote] = STATE(89),
    [sym_quasiquote] = STATE(89),
    [sym_syntax] = STATE(89),
    [sym_quasisyntax] = STATE(89),
    [sym_unquote] = STATE(89),
    [sym_unquote_splicing] = STATE(89),
    [sym_unsyntax] = STATE(89),
    [sym_unsyntax_splicing] = STATE(89),
    [sym_vector] = STATE(89),
    [sym_byte_vector] = STATE(89),
    [aux_sym_comment_repeat1] = STATE(25),
    [aux_sym__intertoken_token1] = ACTIONS(198),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(200),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(200),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [27] = {
    [sym__intertoken] = STATE(45),
    [sym_comment] = STATE(45),
    [sym_directive] = STATE(45),
    [sym_block_comment] = STATE(45),
    [sym__datum] = STATE(92),
    [sym_number] = STATE(92),
    [sym_string] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_list] = STATE(92),
    [sym_quote] = STATE(92),
    [sym_quasiquote] = STATE(92),
    [sym_syntax] = STATE(92),
    [sym_quasisyntax] = STATE(92),
    [sym_unquote] = STATE(92),
    [sym_unquote_splicing] = STATE(92),
    [sym_unsyntax] = STATE(92),
    [sym_unsyntax_splicing] = STATE(92),
    [sym_vector] = STATE(92),
    [sym_byte_vector] = STATE(92),
    [aux_sym_comment_repeat1] = STATE(45),
    [aux_sym__intertoken_token1] = ACTIONS(202),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(204),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(204),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [28] = {
    [sym__intertoken] = STATE(47),
    [sym_comment] = STATE(47),
    [sym_directive] = STATE(47),
    [sym_block_comment] = STATE(47),
    [sym__datum] = STATE(87),
    [sym_number] = STATE(87),
    [sym_string] = STATE(87),
    [sym_symbol] = STATE(87),
    [sym_list] = STATE(87),
    [sym_quote] = STATE(87),
    [sym_quasiquote] = STATE(87),
    [sym_syntax] = STATE(87),
    [sym_quasisyntax] = STATE(87),
    [sym_unquote] = STATE(87),
    [sym_unquote_splicing] = STATE(87),
    [sym_unsyntax] = STATE(87),
    [sym_unsyntax_splicing] = STATE(87),
    [sym_vector] = STATE(87),
    [sym_byte_vector] = STATE(87),
    [aux_sym_comment_repeat1] = STATE(47),
    [aux_sym__intertoken_token1] = ACTIONS(206),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(208),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [29] = {
    [sym__intertoken] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_directive] = STATE(49),
    [sym_block_comment] = STATE(49),
    [sym__datum] = STATE(85),
    [sym_number] = STATE(85),
    [sym_string] = STATE(85),
    [sym_symbol] = STATE(85),
    [sym_list] = STATE(85),
    [sym_quote] = STATE(85),
    [sym_quasiquote] = STATE(85),
    [sym_syntax] = STATE(85),
    [sym_quasisyntax] = STATE(85),
    [sym_unquote] = STATE(85),
    [sym_unquote_splicing] = STATE(85),
    [sym_unsyntax] = STATE(85),
    [sym_unsyntax_splicing] = STATE(85),
    [sym_vector] = STATE(85),
    [sym_byte_vector] = STATE(85),
    [aux_sym_comment_repeat1] = STATE(49),
    [aux_sym__intertoken_token1] = ACTIONS(210),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(212),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(212),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [30] = {
    [sym__intertoken] = STATE(51),
    [sym_comment] = STATE(51),
    [sym_directive] = STATE(51),
    [sym_block_comment] = STATE(51),
    [sym__datum] = STATE(84),
    [sym_number] = STATE(84),
    [sym_string] = STATE(84),
    [sym_symbol] = STATE(84),
    [sym_list] = STATE(84),
    [sym_quote] = STATE(84),
    [sym_quasiquote] = STATE(84),
    [sym_syntax] = STATE(84),
    [sym_quasisyntax] = STATE(84),
    [sym_unquote] = STATE(84),
    [sym_unquote_splicing] = STATE(84),
    [sym_unsyntax] = STATE(84),
    [sym_unsyntax_splicing] = STATE(84),
    [sym_vector] = STATE(84),
    [sym_byte_vector] = STATE(84),
    [aux_sym_comment_repeat1] = STATE(51),
    [aux_sym__intertoken_token1] = ACTIONS(214),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(216),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(216),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [31] = {
    [sym__intertoken] = STATE(60),
    [sym_comment] = STATE(60),
    [sym_directive] = STATE(60),
    [sym_block_comment] = STATE(60),
    [sym__datum] = STATE(81),
    [sym_number] = STATE(81),
    [sym_string] = STATE(81),
    [sym_symbol] = STATE(81),
    [sym_list] = STATE(81),
    [sym_quote] = STATE(81),
    [sym_quasiquote] = STATE(81),
    [sym_syntax] = STATE(81),
    [sym_quasisyntax] = STATE(81),
    [sym_unquote] = STATE(81),
    [sym_unquote_splicing] = STATE(81),
    [sym_unsyntax] = STATE(81),
    [sym_unsyntax_splicing] = STATE(81),
    [sym_vector] = STATE(81),
    [sym_byte_vector] = STATE(81),
    [aux_sym_comment_repeat1] = STATE(60),
    [aux_sym__intertoken_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(218),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(218),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [32] = {
    [sym__intertoken] = STATE(44),
    [sym_comment] = STATE(44),
    [sym_directive] = STATE(44),
    [sym_block_comment] = STATE(44),
    [sym__datum] = STATE(127),
    [sym_number] = STATE(127),
    [sym_string] = STATE(127),
    [sym_symbol] = STATE(127),
    [sym_list] = STATE(127),
    [sym_quote] = STATE(127),
    [sym_quasiquote] = STATE(127),
    [sym_syntax] = STATE(127),
    [sym_quasisyntax] = STATE(127),
    [sym_unquote] = STATE(127),
    [sym_unquote_splicing] = STATE(127),
    [sym_unsyntax] = STATE(127),
    [sym_unsyntax_splicing] = STATE(127),
    [sym_vector] = STATE(127),
    [sym_byte_vector] = STATE(127),
    [aux_sym_comment_repeat1] = STATE(44),
    [aux_sym__intertoken_token1] = ACTIONS(220),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(222),
    [aux_sym_number_token1] = ACTIONS(164),
    [sym_character] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [aux_sym_symbol_token1] = ACTIONS(168),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [anon_sym_BQUOTE] = ACTIONS(178),
    [anon_sym_POUND_SQUOTE] = ACTIONS(180),
    [anon_sym_POUND_BQUOTE] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_COMMA_AT] = ACTIONS(186),
    [anon_sym_POUND_COMMA] = ACTIONS(188),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(190),
    [anon_sym_POUND_LPAREN] = ACTIONS(192),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(194),
  },
  [33] = {
    [sym__intertoken] = STATE(60),
    [sym_comment] = STATE(60),
    [sym_directive] = STATE(60),
    [sym_block_comment] = STATE(60),
    [sym__datum] = STATE(124),
    [sym_number] = STATE(124),
    [sym_string] = STATE(124),
    [sym_symbol] = STATE(124),
    [sym_list] = STATE(124),
    [sym_quote] = STATE(124),
    [sym_quasiquote] = STATE(124),
    [sym_syntax] = STATE(124),
    [sym_quasisyntax] = STATE(124),
    [sym_unquote] = STATE(124),
    [sym_unquote_splicing] = STATE(124),
    [sym_unsyntax] = STATE(124),
    [sym_unsyntax_splicing] = STATE(124),
    [sym_vector] = STATE(124),
    [sym_byte_vector] = STATE(124),
    [aux_sym_comment_repeat1] = STATE(60),
    [aux_sym__intertoken_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(224),
    [aux_sym_number_token1] = ACTIONS(164),
    [sym_character] = ACTIONS(224),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [aux_sym_symbol_token1] = ACTIONS(168),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [anon_sym_BQUOTE] = ACTIONS(178),
    [anon_sym_POUND_SQUOTE] = ACTIONS(180),
    [anon_sym_POUND_BQUOTE] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_COMMA_AT] = ACTIONS(186),
    [anon_sym_POUND_COMMA] = ACTIONS(188),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(190),
    [anon_sym_POUND_LPAREN] = ACTIONS(192),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(194),
  },
  [34] = {
    [sym__intertoken] = STATE(60),
    [sym_comment] = STATE(60),
    [sym_directive] = STATE(60),
    [sym_block_comment] = STATE(60),
    [sym__datum] = STATE(100),
    [sym_number] = STATE(100),
    [sym_string] = STATE(100),
    [sym_symbol] = STATE(100),
    [sym_list] = STATE(100),
    [sym_quote] = STATE(100),
    [sym_quasiquote] = STATE(100),
    [sym_syntax] = STATE(100),
    [sym_quasisyntax] = STATE(100),
    [sym_unquote] = STATE(100),
    [sym_unquote_splicing] = STATE(100),
    [sym_unsyntax] = STATE(100),
    [sym_unsyntax_splicing] = STATE(100),
    [sym_vector] = STATE(100),
    [sym_byte_vector] = STATE(100),
    [aux_sym_comment_repeat1] = STATE(60),
    [aux_sym__intertoken_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(226),
    [aux_sym_number_token1] = ACTIONS(164),
    [sym_character] = ACTIONS(226),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [aux_sym_symbol_token1] = ACTIONS(168),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [anon_sym_BQUOTE] = ACTIONS(178),
    [anon_sym_POUND_SQUOTE] = ACTIONS(180),
    [anon_sym_POUND_BQUOTE] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_COMMA_AT] = ACTIONS(186),
    [anon_sym_POUND_COMMA] = ACTIONS(188),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(190),
    [anon_sym_POUND_LPAREN] = ACTIONS(192),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(194),
  },
  [35] = {
    [sym__intertoken] = STATE(60),
    [sym_comment] = STATE(60),
    [sym_directive] = STATE(60),
    [sym_block_comment] = STATE(60),
    [sym__datum] = STATE(121),
    [sym_number] = STATE(121),
    [sym_string] = STATE(121),
    [sym_symbol] = STATE(121),
    [sym_list] = STATE(121),
    [sym_quote] = STATE(121),
    [sym_quasiquote] = STATE(121),
    [sym_syntax] = STATE(121),
    [sym_quasisyntax] = STATE(121),
    [sym_unquote] = STATE(121),
    [sym_unquote_splicing] = STATE(121),
    [sym_unsyntax] = STATE(121),
    [sym_unsyntax_splicing] = STATE(121),
    [sym_vector] = STATE(121),
    [sym_byte_vector] = STATE(121),
    [aux_sym_comment_repeat1] = STATE(60),
    [aux_sym__intertoken_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(228),
    [aux_sym_number_token1] = ACTIONS(164),
    [sym_character] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [aux_sym_symbol_token1] = ACTIONS(168),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [anon_sym_BQUOTE] = ACTIONS(178),
    [anon_sym_POUND_SQUOTE] = ACTIONS(180),
    [anon_sym_POUND_BQUOTE] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_COMMA_AT] = ACTIONS(186),
    [anon_sym_POUND_COMMA] = ACTIONS(188),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(190),
    [anon_sym_POUND_LPAREN] = ACTIONS(192),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(194),
  },
  [36] = {
    [sym__intertoken] = STATE(60),
    [sym_comment] = STATE(60),
    [sym_directive] = STATE(60),
    [sym_block_comment] = STATE(60),
    [sym__datum] = STATE(120),
    [sym_number] = STATE(120),
    [sym_string] = STATE(120),
    [sym_symbol] = STATE(120),
    [sym_list] = STATE(120),
    [sym_quote] = STATE(120),
    [sym_quasiquote] = STATE(120),
    [sym_syntax] = STATE(120),
    [sym_quasisyntax] = STATE(120),
    [sym_unquote] = STATE(120),
    [sym_unquote_splicing] = STATE(120),
    [sym_unsyntax] = STATE(120),
    [sym_unsyntax_splicing] = STATE(120),
    [sym_vector] = STATE(120),
    [sym_byte_vector] = STATE(120),
    [aux_sym_comment_repeat1] = STATE(60),
    [aux_sym__intertoken_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(230),
    [aux_sym_number_token1] = ACTIONS(164),
    [sym_character] = ACTIONS(230),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [aux_sym_symbol_token1] = ACTIONS(168),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [anon_sym_BQUOTE] = ACTIONS(178),
    [anon_sym_POUND_SQUOTE] = ACTIONS(180),
    [anon_sym_POUND_BQUOTE] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_COMMA_AT] = ACTIONS(186),
    [anon_sym_POUND_COMMA] = ACTIONS(188),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(190),
    [anon_sym_POUND_LPAREN] = ACTIONS(192),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(194),
  },
  [37] = {
    [sym__intertoken] = STATE(60),
    [sym_comment] = STATE(60),
    [sym_directive] = STATE(60),
    [sym_block_comment] = STATE(60),
    [sym__datum] = STATE(66),
    [sym_number] = STATE(66),
    [sym_string] = STATE(66),
    [sym_symbol] = STATE(66),
    [sym_list] = STATE(66),
    [sym_quote] = STATE(66),
    [sym_quasiquote] = STATE(66),
    [sym_syntax] = STATE(66),
    [sym_quasisyntax] = STATE(66),
    [sym_unquote] = STATE(66),
    [sym_unquote_splicing] = STATE(66),
    [sym_unsyntax] = STATE(66),
    [sym_unsyntax_splicing] = STATE(66),
    [sym_vector] = STATE(66),
    [sym_byte_vector] = STATE(66),
    [aux_sym_comment_repeat1] = STATE(60),
    [aux_sym__intertoken_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(232),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(232),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [38] = {
    [sym__intertoken] = STATE(60),
    [sym_comment] = STATE(60),
    [sym_directive] = STATE(60),
    [sym_block_comment] = STATE(60),
    [sym__datum] = STATE(119),
    [sym_number] = STATE(119),
    [sym_string] = STATE(119),
    [sym_symbol] = STATE(119),
    [sym_list] = STATE(119),
    [sym_quote] = STATE(119),
    [sym_quasiquote] = STATE(119),
    [sym_syntax] = STATE(119),
    [sym_quasisyntax] = STATE(119),
    [sym_unquote] = STATE(119),
    [sym_unquote_splicing] = STATE(119),
    [sym_unsyntax] = STATE(119),
    [sym_unsyntax_splicing] = STATE(119),
    [sym_vector] = STATE(119),
    [sym_byte_vector] = STATE(119),
    [aux_sym_comment_repeat1] = STATE(60),
    [aux_sym__intertoken_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(234),
    [aux_sym_number_token1] = ACTIONS(164),
    [sym_character] = ACTIONS(234),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [aux_sym_symbol_token1] = ACTIONS(168),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [anon_sym_BQUOTE] = ACTIONS(178),
    [anon_sym_POUND_SQUOTE] = ACTIONS(180),
    [anon_sym_POUND_BQUOTE] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_COMMA_AT] = ACTIONS(186),
    [anon_sym_POUND_COMMA] = ACTIONS(188),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(190),
    [anon_sym_POUND_LPAREN] = ACTIONS(192),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(194),
  },
  [39] = {
    [sym__intertoken] = STATE(60),
    [sym_comment] = STATE(60),
    [sym_directive] = STATE(60),
    [sym_block_comment] = STATE(60),
    [sym__datum] = STATE(67),
    [sym_number] = STATE(67),
    [sym_string] = STATE(67),
    [sym_symbol] = STATE(67),
    [sym_list] = STATE(67),
    [sym_quote] = STATE(67),
    [sym_quasiquote] = STATE(67),
    [sym_syntax] = STATE(67),
    [sym_quasisyntax] = STATE(67),
    [sym_unquote] = STATE(67),
    [sym_unquote_splicing] = STATE(67),
    [sym_unsyntax] = STATE(67),
    [sym_unsyntax_splicing] = STATE(67),
    [sym_vector] = STATE(67),
    [sym_byte_vector] = STATE(67),
    [aux_sym_comment_repeat1] = STATE(60),
    [aux_sym__intertoken_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(236),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(236),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [40] = {
    [sym__intertoken] = STATE(60),
    [sym_comment] = STATE(60),
    [sym_directive] = STATE(60),
    [sym_block_comment] = STATE(60),
    [sym__datum] = STATE(118),
    [sym_number] = STATE(118),
    [sym_string] = STATE(118),
    [sym_symbol] = STATE(118),
    [sym_list] = STATE(118),
    [sym_quote] = STATE(118),
    [sym_quasiquote] = STATE(118),
    [sym_syntax] = STATE(118),
    [sym_quasisyntax] = STATE(118),
    [sym_unquote] = STATE(118),
    [sym_unquote_splicing] = STATE(118),
    [sym_unsyntax] = STATE(118),
    [sym_unsyntax_splicing] = STATE(118),
    [sym_vector] = STATE(118),
    [sym_byte_vector] = STATE(118),
    [aux_sym_comment_repeat1] = STATE(60),
    [aux_sym__intertoken_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(238),
    [aux_sym_number_token1] = ACTIONS(164),
    [sym_character] = ACTIONS(238),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [aux_sym_symbol_token1] = ACTIONS(168),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [anon_sym_BQUOTE] = ACTIONS(178),
    [anon_sym_POUND_SQUOTE] = ACTIONS(180),
    [anon_sym_POUND_BQUOTE] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_COMMA_AT] = ACTIONS(186),
    [anon_sym_POUND_COMMA] = ACTIONS(188),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(190),
    [anon_sym_POUND_LPAREN] = ACTIONS(192),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(194),
  },
  [41] = {
    [sym__intertoken] = STATE(60),
    [sym_comment] = STATE(60),
    [sym_directive] = STATE(60),
    [sym_block_comment] = STATE(60),
    [sym__datum] = STATE(68),
    [sym_number] = STATE(68),
    [sym_string] = STATE(68),
    [sym_symbol] = STATE(68),
    [sym_list] = STATE(68),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym_vector] = STATE(68),
    [sym_byte_vector] = STATE(68),
    [aux_sym_comment_repeat1] = STATE(60),
    [aux_sym__intertoken_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(240),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(240),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [42] = {
    [sym__intertoken] = STATE(60),
    [sym_comment] = STATE(60),
    [sym_directive] = STATE(60),
    [sym_block_comment] = STATE(60),
    [sym__datum] = STATE(117),
    [sym_number] = STATE(117),
    [sym_string] = STATE(117),
    [sym_symbol] = STATE(117),
    [sym_list] = STATE(117),
    [sym_quote] = STATE(117),
    [sym_quasiquote] = STATE(117),
    [sym_syntax] = STATE(117),
    [sym_quasisyntax] = STATE(117),
    [sym_unquote] = STATE(117),
    [sym_unquote_splicing] = STATE(117),
    [sym_unsyntax] = STATE(117),
    [sym_unsyntax_splicing] = STATE(117),
    [sym_vector] = STATE(117),
    [sym_byte_vector] = STATE(117),
    [aux_sym_comment_repeat1] = STATE(60),
    [aux_sym__intertoken_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(242),
    [aux_sym_number_token1] = ACTIONS(164),
    [sym_character] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [aux_sym_symbol_token1] = ACTIONS(168),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [anon_sym_BQUOTE] = ACTIONS(178),
    [anon_sym_POUND_SQUOTE] = ACTIONS(180),
    [anon_sym_POUND_BQUOTE] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_COMMA_AT] = ACTIONS(186),
    [anon_sym_POUND_COMMA] = ACTIONS(188),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(190),
    [anon_sym_POUND_LPAREN] = ACTIONS(192),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(194),
  },
  [43] = {
    [sym__intertoken] = STATE(41),
    [sym_comment] = STATE(41),
    [sym_directive] = STATE(41),
    [sym_block_comment] = STATE(41),
    [sym__datum] = STATE(64),
    [sym_number] = STATE(64),
    [sym_string] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_list] = STATE(64),
    [sym_quote] = STATE(64),
    [sym_quasiquote] = STATE(64),
    [sym_syntax] = STATE(64),
    [sym_quasisyntax] = STATE(64),
    [sym_unquote] = STATE(64),
    [sym_unquote_splicing] = STATE(64),
    [sym_unsyntax] = STATE(64),
    [sym_unsyntax_splicing] = STATE(64),
    [sym_vector] = STATE(64),
    [sym_byte_vector] = STATE(64),
    [aux_sym_comment_repeat1] = STATE(41),
    [aux_sym__intertoken_token1] = ACTIONS(244),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(246),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(246),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [44] = {
    [sym__intertoken] = STATE(60),
    [sym_comment] = STATE(60),
    [sym_directive] = STATE(60),
    [sym_block_comment] = STATE(60),
    [sym__datum] = STATE(111),
    [sym_number] = STATE(111),
    [sym_string] = STATE(111),
    [sym_symbol] = STATE(111),
    [sym_list] = STATE(111),
    [sym_quote] = STATE(111),
    [sym_quasiquote] = STATE(111),
    [sym_syntax] = STATE(111),
    [sym_quasisyntax] = STATE(111),
    [sym_unquote] = STATE(111),
    [sym_unquote_splicing] = STATE(111),
    [sym_unsyntax] = STATE(111),
    [sym_unsyntax_splicing] = STATE(111),
    [sym_vector] = STATE(111),
    [sym_byte_vector] = STATE(111),
    [aux_sym_comment_repeat1] = STATE(60),
    [aux_sym__intertoken_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(248),
    [aux_sym_number_token1] = ACTIONS(164),
    [sym_character] = ACTIONS(248),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [aux_sym_symbol_token1] = ACTIONS(168),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [anon_sym_BQUOTE] = ACTIONS(178),
    [anon_sym_POUND_SQUOTE] = ACTIONS(180),
    [anon_sym_POUND_BQUOTE] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_COMMA_AT] = ACTIONS(186),
    [anon_sym_POUND_COMMA] = ACTIONS(188),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(190),
    [anon_sym_POUND_LPAREN] = ACTIONS(192),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(194),
  },
  [45] = {
    [sym__intertoken] = STATE(60),
    [sym_comment] = STATE(60),
    [sym_directive] = STATE(60),
    [sym_block_comment] = STATE(60),
    [sym__datum] = STATE(70),
    [sym_number] = STATE(70),
    [sym_string] = STATE(70),
    [sym_symbol] = STATE(70),
    [sym_list] = STATE(70),
    [sym_quote] = STATE(70),
    [sym_quasiquote] = STATE(70),
    [sym_syntax] = STATE(70),
    [sym_quasisyntax] = STATE(70),
    [sym_unquote] = STATE(70),
    [sym_unquote_splicing] = STATE(70),
    [sym_unsyntax] = STATE(70),
    [sym_unsyntax_splicing] = STATE(70),
    [sym_vector] = STATE(70),
    [sym_byte_vector] = STATE(70),
    [aux_sym_comment_repeat1] = STATE(60),
    [aux_sym__intertoken_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(250),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(250),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [46] = {
    [sym__intertoken] = STATE(33),
    [sym_comment] = STATE(33),
    [sym_directive] = STATE(33),
    [sym_block_comment] = STATE(33),
    [sym__datum] = STATE(107),
    [sym_number] = STATE(107),
    [sym_string] = STATE(107),
    [sym_symbol] = STATE(107),
    [sym_list] = STATE(107),
    [sym_quote] = STATE(107),
    [sym_quasiquote] = STATE(107),
    [sym_syntax] = STATE(107),
    [sym_quasisyntax] = STATE(107),
    [sym_unquote] = STATE(107),
    [sym_unquote_splicing] = STATE(107),
    [sym_unsyntax] = STATE(107),
    [sym_unsyntax_splicing] = STATE(107),
    [sym_vector] = STATE(107),
    [sym_byte_vector] = STATE(107),
    [aux_sym_comment_repeat1] = STATE(33),
    [aux_sym__intertoken_token1] = ACTIONS(252),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(254),
    [aux_sym_number_token1] = ACTIONS(164),
    [sym_character] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [aux_sym_symbol_token1] = ACTIONS(168),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [anon_sym_BQUOTE] = ACTIONS(178),
    [anon_sym_POUND_SQUOTE] = ACTIONS(180),
    [anon_sym_POUND_BQUOTE] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_COMMA_AT] = ACTIONS(186),
    [anon_sym_POUND_COMMA] = ACTIONS(188),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(190),
    [anon_sym_POUND_LPAREN] = ACTIONS(192),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(194),
  },
  [47] = {
    [sym__intertoken] = STATE(60),
    [sym_comment] = STATE(60),
    [sym_directive] = STATE(60),
    [sym_block_comment] = STATE(60),
    [sym__datum] = STATE(71),
    [sym_number] = STATE(71),
    [sym_string] = STATE(71),
    [sym_symbol] = STATE(71),
    [sym_list] = STATE(71),
    [sym_quote] = STATE(71),
    [sym_quasiquote] = STATE(71),
    [sym_syntax] = STATE(71),
    [sym_quasisyntax] = STATE(71),
    [sym_unquote] = STATE(71),
    [sym_unquote_splicing] = STATE(71),
    [sym_unsyntax] = STATE(71),
    [sym_unsyntax_splicing] = STATE(71),
    [sym_vector] = STATE(71),
    [sym_byte_vector] = STATE(71),
    [aux_sym_comment_repeat1] = STATE(60),
    [aux_sym__intertoken_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(256),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(256),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [48] = {
    [sym__intertoken] = STATE(24),
    [sym_comment] = STATE(24),
    [sym_directive] = STATE(24),
    [sym_block_comment] = STATE(24),
    [sym__datum] = STATE(105),
    [sym_number] = STATE(105),
    [sym_string] = STATE(105),
    [sym_symbol] = STATE(105),
    [sym_list] = STATE(105),
    [sym_quote] = STATE(105),
    [sym_quasiquote] = STATE(105),
    [sym_syntax] = STATE(105),
    [sym_quasisyntax] = STATE(105),
    [sym_unquote] = STATE(105),
    [sym_unquote_splicing] = STATE(105),
    [sym_unsyntax] = STATE(105),
    [sym_unsyntax_splicing] = STATE(105),
    [sym_vector] = STATE(105),
    [sym_byte_vector] = STATE(105),
    [aux_sym_comment_repeat1] = STATE(24),
    [aux_sym__intertoken_token1] = ACTIONS(258),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(260),
    [aux_sym_number_token1] = ACTIONS(164),
    [sym_character] = ACTIONS(260),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [aux_sym_symbol_token1] = ACTIONS(168),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [anon_sym_BQUOTE] = ACTIONS(178),
    [anon_sym_POUND_SQUOTE] = ACTIONS(180),
    [anon_sym_POUND_BQUOTE] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_COMMA_AT] = ACTIONS(186),
    [anon_sym_POUND_COMMA] = ACTIONS(188),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(190),
    [anon_sym_POUND_LPAREN] = ACTIONS(192),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(194),
  },
  [49] = {
    [sym__intertoken] = STATE(60),
    [sym_comment] = STATE(60),
    [sym_directive] = STATE(60),
    [sym_block_comment] = STATE(60),
    [sym__datum] = STATE(72),
    [sym_number] = STATE(72),
    [sym_string] = STATE(72),
    [sym_symbol] = STATE(72),
    [sym_list] = STATE(72),
    [sym_quote] = STATE(72),
    [sym_quasiquote] = STATE(72),
    [sym_syntax] = STATE(72),
    [sym_quasisyntax] = STATE(72),
    [sym_unquote] = STATE(72),
    [sym_unquote_splicing] = STATE(72),
    [sym_unsyntax] = STATE(72),
    [sym_unsyntax_splicing] = STATE(72),
    [sym_vector] = STATE(72),
    [sym_byte_vector] = STATE(72),
    [aux_sym_comment_repeat1] = STATE(60),
    [aux_sym__intertoken_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(262),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(262),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [50] = {
    [sym__intertoken] = STATE(34),
    [sym_comment] = STATE(34),
    [sym_directive] = STATE(34),
    [sym_block_comment] = STATE(34),
    [sym__datum] = STATE(99),
    [sym_number] = STATE(99),
    [sym_string] = STATE(99),
    [sym_symbol] = STATE(99),
    [sym_list] = STATE(99),
    [sym_quote] = STATE(99),
    [sym_quasiquote] = STATE(99),
    [sym_syntax] = STATE(99),
    [sym_quasisyntax] = STATE(99),
    [sym_unquote] = STATE(99),
    [sym_unquote_splicing] = STATE(99),
    [sym_unsyntax] = STATE(99),
    [sym_unsyntax_splicing] = STATE(99),
    [sym_vector] = STATE(99),
    [sym_byte_vector] = STATE(99),
    [aux_sym_comment_repeat1] = STATE(34),
    [aux_sym__intertoken_token1] = ACTIONS(264),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(266),
    [aux_sym_number_token1] = ACTIONS(164),
    [sym_character] = ACTIONS(266),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [aux_sym_symbol_token1] = ACTIONS(168),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [anon_sym_BQUOTE] = ACTIONS(178),
    [anon_sym_POUND_SQUOTE] = ACTIONS(180),
    [anon_sym_POUND_BQUOTE] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_COMMA_AT] = ACTIONS(186),
    [anon_sym_POUND_COMMA] = ACTIONS(188),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(190),
    [anon_sym_POUND_LPAREN] = ACTIONS(192),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(194),
  },
  [51] = {
    [sym__intertoken] = STATE(60),
    [sym_comment] = STATE(60),
    [sym_directive] = STATE(60),
    [sym_block_comment] = STATE(60),
    [sym__datum] = STATE(61),
    [sym_number] = STATE(61),
    [sym_string] = STATE(61),
    [sym_symbol] = STATE(61),
    [sym_list] = STATE(61),
    [sym_quote] = STATE(61),
    [sym_quasiquote] = STATE(61),
    [sym_syntax] = STATE(61),
    [sym_quasisyntax] = STATE(61),
    [sym_unquote] = STATE(61),
    [sym_unquote_splicing] = STATE(61),
    [sym_unsyntax] = STATE(61),
    [sym_unsyntax_splicing] = STATE(61),
    [sym_vector] = STATE(61),
    [sym_byte_vector] = STATE(61),
    [aux_sym_comment_repeat1] = STATE(60),
    [aux_sym__intertoken_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(268),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(268),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [52] = {
    [sym__intertoken] = STATE(35),
    [sym_comment] = STATE(35),
    [sym_directive] = STATE(35),
    [sym_block_comment] = STATE(35),
    [sym__datum] = STATE(102),
    [sym_number] = STATE(102),
    [sym_string] = STATE(102),
    [sym_symbol] = STATE(102),
    [sym_list] = STATE(102),
    [sym_quote] = STATE(102),
    [sym_quasiquote] = STATE(102),
    [sym_syntax] = STATE(102),
    [sym_quasisyntax] = STATE(102),
    [sym_unquote] = STATE(102),
    [sym_unquote_splicing] = STATE(102),
    [sym_unsyntax] = STATE(102),
    [sym_unsyntax_splicing] = STATE(102),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [aux_sym_comment_repeat1] = STATE(35),
    [aux_sym__intertoken_token1] = ACTIONS(270),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(272),
    [aux_sym_number_token1] = ACTIONS(164),
    [sym_character] = ACTIONS(272),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [aux_sym_symbol_token1] = ACTIONS(168),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [anon_sym_BQUOTE] = ACTIONS(178),
    [anon_sym_POUND_SQUOTE] = ACTIONS(180),
    [anon_sym_POUND_BQUOTE] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_COMMA_AT] = ACTIONS(186),
    [anon_sym_POUND_COMMA] = ACTIONS(188),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(190),
    [anon_sym_POUND_LPAREN] = ACTIONS(192),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(194),
  },
  [53] = {
    [sym__intertoken] = STATE(31),
    [sym_comment] = STATE(31),
    [sym_directive] = STATE(31),
    [sym_block_comment] = STATE(31),
    [sym__datum] = STATE(77),
    [sym_number] = STATE(77),
    [sym_string] = STATE(77),
    [sym_symbol] = STATE(77),
    [sym_list] = STATE(77),
    [sym_quote] = STATE(77),
    [sym_quasiquote] = STATE(77),
    [sym_syntax] = STATE(77),
    [sym_quasisyntax] = STATE(77),
    [sym_unquote] = STATE(77),
    [sym_unquote_splicing] = STATE(77),
    [sym_unsyntax] = STATE(77),
    [sym_unsyntax_splicing] = STATE(77),
    [sym_vector] = STATE(77),
    [sym_byte_vector] = STATE(77),
    [aux_sym_comment_repeat1] = STATE(31),
    [aux_sym__intertoken_token1] = ACTIONS(274),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(276),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(276),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [54] = {
    [sym__intertoken] = STATE(36),
    [sym_comment] = STATE(36),
    [sym_directive] = STATE(36),
    [sym_block_comment] = STATE(36),
    [sym__datum] = STATE(101),
    [sym_number] = STATE(101),
    [sym_string] = STATE(101),
    [sym_symbol] = STATE(101),
    [sym_list] = STATE(101),
    [sym_quote] = STATE(101),
    [sym_quasiquote] = STATE(101),
    [sym_syntax] = STATE(101),
    [sym_quasisyntax] = STATE(101),
    [sym_unquote] = STATE(101),
    [sym_unquote_splicing] = STATE(101),
    [sym_unsyntax] = STATE(101),
    [sym_unsyntax_splicing] = STATE(101),
    [sym_vector] = STATE(101),
    [sym_byte_vector] = STATE(101),
    [aux_sym_comment_repeat1] = STATE(36),
    [aux_sym__intertoken_token1] = ACTIONS(278),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(280),
    [aux_sym_number_token1] = ACTIONS(164),
    [sym_character] = ACTIONS(280),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [aux_sym_symbol_token1] = ACTIONS(168),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [anon_sym_BQUOTE] = ACTIONS(178),
    [anon_sym_POUND_SQUOTE] = ACTIONS(180),
    [anon_sym_POUND_BQUOTE] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_COMMA_AT] = ACTIONS(186),
    [anon_sym_POUND_COMMA] = ACTIONS(188),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(190),
    [anon_sym_POUND_LPAREN] = ACTIONS(192),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(194),
  },
  [55] = {
    [sym__intertoken] = STATE(39),
    [sym_comment] = STATE(39),
    [sym_directive] = STATE(39),
    [sym_block_comment] = STATE(39),
    [sym__datum] = STATE(88),
    [sym_number] = STATE(88),
    [sym_string] = STATE(88),
    [sym_symbol] = STATE(88),
    [sym_list] = STATE(88),
    [sym_quote] = STATE(88),
    [sym_quasiquote] = STATE(88),
    [sym_syntax] = STATE(88),
    [sym_quasisyntax] = STATE(88),
    [sym_unquote] = STATE(88),
    [sym_unquote_splicing] = STATE(88),
    [sym_unsyntax] = STATE(88),
    [sym_unsyntax_splicing] = STATE(88),
    [sym_vector] = STATE(88),
    [sym_byte_vector] = STATE(88),
    [aux_sym_comment_repeat1] = STATE(39),
    [aux_sym__intertoken_token1] = ACTIONS(282),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(284),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(284),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [56] = {
    [sym__intertoken] = STATE(37),
    [sym_comment] = STATE(37),
    [sym_directive] = STATE(37),
    [sym_block_comment] = STATE(37),
    [sym__datum] = STATE(80),
    [sym_number] = STATE(80),
    [sym_string] = STATE(80),
    [sym_symbol] = STATE(80),
    [sym_list] = STATE(80),
    [sym_quote] = STATE(80),
    [sym_quasiquote] = STATE(80),
    [sym_syntax] = STATE(80),
    [sym_quasisyntax] = STATE(80),
    [sym_unquote] = STATE(80),
    [sym_unquote_splicing] = STATE(80),
    [sym_unsyntax] = STATE(80),
    [sym_unsyntax_splicing] = STATE(80),
    [sym_vector] = STATE(80),
    [sym_byte_vector] = STATE(80),
    [aux_sym_comment_repeat1] = STATE(37),
    [aux_sym__intertoken_token1] = ACTIONS(286),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(288),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(288),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COMMA_AT] = ACTIONS(37),
    [anon_sym_POUND_COMMA] = ACTIONS(39),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(45),
  },
  [57] = {
    [sym__intertoken] = STATE(38),
    [sym_comment] = STATE(38),
    [sym_directive] = STATE(38),
    [sym_block_comment] = STATE(38),
    [sym__datum] = STATE(122),
    [sym_number] = STATE(122),
    [sym_string] = STATE(122),
    [sym_symbol] = STATE(122),
    [sym_list] = STATE(122),
    [sym_quote] = STATE(122),
    [sym_quasiquote] = STATE(122),
    [sym_syntax] = STATE(122),
    [sym_quasisyntax] = STATE(122),
    [sym_unquote] = STATE(122),
    [sym_unquote_splicing] = STATE(122),
    [sym_unsyntax] = STATE(122),
    [sym_unsyntax_splicing] = STATE(122),
    [sym_vector] = STATE(122),
    [sym_byte_vector] = STATE(122),
    [aux_sym_comment_repeat1] = STATE(38),
    [aux_sym__intertoken_token1] = ACTIONS(290),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(292),
    [aux_sym_number_token1] = ACTIONS(164),
    [sym_character] = ACTIONS(292),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [aux_sym_symbol_token1] = ACTIONS(168),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [anon_sym_BQUOTE] = ACTIONS(178),
    [anon_sym_POUND_SQUOTE] = ACTIONS(180),
    [anon_sym_POUND_BQUOTE] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_COMMA_AT] = ACTIONS(186),
    [anon_sym_POUND_COMMA] = ACTIONS(188),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(190),
    [anon_sym_POUND_LPAREN] = ACTIONS(192),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(194),
  },
  [58] = {
    [sym__intertoken] = STATE(42),
    [sym_comment] = STATE(42),
    [sym_directive] = STATE(42),
    [sym_block_comment] = STATE(42),
    [sym__datum] = STATE(112),
    [sym_number] = STATE(112),
    [sym_string] = STATE(112),
    [sym_symbol] = STATE(112),
    [sym_list] = STATE(112),
    [sym_quote] = STATE(112),
    [sym_quasiquote] = STATE(112),
    [sym_syntax] = STATE(112),
    [sym_quasisyntax] = STATE(112),
    [sym_unquote] = STATE(112),
    [sym_unquote_splicing] = STATE(112),
    [sym_unsyntax] = STATE(112),
    [sym_unsyntax_splicing] = STATE(112),
    [sym_vector] = STATE(112),
    [sym_byte_vector] = STATE(112),
    [aux_sym_comment_repeat1] = STATE(42),
    [aux_sym__intertoken_token1] = ACTIONS(294),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(296),
    [aux_sym_number_token1] = ACTIONS(164),
    [sym_character] = ACTIONS(296),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [aux_sym_symbol_token1] = ACTIONS(168),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [anon_sym_BQUOTE] = ACTIONS(178),
    [anon_sym_POUND_SQUOTE] = ACTIONS(180),
    [anon_sym_POUND_BQUOTE] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_COMMA_AT] = ACTIONS(186),
    [anon_sym_POUND_COMMA] = ACTIONS(188),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(190),
    [anon_sym_POUND_LPAREN] = ACTIONS(192),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(194),
  },
  [59] = {
    [sym__intertoken] = STATE(40),
    [sym_comment] = STATE(40),
    [sym_directive] = STATE(40),
    [sym_block_comment] = STATE(40),
    [sym__datum] = STATE(108),
    [sym_number] = STATE(108),
    [sym_string] = STATE(108),
    [sym_symbol] = STATE(108),
    [sym_list] = STATE(108),
    [sym_quote] = STATE(108),
    [sym_quasiquote] = STATE(108),
    [sym_syntax] = STATE(108),
    [sym_quasisyntax] = STATE(108),
    [sym_unquote] = STATE(108),
    [sym_unquote_splicing] = STATE(108),
    [sym_unsyntax] = STATE(108),
    [sym_unsyntax_splicing] = STATE(108),
    [sym_vector] = STATE(108),
    [sym_byte_vector] = STATE(108),
    [aux_sym_comment_repeat1] = STATE(40),
    [aux_sym__intertoken_token1] = ACTIONS(298),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(300),
    [aux_sym_number_token1] = ACTIONS(164),
    [sym_character] = ACTIONS(300),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [aux_sym_symbol_token1] = ACTIONS(168),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [anon_sym_BQUOTE] = ACTIONS(178),
    [anon_sym_POUND_SQUOTE] = ACTIONS(180),
    [anon_sym_POUND_BQUOTE] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_COMMA_AT] = ACTIONS(186),
    [anon_sym_POUND_COMMA] = ACTIONS(188),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(190),
    [anon_sym_POUND_LPAREN] = ACTIONS(192),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(194),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(302), 1,
      aux_sym__intertoken_token1,
    ACTIONS(305), 1,
      aux_sym_comment_token1,
    ACTIONS(308), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(311), 1,
      anon_sym_POUND_BANG,
    ACTIONS(314), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(319), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    STATE(60), 5,
      sym__intertoken,
      sym_comment,
      sym_directive,
      sym_block_comment,
      aux_sym_comment_repeat1,
    ACTIONS(317), 14,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [45] = 2,
    ACTIONS(323), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(321), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [77] = 2,
    ACTIONS(327), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(325), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [109] = 2,
    ACTIONS(331), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(329), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [141] = 2,
    ACTIONS(335), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(333), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [173] = 2,
    ACTIONS(339), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(337), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [205] = 2,
    ACTIONS(343), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(341), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [237] = 2,
    ACTIONS(347), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(345), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [269] = 2,
    ACTIONS(351), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(349), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [301] = 2,
    ACTIONS(355), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(353), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [333] = 2,
    ACTIONS(359), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(357), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [365] = 2,
    ACTIONS(363), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(361), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [397] = 2,
    ACTIONS(367), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(365), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [429] = 2,
    ACTIONS(371), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(369), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [461] = 2,
    ACTIONS(375), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(373), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [493] = 2,
    ACTIONS(379), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(377), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [525] = 2,
    ACTIONS(383), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(381), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [557] = 2,
    ACTIONS(387), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(385), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [589] = 2,
    ACTIONS(391), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(389), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [621] = 2,
    ACTIONS(395), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(393), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [653] = 2,
    ACTIONS(399), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(397), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [685] = 2,
    ACTIONS(403), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(401), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [717] = 2,
    ACTIONS(407), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(405), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [749] = 2,
    ACTIONS(411), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(409), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [781] = 2,
    ACTIONS(415), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(413), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [813] = 2,
    ACTIONS(419), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(417), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [845] = 2,
    ACTIONS(423), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(421), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [877] = 2,
    ACTIONS(427), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(425), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [909] = 2,
    ACTIONS(431), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(429), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [941] = 2,
    ACTIONS(435), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(433), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [973] = 2,
    ACTIONS(439), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(437), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [1005] = 2,
    ACTIONS(443), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(441), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [1037] = 2,
    ACTIONS(447), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(445), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [1069] = 2,
    ACTIONS(451), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(449), 23,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [1101] = 8,
    ACTIONS(453), 1,
      aux_sym__intertoken_token1,
    ACTIONS(455), 1,
      aux_sym_comment_token1,
    ACTIONS(457), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(459), 1,
      anon_sym_POUND_BANG,
    ACTIONS(461), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(463), 1,
      aux_sym_symbol_token1,
    STATE(128), 1,
      sym_symbol,
    STATE(95), 5,
      sym__intertoken,
      sym_comment,
      sym_directive,
      sym_block_comment,
      aux_sym_comment_repeat1,
  [1130] = 8,
    ACTIONS(455), 1,
      aux_sym_comment_token1,
    ACTIONS(457), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(459), 1,
      anon_sym_POUND_BANG,
    ACTIONS(461), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(463), 1,
      aux_sym_symbol_token1,
    ACTIONS(465), 1,
      aux_sym__intertoken_token1,
    STATE(113), 1,
      sym_symbol,
    STATE(98), 5,
      sym__intertoken,
      sym_comment,
      sym_directive,
      sym_block_comment,
      aux_sym_comment_repeat1,
  [1159] = 8,
    ACTIONS(455), 1,
      aux_sym_comment_token1,
    ACTIONS(457), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(459), 1,
      anon_sym_POUND_BANG,
    ACTIONS(461), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(465), 1,
      aux_sym__intertoken_token1,
    ACTIONS(467), 1,
      aux_sym_symbol_token1,
    STATE(62), 1,
      sym_symbol,
    STATE(98), 5,
      sym__intertoken,
      sym_comment,
      sym_directive,
      sym_block_comment,
      aux_sym_comment_repeat1,
  [1188] = 8,
    ACTIONS(455), 1,
      aux_sym_comment_token1,
    ACTIONS(457), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(459), 1,
      anon_sym_POUND_BANG,
    ACTIONS(461), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(467), 1,
      aux_sym_symbol_token1,
    ACTIONS(469), 1,
      aux_sym__intertoken_token1,
    STATE(86), 1,
      sym_symbol,
    STATE(96), 5,
      sym__intertoken,
      sym_comment,
      sym_directive,
      sym_block_comment,
      aux_sym_comment_repeat1,
  [1217] = 7,
    ACTIONS(317), 1,
      aux_sym_symbol_token1,
    ACTIONS(471), 1,
      aux_sym__intertoken_token1,
    ACTIONS(474), 1,
      aux_sym_comment_token1,
    ACTIONS(477), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(480), 1,
      anon_sym_POUND_BANG,
    ACTIONS(483), 1,
      anon_sym_POUND_PIPE,
    STATE(98), 5,
      sym__intertoken,
      sym_comment,
      sym_directive,
      sym_block_comment,
      aux_sym_comment_repeat1,
  [1243] = 1,
    ACTIONS(425), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1252] = 1,
    ACTIONS(361), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1261] = 1,
    ACTIONS(433), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1270] = 1,
    ACTIONS(445), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1279] = 1,
    ACTIONS(389), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1288] = 1,
    ACTIONS(377), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1297] = 1,
    ACTIONS(417), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1306] = 1,
    ACTIONS(381), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1315] = 1,
    ACTIONS(413), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1324] = 1,
    ACTIONS(429), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1333] = 1,
    ACTIONS(409), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1342] = 1,
    ACTIONS(405), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1351] = 1,
    ACTIONS(401), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1360] = 1,
    ACTIONS(397), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1369] = 1,
    ACTIONS(325), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1378] = 1,
    ACTIONS(393), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1387] = 1,
    ACTIONS(329), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1396] = 1,
    ACTIONS(337), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1405] = 1,
    ACTIONS(341), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1414] = 1,
    ACTIONS(345), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1423] = 1,
    ACTIONS(349), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1432] = 1,
    ACTIONS(353), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1441] = 1,
    ACTIONS(357), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1450] = 1,
    ACTIONS(333), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1459] = 1,
    ACTIONS(365), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1468] = 1,
    ACTIONS(321), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1477] = 1,
    ACTIONS(369), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1486] = 1,
    ACTIONS(373), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1495] = 1,
    ACTIONS(385), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1504] = 1,
    ACTIONS(421), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1513] = 1,
    ACTIONS(437), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1522] = 1,
    ACTIONS(441), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1531] = 1,
    ACTIONS(449), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1540] = 4,
    ACTIONS(486), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(488), 1,
      aux_sym_block_comment_token1,
    ACTIONS(490), 1,
      anon_sym_PIPE_POUND,
    STATE(134), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1554] = 4,
    ACTIONS(486), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(492), 1,
      aux_sym_block_comment_token1,
    ACTIONS(494), 1,
      anon_sym_PIPE_POUND,
    STATE(136), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1568] = 4,
    ACTIONS(486), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(492), 1,
      aux_sym_block_comment_token1,
    ACTIONS(496), 1,
      anon_sym_PIPE_POUND,
    STATE(136), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1582] = 4,
    ACTIONS(486), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(498), 1,
      aux_sym_block_comment_token1,
    ACTIONS(500), 1,
      anon_sym_PIPE_POUND,
    STATE(133), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1596] = 4,
    ACTIONS(502), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(505), 1,
      aux_sym_block_comment_token1,
    ACTIONS(508), 1,
      anon_sym_PIPE_POUND,
    STATE(136), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1610] = 4,
    ACTIONS(486), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(510), 1,
      aux_sym_block_comment_token1,
    ACTIONS(512), 1,
      anon_sym_PIPE_POUND,
    STATE(138), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1624] = 4,
    ACTIONS(486), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(492), 1,
      aux_sym_block_comment_token1,
    ACTIONS(514), 1,
      anon_sym_PIPE_POUND,
    STATE(136), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1638] = 4,
    ACTIONS(516), 1,
      anon_sym_DQUOTE,
    ACTIONS(518), 1,
      aux_sym_string_token1,
    ACTIONS(520), 1,
      sym_escape_sequence,
    STATE(140), 1,
      aux_sym_string_repeat1,
  [1651] = 4,
    ACTIONS(522), 1,
      anon_sym_DQUOTE,
    ACTIONS(524), 1,
      aux_sym_string_token1,
    ACTIONS(526), 1,
      sym_escape_sequence,
    STATE(143), 1,
      aux_sym_string_repeat1,
  [1664] = 4,
    ACTIONS(524), 1,
      aux_sym_string_token1,
    ACTIONS(526), 1,
      sym_escape_sequence,
    ACTIONS(528), 1,
      anon_sym_DQUOTE,
    STATE(143), 1,
      aux_sym_string_repeat1,
  [1677] = 4,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      aux_sym_string_token1,
    ACTIONS(534), 1,
      sym_escape_sequence,
    STATE(141), 1,
      aux_sym_string_repeat1,
  [1690] = 4,
    ACTIONS(536), 1,
      anon_sym_DQUOTE,
    ACTIONS(538), 1,
      aux_sym_string_token1,
    ACTIONS(541), 1,
      sym_escape_sequence,
    STATE(143), 1,
      aux_sym_string_repeat1,
  [1703] = 2,
    ACTIONS(395), 1,
      aux_sym_block_comment_token1,
    ACTIONS(393), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [1711] = 2,
    ACTIONS(439), 1,
      aux_sym_block_comment_token1,
    ACTIONS(437), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [1719] = 1,
    ACTIONS(544), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(60)] = 0,
  [SMALL_STATE(61)] = 45,
  [SMALL_STATE(62)] = 77,
  [SMALL_STATE(63)] = 109,
  [SMALL_STATE(64)] = 141,
  [SMALL_STATE(65)] = 173,
  [SMALL_STATE(66)] = 205,
  [SMALL_STATE(67)] = 237,
  [SMALL_STATE(68)] = 269,
  [SMALL_STATE(69)] = 301,
  [SMALL_STATE(70)] = 333,
  [SMALL_STATE(71)] = 365,
  [SMALL_STATE(72)] = 397,
  [SMALL_STATE(73)] = 429,
  [SMALL_STATE(74)] = 461,
  [SMALL_STATE(75)] = 493,
  [SMALL_STATE(76)] = 525,
  [SMALL_STATE(77)] = 557,
  [SMALL_STATE(78)] = 589,
  [SMALL_STATE(79)] = 621,
  [SMALL_STATE(80)] = 653,
  [SMALL_STATE(81)] = 685,
  [SMALL_STATE(82)] = 717,
  [SMALL_STATE(83)] = 749,
  [SMALL_STATE(84)] = 781,
  [SMALL_STATE(85)] = 813,
  [SMALL_STATE(86)] = 845,
  [SMALL_STATE(87)] = 877,
  [SMALL_STATE(88)] = 909,
  [SMALL_STATE(89)] = 941,
  [SMALL_STATE(90)] = 973,
  [SMALL_STATE(91)] = 1005,
  [SMALL_STATE(92)] = 1037,
  [SMALL_STATE(93)] = 1069,
  [SMALL_STATE(94)] = 1101,
  [SMALL_STATE(95)] = 1130,
  [SMALL_STATE(96)] = 1159,
  [SMALL_STATE(97)] = 1188,
  [SMALL_STATE(98)] = 1217,
  [SMALL_STATE(99)] = 1243,
  [SMALL_STATE(100)] = 1252,
  [SMALL_STATE(101)] = 1261,
  [SMALL_STATE(102)] = 1270,
  [SMALL_STATE(103)] = 1279,
  [SMALL_STATE(104)] = 1288,
  [SMALL_STATE(105)] = 1297,
  [SMALL_STATE(106)] = 1306,
  [SMALL_STATE(107)] = 1315,
  [SMALL_STATE(108)] = 1324,
  [SMALL_STATE(109)] = 1333,
  [SMALL_STATE(110)] = 1342,
  [SMALL_STATE(111)] = 1351,
  [SMALL_STATE(112)] = 1360,
  [SMALL_STATE(113)] = 1369,
  [SMALL_STATE(114)] = 1378,
  [SMALL_STATE(115)] = 1387,
  [SMALL_STATE(116)] = 1396,
  [SMALL_STATE(117)] = 1405,
  [SMALL_STATE(118)] = 1414,
  [SMALL_STATE(119)] = 1423,
  [SMALL_STATE(120)] = 1432,
  [SMALL_STATE(121)] = 1441,
  [SMALL_STATE(122)] = 1450,
  [SMALL_STATE(123)] = 1459,
  [SMALL_STATE(124)] = 1468,
  [SMALL_STATE(125)] = 1477,
  [SMALL_STATE(126)] = 1486,
  [SMALL_STATE(127)] = 1495,
  [SMALL_STATE(128)] = 1504,
  [SMALL_STATE(129)] = 1513,
  [SMALL_STATE(130)] = 1522,
  [SMALL_STATE(131)] = 1531,
  [SMALL_STATE(132)] = 1540,
  [SMALL_STATE(133)] = 1554,
  [SMALL_STATE(134)] = 1568,
  [SMALL_STATE(135)] = 1582,
  [SMALL_STATE(136)] = 1596,
  [SMALL_STATE(137)] = 1610,
  [SMALL_STATE(138)] = 1624,
  [SMALL_STATE(139)] = 1638,
  [SMALL_STATE(140)] = 1651,
  [SMALL_STATE(141)] = 1664,
  [SMALL_STATE(142)] = 1677,
  [SMALL_STATE(143)] = 1690,
  [SMALL_STATE(144)] = 1703,
  [SMALL_STATE(145)] = 1711,
  [SMALL_STATE(146)] = 1719,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(78),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(53),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(97),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(135),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(75),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(142),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(76),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(56),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(55),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(43),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(27),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(30),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(60),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(78),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(53),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(97),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(135),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax_splicing, 3),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax_splicing, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syntax, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 3),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 3),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syntax, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasisyntax, 3),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasisyntax, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 3),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splicing, 3),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splicing, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax, 3),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_vector, 3),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_vector, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_vector, 2),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_vector, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax_splicing, 2),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax_splicing, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax, 2),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splicing, 2),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splicing, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 2),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasisyntax, 2),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasisyntax, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(98),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(103),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(32),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(94),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(132),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(137),
  [505] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(136),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(143),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(143),
  [544] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
