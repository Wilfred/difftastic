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
#define STATE_COUNT 143
#define LARGE_STATE_COUNT 60
#define SYMBOL_COUNT 56
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
  sym__skip = 33,
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
  [aux_sym__skip_token1] = "_skip_token1",
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
  [sym__skip] = "_skip",
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
  [aux_sym__skip_token1] = aux_sym__skip_token1,
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
  [sym__skip] = sym__skip,
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
  [11] = 3,
  [12] = 12,
  [13] = 10,
  [14] = 9,
  [15] = 15,
  [16] = 12,
  [17] = 15,
  [18] = 6,
  [19] = 5,
  [20] = 8,
  [21] = 7,
  [22] = 4,
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
  [33] = 33,
  [34] = 25,
  [35] = 29,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 42,
  [44] = 41,
  [45] = 40,
  [46] = 39,
  [47] = 31,
  [48] = 38,
  [49] = 28,
  [50] = 37,
  [51] = 51,
  [52] = 36,
  [53] = 51,
  [54] = 24,
  [55] = 26,
  [56] = 27,
  [57] = 30,
  [58] = 32,
  [59] = 33,
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
  [96] = 93,
  [97] = 68,
  [98] = 65,
  [99] = 84,
  [100] = 92,
  [101] = 83,
  [102] = 87,
  [103] = 78,
  [104] = 86,
  [105] = 105,
  [106] = 60,
  [107] = 77,
  [108] = 62,
  [109] = 63,
  [110] = 64,
  [111] = 67,
  [112] = 69,
  [113] = 71,
  [114] = 72,
  [115] = 73,
  [116] = 74,
  [117] = 75,
  [118] = 76,
  [119] = 119,
  [120] = 91,
  [121] = 85,
  [122] = 80,
  [123] = 81,
  [124] = 90,
  [125] = 61,
  [126] = 70,
  [127] = 119,
  [128] = 119,
  [129] = 105,
  [130] = 89,
  [131] = 88,
  [132] = 79,
  [133] = 133,
  [134] = 105,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 136,
  [139] = 135,
  [140] = 67,
  [141] = 83,
  [142] = 142,
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
      if (eof) ADVANCE(195);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(196);
      if (lookahead == '"') ADVANCE(360);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '\'') ADVANCE(426);
      if (lookahead == '(') ADVANCE(420);
      if (lookahead == ')') ADVANCE(421);
      if (lookahead == ',') ADVANCE(430);
      if (lookahead == ';') ADVANCE(197);
      if (lookahead == '[') ADVANCE(422);
      if (lookahead == ']') ADVANCE(423);
      if (lookahead == '`') ADVANCE(427);
      if (lookahead == '{') ADVANCE(424);
      if (lookahead == '|') ADVANCE(202);
      if (lookahead == '}') ADVANCE(425);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(363);
      if (lookahead == '\r') ADVANCE(364);
      if (lookahead == 'x') ADVANCE(188);
      if (lookahead == 133 ||
          lookahead == 8232) ADVANCE(365);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(362);
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
      if (lookahead == '\n') ADVANCE(363);
      if (lookahead == '\r') ADVANCE(364);
      if (lookahead == 133 ||
          lookahead == 8232) ADVANCE(365);
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
      if (lookahead == '\'') ADVANCE(428);
      if (lookahead == '(') ADVANCE(435);
      if (lookahead == ',') ADVANCE(433);
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
          lookahead == 'o') ADVANCE(260);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(273);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '`') ADVANCE(429);
      if (lookahead == 'v') ADVANCE(122);
      if (lookahead == '|') ADVANCE(200);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(360);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(361);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(133);
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(169);
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
      if (lookahead == '/') ADVANCE(169);
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
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '|') ADVANCE(164);
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
      if (lookahead == '|') ADVANCE(164);
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
          lookahead != '}') ADVANCE(419);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '.') ADVANCE(155);
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
      if (lookahead == '(') ADVANCE(436);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(48);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '/') ADVANCE(164);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '|') ADVANCE(164);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(322);
      if (lookahead == 'n') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(163);
      if (lookahead == 'i') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(167);
      if (lookahead == 'i') ADVANCE(321);
      if (lookahead == 'n') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == 'i') ADVANCE(321);
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
      if (lookahead == '0') ADVANCE(298);
      END_STATE();
    case 49:
      if (lookahead == '0') ADVANCE(84);
      END_STATE();
    case 50:
      if (lookahead == '0') ADVANCE(309);
      END_STATE();
    case 51:
      if (lookahead == '0') ADVANCE(301);
      END_STATE();
    case 52:
      if (lookahead == '0') ADVANCE(304);
      END_STATE();
    case 53:
      if (lookahead == '8') ADVANCE(25);
      END_STATE();
    case 54:
      if (lookahead == ';') ADVANCE(198);
      if (lookahead == '|') ADVANCE(200);
      END_STATE();
    case 55:
      if (lookahead == ';') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(355);
      if (lookahead == 'b') ADVANCE(348);
      if (lookahead == 'd') ADVANCE(351);
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead == 'n') ADVANCE(352);
      if (lookahead == 'p') ADVANCE(349);
      if (lookahead == 'r') ADVANCE(353);
      if (lookahead == 's') ADVANCE(356);
      if (lookahead == 't') ADVANCE(350);
      if (lookahead == 'v') ADVANCE(358);
      if (lookahead == 'x') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(347);
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
      if (lookahead == 'b') ADVANCE(347);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(347);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(347);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(347);
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
      if (lookahead == '|') ADVANCE(164);
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
      if (lookahead == '|') ADVANCE(164);
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
      if (lookahead == 'i') ADVANCE(321);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(13);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(321);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(44);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(321);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == '|') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(22);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(321);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == '|') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(45);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(321);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == '|') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(321);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == '|') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 101:
      if (lookahead == 'k') ADVANCE(119);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(347);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(347);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(347);
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
          lookahead == '-') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 126:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 127:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 128:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 129:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 130:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 131:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 132:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 133:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(288);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(28);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(290);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(292);
      END_STATE();
    case 134:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(250);
      END_STATE();
    case 135:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(243);
      END_STATE();
    case 136:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(257);
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
          lookahead == '1') ADVANCE(252);
      END_STATE();
    case 140:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(259);
      END_STATE();
    case 141:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(339);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(288);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(292);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(263);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(244);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(270);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(16);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(90);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(265);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(272);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(341);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 171:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 172:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 173:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(345);
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
      if (lookahead == '"') ADVANCE(360);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(426);
      if (lookahead == '(') ADVANCE(420);
      if (lookahead == ')') ADVANCE(421);
      if (lookahead == ',') ADVANCE(431);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ';') ADVANCE(197);
      if (lookahead == '[') ADVANCE(422);
      if (lookahead == ']') ADVANCE(423);
      if (lookahead == '`') ADVANCE(427);
      if (lookahead == '{') ADVANCE(424);
      if (lookahead == '}') ADVANCE(425);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(419);
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
      ACCEPT_TOKEN(aux_sym_number_token1);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '.') ADVANCE(211);
      if (lookahead == '/') ADVANCE(403);
      if (lookahead == '@') ADVANCE(375);
      if (lookahead == '|') ADVANCE(404);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(376);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(419);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '.') ADVANCE(212);
      if (lookahead == '/') ADVANCE(156);
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
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '.') ADVANCE(213);
      if (lookahead == '/') ADVANCE(175);
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
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(142);
      if (lookahead == '@') ADVANCE(325);
      if (lookahead == '|') ADVANCE(154);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(287);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(217);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '@') ADVANCE(375);
      if (lookahead == '|') ADVANCE(404);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(376);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(419);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_number_token1);
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
      ACCEPT_TOKEN(aux_sym_number_token1);
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
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '.') ADVANCE(219);
      if (lookahead == '/') ADVANCE(406);
      if (lookahead == '@') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(346);
      if (lookahead == '|') ADVANCE(407);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(376);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(419);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '.') ADVANCE(220);
      if (lookahead == '/') ADVANCE(161);
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
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == '/') ADVANCE(177);
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
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == '@') ADVANCE(325);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(95);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '@') ADVANCE(335);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '@') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(346);
      if (lookahead == '|') ADVANCE(407);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(376);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(419);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_number_token1);
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
      ACCEPT_TOKEN(aux_sym_number_token1);
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
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '@') ADVANCE(375);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (!aux_sym_symbol_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '/') ADVANCE(411);
      if (lookahead == '|') ADVANCE(412);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(419);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == '/') ADVANCE(168);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == '/') ADVANCE(168);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '.') ADVANCE(238);
      if (lookahead == '/') ADVANCE(168);
      if (lookahead == '|') ADVANCE(157);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '/') ADVANCE(135);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '@') ADVANCE(325);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(95);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '@') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '@') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(346);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (!aux_sym_symbol_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == '|') ADVANCE(157);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == '|') ADVANCE(412);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(419);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(240);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_number_token1);
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
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      if (!aux_sym_symbol_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '/') ADVANCE(146);
      if (lookahead == '@') ADVANCE(326);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '/') ADVANCE(151);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(89);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == '@') ADVANCE(325);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(95);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == '@') ADVANCE(335);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == '@') ADVANCE(335);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '/') ADVANCE(147);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '/') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == '@') ADVANCE(326);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(89);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '@') ADVANCE(325);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(95);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '@') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '@') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '@') ADVANCE(326);
      if (lookahead == '|') ADVANCE(174);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(248);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '@') ADVANCE(327);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == '@') ADVANCE(337);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(92);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '@') ADVANCE(326);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(89);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(266);
      if (lookahead == '/') ADVANCE(185);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(266);
      if (lookahead == '/') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(269);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '@') ADVANCE(327);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(269);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == '@') ADVANCE(337);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(92);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '@') ADVANCE(326);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(89);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '@') ADVANCE(327);
      if (lookahead == '|') ADVANCE(178);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '@') ADVANCE(327);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '@') ADVANCE(337);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(92);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '@') ADVANCE(337);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '@') ADVANCE(327);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '@') ADVANCE(337);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(92);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '@') ADVANCE(337);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(333);
      if (lookahead == '/') ADVANCE(412);
      if (lookahead == '|') ADVANCE(412);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(419);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '|') ADVANCE(157);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(346);
      if (lookahead == '|') ADVANCE(407);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(419);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(375);
      if (lookahead == '|') ADVANCE(404);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(419);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(325);
      if (lookahead == 'i') ADVANCE(319);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == '|') ADVANCE(158);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(95);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(232);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(325);
      if (lookahead == '|') ADVANCE(154);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(287);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(217);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(326);
      if (lookahead == 'i') ADVANCE(323);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == '|') ADVANCE(176);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(255);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(326);
      if (lookahead == '|') ADVANCE(174);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(248);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(327);
      if (lookahead == 'i') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == '|') ADVANCE(179);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(327);
      if (lookahead == '|') ADVANCE(178);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(378);
      if (lookahead == 'i') ADVANCE(346);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(378);
      if (lookahead == 'i') ADVANCE(346);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(379);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(378);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(328);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(328);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(328);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(329);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(329);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(329);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(330);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(330);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(330);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '|') ADVANCE(183);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '|') ADVANCE(182);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == '|') ADVANCE(157);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(231);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == '|') ADVANCE(157);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(282);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == '|') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(254);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == '|') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(283);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == '|') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == '|') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(284);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'n') ADVANCE(386);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'n') ADVANCE(387);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(157);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(312);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(231);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(157);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(254);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(157);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(157);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(313);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(282);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(157);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(283);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(157);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(284);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(157);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(412);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(419);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '|') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(419);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(338);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(231);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(254);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(231);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(254);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(363);
      if (lookahead == '\r') ADVANCE(364);
      if (lookahead == 133 ||
          lookahead == 8232) ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(365);
      if (lookahead == 133) ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(365);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == '/') ADVANCE(414);
      if (lookahead == 'i') ADVANCE(346);
      if (lookahead == '|') ADVANCE(415);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(419);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(346);
      if (lookahead == '|') ADVANCE(415);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(419);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      if (!aux_sym_symbol_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(381);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(389);
      if (lookahead == '/') ADVANCE(415);
      if (lookahead == 'i') ADVANCE(346);
      if (lookahead == '|') ADVANCE(415);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(370);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(419);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'i') ADVANCE(318);
      if (lookahead == 'n') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(382);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(380);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(409);
      if (lookahead == 'i') ADVANCE(396);
      if (lookahead == 'n') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(409);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(410);
      if (lookahead == 'i') ADVANCE(320);
      if (lookahead == 'n') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(417);
      if (lookahead == 'i') ADVANCE(396);
      if (lookahead == 'n') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(417);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'i') ADVANCE(320);
      if (lookahead == 'n') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(370);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0') ADVANCE(346);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0') ADVANCE(296);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0') ADVANCE(392);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'a') ADVANCE(393);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'a') ADVANCE(394);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'a') ADVANCE(395);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'f') ADVANCE(369);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'f') ADVANCE(372);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'f') ADVANCE(373);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'i') ADVANCE(346);
      if (lookahead == '|') ADVANCE(415);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(389);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(419);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'i') ADVANCE(346);
      if (lookahead == '|') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(419);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'i') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(391);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'i') ADVANCE(346);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(369);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(372);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(373);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(388);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(391);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(389);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_POUND_BQUOTE);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(432);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA);
      if (lookahead == '@') ADVANCE(434);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA_AT);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      END_STATE();
    case 436:
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
  [92] = {.lex_state = 194},
  [93] = {.lex_state = 194},
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
  [105] = {.lex_state = 193},
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
  [119] = {.lex_state = 193},
  [120] = {.lex_state = 19},
  [121] = {.lex_state = 19},
  [122] = {.lex_state = 19},
  [123] = {.lex_state = 19},
  [124] = {.lex_state = 19},
  [125] = {.lex_state = 19},
  [126] = {.lex_state = 19},
  [127] = {.lex_state = 193},
  [128] = {.lex_state = 193},
  [129] = {.lex_state = 193},
  [130] = {.lex_state = 19},
  [131] = {.lex_state = 19},
  [132] = {.lex_state = 19},
  [133] = {.lex_state = 193},
  [134] = {.lex_state = 193},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 193},
  [141] = {.lex_state = 193},
  [142] = {.lex_state = 0},
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
    [sym_program] = STATE(142),
    [sym__token] = STATE(23),
    [sym__skip] = STATE(23),
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
    [aux_sym__skip_token1] = ACTIONS(5),
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
    [sym__skip] = STATE(2),
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
    [aux_sym__skip_token1] = ACTIONS(49),
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
    [sym__token] = STATE(4),
    [sym__skip] = STATE(4),
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
    [aux_sym__skip_token1] = ACTIONS(112),
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
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(114),
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
    [sym__skip] = STATE(2),
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
    [aux_sym__skip_token1] = ACTIONS(116),
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
    [sym__skip] = STATE(2),
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
    [aux_sym__skip_token1] = ACTIONS(116),
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
    [sym__skip] = STATE(2),
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
    [aux_sym__skip_token1] = ACTIONS(116),
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
    [sym__skip] = STATE(12),
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
    [aux_sym__skip_token1] = ACTIONS(120),
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
    [sym__token] = STATE(15),
    [sym__skip] = STATE(15),
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
    [aux_sym__skip_token1] = ACTIONS(124),
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
    [sym__skip] = STATE(18),
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
    [aux_sym__skip_token1] = ACTIONS(128),
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
    [anon_sym_RPAREN] = ACTIONS(130),
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
    [sym__token] = STATE(19),
    [sym__skip] = STATE(19),
    [sym_comment] = STATE(19),
    [sym_directive] = STATE(19),
    [sym_block_comment] = STATE(19),
    [sym__datum] = STATE(19),
    [sym_number] = STATE(19),
    [sym_string] = STATE(19),
    [sym_symbol] = STATE(19),
    [sym_list] = STATE(19),
    [sym_quote] = STATE(19),
    [sym_quasiquote] = STATE(19),
    [sym_syntax] = STATE(19),
    [sym_quasisyntax] = STATE(19),
    [sym_unquote] = STATE(19),
    [sym_unquote_splicing] = STATE(19),
    [sym_unsyntax] = STATE(19),
    [sym_unsyntax_splicing] = STATE(19),
    [sym_vector] = STATE(19),
    [sym_byte_vector] = STATE(19),
    [aux_sym_program_repeat1] = STATE(19),
    [aux_sym__skip_token1] = ACTIONS(132),
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
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(130),
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
    [sym__token] = STATE(22),
    [sym__skip] = STATE(22),
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
    [aux_sym__skip_token1] = ACTIONS(134),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(134),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(134),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(130),
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
    [sym__skip] = STATE(2),
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
    [aux_sym__skip_token1] = ACTIONS(116),
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
    [sym__token] = STATE(5),
    [sym__skip] = STATE(5),
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
    [aux_sym__skip_token1] = ACTIONS(138),
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
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(114),
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
    [sym__token] = STATE(6),
    [sym__skip] = STATE(6),
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
    [aux_sym__skip_token1] = ACTIONS(140),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(140),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(140),
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
  [15] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
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
    [aux_sym__skip_token1] = ACTIONS(116),
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
    [anon_sym_RPAREN] = ACTIONS(142),
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
    [sym__skip] = STATE(2),
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
    [aux_sym__skip_token1] = ACTIONS(116),
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
  [17] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
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
    [aux_sym__skip_token1] = ACTIONS(116),
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
  [18] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
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
    [aux_sym__skip_token1] = ACTIONS(116),
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
  [19] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
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
    [aux_sym__skip_token1] = ACTIONS(116),
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
    [anon_sym_RBRACK] = ACTIONS(148),
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
    [sym__token] = STATE(17),
    [sym__skip] = STATE(17),
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
    [aux_sym__skip_token1] = ACTIONS(150),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(150),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(150),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
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
  [21] = {
    [sym__token] = STATE(16),
    [sym__skip] = STATE(16),
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
    [aux_sym__skip_token1] = ACTIONS(154),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(154),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(154),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
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
  [22] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
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
    [aux_sym__skip_token1] = ACTIONS(116),
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
    [anon_sym_RBRACE] = ACTIONS(148),
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
    [sym__skip] = STATE(2),
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
    [aux_sym__skip_token1] = ACTIONS(116),
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
  [24] = {
    [sym__skip] = STATE(93),
    [sym_comment] = STATE(93),
    [sym_block_comment] = STATE(93),
    [sym__datum] = STATE(132),
    [sym_number] = STATE(132),
    [sym_string] = STATE(132),
    [sym_symbol] = STATE(132),
    [sym_list] = STATE(132),
    [sym_quote] = STATE(132),
    [sym_quasiquote] = STATE(132),
    [sym_syntax] = STATE(132),
    [sym_quasisyntax] = STATE(132),
    [sym_unquote] = STATE(132),
    [sym_unquote_splicing] = STATE(132),
    [sym_unsyntax] = STATE(132),
    [sym_unsyntax_splicing] = STATE(132),
    [sym_vector] = STATE(132),
    [sym_byte_vector] = STATE(132),
    [aux_sym_comment_repeat1] = STATE(93),
    [aux_sym__skip_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
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
    [sym__skip] = STATE(39),
    [sym_comment] = STATE(39),
    [sym_block_comment] = STATE(39),
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
    [aux_sym_comment_repeat1] = STATE(39),
    [aux_sym__skip_token1] = ACTIONS(196),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(198),
    [aux_sym_number_token1] = ACTIONS(164),
    [sym_character] = ACTIONS(198),
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
  [26] = {
    [sym__skip] = STATE(50),
    [sym_comment] = STATE(50),
    [sym_block_comment] = STATE(50),
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
    [aux_sym_comment_repeat1] = STATE(50),
    [aux_sym__skip_token1] = ACTIONS(200),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(202),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(202),
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
    [sym__skip] = STATE(52),
    [sym_comment] = STATE(52),
    [sym_block_comment] = STATE(52),
    [sym__datum] = STATE(86),
    [sym_number] = STATE(86),
    [sym_string] = STATE(86),
    [sym_symbol] = STATE(86),
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
    [aux_sym_comment_repeat1] = STATE(52),
    [aux_sym__skip_token1] = ACTIONS(204),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(206),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(206),
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
    [sym__skip] = STATE(54),
    [sym_comment] = STATE(54),
    [sym_block_comment] = STATE(54),
    [sym__datum] = STATE(60),
    [sym_number] = STATE(60),
    [sym_string] = STATE(60),
    [sym_symbol] = STATE(60),
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
    [aux_sym_comment_repeat1] = STATE(54),
    [aux_sym__skip_token1] = ACTIONS(208),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(210),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(210),
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
    [sym__skip] = STATE(31),
    [sym_comment] = STATE(31),
    [sym_block_comment] = STATE(31),
    [sym__datum] = STATE(65),
    [sym_number] = STATE(65),
    [sym_string] = STATE(65),
    [sym_symbol] = STATE(65),
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
    [aux_sym_comment_repeat1] = STATE(31),
    [aux_sym__skip_token1] = ACTIONS(212),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(214),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(214),
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
    [sym__skip] = STATE(40),
    [sym_comment] = STATE(40),
    [sym_block_comment] = STATE(40),
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
    [aux_sym_comment_repeat1] = STATE(40),
    [aux_sym__skip_token1] = ACTIONS(216),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
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
  [31] = {
    [sym__skip] = STATE(93),
    [sym_comment] = STATE(93),
    [sym_block_comment] = STATE(93),
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
    [aux_sym_comment_repeat1] = STATE(93),
    [aux_sym__skip_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(220),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(220),
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
    [sym__skip] = STATE(42),
    [sym_comment] = STATE(42),
    [sym_block_comment] = STATE(42),
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
    [aux_sym_comment_repeat1] = STATE(42),
    [aux_sym__skip_token1] = ACTIONS(222),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(224),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(224),
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
  [33] = {
    [sym__skip] = STATE(44),
    [sym_comment] = STATE(44),
    [sym_block_comment] = STATE(44),
    [sym__datum] = STATE(90),
    [sym_number] = STATE(90),
    [sym_string] = STATE(90),
    [sym_symbol] = STATE(90),
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
    [aux_sym_comment_repeat1] = STATE(44),
    [aux_sym__skip_token1] = ACTIONS(226),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(228),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(228),
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
  [34] = {
    [sym__skip] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_block_comment] = STATE(46),
    [sym__datum] = STATE(91),
    [sym_number] = STATE(91),
    [sym_string] = STATE(91),
    [sym_symbol] = STATE(91),
    [sym_list] = STATE(91),
    [sym_quote] = STATE(91),
    [sym_quasiquote] = STATE(91),
    [sym_syntax] = STATE(91),
    [sym_quasisyntax] = STATE(91),
    [sym_unquote] = STATE(91),
    [sym_unquote_splicing] = STATE(91),
    [sym_unsyntax] = STATE(91),
    [sym_unsyntax_splicing] = STATE(91),
    [sym_vector] = STATE(91),
    [sym_byte_vector] = STATE(91),
    [aux_sym_comment_repeat1] = STATE(46),
    [aux_sym__skip_token1] = ACTIONS(230),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
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
  [35] = {
    [sym__skip] = STATE(47),
    [sym_comment] = STATE(47),
    [sym_block_comment] = STATE(47),
    [sym__datum] = STATE(98),
    [sym_number] = STATE(98),
    [sym_string] = STATE(98),
    [sym_symbol] = STATE(98),
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
    [aux_sym_comment_repeat1] = STATE(47),
    [aux_sym__skip_token1] = ACTIONS(234),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(236),
    [aux_sym_number_token1] = ACTIONS(164),
    [sym_character] = ACTIONS(236),
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
    [sym__skip] = STATE(93),
    [sym_comment] = STATE(93),
    [sym_block_comment] = STATE(93),
    [sym__datum] = STATE(103),
    [sym_number] = STATE(103),
    [sym_string] = STATE(103),
    [sym_symbol] = STATE(103),
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
    [aux_sym_comment_repeat1] = STATE(93),
    [aux_sym__skip_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
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
  [37] = {
    [sym__skip] = STATE(93),
    [sym_comment] = STATE(93),
    [sym_block_comment] = STATE(93),
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
    [aux_sym_comment_repeat1] = STATE(93),
    [aux_sym__skip_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(240),
    [aux_sym_number_token1] = ACTIONS(164),
    [sym_character] = ACTIONS(240),
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
  [38] = {
    [sym__skip] = STATE(93),
    [sym_comment] = STATE(93),
    [sym_block_comment] = STATE(93),
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
    [aux_sym_comment_repeat1] = STATE(93),
    [aux_sym__skip_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
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
  [39] = {
    [sym__skip] = STATE(93),
    [sym_comment] = STATE(93),
    [sym_block_comment] = STATE(93),
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
    [aux_sym_comment_repeat1] = STATE(93),
    [aux_sym__skip_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(244),
    [aux_sym_number_token1] = ACTIONS(164),
    [sym_character] = ACTIONS(244),
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
  [40] = {
    [sym__skip] = STATE(93),
    [sym_comment] = STATE(93),
    [sym_block_comment] = STATE(93),
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
    [aux_sym_comment_repeat1] = STATE(93),
    [aux_sym__skip_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
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
  [41] = {
    [sym__skip] = STATE(93),
    [sym_comment] = STATE(93),
    [sym_block_comment] = STATE(93),
    [sym__datum] = STATE(116),
    [sym_number] = STATE(116),
    [sym_string] = STATE(116),
    [sym_symbol] = STATE(116),
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
    [aux_sym_comment_repeat1] = STATE(93),
    [aux_sym__skip_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
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
  [42] = {
    [sym__skip] = STATE(93),
    [sym_comment] = STATE(93),
    [sym_block_comment] = STATE(93),
    [sym__datum] = STATE(73),
    [sym_number] = STATE(73),
    [sym_string] = STATE(73),
    [sym_symbol] = STATE(73),
    [sym_list] = STATE(73),
    [sym_quote] = STATE(73),
    [sym_quasiquote] = STATE(73),
    [sym_syntax] = STATE(73),
    [sym_quasisyntax] = STATE(73),
    [sym_unquote] = STATE(73),
    [sym_unquote_splicing] = STATE(73),
    [sym_unsyntax] = STATE(73),
    [sym_unsyntax_splicing] = STATE(73),
    [sym_vector] = STATE(73),
    [sym_byte_vector] = STATE(73),
    [aux_sym_comment_repeat1] = STATE(93),
    [aux_sym__skip_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
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
  [43] = {
    [sym__skip] = STATE(93),
    [sym_comment] = STATE(93),
    [sym_block_comment] = STATE(93),
    [sym__datum] = STATE(115),
    [sym_number] = STATE(115),
    [sym_string] = STATE(115),
    [sym_symbol] = STATE(115),
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
    [aux_sym_comment_repeat1] = STATE(93),
    [aux_sym__skip_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(252),
    [aux_sym_number_token1] = ACTIONS(164),
    [sym_character] = ACTIONS(252),
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
  [44] = {
    [sym__skip] = STATE(93),
    [sym_comment] = STATE(93),
    [sym_block_comment] = STATE(93),
    [sym__datum] = STATE(74),
    [sym_number] = STATE(74),
    [sym_string] = STATE(74),
    [sym_symbol] = STATE(74),
    [sym_list] = STATE(74),
    [sym_quote] = STATE(74),
    [sym_quasiquote] = STATE(74),
    [sym_syntax] = STATE(74),
    [sym_quasisyntax] = STATE(74),
    [sym_unquote] = STATE(74),
    [sym_unquote_splicing] = STATE(74),
    [sym_unsyntax] = STATE(74),
    [sym_unsyntax_splicing] = STATE(74),
    [sym_vector] = STATE(74),
    [sym_byte_vector] = STATE(74),
    [aux_sym_comment_repeat1] = STATE(93),
    [aux_sym__skip_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(254),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(254),
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
  [45] = {
    [sym__skip] = STATE(93),
    [sym_comment] = STATE(93),
    [sym_block_comment] = STATE(93),
    [sym__datum] = STATE(114),
    [sym_number] = STATE(114),
    [sym_string] = STATE(114),
    [sym_symbol] = STATE(114),
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
    [aux_sym_comment_repeat1] = STATE(93),
    [aux_sym__skip_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(256),
    [aux_sym_number_token1] = ACTIONS(164),
    [sym_character] = ACTIONS(256),
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
  [46] = {
    [sym__skip] = STATE(93),
    [sym_comment] = STATE(93),
    [sym_block_comment] = STATE(93),
    [sym__datum] = STATE(75),
    [sym_number] = STATE(75),
    [sym_string] = STATE(75),
    [sym_symbol] = STATE(75),
    [sym_list] = STATE(75),
    [sym_quote] = STATE(75),
    [sym_quasiquote] = STATE(75),
    [sym_syntax] = STATE(75),
    [sym_quasisyntax] = STATE(75),
    [sym_unquote] = STATE(75),
    [sym_unquote_splicing] = STATE(75),
    [sym_unsyntax] = STATE(75),
    [sym_unsyntax_splicing] = STATE(75),
    [sym_vector] = STATE(75),
    [sym_byte_vector] = STATE(75),
    [aux_sym_comment_repeat1] = STATE(93),
    [aux_sym__skip_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(258),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(258),
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
  [47] = {
    [sym__skip] = STATE(93),
    [sym_comment] = STATE(93),
    [sym_block_comment] = STATE(93),
    [sym__datum] = STATE(110),
    [sym_number] = STATE(110),
    [sym_string] = STATE(110),
    [sym_symbol] = STATE(110),
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
    [aux_sym_comment_repeat1] = STATE(93),
    [aux_sym__skip_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
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
  [48] = {
    [sym__skip] = STATE(93),
    [sym_comment] = STATE(93),
    [sym_block_comment] = STATE(93),
    [sym__datum] = STATE(76),
    [sym_number] = STATE(76),
    [sym_string] = STATE(76),
    [sym_symbol] = STATE(76),
    [sym_list] = STATE(76),
    [sym_quote] = STATE(76),
    [sym_quasiquote] = STATE(76),
    [sym_syntax] = STATE(76),
    [sym_quasisyntax] = STATE(76),
    [sym_unquote] = STATE(76),
    [sym_unquote_splicing] = STATE(76),
    [sym_unsyntax] = STATE(76),
    [sym_unsyntax_splicing] = STATE(76),
    [sym_vector] = STATE(76),
    [sym_byte_vector] = STATE(76),
    [aux_sym_comment_repeat1] = STATE(93),
    [aux_sym__skip_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
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
  [49] = {
    [sym__skip] = STATE(24),
    [sym_comment] = STATE(24),
    [sym_block_comment] = STATE(24),
    [sym__datum] = STATE(106),
    [sym_number] = STATE(106),
    [sym_string] = STATE(106),
    [sym_symbol] = STATE(106),
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
    [aux_sym_comment_repeat1] = STATE(24),
    [aux_sym__skip_token1] = ACTIONS(264),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
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
  [50] = {
    [sym__skip] = STATE(93),
    [sym_comment] = STATE(93),
    [sym_block_comment] = STATE(93),
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
    [aux_sym_comment_repeat1] = STATE(93),
    [aux_sym__skip_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
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
  [51] = {
    [sym__skip] = STATE(38),
    [sym_comment] = STATE(38),
    [sym_block_comment] = STATE(38),
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
    [aux_sym_comment_repeat1] = STATE(38),
    [aux_sym__skip_token1] = ACTIONS(270),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
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
  [52] = {
    [sym__skip] = STATE(93),
    [sym_comment] = STATE(93),
    [sym_block_comment] = STATE(93),
    [sym__datum] = STATE(78),
    [sym_number] = STATE(78),
    [sym_string] = STATE(78),
    [sym_symbol] = STATE(78),
    [sym_list] = STATE(78),
    [sym_quote] = STATE(78),
    [sym_quasiquote] = STATE(78),
    [sym_syntax] = STATE(78),
    [sym_quasisyntax] = STATE(78),
    [sym_unquote] = STATE(78),
    [sym_unquote_splicing] = STATE(78),
    [sym_unsyntax] = STATE(78),
    [sym_unsyntax_splicing] = STATE(78),
    [sym_vector] = STATE(78),
    [sym_byte_vector] = STATE(78),
    [aux_sym_comment_repeat1] = STATE(93),
    [aux_sym__skip_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(274),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(274),
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
  [53] = {
    [sym__skip] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_block_comment] = STATE(48),
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
    [aux_sym_comment_repeat1] = STATE(48),
    [aux_sym__skip_token1] = ACTIONS(276),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(278),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(278),
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
    [sym__skip] = STATE(93),
    [sym_comment] = STATE(93),
    [sym_block_comment] = STATE(93),
    [sym__datum] = STATE(79),
    [sym_number] = STATE(79),
    [sym_string] = STATE(79),
    [sym_symbol] = STATE(79),
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
    [aux_sym_comment_repeat1] = STATE(93),
    [aux_sym__skip_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(280),
    [aux_sym_number_token1] = ACTIONS(15),
    [sym_character] = ACTIONS(280),
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
  [55] = {
    [sym__skip] = STATE(37),
    [sym_comment] = STATE(37),
    [sym_block_comment] = STATE(37),
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
    [aux_sym_comment_repeat1] = STATE(37),
    [aux_sym__skip_token1] = ACTIONS(282),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(284),
    [aux_sym_number_token1] = ACTIONS(164),
    [sym_character] = ACTIONS(284),
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
  [56] = {
    [sym__skip] = STATE(36),
    [sym_comment] = STATE(36),
    [sym_block_comment] = STATE(36),
    [sym__datum] = STATE(104),
    [sym_number] = STATE(104),
    [sym_string] = STATE(104),
    [sym_symbol] = STATE(104),
    [sym_list] = STATE(104),
    [sym_quote] = STATE(104),
    [sym_quasiquote] = STATE(104),
    [sym_syntax] = STATE(104),
    [sym_quasisyntax] = STATE(104),
    [sym_unquote] = STATE(104),
    [sym_unquote_splicing] = STATE(104),
    [sym_unsyntax] = STATE(104),
    [sym_unsyntax_splicing] = STATE(104),
    [sym_vector] = STATE(104),
    [sym_byte_vector] = STATE(104),
    [aux_sym_comment_repeat1] = STATE(36),
    [aux_sym__skip_token1] = ACTIONS(286),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(288),
    [aux_sym_number_token1] = ACTIONS(164),
    [sym_character] = ACTIONS(288),
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
  [57] = {
    [sym__skip] = STATE(45),
    [sym_comment] = STATE(45),
    [sym_block_comment] = STATE(45),
    [sym__datum] = STATE(131),
    [sym_number] = STATE(131),
    [sym_string] = STATE(131),
    [sym_symbol] = STATE(131),
    [sym_list] = STATE(131),
    [sym_quote] = STATE(131),
    [sym_quasiquote] = STATE(131),
    [sym_syntax] = STATE(131),
    [sym_quasisyntax] = STATE(131),
    [sym_unquote] = STATE(131),
    [sym_unquote_splicing] = STATE(131),
    [sym_unsyntax] = STATE(131),
    [sym_unsyntax_splicing] = STATE(131),
    [sym_vector] = STATE(131),
    [sym_byte_vector] = STATE(131),
    [aux_sym_comment_repeat1] = STATE(45),
    [aux_sym__skip_token1] = ACTIONS(290),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
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
    [sym__skip] = STATE(43),
    [sym_comment] = STATE(43),
    [sym_block_comment] = STATE(43),
    [sym__datum] = STATE(130),
    [sym_number] = STATE(130),
    [sym_string] = STATE(130),
    [sym_symbol] = STATE(130),
    [sym_list] = STATE(130),
    [sym_quote] = STATE(130),
    [sym_quasiquote] = STATE(130),
    [sym_syntax] = STATE(130),
    [sym_quasisyntax] = STATE(130),
    [sym_unquote] = STATE(130),
    [sym_unquote_splicing] = STATE(130),
    [sym_unsyntax] = STATE(130),
    [sym_unsyntax_splicing] = STATE(130),
    [sym_vector] = STATE(130),
    [sym_byte_vector] = STATE(130),
    [aux_sym_comment_repeat1] = STATE(43),
    [aux_sym__skip_token1] = ACTIONS(294),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
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
    [sym__skip] = STATE(41),
    [sym_comment] = STATE(41),
    [sym_block_comment] = STATE(41),
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
    [aux_sym_comment_repeat1] = STATE(41),
    [aux_sym__skip_token1] = ACTIONS(298),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
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
  [0] = 2,
    ACTIONS(304), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(302), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [32] = 2,
    ACTIONS(308), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(306), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [64] = 2,
    ACTIONS(312), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(310), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [96] = 2,
    ACTIONS(316), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(314), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [128] = 2,
    ACTIONS(320), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(318), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [160] = 2,
    ACTIONS(324), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(322), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [192] = 2,
    ACTIONS(328), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(326), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [224] = 2,
    ACTIONS(332), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(330), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [256] = 2,
    ACTIONS(336), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(334), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [288] = 2,
    ACTIONS(340), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(338), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [320] = 2,
    ACTIONS(344), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(342), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [352] = 2,
    ACTIONS(348), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(346), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [384] = 2,
    ACTIONS(352), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(350), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [416] = 2,
    ACTIONS(356), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(354), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [448] = 2,
    ACTIONS(360), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(358), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [480] = 2,
    ACTIONS(364), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(362), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [512] = 2,
    ACTIONS(368), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(366), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [544] = 2,
    ACTIONS(372), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(370), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [576] = 2,
    ACTIONS(376), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(374), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [608] = 2,
    ACTIONS(380), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(378), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [640] = 2,
    ACTIONS(384), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(382), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [672] = 2,
    ACTIONS(388), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(386), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [704] = 2,
    ACTIONS(392), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(390), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [736] = 2,
    ACTIONS(396), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(394), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [768] = 2,
    ACTIONS(400), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(398), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [800] = 2,
    ACTIONS(404), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(402), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [832] = 2,
    ACTIONS(408), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(406), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [864] = 2,
    ACTIONS(412), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(410), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [896] = 2,
    ACTIONS(416), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(414), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [928] = 2,
    ACTIONS(420), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(418), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [960] = 2,
    ACTIONS(424), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(422), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [992] = 2,
    ACTIONS(428), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(426), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [1024] = 2,
    ACTIONS(432), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(430), 23,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
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
  [1056] = 7,
    ACTIONS(434), 1,
      aux_sym__skip_token1,
    ACTIONS(437), 1,
      aux_sym_comment_token1,
    ACTIONS(440), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(443), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(448), 4,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    STATE(93), 4,
      sym__skip,
      sym_comment,
      sym_block_comment,
      aux_sym_comment_repeat1,
    ACTIONS(446), 14,
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
  [1097] = 7,
    ACTIONS(450), 1,
      aux_sym__skip_token1,
    ACTIONS(452), 1,
      aux_sym_comment_token1,
    ACTIONS(454), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(456), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(458), 1,
      aux_sym_symbol_token1,
    STATE(82), 1,
      sym_symbol,
    STATE(95), 4,
      sym__skip,
      sym_comment,
      sym_block_comment,
      aux_sym_comment_repeat1,
  [1122] = 7,
    ACTIONS(452), 1,
      aux_sym_comment_token1,
    ACTIONS(454), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(456), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(458), 1,
      aux_sym_symbol_token1,
    ACTIONS(460), 1,
      aux_sym__skip_token1,
    STATE(66), 1,
      sym_symbol,
    STATE(96), 4,
      sym__skip,
      sym_comment,
      sym_block_comment,
      aux_sym_comment_repeat1,
  [1147] = 6,
    ACTIONS(446), 1,
      aux_sym_symbol_token1,
    ACTIONS(462), 1,
      aux_sym__skip_token1,
    ACTIONS(465), 1,
      aux_sym_comment_token1,
    ACTIONS(468), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(471), 1,
      anon_sym_POUND_PIPE,
    STATE(96), 4,
      sym__skip,
      sym_comment,
      sym_block_comment,
      aux_sym_comment_repeat1,
  [1169] = 1,
    ACTIONS(334), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1177] = 1,
    ACTIONS(322), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1185] = 1,
    ACTIONS(398), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1193] = 1,
    ACTIONS(430), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1201] = 1,
    ACTIONS(394), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1209] = 1,
    ACTIONS(410), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1217] = 1,
    ACTIONS(374), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1225] = 1,
    ACTIONS(406), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1233] = 4,
    ACTIONS(474), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(476), 1,
      aux_sym_block_comment_token1,
    ACTIONS(478), 1,
      anon_sym_PIPE_POUND,
    STATE(133), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1247] = 1,
    ACTIONS(302), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1255] = 1,
    ACTIONS(370), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1263] = 1,
    ACTIONS(310), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1271] = 1,
    ACTIONS(314), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1279] = 1,
    ACTIONS(318), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1287] = 1,
    ACTIONS(330), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1295] = 1,
    ACTIONS(338), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1303] = 1,
    ACTIONS(346), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1311] = 1,
    ACTIONS(350), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1319] = 1,
    ACTIONS(354), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1327] = 1,
    ACTIONS(358), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1335] = 1,
    ACTIONS(362), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1343] = 1,
    ACTIONS(366), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1351] = 4,
    ACTIONS(474), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(480), 1,
      aux_sym_block_comment_token1,
    ACTIONS(482), 1,
      anon_sym_PIPE_POUND,
    STATE(105), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1365] = 1,
    ACTIONS(426), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1373] = 1,
    ACTIONS(402), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1381] = 1,
    ACTIONS(382), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1389] = 1,
    ACTIONS(386), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1397] = 1,
    ACTIONS(422), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1405] = 1,
    ACTIONS(306), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1413] = 1,
    ACTIONS(342), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1421] = 4,
    ACTIONS(474), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(484), 1,
      aux_sym_block_comment_token1,
    ACTIONS(486), 1,
      anon_sym_PIPE_POUND,
    STATE(134), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1435] = 4,
    ACTIONS(474), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(488), 1,
      aux_sym_block_comment_token1,
    ACTIONS(490), 1,
      anon_sym_PIPE_POUND,
    STATE(129), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1449] = 4,
    ACTIONS(474), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(476), 1,
      aux_sym_block_comment_token1,
    ACTIONS(492), 1,
      anon_sym_PIPE_POUND,
    STATE(133), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1463] = 1,
    ACTIONS(418), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1471] = 1,
    ACTIONS(414), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1479] = 1,
    ACTIONS(378), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1487] = 4,
    ACTIONS(494), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(497), 1,
      aux_sym_block_comment_token1,
    ACTIONS(500), 1,
      anon_sym_PIPE_POUND,
    STATE(133), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1501] = 4,
    ACTIONS(474), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(476), 1,
      aux_sym_block_comment_token1,
    ACTIONS(502), 1,
      anon_sym_PIPE_POUND,
    STATE(133), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1515] = 3,
    ACTIONS(504), 1,
      anon_sym_DQUOTE,
    STATE(137), 1,
      aux_sym_string_repeat1,
    ACTIONS(506), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1526] = 3,
    ACTIONS(508), 1,
      anon_sym_DQUOTE,
    STATE(139), 1,
      aux_sym_string_repeat1,
    ACTIONS(510), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1537] = 3,
    ACTIONS(512), 1,
      anon_sym_DQUOTE,
    STATE(137), 1,
      aux_sym_string_repeat1,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1548] = 3,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    STATE(135), 1,
      aux_sym_string_repeat1,
    ACTIONS(519), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1559] = 3,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    STATE(137), 1,
      aux_sym_string_repeat1,
    ACTIONS(506), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1570] = 2,
    ACTIONS(332), 1,
      aux_sym_block_comment_token1,
    ACTIONS(330), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [1578] = 2,
    ACTIONS(396), 1,
      aux_sym_block_comment_token1,
    ACTIONS(394), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [1586] = 1,
    ACTIONS(523), 1,
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
  [SMALL_STATE(92)] = 1024,
  [SMALL_STATE(93)] = 1056,
  [SMALL_STATE(94)] = 1097,
  [SMALL_STATE(95)] = 1122,
  [SMALL_STATE(96)] = 1147,
  [SMALL_STATE(97)] = 1169,
  [SMALL_STATE(98)] = 1177,
  [SMALL_STATE(99)] = 1185,
  [SMALL_STATE(100)] = 1193,
  [SMALL_STATE(101)] = 1201,
  [SMALL_STATE(102)] = 1209,
  [SMALL_STATE(103)] = 1217,
  [SMALL_STATE(104)] = 1225,
  [SMALL_STATE(105)] = 1233,
  [SMALL_STATE(106)] = 1247,
  [SMALL_STATE(107)] = 1255,
  [SMALL_STATE(108)] = 1263,
  [SMALL_STATE(109)] = 1271,
  [SMALL_STATE(110)] = 1279,
  [SMALL_STATE(111)] = 1287,
  [SMALL_STATE(112)] = 1295,
  [SMALL_STATE(113)] = 1303,
  [SMALL_STATE(114)] = 1311,
  [SMALL_STATE(115)] = 1319,
  [SMALL_STATE(116)] = 1327,
  [SMALL_STATE(117)] = 1335,
  [SMALL_STATE(118)] = 1343,
  [SMALL_STATE(119)] = 1351,
  [SMALL_STATE(120)] = 1365,
  [SMALL_STATE(121)] = 1373,
  [SMALL_STATE(122)] = 1381,
  [SMALL_STATE(123)] = 1389,
  [SMALL_STATE(124)] = 1397,
  [SMALL_STATE(125)] = 1405,
  [SMALL_STATE(126)] = 1413,
  [SMALL_STATE(127)] = 1421,
  [SMALL_STATE(128)] = 1435,
  [SMALL_STATE(129)] = 1449,
  [SMALL_STATE(130)] = 1463,
  [SMALL_STATE(131)] = 1471,
  [SMALL_STATE(132)] = 1479,
  [SMALL_STATE(133)] = 1487,
  [SMALL_STATE(134)] = 1501,
  [SMALL_STATE(135)] = 1515,
  [SMALL_STATE(136)] = 1526,
  [SMALL_STATE(137)] = 1537,
  [SMALL_STATE(138)] = 1548,
  [SMALL_STATE(139)] = 1559,
  [SMALL_STATE(140)] = 1570,
  [SMALL_STATE(141)] = 1578,
  [SMALL_STATE(142)] = 1586,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(85),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(94),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(128),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(68),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(136),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(70),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(30),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(32),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(33),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(34),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(53),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(27),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(20),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax_splicing, 2),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax_splicing, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_vector, 2),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_vector, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 3),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 3),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syntax, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasisyntax, 3),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasisyntax, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 3),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splicing, 3),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splicing, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax, 3),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax_splicing, 3),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax_splicing, 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_vector, 3),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_vector, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax, 2),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splicing, 2),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splicing, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 2),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 2),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syntax, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasisyntax, 2),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasisyntax, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(93),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(85),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(29),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(128),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(96),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(121),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(35),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(127),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(119),
  [497] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(133),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(137),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [523] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
