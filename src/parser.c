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
#define LARGE_STATE_COUNT 61
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
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
  sym_keyword = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_LBRACK = 18,
  anon_sym_RBRACK = 19,
  anon_sym_LBRACE = 20,
  anon_sym_RBRACE = 21,
  anon_sym_SQUOTE = 22,
  anon_sym_BQUOTE = 23,
  anon_sym_POUND_SQUOTE = 24,
  anon_sym_POUND_BQUOTE = 25,
  anon_sym_COMMA = 26,
  anon_sym_COMMA_AT = 27,
  anon_sym_POUND_COMMA = 28,
  anon_sym_POUND_COMMA_AT = 29,
  anon_sym_POUND_LPAREN = 30,
  anon_sym_POUNDvu8_LPAREN = 31,
  sym_program = 32,
  sym__token = 33,
  sym__intertoken = 34,
  sym_comment = 35,
  sym_directive = 36,
  sym_block_comment = 37,
  sym__datum = 38,
  sym_number = 39,
  sym_string = 40,
  sym_symbol = 41,
  sym_list = 42,
  sym_quote = 43,
  sym_quasiquote = 44,
  sym_syntax = 45,
  sym_quasisyntax = 46,
  sym_unquote = 47,
  sym_unquote_splicing = 48,
  sym_unsyntax = 49,
  sym_unsyntax_splicing = 50,
  sym_vector = 51,
  sym_byte_vector = 52,
  aux_sym_program_repeat1 = 53,
  aux_sym_comment_repeat1 = 54,
  aux_sym_block_comment_repeat1 = 55,
  aux_sym_string_repeat1 = 56,
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
  [sym_keyword] = "keyword",
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
  [sym_keyword] = sym_keyword,
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
  [sym_keyword] = {
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
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 4,
  [14] = 5,
  [15] = 6,
  [16] = 7,
  [17] = 3,
  [18] = 10,
  [19] = 9,
  [20] = 20,
  [21] = 8,
  [22] = 20,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 29,
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
  [44] = 28,
  [45] = 32,
  [46] = 27,
  [47] = 31,
  [48] = 26,
  [49] = 24,
  [50] = 43,
  [51] = 30,
  [52] = 34,
  [53] = 53,
  [54] = 35,
  [55] = 55,
  [56] = 56,
  [57] = 53,
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
    ? (c < 'X'
      ? (c < 'N'
        ? c == 0
        : (c <= 'N' || c == 'S'))
      : (c <= 'X' || (c < 'd'
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

static inline bool sym_keyword_character_set_1(int32_t c) {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(288);
      if (aux_sym__intertoken_token1_character_set_1(lookahead)) ADVANCE(289);
      if (lookahead == '"') ADVANCE(492);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '\'') ADVANCE(599);
      if (lookahead == '(') ADVANCE(593);
      if (lookahead == ')') ADVANCE(594);
      if (lookahead == ',') ADVANCE(603);
      if (lookahead == ';') ADVANCE(290);
      if (lookahead == '[') ADVANCE(595);
      if (lookahead == ']') ADVANCE(596);
      if (lookahead == '`') ADVANCE(600);
      if (lookahead == '{') ADVANCE(597);
      if (lookahead == '|') ADVANCE(295);
      if (lookahead == '}') ADVANCE(598);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(495);
      if (lookahead == '\n' ||
          lookahead == 133 ||
          lookahead == 8232) ADVANCE(496);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\r') ADVANCE(495);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(494);
      if (lookahead == 'X') ADVANCE(284);
      if (lookahead == 'x') ADVANCE(284);
      if (lookahead == '\n' ||
          lookahead == 133 ||
          lookahead == 8232) ADVANCE(496);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(292);
      if (lookahead == '\'') ADVANCE(601);
      if (lookahead == '(') ADVANCE(608);
      if (lookahead == ',') ADVANCE(606);
      if (lookahead == ':') ADVANCE(167);
      if (lookahead == ';') ADVANCE(291);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(305);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(6);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(359);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(372);
      if (lookahead == '\\') ADVANCE(285);
      if (lookahead == '`') ADVANCE(602);
      if (lookahead == 'v') ADVANCE(165);
      if (lookahead == '|') ADVANCE(293);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(299);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(300);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(292);
      if (lookahead == ';') ADVANCE(291);
      if (lookahead == '|') ADVANCE(293);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(492);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(493);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(251);
      if (lookahead == 'i') ADVANCE(301);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(251);
      if (lookahead == 'i') ADVANCE(301);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(169);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(251);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '|') ADVANCE(246);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(176);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(251);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '|') ADVANCE(246);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '|') ADVANCE(246);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(176);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '|') ADVANCE(246);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(301);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(169);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(301);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == ';') ADVANCE(290);
      if (lookahead == '|') ADVANCE(113);
      if (aux_sym__intertoken_token1_character_set_1(lookahead)) ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(590);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == 'i') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '/') ADVANCE(278);
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '/') ADVANCE(278);
      if (lookahead == 'i') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '(') ADVANCE(609);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == '/') ADVANCE(246);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '|') ADVANCE(246);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(66);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == '/') ADVANCE(246);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(135);
      if (lookahead == '/') ADVANCE(246);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '|') ADVANCE(246);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(176);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(65);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(67);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == 'I') ADVANCE(208);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == 'i') ADVANCE(431);
      if (lookahead == 'n') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(244);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(180);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(249);
      if (lookahead == 'I') ADVANCE(204);
      if (lookahead == 'N') ADVANCE(181);
      if (lookahead == 'i') ADVANCE(430);
      if (lookahead == 'n') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(252);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(379);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(252);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(379);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(253);
      if (lookahead == 'i') ADVANCE(438);
      if (lookahead == 'n') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(256);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(438);
      if (lookahead == 'n') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(258);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(258);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(203);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(259);
      if (lookahead == 'I') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(465);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(260);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(180);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(260);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(261);
      if (lookahead == 'I') ADVANCE(204);
      if (lookahead == 'N') ADVANCE(181);
      if (lookahead == 'i') ADVANCE(430);
      if (lookahead == 'n') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == '.') ADVANCE(69);
      END_STATE();
    case 57:
      if (lookahead == '.') ADVANCE(70);
      END_STATE();
    case 58:
      if (lookahead == '.') ADVANCE(71);
      END_STATE();
    case 59:
      if (lookahead == '.') ADVANCE(72);
      END_STATE();
    case 60:
      if (lookahead == '.') ADVANCE(73);
      END_STATE();
    case 61:
      if (lookahead == '.') ADVANCE(74);
      END_STATE();
    case 62:
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead == '/') ADVANCE(232);
      if (lookahead == 'i') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(63);
      END_STATE();
    case 64:
      if (lookahead == '/') ADVANCE(280);
      if (lookahead == 'i') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 65:
      if (lookahead == '0') ADVANCE(301);
      END_STATE();
    case 66:
      if (lookahead == '0') ADVANCE(405);
      END_STATE();
    case 67:
      if (lookahead == '0') ADVANCE(134);
      END_STATE();
    case 68:
      if (lookahead == '0') ADVANCE(409);
      END_STATE();
    case 69:
      if (lookahead == '0') ADVANCE(419);
      END_STATE();
    case 70:
      if (lookahead == '0') ADVANCE(420);
      END_STATE();
    case 71:
      if (lookahead == '0') ADVANCE(406);
      END_STATE();
    case 72:
      if (lookahead == '0') ADVANCE(410);
      END_STATE();
    case 73:
      if (lookahead == '0') ADVANCE(407);
      END_STATE();
    case 74:
      if (lookahead == '0') ADVANCE(411);
      END_STATE();
    case 75:
      if (lookahead == '8') ADVANCE(28);
      END_STATE();
    case 76:
      if (lookahead == ';') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead == ';') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 78:
      if (lookahead == ';') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 79:
      if (lookahead == 'A') ADVANCE(186);
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 80:
      if (lookahead == 'A') ADVANCE(199);
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 81:
      if (lookahead == 'A') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 82:
      if (lookahead == 'A') ADVANCE(202);
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 83:
      if (lookahead == 'A') ADVANCE(205);
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 84:
      if (lookahead == 'A') ADVANCE(206);
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 85:
      if (lookahead == 'A') ADVANCE(207);
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 86:
      if (lookahead == 'C') ADVANCE(187);
      if (lookahead == 'c') ADVANCE(187);
      END_STATE();
    case 87:
      if (lookahead == 'F') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 88:
      if (lookahead == 'F') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(34);
      END_STATE();
    case 89:
      if (lookahead == 'F') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 90:
      if (lookahead == 'F') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(57);
      END_STATE();
    case 91:
      if (lookahead == 'F') ADVANCE(58);
      if (lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 92:
      if (lookahead == 'F') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(61);
      END_STATE();
    case 93:
      if (lookahead == 'I') ADVANCE(200);
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 94:
      if (lookahead == 'I') ADVANCE(204);
      if (lookahead == 'N') ADVANCE(181);
      if (lookahead == 'i') ADVANCE(430);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == '|') ADVANCE(246);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(16);
      END_STATE();
    case 95:
      if (lookahead == 'I') ADVANCE(204);
      if (lookahead == 'N') ADVANCE(181);
      if (lookahead == 'i') ADVANCE(430);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == '|') ADVANCE(246);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(62);
      END_STATE();
    case 96:
      if (lookahead == 'I') ADVANCE(204);
      if (lookahead == 'N') ADVANCE(181);
      if (lookahead == 'i') ADVANCE(430);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == '|') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(25);
      END_STATE();
    case 97:
      if (lookahead == 'I') ADVANCE(204);
      if (lookahead == 'N') ADVANCE(181);
      if (lookahead == 'i') ADVANCE(430);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == '|') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(63);
      END_STATE();
    case 98:
      if (lookahead == 'I') ADVANCE(204);
      if (lookahead == 'N') ADVANCE(181);
      if (lookahead == 'i') ADVANCE(430);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == '|') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 99:
      if (lookahead == 'I') ADVANCE(204);
      if (lookahead == 'N') ADVANCE(181);
      if (lookahead == 'i') ADVANCE(430);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == '|') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 100:
      if (lookahead == 'I') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(465);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(181);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(62);
      END_STATE();
    case 101:
      if (lookahead == 'I') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(465);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(63);
      END_STATE();
    case 102:
      if (lookahead == 'I') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(465);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 103:
      if (lookahead == 'L') ADVANCE(195);
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 104:
      if (lookahead == 'N') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 105:
      if (lookahead == 'N') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 106:
      if (lookahead == 'N') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 107:
      if (lookahead == 'N') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 108:
      if (lookahead == 'N') ADVANCE(190);
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 109:
      if (lookahead == 'N') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 110:
      if (lookahead == 'N') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 111:
      if (lookahead == 'N') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 112:
      if (lookahead == 'W') ADVANCE(197);
      if (lookahead == 'w') ADVANCE(103);
      END_STATE();
    case 113:
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == '|') ADVANCE(497);
      if (lookahead != 0) ADVANCE(113);
      END_STATE();
    case 114:
      if (lookahead == '\\') ADVANCE(227);
      if (lookahead == '|') ADVANCE(591);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 120:
      if (lookahead == 'b') ADVANCE(475);
      END_STATE();
    case 121:
      if (lookahead == 'c') ADVANCE(149);
      END_STATE();
    case 122:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 123:
      if (lookahead == 'c') ADVANCE(481);
      END_STATE();
    case 124:
      if (lookahead == 'd') ADVANCE(475);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 130:
      if (lookahead == 'f') ADVANCE(129);
      END_STATE();
    case 131:
      if (lookahead == 'f') ADVANCE(34);
      END_STATE();
    case 132:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 133:
      if (lookahead == 'g') ADVANCE(125);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '|') ADVANCE(246);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(176);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '|') ADVANCE(246);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '|') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(16);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(140);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(25);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(142);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(438);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == '|') ADVANCE(246);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(62);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(438);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == '|') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(63);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(438);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == '|') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 149:
      if (lookahead == 'k') ADVANCE(162);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(485);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(475);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(475);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 158:
      if (lookahead == 'p') ADVANCE(125);
      END_STATE();
    case 159:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 165:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 166:
      if (lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 167:
      if (lookahead == '|') ADVANCE(114);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(592);
      END_STATE();
    case 168:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      END_STATE();
    case 169:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 170:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      END_STATE();
    case 171:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(418);
      END_STATE();
    case 172:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(395);
      END_STATE();
    case 173:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(412);
      END_STATE();
    case 174:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(417);
      END_STATE();
    case 175:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 176:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 177:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(396);
      END_STATE();
    case 178:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 179:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 180:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 181:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 182:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 183:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 184:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 185:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(390);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(33);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(392);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(394);
      END_STATE();
    case 186:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(187);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 189:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 190:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(34);
      END_STATE();
    case 191:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 192:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(56);
      END_STATE();
    case 193:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 194:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(60);
      END_STATE();
    case 195:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 196:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 197:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 198:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 199:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 200:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 201:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 202:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 203:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 204:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 205:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 206:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 207:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 208:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 209:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 210:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 211:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(188);
      END_STATE();
    case 212:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 213:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(197);
      END_STATE();
    case 214:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(349);
      END_STATE();
    case 215:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(342);
      END_STATE();
    case 216:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(356);
      END_STATE();
    case 217:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(18);
      END_STATE();
    case 218:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(140);
      END_STATE();
    case 219:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(351);
      END_STATE();
    case 220:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(358);
      END_STATE();
    case 221:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(467);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(390);
      END_STATE();
    case 223:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(392);
      END_STATE();
    case 224:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 226:
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == '|') ADVANCE(113);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(274);
      END_STATE();
    case 227:
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == '|') ADVANCE(114);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(279);
      END_STATE();
    case 228:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(362);
      END_STATE();
    case 229:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(343);
      END_STATE();
    case 230:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(369);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(19);
      END_STATE();
    case 232:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(142);
      END_STATE();
    case 233:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(364);
      END_STATE();
    case 234:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(371);
      END_STATE();
    case 235:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(469);
      END_STATE();
    case 236:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(416);
      END_STATE();
    case 237:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 238:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(415);
      END_STATE();
    case 239:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 240:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      END_STATE();
    case 241:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 242:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      END_STATE();
    case 243:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 244:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      END_STATE();
    case 245:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 247:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(412);
      END_STATE();
    case 248:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 249:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 250:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 251:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 252:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 253:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 254:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 255:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 256:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      END_STATE();
    case 257:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 258:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(460);
      END_STATE();
    case 259:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 260:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      END_STATE();
    case 261:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 262:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(400);
      END_STATE();
    case 263:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      END_STATE();
    case 264:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      END_STATE();
    case 265:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(418);
      END_STATE();
    case 266:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 267:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(417);
      END_STATE();
    case 268:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      END_STATE();
    case 269:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      END_STATE();
    case 270:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(404);
      END_STATE();
    case 271:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(403);
      END_STATE();
    case 272:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(396);
      END_STATE();
    case 273:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(395);
      END_STATE();
    case 274:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 275:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(373);
      END_STATE();
    case 276:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(346);
      END_STATE();
    case 277:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(376);
      END_STATE();
    case 278:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 279:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 280:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 281:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(375);
      END_STATE();
    case 282:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      END_STATE();
    case 283:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      END_STATE();
    case 284:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 285:
      if (!sym_character_character_set_1(lookahead)) ADVANCE(475);
      if (lookahead == 'N') ADVANCE(489);
      if (lookahead == 'S') ADVANCE(490);
      if (lookahead == 'X') ADVANCE(491);
      if (lookahead == 'a') ADVANCE(486);
      if (lookahead == 'b') ADVANCE(478);
      if (lookahead == 'd') ADVANCE(482);
      if (lookahead == 'e') ADVANCE(487);
      if (lookahead == 'l') ADVANCE(484);
      if (lookahead == 'n') ADVANCE(476);
      if (lookahead == 'p') ADVANCE(479);
      if (lookahead == 'r') ADVANCE(483);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == 't') ADVANCE(480);
      if (lookahead == 'v') ADVANCE(488);
      if (lookahead == 'x') ADVANCE(491);
      END_STATE();
    case 286:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '|') ADVANCE(294);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '|') ADVANCE(295);
      END_STATE();
    case 287:
      if (eof) ADVANCE(288);
      if (lookahead == '"') ADVANCE(492);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(599);
      if (lookahead == '(') ADVANCE(593);
      if (lookahead == ')') ADVANCE(594);
      if (lookahead == ',') ADVANCE(604);
      if (lookahead == '.') ADVANCE(568);
      if (lookahead == ';') ADVANCE(290);
      if (lookahead == '[') ADVANCE(595);
      if (lookahead == ']') ADVANCE(596);
      if (lookahead == '`') ADVANCE(600);
      if (lookahead == '{') ADVANCE(597);
      if (lookahead == '|') ADVANCE(113);
      if (lookahead == '}') ADVANCE(598);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      if (aux_sym__intertoken_token1_character_set_1(lookahead)) ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(590);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__intertoken_token1);
      if (aux_sym__intertoken_token1_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '#') ADVANCE(297);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '|') ADVANCE(293);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_number_token1);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(303);
      if (lookahead == '.') ADVANCE(306);
      if (lookahead == '/') ADVANCE(570);
      if (lookahead == '@') ADVANCE(510);
      if (lookahead == '|') ADVANCE(236);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(511);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(548);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(303);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == '/') ADVANCE(239);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(177);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(303);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == '/') ADVANCE(264);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '|') ADVANCE(236);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(170);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '@') ADVANCE(439);
      if (lookahead == '|') ADVANCE(262);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(389);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(312);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '@') ADVANCE(510);
      if (lookahead == '|') ADVANCE(236);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(511);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(548);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(177);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '|') ADVANCE(236);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(170);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == '/') ADVANCE(572);
      if (lookahead == '@') ADVANCE(510);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == '|') ADVANCE(238);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(511);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(550);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(172);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == '/') ADVANCE(266);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '|') ADVANCE(238);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(173);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == '@') ADVANCE(439);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '/') ADVANCE(219);
      if (lookahead == '@') ADVANCE(453);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(139);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(315);
      if (lookahead == '@') ADVANCE(510);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == '|') ADVANCE(238);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(511);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(550);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(315);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(172);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(315);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '|') ADVANCE(238);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(173);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == '@') ADVANCE(510);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == '/') ADVANCE(576);
      if (lookahead == '|') ADVANCE(240);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(552);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '.') ADVANCE(340);
      if (lookahead == '/') ADVANCE(250);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == '/') ADVANCE(250);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(168);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '.') ADVANCE(336);
      if (lookahead == '/') ADVANCE(250);
      if (lookahead == '|') ADVANCE(240);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(175);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '.') ADVANCE(337);
      if (lookahead == '/') ADVANCE(576);
      if (lookahead == '|') ADVANCE(240);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '.') ADVANCE(338);
      if (lookahead == '/') ADVANCE(250);
      if (lookahead == '|') ADVANCE(240);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(327);
      if (lookahead == '/') ADVANCE(215);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(327);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead == '@') ADVANCE(439);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '/') ADVANCE(220);
      if (lookahead == '@') ADVANCE(453);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(139);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(332);
      if (lookahead == '@') ADVANCE(510);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(332);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(332);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(332);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(339);
      if (lookahead == '|') ADVANCE(240);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(552);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(339);
      if (lookahead == '|') ADVANCE(240);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(175);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(339);
      if (lookahead == '|') ADVANCE(240);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(339);
      if (lookahead == '|') ADVANCE(240);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(339);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(168);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(339);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(341);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '/') ADVANCE(228);
      if (lookahead == '@') ADVANCE(440);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '/') ADVANCE(233);
      if (lookahead == '@') ADVANCE(454);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(141);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(350);
      if (lookahead == '@') ADVANCE(439);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(350);
      if (lookahead == '@') ADVANCE(453);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(139);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(350);
      if (lookahead == '@') ADVANCE(453);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(139);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(352);
      if (lookahead == '/') ADVANCE(229);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(352);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(355);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead == '@') ADVANCE(440);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(355);
      if (lookahead == '/') ADVANCE(234);
      if (lookahead == '@') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(141);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(357);
      if (lookahead == '@') ADVANCE(439);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(357);
      if (lookahead == '@') ADVANCE(453);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(139);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(357);
      if (lookahead == '@') ADVANCE(453);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(139);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '@') ADVANCE(440);
      if (lookahead == '|') ADVANCE(268);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(347);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(361);
      if (lookahead == '/') ADVANCE(275);
      if (lookahead == '@') ADVANCE(441);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(361);
      if (lookahead == '/') ADVANCE(281);
      if (lookahead == '@') ADVANCE(455);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(363);
      if (lookahead == '@') ADVANCE(440);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(363);
      if (lookahead == '@') ADVANCE(454);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(141);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(363);
      if (lookahead == '@') ADVANCE(454);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(365);
      if (lookahead == '/') ADVANCE(276);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(365);
      if (lookahead == '/') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(368);
      if (lookahead == '/') ADVANCE(277);
      if (lookahead == '@') ADVANCE(441);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(368);
      if (lookahead == '/') ADVANCE(282);
      if (lookahead == '@') ADVANCE(455);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(370);
      if (lookahead == '@') ADVANCE(440);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(370);
      if (lookahead == '@') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(141);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(370);
      if (lookahead == '@') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(224);
      if (lookahead == '@') ADVANCE(441);
      if (lookahead == '|') ADVANCE(270);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == '@') ADVANCE(441);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == '@') ADVANCE(455);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == '@') ADVANCE(455);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(377);
      if (lookahead == '@') ADVANCE(441);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(377);
      if (lookahead == '@') ADVANCE(455);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(377);
      if (lookahead == '@') ADVANCE(455);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == '/') ADVANCE(240);
      if (lookahead == '|') ADVANCE(240);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == '/') ADVANCE(586);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(448);
      if (lookahead == '/') ADVANCE(586);
      if (lookahead == '|') ADVANCE(240);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(552);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(460);
      if (lookahead == '/') ADVANCE(240);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(449);
      if (lookahead == '/') ADVANCE(240);
      if (lookahead == '|') ADVANCE(240);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(175);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(221);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(510);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == '|') ADVANCE(238);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(387);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(510);
      if (lookahead == '|') ADVANCE(236);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(388);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(439);
      if (lookahead == 'I') ADVANCE(198);
      if (lookahead == 'N') ADVANCE(179);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == '|') ADVANCE(263);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(329);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(439);
      if (lookahead == '|') ADVANCE(262);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(389);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(312);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(440);
      if (lookahead == 'I') ADVANCE(209);
      if (lookahead == 'N') ADVANCE(183);
      if (lookahead == 'i') ADVANCE(432);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == '|') ADVANCE(269);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(354);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(440);
      if (lookahead == '|') ADVANCE(268);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(347);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(441);
      if (lookahead == 'I') ADVANCE(210);
      if (lookahead == 'N') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == '|') ADVANCE(271);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(367);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(441);
      if (lookahead == '|') ADVANCE(270);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(513);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == '|') ADVANCE(238);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(397);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(513);
      if (lookahead == '|') ADVANCE(236);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(398);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(442);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(442);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(443);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(443);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(444);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(444);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(456);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(457);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(101);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(102);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(515);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(517);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(445);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(95);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(446);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(97);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(447);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '|') ADVANCE(238);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '|') ADVANCE(236);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(519);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(520);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(44);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '|') ADVANCE(238);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '|') ADVANCE(236);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(180);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == '|') ADVANCE(240);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(328);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(180);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == '|') ADVANCE(240);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(384);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(180);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == '|') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(353);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(180);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == '|') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(385);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(180);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == '|') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(180);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == '|') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'N') ADVANCE(559);
      if (lookahead == 'n') ADVANCE(529);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'N') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'N') ADVANCE(560);
      if (lookahead == 'n') ADVANCE(530);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'N') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'N') ADVANCE(193);
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'N') ADVANCE(194);
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == '|') ADVANCE(240);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(384);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == '|') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(385);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == '|') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'n') ADVANCE(538);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(421);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(328);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(353);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(434);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(384);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(385);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(422);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(384);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(385);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(240);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(552);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(240);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(175);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(240);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(466);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(328);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(353);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(461);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(384);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(385);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(459);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(460);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(203);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(180);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(384);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(203);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(385);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(203);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(560);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(328);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(467);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(353);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'E') ADVANCE(213);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'P') ADVANCE(178);
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(475);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(178);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(491);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(493);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n' ||
          lookahead == 133) ADVANCE(496);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(496);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(496);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '.') ADVANCE(500);
      if (lookahead == '/') ADVANCE(578);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == '|') ADVANCE(246);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(553);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(498);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '.') ADVANCE(501);
      if (lookahead == '/') ADVANCE(578);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == '|') ADVANCE(246);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == '|') ADVANCE(246);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(553);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(500);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == '|') ADVANCE(246);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(501);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(502);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(523);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(542);
      if (lookahead == '/') ADVANCE(587);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(540);
      if (lookahead == '/') ADVANCE(587);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == '|') ADVANCE(246);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(553);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(505);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(562);
      if (lookahead == 'N') ADVANCE(556);
      if (lookahead == 'i') ADVANCE(427);
      if (lookahead == 'n') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(524);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(522);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(574);
      if (lookahead == 'I') ADVANCE(567);
      if (lookahead == 'N') ADVANCE(558);
      if (lookahead == 'i') ADVANCE(535);
      if (lookahead == 'n') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(574);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(566);
      if (lookahead == 'N') ADVANCE(557);
      if (lookahead == 'i') ADVANCE(429);
      if (lookahead == 'n') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(498);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(547);
      if (lookahead == 'n') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(580);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(581);
      if (lookahead == 'i') ADVANCE(437);
      if (lookahead == 'n') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(582);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(582);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(567);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(583);
      if (lookahead == 'I') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(464);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(584);
      if (lookahead == 'I') ADVANCE(567);
      if (lookahead == 'N') ADVANCE(558);
      if (lookahead == 'i') ADVANCE(535);
      if (lookahead == 'n') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(584);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(585);
      if (lookahead == 'I') ADVANCE(566);
      if (lookahead == 'N') ADVANCE(557);
      if (lookahead == 'i') ADVANCE(429);
      if (lookahead == 'n') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(505);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(525);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0') ADVANCE(474);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0') ADVANCE(408);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0') ADVANCE(544);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0') ADVANCE(414);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'A') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(532);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'A') ADVANCE(564);
      if (lookahead == 'a') ADVANCE(533);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'A') ADVANCE(565);
      if (lookahead == 'a') ADVANCE(534);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'F') ADVANCE(503);
      if (lookahead == 'f') ADVANCE(521);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'F') ADVANCE(507);
      if (lookahead == 'f') ADVANCE(507);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'F') ADVANCE(508);
      if (lookahead == 'f') ADVANCE(508);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'N') ADVANCE(503);
      if (lookahead == 'n') ADVANCE(521);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'N') ADVANCE(507);
      if (lookahead == 'n') ADVANCE(507);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'N') ADVANCE(508);
      if (lookahead == 'n') ADVANCE(508);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'N') ADVANCE(561);
      if (lookahead == 'n') ADVANCE(531);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'a') ADVANCE(545);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'a') ADVANCE(546);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'f') ADVANCE(507);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'f') ADVANCE(508);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == '|') ADVANCE(246);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(553);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(540);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == '|') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(541);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(542);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'i') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(543);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'i') ADVANCE(474);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(507);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(508);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(539);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(388);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(398);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(387);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(397);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(541);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(543);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(563);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(564);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(565);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(503);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(507);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(508);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(559);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(503);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(507);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(508);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(560);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(561);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(388);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(387);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(500);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(502);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(541);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(501);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(459);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(542);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(540);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(543);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(398);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(397);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(590);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_keyword);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_keyword);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(592);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_POUND_BQUOTE);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(605);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA);
      if (lookahead == '@') ADVANCE(607);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA_AT);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_POUNDvu8_LPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 287},
  [2] = {.lex_state = 287},
  [3] = {.lex_state = 287},
  [4] = {.lex_state = 287},
  [5] = {.lex_state = 287},
  [6] = {.lex_state = 287},
  [7] = {.lex_state = 287},
  [8] = {.lex_state = 287},
  [9] = {.lex_state = 287},
  [10] = {.lex_state = 287},
  [11] = {.lex_state = 287},
  [12] = {.lex_state = 287},
  [13] = {.lex_state = 287},
  [14] = {.lex_state = 287},
  [15] = {.lex_state = 287},
  [16] = {.lex_state = 287},
  [17] = {.lex_state = 287},
  [18] = {.lex_state = 287},
  [19] = {.lex_state = 287},
  [20] = {.lex_state = 287},
  [21] = {.lex_state = 287},
  [22] = {.lex_state = 287},
  [23] = {.lex_state = 287},
  [24] = {.lex_state = 287},
  [25] = {.lex_state = 287},
  [26] = {.lex_state = 287},
  [27] = {.lex_state = 287},
  [28] = {.lex_state = 287},
  [29] = {.lex_state = 287},
  [30] = {.lex_state = 287},
  [31] = {.lex_state = 287},
  [32] = {.lex_state = 287},
  [33] = {.lex_state = 287},
  [34] = {.lex_state = 287},
  [35] = {.lex_state = 287},
  [36] = {.lex_state = 287},
  [37] = {.lex_state = 287},
  [38] = {.lex_state = 287},
  [39] = {.lex_state = 287},
  [40] = {.lex_state = 287},
  [41] = {.lex_state = 287},
  [42] = {.lex_state = 287},
  [43] = {.lex_state = 287},
  [44] = {.lex_state = 287},
  [45] = {.lex_state = 287},
  [46] = {.lex_state = 287},
  [47] = {.lex_state = 287},
  [48] = {.lex_state = 287},
  [49] = {.lex_state = 287},
  [50] = {.lex_state = 287},
  [51] = {.lex_state = 287},
  [52] = {.lex_state = 287},
  [53] = {.lex_state = 287},
  [54] = {.lex_state = 287},
  [55] = {.lex_state = 287},
  [56] = {.lex_state = 287},
  [57] = {.lex_state = 287},
  [58] = {.lex_state = 287},
  [59] = {.lex_state = 287},
  [60] = {.lex_state = 287},
  [61] = {.lex_state = 287},
  [62] = {.lex_state = 287},
  [63] = {.lex_state = 287},
  [64] = {.lex_state = 287},
  [65] = {.lex_state = 287},
  [66] = {.lex_state = 287},
  [67] = {.lex_state = 287},
  [68] = {.lex_state = 287},
  [69] = {.lex_state = 287},
  [70] = {.lex_state = 287},
  [71] = {.lex_state = 287},
  [72] = {.lex_state = 287},
  [73] = {.lex_state = 287},
  [74] = {.lex_state = 287},
  [75] = {.lex_state = 287},
  [76] = {.lex_state = 287},
  [77] = {.lex_state = 287},
  [78] = {.lex_state = 287},
  [79] = {.lex_state = 287},
  [80] = {.lex_state = 287},
  [81] = {.lex_state = 287},
  [82] = {.lex_state = 287},
  [83] = {.lex_state = 287},
  [84] = {.lex_state = 287},
  [85] = {.lex_state = 287},
  [86] = {.lex_state = 287},
  [87] = {.lex_state = 287},
  [88] = {.lex_state = 287},
  [89] = {.lex_state = 287},
  [90] = {.lex_state = 287},
  [91] = {.lex_state = 287},
  [92] = {.lex_state = 287},
  [93] = {.lex_state = 287},
  [94] = {.lex_state = 22},
  [95] = {.lex_state = 22},
  [96] = {.lex_state = 22},
  [97] = {.lex_state = 22},
  [98] = {.lex_state = 22},
  [99] = {.lex_state = 22},
  [100] = {.lex_state = 22},
  [101] = {.lex_state = 22},
  [102] = {.lex_state = 22},
  [103] = {.lex_state = 22},
  [104] = {.lex_state = 22},
  [105] = {.lex_state = 22},
  [106] = {.lex_state = 22},
  [107] = {.lex_state = 22},
  [108] = {.lex_state = 22},
  [109] = {.lex_state = 22},
  [110] = {.lex_state = 22},
  [111] = {.lex_state = 22},
  [112] = {.lex_state = 22},
  [113] = {.lex_state = 22},
  [114] = {.lex_state = 22},
  [115] = {.lex_state = 22},
  [116] = {.lex_state = 22},
  [117] = {.lex_state = 22},
  [118] = {.lex_state = 22},
  [119] = {.lex_state = 22},
  [120] = {.lex_state = 22},
  [121] = {.lex_state = 22},
  [122] = {.lex_state = 22},
  [123] = {.lex_state = 22},
  [124] = {.lex_state = 22},
  [125] = {.lex_state = 22},
  [126] = {.lex_state = 22},
  [127] = {.lex_state = 22},
  [128] = {.lex_state = 22},
  [129] = {.lex_state = 22},
  [130] = {.lex_state = 22},
  [131] = {.lex_state = 22},
  [132] = {.lex_state = 286},
  [133] = {.lex_state = 286},
  [134] = {.lex_state = 286},
  [135] = {.lex_state = 286},
  [136] = {.lex_state = 286},
  [137] = {.lex_state = 286},
  [138] = {.lex_state = 286},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 286},
  [145] = {.lex_state = 286},
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
    [sym_keyword] = ACTIONS(5),
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
    [sym_keyword] = ACTIONS(49),
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
    [sym_keyword] = ACTIONS(112),
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
    [sym_keyword] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(116),
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
    [sym_keyword] = ACTIONS(112),
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
    [sym_keyword] = ACTIONS(112),
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
  [7] = {
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
    [sym_keyword] = ACTIONS(112),
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
  [8] = {
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
    [sym_keyword] = ACTIONS(120),
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
  [9] = {
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
    [sym_keyword] = ACTIONS(124),
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
  [10] = {
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
    [sym_keyword] = ACTIONS(128),
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
  [11] = {
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
    [sym_keyword] = ACTIONS(130),
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
  [12] = {
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
    [sym_keyword] = ACTIONS(132),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(134),
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
    [sym_keyword] = ACTIONS(112),
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
    [sym_keyword] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(138),
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
    [sym_keyword] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(138),
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
    [sym_keyword] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(138),
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
    [sym_keyword] = ACTIONS(112),
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
  [18] = {
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
    [aux_sym__intertoken_token1] = ACTIONS(142),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(142),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(142),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [sym_keyword] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(134),
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
    [sym__token] = STATE(7),
    [sym__intertoken] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_directive] = STATE(7),
    [sym_block_comment] = STATE(7),
    [sym__datum] = STATE(7),
    [sym_number] = STATE(7),
    [sym_string] = STATE(7),
    [sym_symbol] = STATE(7),
    [sym_list] = STATE(7),
    [sym_quote] = STATE(7),
    [sym_quasiquote] = STATE(7),
    [sym_syntax] = STATE(7),
    [sym_quasisyntax] = STATE(7),
    [sym_unquote] = STATE(7),
    [sym_unquote_splicing] = STATE(7),
    [sym_unsyntax] = STATE(7),
    [sym_unsyntax_splicing] = STATE(7),
    [sym_vector] = STATE(7),
    [sym_byte_vector] = STATE(7),
    [aux_sym_program_repeat1] = STATE(7),
    [aux_sym__intertoken_token1] = ACTIONS(144),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(144),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(144),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [sym_keyword] = ACTIONS(144),
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
  [20] = {
    [sym__token] = STATE(13),
    [sym__intertoken] = STATE(13),
    [sym_comment] = STATE(13),
    [sym_directive] = STATE(13),
    [sym_block_comment] = STATE(13),
    [sym__datum] = STATE(13),
    [sym_number] = STATE(13),
    [sym_string] = STATE(13),
    [sym_symbol] = STATE(13),
    [sym_list] = STATE(13),
    [sym_quote] = STATE(13),
    [sym_quasiquote] = STATE(13),
    [sym_syntax] = STATE(13),
    [sym_quasisyntax] = STATE(13),
    [sym_unquote] = STATE(13),
    [sym_unquote_splicing] = STATE(13),
    [sym_unsyntax] = STATE(13),
    [sym_unsyntax_splicing] = STATE(13),
    [sym_vector] = STATE(13),
    [sym_byte_vector] = STATE(13),
    [aux_sym_program_repeat1] = STATE(13),
    [aux_sym__intertoken_token1] = ACTIONS(146),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(146),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(146),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [sym_keyword] = ACTIONS(146),
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
  [21] = {
    [sym__token] = STATE(3),
    [sym__intertoken] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_directive] = STATE(3),
    [sym_block_comment] = STATE(3),
    [sym__datum] = STATE(3),
    [sym_number] = STATE(3),
    [sym_string] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_list] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_quasiquote] = STATE(3),
    [sym_syntax] = STATE(3),
    [sym_quasisyntax] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_unquote_splicing] = STATE(3),
    [sym_unsyntax] = STATE(3),
    [sym_unsyntax_splicing] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_byte_vector] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
    [aux_sym__intertoken_token1] = ACTIONS(150),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(150),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(150),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [sym_keyword] = ACTIONS(150),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(152),
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
    [aux_sym__intertoken_token1] = ACTIONS(154),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(154),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(154),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [sym_keyword] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(156),
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
    [ts_builtin_sym_end] = ACTIONS(158),
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
    [sym_keyword] = ACTIONS(112),
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
    [sym_keyword] = ACTIONS(162),
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
    [sym_keyword] = ACTIONS(196),
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
    [sym_keyword] = ACTIONS(200),
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
    [sym_keyword] = ACTIONS(204),
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
    [sym_boolean] = ACTIONS(206),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(206),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [sym_keyword] = ACTIONS(206),
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
    [aux_sym__intertoken_token1] = ACTIONS(208),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(210),
    [aux_sym_number_token1] = ACTIONS(164),
    [sym_character] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [aux_sym_symbol_token1] = ACTIONS(168),
    [sym_keyword] = ACTIONS(210),
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
  [30] = {
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
    [sym_boolean] = ACTIONS(212),
    [aux_sym_number_token1] = ACTIONS(164),
    [sym_character] = ACTIONS(212),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [aux_sym_symbol_token1] = ACTIONS(168),
    [sym_keyword] = ACTIONS(212),
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
  [31] = {
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
    [sym_boolean] = ACTIONS(214),
    [aux_sym_number_token1] = ACTIONS(164),
    [sym_character] = ACTIONS(214),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [aux_sym_symbol_token1] = ACTIONS(168),
    [sym_keyword] = ACTIONS(214),
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
  [32] = {
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
    [sym_boolean] = ACTIONS(216),
    [aux_sym_number_token1] = ACTIONS(164),
    [sym_character] = ACTIONS(216),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [aux_sym_symbol_token1] = ACTIONS(168),
    [sym_keyword] = ACTIONS(216),
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
    [sym__intertoken] = STATE(28),
    [sym_comment] = STATE(28),
    [sym_directive] = STATE(28),
    [sym_block_comment] = STATE(28),
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
    [aux_sym_comment_repeat1] = STATE(28),
    [aux_sym__intertoken_token1] = ACTIONS(218),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(220),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(220),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [sym_keyword] = ACTIONS(220),
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
  [34] = {
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
    [aux_sym__intertoken_token1] = ACTIONS(222),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(224),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(224),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [sym_keyword] = ACTIONS(224),
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
  [35] = {
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
    [aux_sym__intertoken_token1] = ACTIONS(226),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(228),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [sym_keyword] = ACTIONS(228),
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
    [sym_keyword] = ACTIONS(230),
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
    [sym_keyword] = ACTIONS(232),
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
    [sym_keyword] = ACTIONS(234),
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
    [sym_keyword] = ACTIONS(236),
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
    [sym_keyword] = ACTIONS(238),
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
    [sym_keyword] = ACTIONS(240),
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
    [sym_keyword] = ACTIONS(242),
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
    [sym_keyword] = ACTIONS(246),
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
    [sym_keyword] = ACTIONS(248),
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
    [sym_keyword] = ACTIONS(250),
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
    [sym__intertoken] = STATE(30),
    [sym_comment] = STATE(30),
    [sym_directive] = STATE(30),
    [sym_block_comment] = STATE(30),
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
    [aux_sym_comment_repeat1] = STATE(30),
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
    [sym_keyword] = ACTIONS(254),
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
    [sym_keyword] = ACTIONS(256),
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
    [sym_keyword] = ACTIONS(260),
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
    [sym_keyword] = ACTIONS(262),
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
    [sym__intertoken] = STATE(31),
    [sym_comment] = STATE(31),
    [sym_directive] = STATE(31),
    [sym_block_comment] = STATE(31),
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
    [aux_sym_comment_repeat1] = STATE(31),
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
    [sym_keyword] = ACTIONS(266),
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
    [sym_keyword] = ACTIONS(268),
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
    [sym__intertoken] = STATE(32),
    [sym_comment] = STATE(32),
    [sym_directive] = STATE(32),
    [sym_block_comment] = STATE(32),
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
    [aux_sym_comment_repeat1] = STATE(32),
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
    [sym_keyword] = ACTIONS(272),
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
    [sym_keyword] = ACTIONS(276),
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
    [sym_keyword] = ACTIONS(280),
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
    [sym_keyword] = ACTIONS(284),
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
    [sym_keyword] = ACTIONS(288),
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
    [sym_keyword] = ACTIONS(292),
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
    [sym_keyword] = ACTIONS(296),
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
    [sym_keyword] = ACTIONS(300),
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
  [60] = {
    [sym__intertoken] = STATE(60),
    [sym_comment] = STATE(60),
    [sym_directive] = STATE(60),
    [sym_block_comment] = STATE(60),
    [aux_sym_comment_repeat1] = STATE(60),
    [aux_sym__intertoken_token1] = ACTIONS(302),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(308),
    [anon_sym_POUND_BANG] = ACTIONS(311),
    [anon_sym_POUND_PIPE] = ACTIONS(314),
    [sym_boolean] = ACTIONS(317),
    [aux_sym_number_token1] = ACTIONS(319),
    [sym_character] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [aux_sym_symbol_token1] = ACTIONS(319),
    [sym_keyword] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(317),
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_SQUOTE] = ACTIONS(317),
    [anon_sym_BQUOTE] = ACTIONS(317),
    [anon_sym_POUND_SQUOTE] = ACTIONS(317),
    [anon_sym_POUND_BQUOTE] = ACTIONS(317),
    [anon_sym_COMMA] = ACTIONS(319),
    [anon_sym_COMMA_AT] = ACTIONS(317),
    [anon_sym_POUND_COMMA] = ACTIONS(319),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(317),
    [anon_sym_POUND_LPAREN] = ACTIONS(317),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(317),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(323), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(321), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
  [33] = 2,
    ACTIONS(327), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(325), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
  [66] = 2,
    ACTIONS(331), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(329), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
  [99] = 2,
    ACTIONS(335), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(333), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
  [132] = 2,
    ACTIONS(339), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(337), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
  [165] = 2,
    ACTIONS(343), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(341), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
  [198] = 2,
    ACTIONS(347), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(345), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
  [231] = 2,
    ACTIONS(351), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(349), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
  [264] = 2,
    ACTIONS(355), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(353), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
  [297] = 2,
    ACTIONS(359), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(357), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
  [330] = 2,
    ACTIONS(363), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(361), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
  [363] = 2,
    ACTIONS(367), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(365), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
  [396] = 2,
    ACTIONS(371), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(369), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
    ACTIONS(375), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(373), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
  [462] = 2,
    ACTIONS(379), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(377), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
  [495] = 2,
    ACTIONS(383), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(381), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
  [528] = 2,
    ACTIONS(387), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(385), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
  [561] = 2,
    ACTIONS(391), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(389), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
  [594] = 2,
    ACTIONS(395), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(393), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
  [627] = 2,
    ACTIONS(399), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(397), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
  [660] = 2,
    ACTIONS(403), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(401), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
  [693] = 2,
    ACTIONS(407), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(405), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
  [726] = 2,
    ACTIONS(411), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(409), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
  [759] = 2,
    ACTIONS(415), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(413), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
  [792] = 2,
    ACTIONS(419), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(417), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
  [825] = 2,
    ACTIONS(423), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(421), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
  [858] = 2,
    ACTIONS(427), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(425), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
  [891] = 2,
    ACTIONS(431), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(429), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
  [924] = 2,
    ACTIONS(435), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(433), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
  [957] = 2,
    ACTIONS(439), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(437), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
  [990] = 2,
    ACTIONS(443), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(441), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
  [1023] = 2,
    ACTIONS(447), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(445), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
  [1056] = 2,
    ACTIONS(451), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(449), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
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
  [1089] = 8,
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
  [1118] = 8,
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
  [1147] = 8,
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
  [1176] = 8,
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
  [1205] = 7,
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
  [1231] = 1,
    ACTIONS(425), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1240] = 1,
    ACTIONS(361), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1249] = 1,
    ACTIONS(433), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1258] = 1,
    ACTIONS(445), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1267] = 1,
    ACTIONS(389), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1276] = 1,
    ACTIONS(377), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1285] = 1,
    ACTIONS(417), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1294] = 1,
    ACTIONS(381), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1303] = 1,
    ACTIONS(413), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1312] = 1,
    ACTIONS(429), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1321] = 1,
    ACTIONS(409), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1330] = 1,
    ACTIONS(405), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1339] = 1,
    ACTIONS(401), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1348] = 1,
    ACTIONS(397), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1357] = 1,
    ACTIONS(325), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1366] = 1,
    ACTIONS(393), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1375] = 1,
    ACTIONS(329), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1384] = 1,
    ACTIONS(337), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1393] = 1,
    ACTIONS(341), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1402] = 1,
    ACTIONS(345), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1411] = 1,
    ACTIONS(349), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1420] = 1,
    ACTIONS(353), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1429] = 1,
    ACTIONS(357), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1438] = 1,
    ACTIONS(333), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1447] = 1,
    ACTIONS(365), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1456] = 1,
    ACTIONS(321), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1465] = 1,
    ACTIONS(369), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1474] = 1,
    ACTIONS(373), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1483] = 1,
    ACTIONS(385), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1492] = 1,
    ACTIONS(421), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1501] = 1,
    ACTIONS(437), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1510] = 1,
    ACTIONS(441), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1519] = 1,
    ACTIONS(449), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1528] = 4,
    ACTIONS(486), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(488), 1,
      aux_sym_block_comment_token1,
    ACTIONS(490), 1,
      anon_sym_PIPE_POUND,
    STATE(134), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1542] = 4,
    ACTIONS(486), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(492), 1,
      aux_sym_block_comment_token1,
    ACTIONS(494), 1,
      anon_sym_PIPE_POUND,
    STATE(136), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1556] = 4,
    ACTIONS(486), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(492), 1,
      aux_sym_block_comment_token1,
    ACTIONS(496), 1,
      anon_sym_PIPE_POUND,
    STATE(136), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1570] = 4,
    ACTIONS(486), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(498), 1,
      aux_sym_block_comment_token1,
    ACTIONS(500), 1,
      anon_sym_PIPE_POUND,
    STATE(133), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1584] = 4,
    ACTIONS(502), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(505), 1,
      aux_sym_block_comment_token1,
    ACTIONS(508), 1,
      anon_sym_PIPE_POUND,
    STATE(136), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1598] = 4,
    ACTIONS(486), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(510), 1,
      aux_sym_block_comment_token1,
    ACTIONS(512), 1,
      anon_sym_PIPE_POUND,
    STATE(138), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1612] = 4,
    ACTIONS(486), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(492), 1,
      aux_sym_block_comment_token1,
    ACTIONS(514), 1,
      anon_sym_PIPE_POUND,
    STATE(136), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1626] = 3,
    ACTIONS(516), 1,
      anon_sym_DQUOTE,
    STATE(140), 1,
      aux_sym_string_repeat1,
    ACTIONS(518), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1637] = 3,
    ACTIONS(520), 1,
      anon_sym_DQUOTE,
    STATE(143), 1,
      aux_sym_string_repeat1,
    ACTIONS(522), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1648] = 3,
    ACTIONS(524), 1,
      anon_sym_DQUOTE,
    STATE(143), 1,
      aux_sym_string_repeat1,
    ACTIONS(522), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1659] = 3,
    ACTIONS(526), 1,
      anon_sym_DQUOTE,
    STATE(141), 1,
      aux_sym_string_repeat1,
    ACTIONS(528), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1670] = 3,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    STATE(143), 1,
      aux_sym_string_repeat1,
    ACTIONS(532), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1681] = 2,
    ACTIONS(395), 1,
      aux_sym_block_comment_token1,
    ACTIONS(393), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [1689] = 2,
    ACTIONS(439), 1,
      aux_sym_block_comment_token1,
    ACTIONS(437), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [1697] = 1,
    ACTIONS(535), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(61)] = 0,
  [SMALL_STATE(62)] = 33,
  [SMALL_STATE(63)] = 66,
  [SMALL_STATE(64)] = 99,
  [SMALL_STATE(65)] = 132,
  [SMALL_STATE(66)] = 165,
  [SMALL_STATE(67)] = 198,
  [SMALL_STATE(68)] = 231,
  [SMALL_STATE(69)] = 264,
  [SMALL_STATE(70)] = 297,
  [SMALL_STATE(71)] = 330,
  [SMALL_STATE(72)] = 363,
  [SMALL_STATE(73)] = 396,
  [SMALL_STATE(74)] = 429,
  [SMALL_STATE(75)] = 462,
  [SMALL_STATE(76)] = 495,
  [SMALL_STATE(77)] = 528,
  [SMALL_STATE(78)] = 561,
  [SMALL_STATE(79)] = 594,
  [SMALL_STATE(80)] = 627,
  [SMALL_STATE(81)] = 660,
  [SMALL_STATE(82)] = 693,
  [SMALL_STATE(83)] = 726,
  [SMALL_STATE(84)] = 759,
  [SMALL_STATE(85)] = 792,
  [SMALL_STATE(86)] = 825,
  [SMALL_STATE(87)] = 858,
  [SMALL_STATE(88)] = 891,
  [SMALL_STATE(89)] = 924,
  [SMALL_STATE(90)] = 957,
  [SMALL_STATE(91)] = 990,
  [SMALL_STATE(92)] = 1023,
  [SMALL_STATE(93)] = 1056,
  [SMALL_STATE(94)] = 1089,
  [SMALL_STATE(95)] = 1118,
  [SMALL_STATE(96)] = 1147,
  [SMALL_STATE(97)] = 1176,
  [SMALL_STATE(98)] = 1205,
  [SMALL_STATE(99)] = 1231,
  [SMALL_STATE(100)] = 1240,
  [SMALL_STATE(101)] = 1249,
  [SMALL_STATE(102)] = 1258,
  [SMALL_STATE(103)] = 1267,
  [SMALL_STATE(104)] = 1276,
  [SMALL_STATE(105)] = 1285,
  [SMALL_STATE(106)] = 1294,
  [SMALL_STATE(107)] = 1303,
  [SMALL_STATE(108)] = 1312,
  [SMALL_STATE(109)] = 1321,
  [SMALL_STATE(110)] = 1330,
  [SMALL_STATE(111)] = 1339,
  [SMALL_STATE(112)] = 1348,
  [SMALL_STATE(113)] = 1357,
  [SMALL_STATE(114)] = 1366,
  [SMALL_STATE(115)] = 1375,
  [SMALL_STATE(116)] = 1384,
  [SMALL_STATE(117)] = 1393,
  [SMALL_STATE(118)] = 1402,
  [SMALL_STATE(119)] = 1411,
  [SMALL_STATE(120)] = 1420,
  [SMALL_STATE(121)] = 1429,
  [SMALL_STATE(122)] = 1438,
  [SMALL_STATE(123)] = 1447,
  [SMALL_STATE(124)] = 1456,
  [SMALL_STATE(125)] = 1465,
  [SMALL_STATE(126)] = 1474,
  [SMALL_STATE(127)] = 1483,
  [SMALL_STATE(128)] = 1492,
  [SMALL_STATE(129)] = 1501,
  [SMALL_STATE(130)] = 1510,
  [SMALL_STATE(131)] = 1519,
  [SMALL_STATE(132)] = 1528,
  [SMALL_STATE(133)] = 1542,
  [SMALL_STATE(134)] = 1556,
  [SMALL_STATE(135)] = 1570,
  [SMALL_STATE(136)] = 1584,
  [SMALL_STATE(137)] = 1598,
  [SMALL_STATE(138)] = 1612,
  [SMALL_STATE(139)] = 1626,
  [SMALL_STATE(140)] = 1637,
  [SMALL_STATE(141)] = 1648,
  [SMALL_STATE(142)] = 1659,
  [SMALL_STATE(143)] = 1670,
  [SMALL_STATE(144)] = 1681,
  [SMALL_STATE(145)] = 1689,
  [SMALL_STATE(146)] = 1697,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(78),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(33),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(97),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(135),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(75),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(142),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(76),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(56),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(55),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(53),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(35),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(34),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(43),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(27),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(20),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
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
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(33),
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
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(98),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(103),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(29),
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
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(143),
  [535] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
