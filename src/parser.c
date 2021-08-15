#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
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
  anon_sym_DOT = 8,
  anon_sym_RPAREN = 9,
  anon_sym_LBRACK = 10,
  anon_sym_RBRACK = 11,
  sym__ws = 12,
  sym_comment = 13,
  sym_source_file = 14,
  sym_sexp = 15,
  sym_quote = 16,
  sym_unquote = 17,
  sym__atom = 18,
  sym_list = 19,
  sym_vector = 20,
  sym__gap = 21,
  aux_sym_source_file_repeat1 = 22,
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
  [anon_sym_DOT] = ".",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym__ws] = "_ws",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_sexp] = "sexp",
  [sym_quote] = "quote",
  [sym_unquote] = "unquote",
  [sym__atom] = "_atom",
  [sym_list] = "list",
  [sym_vector] = "vector",
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
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym__ws] = sym__ws,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_sexp] = sym_sexp,
  [sym_quote] = sym_quote,
  [sym_unquote] = sym_unquote,
  [sym__atom] = sym__atom,
  [sym_list] = sym_list,
  [sym_vector] = sym_vector,
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
  [anon_sym_DOT] = {
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
  [sym_vector] = {
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
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ')') ADVANCE(15);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == ']') ADVANCE(17);
      if (lookahead == '`') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('*' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ')') ADVANCE(15);
      if (lookahead == ',') ADVANCE(10);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == ']') ADVANCE(17);
      if (lookahead == '`') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          (28 <= lookahead && lookahead <= 31) ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8198) ||
          (8200 <= lookahead && lookahead <= 8202) ||
          lookahead == 8232 ||
          lookahead == 8233 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(19);
      if (('*' <= lookahead && lookahead <= '-') ||
          ('/' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(11);
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
      if (sym__ws_character_set_1(lookahead)) ADVANCE(19);
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
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == ',') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          (28 <= lookahead && lookahead <= 31) ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8198) ||
          (8200 <= lookahead && lookahead <= 8202) ||
          lookahead == 8232 ||
          lookahead == 8233 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__ws);
      if (sym__ws_character_set_1(lookahead)) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 0},
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
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(17),
    [sym_sexp] = STATE(5),
    [sym_quote] = STATE(10),
    [sym_unquote] = STATE(10),
    [sym__atom] = STATE(10),
    [sym_list] = STATE(10),
    [sym_vector] = STATE(10),
    [sym__gap] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(7),
    [sym_symbol] = ACTIONS(9),
    [sym_string] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym__ws] = ACTIONS(15),
    [sym_comment] = ACTIONS(15),
  },
  [2] = {
    [sym_sexp] = STATE(2),
    [sym_quote] = STATE(10),
    [sym_unquote] = STATE(10),
    [sym__atom] = STATE(10),
    [sym_list] = STATE(10),
    [sym_vector] = STATE(10),
    [sym__gap] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_POUND_SQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(22),
    [sym_symbol] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_RBRACK] = ACTIONS(31),
    [sym__ws] = ACTIONS(36),
    [sym_comment] = ACTIONS(36),
  },
  [3] = {
    [sym_sexp] = STATE(6),
    [sym_quote] = STATE(10),
    [sym_unquote] = STATE(10),
    [sym__atom] = STATE(10),
    [sym_list] = STATE(10),
    [sym_vector] = STATE(10),
    [sym__gap] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(7),
    [sym_symbol] = ACTIONS(9),
    [sym_string] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym__ws] = ACTIONS(41),
    [sym_comment] = ACTIONS(41),
  },
  [4] = {
    [sym_sexp] = STATE(7),
    [sym_quote] = STATE(10),
    [sym_unquote] = STATE(10),
    [sym__atom] = STATE(10),
    [sym_list] = STATE(10),
    [sym_vector] = STATE(10),
    [sym__gap] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(7),
    [sym_symbol] = ACTIONS(9),
    [sym_string] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(43),
    [sym__ws] = ACTIONS(45),
    [sym_comment] = ACTIONS(45),
  },
  [5] = {
    [sym_sexp] = STATE(2),
    [sym_quote] = STATE(10),
    [sym_unquote] = STATE(10),
    [sym__atom] = STATE(10),
    [sym_list] = STATE(10),
    [sym_vector] = STATE(10),
    [sym__gap] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(7),
    [sym_symbol] = ACTIONS(9),
    [sym_string] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym__ws] = ACTIONS(49),
    [sym_comment] = ACTIONS(49),
  },
  [6] = {
    [sym_sexp] = STATE(2),
    [sym_quote] = STATE(10),
    [sym_unquote] = STATE(10),
    [sym__atom] = STATE(10),
    [sym_list] = STATE(10),
    [sym_vector] = STATE(10),
    [sym__gap] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(7),
    [sym_symbol] = ACTIONS(9),
    [sym_string] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym__ws] = ACTIONS(49),
    [sym_comment] = ACTIONS(49),
  },
  [7] = {
    [sym_sexp] = STATE(2),
    [sym_quote] = STATE(10),
    [sym_unquote] = STATE(10),
    [sym__atom] = STATE(10),
    [sym_list] = STATE(10),
    [sym_vector] = STATE(10),
    [sym__gap] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(7),
    [sym_symbol] = ACTIONS(9),
    [sym_string] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(53),
    [sym__ws] = ACTIONS(49),
    [sym_comment] = ACTIONS(49),
  },
  [8] = {
    [sym_sexp] = STATE(11),
    [sym_quote] = STATE(10),
    [sym_unquote] = STATE(10),
    [sym__atom] = STATE(10),
    [sym_list] = STATE(10),
    [sym_vector] = STATE(10),
    [anon_sym_POUND_SQUOTE] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(57),
    [sym_symbol] = ACTIONS(59),
    [sym_string] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(63),
  },
  [9] = {
    [sym_sexp] = STATE(12),
    [sym_quote] = STATE(10),
    [sym_unquote] = STATE(10),
    [sym__atom] = STATE(10),
    [sym_list] = STATE(10),
    [sym_vector] = STATE(10),
    [anon_sym_POUND_SQUOTE] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(57),
    [sym_symbol] = ACTIONS(59),
    [sym_string] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(63),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(67),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(67),
    [sym_symbol] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_RBRACK] = ACTIONS(67),
    [sym__ws] = ACTIONS(67),
    [sym_comment] = ACTIONS(67),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_POUND_SQUOTE] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(71),
    [sym_symbol] = ACTIONS(71),
    [sym_string] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_RBRACK] = ACTIONS(71),
    [sym__ws] = ACTIONS(71),
    [sym_comment] = ACTIONS(71),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_POUND_SQUOTE] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(75),
    [sym_symbol] = ACTIONS(75),
    [sym_string] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_RBRACK] = ACTIONS(75),
    [sym__ws] = ACTIONS(75),
    [sym_comment] = ACTIONS(75),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_POUND_SQUOTE] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [sym_symbol] = ACTIONS(79),
    [sym_string] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(79),
    [sym__ws] = ACTIONS(79),
    [sym_comment] = ACTIONS(79),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_POUND_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [anon_sym_BQUOTE] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(83),
    [sym_symbol] = ACTIONS(83),
    [sym_string] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_RBRACK] = ACTIONS(83),
    [sym__ws] = ACTIONS(83),
    [sym_comment] = ACTIONS(83),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_POUND_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [anon_sym_BQUOTE] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [sym_symbol] = ACTIONS(87),
    [sym_string] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(87),
    [sym__ws] = ACTIONS(87),
    [sym_comment] = ACTIONS(87),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_POUND_SQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(91),
    [sym_symbol] = ACTIONS(91),
    [sym_string] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
    [sym__ws] = ACTIONS(91),
    [sym_comment] = ACTIONS(91),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(17)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexp, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexp, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [93] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
