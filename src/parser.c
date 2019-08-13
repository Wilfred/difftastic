#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 36
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_datasource = 1,
  anon_sym_model = 2,
  sym_comment = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_EQ = 6,
  anon_sym_DOT = 7,
  aux_sym_column_value_token1 = 8,
  sym_identifier = 9,
  sym_string_value = 10,
  sym_number = 11,
  anon_sym_LBRACK = 12,
  anon_sym_COMMA = 13,
  anon_sym_RBRACK = 14,
  sym_true = 15,
  sym_false = 16,
  sym_null = 17,
  sym_source_file = 18,
  sym__definition = 19,
  sym_datasource = 20,
  sym_model = 21,
  sym_statement_block = 22,
  sym__statement = 23,
  sym__declaration = 24,
  sym_column_declaration = 25,
  sym__datasource_declaration = 26,
  sym_assignment_pattern = 27,
  sym__constructable_expression = 28,
  sym_member_expression = 29,
  sym_column_value = 30,
  sym__expression = 31,
  sym_array = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_statement_block_repeat1 = 34,
  aux_sym_array_repeat1 = 35,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_datasource] = "datasource",
  [anon_sym_model] = "model",
  [sym_comment] = "comment",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT] = ".",
  [aux_sym_column_value_token1] = "column_value_token1",
  [sym_identifier] = "identifier",
  [sym_string_value] = "string_value",
  [sym_number] = "number",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_datasource] = "datasource",
  [sym_model] = "model",
  [sym_statement_block] = "statement_block",
  [sym__statement] = "_statement",
  [sym__declaration] = "_declaration",
  [sym_column_declaration] = "column_declaration",
  [sym__datasource_declaration] = "_datasource_declaration",
  [sym_assignment_pattern] = "assignment_pattern",
  [sym__constructable_expression] = "_constructable_expression",
  [sym_member_expression] = "member_expression",
  [sym_column_value] = "column_value",
  [sym__expression] = "_expression",
  [sym_array] = "array",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_statement_block_repeat1] = "statement_block_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_datasource] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_model] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string_value] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_datasource] = {
    .visible = true,
    .named = true,
  },
  [sym_model] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_column_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__datasource_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym__constructable_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_member_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_column_value] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statement_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(31);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == ']') ADVANCE(58);
      if (lookahead == 'd') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == ']') ADVANCE(58);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == ']') ADVANCE(58);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(4)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(34);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 29:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(2);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_datasource);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_column_value_token1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_column_value_token1);
      if (lookahead == '?') ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(46);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 40},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_string_value] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_datasource] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_model] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_model] = STATE(4),
    [sym__definition] = STATE(4),
    [sym_datasource] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [sym_source_file] = STATE(5),
    [anon_sym_model] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_datasource] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_identifier] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_identifier] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_model] = STATE(8),
    [sym__definition] = STATE(8),
    [sym_datasource] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [anon_sym_model] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_datasource] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_statement_block] = STATE(10),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
  [7] = {
    [sym_statement_block] = STATE(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
  [8] = {
    [sym_model] = STATE(8),
    [sym__definition] = STATE(8),
    [sym_datasource] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [anon_sym_model] = ACTIONS(21),
    [ts_builtin_sym_end] = ACTIONS(24),
    [anon_sym_datasource] = ACTIONS(26),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__declaration] = STATE(14),
    [sym__statement] = STATE(14),
    [sym_assignment_pattern] = STATE(14),
    [sym_column_declaration] = STATE(14),
    [aux_sym_statement_block_repeat1] = STATE(14),
    [sym__datasource_declaration] = STATE(14),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [anon_sym_model] = ACTIONS(33),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_datasource] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [anon_sym_model] = ACTIONS(35),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_datasource] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_column_value] = STATE(17),
    [sym_identifier] = ACTIONS(37),
    [anon_sym_EQ] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [anon_sym_model] = ACTIONS(41),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_datasource] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym__declaration] = STATE(19),
    [sym__statement] = STATE(19),
    [sym_assignment_pattern] = STATE(19),
    [sym_column_declaration] = STATE(19),
    [aux_sym_statement_block_repeat1] = STATE(19),
    [sym__datasource_declaration] = STATE(19),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_comment] = ACTIONS(45),
    [aux_sym_column_value_token1] = ACTIONS(47),
  },
  [16] = {
    [sym_array] = STATE(23),
    [sym_member_expression] = STATE(22),
    [sym__constructable_expression] = STATE(23),
    [sym_string_value] = ACTIONS(49),
    [sym_true] = ACTIONS(51),
    [sym_null] = ACTIONS(51),
    [sym_number] = ACTIONS(49),
    [sym_false] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [anon_sym_RBRACE] = ACTIONS(57),
    [sym_identifier] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [anon_sym_model] = ACTIONS(59),
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_datasource] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym__declaration] = STATE(19),
    [sym__statement] = STATE(19),
    [sym_assignment_pattern] = STATE(19),
    [sym_column_declaration] = STATE(19),
    [aux_sym_statement_block_repeat1] = STATE(19),
    [sym__datasource_declaration] = STATE(19),
    [anon_sym_RBRACE] = ACTIONS(61),
    [sym_identifier] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_array] = STATE(24),
    [anon_sym_RBRACE] = ACTIONS(66),
    [anon_sym_LBRACK] = ACTIONS(53),
    [sym_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym_array] = STATE(28),
    [sym__constructable_expression] = STATE(28),
    [sym_member_expression] = STATE(22),
    [aux_sym_array_repeat1] = STATE(27),
    [sym__expression] = STATE(28),
    [sym_string_value] = ACTIONS(68),
    [sym_true] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [anon_sym_RBRACK] = ACTIONS(72),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(70),
    [sym_number] = ACTIONS(68),
    [sym_false] = ACTIONS(70),
    [anon_sym_COMMA] = ACTIONS(74),
  },
  [22] = {
    [anon_sym_RBRACE] = ACTIONS(76),
    [anon_sym_COMMA] = ACTIONS(76),
    [anon_sym_DOT] = ACTIONS(78),
    [sym_identifier] = ACTIONS(76),
    [anon_sym_RBRACK] = ACTIONS(76),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [anon_sym_RBRACE] = ACTIONS(80),
    [sym_identifier] = ACTIONS(80),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [anon_sym_RBRACE] = ACTIONS(82),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym_array] = STATE(30),
    [sym_member_expression] = STATE(22),
    [sym__constructable_expression] = STATE(30),
    [sym__expression] = STATE(30),
    [sym_string_value] = ACTIONS(84),
    [sym_true] = ACTIONS(86),
    [sym_null] = ACTIONS(86),
    [sym_number] = ACTIONS(84),
    [sym_false] = ACTIONS(86),
    [anon_sym_COMMA] = ACTIONS(88),
    [anon_sym_LBRACK] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [anon_sym_RBRACK] = ACTIONS(88),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [anon_sym_RBRACE] = ACTIONS(90),
    [anon_sym_COMMA] = ACTIONS(90),
    [sym_identifier] = ACTIONS(90),
    [anon_sym_RBRACK] = ACTIONS(90),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [aux_sym_array_repeat1] = STATE(32),
    [anon_sym_COMMA] = ACTIONS(74),
    [anon_sym_RBRACK] = ACTIONS(92),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [aux_sym_array_repeat1] = STATE(33),
    [anon_sym_COMMA] = ACTIONS(74),
    [anon_sym_RBRACK] = ACTIONS(92),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [anon_sym_COMMA] = ACTIONS(96),
    [anon_sym_RBRACK] = ACTIONS(96),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [anon_sym_RBRACE] = ACTIONS(98),
    [anon_sym_COMMA] = ACTIONS(98),
    [sym_identifier] = ACTIONS(98),
    [anon_sym_RBRACK] = ACTIONS(98),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [aux_sym_array_repeat1] = STATE(32),
    [anon_sym_COMMA] = ACTIONS(100),
    [anon_sym_RBRACK] = ACTIONS(96),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [aux_sym_array_repeat1] = STATE(32),
    [anon_sym_COMMA] = ACTIONS(74),
    [anon_sym_RBRACK] = ACTIONS(103),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_COMMA] = ACTIONS(105),
    [anon_sym_DOT] = ACTIONS(105),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_RBRACK] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(107),
    [sym_identifier] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(3),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [9] = {.count = 1, .reusable = true}, SHIFT(2),
  [11] = {.count = 1, .reusable = true}, SHIFT(6),
  [13] = {.count = 1, .reusable = true}, SHIFT(7),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [17] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [19] = {.count = 1, .reusable = true}, SHIFT(9),
  [21] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [24] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [26] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [29] = {.count = 1, .reusable = true}, SHIFT(12),
  [31] = {.count = 1, .reusable = true}, SHIFT(13),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_datasource, 3),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_model, 3),
  [37] = {.count = 1, .reusable = true}, SHIFT(15),
  [39] = {.count = 1, .reusable = true}, SHIFT(16),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_statement_block, 2),
  [43] = {.count = 1, .reusable = true}, SHIFT(18),
  [45] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [47] = {.count = 1, .reusable = true}, SHIFT(20),
  [49] = {.count = 1, .reusable = true}, SHIFT(23),
  [51] = {.count = 1, .reusable = false}, SHIFT(23),
  [53] = {.count = 1, .reusable = true}, SHIFT(21),
  [55] = {.count = 1, .reusable = false}, SHIFT(22),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_column_declaration, 2),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_statement_block, 3),
  [61] = {.count = 1, .reusable = true}, REDUCE(aux_sym_statement_block_repeat1, 2),
  [63] = {.count = 2, .reusable = true}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(12),
  [66] = {.count = 1, .reusable = true}, REDUCE(sym_column_value, 2),
  [68] = {.count = 1, .reusable = true}, SHIFT(28),
  [70] = {.count = 1, .reusable = false}, SHIFT(28),
  [72] = {.count = 1, .reusable = true}, SHIFT(26),
  [74] = {.count = 1, .reusable = true}, SHIFT(25),
  [76] = {.count = 1, .reusable = true}, REDUCE(sym__constructable_expression, 1),
  [78] = {.count = 1, .reusable = true}, SHIFT(29),
  [80] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_pattern, 3),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym_column_value, 3),
  [84] = {.count = 1, .reusable = true}, SHIFT(30),
  [86] = {.count = 1, .reusable = false}, SHIFT(30),
  [88] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat1, 1),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [92] = {.count = 1, .reusable = true}, SHIFT(31),
  [94] = {.count = 1, .reusable = true}, SHIFT(34),
  [96] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(25),
  [103] = {.count = 1, .reusable = true}, SHIFT(35),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_member_expression, 3),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_array, 4),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_prisma(void) {
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
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
