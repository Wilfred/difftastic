#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 69
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
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
  aux_sym_column_type_token1 = 8,
  anon_sym_AT = 9,
  anon_sym_LPAREN = 10,
  anon_sym_COMMA = 11,
  anon_sym_RPAREN = 12,
  sym_identifier = 13,
  sym_string_value = 14,
  sym_number = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  anon_sym_LF = 18,
  sym_true = 19,
  sym_false = 20,
  sym_null = 21,
  sym_source_file = 22,
  sym__definition = 23,
  sym_datasource = 24,
  sym_model = 25,
  sym_statement_block = 26,
  sym__statement = 27,
  sym__declaration = 28,
  sym_column_declaration = 29,
  sym__datasource_declaration = 30,
  sym_assignment_pattern = 31,
  sym__constructable_expression = 32,
  sym_member_expression = 33,
  sym_column_type = 34,
  sym_column_relation = 35,
  sym_call_expression = 36,
  sym_namespace = 37,
  sym_arguments = 38,
  sym__expression = 39,
  sym_array = 40,
  sym_new_line = 41,
  aux_sym_source_file_repeat1 = 42,
  aux_sym_statement_block_repeat1 = 43,
  aux_sym_arguments_repeat1 = 44,
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
  [aux_sym_column_type_token1] = "column_type_token1",
  [anon_sym_AT] = "@",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_identifier] = "identifier",
  [sym_string_value] = "string_value",
  [sym_number] = "number",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LF] = "\n",
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
  [sym_column_type] = "column_type",
  [sym_column_relation] = "column_relation",
  [sym_call_expression] = "call_expression",
  [sym_namespace] = "namespace",
  [sym_arguments] = "arguments",
  [sym__expression] = "_expression",
  [sym_array] = "array",
  [sym_new_line] = "new_line",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_statement_block_repeat1] = "statement_block_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
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
  [aux_sym_column_type_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
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
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
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
  [sym_column_type] = {
    .visible = true,
    .named = true,
  },
  [sym_column_relation] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
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
  [sym_new_line] = {
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
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(32);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == ')') ADVANCE(45);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == ']') ADVANCE(62);
      if (lookahead == 'd') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == ')') ADVANCE(45);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == ']') ADVANCE(62);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == ')') ADVANCE(45);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == ']') ADVANCE(62);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(5)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(35);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 30:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(3);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_datasource);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_column_type_token1);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_column_type_token1);
      if (lookahead == '?') ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(54);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(48);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(47);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(51);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 41},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_null] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_datasource] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_string_value] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_model] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
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
    [sym_column_type] = STATE(17),
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
    [aux_sym_column_type_token1] = ACTIONS(47),
  },
  [16] = {
    [sym__constructable_expression] = STATE(23),
    [sym_member_expression] = STATE(21),
    [sym_array] = STATE(23),
    [sym_null] = ACTIONS(49),
    [sym_number] = ACTIONS(51),
    [sym_false] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_string_value] = ACTIONS(51),
    [sym_true] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym_new_line] = STATE(26),
    [sym_namespace] = STATE(27),
    [sym_column_relation] = STATE(28),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_LF] = ACTIONS(59),
    [sym_comment] = ACTIONS(45),
  },
  [18] = {
    [anon_sym_model] = ACTIONS(61),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_datasource] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym__declaration] = STATE(19),
    [sym__statement] = STATE(19),
    [sym_assignment_pattern] = STATE(19),
    [sym_column_declaration] = STATE(19),
    [aux_sym_statement_block_repeat1] = STATE(19),
    [sym__datasource_declaration] = STATE(19),
    [anon_sym_RBRACE] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_array] = STATE(29),
    [anon_sym_LF] = ACTIONS(68),
    [anon_sym_AT] = ACTIONS(70),
    [sym_comment] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(72),
  },
  [21] = {
    [anon_sym_RBRACE] = ACTIONS(74),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_RBRACK] = ACTIONS(74),
    [anon_sym_COMMA] = ACTIONS(74),
    [sym_identifier] = ACTIONS(74),
    [anon_sym_DOT] = ACTIONS(76),
    [anon_sym_RPAREN] = ACTIONS(74),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym_call_expression] = STATE(33),
    [sym__expression] = STATE(33),
    [aux_sym_arguments_repeat1] = STATE(34),
    [sym__constructable_expression] = STATE(33),
    [sym_array] = STATE(33),
    [sym_member_expression] = STATE(21),
    [sym_null] = ACTIONS(78),
    [sym_number] = ACTIONS(80),
    [sym_string_value] = ACTIONS(80),
    [sym_comment] = ACTIONS(3),
    [sym_false] = ACTIONS(78),
    [anon_sym_RBRACK] = ACTIONS(82),
    [anon_sym_COMMA] = ACTIONS(84),
    [anon_sym_LBRACK] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_true] = ACTIONS(78),
  },
  [23] = {
    [anon_sym_RBRACE] = ACTIONS(86),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym_call_expression] = STATE(35),
    [sym_member_expression] = STATE(51),
    [sym__expression] = STATE(35),
    [sym__constructable_expression] = STATE(35),
    [sym_array] = STATE(35),
    [sym_null] = ACTIONS(88),
    [sym_number] = ACTIONS(90),
    [sym_false] = ACTIONS(88),
    [anon_sym_LBRACK] = ACTIONS(92),
    [sym_identifier] = ACTIONS(94),
    [sym_string_value] = ACTIONS(90),
    [sym_true] = ACTIONS(88),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [anon_sym_RBRACE] = ACTIONS(96),
    [sym_identifier] = ACTIONS(96),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [anon_sym_RBRACE] = ACTIONS(98),
    [sym_identifier] = ACTIONS(98),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [anon_sym_LF] = ACTIONS(100),
    [sym_comment] = ACTIONS(45),
  },
  [28] = {
    [sym_new_line] = STATE(36),
    [anon_sym_LF] = ACTIONS(59),
    [sym_comment] = ACTIONS(45),
  },
  [29] = {
    [anon_sym_AT] = ACTIONS(102),
    [anon_sym_LF] = ACTIONS(104),
    [sym_comment] = ACTIONS(45),
  },
  [30] = {
    [sym_identifier] = ACTIONS(106),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [anon_sym_RBRACE] = ACTIONS(108),
    [anon_sym_LPAREN] = ACTIONS(108),
    [anon_sym_RBRACK] = ACTIONS(108),
    [anon_sym_COMMA] = ACTIONS(108),
    [sym_identifier] = ACTIONS(108),
    [anon_sym_RPAREN] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [sym_call_expression] = STATE(38),
    [sym__expression] = STATE(38),
    [sym__constructable_expression] = STATE(38),
    [sym_array] = STATE(38),
    [sym_member_expression] = STATE(21),
    [sym_null] = ACTIONS(110),
    [sym_number] = ACTIONS(112),
    [anon_sym_RPAREN] = ACTIONS(114),
    [sym_string_value] = ACTIONS(112),
    [sym_comment] = ACTIONS(3),
    [sym_false] = ACTIONS(110),
    [anon_sym_RBRACK] = ACTIONS(114),
    [anon_sym_COMMA] = ACTIONS(114),
    [anon_sym_LBRACK] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_true] = ACTIONS(110),
  },
  [33] = {
    [sym_arguments] = STATE(41),
    [aux_sym_arguments_repeat1] = STATE(42),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RBRACK] = ACTIONS(118),
    [anon_sym_COMMA] = ACTIONS(84),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [aux_sym_arguments_repeat1] = STATE(43),
    [anon_sym_RBRACK] = ACTIONS(118),
    [anon_sym_COMMA] = ACTIONS(84),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [sym_arguments] = STATE(55),
    [anon_sym_LF] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(122),
    [sym_comment] = ACTIONS(45),
  },
  [36] = {
    [anon_sym_RBRACE] = ACTIONS(124),
    [sym_identifier] = ACTIONS(124),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [anon_sym_RBRACE] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_RBRACK] = ACTIONS(126),
    [anon_sym_COMMA] = ACTIONS(126),
    [sym_identifier] = ACTIONS(126),
    [anon_sym_DOT] = ACTIONS(126),
    [anon_sym_RPAREN] = ACTIONS(126),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [sym_arguments] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(128),
    [anon_sym_RBRACK] = ACTIONS(128),
    [anon_sym_COMMA] = ACTIONS(128),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [anon_sym_RBRACE] = ACTIONS(130),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_RBRACK] = ACTIONS(130),
    [anon_sym_COMMA] = ACTIONS(130),
    [sym_identifier] = ACTIONS(130),
    [anon_sym_RPAREN] = ACTIONS(130),
    [sym_comment] = ACTIONS(3),
  },
  [40] = {
    [sym_call_expression] = STATE(45),
    [sym__expression] = STATE(45),
    [aux_sym_arguments_repeat1] = STATE(46),
    [sym__constructable_expression] = STATE(45),
    [sym_array] = STATE(45),
    [sym_member_expression] = STATE(21),
    [sym_null] = ACTIONS(132),
    [sym_number] = ACTIONS(134),
    [anon_sym_RPAREN] = ACTIONS(136),
    [sym_string_value] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [sym_false] = ACTIONS(132),
    [anon_sym_COMMA] = ACTIONS(84),
    [anon_sym_LBRACK] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_true] = ACTIONS(132),
  },
  [41] = {
    [anon_sym_LPAREN] = ACTIONS(138),
    [anon_sym_RPAREN] = ACTIONS(138),
    [anon_sym_RBRACK] = ACTIONS(138),
    [anon_sym_COMMA] = ACTIONS(138),
    [sym_comment] = ACTIONS(3),
  },
  [42] = {
    [aux_sym_arguments_repeat1] = STATE(43),
    [anon_sym_RBRACK] = ACTIONS(140),
    [anon_sym_COMMA] = ACTIONS(84),
    [sym_comment] = ACTIONS(3),
  },
  [43] = {
    [aux_sym_arguments_repeat1] = STATE(43),
    [anon_sym_RPAREN] = ACTIONS(128),
    [anon_sym_RBRACK] = ACTIONS(128),
    [anon_sym_COMMA] = ACTIONS(142),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_RPAREN] = ACTIONS(145),
    [anon_sym_RBRACK] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
  },
  [45] = {
    [sym_arguments] = STATE(41),
    [aux_sym_arguments_repeat1] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(147),
    [anon_sym_COMMA] = ACTIONS(84),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [aux_sym_arguments_repeat1] = STATE(43),
    [anon_sym_RPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(84),
  },
  [47] = {
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_RBRACK] = ACTIONS(149),
    [anon_sym_COMMA] = ACTIONS(149),
    [sym_identifier] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(151),
    [anon_sym_COMMA] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
  },
  [49] = {
    [aux_sym_arguments_repeat1] = STATE(43),
    [anon_sym_RPAREN] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(84),
  },
  [50] = {
    [anon_sym_LPAREN] = ACTIONS(155),
    [anon_sym_RPAREN] = ACTIONS(155),
    [anon_sym_RBRACK] = ACTIONS(155),
    [anon_sym_COMMA] = ACTIONS(155),
    [sym_comment] = ACTIONS(3),
  },
  [51] = {
    [anon_sym_LPAREN] = ACTIONS(157),
    [anon_sym_LF] = ACTIONS(74),
    [anon_sym_DOT] = ACTIONS(159),
    [sym_comment] = ACTIONS(45),
  },
  [52] = {
    [anon_sym_LF] = ACTIONS(108),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_AT] = ACTIONS(161),
    [sym_comment] = ACTIONS(45),
  },
  [53] = {
    [anon_sym_LPAREN] = ACTIONS(163),
    [anon_sym_DOT] = ACTIONS(163),
    [anon_sym_LF] = ACTIONS(126),
    [sym_comment] = ACTIONS(45),
  },
  [54] = {
    [anon_sym_LF] = ACTIONS(130),
    [anon_sym_LPAREN] = ACTIONS(165),
    [anon_sym_AT] = ACTIONS(165),
    [sym_comment] = ACTIONS(45),
  },
  [55] = {
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LF] = ACTIONS(138),
    [sym_comment] = ACTIONS(45),
  },
  [56] = {
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym_LF] = ACTIONS(145),
    [sym_comment] = ACTIONS(45),
  },
  [57] = {
    [anon_sym_LF] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(171),
    [anon_sym_AT] = ACTIONS(171),
    [sym_comment] = ACTIONS(45),
  },
  [58] = {
    [anon_sym_LPAREN] = ACTIONS(173),
    [anon_sym_LF] = ACTIONS(151),
    [sym_comment] = ACTIONS(45),
  },
  [59] = {
    [anon_sym_LPAREN] = ACTIONS(175),
    [anon_sym_LF] = ACTIONS(155),
    [sym_comment] = ACTIONS(45),
  },
  [60] = {
    [sym_call_expression] = STATE(62),
    [sym__expression] = STATE(62),
    [aux_sym_arguments_repeat1] = STATE(63),
    [sym__constructable_expression] = STATE(62),
    [sym_array] = STATE(62),
    [sym_member_expression] = STATE(21),
    [sym_null] = ACTIONS(177),
    [sym_number] = ACTIONS(179),
    [sym_string_value] = ACTIONS(179),
    [sym_comment] = ACTIONS(3),
    [sym_false] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(84),
    [anon_sym_LBRACK] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_true] = ACTIONS(177),
  },
  [61] = {
    [sym_identifier] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
  },
  [62] = {
    [sym_arguments] = STATE(41),
    [aux_sym_arguments_repeat1] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RBRACK] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(84),
    [sym_comment] = ACTIONS(3),
  },
  [63] = {
    [aux_sym_arguments_repeat1] = STATE(43),
    [anon_sym_RBRACK] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(84),
    [sym_comment] = ACTIONS(3),
  },
  [64] = {
    [sym_call_expression] = STATE(66),
    [sym_member_expression] = STATE(21),
    [sym__expression] = STATE(66),
    [aux_sym_arguments_repeat1] = STATE(67),
    [sym__constructable_expression] = STATE(66),
    [sym_array] = STATE(66),
    [sym_null] = ACTIONS(187),
    [sym_number] = ACTIONS(189),
    [sym_false] = ACTIONS(187),
    [anon_sym_COMMA] = ACTIONS(84),
    [anon_sym_LBRACK] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(191),
    [sym_string_value] = ACTIONS(189),
    [sym_true] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
  },
  [65] = {
    [aux_sym_arguments_repeat1] = STATE(43),
    [anon_sym_RBRACK] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(84),
    [sym_comment] = ACTIONS(3),
  },
  [66] = {
    [sym_arguments] = STATE(41),
    [aux_sym_arguments_repeat1] = STATE(68),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(195),
    [anon_sym_COMMA] = ACTIONS(84),
    [sym_comment] = ACTIONS(3),
  },
  [67] = {
    [aux_sym_arguments_repeat1] = STATE(43),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(195),
  },
  [68] = {
    [aux_sym_arguments_repeat1] = STATE(43),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(197),
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
  [49] = {.count = 1, .reusable = false}, SHIFT(23),
  [51] = {.count = 1, .reusable = true}, SHIFT(23),
  [53] = {.count = 1, .reusable = true}, SHIFT(22),
  [55] = {.count = 1, .reusable = false}, SHIFT(21),
  [57] = {.count = 1, .reusable = false}, SHIFT(24),
  [59] = {.count = 1, .reusable = true}, SHIFT(25),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_statement_block, 3),
  [63] = {.count = 1, .reusable = true}, REDUCE(aux_sym_statement_block_repeat1, 2),
  [65] = {.count = 2, .reusable = true}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(12),
  [68] = {.count = 1, .reusable = true}, REDUCE(sym_column_type, 2),
  [70] = {.count = 1, .reusable = false}, REDUCE(sym_column_type, 2),
  [72] = {.count = 1, .reusable = false}, SHIFT(60),
  [74] = {.count = 1, .reusable = true}, REDUCE(sym__constructable_expression, 1),
  [76] = {.count = 1, .reusable = true}, SHIFT(30),
  [78] = {.count = 1, .reusable = false}, SHIFT(33),
  [80] = {.count = 1, .reusable = true}, SHIFT(33),
  [82] = {.count = 1, .reusable = true}, SHIFT(31),
  [84] = {.count = 1, .reusable = true}, SHIFT(32),
  [86] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_pattern, 3),
  [88] = {.count = 1, .reusable = false}, SHIFT(35),
  [90] = {.count = 1, .reusable = true}, SHIFT(35),
  [92] = {.count = 1, .reusable = true}, SHIFT(60),
  [94] = {.count = 1, .reusable = false}, SHIFT(51),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym_new_line, 1),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_column_declaration, 3),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym_column_relation, 1),
  [102] = {.count = 1, .reusable = false}, REDUCE(sym_column_type, 3),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym_column_type, 3),
  [106] = {.count = 1, .reusable = true}, SHIFT(37),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [110] = {.count = 1, .reusable = false}, SHIFT(38),
  [112] = {.count = 1, .reusable = true}, SHIFT(38),
  [114] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 1),
  [116] = {.count = 1, .reusable = true}, SHIFT(40),
  [118] = {.count = 1, .reusable = true}, SHIFT(39),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym_namespace, 2),
  [122] = {.count = 1, .reusable = false}, SHIFT(64),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym_column_declaration, 4),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_member_expression, 3),
  [128] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [132] = {.count = 1, .reusable = false}, SHIFT(45),
  [134] = {.count = 1, .reusable = true}, SHIFT(45),
  [136] = {.count = 1, .reusable = true}, SHIFT(44),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2),
  [140] = {.count = 1, .reusable = true}, SHIFT(47),
  [142] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(32),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 2),
  [147] = {.count = 1, .reusable = true}, SHIFT(48),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_array, 4),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [153] = {.count = 1, .reusable = true}, SHIFT(50),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 4),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym__constructable_expression, 1),
  [159] = {.count = 1, .reusable = false}, SHIFT(61),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym_array, 2),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_member_expression, 3),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym_array, 3),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_call_expression, 2),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 2),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym_array, 4),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 3),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 4),
  [177] = {.count = 1, .reusable = false}, SHIFT(62),
  [179] = {.count = 1, .reusable = true}, SHIFT(62),
  [181] = {.count = 1, .reusable = true}, SHIFT(52),
  [183] = {.count = 1, .reusable = true}, SHIFT(53),
  [185] = {.count = 1, .reusable = true}, SHIFT(54),
  [187] = {.count = 1, .reusable = false}, SHIFT(66),
  [189] = {.count = 1, .reusable = true}, SHIFT(66),
  [191] = {.count = 1, .reusable = true}, SHIFT(56),
  [193] = {.count = 1, .reusable = true}, SHIFT(57),
  [195] = {.count = 1, .reusable = true}, SHIFT(58),
  [197] = {.count = 1, .reusable = true}, SHIFT(59),
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
