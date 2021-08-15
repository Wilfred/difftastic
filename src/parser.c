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
  aux_sym_number_token1 = 5,
  aux_sym_number_token2 = 6,
  sym_symbol = 7,
  sym_string = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_LBRACK = 11,
  anon_sym_RBRACK = 12,
  sym_comment = 13,
  sym_source_file = 14,
  sym__sexp = 15,
  sym_quote = 16,
  sym_unquote = 17,
  sym__atom = 18,
  sym_number = 19,
  sym_list = 20,
  sym_vector = 21,
  aux_sym_source_file_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND_SQUOTE] = "#'",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_COMMA] = ",",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [sym_symbol] = "symbol",
  [sym_string] = "string",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__sexp] = "_sexp",
  [sym_quote] = "quote",
  [sym_unquote] = "unquote",
  [sym__atom] = "_atom",
  [sym_number] = "number",
  [sym_list] = "list",
  [sym_vector] = "vector",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND_SQUOTE] = anon_sym_POUND_SQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [sym_symbol] = sym_symbol,
  [sym_string] = sym_string,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__sexp] = sym__sexp,
  [sym_quote] = sym_quote,
  [sym_unquote] = sym_unquote,
  [sym__atom] = sym__atom,
  [sym_number] = sym_number,
  [sym_list] = sym_list,
  [sym_vector] = sym_vector,
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
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token2] = {
    .visible = false,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__sexp] = {
    .visible = false,
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
  [sym_number] = {
    .visible = true,
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == '`') ADVANCE(10);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead == '*' ||
          ('/' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == 'b' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_number_token1);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_number_token2);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
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
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(17),
    [sym__sexp] = STATE(5),
    [sym_quote] = STATE(5),
    [sym_unquote] = STATE(5),
    [sym__atom] = STATE(5),
    [sym_number] = STATE(5),
    [sym_list] = STATE(5),
    [sym_vector] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [sym_symbol] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_comment] = ACTIONS(15),
  },
  [2] = {
    [sym__sexp] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_number] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_POUND_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(26),
    [aux_sym_number_token1] = ACTIONS(29),
    [aux_sym_number_token2] = ACTIONS(32),
    [sym_symbol] = ACTIONS(35),
    [sym_string] = ACTIONS(38),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(44),
    [anon_sym_RBRACK] = ACTIONS(21),
    [sym_comment] = ACTIONS(38),
  },
  [3] = {
    [sym__sexp] = STATE(6),
    [sym_quote] = STATE(6),
    [sym_unquote] = STATE(6),
    [sym__atom] = STATE(6),
    [sym_number] = STATE(6),
    [sym_list] = STATE(6),
    [sym_vector] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [sym_symbol] = ACTIONS(47),
    [sym_string] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_comment] = ACTIONS(49),
  },
  [4] = {
    [sym__sexp] = STATE(7),
    [sym_quote] = STATE(7),
    [sym_unquote] = STATE(7),
    [sym__atom] = STATE(7),
    [sym_number] = STATE(7),
    [sym_list] = STATE(7),
    [sym_vector] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [sym_symbol] = ACTIONS(53),
    [sym_string] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(57),
    [sym_comment] = ACTIONS(55),
  },
  [5] = {
    [sym__sexp] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_number] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [sym_symbol] = ACTIONS(61),
    [sym_string] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_comment] = ACTIONS(63),
  },
  [6] = {
    [sym__sexp] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_number] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [sym_symbol] = ACTIONS(61),
    [sym_string] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_comment] = ACTIONS(63),
  },
  [7] = {
    [sym__sexp] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_number] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [sym_symbol] = ACTIONS(61),
    [sym_string] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(67),
    [sym_comment] = ACTIONS(63),
  },
  [8] = {
    [sym__sexp] = STATE(11),
    [sym_quote] = STATE(11),
    [sym_unquote] = STATE(11),
    [sym__atom] = STATE(11),
    [sym_number] = STATE(11),
    [sym_list] = STATE(11),
    [sym_vector] = STATE(11),
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [sym_symbol] = ACTIONS(69),
    [sym_string] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
  },
  [9] = {
    [sym__sexp] = STATE(12),
    [sym_quote] = STATE(12),
    [sym_unquote] = STATE(12),
    [sym__atom] = STATE(12),
    [sym_number] = STATE(12),
    [sym_list] = STATE(12),
    [sym_vector] = STATE(12),
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [sym_symbol] = ACTIONS(73),
    [sym_string] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_POUND_SQUOTE] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [anon_sym_BQUOTE] = ACTIONS(77),
    [anon_sym_COMMA] = ACTIONS(77),
    [aux_sym_number_token1] = ACTIONS(79),
    [aux_sym_number_token2] = ACTIONS(77),
    [sym_symbol] = ACTIONS(79),
    [sym_string] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(77),
    [sym_comment] = ACTIONS(77),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_POUND_SQUOTE] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(81),
    [aux_sym_number_token1] = ACTIONS(83),
    [aux_sym_number_token2] = ACTIONS(81),
    [sym_symbol] = ACTIONS(83),
    [sym_string] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(81),
    [sym_comment] = ACTIONS(81),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_POUND_SQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_BQUOTE] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(85),
    [aux_sym_number_token1] = ACTIONS(87),
    [aux_sym_number_token2] = ACTIONS(85),
    [sym_symbol] = ACTIONS(87),
    [sym_string] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(85),
    [sym_comment] = ACTIONS(85),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_POUND_SQUOTE] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(89),
    [aux_sym_number_token1] = ACTIONS(91),
    [aux_sym_number_token2] = ACTIONS(89),
    [sym_symbol] = ACTIONS(91),
    [sym_string] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(89),
    [sym_comment] = ACTIONS(89),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_POUND_SQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(93),
    [aux_sym_number_token1] = ACTIONS(95),
    [aux_sym_number_token2] = ACTIONS(93),
    [sym_symbol] = ACTIONS(95),
    [sym_string] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_RPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(93),
    [sym_comment] = ACTIONS(93),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_POUND_SQUOTE] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [anon_sym_COMMA] = ACTIONS(97),
    [aux_sym_number_token1] = ACTIONS(99),
    [aux_sym_number_token2] = ACTIONS(97),
    [sym_symbol] = ACTIONS(99),
    [sym_string] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_RPAREN] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(97),
    [sym_comment] = ACTIONS(97),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_POUND_SQUOTE] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(101),
    [anon_sym_BQUOTE] = ACTIONS(101),
    [anon_sym_COMMA] = ACTIONS(101),
    [aux_sym_number_token1] = ACTIONS(103),
    [aux_sym_number_token2] = ACTIONS(101),
    [sym_symbol] = ACTIONS(103),
    [sym_string] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_RPAREN] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_RBRACK] = ACTIONS(101),
    [sym_comment] = ACTIONS(101),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(17)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [105] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
