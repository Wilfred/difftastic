#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 143
#define LARGE_STATE_COUNT 60
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym__token_token1 = 1,
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
  sym__simple_datum = 39,
  sym_string = 40,
  sym_symbol = 41,
  sym__compound_datum = 42,
  sym_list = 43,
  sym_abbreviation = 44,
  sym_quote = 45,
  sym_quasiquote = 46,
  sym_syntax = 47,
  sym_quasisyntax = 48,
  sym_unquote = 49,
  sym_unquote_splicing = 50,
  sym_unsyntax = 51,
  sym_unsyntax_splicing = 52,
  sym__special_form = 53,
  sym_vector = 54,
  sym_byte_vector = 55,
  aux_sym_program_repeat1 = 56,
  aux_sym_comment_repeat1 = 57,
  aux_sym_block_comment_repeat1 = 58,
  aux_sym_string_repeat1 = 59,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__token_token1] = "_token_token1",
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
  [sym__simple_datum] = "_simple_datum",
  [sym_string] = "string",
  [sym_symbol] = "symbol",
  [sym__compound_datum] = "_compound_datum",
  [sym_list] = "list",
  [sym_abbreviation] = "abbreviation",
  [sym_quote] = "quote",
  [sym_quasiquote] = "quasiquote",
  [sym_syntax] = "syntax",
  [sym_quasisyntax] = "quasisyntax",
  [sym_unquote] = "unquote",
  [sym_unquote_splicing] = "unquote_splicing",
  [sym_unsyntax] = "unsyntax",
  [sym_unsyntax_splicing] = "unsyntax_splicing",
  [sym__special_form] = "_special_form",
  [sym_vector] = "vector",
  [sym_byte_vector] = "byte_vector",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__token_token1] = aux_sym__token_token1,
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
  [sym__simple_datum] = sym__simple_datum,
  [sym_string] = sym_string,
  [sym_symbol] = sym_symbol,
  [sym__compound_datum] = sym__compound_datum,
  [sym_list] = sym_list,
  [sym_abbreviation] = sym_abbreviation,
  [sym_quote] = sym_quote,
  [sym_quasiquote] = sym_quasiquote,
  [sym_syntax] = sym_syntax,
  [sym_quasisyntax] = sym_quasisyntax,
  [sym_unquote] = sym_unquote,
  [sym_unquote_splicing] = sym_unquote_splicing,
  [sym_unsyntax] = sym_unsyntax,
  [sym_unsyntax_splicing] = sym_unsyntax_splicing,
  [sym__special_form] = sym__special_form,
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
  [aux_sym__token_token1] = {
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
  [sym__simple_datum] = {
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
  [sym__compound_datum] = {
    .visible = false,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_abbreviation] = {
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
  [10] = 3,
  [11] = 11,
  [12] = 12,
  [13] = 9,
  [14] = 8,
  [15] = 15,
  [16] = 12,
  [17] = 15,
  [18] = 6,
  [19] = 11,
  [20] = 7,
  [21] = 5,
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
  [35] = 28,
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
  [49] = 27,
  [50] = 37,
  [51] = 51,
  [52] = 36,
  [53] = 51,
  [54] = 24,
  [55] = 26,
  [56] = 29,
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
  [96] = 65,
  [97] = 76,
  [98] = 84,
  [99] = 61,
  [100] = 92,
  [101] = 85,
  [102] = 87,
  [103] = 78,
  [104] = 88,
  [105] = 105,
  [106] = 60,
  [107] = 82,
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
  [118] = 90,
  [119] = 119,
  [120] = 93,
  [121] = 70,
  [122] = 80,
  [123] = 81,
  [124] = 77,
  [125] = 125,
  [126] = 68,
  [127] = 119,
  [128] = 89,
  [129] = 105,
  [130] = 119,
  [131] = 91,
  [132] = 79,
  [133] = 86,
  [134] = 105,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 137,
  [139] = 135,
  [140] = 67,
  [141] = 84,
  [142] = 142,
};

static inline bool aux_sym__token_token1_character_set_1(int32_t c) {
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
      if (aux_sym__token_token1_character_set_1(lookahead)) ADVANCE(165);
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
      if (aux_sym__token_token1_character_set_1(lookahead)) ADVANCE(165);
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
      if (aux_sym__token_token1_character_set_1(lookahead)) ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(364);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__token_token1);
      if (aux_sym__token_token1_character_set_1(lookahead)) ADVANCE(165);
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
  [93] = {.lex_state = 163},
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
  [118] = {.lex_state = 12},
  [119] = {.lex_state = 162},
  [120] = {.lex_state = 12},
  [121] = {.lex_state = 12},
  [122] = {.lex_state = 12},
  [123] = {.lex_state = 12},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 162},
  [126] = {.lex_state = 12},
  [127] = {.lex_state = 162},
  [128] = {.lex_state = 12},
  [129] = {.lex_state = 162},
  [130] = {.lex_state = 162},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 12},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 162},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 162},
  [141] = {.lex_state = 162},
  [142] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__token_token1] = ACTIONS(1),
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
    [sym__all_comment] = STATE(23),
    [sym_comment] = STATE(23),
    [sym_directive] = STATE(23),
    [sym_block_comment] = STATE(23),
    [sym__datum] = STATE(23),
    [sym__simple_datum] = STATE(23),
    [sym_string] = STATE(23),
    [sym_symbol] = STATE(23),
    [sym__compound_datum] = STATE(23),
    [sym_list] = STATE(23),
    [sym_abbreviation] = STATE(23),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(23),
    [sym_vector] = STATE(23),
    [sym_byte_vector] = STATE(23),
    [aux_sym_program_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__token_token1] = ACTIONS(5),
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
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym__simple_datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__compound_datum] = STATE(2),
    [sym_list] = STATE(2),
    [sym_abbreviation] = STATE(2),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(47),
    [aux_sym__token_token1] = ACTIONS(49),
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
    [sym__token] = STATE(4),
    [sym__all_comment] = STATE(4),
    [sym_comment] = STATE(4),
    [sym_directive] = STATE(4),
    [sym_block_comment] = STATE(4),
    [sym__datum] = STATE(4),
    [sym__simple_datum] = STATE(4),
    [sym_string] = STATE(4),
    [sym_symbol] = STATE(4),
    [sym__compound_datum] = STATE(4),
    [sym_list] = STATE(4),
    [sym_abbreviation] = STATE(4),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(4),
    [sym_vector] = STATE(4),
    [sym_byte_vector] = STATE(4),
    [aux_sym_program_repeat1] = STATE(4),
    [aux_sym__token_token1] = ACTIONS(112),
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
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(116),
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
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym__simple_datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__compound_datum] = STATE(2),
    [sym_list] = STATE(2),
    [sym_abbreviation] = STATE(2),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(118),
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
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym__simple_datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__compound_datum] = STATE(2),
    [sym_list] = STATE(2),
    [sym_abbreviation] = STATE(2),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(118),
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
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym__simple_datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__compound_datum] = STATE(2),
    [sym_list] = STATE(2),
    [sym_abbreviation] = STATE(2),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(118),
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
    [sym__token] = STATE(12),
    [sym__all_comment] = STATE(12),
    [sym_comment] = STATE(12),
    [sym_directive] = STATE(12),
    [sym_block_comment] = STATE(12),
    [sym__datum] = STATE(12),
    [sym__simple_datum] = STATE(12),
    [sym_string] = STATE(12),
    [sym_symbol] = STATE(12),
    [sym__compound_datum] = STATE(12),
    [sym_list] = STATE(12),
    [sym_abbreviation] = STATE(12),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(12),
    [sym_vector] = STATE(12),
    [sym_byte_vector] = STATE(12),
    [aux_sym_program_repeat1] = STATE(12),
    [aux_sym__token_token1] = ACTIONS(124),
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
    [sym__token] = STATE(18),
    [sym__all_comment] = STATE(18),
    [sym_comment] = STATE(18),
    [sym_directive] = STATE(18),
    [sym_block_comment] = STATE(18),
    [sym__datum] = STATE(18),
    [sym__simple_datum] = STATE(18),
    [sym_string] = STATE(18),
    [sym_symbol] = STATE(18),
    [sym__compound_datum] = STATE(18),
    [sym_list] = STATE(18),
    [sym_abbreviation] = STATE(18),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(18),
    [sym_vector] = STATE(18),
    [sym_byte_vector] = STATE(18),
    [aux_sym_program_repeat1] = STATE(18),
    [aux_sym__token_token1] = ACTIONS(130),
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
  [9] = {
    [sym__token] = STATE(21),
    [sym__all_comment] = STATE(21),
    [sym_comment] = STATE(21),
    [sym_directive] = STATE(21),
    [sym_block_comment] = STATE(21),
    [sym__datum] = STATE(21),
    [sym__simple_datum] = STATE(21),
    [sym_string] = STATE(21),
    [sym_symbol] = STATE(21),
    [sym__compound_datum] = STATE(21),
    [sym_list] = STATE(21),
    [sym_abbreviation] = STATE(21),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(21),
    [sym_vector] = STATE(21),
    [sym_byte_vector] = STATE(21),
    [aux_sym_program_repeat1] = STATE(21),
    [aux_sym__token_token1] = ACTIONS(136),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(136),
    [sym_number] = ACTIONS(138),
    [sym_character] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
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
  [10] = {
    [sym__token] = STATE(22),
    [sym__all_comment] = STATE(22),
    [sym_comment] = STATE(22),
    [sym_directive] = STATE(22),
    [sym_block_comment] = STATE(22),
    [sym__datum] = STATE(22),
    [sym__simple_datum] = STATE(22),
    [sym_string] = STATE(22),
    [sym_symbol] = STATE(22),
    [sym__compound_datum] = STATE(22),
    [sym_list] = STATE(22),
    [sym_abbreviation] = STATE(22),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(22),
    [sym_vector] = STATE(22),
    [sym_byte_vector] = STATE(22),
    [aux_sym_program_repeat1] = STATE(22),
    [aux_sym__token_token1] = ACTIONS(140),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(140),
    [sym_number] = ACTIONS(142),
    [sym_character] = ACTIONS(140),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
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
  [11] = {
    [sym__token] = STATE(15),
    [sym__all_comment] = STATE(15),
    [sym_comment] = STATE(15),
    [sym_directive] = STATE(15),
    [sym_block_comment] = STATE(15),
    [sym__datum] = STATE(15),
    [sym__simple_datum] = STATE(15),
    [sym_string] = STATE(15),
    [sym_symbol] = STATE(15),
    [sym__compound_datum] = STATE(15),
    [sym_list] = STATE(15),
    [sym_abbreviation] = STATE(15),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_byte_vector] = STATE(15),
    [aux_sym_program_repeat1] = STATE(15),
    [aux_sym__token_token1] = ACTIONS(144),
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
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym__simple_datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__compound_datum] = STATE(2),
    [sym_list] = STATE(2),
    [sym_abbreviation] = STATE(2),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(118),
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
  [13] = {
    [sym__token] = STATE(5),
    [sym__all_comment] = STATE(5),
    [sym_comment] = STATE(5),
    [sym_directive] = STATE(5),
    [sym_block_comment] = STATE(5),
    [sym__datum] = STATE(5),
    [sym__simple_datum] = STATE(5),
    [sym_string] = STATE(5),
    [sym_symbol] = STATE(5),
    [sym__compound_datum] = STATE(5),
    [sym_list] = STATE(5),
    [sym_abbreviation] = STATE(5),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(5),
    [sym_vector] = STATE(5),
    [sym_byte_vector] = STATE(5),
    [aux_sym_program_repeat1] = STATE(5),
    [aux_sym__token_token1] = ACTIONS(152),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(152),
    [sym_number] = ACTIONS(154),
    [sym_character] = ACTIONS(152),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(116),
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
    [sym__all_comment] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_directive] = STATE(6),
    [sym_block_comment] = STATE(6),
    [sym__datum] = STATE(6),
    [sym__simple_datum] = STATE(6),
    [sym_string] = STATE(6),
    [sym_symbol] = STATE(6),
    [sym__compound_datum] = STATE(6),
    [sym_list] = STATE(6),
    [sym_abbreviation] = STATE(6),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(6),
    [sym_vector] = STATE(6),
    [sym_byte_vector] = STATE(6),
    [aux_sym_program_repeat1] = STATE(6),
    [aux_sym__token_token1] = ACTIONS(156),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(156),
    [sym_number] = ACTIONS(158),
    [sym_character] = ACTIONS(156),
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
  [15] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym__simple_datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__compound_datum] = STATE(2),
    [sym_list] = STATE(2),
    [sym_abbreviation] = STATE(2),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(118),
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
    [anon_sym_RPAREN] = ACTIONS(160),
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
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym__simple_datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__compound_datum] = STATE(2),
    [sym_list] = STATE(2),
    [sym_abbreviation] = STATE(2),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(118),
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
    [anon_sym_RPAREN] = ACTIONS(162),
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
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym__simple_datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__compound_datum] = STATE(2),
    [sym_list] = STATE(2),
    [sym_abbreviation] = STATE(2),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(118),
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
  [18] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym__simple_datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__compound_datum] = STATE(2),
    [sym_list] = STATE(2),
    [sym_abbreviation] = STATE(2),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(118),
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
    [anon_sym_RPAREN] = ACTIONS(166),
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
    [sym__token] = STATE(17),
    [sym__all_comment] = STATE(17),
    [sym_comment] = STATE(17),
    [sym_directive] = STATE(17),
    [sym_block_comment] = STATE(17),
    [sym__datum] = STATE(17),
    [sym__simple_datum] = STATE(17),
    [sym_string] = STATE(17),
    [sym_symbol] = STATE(17),
    [sym__compound_datum] = STATE(17),
    [sym_list] = STATE(17),
    [sym_abbreviation] = STATE(17),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(17),
    [sym_vector] = STATE(17),
    [sym_byte_vector] = STATE(17),
    [aux_sym_program_repeat1] = STATE(17),
    [aux_sym__token_token1] = ACTIONS(168),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(168),
    [sym_number] = ACTIONS(170),
    [sym_character] = ACTIONS(168),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(172),
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
    [sym__token] = STATE(16),
    [sym__all_comment] = STATE(16),
    [sym_comment] = STATE(16),
    [sym_directive] = STATE(16),
    [sym_block_comment] = STATE(16),
    [sym__datum] = STATE(16),
    [sym__simple_datum] = STATE(16),
    [sym_string] = STATE(16),
    [sym_symbol] = STATE(16),
    [sym__compound_datum] = STATE(16),
    [sym_list] = STATE(16),
    [sym_abbreviation] = STATE(16),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(16),
    [sym_vector] = STATE(16),
    [sym_byte_vector] = STATE(16),
    [aux_sym_program_repeat1] = STATE(16),
    [aux_sym__token_token1] = ACTIONS(174),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(174),
    [sym_number] = ACTIONS(176),
    [sym_character] = ACTIONS(174),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(178),
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
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym__simple_datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__compound_datum] = STATE(2),
    [sym_list] = STATE(2),
    [sym_abbreviation] = STATE(2),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(118),
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
    [anon_sym_RBRACK] = ACTIONS(166),
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
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym__simple_datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__compound_datum] = STATE(2),
    [sym_list] = STATE(2),
    [sym_abbreviation] = STATE(2),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(118),
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
    [anon_sym_RBRACE] = ACTIONS(166),
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
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym__simple_datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__compound_datum] = STATE(2),
    [sym_list] = STATE(2),
    [sym_abbreviation] = STATE(2),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(180),
    [aux_sym__token_token1] = ACTIONS(118),
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
  [24] = {
    [sym__skip] = STATE(65),
    [sym__all_comment] = STATE(65),
    [sym_comment] = STATE(65),
    [sym_block_comment] = STATE(65),
    [sym__datum] = STATE(132),
    [sym__simple_datum] = STATE(132),
    [sym_string] = STATE(132),
    [sym_symbol] = STATE(132),
    [sym__compound_datum] = STATE(132),
    [sym_list] = STATE(132),
    [sym_abbreviation] = STATE(132),
    [sym_quote] = STATE(126),
    [sym_quasiquote] = STATE(126),
    [sym_syntax] = STATE(126),
    [sym_quasisyntax] = STATE(126),
    [sym_unquote] = STATE(126),
    [sym_unquote_splicing] = STATE(126),
    [sym_unsyntax] = STATE(126),
    [sym_unsyntax_splicing] = STATE(126),
    [sym__special_form] = STATE(132),
    [sym_vector] = STATE(132),
    [sym_byte_vector] = STATE(132),
    [aux_sym_comment_repeat1] = STATE(65),
    [aux_sym__token_token1] = ACTIONS(182),
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
    [sym__skip] = STATE(38),
    [sym__all_comment] = STATE(38),
    [sym_comment] = STATE(38),
    [sym_block_comment] = STATE(38),
    [sym__datum] = STATE(100),
    [sym__simple_datum] = STATE(100),
    [sym_string] = STATE(100),
    [sym_symbol] = STATE(100),
    [sym__compound_datum] = STATE(100),
    [sym_list] = STATE(100),
    [sym_abbreviation] = STATE(100),
    [sym_quote] = STATE(126),
    [sym_quasiquote] = STATE(126),
    [sym_syntax] = STATE(126),
    [sym_quasisyntax] = STATE(126),
    [sym_unquote] = STATE(126),
    [sym_unquote_splicing] = STATE(126),
    [sym_unsyntax] = STATE(126),
    [sym_unsyntax_splicing] = STATE(126),
    [sym__special_form] = STATE(100),
    [sym_vector] = STATE(100),
    [sym_byte_vector] = STATE(100),
    [aux_sym_comment_repeat1] = STATE(38),
    [aux_sym__token_token1] = ACTIONS(218),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(220),
    [sym_number] = ACTIONS(222),
    [sym_character] = ACTIONS(220),
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
    [sym__skip] = STATE(52),
    [sym__all_comment] = STATE(52),
    [sym_comment] = STATE(52),
    [sym_block_comment] = STATE(52),
    [sym__datum] = STATE(88),
    [sym__simple_datum] = STATE(88),
    [sym_string] = STATE(88),
    [sym_symbol] = STATE(88),
    [sym__compound_datum] = STATE(88),
    [sym_list] = STATE(88),
    [sym_abbreviation] = STATE(88),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(88),
    [sym_vector] = STATE(88),
    [sym_byte_vector] = STATE(88),
    [aux_sym_comment_repeat1] = STATE(52),
    [aux_sym__token_token1] = ACTIONS(224),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(226),
    [sym_number] = ACTIONS(228),
    [sym_character] = ACTIONS(226),
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
    [sym__skip] = STATE(54),
    [sym__all_comment] = STATE(54),
    [sym_comment] = STATE(54),
    [sym_block_comment] = STATE(54),
    [sym__datum] = STATE(60),
    [sym__simple_datum] = STATE(60),
    [sym_string] = STATE(60),
    [sym_symbol] = STATE(60),
    [sym__compound_datum] = STATE(60),
    [sym_list] = STATE(60),
    [sym_abbreviation] = STATE(60),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(60),
    [sym_vector] = STATE(60),
    [sym_byte_vector] = STATE(60),
    [aux_sym_comment_repeat1] = STATE(54),
    [aux_sym__token_token1] = ACTIONS(230),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(232),
    [sym_number] = ACTIONS(234),
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
  [28] = {
    [sym__skip] = STATE(31),
    [sym__all_comment] = STATE(31),
    [sym_comment] = STATE(31),
    [sym_block_comment] = STATE(31),
    [sym__datum] = STATE(82),
    [sym__simple_datum] = STATE(82),
    [sym_string] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym__compound_datum] = STATE(82),
    [sym_list] = STATE(82),
    [sym_abbreviation] = STATE(82),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(82),
    [sym_vector] = STATE(82),
    [sym_byte_vector] = STATE(82),
    [aux_sym_comment_repeat1] = STATE(31),
    [aux_sym__token_token1] = ACTIONS(236),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(238),
    [sym_number] = ACTIONS(240),
    [sym_character] = ACTIONS(238),
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
    [sym__skip] = STATE(40),
    [sym__all_comment] = STATE(40),
    [sym_comment] = STATE(40),
    [sym_block_comment] = STATE(40),
    [sym__datum] = STATE(89),
    [sym__simple_datum] = STATE(89),
    [sym_string] = STATE(89),
    [sym_symbol] = STATE(89),
    [sym__compound_datum] = STATE(89),
    [sym_list] = STATE(89),
    [sym_abbreviation] = STATE(89),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(89),
    [sym_vector] = STATE(89),
    [sym_byte_vector] = STATE(89),
    [aux_sym_comment_repeat1] = STATE(40),
    [aux_sym__token_token1] = ACTIONS(242),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(244),
    [sym_number] = ACTIONS(246),
    [sym_character] = ACTIONS(244),
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
    [sym__skip] = STATE(42),
    [sym__all_comment] = STATE(42),
    [sym_comment] = STATE(42),
    [sym_block_comment] = STATE(42),
    [sym__datum] = STATE(90),
    [sym__simple_datum] = STATE(90),
    [sym_string] = STATE(90),
    [sym_symbol] = STATE(90),
    [sym__compound_datum] = STATE(90),
    [sym_list] = STATE(90),
    [sym_abbreviation] = STATE(90),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(90),
    [sym_vector] = STATE(90),
    [sym_byte_vector] = STATE(90),
    [aux_sym_comment_repeat1] = STATE(42),
    [aux_sym__token_token1] = ACTIONS(248),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(250),
    [sym_number] = ACTIONS(252),
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
  [31] = {
    [sym__skip] = STATE(65),
    [sym__all_comment] = STATE(65),
    [sym_comment] = STATE(65),
    [sym_block_comment] = STATE(65),
    [sym__datum] = STATE(64),
    [sym__simple_datum] = STATE(64),
    [sym_string] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym__compound_datum] = STATE(64),
    [sym_list] = STATE(64),
    [sym_abbreviation] = STATE(64),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(64),
    [sym_vector] = STATE(64),
    [sym_byte_vector] = STATE(64),
    [aux_sym_comment_repeat1] = STATE(65),
    [aux_sym__token_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(254),
    [sym_number] = ACTIONS(256),
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
  [32] = {
    [sym__skip] = STATE(44),
    [sym__all_comment] = STATE(44),
    [sym_comment] = STATE(44),
    [sym_block_comment] = STATE(44),
    [sym__datum] = STATE(91),
    [sym__simple_datum] = STATE(91),
    [sym_string] = STATE(91),
    [sym_symbol] = STATE(91),
    [sym__compound_datum] = STATE(91),
    [sym_list] = STATE(91),
    [sym_abbreviation] = STATE(91),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(91),
    [sym_vector] = STATE(91),
    [sym_byte_vector] = STATE(91),
    [aux_sym_comment_repeat1] = STATE(44),
    [aux_sym__token_token1] = ACTIONS(258),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(260),
    [sym_number] = ACTIONS(262),
    [sym_character] = ACTIONS(260),
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
    [sym__skip] = STATE(46),
    [sym__all_comment] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_block_comment] = STATE(46),
    [sym__datum] = STATE(93),
    [sym__simple_datum] = STATE(93),
    [sym_string] = STATE(93),
    [sym_symbol] = STATE(93),
    [sym__compound_datum] = STATE(93),
    [sym_list] = STATE(93),
    [sym_abbreviation] = STATE(93),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [aux_sym_comment_repeat1] = STATE(46),
    [aux_sym__token_token1] = ACTIONS(264),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(266),
    [sym_number] = ACTIONS(268),
    [sym_character] = ACTIONS(266),
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
    [sym__skip] = STATE(48),
    [sym__all_comment] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_block_comment] = STATE(48),
    [sym__datum] = STATE(92),
    [sym__simple_datum] = STATE(92),
    [sym_string] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym__compound_datum] = STATE(92),
    [sym_list] = STATE(92),
    [sym_abbreviation] = STATE(92),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(92),
    [sym_vector] = STATE(92),
    [sym_byte_vector] = STATE(92),
    [aux_sym_comment_repeat1] = STATE(48),
    [aux_sym__token_token1] = ACTIONS(270),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(272),
    [sym_number] = ACTIONS(274),
    [sym_character] = ACTIONS(272),
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
    [sym__all_comment] = STATE(47),
    [sym_comment] = STATE(47),
    [sym_block_comment] = STATE(47),
    [sym__datum] = STATE(107),
    [sym__simple_datum] = STATE(107),
    [sym_string] = STATE(107),
    [sym_symbol] = STATE(107),
    [sym__compound_datum] = STATE(107),
    [sym_list] = STATE(107),
    [sym_abbreviation] = STATE(107),
    [sym_quote] = STATE(126),
    [sym_quasiquote] = STATE(126),
    [sym_syntax] = STATE(126),
    [sym_quasisyntax] = STATE(126),
    [sym_unquote] = STATE(126),
    [sym_unquote_splicing] = STATE(126),
    [sym_unsyntax] = STATE(126),
    [sym_unsyntax_splicing] = STATE(126),
    [sym__special_form] = STATE(107),
    [sym_vector] = STATE(107),
    [sym_byte_vector] = STATE(107),
    [aux_sym_comment_repeat1] = STATE(47),
    [aux_sym__token_token1] = ACTIONS(276),
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
  [36] = {
    [sym__skip] = STATE(65),
    [sym__all_comment] = STATE(65),
    [sym_comment] = STATE(65),
    [sym_block_comment] = STATE(65),
    [sym__datum] = STATE(103),
    [sym__simple_datum] = STATE(103),
    [sym_string] = STATE(103),
    [sym_symbol] = STATE(103),
    [sym__compound_datum] = STATE(103),
    [sym_list] = STATE(103),
    [sym_abbreviation] = STATE(103),
    [sym_quote] = STATE(126),
    [sym_quasiquote] = STATE(126),
    [sym_syntax] = STATE(126),
    [sym_quasisyntax] = STATE(126),
    [sym_unquote] = STATE(126),
    [sym_unquote_splicing] = STATE(126),
    [sym_unsyntax] = STATE(126),
    [sym_unsyntax_splicing] = STATE(126),
    [sym__special_form] = STATE(103),
    [sym_vector] = STATE(103),
    [sym_byte_vector] = STATE(103),
    [aux_sym_comment_repeat1] = STATE(65),
    [aux_sym__token_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(282),
    [sym_number] = ACTIONS(284),
    [sym_character] = ACTIONS(282),
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
  [37] = {
    [sym__skip] = STATE(65),
    [sym__all_comment] = STATE(65),
    [sym_comment] = STATE(65),
    [sym_block_comment] = STATE(65),
    [sym__datum] = STATE(124),
    [sym__simple_datum] = STATE(124),
    [sym_string] = STATE(124),
    [sym_symbol] = STATE(124),
    [sym__compound_datum] = STATE(124),
    [sym_list] = STATE(124),
    [sym_abbreviation] = STATE(124),
    [sym_quote] = STATE(126),
    [sym_quasiquote] = STATE(126),
    [sym_syntax] = STATE(126),
    [sym_quasisyntax] = STATE(126),
    [sym_unquote] = STATE(126),
    [sym_unquote_splicing] = STATE(126),
    [sym_unsyntax] = STATE(126),
    [sym_unsyntax_splicing] = STATE(126),
    [sym__special_form] = STATE(124),
    [sym_vector] = STATE(124),
    [sym_byte_vector] = STATE(124),
    [aux_sym_comment_repeat1] = STATE(65),
    [aux_sym__token_token1] = ACTIONS(182),
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
  [38] = {
    [sym__skip] = STATE(65),
    [sym__all_comment] = STATE(65),
    [sym_comment] = STATE(65),
    [sym_block_comment] = STATE(65),
    [sym__datum] = STATE(97),
    [sym__simple_datum] = STATE(97),
    [sym_string] = STATE(97),
    [sym_symbol] = STATE(97),
    [sym__compound_datum] = STATE(97),
    [sym_list] = STATE(97),
    [sym_abbreviation] = STATE(97),
    [sym_quote] = STATE(126),
    [sym_quasiquote] = STATE(126),
    [sym_syntax] = STATE(126),
    [sym_quasisyntax] = STATE(126),
    [sym_unquote] = STATE(126),
    [sym_unquote_splicing] = STATE(126),
    [sym_unsyntax] = STATE(126),
    [sym_unsyntax_splicing] = STATE(126),
    [sym__special_form] = STATE(97),
    [sym_vector] = STATE(97),
    [sym_byte_vector] = STATE(97),
    [aux_sym_comment_repeat1] = STATE(65),
    [aux_sym__token_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(290),
    [sym_number] = ACTIONS(292),
    [sym_character] = ACTIONS(290),
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
  [39] = {
    [sym__skip] = STATE(65),
    [sym__all_comment] = STATE(65),
    [sym_comment] = STATE(65),
    [sym_block_comment] = STATE(65),
    [sym__datum] = STATE(117),
    [sym__simple_datum] = STATE(117),
    [sym_string] = STATE(117),
    [sym_symbol] = STATE(117),
    [sym__compound_datum] = STATE(117),
    [sym_list] = STATE(117),
    [sym_abbreviation] = STATE(117),
    [sym_quote] = STATE(126),
    [sym_quasiquote] = STATE(126),
    [sym_syntax] = STATE(126),
    [sym_quasisyntax] = STATE(126),
    [sym_unquote] = STATE(126),
    [sym_unquote_splicing] = STATE(126),
    [sym_unsyntax] = STATE(126),
    [sym_unsyntax_splicing] = STATE(126),
    [sym__special_form] = STATE(117),
    [sym_vector] = STATE(117),
    [sym_byte_vector] = STATE(117),
    [aux_sym_comment_repeat1] = STATE(65),
    [aux_sym__token_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(294),
    [sym_number] = ACTIONS(296),
    [sym_character] = ACTIONS(294),
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
    [sym__skip] = STATE(65),
    [sym__all_comment] = STATE(65),
    [sym_comment] = STATE(65),
    [sym_block_comment] = STATE(65),
    [sym__datum] = STATE(72),
    [sym__simple_datum] = STATE(72),
    [sym_string] = STATE(72),
    [sym_symbol] = STATE(72),
    [sym__compound_datum] = STATE(72),
    [sym_list] = STATE(72),
    [sym_abbreviation] = STATE(72),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(72),
    [sym_vector] = STATE(72),
    [sym_byte_vector] = STATE(72),
    [aux_sym_comment_repeat1] = STATE(65),
    [aux_sym__token_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(298),
    [sym_number] = ACTIONS(300),
    [sym_character] = ACTIONS(298),
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
    [sym__skip] = STATE(65),
    [sym__all_comment] = STATE(65),
    [sym_comment] = STATE(65),
    [sym_block_comment] = STATE(65),
    [sym__datum] = STATE(116),
    [sym__simple_datum] = STATE(116),
    [sym_string] = STATE(116),
    [sym_symbol] = STATE(116),
    [sym__compound_datum] = STATE(116),
    [sym_list] = STATE(116),
    [sym_abbreviation] = STATE(116),
    [sym_quote] = STATE(126),
    [sym_quasiquote] = STATE(126),
    [sym_syntax] = STATE(126),
    [sym_quasisyntax] = STATE(126),
    [sym_unquote] = STATE(126),
    [sym_unquote_splicing] = STATE(126),
    [sym_unsyntax] = STATE(126),
    [sym_unsyntax_splicing] = STATE(126),
    [sym__special_form] = STATE(116),
    [sym_vector] = STATE(116),
    [sym_byte_vector] = STATE(116),
    [aux_sym_comment_repeat1] = STATE(65),
    [aux_sym__token_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(302),
    [sym_number] = ACTIONS(304),
    [sym_character] = ACTIONS(302),
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
  [42] = {
    [sym__skip] = STATE(65),
    [sym__all_comment] = STATE(65),
    [sym_comment] = STATE(65),
    [sym_block_comment] = STATE(65),
    [sym__datum] = STATE(73),
    [sym__simple_datum] = STATE(73),
    [sym_string] = STATE(73),
    [sym_symbol] = STATE(73),
    [sym__compound_datum] = STATE(73),
    [sym_list] = STATE(73),
    [sym_abbreviation] = STATE(73),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(73),
    [sym_vector] = STATE(73),
    [sym_byte_vector] = STATE(73),
    [aux_sym_comment_repeat1] = STATE(65),
    [aux_sym__token_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(306),
    [sym_number] = ACTIONS(308),
    [sym_character] = ACTIONS(306),
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
    [sym__skip] = STATE(65),
    [sym__all_comment] = STATE(65),
    [sym_comment] = STATE(65),
    [sym_block_comment] = STATE(65),
    [sym__datum] = STATE(115),
    [sym__simple_datum] = STATE(115),
    [sym_string] = STATE(115),
    [sym_symbol] = STATE(115),
    [sym__compound_datum] = STATE(115),
    [sym_list] = STATE(115),
    [sym_abbreviation] = STATE(115),
    [sym_quote] = STATE(126),
    [sym_quasiquote] = STATE(126),
    [sym_syntax] = STATE(126),
    [sym_quasisyntax] = STATE(126),
    [sym_unquote] = STATE(126),
    [sym_unquote_splicing] = STATE(126),
    [sym_unsyntax] = STATE(126),
    [sym_unsyntax_splicing] = STATE(126),
    [sym__special_form] = STATE(115),
    [sym_vector] = STATE(115),
    [sym_byte_vector] = STATE(115),
    [aux_sym_comment_repeat1] = STATE(65),
    [aux_sym__token_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(310),
    [sym_number] = ACTIONS(312),
    [sym_character] = ACTIONS(310),
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
    [sym__skip] = STATE(65),
    [sym__all_comment] = STATE(65),
    [sym_comment] = STATE(65),
    [sym_block_comment] = STATE(65),
    [sym__datum] = STATE(74),
    [sym__simple_datum] = STATE(74),
    [sym_string] = STATE(74),
    [sym_symbol] = STATE(74),
    [sym__compound_datum] = STATE(74),
    [sym_list] = STATE(74),
    [sym_abbreviation] = STATE(74),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(74),
    [sym_vector] = STATE(74),
    [sym_byte_vector] = STATE(74),
    [aux_sym_comment_repeat1] = STATE(65),
    [aux_sym__token_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(314),
    [sym_number] = ACTIONS(316),
    [sym_character] = ACTIONS(314),
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
    [sym__skip] = STATE(65),
    [sym__all_comment] = STATE(65),
    [sym_comment] = STATE(65),
    [sym_block_comment] = STATE(65),
    [sym__datum] = STATE(114),
    [sym__simple_datum] = STATE(114),
    [sym_string] = STATE(114),
    [sym_symbol] = STATE(114),
    [sym__compound_datum] = STATE(114),
    [sym_list] = STATE(114),
    [sym_abbreviation] = STATE(114),
    [sym_quote] = STATE(126),
    [sym_quasiquote] = STATE(126),
    [sym_syntax] = STATE(126),
    [sym_quasisyntax] = STATE(126),
    [sym_unquote] = STATE(126),
    [sym_unquote_splicing] = STATE(126),
    [sym_unsyntax] = STATE(126),
    [sym_unsyntax_splicing] = STATE(126),
    [sym__special_form] = STATE(114),
    [sym_vector] = STATE(114),
    [sym_byte_vector] = STATE(114),
    [aux_sym_comment_repeat1] = STATE(65),
    [aux_sym__token_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(318),
    [sym_number] = ACTIONS(320),
    [sym_character] = ACTIONS(318),
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
    [sym__skip] = STATE(65),
    [sym__all_comment] = STATE(65),
    [sym_comment] = STATE(65),
    [sym_block_comment] = STATE(65),
    [sym__datum] = STATE(75),
    [sym__simple_datum] = STATE(75),
    [sym_string] = STATE(75),
    [sym_symbol] = STATE(75),
    [sym__compound_datum] = STATE(75),
    [sym_list] = STATE(75),
    [sym_abbreviation] = STATE(75),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(75),
    [sym_vector] = STATE(75),
    [sym_byte_vector] = STATE(75),
    [aux_sym_comment_repeat1] = STATE(65),
    [aux_sym__token_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(322),
    [sym_number] = ACTIONS(324),
    [sym_character] = ACTIONS(322),
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
    [sym__skip] = STATE(65),
    [sym__all_comment] = STATE(65),
    [sym_comment] = STATE(65),
    [sym_block_comment] = STATE(65),
    [sym__datum] = STATE(110),
    [sym__simple_datum] = STATE(110),
    [sym_string] = STATE(110),
    [sym_symbol] = STATE(110),
    [sym__compound_datum] = STATE(110),
    [sym_list] = STATE(110),
    [sym_abbreviation] = STATE(110),
    [sym_quote] = STATE(126),
    [sym_quasiquote] = STATE(126),
    [sym_syntax] = STATE(126),
    [sym_quasisyntax] = STATE(126),
    [sym_unquote] = STATE(126),
    [sym_unquote_splicing] = STATE(126),
    [sym_unsyntax] = STATE(126),
    [sym_unsyntax_splicing] = STATE(126),
    [sym__special_form] = STATE(110),
    [sym_vector] = STATE(110),
    [sym_byte_vector] = STATE(110),
    [aux_sym_comment_repeat1] = STATE(65),
    [aux_sym__token_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(326),
    [sym_number] = ACTIONS(328),
    [sym_character] = ACTIONS(326),
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
    [sym__skip] = STATE(65),
    [sym__all_comment] = STATE(65),
    [sym_comment] = STATE(65),
    [sym_block_comment] = STATE(65),
    [sym__datum] = STATE(76),
    [sym__simple_datum] = STATE(76),
    [sym_string] = STATE(76),
    [sym_symbol] = STATE(76),
    [sym__compound_datum] = STATE(76),
    [sym_list] = STATE(76),
    [sym_abbreviation] = STATE(76),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(76),
    [sym_vector] = STATE(76),
    [sym_byte_vector] = STATE(76),
    [aux_sym_comment_repeat1] = STATE(65),
    [aux_sym__token_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(330),
    [sym_number] = ACTIONS(332),
    [sym_character] = ACTIONS(330),
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
    [sym__datum] = STATE(106),
    [sym__simple_datum] = STATE(106),
    [sym_string] = STATE(106),
    [sym_symbol] = STATE(106),
    [sym__compound_datum] = STATE(106),
    [sym_list] = STATE(106),
    [sym_abbreviation] = STATE(106),
    [sym_quote] = STATE(126),
    [sym_quasiquote] = STATE(126),
    [sym_syntax] = STATE(126),
    [sym_quasisyntax] = STATE(126),
    [sym_unquote] = STATE(126),
    [sym_unquote_splicing] = STATE(126),
    [sym_unsyntax] = STATE(126),
    [sym_unsyntax_splicing] = STATE(126),
    [sym__special_form] = STATE(106),
    [sym_vector] = STATE(106),
    [sym_byte_vector] = STATE(106),
    [aux_sym_comment_repeat1] = STATE(24),
    [aux_sym__token_token1] = ACTIONS(334),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(336),
    [sym_number] = ACTIONS(338),
    [sym_character] = ACTIONS(336),
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
    [sym__skip] = STATE(65),
    [sym__all_comment] = STATE(65),
    [sym_comment] = STATE(65),
    [sym_block_comment] = STATE(65),
    [sym__datum] = STATE(77),
    [sym__simple_datum] = STATE(77),
    [sym_string] = STATE(77),
    [sym_symbol] = STATE(77),
    [sym__compound_datum] = STATE(77),
    [sym_list] = STATE(77),
    [sym_abbreviation] = STATE(77),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(77),
    [sym_vector] = STATE(77),
    [sym_byte_vector] = STATE(77),
    [aux_sym_comment_repeat1] = STATE(65),
    [aux_sym__token_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(340),
    [sym_number] = ACTIONS(342),
    [sym_character] = ACTIONS(340),
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
    [sym__skip] = STATE(37),
    [sym__all_comment] = STATE(37),
    [sym_comment] = STATE(37),
    [sym_block_comment] = STATE(37),
    [sym__datum] = STATE(102),
    [sym__simple_datum] = STATE(102),
    [sym_string] = STATE(102),
    [sym_symbol] = STATE(102),
    [sym__compound_datum] = STATE(102),
    [sym_list] = STATE(102),
    [sym_abbreviation] = STATE(102),
    [sym_quote] = STATE(126),
    [sym_quasiquote] = STATE(126),
    [sym_syntax] = STATE(126),
    [sym_quasisyntax] = STATE(126),
    [sym_unquote] = STATE(126),
    [sym_unquote_splicing] = STATE(126),
    [sym_unsyntax] = STATE(126),
    [sym_unsyntax_splicing] = STATE(126),
    [sym__special_form] = STATE(102),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [aux_sym_comment_repeat1] = STATE(37),
    [aux_sym__token_token1] = ACTIONS(344),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(346),
    [sym_number] = ACTIONS(348),
    [sym_character] = ACTIONS(346),
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
    [sym__skip] = STATE(65),
    [sym__all_comment] = STATE(65),
    [sym_comment] = STATE(65),
    [sym_block_comment] = STATE(65),
    [sym__datum] = STATE(78),
    [sym__simple_datum] = STATE(78),
    [sym_string] = STATE(78),
    [sym_symbol] = STATE(78),
    [sym__compound_datum] = STATE(78),
    [sym_list] = STATE(78),
    [sym_abbreviation] = STATE(78),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(78),
    [sym_vector] = STATE(78),
    [sym_byte_vector] = STATE(78),
    [aux_sym_comment_repeat1] = STATE(65),
    [aux_sym__token_token1] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(350),
    [sym_number] = ACTIONS(352),
    [sym_character] = ACTIONS(350),
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
    [sym__skip] = STATE(50),
    [sym__all_comment] = STATE(50),
    [sym_comment] = STATE(50),
    [sym_block_comment] = STATE(50),
    [sym__datum] = STATE(87),
    [sym__simple_datum] = STATE(87),
    [sym_string] = STATE(87),
    [sym_symbol] = STATE(87),
    [sym__compound_datum] = STATE(87),
    [sym_list] = STATE(87),
    [sym_abbreviation] = STATE(87),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(87),
    [sym_vector] = STATE(87),
    [sym_byte_vector] = STATE(87),
    [aux_sym_comment_repeat1] = STATE(50),
    [aux_sym__token_token1] = ACTIONS(354),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(356),
    [sym_number] = ACTIONS(358),
    [sym_character] = ACTIONS(356),
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
    [sym__skip] = STATE(65),
    [sym__all_comment] = STATE(65),
    [sym_comment] = STATE(65),
    [sym_block_comment] = STATE(65),
    [sym__datum] = STATE(79),
    [sym__simple_datum] = STATE(79),
    [sym_string] = STATE(79),
    [sym_symbol] = STATE(79),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(79),
    [sym_abbreviation] = STATE(79),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym__special_form] = STATE(79),
    [sym_vector] = STATE(79),
    [sym_byte_vector] = STATE(79),
    [aux_sym_comment_repeat1] = STATE(65),
    [aux_sym__token_token1] = ACTIONS(182),
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
    [sym__datum] = STATE(104),
    [sym__simple_datum] = STATE(104),
    [sym_string] = STATE(104),
    [sym_symbol] = STATE(104),
    [sym__compound_datum] = STATE(104),
    [sym_list] = STATE(104),
    [sym_abbreviation] = STATE(104),
    [sym_quote] = STATE(126),
    [sym_quasiquote] = STATE(126),
    [sym_syntax] = STATE(126),
    [sym_quasisyntax] = STATE(126),
    [sym_unquote] = STATE(126),
    [sym_unquote_splicing] = STATE(126),
    [sym_unsyntax] = STATE(126),
    [sym_unsyntax_splicing] = STATE(126),
    [sym__special_form] = STATE(104),
    [sym_vector] = STATE(104),
    [sym_byte_vector] = STATE(104),
    [aux_sym_comment_repeat1] = STATE(36),
    [aux_sym__token_token1] = ACTIONS(364),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(366),
    [sym_number] = ACTIONS(368),
    [sym_character] = ACTIONS(366),
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
  [56] = {
    [sym__skip] = STATE(45),
    [sym__all_comment] = STATE(45),
    [sym_comment] = STATE(45),
    [sym_block_comment] = STATE(45),
    [sym__datum] = STATE(128),
    [sym__simple_datum] = STATE(128),
    [sym_string] = STATE(128),
    [sym_symbol] = STATE(128),
    [sym__compound_datum] = STATE(128),
    [sym_list] = STATE(128),
    [sym_abbreviation] = STATE(128),
    [sym_quote] = STATE(126),
    [sym_quasiquote] = STATE(126),
    [sym_syntax] = STATE(126),
    [sym_quasisyntax] = STATE(126),
    [sym_unquote] = STATE(126),
    [sym_unquote_splicing] = STATE(126),
    [sym_unsyntax] = STATE(126),
    [sym_unsyntax_splicing] = STATE(126),
    [sym__special_form] = STATE(128),
    [sym_vector] = STATE(128),
    [sym_byte_vector] = STATE(128),
    [aux_sym_comment_repeat1] = STATE(45),
    [aux_sym__token_token1] = ACTIONS(370),
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
    [sym__skip] = STATE(43),
    [sym__all_comment] = STATE(43),
    [sym_comment] = STATE(43),
    [sym_block_comment] = STATE(43),
    [sym__datum] = STATE(118),
    [sym__simple_datum] = STATE(118),
    [sym_string] = STATE(118),
    [sym_symbol] = STATE(118),
    [sym__compound_datum] = STATE(118),
    [sym_list] = STATE(118),
    [sym_abbreviation] = STATE(118),
    [sym_quote] = STATE(126),
    [sym_quasiquote] = STATE(126),
    [sym_syntax] = STATE(126),
    [sym_quasisyntax] = STATE(126),
    [sym_unquote] = STATE(126),
    [sym_unquote_splicing] = STATE(126),
    [sym_unsyntax] = STATE(126),
    [sym_unsyntax_splicing] = STATE(126),
    [sym__special_form] = STATE(118),
    [sym_vector] = STATE(118),
    [sym_byte_vector] = STATE(118),
    [aux_sym_comment_repeat1] = STATE(43),
    [aux_sym__token_token1] = ACTIONS(376),
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
    [sym__skip] = STATE(41),
    [sym__all_comment] = STATE(41),
    [sym_comment] = STATE(41),
    [sym_block_comment] = STATE(41),
    [sym__datum] = STATE(131),
    [sym__simple_datum] = STATE(131),
    [sym_string] = STATE(131),
    [sym_symbol] = STATE(131),
    [sym__compound_datum] = STATE(131),
    [sym_list] = STATE(131),
    [sym_abbreviation] = STATE(131),
    [sym_quote] = STATE(126),
    [sym_quasiquote] = STATE(126),
    [sym_syntax] = STATE(126),
    [sym_quasisyntax] = STATE(126),
    [sym_unquote] = STATE(126),
    [sym_unquote_splicing] = STATE(126),
    [sym_unsyntax] = STATE(126),
    [sym_unsyntax_splicing] = STATE(126),
    [sym__special_form] = STATE(131),
    [sym_vector] = STATE(131),
    [sym_byte_vector] = STATE(131),
    [aux_sym_comment_repeat1] = STATE(41),
    [aux_sym__token_token1] = ACTIONS(382),
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
    [sym__skip] = STATE(39),
    [sym__all_comment] = STATE(39),
    [sym_comment] = STATE(39),
    [sym_block_comment] = STATE(39),
    [sym__datum] = STATE(120),
    [sym__simple_datum] = STATE(120),
    [sym_string] = STATE(120),
    [sym_symbol] = STATE(120),
    [sym__compound_datum] = STATE(120),
    [sym_list] = STATE(120),
    [sym_abbreviation] = STATE(120),
    [sym_quote] = STATE(126),
    [sym_quasiquote] = STATE(126),
    [sym_syntax] = STATE(126),
    [sym_quasisyntax] = STATE(126),
    [sym_unquote] = STATE(126),
    [sym_unquote_splicing] = STATE(126),
    [sym_unsyntax] = STATE(126),
    [sym_unsyntax_splicing] = STATE(126),
    [sym__special_form] = STATE(120),
    [sym_vector] = STATE(120),
    [sym_byte_vector] = STATE(120),
    [aux_sym_comment_repeat1] = STATE(39),
    [aux_sym__token_token1] = ACTIONS(388),
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
      aux_sym__token_token1,
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
      aux_sym__token_token1,
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
      aux_sym__token_token1,
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
      aux_sym__token_token1,
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
      aux_sym__token_token1,
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
  [160] = 7,
    ACTIONS(414), 1,
      aux_sym__token_token1,
    ACTIONS(417), 1,
      aux_sym_comment_token1,
    ACTIONS(420), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(423), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(428), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    STATE(65), 5,
      sym__skip,
      sym__all_comment,
      sym_comment,
      sym_block_comment,
      aux_sym_comment_repeat1,
    ACTIONS(426), 14,
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
  [202] = 2,
    ACTIONS(432), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(430), 23,
      ts_builtin_sym_end,
      aux_sym__token_token1,
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
  [234] = 2,
    ACTIONS(436), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(434), 23,
      ts_builtin_sym_end,
      aux_sym__token_token1,
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
  [266] = 2,
    ACTIONS(440), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(438), 23,
      ts_builtin_sym_end,
      aux_sym__token_token1,
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
  [298] = 2,
    ACTIONS(444), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(442), 23,
      ts_builtin_sym_end,
      aux_sym__token_token1,
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
  [330] = 2,
    ACTIONS(448), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(446), 23,
      ts_builtin_sym_end,
      aux_sym__token_token1,
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
  [362] = 2,
    ACTIONS(452), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(450), 23,
      ts_builtin_sym_end,
      aux_sym__token_token1,
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
  [394] = 2,
    ACTIONS(456), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(454), 23,
      ts_builtin_sym_end,
      aux_sym__token_token1,
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
  [426] = 2,
    ACTIONS(460), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(458), 23,
      ts_builtin_sym_end,
      aux_sym__token_token1,
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
  [458] = 2,
    ACTIONS(464), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(462), 23,
      ts_builtin_sym_end,
      aux_sym__token_token1,
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
  [490] = 2,
    ACTIONS(468), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(466), 23,
      ts_builtin_sym_end,
      aux_sym__token_token1,
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
  [522] = 2,
    ACTIONS(472), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(470), 23,
      ts_builtin_sym_end,
      aux_sym__token_token1,
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
  [554] = 2,
    ACTIONS(476), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(474), 23,
      ts_builtin_sym_end,
      aux_sym__token_token1,
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
  [586] = 2,
    ACTIONS(480), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(478), 23,
      ts_builtin_sym_end,
      aux_sym__token_token1,
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
  [618] = 2,
    ACTIONS(484), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(482), 23,
      ts_builtin_sym_end,
      aux_sym__token_token1,
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
  [650] = 2,
    ACTIONS(488), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(486), 23,
      ts_builtin_sym_end,
      aux_sym__token_token1,
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
      aux_sym__token_token1,
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
      aux_sym__token_token1,
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
      aux_sym__token_token1,
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
      aux_sym__token_token1,
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
      aux_sym__token_token1,
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
      aux_sym__token_token1,
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
      aux_sym__token_token1,
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
      aux_sym__token_token1,
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
      aux_sym__token_token1,
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
      aux_sym__token_token1,
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
      aux_sym__token_token1,
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
      aux_sym__token_token1,
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
  [1066] = 2,
    ACTIONS(540), 4,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(538), 23,
      ts_builtin_sym_end,
      aux_sym__token_token1,
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
  [1098] = 7,
    ACTIONS(542), 1,
      aux_sym__token_token1,
    ACTIONS(544), 1,
      aux_sym_comment_token1,
    ACTIONS(546), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(548), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(550), 1,
      aux_sym_symbol_token1,
    STATE(83), 1,
      sym_symbol,
    STATE(95), 5,
      sym__skip,
      sym__all_comment,
      sym_comment,
      sym_block_comment,
      aux_sym_comment_repeat1,
  [1124] = 7,
    ACTIONS(544), 1,
      aux_sym_comment_token1,
    ACTIONS(546), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(548), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(550), 1,
      aux_sym_symbol_token1,
    ACTIONS(552), 1,
      aux_sym__token_token1,
    STATE(66), 1,
      sym_symbol,
    STATE(96), 5,
      sym__skip,
      sym__all_comment,
      sym_comment,
      sym_block_comment,
      aux_sym_comment_repeat1,
  [1150] = 6,
    ACTIONS(426), 1,
      aux_sym_symbol_token1,
    ACTIONS(554), 1,
      aux_sym__token_token1,
    ACTIONS(557), 1,
      aux_sym_comment_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(563), 1,
      anon_sym_POUND_PIPE,
    STATE(96), 5,
      sym__skip,
      sym__all_comment,
      sym_comment,
      sym_block_comment,
      aux_sym_comment_repeat1,
  [1173] = 1,
    ACTIONS(470), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1181] = 1,
    ACTIONS(502), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1189] = 1,
    ACTIONS(398), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1197] = 1,
    ACTIONS(534), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1205] = 1,
    ACTIONS(506), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1213] = 1,
    ACTIONS(514), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1221] = 1,
    ACTIONS(478), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1229] = 1,
    ACTIONS(518), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1237] = 4,
    ACTIONS(566), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(568), 1,
      aux_sym_block_comment_token1,
    ACTIONS(570), 1,
      anon_sym_PIPE_POUND,
    STATE(125), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1251] = 1,
    ACTIONS(394), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1259] = 1,
    ACTIONS(494), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1267] = 1,
    ACTIONS(402), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1275] = 1,
    ACTIONS(406), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1283] = 1,
    ACTIONS(410), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1291] = 1,
    ACTIONS(434), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1299] = 1,
    ACTIONS(442), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1307] = 1,
    ACTIONS(450), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1315] = 1,
    ACTIONS(454), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1323] = 1,
    ACTIONS(458), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1331] = 1,
    ACTIONS(462), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1339] = 1,
    ACTIONS(466), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1347] = 1,
    ACTIONS(526), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1355] = 4,
    ACTIONS(566), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(572), 1,
      aux_sym_block_comment_token1,
    ACTIONS(574), 1,
      anon_sym_PIPE_POUND,
    STATE(105), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1369] = 1,
    ACTIONS(538), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1377] = 1,
    ACTIONS(446), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1385] = 1,
    ACTIONS(486), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1393] = 1,
    ACTIONS(490), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1401] = 1,
    ACTIONS(474), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1409] = 4,
    ACTIONS(576), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(579), 1,
      aux_sym_block_comment_token1,
    ACTIONS(582), 1,
      anon_sym_PIPE_POUND,
    STATE(125), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1423] = 1,
    ACTIONS(438), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1431] = 4,
    ACTIONS(566), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(584), 1,
      aux_sym_block_comment_token1,
    ACTIONS(586), 1,
      anon_sym_PIPE_POUND,
    STATE(134), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1445] = 1,
    ACTIONS(522), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1453] = 4,
    ACTIONS(566), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(568), 1,
      aux_sym_block_comment_token1,
    ACTIONS(588), 1,
      anon_sym_PIPE_POUND,
    STATE(125), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1467] = 4,
    ACTIONS(566), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(590), 1,
      aux_sym_block_comment_token1,
    ACTIONS(592), 1,
      anon_sym_PIPE_POUND,
    STATE(129), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1481] = 1,
    ACTIONS(530), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1489] = 1,
    ACTIONS(482), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1497] = 1,
    ACTIONS(510), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [1505] = 4,
    ACTIONS(566), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(568), 1,
      aux_sym_block_comment_token1,
    ACTIONS(594), 1,
      anon_sym_PIPE_POUND,
    STATE(125), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1519] = 3,
    ACTIONS(596), 1,
      anon_sym_DQUOTE,
    STATE(136), 1,
      aux_sym_string_repeat1,
    ACTIONS(598), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1530] = 3,
    ACTIONS(600), 1,
      anon_sym_DQUOTE,
    STATE(136), 1,
      aux_sym_string_repeat1,
    ACTIONS(602), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1541] = 3,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    STATE(139), 1,
      aux_sym_string_repeat1,
    ACTIONS(607), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1552] = 3,
    ACTIONS(609), 1,
      anon_sym_DQUOTE,
    STATE(135), 1,
      aux_sym_string_repeat1,
    ACTIONS(611), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1563] = 3,
    ACTIONS(613), 1,
      anon_sym_DQUOTE,
    STATE(136), 1,
      aux_sym_string_repeat1,
    ACTIONS(598), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1574] = 2,
    ACTIONS(436), 1,
      aux_sym_block_comment_token1,
    ACTIONS(434), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [1582] = 2,
    ACTIONS(504), 1,
      aux_sym_block_comment_token1,
    ACTIONS(502), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [1590] = 1,
    ACTIONS(615), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(60)] = 0,
  [SMALL_STATE(61)] = 32,
  [SMALL_STATE(62)] = 64,
  [SMALL_STATE(63)] = 96,
  [SMALL_STATE(64)] = 128,
  [SMALL_STATE(65)] = 160,
  [SMALL_STATE(66)] = 202,
  [SMALL_STATE(67)] = 234,
  [SMALL_STATE(68)] = 266,
  [SMALL_STATE(69)] = 298,
  [SMALL_STATE(70)] = 330,
  [SMALL_STATE(71)] = 362,
  [SMALL_STATE(72)] = 394,
  [SMALL_STATE(73)] = 426,
  [SMALL_STATE(74)] = 458,
  [SMALL_STATE(75)] = 490,
  [SMALL_STATE(76)] = 522,
  [SMALL_STATE(77)] = 554,
  [SMALL_STATE(78)] = 586,
  [SMALL_STATE(79)] = 618,
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
  [SMALL_STATE(94)] = 1098,
  [SMALL_STATE(95)] = 1124,
  [SMALL_STATE(96)] = 1150,
  [SMALL_STATE(97)] = 1173,
  [SMALL_STATE(98)] = 1181,
  [SMALL_STATE(99)] = 1189,
  [SMALL_STATE(100)] = 1197,
  [SMALL_STATE(101)] = 1205,
  [SMALL_STATE(102)] = 1213,
  [SMALL_STATE(103)] = 1221,
  [SMALL_STATE(104)] = 1229,
  [SMALL_STATE(105)] = 1237,
  [SMALL_STATE(106)] = 1251,
  [SMALL_STATE(107)] = 1259,
  [SMALL_STATE(108)] = 1267,
  [SMALL_STATE(109)] = 1275,
  [SMALL_STATE(110)] = 1283,
  [SMALL_STATE(111)] = 1291,
  [SMALL_STATE(112)] = 1299,
  [SMALL_STATE(113)] = 1307,
  [SMALL_STATE(114)] = 1315,
  [SMALL_STATE(115)] = 1323,
  [SMALL_STATE(116)] = 1331,
  [SMALL_STATE(117)] = 1339,
  [SMALL_STATE(118)] = 1347,
  [SMALL_STATE(119)] = 1355,
  [SMALL_STATE(120)] = 1369,
  [SMALL_STATE(121)] = 1377,
  [SMALL_STATE(122)] = 1385,
  [SMALL_STATE(123)] = 1393,
  [SMALL_STATE(124)] = 1401,
  [SMALL_STATE(125)] = 1409,
  [SMALL_STATE(126)] = 1423,
  [SMALL_STATE(127)] = 1431,
  [SMALL_STATE(128)] = 1445,
  [SMALL_STATE(129)] = 1453,
  [SMALL_STATE(130)] = 1467,
  [SMALL_STATE(131)] = 1481,
  [SMALL_STATE(132)] = 1489,
  [SMALL_STATE(133)] = 1497,
  [SMALL_STATE(134)] = 1505,
  [SMALL_STATE(135)] = 1519,
  [SMALL_STATE(136)] = 1530,
  [SMALL_STATE(137)] = 1541,
  [SMALL_STATE(138)] = 1552,
  [SMALL_STATE(139)] = 1563,
  [SMALL_STATE(140)] = 1574,
  [SMALL_STATE(141)] = 1582,
  [SMALL_STATE(142)] = 1590,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(86),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(94),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(130),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(137),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(70),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(30),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(32),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(33),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(34),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(53),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(27),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(20),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax_splicing, 2),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax_splicing, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_vector, 2),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_vector, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(65),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(86),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(28),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(130),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abbreviation, 1),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abbreviation, 1),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 3),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 3),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syntax, 3),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasisyntax, 3),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasisyntax, 3),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 3),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splicing, 3),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splicing, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax, 3),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax, 3),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax_splicing, 3),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax_splicing, 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_vector, 3),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_vector, 3),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splicing, 2),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splicing, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax, 2),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax, 2),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 2),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 2),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syntax, 2),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasisyntax, 2),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasisyntax, 2),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(96),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(133),
  [560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(35),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(127),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(119),
  [579] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(125),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(136),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [615] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
