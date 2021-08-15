#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 10
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_symbol = 1,
  sym_string = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  sym__ws = 5,
  sym_comment = 6,
  sym_source_file = 7,
  sym_sexp = 8,
  sym__atom = 9,
  sym_list = 10,
  sym__gap = 11,
  aux_sym_source_file_repeat1 = 12,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_symbol] = "symbol",
  [sym_string] = "string",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym__ws] = "_ws",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_sexp] = "sexp",
  [sym__atom] = "_atom",
  [sym_list] = "list",
  [sym__gap] = "_gap",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_symbol] = sym_symbol,
  [sym_string] = sym_string,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym__ws] = sym__ws,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_sexp] = sym_sexp,
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
        ? (c >= 11 && c <= '\f')
        : c <= 31)
      : (c <= ',' || c == 5760))
    : (c <= 8198 || (c < 8287
      ? (c < 8232
        ? (c >= 8200 && c <= 8202)
        : c <= 8233)
      : (c <= 8287 || c == 12288))));
}

static inline bool sym__ws_character_set_2(int32_t c) {
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
      if (eof) ADVANCE(3);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ')') ADVANCE(7);
      if (lookahead == ';') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (sym__ws_character_set_1(lookahead)) ADVANCE(9);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (sym__ws_character_set_1(lookahead)) ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym__ws);
      if (sym__ws_character_set_2(lookahead)) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
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
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__ws] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(9),
    [sym_sexp] = STATE(4),
    [sym__atom] = STATE(6),
    [sym_list] = STATE(6),
    [sym__gap] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_symbol] = ACTIONS(5),
    [sym_string] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym__ws] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [2] = {
    [sym_sexp] = STATE(2),
    [sym__atom] = STATE(6),
    [sym_list] = STATE(6),
    [sym__gap] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_symbol] = ACTIONS(15),
    [sym_string] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(18),
    [anon_sym_RPAREN] = ACTIONS(21),
    [sym__ws] = ACTIONS(23),
    [sym_comment] = ACTIONS(26),
  },
  [3] = {
    [sym_sexp] = STATE(5),
    [sym__atom] = STATE(6),
    [sym_list] = STATE(6),
    [sym__gap] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [sym_symbol] = ACTIONS(5),
    [sym_string] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(29),
    [sym__ws] = ACTIONS(31),
    [sym_comment] = ACTIONS(33),
  },
  [4] = {
    [sym_sexp] = STATE(2),
    [sym__atom] = STATE(6),
    [sym_list] = STATE(6),
    [sym__gap] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_symbol] = ACTIONS(5),
    [sym_string] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym__ws] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [5] = {
    [sym_sexp] = STATE(2),
    [sym__atom] = STATE(6),
    [sym_list] = STATE(6),
    [sym__gap] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [sym_symbol] = ACTIONS(5),
    [sym_string] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(41),
    [sym__ws] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_symbol] = ACTIONS(45),
    [sym_string] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(45),
    [sym__ws] = ACTIONS(43),
    [sym_comment] = ACTIONS(45),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_symbol] = ACTIONS(49),
    [sym_string] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(49),
    [sym__ws] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_symbol] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(53),
    [sym__ws] = ACTIONS(51),
    [sym_comment] = ACTIONS(53),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexp, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexp, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [55] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
