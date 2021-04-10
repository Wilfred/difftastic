#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 52
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 30
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
  aux_sym_bracket_content_token1 = 7,
  anon_sym_RBRACK = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  sym_source_file = 11,
  sym_line_ending = 12,
  sym_seperation = 13,
  sym_argument = 14,
  sym_unquoted_argument = 15,
  sym_bracket_argument = 16,
  sym_bracket_open = 17,
  sym_bracket_content = 18,
  sym_bracket_close = 19,
  sym_arguments = 20,
  sym__seperated_arguments = 21,
  sym_command_invocation = 22,
  aux_sym_source_file_repeat1 = 23,
  aux_sym_unquoted_argument_repeat1 = 24,
  aux_sym_bracket_open_repeat1 = 25,
  aux_sym_bracket_content_repeat1 = 26,
  aux_sym_arguments_repeat1 = 27,
  aux_sym__seperated_arguments_repeat1 = 28,
  aux_sym_command_invocation_repeat1 = 29,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_space] = "space",
  [sym_newline] = "newline",
  [sym_identifier] = "identifier",
  [aux_sym_unquoted_argument_token1] = "unquoted_argument_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_EQ] = "=",
  [aux_sym_bracket_content_token1] = "bracket_content_token1",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_source_file] = "source_file",
  [sym_line_ending] = "line_ending",
  [sym_seperation] = "seperation",
  [sym_argument] = "argument",
  [sym_unquoted_argument] = "unquoted_argument",
  [sym_bracket_argument] = "bracket_argument",
  [sym_bracket_open] = "bracket_open",
  [sym_bracket_content] = "bracket_content",
  [sym_bracket_close] = "bracket_close",
  [sym_arguments] = "arguments",
  [sym__seperated_arguments] = "_seperated_arguments",
  [sym_command_invocation] = "command_invocation",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_unquoted_argument_repeat1] = "unquoted_argument_repeat1",
  [aux_sym_bracket_open_repeat1] = "bracket_open_repeat1",
  [aux_sym_bracket_content_repeat1] = "bracket_content_repeat1",
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
  [aux_sym_bracket_content_token1] = aux_sym_bracket_content_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_source_file] = sym_source_file,
  [sym_line_ending] = sym_line_ending,
  [sym_seperation] = sym_seperation,
  [sym_argument] = sym_argument,
  [sym_unquoted_argument] = sym_unquoted_argument,
  [sym_bracket_argument] = sym_bracket_argument,
  [sym_bracket_open] = sym_bracket_open,
  [sym_bracket_content] = sym_bracket_content,
  [sym_bracket_close] = sym_bracket_close,
  [sym_arguments] = sym_arguments,
  [sym__seperated_arguments] = sym__seperated_arguments,
  [sym_command_invocation] = sym_command_invocation,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_unquoted_argument_repeat1] = aux_sym_unquoted_argument_repeat1,
  [aux_sym_bracket_open_repeat1] = aux_sym_bracket_open_repeat1,
  [aux_sym_bracket_content_repeat1] = aux_sym_bracket_content_repeat1,
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
  [aux_sym_bracket_content_token1] = {
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
  [sym_bracket_open] = {
    .visible = true,
    .named = true,
  },
  [sym_bracket_content] = {
    .visible = true,
    .named = true,
  },
  [sym_bracket_close] = {
    .visible = true,
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
  [aux_sym_bracket_open_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bracket_content_repeat1] = {
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
      ACCEPT_TOKEN(aux_sym_bracket_content_token1);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_bracket_content_token1);
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
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
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
    [sym_source_file] = STATE(49),
    [sym_command_invocation] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [aux_sym_command_invocation_repeat1] = STATE(39),
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
      sym_line_ending,
    STATE(18), 1,
      sym_bracket_open,
    STATE(19), 1,
      aux_sym_unquoted_argument_repeat1,
    STATE(50), 1,
      sym_arguments,
    STATE(10), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(23), 2,
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
      sym_line_ending,
    STATE(18), 1,
      sym_bracket_open,
    STATE(19), 1,
      aux_sym_unquoted_argument_repeat1,
    STATE(51), 1,
      sym_arguments,
    STATE(10), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(23), 2,
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
      sym_line_ending,
    STATE(18), 1,
      sym_bracket_open,
    STATE(19), 1,
      aux_sym_unquoted_argument_repeat1,
    STATE(47), 1,
      sym_arguments,
    STATE(2), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(23), 2,
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
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_argument,
    STATE(15), 1,
      sym_line_ending,
    STATE(18), 1,
      sym_bracket_open,
    STATE(19), 1,
      aux_sym_unquoted_argument_repeat1,
    STATE(48), 1,
      sym_arguments,
    STATE(3), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(23), 2,
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
      sym_line_ending,
    STATE(18), 1,
      sym_bracket_open,
    STATE(19), 1,
      aux_sym_unquoted_argument_repeat1,
    STATE(48), 1,
      sym_arguments,
    STATE(10), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(23), 2,
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
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_argument,
    STATE(15), 1,
      sym_line_ending,
    STATE(18), 1,
      sym_bracket_open,
    STATE(19), 1,
      aux_sym_unquoted_argument_repeat1,
    STATE(50), 1,
      sym_arguments,
    STATE(6), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(23), 2,
      sym_unquoted_argument,
      sym_bracket_argument,
  [234] = 9,
    ACTIONS(13), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    STATE(15), 1,
      sym_line_ending,
    STATE(18), 1,
      sym_bracket_open,
    STATE(19), 1,
      aux_sym_unquoted_argument_repeat1,
    STATE(40), 1,
      sym_argument,
    STATE(10), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(23), 2,
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
    STATE(15), 1,
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
    STATE(15), 1,
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
    STATE(15), 1,
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
    STATE(15), 1,
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
    STATE(39), 1,
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
    STATE(39), 1,
      aux_sym_command_invocation_repeat1,
    STATE(14), 2,
      sym_command_invocation,
      aux_sym_source_file_repeat1,
  [382] = 1,
    ACTIONS(57), 5,
      sym_space,
      sym_newline,
      aux_sym_unquoted_argument_token1,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
  [390] = 1,
    ACTIONS(59), 5,
      sym_space,
      sym_newline,
      aux_sym_unquoted_argument_token1,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
  [398] = 3,
    ACTIONS(63), 1,
      aux_sym_unquoted_argument_token1,
    STATE(17), 1,
      aux_sym_unquoted_argument_repeat1,
    ACTIONS(61), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [410] = 5,
    ACTIONS(66), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(68), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      sym_bracket_close,
    STATE(30), 1,
      aux_sym_bracket_content_repeat1,
    STATE(45), 1,
      sym_bracket_content,
  [426] = 3,
    ACTIONS(72), 1,
      aux_sym_unquoted_argument_token1,
    STATE(17), 1,
      aux_sym_unquoted_argument_repeat1,
    ACTIONS(70), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [438] = 3,
    ACTIONS(76), 1,
      anon_sym_EQ,
    STATE(20), 1,
      aux_sym_bracket_open_repeat1,
    ACTIONS(74), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [449] = 3,
    ACTIONS(79), 1,
      sym_space,
    STATE(21), 1,
      aux_sym_command_invocation_repeat1,
    ACTIONS(82), 2,
      sym_identifier,
      anon_sym_LPAREN,
  [460] = 3,
    ACTIONS(84), 1,
      anon_sym_EQ,
    ACTIONS(86), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      aux_sym_bracket_open_repeat1,
  [470] = 1,
    ACTIONS(88), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [476] = 3,
    ACTIONS(90), 1,
      sym_space,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      aux_sym_command_invocation_repeat1,
  [486] = 3,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      sym_space,
    STATE(21), 1,
      aux_sym_command_invocation_repeat1,
  [496] = 2,
    ACTIONS(98), 1,
      sym_identifier,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      sym_space,
  [504] = 3,
    ACTIONS(100), 1,
      anon_sym_EQ,
    ACTIONS(102), 1,
      anon_sym_RBRACK,
    STATE(22), 1,
      aux_sym_bracket_open_repeat1,
  [514] = 2,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      sym_space,
  [522] = 1,
    ACTIONS(108), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [528] = 3,
    ACTIONS(110), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(112), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      aux_sym_bracket_content_repeat1,
  [538] = 2,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      sym_space,
  [546] = 2,
    ACTIONS(120), 1,
      sym_identifier,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      sym_space,
  [554] = 1,
    ACTIONS(122), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [560] = 3,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 1,
      anon_sym_EQ,
    STATE(36), 1,
      aux_sym_bracket_open_repeat1,
  [570] = 3,
    ACTIONS(94), 1,
      sym_space,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      aux_sym_command_invocation_repeat1,
  [580] = 3,
    ACTIONS(84), 1,
      anon_sym_EQ,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    STATE(20), 1,
      aux_sym_bracket_open_repeat1,
  [590] = 2,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      sym_space,
  [598] = 3,
    ACTIONS(136), 1,
      sym_space,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      aux_sym_command_invocation_repeat1,
  [608] = 3,
    ACTIONS(94), 1,
      sym_space,
    ACTIONS(140), 1,
      sym_identifier,
    STATE(21), 1,
      aux_sym_command_invocation_repeat1,
  [618] = 1,
    ACTIONS(142), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [624] = 1,
    ACTIONS(144), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [630] = 3,
    ACTIONS(146), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(149), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      aux_sym_bracket_content_repeat1,
  [640] = 1,
    ACTIONS(151), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [646] = 2,
    ACTIONS(153), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
  [653] = 2,
    ACTIONS(157), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      sym_bracket_close,
  [660] = 2,
    ACTIONS(159), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(161), 1,
      anon_sym_RBRACK,
  [667] = 1,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
  [671] = 1,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
  [675] = 1,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
  [679] = 1,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
  [683] = 1,
    ACTIONS(171), 1,
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
  [SMALL_STATE(16)] = 390,
  [SMALL_STATE(17)] = 398,
  [SMALL_STATE(18)] = 410,
  [SMALL_STATE(19)] = 426,
  [SMALL_STATE(20)] = 438,
  [SMALL_STATE(21)] = 449,
  [SMALL_STATE(22)] = 460,
  [SMALL_STATE(23)] = 470,
  [SMALL_STATE(24)] = 476,
  [SMALL_STATE(25)] = 486,
  [SMALL_STATE(26)] = 496,
  [SMALL_STATE(27)] = 504,
  [SMALL_STATE(28)] = 514,
  [SMALL_STATE(29)] = 522,
  [SMALL_STATE(30)] = 528,
  [SMALL_STATE(31)] = 538,
  [SMALL_STATE(32)] = 546,
  [SMALL_STATE(33)] = 554,
  [SMALL_STATE(34)] = 560,
  [SMALL_STATE(35)] = 570,
  [SMALL_STATE(36)] = 580,
  [SMALL_STATE(37)] = 590,
  [SMALL_STATE(38)] = 598,
  [SMALL_STATE(39)] = 608,
  [SMALL_STATE(40)] = 618,
  [SMALL_STATE(41)] = 624,
  [SMALL_STATE(42)] = 630,
  [SMALL_STATE(43)] = 640,
  [SMALL_STATE(44)] = 646,
  [SMALL_STATE(45)] = 653,
  [SMALL_STATE(46)] = 660,
  [SMALL_STATE(47)] = 667,
  [SMALL_STATE(48)] = 671,
  [SMALL_STATE(49)] = 675,
  [SMALL_STATE(50)] = 679,
  [SMALL_STATE(51)] = 683,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__seperated_arguments, 1),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(15),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(16),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(15),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(16),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_seperation, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_ending, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(17),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_argument, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bracket_open_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_open_repeat1, 2), SHIFT_REPEAT(20),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_invocation_repeat1, 2), SHIFT_REPEAT(21),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_invocation_repeat1, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 7),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 7),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 6),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 6),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_content, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 4),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_close, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 5),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 5),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__seperated_arguments, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_close, 2),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_content_repeat1, 2), SHIFT_REPEAT(42),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bracket_content_repeat1, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_open, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_open, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_open, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_open, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [167] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
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
