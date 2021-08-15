#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 14
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_POUND_SQUOTE = 1,
  anon_sym_SQUOTE = 2,
  anon_sym_BQUOTE = 3,
  anon_sym_COMMA = 4,
  sym_symbol = 5,
  sym_string = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  sym__ws = 9,
  sym_comment = 10,
  sym_source_file = 11,
  sym_sexp = 12,
  sym_quote = 13,
  sym_unquote = 14,
  sym__atom = 15,
  sym_list = 16,
  sym__gap = 17,
  aux_sym_source_file_repeat1 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND_SQUOTE] = "#'",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_COMMA] = ",",
  [sym_symbol] = "symbol",
  [sym_string] = "string",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym__ws] = "_ws",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_sexp] = "sexp",
  [sym_quote] = "quote",
  [sym_unquote] = "unquote",
  [sym__atom] = "_atom",
  [sym_list] = "list",
  [sym__gap] = "_gap",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND_SQUOTE] = anon_sym_POUND_SQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_symbol] = sym_symbol,
  [sym_string] = sym_string,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym__ws] = sym__ws,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_sexp] = sym_sexp,
  [sym_quote] = sym_quote,
  [sym_unquote] = sym_unquote,
  [sym__atom] = sym__atom,
  [sym_list] = sym_list,
  [sym__gap] = sym__gap,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND_SQUOTE] = {
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
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
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
  [sym__ws] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_sexp] = {
    .visible = true,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote] = {
    .visible = true,
    .named = true,
  },
  [sym__atom] = {
    .visible = false,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym__gap] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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

