#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 74
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_EQ = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_true = 7,
  anon_sym_false = 8,
  anon_sym_null = 9,
  aux_sym_numeric_lit_token1 = 10,
  anon_sym_DOT = 11,
  anon_sym_e = 12,
  anon_sym_E = 13,
  anon_sym_PLUS = 14,
  anon_sym_DASH = 15,
  anon_sym_DQUOTE = 16,
  aux_sym_string_lit_token1 = 17,
  sym_comment = 18,
  sym_config_file = 19,
  sym_body = 20,
  sym_attribute = 21,
  sym_block = 22,
  sym_expression = 23,
  sym_expr_term = 24,
  sym_literal_value = 25,
  sym_numeric_lit = 26,
  sym_variable_expr = 27,
  sym_string_lit = 28,
  sym_identifier = 29,
  aux_sym_body_repeat1 = 30,
  aux_sym_body_repeat2 = 31,
  aux_sym_block_repeat1 = 32,
  aux_sym_numeric_lit_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_null] = "null",
  [aux_sym_numeric_lit_token1] = "numeric_lit_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_e] = "e",
  [anon_sym_E] = "E",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_lit_token1] = "string_lit_token1",
  [sym_comment] = "comment",
  [sym_config_file] = "config_file",
  [sym_body] = "body",
  [sym_attribute] = "attribute",
  [sym_block] = "block",
  [sym_expression] = "expression",
  [sym_expr_term] = "expr_term",
  [sym_literal_value] = "literal_value",
  [sym_numeric_lit] = "numeric_lit",
  [sym_variable_expr] = "variable_expr",
  [sym_string_lit] = "string_lit",
  [sym_identifier] = "identifier",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_body_repeat2] = "body_repeat2",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_numeric_lit_repeat1] = "numeric_lit_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_null] = anon_sym_null,
  [aux_sym_numeric_lit_token1] = aux_sym_numeric_lit_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_E] = anon_sym_E,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_lit_token1] = aux_sym_string_lit_token1,
  [sym_comment] = sym_comment,
  [sym_config_file] = sym_config_file,
  [sym_body] = sym_body,
  [sym_attribute] = sym_attribute,
  [sym_block] = sym_block,
  [sym_expression] = sym_expression,
  [sym_expr_term] = sym_expr_term,
  [sym_literal_value] = sym_literal_value,
  [sym_numeric_lit] = sym_numeric_lit,
  [sym_variable_expr] = sym_variable_expr,
  [sym_string_lit] = sym_string_lit,
  [sym_identifier] = sym_identifier,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_body_repeat2] = aux_sym_body_repeat2,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_numeric_lit_repeat1] = aux_sym_numeric_lit_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_numeric_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_config_file] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_term] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_value] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_string_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_lit_repeat1] = {
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
      if (eof) ADVANCE(18);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '+') ADVANCE(36);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == 'E') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'E') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(51);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 16:
      if (eof) ADVANCE(18);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (lookahead == 'a') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (lookahead == 'e') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (lookahead == 'l') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (lookahead == 'l') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (lookahead == 'l') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (lookahead == 'r') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (lookahead == 's') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (lookahead == 'u') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (lookahead == 'u') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 17},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 16},
  [22] = {.lex_state = 16},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 16},
  [25] = {.lex_state = 16},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 16},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 16},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 16},
  [47] = {.lex_state = 16},
  [48] = {.lex_state = 16},
  [49] = {.lex_state = 16},
  [50] = {.lex_state = 16},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 16},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 16},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 17},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 17},
  [73] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [aux_sym_numeric_lit_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_config_file] = STATE(57),
    [sym_body] = STATE(73),
    [sym_attribute] = STATE(47),
    [sym_block] = STATE(47),
    [sym_identifier] = STATE(7),
    [aux_sym_body_repeat2] = STATE(11),
    [aux_sym_string_lit_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym_string_lit_token1,
    STATE(9), 1,
      aux_sym_numeric_lit_repeat1,
    STATE(48), 1,
      sym_expr_term,
    STATE(65), 1,
      sym_identifier,
    STATE(67), 1,
      sym_expression,
    STATE(66), 2,
      sym_literal_value,
      sym_variable_expr,
    STATE(68), 2,
      sym_numeric_lit,
      sym_string_lit,
    ACTIONS(9), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [41] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      aux_sym_string_lit_token1,
    STATE(16), 1,
      aux_sym_numeric_lit_repeat1,
    STATE(52), 1,
      sym_expr_term,
    STATE(54), 1,
      sym_identifier,
    STATE(63), 1,
      sym_expression,
    STATE(51), 2,
      sym_numeric_lit,
      sym_string_lit,
    STATE(53), 2,
      sym_literal_value,
      sym_variable_expr,
    ACTIONS(19), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [82] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      aux_sym_string_lit_token1,
    STATE(16), 1,
      aux_sym_numeric_lit_repeat1,
    STATE(52), 1,
      sym_expr_term,
    STATE(54), 1,
      sym_identifier,
    STATE(71), 1,
      sym_expression,
    STATE(51), 2,
      sym_numeric_lit,
      sym_string_lit,
    STATE(53), 2,
      sym_literal_value,
      sym_variable_expr,
    ACTIONS(19), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [123] = 9,
    ACTIONS(25), 1,
      aux_sym_string_lit_token1,
    ACTIONS(27), 1,
      anon_sym_LF,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      sym_comment,
    STATE(7), 1,
      sym_identifier,
    STATE(15), 1,
      aux_sym_body_repeat2,
    STATE(21), 1,
      aux_sym_body_repeat1,
    STATE(56), 1,
      sym_body,
    STATE(43), 2,
      sym_attribute,
      sym_block,
  [152] = 9,
    ACTIONS(25), 1,
      aux_sym_string_lit_token1,
    ACTIONS(27), 1,
      anon_sym_LF,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_identifier,
    STATE(15), 1,
      aux_sym_body_repeat2,
    STATE(21), 1,
      aux_sym_body_repeat1,
    STATE(61), 1,
      sym_body,
    STATE(43), 2,
      sym_attribute,
      sym_block,
  [181] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      aux_sym_string_lit_token1,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_EQ,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(13), 3,
      sym_string_lit,
      sym_identifier,
      aux_sym_block_repeat1,
  [202] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LF,
    ACTIONS(41), 1,
      aux_sym_numeric_lit_token1,
    STATE(8), 1,
      aux_sym_numeric_lit_repeat1,
    ACTIONS(44), 3,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [220] = 6,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_LF,
    ACTIONS(48), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(50), 1,
      anon_sym_DOT,
    STATE(8), 1,
      aux_sym_numeric_lit_repeat1,
    ACTIONS(52), 2,
      anon_sym_e,
      anon_sym_E,
  [240] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      aux_sym_numeric_lit_token1,
    STATE(10), 1,
      aux_sym_numeric_lit_repeat1,
    ACTIONS(39), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [256] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      aux_sym_string_lit_token1,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_identifier,
    STATE(14), 1,
      aux_sym_body_repeat2,
    STATE(47), 2,
      sym_attribute,
      sym_block,
  [276] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(64), 1,
      aux_sym_string_lit_token1,
    STATE(12), 3,
      sym_string_lit,
      sym_identifier,
      aux_sym_block_repeat1,
  [294] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      aux_sym_string_lit_token1,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    STATE(12), 3,
      sym_string_lit,
      sym_identifier,
      aux_sym_block_repeat1,
  [312] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      aux_sym_string_lit_token1,
    STATE(7), 1,
      sym_identifier,
    STATE(14), 1,
      aux_sym_body_repeat2,
    STATE(47), 2,
      sym_attribute,
      sym_block,
  [332] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      aux_sym_string_lit_token1,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_identifier,
    STATE(17), 1,
      aux_sym_body_repeat2,
    STATE(43), 2,
      sym_attribute,
      sym_block,
  [352] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_RPAREN,
    ACTIONS(74), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(76), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym_numeric_lit_repeat1,
    ACTIONS(78), 2,
      anon_sym_e,
      anon_sym_E,
  [372] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 1,
      aux_sym_string_lit_token1,
    STATE(7), 1,
      sym_identifier,
    STATE(17), 1,
      aux_sym_body_repeat2,
    STATE(43), 2,
      sym_attribute,
      sym_block,
  [392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 5,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      aux_sym_string_lit_token1,
  [403] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(48), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(82), 1,
      anon_sym_LF,
    STATE(8), 1,
      aux_sym_numeric_lit_repeat1,
    ACTIONS(84), 2,
      anon_sym_e,
      anon_sym_E,
  [420] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      aux_sym_numeric_lit_repeat1,
    ACTIONS(86), 2,
      anon_sym_e,
      anon_sym_E,
  [437] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LF,
    STATE(21), 1,
      aux_sym_body_repeat1,
    ACTIONS(91), 2,
      anon_sym_RBRACE,
      aux_sym_string_lit_token1,
  [451] = 4,
    ACTIONS(27), 1,
      anon_sym_LF,
    ACTIONS(31), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_body_repeat1,
    ACTIONS(93), 2,
      anon_sym_RBRACE,
      aux_sym_string_lit_token1,
  [465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_numeric_lit_token1,
    STATE(31), 1,
      aux_sym_numeric_lit_repeat1,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [479] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      aux_sym_string_lit_token1,
    ACTIONS(99), 1,
      anon_sym_LF,
    STATE(25), 1,
      aux_sym_body_repeat1,
  [495] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_string_lit_token1,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_LF,
    STATE(25), 1,
      aux_sym_body_repeat1,
  [511] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      aux_sym_numeric_lit_token1,
    STATE(34), 1,
      aux_sym_numeric_lit_repeat1,
    ACTIONS(108), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [525] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      aux_sym_numeric_lit_token1,
    STATE(30), 1,
      aux_sym_numeric_lit_repeat1,
    ACTIONS(112), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [539] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      aux_sym_numeric_lit_token1,
    STATE(37), 1,
      aux_sym_numeric_lit_repeat1,
    ACTIONS(116), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 4,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      aux_sym_string_lit_token1,
  [563] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      aux_sym_numeric_lit_repeat1,
  [576] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      aux_sym_numeric_lit_repeat1,
  [589] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(48), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(122), 1,
      anon_sym_LF,
    STATE(8), 1,
      aux_sym_numeric_lit_repeat1,
  [602] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      aux_sym_numeric_lit_repeat1,
  [615] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(48), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(82), 1,
      anon_sym_LF,
    STATE(8), 1,
      aux_sym_numeric_lit_repeat1,
  [628] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      aux_sym_numeric_lit_repeat1,
  [641] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(48), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      anon_sym_LF,
    STATE(8), 1,
      aux_sym_numeric_lit_repeat1,
  [654] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(48), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(120), 1,
      anon_sym_LF,
    STATE(8), 1,
      aux_sym_numeric_lit_repeat1,
  [667] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_LF,
    STATE(5), 1,
      aux_sym_body_repeat1,
  [677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      aux_sym_numeric_lit_token1,
    STATE(36), 1,
      aux_sym_numeric_lit_repeat1,
  [687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      aux_sym_numeric_lit_token1,
    STATE(32), 1,
      aux_sym_numeric_lit_repeat1,
  [697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_numeric_lit_token1,
    STATE(33), 1,
      aux_sym_numeric_lit_repeat1,
  [707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_numeric_lit_token1,
    STATE(19), 1,
      aux_sym_numeric_lit_repeat1,
  [717] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_LF,
    STATE(22), 1,
      aux_sym_body_repeat1,
  [727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      aux_sym_numeric_lit_token1,
    STATE(20), 1,
      aux_sym_numeric_lit_repeat1,
  [737] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym_numeric_lit_token1,
    STATE(35), 1,
      aux_sym_numeric_lit_repeat1,
  [747] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_LF,
    STATE(6), 1,
      aux_sym_body_repeat1,
  [757] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_LF,
    STATE(24), 1,
      aux_sym_body_repeat1,
  [767] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_LF,
  [774] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_LF,
  [781] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_LF,
  [788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
  [795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
  [802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
  [809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
  [816] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LF,
  [823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
  [830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
  [837] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LF,
  [844] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_LF,
  [851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
  [858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
  [865] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LF,
  [872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
  [879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
  [886] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LF,
  [893] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_LF,
  [900] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_LF,
  [907] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_LF,
  [914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      aux_sym_string_lit_token1,
  [921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_DQUOTE,
  [928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
  [935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      aux_sym_string_lit_token1,
  [942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 152,
  [SMALL_STATE(7)] = 181,
  [SMALL_STATE(8)] = 202,
  [SMALL_STATE(9)] = 220,
  [SMALL_STATE(10)] = 240,
  [SMALL_STATE(11)] = 256,
  [SMALL_STATE(12)] = 276,
  [SMALL_STATE(13)] = 294,
  [SMALL_STATE(14)] = 312,
  [SMALL_STATE(15)] = 332,
  [SMALL_STATE(16)] = 352,
  [SMALL_STATE(17)] = 372,
  [SMALL_STATE(18)] = 392,
  [SMALL_STATE(19)] = 403,
  [SMALL_STATE(20)] = 420,
  [SMALL_STATE(21)] = 437,
  [SMALL_STATE(22)] = 451,
  [SMALL_STATE(23)] = 465,
  [SMALL_STATE(24)] = 479,
  [SMALL_STATE(25)] = 495,
  [SMALL_STATE(26)] = 511,
  [SMALL_STATE(27)] = 525,
  [SMALL_STATE(28)] = 539,
  [SMALL_STATE(29)] = 553,
  [SMALL_STATE(30)] = 563,
  [SMALL_STATE(31)] = 576,
  [SMALL_STATE(32)] = 589,
  [SMALL_STATE(33)] = 602,
  [SMALL_STATE(34)] = 615,
  [SMALL_STATE(35)] = 628,
  [SMALL_STATE(36)] = 641,
  [SMALL_STATE(37)] = 654,
  [SMALL_STATE(38)] = 667,
  [SMALL_STATE(39)] = 677,
  [SMALL_STATE(40)] = 687,
  [SMALL_STATE(41)] = 697,
  [SMALL_STATE(42)] = 707,
  [SMALL_STATE(43)] = 717,
  [SMALL_STATE(44)] = 727,
  [SMALL_STATE(45)] = 737,
  [SMALL_STATE(46)] = 747,
  [SMALL_STATE(47)] = 757,
  [SMALL_STATE(48)] = 767,
  [SMALL_STATE(49)] = 774,
  [SMALL_STATE(50)] = 781,
  [SMALL_STATE(51)] = 788,
  [SMALL_STATE(52)] = 795,
  [SMALL_STATE(53)] = 802,
  [SMALL_STATE(54)] = 809,
  [SMALL_STATE(55)] = 816,
  [SMALL_STATE(56)] = 823,
  [SMALL_STATE(57)] = 830,
  [SMALL_STATE(58)] = 837,
  [SMALL_STATE(59)] = 844,
  [SMALL_STATE(60)] = 851,
  [SMALL_STATE(61)] = 858,
  [SMALL_STATE(62)] = 865,
  [SMALL_STATE(63)] = 872,
  [SMALL_STATE(64)] = 879,
  [SMALL_STATE(65)] = 886,
  [SMALL_STATE(66)] = 893,
  [SMALL_STATE(67)] = 900,
  [SMALL_STATE(68)] = 907,
  [SMALL_STATE(69)] = 914,
  [SMALL_STATE(70)] = 921,
  [SMALL_STATE(71)] = 928,
  [SMALL_STATE(72)] = 935,
  [SMALL_STATE(73)] = 942,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_lit_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_lit_repeat1, 2), SHIFT_REPEAT(8),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_lit_repeat1, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_lit, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_lit_repeat1, 2), SHIFT_REPEAT(10),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(69),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(18),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat2, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat2, 2), SHIFT_REPEAT(18),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_lit, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(21),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat2, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(25),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_lit, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_lit, 5),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_lit, 6),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_lit, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 6),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_value, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expr, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [160] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hcl(void) {
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
