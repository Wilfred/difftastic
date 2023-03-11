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
#define STATE_COUNT 141
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
  sym_number = 9,
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
  sym__all_comment = 34,
  sym_comment = 35,
  sym_directive = 36,
  sym_block_comment = 37,
  sym__datum = 38,
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
  [sym_number] = "number",
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
  [sym__all_comment] = "_all_comment",
  [sym_comment] = "comment",
  [sym_directive] = "directive",
  [sym_block_comment] = "block_comment",
  [sym__datum] = "_datum",
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
  [sym_number] = sym_number,
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
  [sym__all_comment] = sym__all_comment,
  [sym_comment] = sym_comment,
  [sym_directive] = sym_directive,
  [sym_block_comment] = sym_block_comment,
  [sym__datum] = sym__datum,
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
  [sym__all_comment] = {
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
  [12] = 4,
  [13] = 13,
  [14] = 14,
  [15] = 14,
  [16] = 16,
  [17] = 9,
  [18] = 8,
  [19] = 10,
  [20] = 7,
  [21] = 6,
  [22] = 5,
  [23] = 16,
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
  [36] = 36,
  [37] = 37,
  [38] = 25,
  [39] = 39,
  [40] = 39,
  [41] = 41,
  [42] = 37,
  [43] = 36,
  [44] = 35,
  [45] = 31,
  [46] = 34,
  [47] = 30,
  [48] = 24,
  [49] = 29,
  [50] = 33,
  [51] = 28,
  [52] = 32,
  [53] = 27,
  [54] = 54,
  [55] = 55,
  [56] = 26,
  [57] = 41,
  [58] = 54,
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
  [95] = 79,
  [96] = 82,
  [97] = 81,
  [98] = 92,
  [99] = 61,
  [100] = 90,
  [101] = 84,
  [102] = 85,
  [103] = 72,
  [104] = 83,
  [105] = 105,
  [106] = 89,
  [107] = 71,
  [108] = 80,
  [109] = 77,
  [110] = 86,
  [111] = 63,
  [112] = 64,
  [113] = 65,
  [114] = 66,
  [115] = 67,
  [116] = 68,
  [117] = 69,
  [118] = 118,
  [119] = 87,
  [120] = 76,
  [121] = 73,
  [122] = 60,
  [123] = 91,
  [124] = 74,
  [125] = 118,
  [126] = 118,
  [127] = 105,
  [128] = 128,
  [129] = 88,
  [130] = 62,
  [131] = 70,
  [132] = 105,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 135,
  [137] = 133,
  [138] = 77,
  [139] = 76,
  [140] = 140,
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

static inline bool aux_sym_symbol_token1_character_set_3(int32_t c) {
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
      if (eof) ADVANCE(164);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(165);
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '#') ADVANCE(172);
      if (lookahead == '\'') ADVANCE(371);
      if (lookahead == '(') ADVANCE(365);
      if (lookahead == ')') ADVANCE(366);
      if (lookahead == ',') ADVANCE(375);
      if (lookahead == ';') ADVANCE(166);
      if (lookahead == '[') ADVANCE(367);
      if (lookahead == ']') ADVANCE(368);
      if (lookahead == '`') ADVANCE(372);
      if (lookahead == '{') ADVANCE(369);
      if (lookahead == '|') ADVANCE(171);
      if (lookahead == '}') ADVANCE(370);
      if (lookahead != 0) ADVANCE(170);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(311);
      if (lookahead == '\r') ADVANCE(312);
      if (lookahead == 'x') ADVANCE(161);
      if (lookahead == 133 ||
          lookahead == 8232) ADVANCE(313);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(310);
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
      if (lookahead == '\n') ADVANCE(311);
      if (lookahead == '\r') ADVANCE(312);
      if (lookahead == 133 ||
          lookahead == 8232) ADVANCE(313);
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
      if (lookahead == '!') ADVANCE(168);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == ',') ADVANCE(378);
      if (lookahead == ';') ADVANCE(167);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(179);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(13);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(5);
      if (lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(174);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(212);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == '`') ADVANCE(374);
      if (lookahead == 'v') ADVANCE(105);
      if (lookahead == '|') ADVANCE(169);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(309);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(146);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(146);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(146);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(146);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(10);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == ';') ADVANCE(166);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(364);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(14);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(18);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(18);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(23);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(21);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(23);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(24);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '(') ADVANCE(381);
      END_STATE();
    case 28:
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 29:
      if (lookahead == '+') ADVANCE(34);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '.') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == 'n') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == '0') ADVANCE(175);
      END_STATE();
    case 40:
      if (lookahead == '0') ADVANCE(264);
      END_STATE();
    case 41:
      if (lookahead == '0') ADVANCE(76);
      END_STATE();
    case 42:
      if (lookahead == '0') ADVANCE(276);
      END_STATE();
    case 43:
      if (lookahead == '0') ADVANCE(267);
      END_STATE();
    case 44:
      if (lookahead == '0') ADVANCE(271);
      END_STATE();
    case 45:
      if (lookahead == '8') ADVANCE(27);
      END_STATE();
    case 46:
      if (lookahead == ';') ADVANCE(167);
      if (lookahead == '|') ADVANCE(169);
      END_STATE();
    case 47:
      if (lookahead == ';') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'b') ADVANCE(296);
      if (lookahead == 'd') ADVANCE(299);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead == 'l') ADVANCE(302);
      if (lookahead == 'n') ADVANCE(300);
      if (lookahead == 'p') ADVANCE(297);
      if (lookahead == 'r') ADVANCE(301);
      if (lookahead == 's') ADVANCE(304);
      if (lookahead == 't') ADVANCE(298);
      if (lookahead == 'v') ADVANCE(306);
      if (lookahead == 'x') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(295);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(295);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(295);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(67);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(31);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(38);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == '|') ADVANCE(144);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(10);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == '|') ADVANCE(144);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(18);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == '|') ADVANCE(144);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(18);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == '|') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(14);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 84:
      if (lookahead == 'k') ADVANCE(102);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(295);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(295);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(295);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 99:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 105:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 106:
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 107:
      if (lookahead == 'w') ADVANCE(87);
      END_STATE();
    case 108:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 109:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 110:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 111:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 112:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 113:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 114:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 115:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 116:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 117:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 118:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 119:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 120:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 121:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 122:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(252);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(28);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(253);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(254);
      END_STATE();
    case 123:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(213);
      END_STATE();
    case 124:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(206);
      END_STATE();
    case 125:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(245);
      END_STATE();
    case 126:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(21);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(252);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 131:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(231);
      END_STATE();
    case 132:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(219);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(248);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(24);
      END_STATE();
    case 135:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 136:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 137:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 162:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '|') ADVANCE(170);
      if (lookahead == '#') ADVANCE(172);
      if (lookahead == '|') ADVANCE(171);
      END_STATE();
    case 163:
      if (eof) ADVANCE(164);
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(371);
      if (lookahead == '(') ADVANCE(365);
      if (lookahead == ')') ADVANCE(366);
      if (lookahead == '+') ADVANCE(319);
      if (lookahead == ',') ADVANCE(376);
      if (lookahead == '-') ADVANCE(319);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == ';') ADVANCE(166);
      if (lookahead == '[') ADVANCE(367);
      if (lookahead == ']') ADVANCE(368);
      if (lookahead == '`') ADVANCE(372);
      if (lookahead == '{') ADVANCE(369);
      if (lookahead == '}') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(364);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__skip_token1);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '#') ADVANCE(173);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '|') ADVANCE(169);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == '/') ADVANCE(360);
      if (lookahead == '@') ADVANCE(317);
      if (lookahead == '|') ADVANCE(350);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(323);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(364);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '.') ADVANCE(184);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == '|') ADVANCE(137);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(109);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == '|') ADVANCE(137);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '+') ADVANCE(263);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '@') ADVANCE(255);
      if (lookahead == '|') ADVANCE(135);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(186);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(108);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == '/') ADVANCE(361);
      if (lookahead == '@') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '|') ADVANCE(351);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(323);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(364);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(114);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '.') ADVANCE(190);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(184);
      if (lookahead == '@') ADVANCE(317);
      if (lookahead == '|') ADVANCE(350);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(323);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(364);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(184);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == '|') ADVANCE(137);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(109);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(184);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == '|') ADVANCE(137);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '/') ADVANCE(123);
      if (lookahead == '@') ADVANCE(255);
      if (lookahead == '|') ADVANCE(135);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(186);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(108);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '/') ADVANCE(123);
      if (lookahead == '@') ADVANCE(255);
      if (lookahead == '|') ADVANCE(135);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(108);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '@') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '|') ADVANCE(351);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(323);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(364);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(114);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '/') ADVANCE(362);
      if (lookahead == '|') ADVANCE(355);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(364);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '|') ADVANCE(145);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '|') ADVANCE(145);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(116);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(195);
      if (lookahead == '/') ADVANCE(124);
      if (lookahead == '@') ADVANCE(255);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(138);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(194);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(110);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(195);
      if (lookahead == '/') ADVANCE(124);
      if (lookahead == '@') ADVANCE(255);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(138);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(110);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(197);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '|') ADVANCE(139);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(196);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(197);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '|') ADVANCE(139);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '|') ADVANCE(355);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(364);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '|') ADVANCE(145);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(116);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '|') ADVANCE(145);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(202);
      if (lookahead == '@') ADVANCE(317);
      if (lookahead == '|') ADVANCE(354);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(323);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(364);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(202);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == '|') ADVANCE(152);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(202);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == '|') ADVANCE(152);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == '|') ADVANCE(147);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(204);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == '|') ADVANCE(147);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '@') ADVANCE(255);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(138);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(206);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(110);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '@') ADVANCE(255);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(138);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(110);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(149);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(208);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(112);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(149);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(112);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == '|') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(210);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == '|') ADVANCE(139);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == '|') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(204);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '@') ADVANCE(255);
      if (lookahead == '|') ADVANCE(135);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(213);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(108);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '@') ADVANCE(255);
      if (lookahead == '|') ADVANCE(135);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(108);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == '|') ADVANCE(150);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(216);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == '|') ADVANCE(150);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == '|') ADVANCE(150);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == '|') ADVANCE(150);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(81);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(216);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(149);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(219);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(112);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(149);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(112);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '/') ADVANCE(158);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(151);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(222);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '/') ADVANCE(158);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(151);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(113);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '/') ADVANCE(158);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(151);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(113);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '/') ADVANCE(158);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(151);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(81);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(222);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == '|') ADVANCE(139);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(139);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(227);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == '|') ADVANCE(139);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(227);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == '|') ADVANCE(139);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == '|') ADVANCE(139);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(18);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '+') ADVANCE(273);
      if (lookahead == '-') ADVANCE(273);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == '|') ADVANCE(150);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(216);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == '|') ADVANCE(147);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(231);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == '|') ADVANCE(147);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(151);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(234);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(151);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(113);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(151);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(113);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(151);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(81);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(234);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == '|') ADVANCE(150);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(238);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == '|') ADVANCE(150);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == '|') ADVANCE(150);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == '|') ADVANCE(150);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(81);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(238);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '@') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '|') ADVANCE(357);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(323);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(364);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(153);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(153);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '|') ADVANCE(139);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(139);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(247);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '|') ADVANCE(139);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(245);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '|') ADVANCE(139);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(247);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '|') ADVANCE(139);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '|') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(248);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '|') ADVANCE(139);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '|') ADVANCE(139);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '|') ADVANCE(358);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(364);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(263);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '@') ADVANCE(255);
      if (lookahead == '|') ADVANCE(135);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(186);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(108);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == '|') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(204);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(273);
      if (lookahead == '-') ADVANCE(273);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == '|') ADVANCE(150);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(216);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '|') ADVANCE(139);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(196);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(282);
      if (lookahead == '-') ADVANCE(282);
      if (lookahead == '|') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(210);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(281);
      if (lookahead == '-') ADVANCE(281);
      if (lookahead == '|') ADVANCE(139);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(227);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '|') ADVANCE(357);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(323);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (!aux_sym_symbol_token1_character_set_2(lookahead)) ADVANCE(364);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(323);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(317);
      if (lookahead == '|') ADVANCE(354);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(323);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (!aux_sym_symbol_token1_character_set_2(lookahead)) ADVANCE(364);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(317);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(255);
      if (lookahead == 'i') ADVANCE(284);
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == '|') ADVANCE(138);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(194);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(110);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(255);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(255);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(255);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(288);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == '|') ADVANCE(149);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(208);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(112);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(289);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == '|') ADVANCE(151);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(113);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(222);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(153);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == '|') ADVANCE(152);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == '|') ADVANCE(139);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(196);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == '|') ADVANCE(139);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(227);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == '|') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(210);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(330);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(331);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(139);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(358);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (!aux_sym_symbol_token1_character_set_2(lookahead)) ADVANCE(364);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_number);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(311);
      if (lookahead == '\r') ADVANCE(312);
      if (lookahead == 133 ||
          lookahead == 8232) ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(313);
      if (lookahead == 133) ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == '/') ADVANCE(363);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '|') ADVANCE(356);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(364);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '|') ADVANCE(356);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(364);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '|') ADVANCE(359);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(364);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+') ADVANCE(322);
      if (lookahead == '-') ADVANCE(322);
      if (lookahead == '.') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(325);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'i') ADVANCE(283);
      if (lookahead == 'n') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(326);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(324);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(352);
      if (lookahead == 'i') ADVANCE(339);
      if (lookahead == 'n') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(353);
      if (lookahead == 'i') ADVANCE(285);
      if (lookahead == 'n') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0') ADVANCE(294);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0') ADVANCE(260);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0') ADVANCE(335);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'a') ADVANCE(336);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'a') ADVANCE(337);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'a') ADVANCE(338);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'f') ADVANCE(318);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'f') ADVANCE(320);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'f') ADVANCE(321);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '|') ADVANCE(359);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (!aux_sym_symbol_token1_character_set_2(lookahead)) ADVANCE(364);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'i') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'i') ADVANCE(294);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(318);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(320);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(321);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(332);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_POUND_BQUOTE);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(377);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA);
      if (lookahead == '@') ADVANCE(379);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA_AT);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_POUNDvu8_LPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 163},
  [2] = {.lex_state = 163},
  [3] = {.lex_state = 163},
  [4] = {.lex_state = 163},
  [5] = {.lex_state = 163},
  [6] = {.lex_state = 163},
  [7] = {.lex_state = 163},
  [8] = {.lex_state = 163},
  [9] = {.lex_state = 163},
  [10] = {.lex_state = 163},
  [11] = {.lex_state = 163},
  [12] = {.lex_state = 163},
  [13] = {.lex_state = 163},
  [14] = {.lex_state = 163},
  [15] = {.lex_state = 163},
  [16] = {.lex_state = 163},
  [17] = {.lex_state = 163},
  [18] = {.lex_state = 163},
  [19] = {.lex_state = 163},
  [20] = {.lex_state = 163},
  [21] = {.lex_state = 163},
  [22] = {.lex_state = 163},
  [23] = {.lex_state = 163},
  [24] = {.lex_state = 163},
  [25] = {.lex_state = 163},
  [26] = {.lex_state = 163},
  [27] = {.lex_state = 163},
  [28] = {.lex_state = 163},
  [29] = {.lex_state = 163},
  [30] = {.lex_state = 163},
  [31] = {.lex_state = 163},
  [32] = {.lex_state = 163},
  [33] = {.lex_state = 163},
  [34] = {.lex_state = 163},
  [35] = {.lex_state = 163},
  [36] = {.lex_state = 163},
  [37] = {.lex_state = 163},
  [38] = {.lex_state = 163},
  [39] = {.lex_state = 163},
  [40] = {.lex_state = 163},
  [41] = {.lex_state = 163},
  [42] = {.lex_state = 163},
  [43] = {.lex_state = 163},
  [44] = {.lex_state = 163},
  [45] = {.lex_state = 163},
  [46] = {.lex_state = 163},
  [47] = {.lex_state = 163},
  [48] = {.lex_state = 163},
  [49] = {.lex_state = 163},
  [50] = {.lex_state = 163},
  [51] = {.lex_state = 163},
  [52] = {.lex_state = 163},
  [53] = {.lex_state = 163},
  [54] = {.lex_state = 163},
  [55] = {.lex_state = 163},
  [56] = {.lex_state = 163},
  [57] = {.lex_state = 163},
  [58] = {.lex_state = 163},
  [59] = {.lex_state = 163},
  [60] = {.lex_state = 163},
  [61] = {.lex_state = 163},
  [62] = {.lex_state = 163},
  [63] = {.lex_state = 163},
  [64] = {.lex_state = 163},
  [65] = {.lex_state = 163},
  [66] = {.lex_state = 163},
  [67] = {.lex_state = 163},
  [68] = {.lex_state = 163},
  [69] = {.lex_state = 163},
  [70] = {.lex_state = 163},
  [71] = {.lex_state = 163},
  [72] = {.lex_state = 163},
  [73] = {.lex_state = 163},
  [74] = {.lex_state = 163},
  [75] = {.lex_state = 163},
  [76] = {.lex_state = 163},
  [77] = {.lex_state = 163},
  [78] = {.lex_state = 163},
  [79] = {.lex_state = 163},
  [80] = {.lex_state = 163},
  [81] = {.lex_state = 163},
  [82] = {.lex_state = 163},
  [83] = {.lex_state = 163},
  [84] = {.lex_state = 163},
  [85] = {.lex_state = 163},
  [86] = {.lex_state = 163},
  [87] = {.lex_state = 163},
  [88] = {.lex_state = 163},
  [89] = {.lex_state = 163},
  [90] = {.lex_state = 163},
  [91] = {.lex_state = 163},
  [92] = {.lex_state = 163},
  [93] = {.lex_state = 12},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 12},
  [96] = {.lex_state = 12},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 12},
  [99] = {.lex_state = 12},
  [100] = {.lex_state = 12},
  [101] = {.lex_state = 12},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 12},
  [104] = {.lex_state = 12},
  [105] = {.lex_state = 162},
  [106] = {.lex_state = 12},
  [107] = {.lex_state = 12},
  [108] = {.lex_state = 12},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 12},
  [112] = {.lex_state = 12},
  [113] = {.lex_state = 12},
  [114] = {.lex_state = 12},
  [115] = {.lex_state = 12},
  [116] = {.lex_state = 12},
  [117] = {.lex_state = 12},
  [118] = {.lex_state = 162},
  [119] = {.lex_state = 12},
  [120] = {.lex_state = 12},
  [121] = {.lex_state = 12},
  [122] = {.lex_state = 12},
  [123] = {.lex_state = 12},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 162},
  [126] = {.lex_state = 162},
  [127] = {.lex_state = 162},
  [128] = {.lex_state = 162},
  [129] = {.lex_state = 12},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 162},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 162},
  [139] = {.lex_state = 162},
  [140] = {.lex_state = 0},
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
    [sym_program] = STATE(140),
    [sym__token] = STATE(13),
    [sym__skip] = STATE(13),
    [sym__all_comment] = STATE(13),
    [sym_comment] = STATE(13),
    [sym_directive] = STATE(13),
    [sym_block_comment] = STATE(13),
    [sym__datum] = STATE(13),
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
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__skip_token1] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(5),
    [sym_number] = ACTIONS(15),
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
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
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
    [sym_number] = ACTIONS(64),
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
    [sym__token] = STATE(14),
    [sym__skip] = STATE(14),
    [sym__all_comment] = STATE(14),
    [sym_comment] = STATE(14),
    [sym_directive] = STATE(14),
    [sym_block_comment] = STATE(14),
    [sym__datum] = STATE(14),
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
    [aux_sym__skip_token1] = ACTIONS(112),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(112),
    [sym_number] = ACTIONS(114),
    [sym_character] = ACTIONS(112),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
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
  [4] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
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
    [aux_sym__skip_token1] = ACTIONS(118),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(118),
    [sym_number] = ACTIONS(120),
    [sym_character] = ACTIONS(118),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(122),
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
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
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
    [aux_sym__skip_token1] = ACTIONS(118),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(118),
    [sym_number] = ACTIONS(120),
    [sym_character] = ACTIONS(118),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(122),
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
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
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
    [aux_sym__skip_token1] = ACTIONS(118),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(118),
    [sym_number] = ACTIONS(120),
    [sym_character] = ACTIONS(118),
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
  [7] = {
    [sym__token] = STATE(21),
    [sym__skip] = STATE(21),
    [sym__all_comment] = STATE(21),
    [sym_comment] = STATE(21),
    [sym_directive] = STATE(21),
    [sym_block_comment] = STATE(21),
    [sym__datum] = STATE(21),
    [sym_string] = STATE(21),
    [sym_symbol] = STATE(21),
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
    [aux_sym__skip_token1] = ACTIONS(124),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(124),
    [sym_number] = ACTIONS(126),
    [sym_character] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(128),
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
    [sym__token] = STATE(22),
    [sym__skip] = STATE(22),
    [sym__all_comment] = STATE(22),
    [sym_comment] = STATE(22),
    [sym_directive] = STATE(22),
    [sym_block_comment] = STATE(22),
    [sym__datum] = STATE(22),
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
    [aux_sym__skip_token1] = ACTIONS(130),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(130),
    [sym_number] = ACTIONS(132),
    [sym_character] = ACTIONS(130),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(128),
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
    [sym__token] = STATE(12),
    [sym__skip] = STATE(12),
    [sym__all_comment] = STATE(12),
    [sym_comment] = STATE(12),
    [sym_directive] = STATE(12),
    [sym_block_comment] = STATE(12),
    [sym__datum] = STATE(12),
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
    [aux_sym__skip_token1] = ACTIONS(134),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(134),
    [sym_number] = ACTIONS(136),
    [sym_character] = ACTIONS(134),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(128),
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
    [sym__token] = STATE(16),
    [sym__skip] = STATE(16),
    [sym__all_comment] = STATE(16),
    [sym_comment] = STATE(16),
    [sym_directive] = STATE(16),
    [sym_block_comment] = STATE(16),
    [sym__datum] = STATE(16),
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
    [aux_sym__skip_token1] = ACTIONS(138),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(138),
    [sym_number] = ACTIONS(140),
    [sym_character] = ACTIONS(138),
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
  [11] = {
    [sym__token] = STATE(15),
    [sym__skip] = STATE(15),
    [sym__all_comment] = STATE(15),
    [sym_comment] = STATE(15),
    [sym_directive] = STATE(15),
    [sym_block_comment] = STATE(15),
    [sym__datum] = STATE(15),
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
    [aux_sym__skip_token1] = ACTIONS(144),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(144),
    [sym_number] = ACTIONS(146),
    [sym_character] = ACTIONS(144),
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
  [12] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
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
    [aux_sym__skip_token1] = ACTIONS(118),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(118),
    [sym_number] = ACTIONS(120),
    [sym_character] = ACTIONS(118),
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
  [13] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
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
    [ts_builtin_sym_end] = ACTIONS(152),
    [aux_sym__skip_token1] = ACTIONS(118),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(118),
    [sym_number] = ACTIONS(120),
    [sym_character] = ACTIONS(118),
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
  [14] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
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
    [aux_sym__skip_token1] = ACTIONS(118),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(118),
    [sym_number] = ACTIONS(120),
    [sym_character] = ACTIONS(118),
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
  [15] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
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
    [aux_sym__skip_token1] = ACTIONS(118),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(118),
    [sym_number] = ACTIONS(120),
    [sym_character] = ACTIONS(118),
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
  [16] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
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
    [aux_sym__skip_token1] = ACTIONS(118),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(118),
    [sym_number] = ACTIONS(120),
    [sym_character] = ACTIONS(118),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(158),
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
    [sym__token] = STATE(4),
    [sym__skip] = STATE(4),
    [sym__all_comment] = STATE(4),
    [sym_comment] = STATE(4),
    [sym_directive] = STATE(4),
    [sym_block_comment] = STATE(4),
    [sym__datum] = STATE(4),
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
    [aux_sym__skip_token1] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(160),
    [sym_number] = ACTIONS(162),
    [sym_character] = ACTIONS(160),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(164),
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
    [sym__token] = STATE(5),
    [sym__skip] = STATE(5),
    [sym__all_comment] = STATE(5),
    [sym_comment] = STATE(5),
    [sym_directive] = STATE(5),
    [sym_block_comment] = STATE(5),
    [sym__datum] = STATE(5),
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
    [aux_sym__skip_token1] = ACTIONS(166),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(166),
    [sym_number] = ACTIONS(168),
    [sym_character] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(164),
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
    [sym__token] = STATE(23),
    [sym__skip] = STATE(23),
    [sym__all_comment] = STATE(23),
    [sym_comment] = STATE(23),
    [sym_directive] = STATE(23),
    [sym_block_comment] = STATE(23),
    [sym__datum] = STATE(23),
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
    [aux_sym__skip_token1] = ACTIONS(170),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(170),
    [sym_number] = ACTIONS(172),
    [sym_character] = ACTIONS(170),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(174),
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
    [sym__token] = STATE(6),
    [sym__skip] = STATE(6),
    [sym__all_comment] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_directive] = STATE(6),
    [sym_block_comment] = STATE(6),
    [sym__datum] = STATE(6),
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
    [aux_sym__skip_token1] = ACTIONS(176),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(176),
    [sym_number] = ACTIONS(178),
    [sym_character] = ACTIONS(176),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(164),
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
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
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
    [aux_sym__skip_token1] = ACTIONS(118),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(118),
    [sym_number] = ACTIONS(120),
    [sym_character] = ACTIONS(118),
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
  [22] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
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
    [aux_sym__skip_token1] = ACTIONS(118),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(118),
    [sym_number] = ACTIONS(120),
    [sym_character] = ACTIONS(118),
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
  [23] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
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
    [aux_sym__skip_token1] = ACTIONS(118),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(118),
    [sym_number] = ACTIONS(120),
    [sym_character] = ACTIONS(118),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(180),
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
    [sym__skip] = STATE(79),
    [sym__all_comment] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym__datum] = STATE(122),
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
    [aux_sym_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(184),
    [sym_number] = ACTIONS(186),
    [sym_character] = ACTIONS(184),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [aux_sym_symbol_token1] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(192),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
    [anon_sym_BQUOTE] = ACTIONS(200),
    [anon_sym_POUND_SQUOTE] = ACTIONS(202),
    [anon_sym_POUND_BQUOTE] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(206),
    [anon_sym_COMMA_AT] = ACTIONS(208),
    [anon_sym_POUND_COMMA] = ACTIONS(210),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(212),
    [anon_sym_POUND_LPAREN] = ACTIONS(214),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(216),
  },
  [25] = {
    [sym__skip] = STATE(79),
    [sym__all_comment] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym__datum] = STATE(113),
    [sym_string] = STATE(113),
    [sym_symbol] = STATE(113),
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
    [aux_sym_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(218),
    [sym_number] = ACTIONS(220),
    [sym_character] = ACTIONS(218),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [aux_sym_symbol_token1] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(192),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
    [anon_sym_BQUOTE] = ACTIONS(200),
    [anon_sym_POUND_SQUOTE] = ACTIONS(202),
    [anon_sym_POUND_BQUOTE] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(206),
    [anon_sym_COMMA_AT] = ACTIONS(208),
    [anon_sym_POUND_COMMA] = ACTIONS(210),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(212),
    [anon_sym_POUND_LPAREN] = ACTIONS(214),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(216),
  },
  [26] = {
    [sym__skip] = STATE(42),
    [sym__all_comment] = STATE(42),
    [sym_comment] = STATE(42),
    [sym_block_comment] = STATE(42),
    [sym__datum] = STATE(91),
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
    [aux_sym_comment_repeat1] = STATE(42),
    [aux_sym__skip_token1] = ACTIONS(222),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(224),
    [sym_number] = ACTIONS(226),
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
  [27] = {
    [sym__skip] = STATE(44),
    [sym__all_comment] = STATE(44),
    [sym_comment] = STATE(44),
    [sym_block_comment] = STATE(44),
    [sym__datum] = STATE(92),
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
    [aux_sym_comment_repeat1] = STATE(44),
    [aux_sym__skip_token1] = ACTIONS(228),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(230),
    [sym_number] = ACTIONS(232),
    [sym_character] = ACTIONS(230),
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
    [sym__skip] = STATE(46),
    [sym__all_comment] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_block_comment] = STATE(46),
    [sym__datum] = STATE(90),
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
    [aux_sym_comment_repeat1] = STATE(46),
    [aux_sym__skip_token1] = ACTIONS(234),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(236),
    [sym_number] = ACTIONS(238),
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
  [29] = {
    [sym__skip] = STATE(48),
    [sym__all_comment] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_block_comment] = STATE(48),
    [sym__datum] = STATE(85),
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
    [aux_sym_comment_repeat1] = STATE(48),
    [aux_sym__skip_token1] = ACTIONS(240),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(242),
    [sym_number] = ACTIONS(244),
    [sym_character] = ACTIONS(242),
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
    [sym__skip] = STATE(50),
    [sym__all_comment] = STATE(50),
    [sym_comment] = STATE(50),
    [sym_block_comment] = STATE(50),
    [sym__datum] = STATE(83),
    [sym_string] = STATE(83),
    [sym_symbol] = STATE(83),
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
    [aux_sym_comment_repeat1] = STATE(50),
    [aux_sym__skip_token1] = ACTIONS(246),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(248),
    [sym_number] = ACTIONS(250),
    [sym_character] = ACTIONS(248),
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
    [sym__skip] = STATE(79),
    [sym__all_comment] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym__datum] = STATE(80),
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
    [aux_sym_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(252),
    [sym_number] = ACTIONS(254),
    [sym_character] = ACTIONS(252),
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
    [sym__skip] = STATE(45),
    [sym__all_comment] = STATE(45),
    [sym_comment] = STATE(45),
    [sym_block_comment] = STATE(45),
    [sym__datum] = STATE(124),
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
    [aux_sym_comment_repeat1] = STATE(45),
    [aux_sym__skip_token1] = ACTIONS(256),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(258),
    [sym_number] = ACTIONS(260),
    [sym_character] = ACTIONS(258),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [aux_sym_symbol_token1] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(192),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
    [anon_sym_BQUOTE] = ACTIONS(200),
    [anon_sym_POUND_SQUOTE] = ACTIONS(202),
    [anon_sym_POUND_BQUOTE] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(206),
    [anon_sym_COMMA_AT] = ACTIONS(208),
    [anon_sym_POUND_COMMA] = ACTIONS(210),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(212),
    [anon_sym_POUND_LPAREN] = ACTIONS(214),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(216),
  },
  [33] = {
    [sym__skip] = STATE(79),
    [sym__all_comment] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym__datum] = STATE(107),
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
    [aux_sym_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(262),
    [sym_number] = ACTIONS(264),
    [sym_character] = ACTIONS(262),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [aux_sym_symbol_token1] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(192),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
    [anon_sym_BQUOTE] = ACTIONS(200),
    [anon_sym_POUND_SQUOTE] = ACTIONS(202),
    [anon_sym_POUND_BQUOTE] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(206),
    [anon_sym_COMMA_AT] = ACTIONS(208),
    [anon_sym_POUND_COMMA] = ACTIONS(210),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(212),
    [anon_sym_POUND_LPAREN] = ACTIONS(214),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(216),
  },
  [34] = {
    [sym__skip] = STATE(79),
    [sym__all_comment] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym__datum] = STATE(117),
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
    [aux_sym_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(266),
    [sym_number] = ACTIONS(268),
    [sym_character] = ACTIONS(266),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [aux_sym_symbol_token1] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(192),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
    [anon_sym_BQUOTE] = ACTIONS(200),
    [anon_sym_POUND_SQUOTE] = ACTIONS(202),
    [anon_sym_POUND_BQUOTE] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(206),
    [anon_sym_COMMA_AT] = ACTIONS(208),
    [anon_sym_POUND_COMMA] = ACTIONS(210),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(212),
    [anon_sym_POUND_LPAREN] = ACTIONS(214),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(216),
  },
  [35] = {
    [sym__skip] = STATE(79),
    [sym__all_comment] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym__datum] = STATE(116),
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
    [aux_sym_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(270),
    [sym_number] = ACTIONS(272),
    [sym_character] = ACTIONS(270),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [aux_sym_symbol_token1] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(192),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
    [anon_sym_BQUOTE] = ACTIONS(200),
    [anon_sym_POUND_SQUOTE] = ACTIONS(202),
    [anon_sym_POUND_BQUOTE] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(206),
    [anon_sym_COMMA_AT] = ACTIONS(208),
    [anon_sym_POUND_COMMA] = ACTIONS(210),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(212),
    [anon_sym_POUND_LPAREN] = ACTIONS(214),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(216),
  },
  [36] = {
    [sym__skip] = STATE(79),
    [sym__all_comment] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym__datum] = STATE(64),
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
    [aux_sym_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(274),
    [sym_number] = ACTIONS(276),
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
  [37] = {
    [sym__skip] = STATE(79),
    [sym__all_comment] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym__datum] = STATE(115),
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
    [aux_sym_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(278),
    [sym_number] = ACTIONS(280),
    [sym_character] = ACTIONS(278),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [aux_sym_symbol_token1] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(192),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
    [anon_sym_BQUOTE] = ACTIONS(200),
    [anon_sym_POUND_SQUOTE] = ACTIONS(202),
    [anon_sym_POUND_BQUOTE] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(206),
    [anon_sym_COMMA_AT] = ACTIONS(208),
    [anon_sym_POUND_COMMA] = ACTIONS(210),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(212),
    [anon_sym_POUND_LPAREN] = ACTIONS(214),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(216),
  },
  [38] = {
    [sym__skip] = STATE(79),
    [sym__all_comment] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym__datum] = STATE(65),
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
    [aux_sym_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(282),
    [sym_number] = ACTIONS(284),
    [sym_character] = ACTIONS(282),
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
  [39] = {
    [sym__skip] = STATE(79),
    [sym__all_comment] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym__datum] = STATE(114),
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
    [aux_sym_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(286),
    [sym_number] = ACTIONS(288),
    [sym_character] = ACTIONS(286),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [aux_sym_symbol_token1] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(192),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
    [anon_sym_BQUOTE] = ACTIONS(200),
    [anon_sym_POUND_SQUOTE] = ACTIONS(202),
    [anon_sym_POUND_BQUOTE] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(206),
    [anon_sym_COMMA_AT] = ACTIONS(208),
    [anon_sym_POUND_COMMA] = ACTIONS(210),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(212),
    [anon_sym_POUND_LPAREN] = ACTIONS(214),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(216),
  },
  [40] = {
    [sym__skip] = STATE(79),
    [sym__all_comment] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym__datum] = STATE(66),
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
    [aux_sym_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(290),
    [sym_number] = ACTIONS(292),
    [sym_character] = ACTIONS(290),
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
    [sym__skip] = STATE(40),
    [sym__all_comment] = STATE(40),
    [sym_comment] = STATE(40),
    [sym_block_comment] = STATE(40),
    [sym__datum] = STATE(89),
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
    [aux_sym_comment_repeat1] = STATE(40),
    [aux_sym__skip_token1] = ACTIONS(294),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(296),
    [sym_number] = ACTIONS(298),
    [sym_character] = ACTIONS(296),
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
    [sym__skip] = STATE(79),
    [sym__all_comment] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym__datum] = STATE(67),
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
    [aux_sym_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(300),
    [sym_number] = ACTIONS(302),
    [sym_character] = ACTIONS(300),
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
    [sym__skip] = STATE(79),
    [sym__all_comment] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym__datum] = STATE(112),
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
    [aux_sym_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(304),
    [sym_number] = ACTIONS(306),
    [sym_character] = ACTIONS(304),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [aux_sym_symbol_token1] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(192),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
    [anon_sym_BQUOTE] = ACTIONS(200),
    [anon_sym_POUND_SQUOTE] = ACTIONS(202),
    [anon_sym_POUND_BQUOTE] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(206),
    [anon_sym_COMMA_AT] = ACTIONS(208),
    [anon_sym_POUND_COMMA] = ACTIONS(210),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(212),
    [anon_sym_POUND_LPAREN] = ACTIONS(214),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(216),
  },
  [44] = {
    [sym__skip] = STATE(79),
    [sym__all_comment] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym__datum] = STATE(68),
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
    [aux_sym_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(308),
    [sym_number] = ACTIONS(310),
    [sym_character] = ACTIONS(308),
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
    [sym__skip] = STATE(79),
    [sym__all_comment] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym__datum] = STATE(108),
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
    [aux_sym_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(312),
    [sym_number] = ACTIONS(314),
    [sym_character] = ACTIONS(312),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [aux_sym_symbol_token1] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(192),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
    [anon_sym_BQUOTE] = ACTIONS(200),
    [anon_sym_POUND_SQUOTE] = ACTIONS(202),
    [anon_sym_POUND_BQUOTE] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(206),
    [anon_sym_COMMA_AT] = ACTIONS(208),
    [anon_sym_POUND_COMMA] = ACTIONS(210),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(212),
    [anon_sym_POUND_LPAREN] = ACTIONS(214),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(216),
  },
  [46] = {
    [sym__skip] = STATE(79),
    [sym__all_comment] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym__datum] = STATE(69),
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
    [aux_sym_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(316),
    [sym_number] = ACTIONS(318),
    [sym_character] = ACTIONS(316),
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
    [sym__skip] = STATE(33),
    [sym__all_comment] = STATE(33),
    [sym_comment] = STATE(33),
    [sym_block_comment] = STATE(33),
    [sym__datum] = STATE(104),
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
    [aux_sym_comment_repeat1] = STATE(33),
    [aux_sym__skip_token1] = ACTIONS(320),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(322),
    [sym_number] = ACTIONS(324),
    [sym_character] = ACTIONS(322),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [aux_sym_symbol_token1] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(192),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
    [anon_sym_BQUOTE] = ACTIONS(200),
    [anon_sym_POUND_SQUOTE] = ACTIONS(202),
    [anon_sym_POUND_BQUOTE] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(206),
    [anon_sym_COMMA_AT] = ACTIONS(208),
    [anon_sym_POUND_COMMA] = ACTIONS(210),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(212),
    [anon_sym_POUND_LPAREN] = ACTIONS(214),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(216),
  },
  [48] = {
    [sym__skip] = STATE(79),
    [sym__all_comment] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym__datum] = STATE(60),
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
    [aux_sym_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(326),
    [sym_number] = ACTIONS(328),
    [sym_character] = ACTIONS(326),
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
    [sym__all_comment] = STATE(24),
    [sym_comment] = STATE(24),
    [sym_block_comment] = STATE(24),
    [sym__datum] = STATE(102),
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
    [aux_sym_comment_repeat1] = STATE(24),
    [aux_sym__skip_token1] = ACTIONS(330),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(332),
    [sym_number] = ACTIONS(334),
    [sym_character] = ACTIONS(332),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [aux_sym_symbol_token1] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(192),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
    [anon_sym_BQUOTE] = ACTIONS(200),
    [anon_sym_POUND_SQUOTE] = ACTIONS(202),
    [anon_sym_POUND_BQUOTE] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(206),
    [anon_sym_COMMA_AT] = ACTIONS(208),
    [anon_sym_POUND_COMMA] = ACTIONS(210),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(212),
    [anon_sym_POUND_LPAREN] = ACTIONS(214),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(216),
  },
  [50] = {
    [sym__skip] = STATE(79),
    [sym__all_comment] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym__datum] = STATE(71),
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
    [aux_sym_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(336),
    [sym_number] = ACTIONS(338),
    [sym_character] = ACTIONS(336),
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
    [sym__skip] = STATE(34),
    [sym__all_comment] = STATE(34),
    [sym_comment] = STATE(34),
    [sym_block_comment] = STATE(34),
    [sym__datum] = STATE(100),
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
    [aux_sym_comment_repeat1] = STATE(34),
    [aux_sym__skip_token1] = ACTIONS(340),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(342),
    [sym_number] = ACTIONS(344),
    [sym_character] = ACTIONS(342),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [aux_sym_symbol_token1] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(192),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
    [anon_sym_BQUOTE] = ACTIONS(200),
    [anon_sym_POUND_SQUOTE] = ACTIONS(202),
    [anon_sym_POUND_BQUOTE] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(206),
    [anon_sym_COMMA_AT] = ACTIONS(208),
    [anon_sym_POUND_COMMA] = ACTIONS(210),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(212),
    [anon_sym_POUND_LPAREN] = ACTIONS(214),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(216),
  },
  [52] = {
    [sym__skip] = STATE(31),
    [sym__all_comment] = STATE(31),
    [sym_comment] = STATE(31),
    [sym_block_comment] = STATE(31),
    [sym__datum] = STATE(74),
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
    [aux_sym_comment_repeat1] = STATE(31),
    [aux_sym__skip_token1] = ACTIONS(346),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(348),
    [sym_number] = ACTIONS(350),
    [sym_character] = ACTIONS(348),
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
    [sym__skip] = STATE(35),
    [sym__all_comment] = STATE(35),
    [sym_comment] = STATE(35),
    [sym_block_comment] = STATE(35),
    [sym__datum] = STATE(98),
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
    [aux_sym_comment_repeat1] = STATE(35),
    [aux_sym__skip_token1] = ACTIONS(352),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(354),
    [sym_number] = ACTIONS(356),
    [sym_character] = ACTIONS(354),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [aux_sym_symbol_token1] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(192),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
    [anon_sym_BQUOTE] = ACTIONS(200),
    [anon_sym_POUND_SQUOTE] = ACTIONS(202),
    [anon_sym_POUND_BQUOTE] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(206),
    [anon_sym_COMMA_AT] = ACTIONS(208),
    [anon_sym_POUND_COMMA] = ACTIONS(210),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(212),
    [anon_sym_POUND_LPAREN] = ACTIONS(214),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(216),
  },
  [54] = {
    [sym__skip] = STATE(38),
    [sym__all_comment] = STATE(38),
    [sym_comment] = STATE(38),
    [sym_block_comment] = STATE(38),
    [sym__datum] = STATE(88),
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
    [aux_sym_comment_repeat1] = STATE(38),
    [aux_sym__skip_token1] = ACTIONS(358),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(360),
    [sym_number] = ACTIONS(362),
    [sym_character] = ACTIONS(360),
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
    [sym__skip] = STATE(36),
    [sym__all_comment] = STATE(36),
    [sym_comment] = STATE(36),
    [sym_block_comment] = STATE(36),
    [sym__datum] = STATE(87),
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
    [aux_sym_comment_repeat1] = STATE(36),
    [aux_sym__skip_token1] = ACTIONS(364),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(366),
    [sym_number] = ACTIONS(368),
    [sym_character] = ACTIONS(366),
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
    [sym__skip] = STATE(37),
    [sym__all_comment] = STATE(37),
    [sym_comment] = STATE(37),
    [sym_block_comment] = STATE(37),
    [sym__datum] = STATE(123),
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
    [aux_sym_comment_repeat1] = STATE(37),
    [aux_sym__skip_token1] = ACTIONS(370),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(372),
    [sym_number] = ACTIONS(374),
    [sym_character] = ACTIONS(372),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [aux_sym_symbol_token1] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(192),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
    [anon_sym_BQUOTE] = ACTIONS(200),
    [anon_sym_POUND_SQUOTE] = ACTIONS(202),
    [anon_sym_POUND_BQUOTE] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(206),
    [anon_sym_COMMA_AT] = ACTIONS(208),
    [anon_sym_POUND_COMMA] = ACTIONS(210),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(212),
    [anon_sym_POUND_LPAREN] = ACTIONS(214),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(216),
  },
  [57] = {
    [sym__skip] = STATE(39),
    [sym__all_comment] = STATE(39),
    [sym_comment] = STATE(39),
    [sym_block_comment] = STATE(39),
    [sym__datum] = STATE(106),
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
    [aux_sym_comment_repeat1] = STATE(39),
    [aux_sym__skip_token1] = ACTIONS(376),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(378),
    [sym_number] = ACTIONS(380),
    [sym_character] = ACTIONS(378),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [aux_sym_symbol_token1] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(192),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
    [anon_sym_BQUOTE] = ACTIONS(200),
    [anon_sym_POUND_SQUOTE] = ACTIONS(202),
    [anon_sym_POUND_BQUOTE] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(206),
    [anon_sym_COMMA_AT] = ACTIONS(208),
    [anon_sym_POUND_COMMA] = ACTIONS(210),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(212),
    [anon_sym_POUND_LPAREN] = ACTIONS(214),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(216),
  },
  [58] = {
    [sym__skip] = STATE(25),
    [sym__all_comment] = STATE(25),
    [sym_comment] = STATE(25),
    [sym_block_comment] = STATE(25),
    [sym__datum] = STATE(129),
    [sym_string] = STATE(129),
    [sym_symbol] = STATE(129),
    [sym_list] = STATE(129),
    [sym_quote] = STATE(129),
    [sym_quasiquote] = STATE(129),
    [sym_syntax] = STATE(129),
    [sym_quasisyntax] = STATE(129),
    [sym_unquote] = STATE(129),
    [sym_unquote_splicing] = STATE(129),
    [sym_unsyntax] = STATE(129),
    [sym_unsyntax_splicing] = STATE(129),
    [sym_vector] = STATE(129),
    [sym_byte_vector] = STATE(129),
    [aux_sym_comment_repeat1] = STATE(25),
    [aux_sym__skip_token1] = ACTIONS(382),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(384),
    [sym_number] = ACTIONS(386),
    [sym_character] = ACTIONS(384),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [aux_sym_symbol_token1] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(192),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
    [anon_sym_BQUOTE] = ACTIONS(200),
    [anon_sym_POUND_SQUOTE] = ACTIONS(202),
    [anon_sym_POUND_BQUOTE] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(206),
    [anon_sym_COMMA_AT] = ACTIONS(208),
    [anon_sym_POUND_COMMA] = ACTIONS(210),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(212),
    [anon_sym_POUND_LPAREN] = ACTIONS(214),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(216),
  },
  [59] = {
    [sym__skip] = STATE(43),
    [sym__all_comment] = STATE(43),
    [sym_comment] = STATE(43),
    [sym_block_comment] = STATE(43),
    [sym__datum] = STATE(119),
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
    [aux_sym_comment_repeat1] = STATE(43),
    [aux_sym__skip_token1] = ACTIONS(388),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(390),
    [sym_number] = ACTIONS(392),
    [sym_character] = ACTIONS(390),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [aux_sym_symbol_token1] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(192),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
    [anon_sym_BQUOTE] = ACTIONS(200),
    [anon_sym_POUND_SQUOTE] = ACTIONS(202),
    [anon_sym_POUND_BQUOTE] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(206),
    [anon_sym_COMMA_AT] = ACTIONS(208),
    [anon_sym_POUND_COMMA] = ACTIONS(210),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(212),
    [anon_sym_POUND_LPAREN] = ACTIONS(214),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(216),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(396), 4,
      sym_number,
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
  [32] = 2,
    ACTIONS(400), 4,
      sym_number,
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
  [64] = 2,
    ACTIONS(404), 4,
      sym_number,
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
  [96] = 2,
    ACTIONS(408), 4,
      sym_number,
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
  [128] = 2,
    ACTIONS(412), 4,
      sym_number,
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
  [160] = 2,
    ACTIONS(416), 4,
      sym_number,
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
  [192] = 2,
    ACTIONS(420), 4,
      sym_number,
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
  [224] = 2,
    ACTIONS(424), 4,
      sym_number,
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
  [256] = 2,
    ACTIONS(428), 4,
      sym_number,
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
  [288] = 2,
    ACTIONS(432), 4,
      sym_number,
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
  [320] = 2,
    ACTIONS(436), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(434), 23,
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
    ACTIONS(440), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(438), 23,
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
    ACTIONS(444), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(442), 23,
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
    ACTIONS(448), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(446), 23,
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
    ACTIONS(452), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(450), 23,
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
    ACTIONS(456), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(454), 23,
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
    ACTIONS(460), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(458), 23,
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
    ACTIONS(464), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(462), 23,
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
    ACTIONS(468), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(466), 23,
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
  [608] = 7,
    ACTIONS(470), 1,
      aux_sym__skip_token1,
    ACTIONS(473), 1,
      aux_sym_comment_token1,
    ACTIONS(476), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(479), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(484), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    STATE(79), 5,
      sym__skip,
      sym__all_comment,
      sym_comment,
      sym_block_comment,
      aux_sym_comment_repeat1,
    ACTIONS(482), 14,
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
  [650] = 2,
    ACTIONS(488), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(486), 23,
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
  [682] = 2,
    ACTIONS(492), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(490), 23,
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
  [714] = 2,
    ACTIONS(496), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(494), 23,
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
  [746] = 2,
    ACTIONS(500), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(498), 23,
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
  [778] = 2,
    ACTIONS(504), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(502), 23,
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
  [810] = 2,
    ACTIONS(508), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(506), 23,
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
  [842] = 2,
    ACTIONS(512), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(510), 23,
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
  [874] = 2,
    ACTIONS(516), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(514), 23,
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
  [906] = 2,
    ACTIONS(520), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(518), 23,
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
  [938] = 2,
    ACTIONS(524), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(522), 23,
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
  [970] = 2,
    ACTIONS(528), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(526), 23,
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
  [1002] = 2,
    ACTIONS(532), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(530), 23,
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
  [1034] = 2,
    ACTIONS(536), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(534), 23,
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
  [1066] = 7,
    ACTIONS(538), 1,
      aux_sym__skip_token1,
    ACTIONS(540), 1,
      aux_sym_comment_token1,
    ACTIONS(542), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(544), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(546), 1,
      aux_sym_symbol_token1,
    STATE(75), 1,
      sym_symbol,
    STATE(94), 5,
      sym__skip,
      sym__all_comment,
      sym_comment,
      sym_block_comment,
      aux_sym_comment_repeat1,
  [1092] = 7,
    ACTIONS(540), 1,
      aux_sym_comment_token1,
    ACTIONS(542), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(544), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(546), 1,
      aux_sym_symbol_token1,
    ACTIONS(548), 1,
      aux_sym__skip_token1,
    STATE(78), 1,
      sym_symbol,
    STATE(95), 5,
      sym__skip,
      sym__all_comment,
      sym_comment,
      sym_block_comment,
      aux_sym_comment_repeat1,
  [1118] = 6,
    ACTIONS(482), 1,
      aux_sym_symbol_token1,
    ACTIONS(550), 1,
      aux_sym__skip_token1,
    ACTIONS(553), 1,
      aux_sym_comment_token1,
    ACTIONS(556), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(559), 1,
      anon_sym_POUND_PIPE,
    STATE(95), 5,
      sym__skip,
      sym__all_comment,
      sym_comment,
      sym_block_comment,
      aux_sym_comment_repeat1,
  [1141] = 1,
    ACTIONS(494), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1149] = 1,
    ACTIONS(490), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1157] = 1,
    ACTIONS(534), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1165] = 1,
    ACTIONS(398), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1173] = 1,
    ACTIONS(526), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1181] = 1,
    ACTIONS(502), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1189] = 1,
    ACTIONS(506), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1197] = 1,
    ACTIONS(442), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1205] = 1,
    ACTIONS(498), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1213] = 4,
    ACTIONS(562), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(564), 1,
      aux_sym_block_comment_token1,
    ACTIONS(566), 1,
      anon_sym_PIPE_POUND,
    STATE(128), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1227] = 1,
    ACTIONS(522), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1235] = 1,
    ACTIONS(438), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1243] = 1,
    ACTIONS(486), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1251] = 1,
    ACTIONS(462), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1259] = 1,
    ACTIONS(510), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1267] = 1,
    ACTIONS(406), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1275] = 1,
    ACTIONS(410), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1283] = 1,
    ACTIONS(414), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1291] = 1,
    ACTIONS(418), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1299] = 1,
    ACTIONS(422), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1307] = 1,
    ACTIONS(426), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1315] = 1,
    ACTIONS(430), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1323] = 4,
    ACTIONS(562), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(568), 1,
      aux_sym_block_comment_token1,
    ACTIONS(570), 1,
      anon_sym_PIPE_POUND,
    STATE(105), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1337] = 1,
    ACTIONS(514), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1345] = 1,
    ACTIONS(458), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1353] = 1,
    ACTIONS(446), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1361] = 1,
    ACTIONS(394), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1369] = 1,
    ACTIONS(530), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1377] = 1,
    ACTIONS(450), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1385] = 4,
    ACTIONS(562), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(572), 1,
      aux_sym_block_comment_token1,
    ACTIONS(574), 1,
      anon_sym_PIPE_POUND,
    STATE(132), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1399] = 4,
    ACTIONS(562), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(576), 1,
      aux_sym_block_comment_token1,
    ACTIONS(578), 1,
      anon_sym_PIPE_POUND,
    STATE(127), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1413] = 4,
    ACTIONS(562), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(564), 1,
      aux_sym_block_comment_token1,
    ACTIONS(580), 1,
      anon_sym_PIPE_POUND,
    STATE(128), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1427] = 4,
    ACTIONS(582), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(585), 1,
      aux_sym_block_comment_token1,
    ACTIONS(588), 1,
      anon_sym_PIPE_POUND,
    STATE(128), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1441] = 1,
    ACTIONS(518), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1449] = 1,
    ACTIONS(402), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1457] = 1,
    ACTIONS(434), 5,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1465] = 4,
    ACTIONS(562), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(564), 1,
      aux_sym_block_comment_token1,
    ACTIONS(590), 1,
      anon_sym_PIPE_POUND,
    STATE(128), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1479] = 3,
    ACTIONS(592), 1,
      anon_sym_DQUOTE,
    STATE(134), 1,
      aux_sym_string_repeat1,
    ACTIONS(594), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1490] = 3,
    ACTIONS(596), 1,
      anon_sym_DQUOTE,
    STATE(134), 1,
      aux_sym_string_repeat1,
    ACTIONS(598), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1501] = 3,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    STATE(137), 1,
      aux_sym_string_repeat1,
    ACTIONS(603), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1512] = 3,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      aux_sym_string_repeat1,
    ACTIONS(607), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1523] = 3,
    ACTIONS(609), 1,
      anon_sym_DQUOTE,
    STATE(134), 1,
      aux_sym_string_repeat1,
    ACTIONS(594), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1534] = 2,
    ACTIONS(464), 1,
      aux_sym_block_comment_token1,
    ACTIONS(462), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [1542] = 2,
    ACTIONS(460), 1,
      aux_sym_block_comment_token1,
    ACTIONS(458), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [1550] = 1,
    ACTIONS(611), 1,
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
  [SMALL_STATE(80)] = 650,
  [SMALL_STATE(81)] = 682,
  [SMALL_STATE(82)] = 714,
  [SMALL_STATE(83)] = 746,
  [SMALL_STATE(84)] = 778,
  [SMALL_STATE(85)] = 810,
  [SMALL_STATE(86)] = 842,
  [SMALL_STATE(87)] = 874,
  [SMALL_STATE(88)] = 906,
  [SMALL_STATE(89)] = 938,
  [SMALL_STATE(90)] = 970,
  [SMALL_STATE(91)] = 1002,
  [SMALL_STATE(92)] = 1034,
  [SMALL_STATE(93)] = 1066,
  [SMALL_STATE(94)] = 1092,
  [SMALL_STATE(95)] = 1118,
  [SMALL_STATE(96)] = 1141,
  [SMALL_STATE(97)] = 1149,
  [SMALL_STATE(98)] = 1157,
  [SMALL_STATE(99)] = 1165,
  [SMALL_STATE(100)] = 1173,
  [SMALL_STATE(101)] = 1181,
  [SMALL_STATE(102)] = 1189,
  [SMALL_STATE(103)] = 1197,
  [SMALL_STATE(104)] = 1205,
  [SMALL_STATE(105)] = 1213,
  [SMALL_STATE(106)] = 1227,
  [SMALL_STATE(107)] = 1235,
  [SMALL_STATE(108)] = 1243,
  [SMALL_STATE(109)] = 1251,
  [SMALL_STATE(110)] = 1259,
  [SMALL_STATE(111)] = 1267,
  [SMALL_STATE(112)] = 1275,
  [SMALL_STATE(113)] = 1283,
  [SMALL_STATE(114)] = 1291,
  [SMALL_STATE(115)] = 1299,
  [SMALL_STATE(116)] = 1307,
  [SMALL_STATE(117)] = 1315,
  [SMALL_STATE(118)] = 1323,
  [SMALL_STATE(119)] = 1337,
  [SMALL_STATE(120)] = 1345,
  [SMALL_STATE(121)] = 1353,
  [SMALL_STATE(122)] = 1361,
  [SMALL_STATE(123)] = 1369,
  [SMALL_STATE(124)] = 1377,
  [SMALL_STATE(125)] = 1385,
  [SMALL_STATE(126)] = 1399,
  [SMALL_STATE(127)] = 1413,
  [SMALL_STATE(128)] = 1427,
  [SMALL_STATE(129)] = 1441,
  [SMALL_STATE(130)] = 1449,
  [SMALL_STATE(131)] = 1457,
  [SMALL_STATE(132)] = 1465,
  [SMALL_STATE(133)] = 1479,
  [SMALL_STATE(134)] = 1490,
  [SMALL_STATE(135)] = 1501,
  [SMALL_STATE(136)] = 1512,
  [SMALL_STATE(137)] = 1523,
  [SMALL_STATE(138)] = 1534,
  [SMALL_STATE(139)] = 1542,
  [SMALL_STATE(140)] = 1550,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(70),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(52),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(93),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(126),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(135),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(62),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(55),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(54),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(41),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(27),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(30),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax, 3),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 3),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 3),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syntax, 3),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasisyntax, 3),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasisyntax, 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 3),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splicing, 3),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splicing, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax_splicing, 3),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax_splicing, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_vector, 3),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_vector, 3),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(79),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(70),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(52),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(126),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_vector, 2),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_vector, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax_splicing, 2),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax_splicing, 2),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax, 2),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax, 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 2),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 2),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 2),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syntax, 2),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splicing, 2),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splicing, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasisyntax, 2),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasisyntax, 2),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(95),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(131),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(32),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(125),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(118),
  [585] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(128),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(134),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [611] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
