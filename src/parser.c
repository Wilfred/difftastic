#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_SEMI = 1,
  aux_sym_create_domain_statement_token1 = 2,
  aux_sym_create_domain_statement_token2 = 3,
  aux_sym_create_type_statement_token1 = 4,
  aux_sym_create_index_statement_token1 = 5,
  aux_sym_create_index_statement_token2 = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  aux_sym_select_statement_token1 = 9,
  anon_sym_COMMA = 10,
  aux_sym_constraint_token1 = 11,
  aux_sym_constraint_token2 = 12,
  aux_sym_constraint_token3 = 13,
  sym_number = 14,
  sym_identifier = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  sym_source_file = 18,
  sym__statement = 19,
  sym_create_domain_statement = 20,
  sym_create_type_statement = 21,
  sym_create_index_statement = 22,
  sym_select_statement = 23,
  sym_select_clause = 24,
  sym_constraint = 25,
  sym_parameter = 26,
  sym_parameters = 27,
  sym_data_type = 28,
  sym_expression = 29,
  aux_sym_source_file_repeat1 = 30,
  aux_sym_select_clause_repeat1 = 31,
  aux_sym_parameters_repeat1 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_create_domain_statement_token1] = "create_domain_statement_token1",
  [aux_sym_create_domain_statement_token2] = "create_domain_statement_token2",
  [aux_sym_create_type_statement_token1] = "create_type_statement_token1",
  [aux_sym_create_index_statement_token1] = "create_index_statement_token1",
  [aux_sym_create_index_statement_token2] = "create_index_statement_token2",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_select_statement_token1] = "select_statement_token1",
  [anon_sym_COMMA] = ",",
  [aux_sym_constraint_token1] = "constraint_token1",
  [aux_sym_constraint_token2] = "constraint_token2",
  [aux_sym_constraint_token3] = "constraint_token3",
  [sym_number] = "number",
  [sym_identifier] = "identifier",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_create_domain_statement] = "create_domain_statement",
  [sym_create_type_statement] = "create_type_statement",
  [sym_create_index_statement] = "create_index_statement",
  [sym_select_statement] = "select_statement",
  [sym_select_clause] = "select_clause",
  [sym_constraint] = "constraint",
  [sym_parameter] = "parameter",
  [sym_parameters] = "parameters",
  [sym_data_type] = "data_type",
  [sym_expression] = "expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_select_clause_repeat1] = "select_clause_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_create_domain_statement_token1] = aux_sym_create_domain_statement_token1,
  [aux_sym_create_domain_statement_token2] = aux_sym_create_domain_statement_token2,
  [aux_sym_create_type_statement_token1] = aux_sym_create_type_statement_token1,
  [aux_sym_create_index_statement_token1] = aux_sym_create_index_statement_token1,
  [aux_sym_create_index_statement_token2] = aux_sym_create_index_statement_token2,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_select_statement_token1] = aux_sym_select_statement_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_constraint_token1] = aux_sym_constraint_token1,
  [aux_sym_constraint_token2] = aux_sym_constraint_token2,
  [aux_sym_constraint_token3] = aux_sym_constraint_token3,
  [sym_number] = sym_number,
  [sym_identifier] = sym_identifier,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_create_domain_statement] = sym_create_domain_statement,
  [sym_create_type_statement] = sym_create_type_statement,
  [sym_create_index_statement] = sym_create_index_statement,
  [sym_select_statement] = sym_select_statement,
  [sym_select_clause] = sym_select_clause,
  [sym_constraint] = sym_constraint,
  [sym_parameter] = sym_parameter,
  [sym_parameters] = sym_parameters,
  [sym_data_type] = sym_data_type,
  [sym_expression] = sym_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_select_clause_repeat1] = aux_sym_select_clause_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_domain_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_create_domain_statement_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_create_type_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_create_index_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_create_index_statement_token2] = {
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
  [aux_sym_select_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_constraint_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constraint_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constraint_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_create_domain_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_create_type_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_create_index_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_select_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_select_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_data_type] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_select_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
  field_table = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_table] = "table",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
    {field_table, 3},
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
      if (eof) ADVANCE(42);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == ';') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(32);
      if (lookahead == 'C') ADVANCE(16);
      if (lookahead == 'N') ADVANCE(29);
      if (lookahead == 'O') ADVANCE(25);
      if (lookahead == 'S') ADVANCE(13);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == ']') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == 'C') ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == 'C') ADVANCE(34);
      END_STATE();
    case 7:
      if (lookahead == 'D') ADVANCE(30);
      if (lookahead == 'I') ADVANCE(27);
      if (lookahead == 'T') ADVANCE(38);
      END_STATE();
    case 8:
      if (lookahead == 'D') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(5);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(4);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(46);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(6);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(1);
      END_STATE();
    case 16:
      if (lookahead == 'H') ADVANCE(9);
      if (lookahead == 'R') ADVANCE(10);
      END_STATE();
    case 17:
      if (lookahead == 'I') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == 'K') ADVANCE(56);
      END_STATE();
    case 19:
      if (lookahead == 'L') ADVANCE(55);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(54);
      END_STATE();
    case 21:
      if (lookahead == 'L') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'L') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == 'L') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == 'M') ADVANCE(3);
      END_STATE();
    case 25:
      if (lookahead == 'N') ADVANCE(48);
      END_STATE();
    case 26:
      if (lookahead == 'N') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == 'N') ADVANCE(8);
      END_STATE();
    case 28:
      if (lookahead == 'N') ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == 'O') ADVANCE(33);
      if (lookahead == 'U') ADVANCE(21);
      END_STATE();
    case 30:
      if (lookahead == 'O') ADVANCE(24);
      END_STATE();
    case 31:
      if (lookahead == 'P') ADVANCE(12);
      END_STATE();
    case 32:
      if (lookahead == 'S') ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == 'T') ADVANCE(2);
      END_STATE();
    case 34:
      if (lookahead == 'T') ADVANCE(51);
      END_STATE();
    case 35:
      if (lookahead == 'T') ADVANCE(15);
      END_STATE();
    case 36:
      if (lookahead == 'U') ADVANCE(23);
      END_STATE();
    case 37:
      if (lookahead == 'X') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'Y') ADVANCE(31);
      END_STATE();
    case 39:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 40:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 41:
      if (eof) ADVANCE(42);
      if (lookahead == ';') ADVANCE(43);
      if (lookahead == 'C') ADVANCE(67);
      if (lookahead == 'S') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_create_domain_statement_token1);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_create_domain_statement_token2);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_create_type_statement_token1);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token2);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_constraint_token1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_constraint_token2);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_constraint_token3);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RBRACK);
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
  [6] = {.lex_state = 41},
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
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 39},
  [29] = {.lex_state = 40},
  [30] = {.lex_state = 40},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 40},
  [34] = {.lex_state = 40},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 39},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 40},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 40},
  [42] = {.lex_state = 40},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 40},
  [47] = {.lex_state = 40},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_create_domain_statement_token1] = ACTIONS(1),
    [aux_sym_create_domain_statement_token2] = ACTIONS(1),
    [aux_sym_create_type_statement_token1] = ACTIONS(1),
    [aux_sym_create_index_statement_token1] = ACTIONS(1),
    [aux_sym_create_index_statement_token2] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_select_statement_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_constraint_token1] = ACTIONS(1),
    [aux_sym_constraint_token2] = ACTIONS(1),
    [aux_sym_constraint_token3] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(43),
    [sym__statement] = STATE(4),
    [sym_create_domain_statement] = STATE(20),
    [sym_create_type_statement] = STATE(20),
    [sym_create_index_statement] = STATE(20),
    [sym_select_statement] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_create_domain_statement_token1] = ACTIONS(5),
    [aux_sym_create_type_statement_token1] = ACTIONS(7),
    [aux_sym_create_index_statement_token1] = ACTIONS(9),
    [aux_sym_select_statement_token1] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(17), 1,
      aux_sym_constraint_token3,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    STATE(10), 1,
      sym_constraint,
    ACTIONS(15), 2,
      aux_sym_constraint_token1,
      aux_sym_constraint_token2,
    ACTIONS(13), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_RPAREN,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
  [24] = 4,
    ACTIONS(17), 1,
      aux_sym_constraint_token3,
    STATE(8), 1,
      sym_constraint,
    ACTIONS(15), 2,
      aux_sym_constraint_token1,
      aux_sym_constraint_token2,
    ACTIONS(21), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_RPAREN,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
  [45] = 7,
    ACTIONS(5), 1,
      aux_sym_create_domain_statement_token1,
    ACTIONS(7), 1,
      aux_sym_create_type_statement_token1,
    ACTIONS(9), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(11), 1,
      aux_sym_select_statement_token1,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(5), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(20), 4,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_select_statement,
  [71] = 7,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      aux_sym_create_domain_statement_token1,
    ACTIONS(30), 1,
      aux_sym_create_type_statement_token1,
    ACTIONS(33), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(36), 1,
      aux_sym_select_statement_token1,
    STATE(5), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(20), 4,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_select_statement,
  [97] = 4,
    ACTIONS(41), 1,
      aux_sym_select_statement_token1,
    STATE(23), 1,
      sym_select_clause,
    ACTIONS(43), 2,
      sym_number,
      sym_identifier,
    ACTIONS(39), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
  [115] = 3,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_select_clause_repeat1,
    ACTIONS(45), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_select_statement_token1,
  [130] = 1,
    ACTIONS(49), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_RPAREN,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
  [141] = 1,
    ACTIONS(51), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_RPAREN,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
  [152] = 1,
    ACTIONS(53), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_RPAREN,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
  [163] = 1,
    ACTIONS(55), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_RPAREN,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
  [174] = 3,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_select_clause_repeat1,
    ACTIONS(57), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_select_statement_token1,
  [189] = 3,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_select_clause_repeat1,
    ACTIONS(62), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_select_statement_token1,
  [204] = 2,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_select_statement_token1,
  [216] = 2,
    ACTIONS(70), 1,
      aux_sym_create_domain_statement_token2,
    ACTIONS(68), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_select_statement_token1,
  [228] = 1,
    ACTIONS(57), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
  [238] = 1,
    ACTIONS(72), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_select_statement_token1,
  [247] = 1,
    ACTIONS(74), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_select_statement_token1,
  [256] = 1,
    ACTIONS(76), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_select_statement_token1,
  [265] = 2,
    ACTIONS(80), 1,
      anon_sym_SEMI,
    ACTIONS(78), 5,
      ts_builtin_sym_end,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_select_statement_token1,
  [276] = 1,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_select_statement_token1,
  [285] = 1,
    ACTIONS(84), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_select_statement_token1,
  [294] = 1,
    ACTIONS(86), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_select_statement_token1,
  [303] = 1,
    ACTIONS(88), 5,
      ts_builtin_sym_end,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_select_statement_token1,
  [311] = 3,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
    ACTIONS(92), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_parameters_repeat1,
  [321] = 3,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_parameters_repeat1,
  [331] = 3,
    ACTIONS(92), 1,
      anon_sym_COMMA,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_parameters_repeat1,
  [341] = 2,
    STATE(45), 1,
      sym_expression,
    ACTIONS(101), 2,
      sym_number,
      sym_identifier,
  [349] = 2,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(32), 1,
      sym_data_type,
  [356] = 2,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(21), 1,
      sym_data_type,
  [363] = 2,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_parameters,
  [370] = 1,
    ACTIONS(107), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [375] = 2,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(35), 1,
      sym_parameter,
  [382] = 2,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(25), 1,
      sym_parameter,
  [389] = 1,
    ACTIONS(94), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [394] = 1,
    ACTIONS(111), 2,
      sym_number,
      sym_identifier,
  [399] = 1,
    ACTIONS(113), 1,
      anon_sym_RBRACK,
  [403] = 1,
    ACTIONS(115), 1,
      aux_sym_create_index_statement_token2,
  [407] = 1,
    ACTIONS(117), 1,
      sym_identifier,
  [411] = 1,
    ACTIONS(119), 1,
      aux_sym_create_domain_statement_token2,
  [415] = 1,
    ACTIONS(121), 1,
      sym_identifier,
  [419] = 1,
    ACTIONS(123), 1,
      sym_identifier,
  [423] = 1,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
  [427] = 1,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
  [431] = 1,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
  [435] = 1,
    ACTIONS(131), 1,
      sym_identifier,
  [439] = 1,
    ACTIONS(133), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 45,
  [SMALL_STATE(5)] = 71,
  [SMALL_STATE(6)] = 97,
  [SMALL_STATE(7)] = 115,
  [SMALL_STATE(8)] = 130,
  [SMALL_STATE(9)] = 141,
  [SMALL_STATE(10)] = 152,
  [SMALL_STATE(11)] = 163,
  [SMALL_STATE(12)] = 174,
  [SMALL_STATE(13)] = 189,
  [SMALL_STATE(14)] = 204,
  [SMALL_STATE(15)] = 216,
  [SMALL_STATE(16)] = 228,
  [SMALL_STATE(17)] = 238,
  [SMALL_STATE(18)] = 247,
  [SMALL_STATE(19)] = 256,
  [SMALL_STATE(20)] = 265,
  [SMALL_STATE(21)] = 276,
  [SMALL_STATE(22)] = 285,
  [SMALL_STATE(23)] = 294,
  [SMALL_STATE(24)] = 303,
  [SMALL_STATE(25)] = 311,
  [SMALL_STATE(26)] = 321,
  [SMALL_STATE(27)] = 331,
  [SMALL_STATE(28)] = 341,
  [SMALL_STATE(29)] = 349,
  [SMALL_STATE(30)] = 356,
  [SMALL_STATE(31)] = 363,
  [SMALL_STATE(32)] = 370,
  [SMALL_STATE(33)] = 375,
  [SMALL_STATE(34)] = 382,
  [SMALL_STATE(35)] = 389,
  [SMALL_STATE(36)] = 394,
  [SMALL_STATE(37)] = 399,
  [SMALL_STATE(38)] = 403,
  [SMALL_STATE(39)] = 407,
  [SMALL_STATE(40)] = 411,
  [SMALL_STATE(41)] = 415,
  [SMALL_STATE(42)] = 419,
  [SMALL_STATE(43)] = 423,
  [SMALL_STATE(44)] = 427,
  [SMALL_STATE(45)] = 431,
  [SMALL_STATE(46)] = 435,
  [SMALL_STATE(47)] = 439,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_clause_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_clause_repeat1, 2), SHIFT_REPEAT(36),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 4, .production_id = 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type_statement, 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(33),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [125] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_SQL(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
