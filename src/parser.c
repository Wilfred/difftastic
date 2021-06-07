#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_EQ = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_true = 6,
  anon_sym_false = 7,
  anon_sym_null = 8,
  sym_numeric_lit = 9,
  anon_sym_DQUOTE = 10,
  aux_sym_string_lit_token1 = 11,
  sym_comment = 12,
  sym_config_file = 13,
  sym_body = 14,
  sym_attribute = 15,
  sym_block = 16,
  sym_expression = 17,
  sym_expr_term = 18,
  sym_literal_value = 19,
  sym_variable_expr = 20,
  sym_string_lit = 21,
  sym_identifier = 22,
  aux_sym_body_repeat1 = 23,
  aux_sym_block_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_null] = "null",
  [sym_numeric_lit] = "numeric_lit",
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
  [sym_variable_expr] = "variable_expr",
  [sym_string_lit] = "string_lit",
  [sym_identifier] = "identifier",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_null] = anon_sym_null,
  [sym_numeric_lit] = sym_numeric_lit,
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
  [sym_variable_expr] = sym_variable_expr,
  [sym_string_lit] = sym_string_lit,
  [sym_identifier] = sym_identifier,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [sym_numeric_lit] = {
    .visible = true,
    .named = true,
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
  [aux_sym_block_repeat1] = {
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
      if (eof) ADVANCE(8);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(33);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_numeric_lit);
      if (lookahead == '.') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_numeric_lit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_numeric_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (lookahead == 'a') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (lookahead == 'l') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (lookahead == 'l') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (lookahead == 'l') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (lookahead == 'r') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (lookahead == 's') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (lookahead == 'u') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (lookahead == 'u') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
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
    [sym_numeric_lit] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_lit_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_config_file] = STATE(25),
    [sym_body] = STATE(22),
    [sym_attribute] = STATE(6),
    [sym_block] = STATE(6),
    [sym_identifier] = STATE(5),
    [aux_sym_body_repeat1] = STATE(6),
    [aux_sym_string_lit_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_expression] = STATE(18),
    [sym_expr_term] = STATE(14),
    [sym_literal_value] = STATE(15),
    [sym_variable_expr] = STATE(15),
    [sym_string_lit] = STATE(16),
    [sym_identifier] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(9),
    [sym_numeric_lit] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [aux_sym_string_lit_token1] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_expression] = STATE(27),
    [sym_expr_term] = STATE(14),
    [sym_literal_value] = STATE(15),
    [sym_variable_expr] = STATE(15),
    [sym_string_lit] = STATE(16),
    [sym_identifier] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(9),
    [sym_numeric_lit] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [aux_sym_string_lit_token1] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      aux_sym_string_lit_token1,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_identifier,
    STATE(28), 1,
      sym_body,
    STATE(6), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [21] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      aux_sym_string_lit_token1,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_EQ,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(12), 3,
      sym_string_lit,
      sym_identifier,
      aux_sym_block_repeat1,
  [42] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      aux_sym_string_lit_token1,
    STATE(5), 1,
      sym_identifier,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(8), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [61] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      aux_sym_string_lit_token1,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_identifier,
    STATE(23), 1,
      sym_body,
    STATE(6), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [82] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      aux_sym_string_lit_token1,
    STATE(5), 1,
      sym_identifier,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(8), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      aux_sym_string_lit_token1,
  [114] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      anon_sym_LBRACE,
    ACTIONS(34), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      aux_sym_string_lit_token1,
    STATE(10), 3,
      sym_string_lit,
      sym_identifier,
      aux_sym_block_repeat1,
  [132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      aux_sym_string_lit_token1,
  [144] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      aux_sym_string_lit_token1,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    STATE(10), 3,
      sym_string_lit,
      sym_identifier,
      aux_sym_block_repeat1,
  [162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      aux_sym_string_lit_token1,
  [172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      aux_sym_string_lit_token1,
  [182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      aux_sym_string_lit_token1,
  [192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      aux_sym_string_lit_token1,
  [202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      aux_sym_string_lit_token1,
  [212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_string_lit_token1,
  [221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_string_lit_token1,
  [230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_string_lit_token1,
  [239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_string_lit_token1,
  [248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
  [255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
  [262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_DQUOTE,
  [269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
  [276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      aux_sym_string_lit_token1,
  [283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_RPAREN,
  [290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 21,
  [SMALL_STATE(6)] = 42,
  [SMALL_STATE(7)] = 61,
  [SMALL_STATE(8)] = 82,
  [SMALL_STATE(9)] = 101,
  [SMALL_STATE(10)] = 114,
  [SMALL_STATE(11)] = 132,
  [SMALL_STATE(12)] = 144,
  [SMALL_STATE(13)] = 162,
  [SMALL_STATE(14)] = 172,
  [SMALL_STATE(15)] = 182,
  [SMALL_STATE(16)] = 192,
  [SMALL_STATE(17)] = 202,
  [SMALL_STATE(18)] = 212,
  [SMALL_STATE(19)] = 221,
  [SMALL_STATE(20)] = 230,
  [SMALL_STATE(21)] = 239,
  [SMALL_STATE(22)] = 248,
  [SMALL_STATE(23)] = 255,
  [SMALL_STATE(24)] = 262,
  [SMALL_STATE(25)] = 269,
  [SMALL_STATE(26)] = 276,
  [SMALL_STATE(27)] = 283,
  [SMALL_STATE(28)] = 290,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(9),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(26),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(9),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_lit, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expr, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_value, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [66] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
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
