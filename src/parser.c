#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  sym_space = 1,
  sym_newline = 2,
  sym_identifier = 3,
  aux_sym_unquoted_argument_token1 = 4,
  anon_sym_LBRACK = 5,
  anon_sym_EQ = 6,
  aux_sym__bracket_content_token1 = 7,
  anon_sym_RBRACK = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  sym_source_file = 11,
  sym_line_ending = 12,
  sym_seperation = 13,
  sym_argument = 14,
  sym_unquoted_argument = 15,
  sym_bracket_argument = 16,
  sym__bracket_open = 17,
  aux_sym__bracket_content = 18,
  sym__bracket_close = 19,
  sym_arguments = 20,
  sym__seperated_arguments = 21,
  sym_command_invocation = 22,
  aux_sym_source_file_repeat1 = 23,
  aux_sym_unquoted_argument_repeat1 = 24,
  aux_sym__bracket_open_repeat1 = 25,
  aux_sym_arguments_repeat1 = 26,
  aux_sym__seperated_arguments_repeat1 = 27,
  aux_sym_command_invocation_repeat1 = 28,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_space] = "space",
  [sym_newline] = "newline",
  [sym_identifier] = "identifier",
  [aux_sym_unquoted_argument_token1] = "unquoted_argument_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_EQ] = "=",
  [aux_sym__bracket_content_token1] = "_bracket_content_token1",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_source_file] = "source_file",
  [sym_line_ending] = "line_ending",
  [sym_seperation] = "seperation",
  [sym_argument] = "argument",
  [sym_unquoted_argument] = "unquoted_argument",
  [sym_bracket_argument] = "bracket_argument",
  [sym__bracket_open] = "_bracket_open",
  [aux_sym__bracket_content] = "_bracket_content",
  [sym__bracket_close] = "_bracket_close",
  [sym_arguments] = "arguments",
  [sym__seperated_arguments] = "_seperated_arguments",
  [sym_command_invocation] = "command_invocation",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_unquoted_argument_repeat1] = "unquoted_argument_repeat1",
  [aux_sym__bracket_open_repeat1] = "_bracket_open_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym__seperated_arguments_repeat1] = "_seperated_arguments_repeat1",
  [aux_sym_command_invocation_repeat1] = "command_invocation_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_space] = sym_space,
  [sym_newline] = sym_newline,
  [sym_identifier] = sym_identifier,
  [aux_sym_unquoted_argument_token1] = aux_sym_unquoted_argument_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym__bracket_content_token1] = aux_sym__bracket_content_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_source_file] = sym_source_file,
  [sym_line_ending] = sym_line_ending,
  [sym_seperation] = sym_seperation,
  [sym_argument] = sym_argument,
  [sym_unquoted_argument] = sym_unquoted_argument,
  [sym_bracket_argument] = sym_bracket_argument,
  [sym__bracket_open] = sym__bracket_open,
  [aux_sym__bracket_content] = aux_sym__bracket_content,
  [sym__bracket_close] = sym__bracket_close,
  [sym_arguments] = sym_arguments,
  [sym__seperated_arguments] = sym__seperated_arguments,
  [sym_command_invocation] = sym_command_invocation,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_unquoted_argument_repeat1] = aux_sym_unquoted_argument_repeat1,
  [aux_sym__bracket_open_repeat1] = aux_sym__bracket_open_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym__seperated_arguments_repeat1] = aux_sym__seperated_arguments_repeat1,
  [aux_sym_command_invocation_repeat1] = aux_sym_command_invocation_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_space] = {
    .visible = true,
    .named = true,
  },
  [sym_newline] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_unquoted_argument_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__bracket_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_line_ending] = {
    .visible = true,
    .named = true,
  },
  [sym_seperation] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoted_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_bracket_argument] = {
    .visible = true,
    .named = true,
  },
  [sym__bracket_open] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__bracket_content] = {
    .visible = false,
    .named = false,
  },
  [sym__bracket_close] = {
    .visible = false,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym__seperated_arguments] = {
    .visible = false,
    .named = true,
  },
  [sym_command_invocation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_argument_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__bracket_open_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__seperated_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_invocation_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '[') ADVANCE(18);
      if (lookahead == ']') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(7);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '[') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != '\\') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(8);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != '\\') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == ']') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\t') ADVANCE(7);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\t') ADVANCE(8);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\t') ADVANCE(7);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\t') ADVANCE(8);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(7);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '[') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(15);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(8);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(15);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym__bracket_content_token1);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym__bracket_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(47),
    [sym_command_invocation] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [aux_sym_command_invocation_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_space] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(13), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_argument,
    STATE(15), 1,
      aux_sym_unquoted_argument_repeat1,
    STATE(16), 1,
      sym_line_ending,
    STATE(20), 1,
      sym__bracket_open,
    STATE(49), 1,
      sym_arguments,
    STATE(10), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(27), 2,
      sym_unquoted_argument,
      sym_bracket_argument,
  [39] = 12,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(13), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_argument,
    STATE(15), 1,
      aux_sym_unquoted_argument_repeat1,
    STATE(16), 1,
      sym_line_ending,
    STATE(20), 1,
      sym__bracket_open,
    STATE(50), 1,
      sym_arguments,
    STATE(6), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(27), 2,
      sym_unquoted_argument,
      sym_bracket_argument,
  [78] = 12,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(13), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_argument,
    STATE(15), 1,
      aux_sym_unquoted_argument_repeat1,
    STATE(16), 1,
      sym_line_ending,
    STATE(20), 1,
      sym__bracket_open,
    STATE(46), 1,
      sym_arguments,
    STATE(2), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(27), 2,
      sym_unquoted_argument,
      sym_bracket_argument,
  [117] = 12,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(13), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_argument,
    STATE(15), 1,
      aux_sym_unquoted_argument_repeat1,
    STATE(16), 1,
      sym_line_ending,
    STATE(20), 1,
      sym__bracket_open,
    STATE(46), 1,
      sym_arguments,
    STATE(10), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(27), 2,
      sym_unquoted_argument,
      sym_bracket_argument,
  [156] = 12,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(13), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_argument,
    STATE(15), 1,
      aux_sym_unquoted_argument_repeat1,
    STATE(16), 1,
      sym_line_ending,
    STATE(20), 1,
      sym__bracket_open,
    STATE(48), 1,
      sym_arguments,
    STATE(10), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(27), 2,
      sym_unquoted_argument,
      sym_bracket_argument,
  [195] = 12,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(13), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_argument,
    STATE(15), 1,
      aux_sym_unquoted_argument_repeat1,
    STATE(16), 1,
      sym_line_ending,
    STATE(20), 1,
      sym__bracket_open,
    STATE(48), 1,
      sym_arguments,
    STATE(5), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(27), 2,
      sym_unquoted_argument,
      sym_bracket_argument,
  [234] = 9,
    ACTIONS(13), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    STATE(15), 1,
      aux_sym_unquoted_argument_repeat1,
    STATE(16), 1,
      sym_line_ending,
    STATE(20), 1,
      sym__bracket_open,
    STATE(39), 1,
      sym_argument,
    STATE(10), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(27), 2,
      sym_unquoted_argument,
      sym_bracket_argument,
    ACTIONS(25), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [266] = 6,
    ACTIONS(27), 1,
      sym_space,
    ACTIONS(30), 1,
      sym_newline,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym_line_ending,
    STATE(8), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(9), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [287] = 5,
    ACTIONS(35), 1,
      sym_space,
    ACTIONS(38), 1,
      sym_newline,
    STATE(16), 1,
      sym_line_ending,
    STATE(10), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    ACTIONS(41), 3,
      aux_sym_unquoted_argument_token1,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
  [306] = 6,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym_line_ending,
    STATE(8), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(12), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [327] = 6,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym_line_ending,
    STATE(8), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(9), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [348] = 5,
    ACTIONS(5), 1,
      sym_space,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      aux_sym_command_invocation_repeat1,
    STATE(14), 2,
      sym_command_invocation,
      aux_sym_source_file_repeat1,
  [365] = 5,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_space,
    ACTIONS(54), 1,
      sym_identifier,
    STATE(38), 1,
      aux_sym_command_invocation_repeat1,
    STATE(14), 2,
      sym_command_invocation,
      aux_sym_source_file_repeat1,
  [382] = 3,
    ACTIONS(59), 1,
      aux_sym_unquoted_argument_token1,
    STATE(18), 1,
      aux_sym_unquoted_argument_repeat1,
    ACTIONS(57), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [394] = 1,
    ACTIONS(61), 5,
      sym_space,
      sym_newline,
      aux_sym_unquoted_argument_token1,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
  [402] = 1,
    ACTIONS(63), 5,
      sym_space,
      sym_newline,
      aux_sym_unquoted_argument_token1,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
  [410] = 3,
    ACTIONS(67), 1,
      aux_sym_unquoted_argument_token1,
    STATE(18), 1,
      aux_sym_unquoted_argument_repeat1,
    ACTIONS(65), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [422] = 3,
    ACTIONS(72), 1,
      anon_sym_EQ,
    STATE(19), 1,
      aux_sym__bracket_open_repeat1,
    ACTIONS(70), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [433] = 4,
    ACTIONS(75), 1,
      aux_sym__bracket_content_token1,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    STATE(22), 1,
      aux_sym__bracket_content,
    STATE(29), 1,
      sym__bracket_close,
  [446] = 3,
    ACTIONS(79), 1,
      sym_space,
    STATE(21), 1,
      aux_sym_command_invocation_repeat1,
    ACTIONS(82), 2,
      sym_identifier,
      anon_sym_LPAREN,
  [457] = 4,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(84), 1,
      aux_sym__bracket_content_token1,
    STATE(24), 1,
      aux_sym__bracket_content,
    STATE(43), 1,
      sym__bracket_close,
  [470] = 3,
    ACTIONS(86), 1,
      anon_sym_EQ,
    ACTIONS(88), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      aux_sym__bracket_open_repeat1,
  [480] = 3,
    ACTIONS(90), 1,
      aux_sym__bracket_content_token1,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      aux_sym__bracket_content,
  [490] = 3,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      anon_sym_EQ,
    STATE(19), 1,
      aux_sym__bracket_open_repeat1,
  [500] = 3,
    ACTIONS(99), 1,
      sym_space,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      aux_sym_command_invocation_repeat1,
  [510] = 1,
    ACTIONS(103), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [516] = 2,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      sym_space,
  [524] = 1,
    ACTIONS(109), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [530] = 2,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      sym_space,
  [538] = 2,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      sym_space,
  [546] = 2,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      sym_space,
  [554] = 3,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      anon_sym_EQ,
    STATE(25), 1,
      aux_sym__bracket_open_repeat1,
  [564] = 3,
    ACTIONS(127), 1,
      sym_space,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      aux_sym_command_invocation_repeat1,
  [574] = 3,
    ACTIONS(131), 1,
      sym_space,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      aux_sym_command_invocation_repeat1,
  [584] = 1,
    ACTIONS(135), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [590] = 3,
    ACTIONS(127), 1,
      sym_space,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      aux_sym_command_invocation_repeat1,
  [600] = 3,
    ACTIONS(127), 1,
      sym_space,
    ACTIONS(137), 1,
      sym_identifier,
    STATE(21), 1,
      aux_sym_command_invocation_repeat1,
  [610] = 1,
    ACTIONS(139), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [616] = 1,
    ACTIONS(141), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [622] = 3,
    ACTIONS(97), 1,
      anon_sym_EQ,
    ACTIONS(143), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      aux_sym__bracket_open_repeat1,
  [632] = 2,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      sym_space,
  [640] = 1,
    ACTIONS(149), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [646] = 2,
    ACTIONS(151), 1,
      aux_sym__bracket_content_token1,
    ACTIONS(153), 1,
      anon_sym_RBRACK,
  [653] = 2,
    ACTIONS(155), 1,
      aux_sym__bracket_content_token1,
    ACTIONS(157), 1,
      anon_sym_RBRACK,
  [660] = 1,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
  [664] = 1,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
  [668] = 1,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
  [672] = 1,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
  [676] = 1,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 156,
  [SMALL_STATE(7)] = 195,
  [SMALL_STATE(8)] = 234,
  [SMALL_STATE(9)] = 266,
  [SMALL_STATE(10)] = 287,
  [SMALL_STATE(11)] = 306,
  [SMALL_STATE(12)] = 327,
  [SMALL_STATE(13)] = 348,
  [SMALL_STATE(14)] = 365,
  [SMALL_STATE(15)] = 382,
  [SMALL_STATE(16)] = 394,
  [SMALL_STATE(17)] = 402,
  [SMALL_STATE(18)] = 410,
  [SMALL_STATE(19)] = 422,
  [SMALL_STATE(20)] = 433,
  [SMALL_STATE(21)] = 446,
  [SMALL_STATE(22)] = 457,
  [SMALL_STATE(23)] = 470,
  [SMALL_STATE(24)] = 480,
  [SMALL_STATE(25)] = 490,
  [SMALL_STATE(26)] = 500,
  [SMALL_STATE(27)] = 510,
  [SMALL_STATE(28)] = 516,
  [SMALL_STATE(29)] = 524,
  [SMALL_STATE(30)] = 530,
  [SMALL_STATE(31)] = 538,
  [SMALL_STATE(32)] = 546,
  [SMALL_STATE(33)] = 554,
  [SMALL_STATE(34)] = 564,
  [SMALL_STATE(35)] = 574,
  [SMALL_STATE(36)] = 584,
  [SMALL_STATE(37)] = 590,
  [SMALL_STATE(38)] = 600,
  [SMALL_STATE(39)] = 610,
  [SMALL_STATE(40)] = 616,
  [SMALL_STATE(41)] = 622,
  [SMALL_STATE(42)] = 632,
  [SMALL_STATE(43)] = 640,
  [SMALL_STATE(44)] = 646,
  [SMALL_STATE(45)] = 653,
  [SMALL_STATE(46)] = 660,
  [SMALL_STATE(47)] = 664,
  [SMALL_STATE(48)] = 668,
  [SMALL_STATE(49)] = 672,
  [SMALL_STATE(50)] = 676,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__seperated_arguments, 1),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(16),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(17),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(16),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(17),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_argument, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_seperation, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_ending, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(18),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bracket_open_repeat1, 2),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bracket_open_repeat1, 2), SHIFT_REPEAT(19),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_invocation_repeat1, 2), SHIFT_REPEAT(21),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_invocation_repeat1, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bracket_content, 2), SHIFT_REPEAT(24),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__bracket_content, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 7),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 7),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 4),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 6),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 6),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_close, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__seperated_arguments, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_close, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 5),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 5),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_open, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_open, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_open, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_open, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [161] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_CMake(void) {
  static TSLanguage language = {
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
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
