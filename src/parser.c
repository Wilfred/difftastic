#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  sym_space = 1,
  sym_newline = 2,
  sym_identifier = 3,
  sym__escape_identity = 4,
  anon_sym_BSLASHt = 5,
  anon_sym_BSLASHr = 6,
  anon_sym_BSLASHn = 7,
  sym__escape_semicolon = 8,
  aux_sym_unquoted_argument_token1 = 9,
  anon_sym_LBRACK = 10,
  anon_sym_EQ = 11,
  aux_sym__bracket_content_token1 = 12,
  anon_sym_RBRACK = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  sym_source_file = 16,
  sym_line_ending = 17,
  sym_seperation = 18,
  sym_escape_sequence = 19,
  sym__escape_encoded = 20,
  sym_argument = 21,
  sym_unquoted_argument = 22,
  sym_bracket_argument = 23,
  sym__bracket_open = 24,
  aux_sym__bracket_content = 25,
  sym__bracket_close = 26,
  sym_arguments = 27,
  sym__seperated_arguments = 28,
  sym_command_invocation = 29,
  aux_sym_source_file_repeat1 = 30,
  aux_sym_unquoted_argument_repeat1 = 31,
  aux_sym__bracket_open_repeat1 = 32,
  aux_sym_arguments_repeat1 = 33,
  aux_sym__seperated_arguments_repeat1 = 34,
  aux_sym_command_invocation_repeat1 = 35,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_space] = "space",
  [sym_newline] = "newline",
  [sym_identifier] = "identifier",
  [sym__escape_identity] = "_escape_identity",
  [anon_sym_BSLASHt] = "\\t",
  [anon_sym_BSLASHr] = "\\r",
  [anon_sym_BSLASHn] = "\\n",
  [sym__escape_semicolon] = "_escape_semicolon",
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
  [sym_escape_sequence] = "escape_sequence",
  [sym__escape_encoded] = "_escape_encoded",
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
  [sym__escape_identity] = sym__escape_identity,
  [anon_sym_BSLASHt] = anon_sym_BSLASHt,
  [anon_sym_BSLASHr] = anon_sym_BSLASHr,
  [anon_sym_BSLASHn] = anon_sym_BSLASHn,
  [sym__escape_semicolon] = sym__escape_semicolon,
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
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__escape_encoded] = sym__escape_encoded,
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
  [sym__escape_identity] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BSLASHt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHn] = {
    .visible = true,
    .named = false,
  },
  [sym__escape_semicolon] = {
    .visible = false,
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
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__escape_encoded] = {
    .visible = false,
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
      if (eof) ADVANCE(7);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == ']') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(8);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(22);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(9);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '\r') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\r') SKIP(3)
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == ']') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(18);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(16);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\t') ADVANCE(8);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(22);
      if (lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\t') ADVANCE(9);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '\r') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\t') ADVANCE(8);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(22);
      if (lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\t') ADVANCE(9);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '\r') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__escape_identity);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__escape_semicolon);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(8);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(22);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(21);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(9);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '\r') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(21);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym__bracket_content_token1);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym__bracket_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(26);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym__escape_identity] = ACTIONS(1),
    [anon_sym_BSLASHt] = ACTIONS(1),
    [anon_sym_BSLASHr] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [sym__escape_semicolon] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(54),
    [sym_command_invocation] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(20),
    [aux_sym_command_invocation_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_space] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
  [2] = {
    [sym_line_ending] = STATE(13),
    [sym_seperation] = STATE(9),
    [sym_escape_sequence] = STATE(11),
    [sym__escape_encoded] = STATE(14),
    [sym_argument] = STATE(16),
    [sym_unquoted_argument] = STATE(38),
    [sym_bracket_argument] = STATE(38),
    [sym__bracket_open] = STATE(26),
    [sym_arguments] = STATE(53),
    [aux_sym_unquoted_argument_repeat1] = STATE(11),
    [aux_sym__seperated_arguments_repeat1] = STATE(9),
    [sym_space] = ACTIONS(9),
    [sym_newline] = ACTIONS(11),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [aux_sym_unquoted_argument_token1] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(19),
  },
  [3] = {
    [sym_line_ending] = STATE(13),
    [sym_seperation] = STATE(9),
    [sym_escape_sequence] = STATE(11),
    [sym__escape_encoded] = STATE(14),
    [sym_argument] = STATE(16),
    [sym_unquoted_argument] = STATE(38),
    [sym_bracket_argument] = STATE(38),
    [sym__bracket_open] = STATE(26),
    [sym_arguments] = STATE(50),
    [aux_sym_unquoted_argument_repeat1] = STATE(11),
    [aux_sym__seperated_arguments_repeat1] = STATE(9),
    [sym_space] = ACTIONS(9),
    [sym_newline] = ACTIONS(11),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [aux_sym_unquoted_argument_token1] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(21),
  },
  [4] = {
    [sym_line_ending] = STATE(13),
    [sym_seperation] = STATE(9),
    [sym_escape_sequence] = STATE(11),
    [sym__escape_encoded] = STATE(14),
    [sym_argument] = STATE(16),
    [sym_unquoted_argument] = STATE(38),
    [sym_bracket_argument] = STATE(38),
    [sym__bracket_open] = STATE(26),
    [sym_arguments] = STATE(51),
    [aux_sym_unquoted_argument_repeat1] = STATE(11),
    [aux_sym__seperated_arguments_repeat1] = STATE(9),
    [sym_space] = ACTIONS(9),
    [sym_newline] = ACTIONS(11),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [aux_sym_unquoted_argument_token1] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(23),
  },
  [5] = {
    [sym_line_ending] = STATE(13),
    [sym_seperation] = STATE(2),
    [sym_escape_sequence] = STATE(11),
    [sym__escape_encoded] = STATE(14),
    [sym_argument] = STATE(16),
    [sym_unquoted_argument] = STATE(38),
    [sym_bracket_argument] = STATE(38),
    [sym__bracket_open] = STATE(26),
    [sym_arguments] = STATE(52),
    [aux_sym_unquoted_argument_repeat1] = STATE(11),
    [aux_sym__seperated_arguments_repeat1] = STATE(2),
    [sym_space] = ACTIONS(9),
    [sym_newline] = ACTIONS(11),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [aux_sym_unquoted_argument_token1] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(25),
  },
  [6] = {
    [sym_line_ending] = STATE(13),
    [sym_seperation] = STATE(3),
    [sym_escape_sequence] = STATE(11),
    [sym__escape_encoded] = STATE(14),
    [sym_argument] = STATE(16),
    [sym_unquoted_argument] = STATE(38),
    [sym_bracket_argument] = STATE(38),
    [sym__bracket_open] = STATE(26),
    [sym_arguments] = STATE(53),
    [aux_sym_unquoted_argument_repeat1] = STATE(11),
    [aux_sym__seperated_arguments_repeat1] = STATE(3),
    [sym_space] = ACTIONS(9),
    [sym_newline] = ACTIONS(11),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [aux_sym_unquoted_argument_token1] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(19),
  },
  [7] = {
    [sym_line_ending] = STATE(13),
    [sym_seperation] = STATE(4),
    [sym_escape_sequence] = STATE(11),
    [sym__escape_encoded] = STATE(14),
    [sym_argument] = STATE(16),
    [sym_unquoted_argument] = STATE(38),
    [sym_bracket_argument] = STATE(38),
    [sym__bracket_open] = STATE(26),
    [sym_arguments] = STATE(50),
    [aux_sym_unquoted_argument_repeat1] = STATE(11),
    [aux_sym__seperated_arguments_repeat1] = STATE(4),
    [sym_space] = ACTIONS(9),
    [sym_newline] = ACTIONS(11),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [aux_sym_unquoted_argument_token1] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(21),
  },
  [8] = {
    [sym_line_ending] = STATE(13),
    [sym_seperation] = STATE(9),
    [sym_escape_sequence] = STATE(11),
    [sym__escape_encoded] = STATE(14),
    [sym_argument] = STATE(40),
    [sym_unquoted_argument] = STATE(38),
    [sym_bracket_argument] = STATE(38),
    [sym__bracket_open] = STATE(26),
    [aux_sym_unquoted_argument_repeat1] = STATE(11),
    [aux_sym__seperated_arguments_repeat1] = STATE(9),
    [sym_space] = ACTIONS(27),
    [sym_newline] = ACTIONS(27),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [aux_sym_unquoted_argument_token1] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(27),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(29), 1,
      sym_space,
    ACTIONS(32), 1,
      sym_newline,
    STATE(13), 1,
      sym_line_ending,
    STATE(9), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    ACTIONS(35), 8,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      aux_sym_unquoted_argument_token1,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
  [24] = 5,
    ACTIONS(42), 1,
      aux_sym_unquoted_argument_token1,
    STATE(14), 1,
      sym__escape_encoded,
    STATE(10), 2,
      sym_escape_sequence,
      aux_sym_unquoted_argument_repeat1,
    ACTIONS(37), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
    ACTIONS(39), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [47] = 5,
    ACTIONS(47), 1,
      aux_sym_unquoted_argument_token1,
    STATE(14), 1,
      sym__escape_encoded,
    STATE(10), 2,
      sym_escape_sequence,
      aux_sym_unquoted_argument_repeat1,
    ACTIONS(45), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
    ACTIONS(13), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [70] = 1,
    ACTIONS(49), 10,
      sym_space,
      sym_newline,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      aux_sym_unquoted_argument_token1,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
  [83] = 1,
    ACTIONS(51), 10,
      sym_space,
      sym_newline,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      aux_sym_unquoted_argument_token1,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
  [96] = 1,
    ACTIONS(53), 9,
      sym_space,
      sym_newline,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      aux_sym_unquoted_argument_token1,
      anon_sym_RPAREN,
  [108] = 6,
    ACTIONS(55), 1,
      sym_space,
    ACTIONS(58), 1,
      sym_newline,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym_line_ending,
    STATE(8), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(15), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [129] = 6,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym_line_ending,
    STATE(8), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(17), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [150] = 6,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym_line_ending,
    STATE(8), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(15), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [171] = 5,
    ACTIONS(67), 1,
      sym_space,
    ACTIONS(69), 1,
      sym_newline,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_line_ending,
    STATE(21), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
  [188] = 5,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      sym_space,
    ACTIONS(78), 1,
      sym_identifier,
    STATE(30), 1,
      aux_sym_command_invocation_repeat1,
    STATE(19), 2,
      sym_command_invocation,
      aux_sym_source_file_repeat1,
  [205] = 5,
    ACTIONS(5), 1,
      sym_space,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      aux_sym_command_invocation_repeat1,
    STATE(19), 2,
      sym_command_invocation,
      aux_sym_source_file_repeat1,
  [222] = 5,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      sym_space,
    ACTIONS(86), 1,
      sym_newline,
    STATE(34), 1,
      sym_line_ending,
    STATE(21), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
  [239] = 5,
    ACTIONS(67), 1,
      sym_space,
    ACTIONS(69), 1,
      sym_newline,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_line_ending,
    STATE(21), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
  [256] = 5,
    ACTIONS(67), 1,
      sym_space,
    ACTIONS(69), 1,
      sym_newline,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_line_ending,
    STATE(18), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
  [273] = 5,
    ACTIONS(67), 1,
      sym_space,
    ACTIONS(69), 1,
      sym_newline,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_line_ending,
    STATE(22), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
  [290] = 3,
    ACTIONS(95), 1,
      anon_sym_EQ,
    STATE(25), 1,
      aux_sym__bracket_open_repeat1,
    ACTIONS(93), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [301] = 4,
    ACTIONS(98), 1,
      aux_sym__bracket_content_token1,
    ACTIONS(100), 1,
      anon_sym_RBRACK,
    STATE(27), 1,
      aux_sym__bracket_content,
    STATE(31), 1,
      sym__bracket_close,
  [314] = 4,
    ACTIONS(100), 1,
      anon_sym_RBRACK,
    ACTIONS(102), 1,
      aux_sym__bracket_content_token1,
    STATE(43), 1,
      aux_sym__bracket_content,
    STATE(44), 1,
      sym__bracket_close,
  [327] = 3,
    ACTIONS(104), 1,
      sym_space,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(28), 1,
      aux_sym_command_invocation_repeat1,
  [337] = 3,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 1,
      anon_sym_EQ,
    STATE(33), 1,
      aux_sym__bracket_open_repeat1,
  [347] = 3,
    ACTIONS(113), 1,
      sym_space,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(28), 1,
      aux_sym_command_invocation_repeat1,
  [357] = 1,
    ACTIONS(117), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [363] = 2,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      sym_space,
  [371] = 3,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      anon_sym_EQ,
    STATE(25), 1,
      aux_sym__bracket_open_repeat1,
  [381] = 1,
    ACTIONS(51), 3,
      sym_space,
      sym_newline,
      anon_sym_LPAREN,
  [387] = 1,
    ACTIONS(49), 3,
      sym_space,
      sym_newline,
      anon_sym_LPAREN,
  [393] = 2,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      sym_space,
  [401] = 2,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      sym_space,
  [409] = 1,
    ACTIONS(135), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [415] = 2,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      sym_space,
  [423] = 1,
    ACTIONS(141), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [429] = 1,
    ACTIONS(143), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [435] = 3,
    ACTIONS(125), 1,
      anon_sym_EQ,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      aux_sym__bracket_open_repeat1,
  [445] = 3,
    ACTIONS(147), 1,
      aux_sym__bracket_content_token1,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      aux_sym__bracket_content,
  [455] = 1,
    ACTIONS(152), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [461] = 2,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      sym_space,
  [469] = 1,
    ACTIONS(158), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [475] = 3,
    ACTIONS(160), 1,
      anon_sym_EQ,
    ACTIONS(162), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      aux_sym__bracket_open_repeat1,
  [485] = 2,
    ACTIONS(164), 1,
      aux_sym__bracket_content_token1,
    ACTIONS(166), 1,
      anon_sym_RBRACK,
  [492] = 2,
    ACTIONS(168), 1,
      aux_sym__bracket_content_token1,
    ACTIONS(170), 1,
      anon_sym_RBRACK,
  [499] = 1,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
  [503] = 1,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
  [507] = 1,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
  [511] = 1,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
  [515] = 1,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 24,
  [SMALL_STATE(11)] = 47,
  [SMALL_STATE(12)] = 70,
  [SMALL_STATE(13)] = 83,
  [SMALL_STATE(14)] = 96,
  [SMALL_STATE(15)] = 108,
  [SMALL_STATE(16)] = 129,
  [SMALL_STATE(17)] = 150,
  [SMALL_STATE(18)] = 171,
  [SMALL_STATE(19)] = 188,
  [SMALL_STATE(20)] = 205,
  [SMALL_STATE(21)] = 222,
  [SMALL_STATE(22)] = 239,
  [SMALL_STATE(23)] = 256,
  [SMALL_STATE(24)] = 273,
  [SMALL_STATE(25)] = 290,
  [SMALL_STATE(26)] = 301,
  [SMALL_STATE(27)] = 314,
  [SMALL_STATE(28)] = 327,
  [SMALL_STATE(29)] = 337,
  [SMALL_STATE(30)] = 347,
  [SMALL_STATE(31)] = 357,
  [SMALL_STATE(32)] = 363,
  [SMALL_STATE(33)] = 371,
  [SMALL_STATE(34)] = 381,
  [SMALL_STATE(35)] = 387,
  [SMALL_STATE(36)] = 393,
  [SMALL_STATE(37)] = 401,
  [SMALL_STATE(38)] = 409,
  [SMALL_STATE(39)] = 415,
  [SMALL_STATE(40)] = 423,
  [SMALL_STATE(41)] = 429,
  [SMALL_STATE(42)] = 435,
  [SMALL_STATE(43)] = 445,
  [SMALL_STATE(44)] = 455,
  [SMALL_STATE(45)] = 461,
  [SMALL_STATE(46)] = 469,
  [SMALL_STATE(47)] = 475,
  [SMALL_STATE(48)] = 485,
  [SMALL_STATE(49)] = 492,
  [SMALL_STATE(50)] = 499,
  [SMALL_STATE(51)] = 503,
  [SMALL_STATE(52)] = 507,
  [SMALL_STATE(53)] = 511,
  [SMALL_STATE(54)] = 515,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__seperated_arguments, 1),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(13),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(12),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(14),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(10),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_argument, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_ending, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_seperation, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(13),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(12),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(34),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(35),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bracket_open_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bracket_open_repeat1, 2), SHIFT_REPEAT(25),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_invocation_repeat1, 2), SHIFT_REPEAT(28),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_invocation_repeat1, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 4),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 7),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 7),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 6),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 6),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__seperated_arguments, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_close, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bracket_content, 2), SHIFT_REPEAT(43),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__bracket_content, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 5),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 5),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_close, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_open, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_open, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_open, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_open, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [180] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
