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
#define STATE_COUNT 139
#define LARGE_STATE_COUNT 60
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym__skip_token1 = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_POUND_SEMI = 3,
  anon_sym_POUND_BANG = 4,
  anon_sym_POUND_PIPE = 5,
  aux_sym_block_comment_token1 = 6,
  anon_sym_PIPE_POUND = 7,
  sym_boolean = 8,
  sym_number = 9,
  sym_character = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_string_token1 = 12,
  sym_escape_sequence = 13,
  sym_symbol = 14,
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
  sym__skip = 33,
  sym_comment = 34,
  sym_directive = 35,
  sym_block_comment = 36,
  sym__datum = 37,
  sym_string = 38,
  sym_list = 39,
  sym_quote = 40,
  sym_quasiquote = 41,
  sym_syntax = 42,
  sym_quasisyntax = 43,
  sym_unquote = 44,
  sym_unquote_splicing = 45,
  sym_unsyntax = 46,
  sym_unsyntax_splicing = 47,
  sym_vector = 48,
  sym_byte_vector = 49,
  aux_sym_program_repeat1 = 50,
  aux_sym_comment_repeat1 = 51,
  aux_sym_block_comment_repeat1 = 52,
  aux_sym_string_repeat1 = 53,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__skip_token1] = "_skip_token1",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_POUND_SEMI] = "#;",
  [anon_sym_POUND_BANG] = "#!",
  [anon_sym_POUND_PIPE] = "#|",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_PIPE_POUND] = "|#",
  [sym_boolean] = "boolean",
  [sym_number] = "number",
  [sym_character] = "character",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_symbol] = "symbol",
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
  [sym__skip] = "_skip",
  [sym_comment] = "comment",
  [sym_directive] = "directive",
  [sym_block_comment] = "block_comment",
  [sym__datum] = "_datum",
  [sym_string] = "string",
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
  [aux_sym__skip_token1] = aux_sym__skip_token1,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_POUND_SEMI] = anon_sym_POUND_SEMI,
  [anon_sym_POUND_BANG] = anon_sym_POUND_BANG,
  [anon_sym_POUND_PIPE] = anon_sym_POUND_PIPE,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_PIPE_POUND] = anon_sym_PIPE_POUND,
  [sym_boolean] = sym_boolean,
  [sym_number] = sym_number,
  [sym_character] = sym_character,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_symbol] = sym_symbol,
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
  [sym__skip] = sym__skip,
  [sym_comment] = sym_comment,
  [sym_directive] = sym_directive,
  [sym_block_comment] = sym_block_comment,
  [sym__datum] = sym__datum,
  [sym_string] = sym_string,
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
  [aux_sym__skip_token1] = {
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
  [sym_number] = {
    .visible = true,
    .named = true,
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
  [sym__skip] = {
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
  [sym_string] = {
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
  [5] = 3,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 4,
  [12] = 12,
  [13] = 6,
  [14] = 14,
  [15] = 10,
  [16] = 9,
  [17] = 8,
  [18] = 12,
  [19] = 19,
  [20] = 14,
  [21] = 21,
  [22] = 19,
  [23] = 7,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 28,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 25,
  [39] = 39,
  [40] = 39,
  [41] = 41,
  [42] = 37,
  [43] = 36,
  [44] = 35,
  [45] = 34,
  [46] = 27,
  [47] = 30,
  [48] = 26,
  [49] = 24,
  [50] = 41,
  [51] = 51,
  [52] = 31,
  [53] = 53,
  [54] = 54,
  [55] = 32,
  [56] = 33,
  [57] = 51,
  [58] = 53,
  [59] = 54,
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
  [92] = 91,
  [93] = 93,
  [94] = 94,
  [95] = 60,
  [96] = 65,
  [97] = 82,
  [98] = 86,
  [99] = 78,
  [100] = 88,
  [101] = 75,
  [102] = 83,
  [103] = 62,
  [104] = 81,
  [105] = 80,
  [106] = 79,
  [107] = 76,
  [108] = 84,
  [109] = 63,
  [110] = 64,
  [111] = 69,
  [112] = 66,
  [113] = 67,
  [114] = 68,
  [115] = 90,
  [116] = 89,
  [117] = 117,
  [118] = 71,
  [119] = 72,
  [120] = 120,
  [121] = 87,
  [122] = 120,
  [123] = 120,
  [124] = 70,
  [125] = 85,
  [126] = 117,
  [127] = 127,
  [128] = 61,
  [129] = 74,
  [130] = 117,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 131,
  [135] = 133,
  [136] = 76,
  [137] = 75,
  [138] = 138,
};

static inline bool aux_sym__skip_token1_character_set_1(int32_t c) {
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

static inline bool sym_symbol_character_set_2(int32_t c) {
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

static inline bool sym_symbol_character_set_3(int32_t c) {
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

static inline bool sym_symbol_character_set_4(int32_t c) {
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
      if (eof) ADVANCE(195);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(196);
      if (lookahead == '"') ADVANCE(357);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '\'') ADVANCE(423);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == ')') ADVANCE(418);
      if (lookahead == ',') ADVANCE(427);
      if (lookahead == ';') ADVANCE(197);
      if (lookahead == '[') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == ']') ADVANCE(420);
      if (lookahead == '`') ADVANCE(424);
      if (lookahead == '{') ADVANCE(421);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == '}') ADVANCE(422);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(360);
      if (lookahead == '\r') ADVANCE(361);
      if (lookahead == 'x') ADVANCE(188);
      if (lookahead == 133 ||
          lookahead == 8232) ADVANCE(362);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(360);
      if (lookahead == '\r') ADVANCE(361);
      if (lookahead == 133 ||
          lookahead == 8232) ADVANCE(362);
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
      if (lookahead == '!') ADVANCE(199);
      if (lookahead == '\'') ADVANCE(425);
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == ',') ADVANCE(430);
      if (lookahead == ';') ADVANCE(198);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(210);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(20);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(5);
      if (lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(205);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(259);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(272);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '`') ADVANCE(426);
      if (lookahead == 'v') ADVANCE(122);
      if (lookahead == '|') ADVANCE(200);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(133);
      if (lookahead == '.') ADVANCE(163);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(206);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(206);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '|') ADVANCE(158);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '|') ADVANCE(158);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(206);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(206);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == ';') ADVANCE(197);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(416);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '.') ADVANCE(163);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == 'i') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'i') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '(') ADVANCE(433);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(49);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '/') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '|') ADVANCE(158);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(163);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == 'i') ADVANCE(321);
      if (lookahead == 'n') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(320);
      if (lookahead == 'n') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(162);
      if (lookahead == 'i') ADVANCE(320);
      if (lookahead == 'n') ADVANCE(62);
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
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == '/') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == 'i') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == '0') ADVANCE(206);
      END_STATE();
    case 48:
      if (lookahead == '0') ADVANCE(84);
      END_STATE();
    case 49:
      if (lookahead == '0') ADVANCE(297);
      END_STATE();
    case 50:
      if (lookahead == '0') ADVANCE(308);
      END_STATE();
    case 51:
      if (lookahead == '0') ADVANCE(300);
      END_STATE();
    case 52:
      if (lookahead == '0') ADVANCE(303);
      END_STATE();
    case 53:
      if (lookahead == '8') ADVANCE(25);
      END_STATE();
    case 54:
      if (lookahead == ';') ADVANCE(198);
      if (lookahead == '|') ADVANCE(200);
      END_STATE();
    case 55:
      if (lookahead == ';') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead == 'b') ADVANCE(345);
      if (lookahead == 'd') ADVANCE(348);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == 'l') ADVANCE(351);
      if (lookahead == 'n') ADVANCE(349);
      if (lookahead == 'p') ADVANCE(346);
      if (lookahead == 'r') ADVANCE(350);
      if (lookahead == 's') ADVANCE(353);
      if (lookahead == 't') ADVANCE(347);
      if (lookahead == 'v') ADVANCE(355);
      if (lookahead == 'x') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(344);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 66:
      if (lookahead == 'b') ADVANCE(344);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(344);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(344);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 76:
      if (lookahead == 'f') ADVANCE(26);
      END_STATE();
    case 77:
      if (lookahead == 'f') ADVANCE(75);
      END_STATE();
    case 78:
      if (lookahead == 'f') ADVANCE(29);
      END_STATE();
    case 79:
      if (lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 80:
      if (lookahead == 'f') ADVANCE(41);
      END_STATE();
    case 81:
      if (lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 82:
      if (lookahead == 'f') ADVANCE(43);
      END_STATE();
    case 83:
      if (lookahead == 'g') ADVANCE(71);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '|') ADVANCE(158);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '|') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(13);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(88);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(22);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(90);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(320);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == '|') ADVANCE(158);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(13);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(320);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == '|') ADVANCE(158);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(44);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(320);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == '|') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(22);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(320);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == '|') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(45);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(320);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == '|') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(320);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == '|') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 101:
      if (lookahead == 'k') ADVANCE(119);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(344);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(344);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(344);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 116:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 122:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 124:
      if (lookahead == 'w') ADVANCE(104);
      END_STATE();
    case 125:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      END_STATE();
    case 126:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 127:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 128:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 129:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 130:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 131:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 132:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 133:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(287);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(28);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(289);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(291);
      END_STATE();
    case 134:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(249);
      END_STATE();
    case 135:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(243);
      END_STATE();
    case 136:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(256);
      END_STATE();
    case 137:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(15);
      END_STATE();
    case 138:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(88);
      END_STATE();
    case 139:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(251);
      END_STATE();
    case 140:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(258);
      END_STATE();
    case 141:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(338);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(287);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(262);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(244);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(269);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(16);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(90);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(264);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(271);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(340);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 171:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 172:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 173:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(273);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(343);
      END_STATE();
    case 193:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '|') ADVANCE(201);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '|') ADVANCE(202);
      END_STATE();
    case 194:
      if (eof) ADVANCE(195);
      if (lookahead == '"') ADVANCE(357);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(423);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == ')') ADVANCE(418);
      if (lookahead == ',') ADVANCE(428);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == ';') ADVANCE(197);
      if (lookahead == '[') ADVANCE(419);
      if (lookahead == ']') ADVANCE(420);
      if (lookahead == '`') ADVANCE(424);
      if (lookahead == '{') ADVANCE(421);
      if (lookahead == '}') ADVANCE(422);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(416);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__skip_token1);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '#') ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '|') ADVANCE(200);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '.') ADVANCE(211);
      if (lookahead == '/') ADVANCE(400);
      if (lookahead == '@') ADVANCE(372);
      if (lookahead == '|') ADVANCE(401);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(373);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '.') ADVANCE(212);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(132);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '.') ADVANCE(213);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '|') ADVANCE(182);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(142);
      if (lookahead == '@') ADVANCE(324);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(286);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(217);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '@') ADVANCE(372);
      if (lookahead == '|') ADVANCE(401);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(373);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(132);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '|') ADVANCE(182);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '.') ADVANCE(219);
      if (lookahead == '/') ADVANCE(403);
      if (lookahead == '@') ADVANCE(372);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '|') ADVANCE(404);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(373);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '.') ADVANCE(220);
      if (lookahead == '/') ADVANCE(168);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '|') ADVANCE(183);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == '@') ADVANCE(324);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(95);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '@') ADVANCE(334);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '@') ADVANCE(372);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '|') ADVANCE(404);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(373);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '|') ADVANCE(183);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '@') ADVANCE(372);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '/') ADVANCE(409);
      if (lookahead == '|') ADVANCE(408);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == '/') ADVANCE(157);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == '/') ADVANCE(157);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '.') ADVANCE(238);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '|') ADVANCE(154);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '/') ADVANCE(135);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '@') ADVANCE(324);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(95);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '@') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '@') ADVANCE(372);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == '|') ADVANCE(154);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == '|') ADVANCE(408);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(240);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(240);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '/') ADVANCE(146);
      if (lookahead == '@') ADVANCE(325);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '/') ADVANCE(151);
      if (lookahead == '@') ADVANCE(335);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(89);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '@') ADVANCE(324);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(95);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '@') ADVANCE(334);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '@') ADVANCE(334);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(252);
      if (lookahead == '/') ADVANCE(147);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(252);
      if (lookahead == '/') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == '@') ADVANCE(325);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead == '@') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(89);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '@') ADVANCE(324);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(95);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '@') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '@') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '@') ADVANCE(325);
      if (lookahead == '|') ADVANCE(175);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(247);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(261);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '@') ADVANCE(326);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(261);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(92);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == '@') ADVANCE(325);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == '@') ADVANCE(335);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(89);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == '@') ADVANCE(335);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(265);
      if (lookahead == '/') ADVANCE(185);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(265);
      if (lookahead == '/') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '@') ADVANCE(326);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(92);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '@') ADVANCE(325);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '@') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(89);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '@') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '@') ADVANCE(326);
      if (lookahead == '|') ADVANCE(178);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(260);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '@') ADVANCE(326);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(92);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(277);
      if (lookahead == '@') ADVANCE(326);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(277);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(92);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(277);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(332);
      if (lookahead == '/') ADVANCE(408);
      if (lookahead == '|') ADVANCE(408);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(330);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '|') ADVANCE(154);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(372);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '|') ADVANCE(404);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(372);
      if (lookahead == '|') ADVANCE(401);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(324);
      if (lookahead == 'i') ADVANCE(318);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == '|') ADVANCE(169);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(95);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(232);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(324);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(286);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(217);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(325);
      if (lookahead == 'i') ADVANCE(322);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == '|') ADVANCE(177);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(254);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(325);
      if (lookahead == '|') ADVANCE(175);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(247);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(326);
      if (lookahead == 'i') ADVANCE(323);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == '|') ADVANCE(179);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(326);
      if (lookahead == '|') ADVANCE(178);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(260);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(376);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(375);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(327);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(327);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(327);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(328);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(328);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(328);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(329);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(329);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(329);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '|') ADVANCE(183);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '|') ADVANCE(182);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == '|') ADVANCE(154);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(231);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == '|') ADVANCE(154);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(281);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == '|') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(253);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == '|') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(282);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == '|') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == '|') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(283);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(383);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(384);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(154);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(311);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(231);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(154);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(253);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(154);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(154);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(312);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(281);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(154);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(282);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(154);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(283);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(154);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(408);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(337);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(231);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(253);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(231);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(253);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(360);
      if (lookahead == '\r') ADVANCE(361);
      if (lookahead == 133 ||
          lookahead == 8232) ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(362);
      if (lookahead == 133) ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(362);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '.') ADVANCE(364);
      if (lookahead == '/') ADVANCE(411);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '|') ADVANCE(412);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(363);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(416);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '|') ADVANCE(412);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(416);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(365);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(416);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(378);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == '/') ADVANCE(412);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '|') ADVANCE(412);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      if (!sym_symbol_character_set_4(lookahead)) ADVANCE(416);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(399);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == 'n') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(379);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(377);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(406);
      if (lookahead == 'i') ADVANCE(393);
      if (lookahead == 'n') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(406);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(407);
      if (lookahead == 'i') ADVANCE(319);
      if (lookahead == 'n') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(363);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(414);
      if (lookahead == 'i') ADVANCE(393);
      if (lookahead == 'n') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(414);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(415);
      if (lookahead == 'i') ADVANCE(319);
      if (lookahead == 'n') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(206);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(294);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(389);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(390);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(391);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(392);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(366);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(369);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(370);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '|') ADVANCE(412);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(386);
      if (!sym_symbol_character_set_4(lookahead)) ADVANCE(416);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '|') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(387);
      if (!sym_symbol_character_set_4(lookahead)) ADVANCE(416);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(388);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(206);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(366);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(369);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(370);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(385);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(387);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(365);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(388);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(387);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(386);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_symbol);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_POUND_BQUOTE);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(429);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA);
      if (lookahead == '@') ADVANCE(431);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA_AT);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_POUNDvu8_LPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 194},
  [2] = {.lex_state = 194},
  [3] = {.lex_state = 194},
  [4] = {.lex_state = 194},
  [5] = {.lex_state = 194},
  [6] = {.lex_state = 194},
  [7] = {.lex_state = 194},
  [8] = {.lex_state = 194},
  [9] = {.lex_state = 194},
  [10] = {.lex_state = 194},
  [11] = {.lex_state = 194},
  [12] = {.lex_state = 194},
  [13] = {.lex_state = 194},
  [14] = {.lex_state = 194},
  [15] = {.lex_state = 194},
  [16] = {.lex_state = 194},
  [17] = {.lex_state = 194},
  [18] = {.lex_state = 194},
  [19] = {.lex_state = 194},
  [20] = {.lex_state = 194},
  [21] = {.lex_state = 194},
  [22] = {.lex_state = 194},
  [23] = {.lex_state = 194},
  [24] = {.lex_state = 194},
  [25] = {.lex_state = 194},
  [26] = {.lex_state = 194},
  [27] = {.lex_state = 194},
  [28] = {.lex_state = 194},
  [29] = {.lex_state = 194},
  [30] = {.lex_state = 194},
  [31] = {.lex_state = 194},
  [32] = {.lex_state = 194},
  [33] = {.lex_state = 194},
  [34] = {.lex_state = 194},
  [35] = {.lex_state = 194},
  [36] = {.lex_state = 194},
  [37] = {.lex_state = 194},
  [38] = {.lex_state = 194},
  [39] = {.lex_state = 194},
  [40] = {.lex_state = 194},
  [41] = {.lex_state = 194},
  [42] = {.lex_state = 194},
  [43] = {.lex_state = 194},
  [44] = {.lex_state = 194},
  [45] = {.lex_state = 194},
  [46] = {.lex_state = 194},
  [47] = {.lex_state = 194},
  [48] = {.lex_state = 194},
  [49] = {.lex_state = 194},
  [50] = {.lex_state = 194},
  [51] = {.lex_state = 194},
  [52] = {.lex_state = 194},
  [53] = {.lex_state = 194},
  [54] = {.lex_state = 194},
  [55] = {.lex_state = 194},
  [56] = {.lex_state = 194},
  [57] = {.lex_state = 194},
  [58] = {.lex_state = 194},
  [59] = {.lex_state = 194},
  [60] = {.lex_state = 194},
  [61] = {.lex_state = 194},
  [62] = {.lex_state = 194},
  [63] = {.lex_state = 194},
  [64] = {.lex_state = 194},
  [65] = {.lex_state = 194},
  [66] = {.lex_state = 194},
  [67] = {.lex_state = 194},
  [68] = {.lex_state = 194},
  [69] = {.lex_state = 194},
  [70] = {.lex_state = 194},
  [71] = {.lex_state = 194},
  [72] = {.lex_state = 194},
  [73] = {.lex_state = 194},
  [74] = {.lex_state = 194},
  [75] = {.lex_state = 194},
  [76] = {.lex_state = 194},
  [77] = {.lex_state = 194},
  [78] = {.lex_state = 194},
  [79] = {.lex_state = 194},
  [80] = {.lex_state = 194},
  [81] = {.lex_state = 194},
  [82] = {.lex_state = 194},
  [83] = {.lex_state = 194},
  [84] = {.lex_state = 194},
  [85] = {.lex_state = 194},
  [86] = {.lex_state = 194},
  [87] = {.lex_state = 194},
  [88] = {.lex_state = 194},
  [89] = {.lex_state = 194},
  [90] = {.lex_state = 194},
  [91] = {.lex_state = 194},
  [92] = {.lex_state = 19},
  [93] = {.lex_state = 19},
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
  [117] = {.lex_state = 193},
  [118] = {.lex_state = 19},
  [119] = {.lex_state = 19},
  [120] = {.lex_state = 193},
  [121] = {.lex_state = 19},
  [122] = {.lex_state = 193},
  [123] = {.lex_state = 193},
  [124] = {.lex_state = 19},
  [125] = {.lex_state = 19},
  [126] = {.lex_state = 193},
  [127] = {.lex_state = 193},
  [128] = {.lex_state = 19},
  [129] = {.lex_state = 19},
  [130] = {.lex_state = 193},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 193},
  [137] = {.lex_state = 193},
  [138] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__skip_token1] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_POUND_PIPE] = ACTIONS(1),
    [aux_sym_block_comment_token1] = ACTIONS(1),
    [anon_sym_PIPE_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
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
    [sym_program] = STATE(138),
    [sym__token] = STATE(21),
    [sym__skip] = STATE(21),
    [sym_comment] = STATE(21),
    [sym_directive] = STATE(21),
    [sym_block_comment] = STATE(21),
    [sym__datum] = STATE(21),
    [sym_string] = STATE(21),
    [sym_list] = STATE(21),
    [sym_quote] = STATE(21),
    [sym_quasiquote] = STATE(21),
    [sym_syntax] = STATE(21),
    [sym_quasisyntax] = STATE(21),
    [sym_unquote] = STATE(21),
    [sym_unquote_splicing] = STATE(21),
    [sym_unsyntax] = STATE(21),
    [sym_unsyntax_splicing] = STATE(21),
    [sym_vector] = STATE(21),
    [sym_byte_vector] = STATE(21),
    [aux_sym_program_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__skip_token1] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(5),
    [sym_number] = ACTIONS(5),
    [sym_character] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [2] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
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
    [ts_builtin_sym_end] = ACTIONS(45),
    [aux_sym__skip_token1] = ACTIONS(47),
    [aux_sym_comment_token1] = ACTIONS(50),
    [anon_sym_POUND_SEMI] = ACTIONS(53),
    [anon_sym_POUND_BANG] = ACTIONS(56),
    [anon_sym_POUND_PIPE] = ACTIONS(59),
    [sym_boolean] = ACTIONS(47),
    [sym_number] = ACTIONS(47),
    [sym_character] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(62),
    [sym_symbol] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_RPAREN] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_RBRACK] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(74),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [anon_sym_BQUOTE] = ACTIONS(80),
    [anon_sym_POUND_SQUOTE] = ACTIONS(83),
    [anon_sym_POUND_BQUOTE] = ACTIONS(86),
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_COMMA_AT] = ACTIONS(92),
    [anon_sym_POUND_COMMA] = ACTIONS(95),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(98),
    [anon_sym_POUND_LPAREN] = ACTIONS(101),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(104),
  },
  [3] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
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
    [aux_sym__skip_token1] = ACTIONS(107),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(107),
    [sym_number] = ACTIONS(107),
    [sym_character] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [4] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
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
    [aux_sym__skip_token1] = ACTIONS(107),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(107),
    [sym_number] = ACTIONS(107),
    [sym_character] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [5] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
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
    [aux_sym__skip_token1] = ACTIONS(107),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(107),
    [sym_number] = ACTIONS(107),
    [sym_character] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [6] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
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
    [aux_sym__skip_token1] = ACTIONS(107),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(107),
    [sym_number] = ACTIONS(107),
    [sym_character] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [7] = {
    [sym__token] = STATE(14),
    [sym__skip] = STATE(14),
    [sym_comment] = STATE(14),
    [sym_directive] = STATE(14),
    [sym_block_comment] = STATE(14),
    [sym__datum] = STATE(14),
    [sym_string] = STATE(14),
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
    [aux_sym__skip_token1] = ACTIONS(117),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(117),
    [sym_number] = ACTIONS(117),
    [sym_character] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [8] = {
    [sym__token] = STATE(13),
    [sym__skip] = STATE(13),
    [sym_comment] = STATE(13),
    [sym_directive] = STATE(13),
    [sym_block_comment] = STATE(13),
    [sym__datum] = STATE(13),
    [sym_string] = STATE(13),
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
    [aux_sym__skip_token1] = ACTIONS(123),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(123),
    [sym_number] = ACTIONS(123),
    [sym_character] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [9] = {
    [sym__token] = STATE(3),
    [sym__skip] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_directive] = STATE(3),
    [sym_block_comment] = STATE(3),
    [sym__datum] = STATE(3),
    [sym_string] = STATE(3),
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
    [aux_sym__skip_token1] = ACTIONS(127),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(127),
    [sym_number] = ACTIONS(127),
    [sym_character] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [10] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
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
    [aux_sym__skip_token1] = ACTIONS(107),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(107),
    [sym_number] = ACTIONS(107),
    [sym_character] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [11] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
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
    [aux_sym__skip_token1] = ACTIONS(107),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(107),
    [sym_number] = ACTIONS(107),
    [sym_character] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [12] = {
    [sym__token] = STATE(4),
    [sym__skip] = STATE(4),
    [sym_comment] = STATE(4),
    [sym_directive] = STATE(4),
    [sym_block_comment] = STATE(4),
    [sym__datum] = STATE(4),
    [sym_string] = STATE(4),
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
    [aux_sym__skip_token1] = ACTIONS(135),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(135),
    [sym_number] = ACTIONS(135),
    [sym_character] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [13] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
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
    [aux_sym__skip_token1] = ACTIONS(107),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(107),
    [sym_number] = ACTIONS(107),
    [sym_character] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [14] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
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
    [aux_sym__skip_token1] = ACTIONS(107),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(107),
    [sym_number] = ACTIONS(107),
    [sym_character] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [15] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
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
    [aux_sym__skip_token1] = ACTIONS(107),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(107),
    [sym_number] = ACTIONS(107),
    [sym_character] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [16] = {
    [sym__token] = STATE(5),
    [sym__skip] = STATE(5),
    [sym_comment] = STATE(5),
    [sym_directive] = STATE(5),
    [sym_block_comment] = STATE(5),
    [sym__datum] = STATE(5),
    [sym_string] = STATE(5),
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
    [aux_sym__skip_token1] = ACTIONS(143),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(143),
    [sym_number] = ACTIONS(143),
    [sym_character] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [17] = {
    [sym__token] = STATE(6),
    [sym__skip] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_directive] = STATE(6),
    [sym_block_comment] = STATE(6),
    [sym__datum] = STATE(6),
    [sym_string] = STATE(6),
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
    [aux_sym__skip_token1] = ACTIONS(149),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(149),
    [sym_number] = ACTIONS(149),
    [sym_character] = ACTIONS(149),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(147),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [18] = {
    [sym__token] = STATE(11),
    [sym__skip] = STATE(11),
    [sym_comment] = STATE(11),
    [sym_directive] = STATE(11),
    [sym_block_comment] = STATE(11),
    [sym__datum] = STATE(11),
    [sym_string] = STATE(11),
    [sym_list] = STATE(11),
    [sym_quote] = STATE(11),
    [sym_quasiquote] = STATE(11),
    [sym_syntax] = STATE(11),
    [sym_quasisyntax] = STATE(11),
    [sym_unquote] = STATE(11),
    [sym_unquote_splicing] = STATE(11),
    [sym_unsyntax] = STATE(11),
    [sym_unsyntax_splicing] = STATE(11),
    [sym_vector] = STATE(11),
    [sym_byte_vector] = STATE(11),
    [aux_sym_program_repeat1] = STATE(11),
    [aux_sym__skip_token1] = ACTIONS(153),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(153),
    [sym_number] = ACTIONS(153),
    [sym_character] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(155),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [19] = {
    [sym__token] = STATE(10),
    [sym__skip] = STATE(10),
    [sym_comment] = STATE(10),
    [sym_directive] = STATE(10),
    [sym_block_comment] = STATE(10),
    [sym__datum] = STATE(10),
    [sym_string] = STATE(10),
    [sym_list] = STATE(10),
    [sym_quote] = STATE(10),
    [sym_quasiquote] = STATE(10),
    [sym_syntax] = STATE(10),
    [sym_quasisyntax] = STATE(10),
    [sym_unquote] = STATE(10),
    [sym_unquote_splicing] = STATE(10),
    [sym_unsyntax] = STATE(10),
    [sym_unsyntax_splicing] = STATE(10),
    [sym_vector] = STATE(10),
    [sym_byte_vector] = STATE(10),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym__skip_token1] = ACTIONS(159),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(159),
    [sym_number] = ACTIONS(159),
    [sym_character] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [20] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
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
    [aux_sym__skip_token1] = ACTIONS(107),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(107),
    [sym_number] = ACTIONS(107),
    [sym_character] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [21] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
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
    [ts_builtin_sym_end] = ACTIONS(165),
    [aux_sym__skip_token1] = ACTIONS(107),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(107),
    [sym_number] = ACTIONS(107),
    [sym_character] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [22] = {
    [sym__token] = STATE(15),
    [sym__skip] = STATE(15),
    [sym_comment] = STATE(15),
    [sym_directive] = STATE(15),
    [sym_block_comment] = STATE(15),
    [sym__datum] = STATE(15),
    [sym_string] = STATE(15),
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
    [aux_sym__skip_token1] = ACTIONS(167),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(167),
    [sym_number] = ACTIONS(167),
    [sym_character] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [23] = {
    [sym__token] = STATE(20),
    [sym__skip] = STATE(20),
    [sym_comment] = STATE(20),
    [sym_directive] = STATE(20),
    [sym_block_comment] = STATE(20),
    [sym__datum] = STATE(20),
    [sym_string] = STATE(20),
    [sym_list] = STATE(20),
    [sym_quote] = STATE(20),
    [sym_quasiquote] = STATE(20),
    [sym_syntax] = STATE(20),
    [sym_quasisyntax] = STATE(20),
    [sym_unquote] = STATE(20),
    [sym_unquote_splicing] = STATE(20),
    [sym_unsyntax] = STATE(20),
    [sym_unsyntax_splicing] = STATE(20),
    [sym_vector] = STATE(20),
    [sym_byte_vector] = STATE(20),
    [aux_sym_program_repeat1] = STATE(20),
    [aux_sym__skip_token1] = ACTIONS(173),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(173),
    [sym_number] = ACTIONS(173),
    [sym_character] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [24] = {
    [sym__skip] = STATE(91),
    [sym_comment] = STATE(91),
    [sym_block_comment] = STATE(91),
    [sym__datum] = STATE(124),
    [sym_string] = STATE(124),
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
    [aux_sym_comment_repeat1] = STATE(91),
    [aux_sym__skip_token1] = ACTIONS(177),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(179),
    [sym_number] = ACTIONS(179),
    [sym_character] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [sym_symbol] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [anon_sym_POUND_SQUOTE] = ACTIONS(195),
    [anon_sym_POUND_BQUOTE] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_COMMA_AT] = ACTIONS(201),
    [anon_sym_POUND_COMMA] = ACTIONS(203),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(205),
    [anon_sym_POUND_LPAREN] = ACTIONS(207),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(209),
  },
  [25] = {
    [sym__skip] = STATE(91),
    [sym_comment] = STATE(91),
    [sym_block_comment] = STATE(91),
    [sym__datum] = STATE(67),
    [sym_string] = STATE(67),
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
    [aux_sym_comment_repeat1] = STATE(91),
    [aux_sym__skip_token1] = ACTIONS(177),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(211),
    [sym_number] = ACTIONS(211),
    [sym_character] = ACTIONS(211),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [26] = {
    [sym__skip] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_block_comment] = STATE(49),
    [sym__datum] = STATE(83),
    [sym_string] = STATE(83),
    [sym_list] = STATE(83),
    [sym_quote] = STATE(83),
    [sym_quasiquote] = STATE(83),
    [sym_syntax] = STATE(83),
    [sym_quasisyntax] = STATE(83),
    [sym_unquote] = STATE(83),
    [sym_unquote_splicing] = STATE(83),
    [sym_unsyntax] = STATE(83),
    [sym_unsyntax_splicing] = STATE(83),
    [sym_vector] = STATE(83),
    [sym_byte_vector] = STATE(83),
    [aux_sym_comment_repeat1] = STATE(49),
    [aux_sym__skip_token1] = ACTIONS(215),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(217),
    [sym_number] = ACTIONS(217),
    [sym_character] = ACTIONS(217),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(219),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [27] = {
    [sym__skip] = STATE(91),
    [sym_comment] = STATE(91),
    [sym_block_comment] = STATE(91),
    [sym__datum] = STATE(79),
    [sym_string] = STATE(79),
    [sym_list] = STATE(79),
    [sym_quote] = STATE(79),
    [sym_quasiquote] = STATE(79),
    [sym_syntax] = STATE(79),
    [sym_quasisyntax] = STATE(79),
    [sym_unquote] = STATE(79),
    [sym_unquote_splicing] = STATE(79),
    [sym_unsyntax] = STATE(79),
    [sym_unsyntax_splicing] = STATE(79),
    [sym_vector] = STATE(79),
    [sym_byte_vector] = STATE(79),
    [aux_sym_comment_repeat1] = STATE(91),
    [aux_sym__skip_token1] = ACTIONS(177),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(221),
    [sym_number] = ACTIONS(221),
    [sym_character] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [28] = {
    [sym__skip] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_block_comment] = STATE(46),
    [sym__datum] = STATE(103),
    [sym_string] = STATE(103),
    [sym_list] = STATE(103),
    [sym_quote] = STATE(103),
    [sym_quasiquote] = STATE(103),
    [sym_syntax] = STATE(103),
    [sym_quasisyntax] = STATE(103),
    [sym_unquote] = STATE(103),
    [sym_unquote_splicing] = STATE(103),
    [sym_unsyntax] = STATE(103),
    [sym_unsyntax_splicing] = STATE(103),
    [sym_vector] = STATE(103),
    [sym_byte_vector] = STATE(103),
    [aux_sym_comment_repeat1] = STATE(46),
    [aux_sym__skip_token1] = ACTIONS(225),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(227),
    [sym_number] = ACTIONS(227),
    [sym_character] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [sym_symbol] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [anon_sym_POUND_SQUOTE] = ACTIONS(195),
    [anon_sym_POUND_BQUOTE] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_COMMA_AT] = ACTIONS(201),
    [anon_sym_POUND_COMMA] = ACTIONS(203),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(205),
    [anon_sym_POUND_LPAREN] = ACTIONS(207),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(209),
  },
  [29] = {
    [sym__skip] = STATE(27),
    [sym_comment] = STATE(27),
    [sym_block_comment] = STATE(27),
    [sym__datum] = STATE(62),
    [sym_string] = STATE(62),
    [sym_list] = STATE(62),
    [sym_quote] = STATE(62),
    [sym_quasiquote] = STATE(62),
    [sym_syntax] = STATE(62),
    [sym_quasisyntax] = STATE(62),
    [sym_unquote] = STATE(62),
    [sym_unquote_splicing] = STATE(62),
    [sym_unsyntax] = STATE(62),
    [sym_unsyntax_splicing] = STATE(62),
    [sym_vector] = STATE(62),
    [sym_byte_vector] = STATE(62),
    [aux_sym_comment_repeat1] = STATE(27),
    [aux_sym__skip_token1] = ACTIONS(231),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(233),
    [sym_number] = ACTIONS(233),
    [sym_character] = ACTIONS(233),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(235),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [30] = {
    [sym__skip] = STATE(91),
    [sym_comment] = STATE(91),
    [sym_block_comment] = STATE(91),
    [sym__datum] = STATE(111),
    [sym_string] = STATE(111),
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
    [aux_sym_comment_repeat1] = STATE(91),
    [aux_sym__skip_token1] = ACTIONS(177),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(237),
    [sym_number] = ACTIONS(237),
    [sym_character] = ACTIONS(237),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [sym_symbol] = ACTIONS(239),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [anon_sym_POUND_SQUOTE] = ACTIONS(195),
    [anon_sym_POUND_BQUOTE] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_COMMA_AT] = ACTIONS(201),
    [anon_sym_POUND_COMMA] = ACTIONS(203),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(205),
    [anon_sym_POUND_LPAREN] = ACTIONS(207),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(209),
  },
  [31] = {
    [sym__skip] = STATE(45),
    [sym_comment] = STATE(45),
    [sym_block_comment] = STATE(45),
    [sym__datum] = STATE(90),
    [sym_string] = STATE(90),
    [sym_list] = STATE(90),
    [sym_quote] = STATE(90),
    [sym_quasiquote] = STATE(90),
    [sym_syntax] = STATE(90),
    [sym_quasisyntax] = STATE(90),
    [sym_unquote] = STATE(90),
    [sym_unquote_splicing] = STATE(90),
    [sym_unsyntax] = STATE(90),
    [sym_unsyntax_splicing] = STATE(90),
    [sym_vector] = STATE(90),
    [sym_byte_vector] = STATE(90),
    [aux_sym_comment_repeat1] = STATE(45),
    [aux_sym__skip_token1] = ACTIONS(241),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(243),
    [sym_number] = ACTIONS(243),
    [sym_character] = ACTIONS(243),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(245),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [32] = {
    [sym__skip] = STATE(43),
    [sym_comment] = STATE(43),
    [sym_block_comment] = STATE(43),
    [sym__datum] = STATE(89),
    [sym_string] = STATE(89),
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
    [aux_sym_comment_repeat1] = STATE(43),
    [aux_sym__skip_token1] = ACTIONS(247),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(249),
    [sym_number] = ACTIONS(249),
    [sym_character] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(251),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [33] = {
    [sym__skip] = STATE(25),
    [sym_comment] = STATE(25),
    [sym_block_comment] = STATE(25),
    [sym__datum] = STATE(87),
    [sym_string] = STATE(87),
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
    [aux_sym_comment_repeat1] = STATE(25),
    [aux_sym__skip_token1] = ACTIONS(253),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(255),
    [sym_number] = ACTIONS(255),
    [sym_character] = ACTIONS(255),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(257),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [34] = {
    [sym__skip] = STATE(91),
    [sym_comment] = STATE(91),
    [sym_block_comment] = STATE(91),
    [sym__datum] = STATE(95),
    [sym_string] = STATE(95),
    [sym_list] = STATE(95),
    [sym_quote] = STATE(95),
    [sym_quasiquote] = STATE(95),
    [sym_syntax] = STATE(95),
    [sym_quasisyntax] = STATE(95),
    [sym_unquote] = STATE(95),
    [sym_unquote_splicing] = STATE(95),
    [sym_unsyntax] = STATE(95),
    [sym_unsyntax_splicing] = STATE(95),
    [sym_vector] = STATE(95),
    [sym_byte_vector] = STATE(95),
    [aux_sym_comment_repeat1] = STATE(91),
    [aux_sym__skip_token1] = ACTIONS(177),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(259),
    [sym_number] = ACTIONS(259),
    [sym_character] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [sym_symbol] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [anon_sym_POUND_SQUOTE] = ACTIONS(195),
    [anon_sym_POUND_BQUOTE] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_COMMA_AT] = ACTIONS(201),
    [anon_sym_POUND_COMMA] = ACTIONS(203),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(205),
    [anon_sym_POUND_LPAREN] = ACTIONS(207),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(209),
  },
  [35] = {
    [sym__skip] = STATE(91),
    [sym_comment] = STATE(91),
    [sym_block_comment] = STATE(91),
    [sym__datum] = STATE(64),
    [sym_string] = STATE(64),
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
    [aux_sym_comment_repeat1] = STATE(91),
    [aux_sym__skip_token1] = ACTIONS(177),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(263),
    [sym_number] = ACTIONS(263),
    [sym_character] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(265),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [36] = {
    [sym__skip] = STATE(91),
    [sym_comment] = STATE(91),
    [sym_block_comment] = STATE(91),
    [sym__datum] = STATE(114),
    [sym_string] = STATE(114),
    [sym_list] = STATE(114),
    [sym_quote] = STATE(114),
    [sym_quasiquote] = STATE(114),
    [sym_syntax] = STATE(114),
    [sym_quasisyntax] = STATE(114),
    [sym_unquote] = STATE(114),
    [sym_unquote_splicing] = STATE(114),
    [sym_unsyntax] = STATE(114),
    [sym_unsyntax_splicing] = STATE(114),
    [sym_vector] = STATE(114),
    [sym_byte_vector] = STATE(114),
    [aux_sym_comment_repeat1] = STATE(91),
    [aux_sym__skip_token1] = ACTIONS(177),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(267),
    [sym_number] = ACTIONS(267),
    [sym_character] = ACTIONS(267),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [sym_symbol] = ACTIONS(269),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [anon_sym_POUND_SQUOTE] = ACTIONS(195),
    [anon_sym_POUND_BQUOTE] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_COMMA_AT] = ACTIONS(201),
    [anon_sym_POUND_COMMA] = ACTIONS(203),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(205),
    [anon_sym_POUND_LPAREN] = ACTIONS(207),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(209),
  },
  [37] = {
    [sym__skip] = STATE(91),
    [sym_comment] = STATE(91),
    [sym_block_comment] = STATE(91),
    [sym__datum] = STATE(65),
    [sym_string] = STATE(65),
    [sym_list] = STATE(65),
    [sym_quote] = STATE(65),
    [sym_quasiquote] = STATE(65),
    [sym_syntax] = STATE(65),
    [sym_quasisyntax] = STATE(65),
    [sym_unquote] = STATE(65),
    [sym_unquote_splicing] = STATE(65),
    [sym_unsyntax] = STATE(65),
    [sym_unsyntax_splicing] = STATE(65),
    [sym_vector] = STATE(65),
    [sym_byte_vector] = STATE(65),
    [aux_sym_comment_repeat1] = STATE(91),
    [aux_sym__skip_token1] = ACTIONS(177),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(271),
    [sym_number] = ACTIONS(271),
    [sym_character] = ACTIONS(271),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(273),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [38] = {
    [sym__skip] = STATE(91),
    [sym_comment] = STATE(91),
    [sym_block_comment] = STATE(91),
    [sym__datum] = STATE(113),
    [sym_string] = STATE(113),
    [sym_list] = STATE(113),
    [sym_quote] = STATE(113),
    [sym_quasiquote] = STATE(113),
    [sym_syntax] = STATE(113),
    [sym_quasisyntax] = STATE(113),
    [sym_unquote] = STATE(113),
    [sym_unquote_splicing] = STATE(113),
    [sym_unsyntax] = STATE(113),
    [sym_unsyntax_splicing] = STATE(113),
    [sym_vector] = STATE(113),
    [sym_byte_vector] = STATE(113),
    [aux_sym_comment_repeat1] = STATE(91),
    [aux_sym__skip_token1] = ACTIONS(177),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(275),
    [sym_number] = ACTIONS(275),
    [sym_character] = ACTIONS(275),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [sym_symbol] = ACTIONS(277),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [anon_sym_POUND_SQUOTE] = ACTIONS(195),
    [anon_sym_POUND_BQUOTE] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_COMMA_AT] = ACTIONS(201),
    [anon_sym_POUND_COMMA] = ACTIONS(203),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(205),
    [anon_sym_POUND_LPAREN] = ACTIONS(207),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(209),
  },
  [39] = {
    [sym__skip] = STATE(91),
    [sym_comment] = STATE(91),
    [sym_block_comment] = STATE(91),
    [sym__datum] = STATE(66),
    [sym_string] = STATE(66),
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
    [aux_sym_comment_repeat1] = STATE(91),
    [aux_sym__skip_token1] = ACTIONS(177),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(279),
    [sym_number] = ACTIONS(279),
    [sym_character] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(281),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [40] = {
    [sym__skip] = STATE(91),
    [sym_comment] = STATE(91),
    [sym_block_comment] = STATE(91),
    [sym__datum] = STATE(112),
    [sym_string] = STATE(112),
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
    [aux_sym_comment_repeat1] = STATE(91),
    [aux_sym__skip_token1] = ACTIONS(177),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(283),
    [sym_number] = ACTIONS(283),
    [sym_character] = ACTIONS(283),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [sym_symbol] = ACTIONS(285),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [anon_sym_POUND_SQUOTE] = ACTIONS(195),
    [anon_sym_POUND_BQUOTE] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_COMMA_AT] = ACTIONS(201),
    [anon_sym_POUND_COMMA] = ACTIONS(203),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(205),
    [anon_sym_POUND_LPAREN] = ACTIONS(207),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(209),
  },
  [41] = {
    [sym__skip] = STATE(47),
    [sym_comment] = STATE(47),
    [sym_block_comment] = STATE(47),
    [sym__datum] = STATE(88),
    [sym_string] = STATE(88),
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
    [aux_sym_comment_repeat1] = STATE(47),
    [aux_sym__skip_token1] = ACTIONS(287),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(289),
    [sym_number] = ACTIONS(289),
    [sym_character] = ACTIONS(289),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(291),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [42] = {
    [sym__skip] = STATE(91),
    [sym_comment] = STATE(91),
    [sym_block_comment] = STATE(91),
    [sym__datum] = STATE(96),
    [sym_string] = STATE(96),
    [sym_list] = STATE(96),
    [sym_quote] = STATE(96),
    [sym_quasiquote] = STATE(96),
    [sym_syntax] = STATE(96),
    [sym_quasisyntax] = STATE(96),
    [sym_unquote] = STATE(96),
    [sym_unquote_splicing] = STATE(96),
    [sym_unsyntax] = STATE(96),
    [sym_unsyntax_splicing] = STATE(96),
    [sym_vector] = STATE(96),
    [sym_byte_vector] = STATE(96),
    [aux_sym_comment_repeat1] = STATE(91),
    [aux_sym__skip_token1] = ACTIONS(177),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(293),
    [sym_number] = ACTIONS(293),
    [sym_character] = ACTIONS(293),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [sym_symbol] = ACTIONS(295),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [anon_sym_POUND_SQUOTE] = ACTIONS(195),
    [anon_sym_POUND_BQUOTE] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_COMMA_AT] = ACTIONS(201),
    [anon_sym_POUND_COMMA] = ACTIONS(203),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(205),
    [anon_sym_POUND_LPAREN] = ACTIONS(207),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(209),
  },
  [43] = {
    [sym__skip] = STATE(91),
    [sym_comment] = STATE(91),
    [sym_block_comment] = STATE(91),
    [sym__datum] = STATE(68),
    [sym_string] = STATE(68),
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
    [aux_sym_comment_repeat1] = STATE(91),
    [aux_sym__skip_token1] = ACTIONS(177),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(297),
    [sym_number] = ACTIONS(297),
    [sym_character] = ACTIONS(297),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(299),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [44] = {
    [sym__skip] = STATE(91),
    [sym_comment] = STATE(91),
    [sym_block_comment] = STATE(91),
    [sym__datum] = STATE(110),
    [sym_string] = STATE(110),
    [sym_list] = STATE(110),
    [sym_quote] = STATE(110),
    [sym_quasiquote] = STATE(110),
    [sym_syntax] = STATE(110),
    [sym_quasisyntax] = STATE(110),
    [sym_unquote] = STATE(110),
    [sym_unquote_splicing] = STATE(110),
    [sym_unsyntax] = STATE(110),
    [sym_unsyntax_splicing] = STATE(110),
    [sym_vector] = STATE(110),
    [sym_byte_vector] = STATE(110),
    [aux_sym_comment_repeat1] = STATE(91),
    [aux_sym__skip_token1] = ACTIONS(177),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(301),
    [sym_number] = ACTIONS(301),
    [sym_character] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [sym_symbol] = ACTIONS(303),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [anon_sym_POUND_SQUOTE] = ACTIONS(195),
    [anon_sym_POUND_BQUOTE] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_COMMA_AT] = ACTIONS(201),
    [anon_sym_POUND_COMMA] = ACTIONS(203),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(205),
    [anon_sym_POUND_LPAREN] = ACTIONS(207),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(209),
  },
  [45] = {
    [sym__skip] = STATE(91),
    [sym_comment] = STATE(91),
    [sym_block_comment] = STATE(91),
    [sym__datum] = STATE(60),
    [sym_string] = STATE(60),
    [sym_list] = STATE(60),
    [sym_quote] = STATE(60),
    [sym_quasiquote] = STATE(60),
    [sym_syntax] = STATE(60),
    [sym_quasisyntax] = STATE(60),
    [sym_unquote] = STATE(60),
    [sym_unquote_splicing] = STATE(60),
    [sym_unsyntax] = STATE(60),
    [sym_unsyntax_splicing] = STATE(60),
    [sym_vector] = STATE(60),
    [sym_byte_vector] = STATE(60),
    [aux_sym_comment_repeat1] = STATE(91),
    [aux_sym__skip_token1] = ACTIONS(177),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(305),
    [sym_number] = ACTIONS(305),
    [sym_character] = ACTIONS(305),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(307),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [46] = {
    [sym__skip] = STATE(91),
    [sym_comment] = STATE(91),
    [sym_block_comment] = STATE(91),
    [sym__datum] = STATE(106),
    [sym_string] = STATE(106),
    [sym_list] = STATE(106),
    [sym_quote] = STATE(106),
    [sym_quasiquote] = STATE(106),
    [sym_syntax] = STATE(106),
    [sym_quasisyntax] = STATE(106),
    [sym_unquote] = STATE(106),
    [sym_unquote_splicing] = STATE(106),
    [sym_unsyntax] = STATE(106),
    [sym_unsyntax_splicing] = STATE(106),
    [sym_vector] = STATE(106),
    [sym_byte_vector] = STATE(106),
    [aux_sym_comment_repeat1] = STATE(91),
    [aux_sym__skip_token1] = ACTIONS(177),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(309),
    [sym_number] = ACTIONS(309),
    [sym_character] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [sym_symbol] = ACTIONS(311),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [anon_sym_POUND_SQUOTE] = ACTIONS(195),
    [anon_sym_POUND_BQUOTE] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_COMMA_AT] = ACTIONS(201),
    [anon_sym_POUND_COMMA] = ACTIONS(203),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(205),
    [anon_sym_POUND_LPAREN] = ACTIONS(207),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(209),
  },
  [47] = {
    [sym__skip] = STATE(91),
    [sym_comment] = STATE(91),
    [sym_block_comment] = STATE(91),
    [sym__datum] = STATE(69),
    [sym_string] = STATE(69),
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
    [aux_sym_comment_repeat1] = STATE(91),
    [aux_sym__skip_token1] = ACTIONS(177),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(313),
    [sym_number] = ACTIONS(313),
    [sym_character] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [48] = {
    [sym__skip] = STATE(24),
    [sym_comment] = STATE(24),
    [sym_block_comment] = STATE(24),
    [sym__datum] = STATE(102),
    [sym_string] = STATE(102),
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
    [aux_sym_comment_repeat1] = STATE(24),
    [aux_sym__skip_token1] = ACTIONS(317),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(319),
    [sym_number] = ACTIONS(319),
    [sym_character] = ACTIONS(319),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [sym_symbol] = ACTIONS(321),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [anon_sym_POUND_SQUOTE] = ACTIONS(195),
    [anon_sym_POUND_BQUOTE] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_COMMA_AT] = ACTIONS(201),
    [anon_sym_POUND_COMMA] = ACTIONS(203),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(205),
    [anon_sym_POUND_LPAREN] = ACTIONS(207),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(209),
  },
  [49] = {
    [sym__skip] = STATE(91),
    [sym_comment] = STATE(91),
    [sym_block_comment] = STATE(91),
    [sym__datum] = STATE(70),
    [sym_string] = STATE(70),
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
    [aux_sym_comment_repeat1] = STATE(91),
    [aux_sym__skip_token1] = ACTIONS(177),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(323),
    [sym_number] = ACTIONS(323),
    [sym_character] = ACTIONS(323),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(325),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [50] = {
    [sym__skip] = STATE(30),
    [sym_comment] = STATE(30),
    [sym_block_comment] = STATE(30),
    [sym__datum] = STATE(100),
    [sym_string] = STATE(100),
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
    [aux_sym_comment_repeat1] = STATE(30),
    [aux_sym__skip_token1] = ACTIONS(327),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(329),
    [sym_number] = ACTIONS(329),
    [sym_character] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [sym_symbol] = ACTIONS(331),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [anon_sym_POUND_SQUOTE] = ACTIONS(195),
    [anon_sym_POUND_BQUOTE] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_COMMA_AT] = ACTIONS(201),
    [anon_sym_POUND_COMMA] = ACTIONS(203),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(205),
    [anon_sym_POUND_LPAREN] = ACTIONS(207),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(209),
  },
  [51] = {
    [sym__skip] = STATE(39),
    [sym_comment] = STATE(39),
    [sym_block_comment] = STATE(39),
    [sym__datum] = STATE(86),
    [sym_string] = STATE(86),
    [sym_list] = STATE(86),
    [sym_quote] = STATE(86),
    [sym_quasiquote] = STATE(86),
    [sym_syntax] = STATE(86),
    [sym_quasisyntax] = STATE(86),
    [sym_unquote] = STATE(86),
    [sym_unquote_splicing] = STATE(86),
    [sym_unsyntax] = STATE(86),
    [sym_unsyntax_splicing] = STATE(86),
    [sym_vector] = STATE(86),
    [sym_byte_vector] = STATE(86),
    [aux_sym_comment_repeat1] = STATE(39),
    [aux_sym__skip_token1] = ACTIONS(333),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(335),
    [sym_number] = ACTIONS(335),
    [sym_character] = ACTIONS(335),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(337),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [52] = {
    [sym__skip] = STATE(34),
    [sym_comment] = STATE(34),
    [sym_block_comment] = STATE(34),
    [sym__datum] = STATE(115),
    [sym_string] = STATE(115),
    [sym_list] = STATE(115),
    [sym_quote] = STATE(115),
    [sym_quasiquote] = STATE(115),
    [sym_syntax] = STATE(115),
    [sym_quasisyntax] = STATE(115),
    [sym_unquote] = STATE(115),
    [sym_unquote_splicing] = STATE(115),
    [sym_unsyntax] = STATE(115),
    [sym_unsyntax_splicing] = STATE(115),
    [sym_vector] = STATE(115),
    [sym_byte_vector] = STATE(115),
    [aux_sym_comment_repeat1] = STATE(34),
    [aux_sym__skip_token1] = ACTIONS(339),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(341),
    [sym_number] = ACTIONS(341),
    [sym_character] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [sym_symbol] = ACTIONS(343),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [anon_sym_POUND_SQUOTE] = ACTIONS(195),
    [anon_sym_POUND_BQUOTE] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_COMMA_AT] = ACTIONS(201),
    [anon_sym_POUND_COMMA] = ACTIONS(203),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(205),
    [anon_sym_POUND_LPAREN] = ACTIONS(207),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(209),
  },
  [53] = {
    [sym__skip] = STATE(37),
    [sym_comment] = STATE(37),
    [sym_block_comment] = STATE(37),
    [sym__datum] = STATE(85),
    [sym_string] = STATE(85),
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
    [aux_sym_comment_repeat1] = STATE(37),
    [aux_sym__skip_token1] = ACTIONS(345),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(347),
    [sym_number] = ACTIONS(347),
    [sym_character] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(349),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [54] = {
    [sym__skip] = STATE(35),
    [sym_comment] = STATE(35),
    [sym_block_comment] = STATE(35),
    [sym__datum] = STATE(61),
    [sym_string] = STATE(61),
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
    [aux_sym_comment_repeat1] = STATE(35),
    [aux_sym__skip_token1] = ACTIONS(351),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(353),
    [sym_number] = ACTIONS(353),
    [sym_character] = ACTIONS(353),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(355),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [55] = {
    [sym__skip] = STATE(36),
    [sym_comment] = STATE(36),
    [sym_block_comment] = STATE(36),
    [sym__datum] = STATE(116),
    [sym_string] = STATE(116),
    [sym_list] = STATE(116),
    [sym_quote] = STATE(116),
    [sym_quasiquote] = STATE(116),
    [sym_syntax] = STATE(116),
    [sym_quasisyntax] = STATE(116),
    [sym_unquote] = STATE(116),
    [sym_unquote_splicing] = STATE(116),
    [sym_unsyntax] = STATE(116),
    [sym_unsyntax_splicing] = STATE(116),
    [sym_vector] = STATE(116),
    [sym_byte_vector] = STATE(116),
    [aux_sym_comment_repeat1] = STATE(36),
    [aux_sym__skip_token1] = ACTIONS(357),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(359),
    [sym_number] = ACTIONS(359),
    [sym_character] = ACTIONS(359),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [sym_symbol] = ACTIONS(361),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [anon_sym_POUND_SQUOTE] = ACTIONS(195),
    [anon_sym_POUND_BQUOTE] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_COMMA_AT] = ACTIONS(201),
    [anon_sym_POUND_COMMA] = ACTIONS(203),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(205),
    [anon_sym_POUND_LPAREN] = ACTIONS(207),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(209),
  },
  [56] = {
    [sym__skip] = STATE(38),
    [sym_comment] = STATE(38),
    [sym_block_comment] = STATE(38),
    [sym__datum] = STATE(121),
    [sym_string] = STATE(121),
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
    [aux_sym_comment_repeat1] = STATE(38),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(365),
    [sym_number] = ACTIONS(365),
    [sym_character] = ACTIONS(365),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [sym_symbol] = ACTIONS(367),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [anon_sym_POUND_SQUOTE] = ACTIONS(195),
    [anon_sym_POUND_BQUOTE] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_COMMA_AT] = ACTIONS(201),
    [anon_sym_POUND_COMMA] = ACTIONS(203),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(205),
    [anon_sym_POUND_LPAREN] = ACTIONS(207),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(209),
  },
  [57] = {
    [sym__skip] = STATE(40),
    [sym_comment] = STATE(40),
    [sym_block_comment] = STATE(40),
    [sym__datum] = STATE(98),
    [sym_string] = STATE(98),
    [sym_list] = STATE(98),
    [sym_quote] = STATE(98),
    [sym_quasiquote] = STATE(98),
    [sym_syntax] = STATE(98),
    [sym_quasisyntax] = STATE(98),
    [sym_unquote] = STATE(98),
    [sym_unquote_splicing] = STATE(98),
    [sym_unsyntax] = STATE(98),
    [sym_unsyntax_splicing] = STATE(98),
    [sym_vector] = STATE(98),
    [sym_byte_vector] = STATE(98),
    [aux_sym_comment_repeat1] = STATE(40),
    [aux_sym__skip_token1] = ACTIONS(369),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(371),
    [sym_number] = ACTIONS(371),
    [sym_character] = ACTIONS(371),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [sym_symbol] = ACTIONS(373),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [anon_sym_POUND_SQUOTE] = ACTIONS(195),
    [anon_sym_POUND_BQUOTE] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_COMMA_AT] = ACTIONS(201),
    [anon_sym_POUND_COMMA] = ACTIONS(203),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(205),
    [anon_sym_POUND_LPAREN] = ACTIONS(207),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(209),
  },
  [58] = {
    [sym__skip] = STATE(42),
    [sym_comment] = STATE(42),
    [sym_block_comment] = STATE(42),
    [sym__datum] = STATE(125),
    [sym_string] = STATE(125),
    [sym_list] = STATE(125),
    [sym_quote] = STATE(125),
    [sym_quasiquote] = STATE(125),
    [sym_syntax] = STATE(125),
    [sym_quasisyntax] = STATE(125),
    [sym_unquote] = STATE(125),
    [sym_unquote_splicing] = STATE(125),
    [sym_unsyntax] = STATE(125),
    [sym_unsyntax_splicing] = STATE(125),
    [sym_vector] = STATE(125),
    [sym_byte_vector] = STATE(125),
    [aux_sym_comment_repeat1] = STATE(42),
    [aux_sym__skip_token1] = ACTIONS(375),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(377),
    [sym_number] = ACTIONS(377),
    [sym_character] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [sym_symbol] = ACTIONS(379),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [anon_sym_POUND_SQUOTE] = ACTIONS(195),
    [anon_sym_POUND_BQUOTE] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_COMMA_AT] = ACTIONS(201),
    [anon_sym_POUND_COMMA] = ACTIONS(203),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(205),
    [anon_sym_POUND_LPAREN] = ACTIONS(207),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(209),
  },
  [59] = {
    [sym__skip] = STATE(44),
    [sym_comment] = STATE(44),
    [sym_block_comment] = STATE(44),
    [sym__datum] = STATE(128),
    [sym_string] = STATE(128),
    [sym_list] = STATE(128),
    [sym_quote] = STATE(128),
    [sym_quasiquote] = STATE(128),
    [sym_syntax] = STATE(128),
    [sym_quasisyntax] = STATE(128),
    [sym_unquote] = STATE(128),
    [sym_unquote_splicing] = STATE(128),
    [sym_unsyntax] = STATE(128),
    [sym_unsyntax_splicing] = STATE(128),
    [sym_vector] = STATE(128),
    [sym_byte_vector] = STATE(128),
    [aux_sym_comment_repeat1] = STATE(44),
    [aux_sym__skip_token1] = ACTIONS(381),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(383),
    [sym_number] = ACTIONS(383),
    [sym_character] = ACTIONS(383),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [sym_symbol] = ACTIONS(385),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [anon_sym_POUND_SQUOTE] = ACTIONS(195),
    [anon_sym_POUND_BQUOTE] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_COMMA_AT] = ACTIONS(201),
    [anon_sym_POUND_COMMA] = ACTIONS(203),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(205),
    [anon_sym_POUND_LPAREN] = ACTIONS(207),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(209),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(389), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(387), 24,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_number,
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
  [32] = 2,
    ACTIONS(393), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(391), 24,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_number,
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
  [64] = 2,
    ACTIONS(397), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(395), 24,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_number,
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
  [96] = 2,
    ACTIONS(401), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(399), 24,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_number,
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
  [128] = 2,
    ACTIONS(405), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(403), 24,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_number,
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
  [160] = 2,
    ACTIONS(409), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(407), 24,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_number,
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
  [192] = 2,
    ACTIONS(413), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(411), 24,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_number,
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
  [224] = 2,
    ACTIONS(417), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(415), 24,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_number,
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
  [256] = 2,
    ACTIONS(421), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(419), 24,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_number,
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
  [288] = 2,
    ACTIONS(425), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(423), 24,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_number,
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
  [320] = 2,
    ACTIONS(429), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(427), 24,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_number,
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
  [352] = 2,
    ACTIONS(433), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(431), 24,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_number,
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
  [384] = 2,
    ACTIONS(437), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(435), 24,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_number,
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
  [416] = 2,
    ACTIONS(441), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(439), 24,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_number,
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
  [448] = 2,
    ACTIONS(445), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(443), 24,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_number,
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
  [480] = 2,
    ACTIONS(449), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(447), 24,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_number,
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
  [512] = 2,
    ACTIONS(453), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(451), 24,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_number,
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
  [544] = 2,
    ACTIONS(457), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(455), 24,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_number,
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
  [576] = 2,
    ACTIONS(461), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(459), 24,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_number,
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
  [608] = 2,
    ACTIONS(465), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(463), 24,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_number,
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
  [640] = 2,
    ACTIONS(469), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(467), 24,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_number,
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
  [672] = 2,
    ACTIONS(473), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(471), 24,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_number,
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
  [704] = 2,
    ACTIONS(477), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(475), 24,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_number,
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
  [736] = 2,
    ACTIONS(481), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(479), 24,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_number,
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
  [768] = 2,
    ACTIONS(485), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(483), 24,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_number,
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
  [800] = 2,
    ACTIONS(489), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(487), 24,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_number,
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
  [832] = 2,
    ACTIONS(493), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(491), 24,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_number,
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
  [864] = 2,
    ACTIONS(497), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(495), 24,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_number,
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
  [896] = 2,
    ACTIONS(501), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(499), 24,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_number,
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
  [928] = 2,
    ACTIONS(505), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(503), 24,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_number,
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
  [960] = 2,
    ACTIONS(509), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(507), 24,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_number,
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
  [992] = 7,
    ACTIONS(511), 1,
      aux_sym__skip_token1,
    ACTIONS(514), 1,
      aux_sym_comment_token1,
    ACTIONS(517), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(520), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(525), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    STATE(91), 4,
      sym__skip,
      sym_comment,
      sym_block_comment,
      aux_sym_comment_repeat1,
    ACTIONS(523), 15,
      sym_boolean,
      sym_number,
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
  [1033] = 6,
    ACTIONS(523), 1,
      sym_symbol,
    ACTIONS(527), 1,
      aux_sym__skip_token1,
    ACTIONS(530), 1,
      aux_sym_comment_token1,
    ACTIONS(533), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    STATE(92), 4,
      sym__skip,
      sym_comment,
      sym_block_comment,
      aux_sym_comment_repeat1,
  [1055] = 6,
    ACTIONS(539), 1,
      aux_sym__skip_token1,
    ACTIONS(541), 1,
      aux_sym_comment_token1,
    ACTIONS(543), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(545), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(547), 1,
      sym_symbol,
    STATE(94), 4,
      sym__skip,
      sym_comment,
      sym_block_comment,
      aux_sym_comment_repeat1,
  [1077] = 6,
    ACTIONS(541), 1,
      aux_sym_comment_token1,
    ACTIONS(543), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(545), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(549), 1,
      aux_sym__skip_token1,
    ACTIONS(551), 1,
      sym_symbol,
    STATE(92), 4,
      sym__skip,
      sym_comment,
      sym_block_comment,
      aux_sym_comment_repeat1,
  [1099] = 1,
    ACTIONS(387), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      sym_symbol,
  [1107] = 1,
    ACTIONS(407), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      sym_symbol,
  [1115] = 1,
    ACTIONS(475), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      sym_symbol,
  [1123] = 1,
    ACTIONS(491), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      sym_symbol,
  [1131] = 1,
    ACTIONS(459), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      sym_symbol,
  [1139] = 1,
    ACTIONS(499), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      sym_symbol,
  [1147] = 1,
    ACTIONS(447), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      sym_symbol,
  [1155] = 1,
    ACTIONS(479), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      sym_symbol,
  [1163] = 1,
    ACTIONS(395), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      sym_symbol,
  [1171] = 1,
    ACTIONS(471), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      sym_symbol,
  [1179] = 1,
    ACTIONS(467), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      sym_symbol,
  [1187] = 1,
    ACTIONS(463), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      sym_symbol,
  [1195] = 1,
    ACTIONS(451), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      sym_symbol,
  [1203] = 1,
    ACTIONS(483), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      sym_symbol,
  [1211] = 1,
    ACTIONS(399), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      sym_symbol,
  [1219] = 1,
    ACTIONS(403), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      sym_symbol,
  [1227] = 1,
    ACTIONS(423), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      sym_symbol,
  [1235] = 1,
    ACTIONS(411), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      sym_symbol,
  [1243] = 1,
    ACTIONS(415), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      sym_symbol,
  [1251] = 1,
    ACTIONS(419), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      sym_symbol,
  [1259] = 1,
    ACTIONS(507), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      sym_symbol,
  [1267] = 1,
    ACTIONS(503), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      sym_symbol,
  [1275] = 4,
    ACTIONS(553), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(555), 1,
      aux_sym_block_comment_token1,
    ACTIONS(557), 1,
      anon_sym_PIPE_POUND,
    STATE(127), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1289] = 1,
    ACTIONS(431), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      sym_symbol,
  [1297] = 1,
    ACTIONS(435), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      sym_symbol,
  [1305] = 4,
    ACTIONS(553), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(559), 1,
      aux_sym_block_comment_token1,
    ACTIONS(561), 1,
      anon_sym_PIPE_POUND,
    STATE(117), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1319] = 1,
    ACTIONS(495), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      sym_symbol,
  [1327] = 4,
    ACTIONS(553), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(563), 1,
      aux_sym_block_comment_token1,
    ACTIONS(565), 1,
      anon_sym_PIPE_POUND,
    STATE(126), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1341] = 4,
    ACTIONS(553), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(567), 1,
      aux_sym_block_comment_token1,
    ACTIONS(569), 1,
      anon_sym_PIPE_POUND,
    STATE(130), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1355] = 1,
    ACTIONS(427), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      sym_symbol,
  [1363] = 1,
    ACTIONS(487), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      sym_symbol,
  [1371] = 4,
    ACTIONS(553), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(555), 1,
      aux_sym_block_comment_token1,
    ACTIONS(571), 1,
      anon_sym_PIPE_POUND,
    STATE(127), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1385] = 4,
    ACTIONS(573), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(576), 1,
      aux_sym_block_comment_token1,
    ACTIONS(579), 1,
      anon_sym_PIPE_POUND,
    STATE(127), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1399] = 1,
    ACTIONS(391), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      sym_symbol,
  [1407] = 1,
    ACTIONS(443), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      sym_symbol,
  [1415] = 4,
    ACTIONS(553), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(555), 1,
      aux_sym_block_comment_token1,
    ACTIONS(581), 1,
      anon_sym_PIPE_POUND,
    STATE(127), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1429] = 3,
    ACTIONS(583), 1,
      anon_sym_DQUOTE,
    STATE(132), 1,
      aux_sym_string_repeat1,
    ACTIONS(585), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1440] = 3,
    ACTIONS(587), 1,
      anon_sym_DQUOTE,
    STATE(132), 1,
      aux_sym_string_repeat1,
    ACTIONS(589), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1451] = 3,
    ACTIONS(592), 1,
      anon_sym_DQUOTE,
    STATE(131), 1,
      aux_sym_string_repeat1,
    ACTIONS(594), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1462] = 3,
    ACTIONS(596), 1,
      anon_sym_DQUOTE,
    STATE(132), 1,
      aux_sym_string_repeat1,
    ACTIONS(585), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1473] = 3,
    ACTIONS(598), 1,
      anon_sym_DQUOTE,
    STATE(134), 1,
      aux_sym_string_repeat1,
    ACTIONS(600), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1484] = 2,
    ACTIONS(453), 1,
      aux_sym_block_comment_token1,
    ACTIONS(451), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [1492] = 2,
    ACTIONS(449), 1,
      aux_sym_block_comment_token1,
    ACTIONS(447), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [1500] = 1,
    ACTIONS(602), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(60)] = 0,
  [SMALL_STATE(61)] = 32,
  [SMALL_STATE(62)] = 64,
  [SMALL_STATE(63)] = 96,
  [SMALL_STATE(64)] = 128,
  [SMALL_STATE(65)] = 160,
  [SMALL_STATE(66)] = 192,
  [SMALL_STATE(67)] = 224,
  [SMALL_STATE(68)] = 256,
  [SMALL_STATE(69)] = 288,
  [SMALL_STATE(70)] = 320,
  [SMALL_STATE(71)] = 352,
  [SMALL_STATE(72)] = 384,
  [SMALL_STATE(73)] = 416,
  [SMALL_STATE(74)] = 448,
  [SMALL_STATE(75)] = 480,
  [SMALL_STATE(76)] = 512,
  [SMALL_STATE(77)] = 544,
  [SMALL_STATE(78)] = 576,
  [SMALL_STATE(79)] = 608,
  [SMALL_STATE(80)] = 640,
  [SMALL_STATE(81)] = 672,
  [SMALL_STATE(82)] = 704,
  [SMALL_STATE(83)] = 736,
  [SMALL_STATE(84)] = 768,
  [SMALL_STATE(85)] = 800,
  [SMALL_STATE(86)] = 832,
  [SMALL_STATE(87)] = 864,
  [SMALL_STATE(88)] = 896,
  [SMALL_STATE(89)] = 928,
  [SMALL_STATE(90)] = 960,
  [SMALL_STATE(91)] = 992,
  [SMALL_STATE(92)] = 1033,
  [SMALL_STATE(93)] = 1055,
  [SMALL_STATE(94)] = 1077,
  [SMALL_STATE(95)] = 1099,
  [SMALL_STATE(96)] = 1107,
  [SMALL_STATE(97)] = 1115,
  [SMALL_STATE(98)] = 1123,
  [SMALL_STATE(99)] = 1131,
  [SMALL_STATE(100)] = 1139,
  [SMALL_STATE(101)] = 1147,
  [SMALL_STATE(102)] = 1155,
  [SMALL_STATE(103)] = 1163,
  [SMALL_STATE(104)] = 1171,
  [SMALL_STATE(105)] = 1179,
  [SMALL_STATE(106)] = 1187,
  [SMALL_STATE(107)] = 1195,
  [SMALL_STATE(108)] = 1203,
  [SMALL_STATE(109)] = 1211,
  [SMALL_STATE(110)] = 1219,
  [SMALL_STATE(111)] = 1227,
  [SMALL_STATE(112)] = 1235,
  [SMALL_STATE(113)] = 1243,
  [SMALL_STATE(114)] = 1251,
  [SMALL_STATE(115)] = 1259,
  [SMALL_STATE(116)] = 1267,
  [SMALL_STATE(117)] = 1275,
  [SMALL_STATE(118)] = 1289,
  [SMALL_STATE(119)] = 1297,
  [SMALL_STATE(120)] = 1305,
  [SMALL_STATE(121)] = 1319,
  [SMALL_STATE(122)] = 1327,
  [SMALL_STATE(123)] = 1341,
  [SMALL_STATE(124)] = 1355,
  [SMALL_STATE(125)] = 1363,
  [SMALL_STATE(126)] = 1371,
  [SMALL_STATE(127)] = 1385,
  [SMALL_STATE(128)] = 1399,
  [SMALL_STATE(129)] = 1407,
  [SMALL_STATE(130)] = 1415,
  [SMALL_STATE(131)] = 1429,
  [SMALL_STATE(132)] = 1440,
  [SMALL_STATE(133)] = 1451,
  [SMALL_STATE(134)] = 1462,
  [SMALL_STATE(135)] = 1473,
  [SMALL_STATE(136)] = 1484,
  [SMALL_STATE(137)] = 1492,
  [SMALL_STATE(138)] = 1500,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(74),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(93),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(122),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(135),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(54),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(53),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(51),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(33),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(32),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(31),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(41),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splicing, 3),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splicing, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 3),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 3),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syntax, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasisyntax, 3),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasisyntax, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 3),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax, 3),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax_splicing, 3),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax_splicing, 3),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_vector, 3),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_vector, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_vector, 2),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_vector, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax_splicing, 2),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax_splicing, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 2),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 2),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syntax, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasisyntax, 2),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasisyntax, 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax, 2),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splicing, 2),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splicing, 2),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(91),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(74),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(29),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(122),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(92),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(129),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(28),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(123),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(120),
  [576] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(127),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [589] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(132),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [602] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
