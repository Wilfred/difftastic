#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
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
  anon_sym_LBRACK = 9,
  anon_sym_EQ = 10,
  aux_sym__bracket_content_token1 = 11,
  anon_sym_RBRACK = 12,
  anon_sym_DQUOTE = 13,
  aux_sym__quoted_element_token1 = 14,
  anon_sym_BSLASH = 15,
  aux_sym_unquoted_argument_token1 = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  sym_source_file = 19,
  sym_line_ending = 20,
  sym_seperation = 21,
  sym_escape_sequence = 22,
  sym__escape_encoded = 23,
  sym_argument = 24,
  sym_bracket_argument = 25,
  sym__bracket_open = 26,
  aux_sym__bracket_content = 27,
  sym__bracket_close = 28,
  sym_quoted_argument = 29,
  sym__quoted_element = 30,
  sym_unquoted_argument = 31,
  sym_arguments = 32,
  sym__seperated_arguments = 33,
  sym_command_invocation = 34,
  aux_sym_source_file_repeat1 = 35,
  aux_sym__bracket_open_repeat1 = 36,
  aux_sym_quoted_argument_repeat1 = 37,
  aux_sym_unquoted_argument_repeat1 = 38,
  aux_sym_arguments_repeat1 = 39,
  aux_sym__seperated_arguments_repeat1 = 40,
  aux_sym_command_invocation_repeat1 = 41,
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_EQ] = "=",
  [aux_sym__bracket_content_token1] = "_bracket_content_token1",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__quoted_element_token1] = "_quoted_element_token1",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_unquoted_argument_token1] = "unquoted_argument_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_source_file] = "source_file",
  [sym_line_ending] = "line_ending",
  [sym_seperation] = "seperation",
  [sym_escape_sequence] = "escape_sequence",
  [sym__escape_encoded] = "_escape_encoded",
  [sym_argument] = "argument",
  [sym_bracket_argument] = "bracket_argument",
  [sym__bracket_open] = "_bracket_open",
  [aux_sym__bracket_content] = "_bracket_content",
  [sym__bracket_close] = "_bracket_close",
  [sym_quoted_argument] = "quoted_argument",
  [sym__quoted_element] = "_quoted_element",
  [sym_unquoted_argument] = "unquoted_argument",
  [sym_arguments] = "arguments",
  [sym__seperated_arguments] = "_seperated_arguments",
  [sym_command_invocation] = "command_invocation",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__bracket_open_repeat1] = "_bracket_open_repeat1",
  [aux_sym_quoted_argument_repeat1] = "quoted_argument_repeat1",
  [aux_sym_unquoted_argument_repeat1] = "unquoted_argument_repeat1",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym__bracket_content_token1] = aux_sym__bracket_content_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__quoted_element_token1] = aux_sym__quoted_element_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_unquoted_argument_token1] = aux_sym_unquoted_argument_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_source_file] = sym_source_file,
  [sym_line_ending] = sym_line_ending,
  [sym_seperation] = sym_seperation,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__escape_encoded] = sym__escape_encoded,
  [sym_argument] = sym_argument,
  [sym_bracket_argument] = sym_bracket_argument,
  [sym__bracket_open] = sym__bracket_open,
  [aux_sym__bracket_content] = aux_sym__bracket_content,
  [sym__bracket_close] = sym__bracket_close,
  [sym_quoted_argument] = sym_quoted_argument,
  [sym__quoted_element] = sym__quoted_element,
  [sym_unquoted_argument] = sym_unquoted_argument,
  [sym_arguments] = sym_arguments,
  [sym__seperated_arguments] = sym__seperated_arguments,
  [sym_command_invocation] = sym_command_invocation,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__bracket_open_repeat1] = aux_sym__bracket_open_repeat1,
  [aux_sym_quoted_argument_repeat1] = aux_sym_quoted_argument_repeat1,
  [aux_sym_unquoted_argument_repeat1] = aux_sym_unquoted_argument_repeat1,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quoted_element_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_unquoted_argument_token1] = {
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
  [sym_quoted_argument] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_element] = {
    .visible = false,
    .named = true,
  },
  [sym_unquoted_argument] = {
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
  [aux_sym__bracket_open_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_argument_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_argument_repeat1] = {
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
      if (eof) ADVANCE(9);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == ']') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(10);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(33);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(11);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(33);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') SKIP(3)
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == ']') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(19);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\t') ADVANCE(10);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\t') ADVANCE(11);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\t') ADVANCE(10);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\t') ADVANCE(11);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__escape_identity);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__escape_semicolon);
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
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym__quoted_element_token1);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym__quoted_element_token1);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(30);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(19);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(10);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(33);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(11);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(33);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 0},
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(62),
    [sym_command_invocation] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(26),
    [aux_sym_command_invocation_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_space] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
  [2] = {
    [sym_line_ending] = STATE(16),
    [sym_seperation] = STATE(9),
    [sym_escape_sequence] = STATE(14),
    [sym__escape_encoded] = STATE(17),
    [sym_argument] = STATE(19),
    [sym_bracket_argument] = STATE(45),
    [sym__bracket_open] = STATE(31),
    [sym_quoted_argument] = STATE(45),
    [sym_unquoted_argument] = STATE(45),
    [sym_arguments] = STATE(60),
    [aux_sym_unquoted_argument_repeat1] = STATE(14),
    [aux_sym__seperated_arguments_repeat1] = STATE(9),
    [sym_space] = ACTIONS(9),
    [sym_newline] = ACTIONS(11),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_unquoted_argument_token1] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(21),
  },
  [3] = {
    [sym_line_ending] = STATE(16),
    [sym_seperation] = STATE(9),
    [sym_escape_sequence] = STATE(14),
    [sym__escape_encoded] = STATE(17),
    [sym_argument] = STATE(19),
    [sym_bracket_argument] = STATE(45),
    [sym__bracket_open] = STATE(31),
    [sym_quoted_argument] = STATE(45),
    [sym_unquoted_argument] = STATE(45),
    [sym_arguments] = STATE(58),
    [aux_sym_unquoted_argument_repeat1] = STATE(14),
    [aux_sym__seperated_arguments_repeat1] = STATE(9),
    [sym_space] = ACTIONS(9),
    [sym_newline] = ACTIONS(11),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_unquoted_argument_token1] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(23),
  },
  [4] = {
    [sym_line_ending] = STATE(16),
    [sym_seperation] = STATE(2),
    [sym_escape_sequence] = STATE(14),
    [sym__escape_encoded] = STATE(17),
    [sym_argument] = STATE(19),
    [sym_bracket_argument] = STATE(45),
    [sym__bracket_open] = STATE(31),
    [sym_quoted_argument] = STATE(45),
    [sym_unquoted_argument] = STATE(45),
    [sym_arguments] = STATE(59),
    [aux_sym_unquoted_argument_repeat1] = STATE(14),
    [aux_sym__seperated_arguments_repeat1] = STATE(2),
    [sym_space] = ACTIONS(9),
    [sym_newline] = ACTIONS(11),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_unquoted_argument_token1] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(25),
  },
  [5] = {
    [sym_line_ending] = STATE(16),
    [sym_seperation] = STATE(3),
    [sym_escape_sequence] = STATE(14),
    [sym__escape_encoded] = STATE(17),
    [sym_argument] = STATE(19),
    [sym_bracket_argument] = STATE(45),
    [sym__bracket_open] = STATE(31),
    [sym_quoted_argument] = STATE(45),
    [sym_unquoted_argument] = STATE(45),
    [sym_arguments] = STATE(57),
    [aux_sym_unquoted_argument_repeat1] = STATE(14),
    [aux_sym__seperated_arguments_repeat1] = STATE(3),
    [sym_space] = ACTIONS(9),
    [sym_newline] = ACTIONS(11),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_unquoted_argument_token1] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(27),
  },
  [6] = {
    [sym_line_ending] = STATE(16),
    [sym_seperation] = STATE(9),
    [sym_escape_sequence] = STATE(14),
    [sym__escape_encoded] = STATE(17),
    [sym_argument] = STATE(19),
    [sym_bracket_argument] = STATE(45),
    [sym__bracket_open] = STATE(31),
    [sym_quoted_argument] = STATE(45),
    [sym_unquoted_argument] = STATE(45),
    [sym_arguments] = STATE(57),
    [aux_sym_unquoted_argument_repeat1] = STATE(14),
    [aux_sym__seperated_arguments_repeat1] = STATE(9),
    [sym_space] = ACTIONS(9),
    [sym_newline] = ACTIONS(11),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_unquoted_argument_token1] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(27),
  },
  [7] = {
    [sym_line_ending] = STATE(16),
    [sym_seperation] = STATE(6),
    [sym_escape_sequence] = STATE(14),
    [sym__escape_encoded] = STATE(17),
    [sym_argument] = STATE(19),
    [sym_bracket_argument] = STATE(45),
    [sym__bracket_open] = STATE(31),
    [sym_quoted_argument] = STATE(45),
    [sym_unquoted_argument] = STATE(45),
    [sym_arguments] = STATE(60),
    [aux_sym_unquoted_argument_repeat1] = STATE(14),
    [aux_sym__seperated_arguments_repeat1] = STATE(6),
    [sym_space] = ACTIONS(9),
    [sym_newline] = ACTIONS(11),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_unquoted_argument_token1] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(21),
  },
  [8] = {
    [sym_line_ending] = STATE(16),
    [sym_seperation] = STATE(9),
    [sym_escape_sequence] = STATE(14),
    [sym__escape_encoded] = STATE(17),
    [sym_argument] = STATE(47),
    [sym_bracket_argument] = STATE(45),
    [sym__bracket_open] = STATE(31),
    [sym_quoted_argument] = STATE(45),
    [sym_unquoted_argument] = STATE(45),
    [aux_sym_unquoted_argument_repeat1] = STATE(14),
    [aux_sym__seperated_arguments_repeat1] = STATE(9),
    [sym_space] = ACTIONS(29),
    [sym_newline] = ACTIONS(29),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_unquoted_argument_token1] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(29),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(31), 1,
      sym_space,
    ACTIONS(34), 1,
      sym_newline,
    STATE(16), 1,
      sym_line_ending,
    STATE(9), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    ACTIONS(37), 9,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_unquoted_argument_token1,
      anon_sym_RPAREN,
  [25] = 6,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      aux_sym__quoted_element_token1,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(21), 1,
      sym__escape_encoded,
    STATE(10), 3,
      sym_escape_sequence,
      sym__quoted_element,
      aux_sym_quoted_argument_repeat1,
    ACTIONS(39), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [50] = 5,
    ACTIONS(55), 1,
      aux_sym_unquoted_argument_token1,
    STATE(17), 1,
      sym__escape_encoded,
    STATE(11), 2,
      sym_escape_sequence,
      aux_sym_unquoted_argument_repeat1,
    ACTIONS(50), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
    ACTIONS(52), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [73] = 6,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      aux_sym__quoted_element_token1,
    ACTIONS(64), 1,
      anon_sym_BSLASH,
    STATE(21), 1,
      sym__escape_encoded,
    STATE(13), 3,
      sym_escape_sequence,
      sym__quoted_element,
      aux_sym_quoted_argument_repeat1,
    ACTIONS(58), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [98] = 6,
    ACTIONS(64), 1,
      anon_sym_BSLASH,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(68), 1,
      aux_sym__quoted_element_token1,
    STATE(21), 1,
      sym__escape_encoded,
    STATE(10), 3,
      sym_escape_sequence,
      sym__quoted_element,
      aux_sym_quoted_argument_repeat1,
    ACTIONS(58), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [123] = 5,
    ACTIONS(72), 1,
      aux_sym_unquoted_argument_token1,
    STATE(17), 1,
      sym__escape_encoded,
    STATE(11), 2,
      sym_escape_sequence,
      aux_sym_unquoted_argument_repeat1,
    ACTIONS(70), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
    ACTIONS(13), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [146] = 1,
    ACTIONS(74), 11,
      sym_space,
      sym_newline,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_unquoted_argument_token1,
      anon_sym_RPAREN,
  [160] = 1,
    ACTIONS(76), 11,
      sym_space,
      sym_newline,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_unquoted_argument_token1,
      anon_sym_RPAREN,
  [174] = 1,
    ACTIONS(78), 9,
      sym_space,
      sym_newline,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      aux_sym_unquoted_argument_token1,
      anon_sym_RPAREN,
  [186] = 6,
    ACTIONS(80), 1,
      sym_space,
    ACTIONS(83), 1,
      sym_newline,
    ACTIONS(86), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym_line_ending,
    STATE(8), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(18), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [207] = 6,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym_line_ending,
    STATE(8), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(22), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [228] = 1,
    ACTIONS(90), 8,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DQUOTE,
      aux_sym__quoted_element_token1,
      anon_sym_BSLASH,
  [239] = 1,
    ACTIONS(78), 8,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DQUOTE,
      aux_sym__quoted_element_token1,
      anon_sym_BSLASH,
  [250] = 6,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym_line_ending,
    STATE(8), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(18), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [271] = 5,
    ACTIONS(94), 1,
      sym_space,
    ACTIONS(96), 1,
      sym_newline,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      sym_line_ending,
    STATE(24), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
  [288] = 5,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      sym_space,
    ACTIONS(103), 1,
      sym_newline,
    STATE(53), 1,
      sym_line_ending,
    STATE(24), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
  [305] = 5,
    ACTIONS(94), 1,
      sym_space,
    ACTIONS(96), 1,
      sym_newline,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      sym_line_ending,
    STATE(24), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
  [322] = 5,
    ACTIONS(5), 1,
      sym_space,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    STATE(40), 1,
      aux_sym_command_invocation_repeat1,
    STATE(27), 2,
      sym_command_invocation,
      aux_sym_source_file_repeat1,
  [339] = 5,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      sym_space,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(40), 1,
      aux_sym_command_invocation_repeat1,
    STATE(27), 2,
      sym_command_invocation,
      aux_sym_source_file_repeat1,
  [356] = 5,
    ACTIONS(94), 1,
      sym_space,
    ACTIONS(96), 1,
      sym_newline,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      sym_line_ending,
    STATE(25), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
  [373] = 5,
    ACTIONS(94), 1,
      sym_space,
    ACTIONS(96), 1,
      sym_newline,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      sym_line_ending,
    STATE(23), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
  [390] = 4,
    ACTIONS(120), 1,
      aux_sym__bracket_content_token1,
    ACTIONS(122), 1,
      anon_sym_RBRACK,
    STATE(50), 1,
      aux_sym__bracket_content,
    STATE(51), 1,
      sym__bracket_close,
  [403] = 4,
    ACTIONS(122), 1,
      anon_sym_RBRACK,
    ACTIONS(124), 1,
      aux_sym__bracket_content_token1,
    STATE(30), 1,
      aux_sym__bracket_content,
    STATE(35), 1,
      sym__bracket_close,
  [416] = 3,
    ACTIONS(128), 1,
      anon_sym_EQ,
    STATE(32), 1,
      aux_sym__bracket_open_repeat1,
    ACTIONS(126), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [427] = 3,
    ACTIONS(131), 1,
      sym_space,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(33), 1,
      aux_sym_command_invocation_repeat1,
  [437] = 1,
    ACTIONS(136), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [443] = 1,
    ACTIONS(138), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [449] = 2,
    ACTIONS(142), 1,
      sym_identifier,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      sym_space,
  [457] = 2,
    ACTIONS(146), 1,
      sym_identifier,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      sym_space,
  [465] = 2,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      sym_space,
  [473] = 2,
    ACTIONS(154), 1,
      sym_identifier,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      sym_space,
  [481] = 3,
    ACTIONS(156), 1,
      sym_space,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(33), 1,
      aux_sym_command_invocation_repeat1,
  [491] = 3,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 1,
      anon_sym_EQ,
    STATE(43), 1,
      aux_sym__bracket_open_repeat1,
  [501] = 1,
    ACTIONS(164), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [507] = 3,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(168), 1,
      anon_sym_EQ,
    STATE(32), 1,
      aux_sym__bracket_open_repeat1,
  [517] = 3,
    ACTIONS(170), 1,
      anon_sym_EQ,
    ACTIONS(172), 1,
      anon_sym_RBRACK,
    STATE(49), 1,
      aux_sym__bracket_open_repeat1,
  [527] = 1,
    ACTIONS(174), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [533] = 1,
    ACTIONS(74), 3,
      sym_space,
      sym_newline,
      anon_sym_LPAREN,
  [539] = 1,
    ACTIONS(176), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [545] = 1,
    ACTIONS(178), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [551] = 3,
    ACTIONS(168), 1,
      anon_sym_EQ,
    ACTIONS(180), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      aux_sym__bracket_open_repeat1,
  [561] = 3,
    ACTIONS(182), 1,
      aux_sym__bracket_content_token1,
    ACTIONS(185), 1,
      anon_sym_RBRACK,
    STATE(50), 1,
      aux_sym__bracket_content,
  [571] = 1,
    ACTIONS(187), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [577] = 2,
    ACTIONS(191), 1,
      sym_identifier,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      sym_space,
  [585] = 1,
    ACTIONS(76), 3,
      sym_space,
      sym_newline,
      anon_sym_LPAREN,
  [591] = 1,
    ACTIONS(193), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [597] = 2,
    ACTIONS(195), 1,
      aux_sym__bracket_content_token1,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
  [604] = 2,
    ACTIONS(199), 1,
      aux_sym__bracket_content_token1,
    ACTIONS(201), 1,
      anon_sym_RBRACK,
  [611] = 1,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
  [615] = 1,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
  [619] = 1,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
  [623] = 1,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
  [627] = 1,
    ACTIONS(211), 1,
      sym_newline,
  [631] = 1,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 25,
  [SMALL_STATE(11)] = 50,
  [SMALL_STATE(12)] = 73,
  [SMALL_STATE(13)] = 98,
  [SMALL_STATE(14)] = 123,
  [SMALL_STATE(15)] = 146,
  [SMALL_STATE(16)] = 160,
  [SMALL_STATE(17)] = 174,
  [SMALL_STATE(18)] = 186,
  [SMALL_STATE(19)] = 207,
  [SMALL_STATE(20)] = 228,
  [SMALL_STATE(21)] = 239,
  [SMALL_STATE(22)] = 250,
  [SMALL_STATE(23)] = 271,
  [SMALL_STATE(24)] = 288,
  [SMALL_STATE(25)] = 305,
  [SMALL_STATE(26)] = 322,
  [SMALL_STATE(27)] = 339,
  [SMALL_STATE(28)] = 356,
  [SMALL_STATE(29)] = 373,
  [SMALL_STATE(30)] = 390,
  [SMALL_STATE(31)] = 403,
  [SMALL_STATE(32)] = 416,
  [SMALL_STATE(33)] = 427,
  [SMALL_STATE(34)] = 437,
  [SMALL_STATE(35)] = 443,
  [SMALL_STATE(36)] = 449,
  [SMALL_STATE(37)] = 457,
  [SMALL_STATE(38)] = 465,
  [SMALL_STATE(39)] = 473,
  [SMALL_STATE(40)] = 481,
  [SMALL_STATE(41)] = 491,
  [SMALL_STATE(42)] = 501,
  [SMALL_STATE(43)] = 507,
  [SMALL_STATE(44)] = 517,
  [SMALL_STATE(45)] = 527,
  [SMALL_STATE(46)] = 533,
  [SMALL_STATE(47)] = 539,
  [SMALL_STATE(48)] = 545,
  [SMALL_STATE(49)] = 551,
  [SMALL_STATE(50)] = 561,
  [SMALL_STATE(51)] = 571,
  [SMALL_STATE(52)] = 577,
  [SMALL_STATE(53)] = 585,
  [SMALL_STATE(54)] = 591,
  [SMALL_STATE(55)] = 597,
  [SMALL_STATE(56)] = 604,
  [SMALL_STATE(57)] = 611,
  [SMALL_STATE(58)] = 615,
  [SMALL_STATE(59)] = 619,
  [SMALL_STATE(60)] = 623,
  [SMALL_STATE(61)] = 627,
  [SMALL_STATE(62)] = 631,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__seperated_arguments, 1),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(16),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(15),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_argument_repeat1, 2), SHIFT_REPEAT(21),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_argument_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_argument_repeat1, 2), SHIFT_REPEAT(10),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_argument_repeat1, 2), SHIFT_REPEAT(61),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(17),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(11),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_argument, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_ending, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_seperation, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(16),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(15),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_element, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(53),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(46),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bracket_open_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bracket_open_repeat1, 2), SHIFT_REPEAT(32),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_invocation_repeat1, 2), SHIFT_REPEAT(33),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_invocation_repeat1, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_argument, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 4),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 6),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 6),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 7),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 7),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_argument, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__seperated_arguments, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_close, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bracket_content, 2), SHIFT_REPEAT(50),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__bracket_content, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 5),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 5),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_close, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_open, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_open, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_open, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_open, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [213] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
