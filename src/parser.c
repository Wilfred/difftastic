#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 5
#define SYMBOL_COUNT 6
#define ALIAS_COUNT 0
#define TOKEN_COUNT 4
#define EXTERNAL_TOKEN_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_single_comment = 1,
  sym_multiline_comment = 2,
  anon_sym_lua = 3,
  sym_lua = 4,
  aux_sym_lua_repeat1 = 5,
};

static const char *ts_symbol_names[] = {
  [sym_single_comment] = "single_comment",
  [sym_multiline_comment] = "multiline_comment",
  [ts_builtin_sym_end] = "END",
  [anon_sym_lua] = "lua",
  [sym_lua] = "lua",
  [aux_sym_lua_repeat1] = "lua_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [sym_single_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_comment] = {
    .visible = true,
    .named = true,
  },
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_lua] = {
    .visible = true,
    .named = false,
  },
  [sym_lua] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_lua_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == 'l')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == 'u')
        ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 'a')
        ADVANCE(4);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_lua);
      END_STATE();
    case 5:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(5);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 1},
  [2] = {.lex_state = 5, .external_lex_state = 1},
  [3] = {.lex_state = 0, .external_lex_state = 1},
  [4] = {.lex_state = 0, .external_lex_state = 1},
};

enum {
  ts_external_token_single_comment,
  ts_external_token_multiline_comment,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_single_comment] = sym_single_comment,
  [ts_external_token_multiline_comment] = sym_multiline_comment,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_single_comment] = true,
    [ts_external_token_multiline_comment] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_single_comment] = ACTIONS(1),
    [sym_multiline_comment] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_lua] = ACTIONS(1),
  },
  [1] = {
    [sym_lua] = STATE(2),
    [aux_sym_lua_repeat1] = STATE(3),
    [sym_single_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_lua] = ACTIONS(7),
  },
  [2] = {
    [sym_single_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(9),
  },
  [3] = {
    [aux_sym_lua_repeat1] = STATE(4),
    [sym_single_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_lua] = ACTIONS(13),
  },
  [4] = {
    [aux_sym_lua_repeat1] = STATE(4),
    [sym_single_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_lua] = ACTIONS(17),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_lua, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_lua, 1),
  [13] = {.count = 1, .reusable = true}, SHIFT(4),
  [15] = {.count = 1, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2),
  [17] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(4),
};

void *tree_sitter_lua_external_scanner_create();
void tree_sitter_lua_external_scanner_destroy(void *);
bool tree_sitter_lua_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_lua_external_scanner_serialize(void *, char *);
void tree_sitter_lua_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_lua() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_lua_external_scanner_create,
      tree_sitter_lua_external_scanner_destroy,
      tree_sitter_lua_external_scanner_scan,
      tree_sitter_lua_external_scanner_serialize,
      tree_sitter_lua_external_scanner_deserialize,
    },
  };
  return &language;
}