static inline bool sym__ws_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < ','
      ? (c < 28
        ? (c >= '\t' && c <= '\r')
        : c <= ' ')
      : (c <= ',' || c == 5760))
    : (c <= 8198 || (c < 8287
      ? (c < 8232
        ? (c >= 8200 && c <= 8202)
        : c <= 8233)
      : (c <= 8287 || c == 12288))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == ',') ADVANCE(10);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '`') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          (28 <= lookahead && lookahead <= 31) ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8198) ||
          (8200 <= lookahead && lookahead <= 8202) ||
          lookahead == 8232 ||
          lookahead == 8233 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(16);
      if (('*' <= lookahead && lookahead <= '-') ||
          ('/' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '`') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('*' <= lookahead && lookahead <= '-') ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (sym__ws_character_set_1(lookahead)) ADVANCE(16);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == ',') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          (28 <= lookahead && lookahead <= 31) ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8198) ||
          (8200 <= lookahead && lookahead <= 8202) ||
          lookahead == 8232 ||
          lookahead == 8233 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__ws);
      if (sym__ws_character_set_1(lookahead)) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__ws] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(13),
    [sym_sexp] = STATE(4),
    [sym_quote] = STATE(8),
    [sym_unquote] = STATE(8),
    [sym__atom] = STATE(8),
    [sym_list] = STATE(8),
    [sym__gap] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(7),
    [sym_symbol] = ACTIONS(9),
    [sym_string] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym__ws] = ACTIONS(13),
    [sym_comment] = ACTIONS(13),
  },
  [2] = {
    [sym_sexp] = STATE(2),
    [sym_quote] = STATE(8),
    [sym_unquote] = STATE(8),
    [sym__atom] = STATE(8),
    [sym_list] = STATE(8),
    [sym__gap] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_POUND_SQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(20),
    [sym_symbol] = ACTIONS(23),
    [sym_string] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_RPAREN] = ACTIONS(29),
    [sym__ws] = ACTIONS(31),
    [sym_comment] = ACTIONS(31),
  },
  [3] = {
    [sym_sexp] = STATE(5),
    [sym_quote] = STATE(8),
    [sym_unquote] = STATE(8),
    [sym__atom] = STATE(8),
    [sym_list] = STATE(8),
    [sym__gap] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(7),
    [sym_symbol] = ACTIONS(9),
    [sym_string] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(34),
    [sym__ws] = ACTIONS(36),
    [sym_comment] = ACTIONS(36),
  },
  [4] = {
    [sym_sexp] = STATE(2),
    [sym_quote] = STATE(8),
    [sym_unquote] = STATE(8),
    [sym__atom] = STATE(8),
    [sym_list] = STATE(8),
    [sym__gap] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(7),
    [sym_symbol] = ACTIONS(9),
    [sym_string] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym__ws] = ACTIONS(40),
    [sym_comment] = ACTIONS(40),
  },
  [5] = {
    [sym_sexp] = STATE(2),
    [sym_quote] = STATE(8),
    [sym_unquote] = STATE(8),
    [sym__atom] = STATE(8),
    [sym_list] = STATE(8),
    [sym__gap] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(7),
    [sym_symbol] = ACTIONS(9),
    [sym_string] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(42),
    [sym__ws] = ACTIONS(40),
    [sym_comment] = ACTIONS(40),
  },
  [6] = {
    [sym_sexp] = STATE(9),
    [sym_quote] = STATE(8),
    [sym_unquote] = STATE(8),
    [sym__atom] = STATE(8),
    [sym_list] = STATE(8),
    [anon_sym_POUND_SQUOTE] = ACTIONS(44),
    [anon_sym_SQUOTE] = ACTIONS(44),
    [anon_sym_BQUOTE] = ACTIONS(44),
    [anon_sym_COMMA] = ACTIONS(46),
    [sym_symbol] = ACTIONS(48),
    [sym_string] = ACTIONS(48),
    [anon_sym_LPAREN] = ACTIONS(50),
  },
  [7] = {
    [sym_sexp] = STATE(10),
    [sym_quote] = STATE(8),
    [sym_unquote] = STATE(8),
    [sym__atom] = STATE(8),
    [sym_list] = STATE(8),
    [anon_sym_POUND_SQUOTE] = ACTIONS(44),
    [anon_sym_SQUOTE] = ACTIONS(44),
    [anon_sym_BQUOTE] = ACTIONS(44),
    [anon_sym_COMMA] = ACTIONS(46),
    [sym_symbol] = ACTIONS(48),
    [sym_string] = ACTIONS(48),
    [anon_sym_LPAREN] = ACTIONS(50),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_POUND_SQUOTE] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_BQUOTE] = ACTIONS(54),
    [anon_sym_COMMA] = ACTIONS(54),
    [sym_symbol] = ACTIONS(54),
    [sym_string] = ACTIONS(54),
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_RPAREN] = ACTIONS(54),
    [sym__ws] = ACTIONS(54),
    [sym_comment] = ACTIONS(54),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(56),
    [anon_sym_POUND_SQUOTE] = ACTIONS(58),
    [anon_sym_SQUOTE] = ACTIONS(58),
    [anon_sym_BQUOTE] = ACTIONS(58),
    [anon_sym_COMMA] = ACTIONS(58),
    [sym_symbol] = ACTIONS(58),
    [sym_string] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(58),
    [sym__ws] = ACTIONS(58),
    [sym_comment] = ACTIONS(58),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [anon_sym_POUND_SQUOTE] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_BQUOTE] = ACTIONS(62),
    [anon_sym_COMMA] = ACTIONS(62),
    [sym_symbol] = ACTIONS(62),
    [sym_string] = ACTIONS(62),
    [anon_sym_LPAREN] = ACTIONS(62),
    [anon_sym_RPAREN] = ACTIONS(62),
    [sym__ws] = ACTIONS(62),
    [sym_comment] = ACTIONS(62),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(64),
    [anon_sym_POUND_SQUOTE] = ACTIONS(66),
    [anon_sym_SQUOTE] = ACTIONS(66),
    [anon_sym_BQUOTE] = ACTIONS(66),
    [anon_sym_COMMA] = ACTIONS(66),
    [sym_symbol] = ACTIONS(66),
    [sym_string] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(66),
    [anon_sym_RPAREN] = ACTIONS(66),
    [sym__ws] = ACTIONS(66),
    [sym_comment] = ACTIONS(66),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [anon_sym_POUND_SQUOTE] = ACTIONS(70),
    [anon_sym_SQUOTE] = ACTIONS(70),
    [anon_sym_BQUOTE] = ACTIONS(70),
    [anon_sym_COMMA] = ACTIONS(70),
    [sym_symbol] = ACTIONS(70),
    [sym_string] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_RPAREN] = ACTIONS(70),
    [sym__ws] = ACTIONS(70),
    [sym_comment] = ACTIONS(70),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexp, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexp, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [72] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_elisp(void) {
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
