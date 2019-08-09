#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 85
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_datasource = 1,
  anon_sym_type = 2,
  anon_sym_model = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  sym_namespace_name = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_COLON = 9,
  sym_block_name = 10,
  anon_sym_COMMA = 11,
  sym_identifier = 12,
  sym_column_value = 13,
  sym_string_value = 14,
  sym_number = 15,
  sym_assignation = 16,
  sym_dot = 17,
  anon_sym_LBRACK = 18,
  anon_sym_RBRACK = 19,
  anon_sym_LF = 20,
  sym_true = 21,
  sym_false = 22,
  sym_source_file = 23,
  sym__definition = 24,
  sym_datasource_definition = 25,
  sym_type_definition = 26,
  sym_model_definition = 27,
  sym_datasource_block = 28,
  sym_model_block = 29,
  sym__model_statement = 30,
  sym_column_statement = 31,
  sym__datasource_statement = 32,
  sym_assignee = 33,
  sym_namespace = 34,
  sym_namespace_arguments = 35,
  sym__namespace_function_call = 36,
  sym_namespace_function_call = 37,
  sym_block_attribute = 38,
  sym__environment_variable = 39,
  sym__call_signature = 40,
  sym_formal_parameters = 41,
  sym__formal_parameter = 42,
  sym__expression = 43,
  sym__column_value = 44,
  sym_array = 45,
  sym_new_line = 46,
  sym_boolean = 47,
  aux_sym_source_file_repeat1 = 48,
  aux_sym_datasource_block_repeat1 = 49,
  aux_sym_model_block_repeat1 = 50,
  aux_sym_formal_parameters_repeat1 = 51,
  aux_sym_array_repeat1 = 52,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_datasource] = "datasource",
  [anon_sym_type] = "type",
  [anon_sym_model] = "model",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_namespace_name] = "namespace_name",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [sym_block_name] = "block_name",
  [anon_sym_COMMA] = ",",
  [sym_identifier] = "identifier",
  [sym_column_value] = "column_value",
  [sym_string_value] = "string_value",
  [sym_number] = "number",
  [sym_assignation] = "assignation",
  [sym_dot] = "dot",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LF] = "\n",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_datasource_definition] = "datasource_definition",
  [sym_type_definition] = "type_definition",
  [sym_model_definition] = "model_definition",
  [sym_datasource_block] = "datasource_block",
  [sym_model_block] = "model_block",
  [sym__model_statement] = "_model_statement",
  [sym_column_statement] = "column_statement",
  [sym__datasource_statement] = "_datasource_statement",
  [sym_assignee] = "assignee",
  [sym_namespace] = "namespace",
  [sym_namespace_arguments] = "namespace_arguments",
  [sym__namespace_function_call] = "_namespace_function_call",
  [sym_namespace_function_call] = "namespace_function_call",
  [sym_block_attribute] = "block_attribute",
  [sym__environment_variable] = "_environment_variable",
  [sym__call_signature] = "_call_signature",
  [sym_formal_parameters] = "formal_parameters",
  [sym__formal_parameter] = "_formal_parameter",
  [sym__expression] = "_expression",
  [sym__column_value] = "_column_value",
  [sym_array] = "array",
  [sym_new_line] = "new_line",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_datasource_block_repeat1] = "datasource_block_repeat1",
  [aux_sym_model_block_repeat1] = "model_block_repeat1",
  [aux_sym_formal_parameters_repeat1] = "formal_parameters_repeat1",
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
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_model] = {
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
  [sym_namespace_name] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_block_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_column_value] = {
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
  [sym_assignation] = {
    .visible = true,
    .named = true,
  },
  [sym_dot] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_datasource_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_type_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_model_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_datasource_block] = {
    .visible = true,
    .named = true,
  },
  [sym_model_block] = {
    .visible = true,
    .named = true,
  },
  [sym__model_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_column_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__datasource_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_assignee] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym__namespace_function_call] = {
    .visible = false,
    .named = true,
  },
  [sym_namespace_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_block_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__environment_variable] = {
    .visible = false,
    .named = true,
  },
  [sym__call_signature] = {
    .visible = false,
    .named = true,
  },
  [sym_formal_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym__formal_parameter] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__column_value] = {
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
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_datasource_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_model_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_formal_parameters_repeat1] = {
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
      if (lookahead == 0) ADVANCE(38);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == '@') ADVANCE(7);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == 'd') ADVANCE(10);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'm') ADVANCE(22);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == '@') ADVANCE(8);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == '@') ADVANCE(8);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == '@') ADVANCE(9);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 7:
      if (lookahead == '@') ADVANCE(33);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 8:
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 9:
      if (lookahead == '@') ADVANCE(35);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 'y') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 33:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 35:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(4);
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_datasource);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_namespace_name);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_namespace_name);
      if (lookahead == '.') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_namespace_name);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_namespace_name);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_block_name);
      if (lookahead == '.') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_block_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_column_value);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_column_value);
      if (lookahead == '?') ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_assignation);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 32},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 2},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_true] = ACTIONS(1),
    [sym_block_name] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_datasource] = ACTIONS(1),
    [sym_namespace_name] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_string_value] = ACTIONS(1),
    [anon_sym_model] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_assignation] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_type_definition] = STATE(5),
    [sym_model_definition] = STATE(5),
    [sym__definition] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [sym_datasource_definition] = STATE(5),
    [sym_source_file] = STATE(6),
    [anon_sym_type] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_datasource] = ACTIONS(7),
    [anon_sym_model] = ACTIONS(9),
  },
  [2] = {
    [sym_identifier] = ACTIONS(11),
  },
  [3] = {
    [sym_identifier] = ACTIONS(13),
  },
  [4] = {
    [sym_identifier] = ACTIONS(15),
  },
  [5] = {
    [sym_type_definition] = STATE(10),
    [sym_model_definition] = STATE(10),
    [sym__definition] = STATE(10),
    [sym_datasource_definition] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [anon_sym_type] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_datasource] = ACTIONS(7),
    [anon_sym_model] = ACTIONS(9),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(19),
  },
  [7] = {
    [sym_datasource_block] = STATE(12),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
  [8] = {
    [sym_identifier] = ACTIONS(23),
  },
  [9] = {
    [sym_model_block] = STATE(15),
    [anon_sym_LBRACE] = ACTIONS(25),
  },
  [10] = {
    [sym_type_definition] = STATE(10),
    [sym_model_definition] = STATE(10),
    [sym__definition] = STATE(10),
    [sym_datasource_definition] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [anon_sym_type] = ACTIONS(27),
    [ts_builtin_sym_end] = ACTIONS(30),
    [anon_sym_datasource] = ACTIONS(32),
    [anon_sym_model] = ACTIONS(35),
  },
  [11] = {
    [aux_sym_datasource_block_repeat1] = STATE(18),
    [sym__datasource_statement] = STATE(18),
    [anon_sym_RBRACE] = ACTIONS(38),
    [sym_identifier] = ACTIONS(40),
  },
  [12] = {
    [anon_sym_type] = ACTIONS(42),
    [ts_builtin_sym_end] = ACTIONS(42),
    [anon_sym_datasource] = ACTIONS(42),
    [anon_sym_model] = ACTIONS(42),
  },
  [13] = {
    [sym_namespace] = STATE(20),
    [sym_namespace_name] = ACTIONS(44),
  },
  [14] = {
    [aux_sym_model_block_repeat1] = STATE(24),
    [sym__model_statement] = STATE(24),
    [sym_column_statement] = STATE(24),
    [sym_block_attribute] = STATE(24),
    [anon_sym_RBRACE] = ACTIONS(46),
    [sym_block_name] = ACTIONS(48),
    [sym_identifier] = ACTIONS(50),
  },
  [15] = {
    [anon_sym_type] = ACTIONS(52),
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_datasource] = ACTIONS(52),
    [anon_sym_model] = ACTIONS(52),
  },
  [16] = {
    [anon_sym_type] = ACTIONS(54),
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_datasource] = ACTIONS(54),
    [anon_sym_model] = ACTIONS(54),
  },
  [17] = {
    [sym_assignation] = ACTIONS(56),
  },
  [18] = {
    [aux_sym_datasource_block_repeat1] = STATE(27),
    [sym__datasource_statement] = STATE(27),
    [anon_sym_RBRACE] = ACTIONS(58),
    [sym_identifier] = ACTIONS(40),
  },
  [19] = {
    [sym_namespace_arguments] = STATE(29),
    [anon_sym_type] = ACTIONS(60),
    [ts_builtin_sym_end] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(62),
    [anon_sym_datasource] = ACTIONS(60),
    [anon_sym_model] = ACTIONS(60),
  },
  [20] = {
    [anon_sym_type] = ACTIONS(64),
    [ts_builtin_sym_end] = ACTIONS(64),
    [anon_sym_datasource] = ACTIONS(64),
    [anon_sym_model] = ACTIONS(64),
  },
  [21] = {
    [anon_sym_type] = ACTIONS(66),
    [ts_builtin_sym_end] = ACTIONS(66),
    [anon_sym_datasource] = ACTIONS(66),
    [anon_sym_model] = ACTIONS(66),
  },
  [22] = {
    [sym__call_signature] = STATE(31),
    [sym_formal_parameters] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(68),
    [sym_block_name] = ACTIONS(68),
    [anon_sym_LPAREN] = ACTIONS(70),
    [sym_identifier] = ACTIONS(68),
  },
  [23] = {
    [sym__column_value] = STATE(33),
    [sym_column_value] = ACTIONS(72),
  },
  [24] = {
    [aux_sym_model_block_repeat1] = STATE(35),
    [sym__model_statement] = STATE(35),
    [sym_column_statement] = STATE(35),
    [sym_block_attribute] = STATE(35),
    [anon_sym_RBRACE] = ACTIONS(74),
    [sym_block_name] = ACTIONS(48),
    [sym_identifier] = ACTIONS(50),
  },
  [25] = {
    [sym_assignee] = STATE(39),
    [sym__environment_variable] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_true] = ACTIONS(76),
    [sym_identifier] = ACTIONS(78),
    [sym_string_value] = ACTIONS(80),
    [sym_false] = ACTIONS(76),
  },
  [26] = {
    [anon_sym_type] = ACTIONS(82),
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_datasource] = ACTIONS(82),
    [anon_sym_model] = ACTIONS(82),
  },
  [27] = {
    [aux_sym_datasource_block_repeat1] = STATE(27),
    [sym__datasource_statement] = STATE(27),
    [anon_sym_RBRACE] = ACTIONS(84),
    [sym_identifier] = ACTIONS(86),
  },
  [28] = {
    [sym__namespace_function_call] = STATE(40),
    [sym_string_value] = ACTIONS(89),
    [sym_number] = ACTIONS(89),
    [sym_identifier] = ACTIONS(91),
  },
  [29] = {
    [anon_sym_type] = ACTIONS(93),
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_datasource] = ACTIONS(93),
    [anon_sym_model] = ACTIONS(93),
  },
  [30] = {
    [sym_array] = STATE(44),
    [sym__formal_parameter] = STATE(44),
    [anon_sym_LBRACK] = ACTIONS(95),
    [sym_identifier] = ACTIONS(97),
    [sym_string_value] = ACTIONS(97),
    [anon_sym_RPAREN] = ACTIONS(99),
  },
  [31] = {
    [anon_sym_RBRACE] = ACTIONS(101),
    [sym_block_name] = ACTIONS(101),
    [sym_identifier] = ACTIONS(101),
  },
  [32] = {
    [sym_array] = STATE(45),
    [sym_namespace_name] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(105),
    [anon_sym_LF] = ACTIONS(107),
  },
  [33] = {
    [sym_namespace] = STATE(47),
    [sym_new_line] = STATE(48),
    [sym_namespace_name] = ACTIONS(109),
    [anon_sym_LF] = ACTIONS(111),
  },
  [34] = {
    [anon_sym_type] = ACTIONS(113),
    [ts_builtin_sym_end] = ACTIONS(113),
    [anon_sym_datasource] = ACTIONS(113),
    [anon_sym_model] = ACTIONS(113),
  },
  [35] = {
    [aux_sym_model_block_repeat1] = STATE(35),
    [sym__model_statement] = STATE(35),
    [sym_column_statement] = STATE(35),
    [sym_block_attribute] = STATE(35),
    [anon_sym_RBRACE] = ACTIONS(115),
    [sym_block_name] = ACTIONS(117),
    [sym_identifier] = ACTIONS(120),
  },
  [36] = {
    [anon_sym_RBRACE] = ACTIONS(123),
    [sym_identifier] = ACTIONS(123),
  },
  [37] = {
    [sym_dot] = ACTIONS(125),
  },
  [38] = {
    [anon_sym_RBRACE] = ACTIONS(127),
    [sym_identifier] = ACTIONS(127),
  },
  [39] = {
    [anon_sym_RBRACE] = ACTIONS(129),
    [sym_identifier] = ACTIONS(129),
  },
  [40] = {
    [anon_sym_RPAREN] = ACTIONS(131),
  },
  [41] = {
    [sym_namespace_function_call] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(133),
  },
  [42] = {
    [aux_sym_array_repeat1] = STATE(55),
    [sym__expression] = STATE(56),
    [sym_number] = ACTIONS(135),
    [sym_identifier] = ACTIONS(135),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(139),
  },
  [43] = {
    [anon_sym_RBRACE] = ACTIONS(141),
    [sym_block_name] = ACTIONS(141),
    [sym_identifier] = ACTIONS(141),
  },
  [44] = {
    [aux_sym_formal_parameters_repeat1] = STATE(59),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_RPAREN] = ACTIONS(145),
  },
  [45] = {
    [sym_namespace_name] = ACTIONS(147),
    [anon_sym_LF] = ACTIONS(149),
  },
  [46] = {
    [anon_sym_RBRACE] = ACTIONS(151),
    [sym_block_name] = ACTIONS(151),
    [sym_identifier] = ACTIONS(151),
  },
  [47] = {
    [sym_namespace] = STATE(60),
    [sym_new_line] = STATE(61),
    [sym_namespace_name] = ACTIONS(109),
    [anon_sym_LF] = ACTIONS(111),
  },
  [48] = {
    [anon_sym_RBRACE] = ACTIONS(153),
    [sym_block_name] = ACTIONS(153),
    [sym_identifier] = ACTIONS(153),
  },
  [49] = {
    [sym_identifier] = ACTIONS(155),
  },
  [50] = {
    [anon_sym_type] = ACTIONS(157),
    [ts_builtin_sym_end] = ACTIONS(157),
    [anon_sym_datasource] = ACTIONS(157),
    [anon_sym_model] = ACTIONS(157),
  },
  [51] = {
    [anon_sym_RPAREN] = ACTIONS(159),
  },
  [52] = {
    [anon_sym_RPAREN] = ACTIONS(161),
  },
  [53] = {
    [sym__expression] = STATE(64),
    [sym_number] = ACTIONS(163),
    [sym_identifier] = ACTIONS(163),
    [anon_sym_COMMA] = ACTIONS(165),
    [anon_sym_RBRACK] = ACTIONS(165),
  },
  [54] = {
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(167),
  },
  [55] = {
    [aux_sym_array_repeat1] = STATE(66),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(169),
  },
  [56] = {
    [aux_sym_array_repeat1] = STATE(67),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(169),
  },
  [57] = {
    [sym_array] = STATE(68),
    [sym__formal_parameter] = STATE(68),
    [sym_string_value] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(95),
    [sym_identifier] = ACTIONS(171),
  },
  [58] = {
    [anon_sym_RBRACE] = ACTIONS(173),
    [sym_block_name] = ACTIONS(173),
    [sym_identifier] = ACTIONS(173),
  },
  [59] = {
    [aux_sym_formal_parameters_repeat1] = STATE(70),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_RPAREN] = ACTIONS(175),
  },
  [60] = {
    [sym_new_line] = STATE(71),
    [anon_sym_LF] = ACTIONS(111),
  },
  [61] = {
    [anon_sym_RBRACE] = ACTIONS(177),
    [sym_block_name] = ACTIONS(177),
    [sym_identifier] = ACTIONS(177),
  },
  [62] = {
    [anon_sym_RBRACE] = ACTIONS(179),
    [sym_identifier] = ACTIONS(179),
  },
  [63] = {
    [anon_sym_RPAREN] = ACTIONS(181),
  },
  [64] = {
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_RBRACK] = ACTIONS(183),
  },
  [65] = {
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
  },
  [66] = {
    [aux_sym_array_repeat1] = STATE(66),
    [anon_sym_COMMA] = ACTIONS(187),
    [anon_sym_RBRACK] = ACTIONS(183),
  },
  [67] = {
    [aux_sym_array_repeat1] = STATE(66),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(190),
  },
  [68] = {
    [anon_sym_COMMA] = ACTIONS(192),
    [anon_sym_RPAREN] = ACTIONS(192),
  },
  [69] = {
    [anon_sym_RBRACE] = ACTIONS(194),
    [sym_block_name] = ACTIONS(194),
    [sym_identifier] = ACTIONS(194),
  },
  [70] = {
    [aux_sym_formal_parameters_repeat1] = STATE(70),
    [anon_sym_COMMA] = ACTIONS(196),
    [anon_sym_RPAREN] = ACTIONS(192),
  },
  [71] = {
    [anon_sym_RBRACE] = ACTIONS(199),
    [sym_block_name] = ACTIONS(199),
    [sym_identifier] = ACTIONS(199),
  },
  [72] = {
    [anon_sym_COMMA] = ACTIONS(201),
    [anon_sym_RPAREN] = ACTIONS(201),
  },
  [73] = {
    [sym_namespace_arguments] = STATE(74),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_LF] = ACTIONS(60),
    [sym_namespace_name] = ACTIONS(205),
  },
  [74] = {
    [sym_namespace_name] = ACTIONS(207),
    [anon_sym_LF] = ACTIONS(93),
  },
  [75] = {
    [sym_namespace_name] = ACTIONS(209),
    [anon_sym_LF] = ACTIONS(157),
  },
  [76] = {
    [sym_namespace_name] = ACTIONS(211),
    [anon_sym_LF] = ACTIONS(167),
  },
  [77] = {
    [sym_namespace_name] = ACTIONS(213),
    [anon_sym_LF] = ACTIONS(185),
  },
  [78] = {
    [sym_namespace_name] = ACTIONS(215),
    [anon_sym_LF] = ACTIONS(201),
  },
  [79] = {
    [anon_sym_RPAREN] = ACTIONS(217),
  },
  [80] = {
    [aux_sym_array_repeat1] = STATE(81),
    [sym__expression] = STATE(82),
    [sym_number] = ACTIONS(219),
    [sym_identifier] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(221),
  },
  [81] = {
    [aux_sym_array_repeat1] = STATE(66),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(223),
  },
  [82] = {
    [aux_sym_array_repeat1] = STATE(83),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(223),
  },
  [83] = {
    [aux_sym_array_repeat1] = STATE(66),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(225),
  },
  [84] = {
    [sym__namespace_function_call] = STATE(79),
    [sym_number] = ACTIONS(227),
    [sym_identifier] = ACTIONS(91),
    [sym_string_value] = ACTIONS(227),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(3),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(7),
  [13] = {.count = 1, .reusable = true}, SHIFT(8),
  [15] = {.count = 1, .reusable = true}, SHIFT(9),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [19] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [21] = {.count = 1, .reusable = true}, SHIFT(11),
  [23] = {.count = 1, .reusable = true}, SHIFT(13),
  [25] = {.count = 1, .reusable = true}, SHIFT(14),
  [27] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [30] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [32] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [35] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [38] = {.count = 1, .reusable = true}, SHIFT(16),
  [40] = {.count = 1, .reusable = true}, SHIFT(17),
  [42] = {.count = 1, .reusable = true}, REDUCE(sym_datasource_definition, 3),
  [44] = {.count = 1, .reusable = true}, SHIFT(19),
  [46] = {.count = 1, .reusable = true}, SHIFT(21),
  [48] = {.count = 1, .reusable = true}, SHIFT(22),
  [50] = {.count = 1, .reusable = true}, SHIFT(23),
  [52] = {.count = 1, .reusable = true}, REDUCE(sym_model_definition, 3),
  [54] = {.count = 1, .reusable = true}, REDUCE(sym_datasource_block, 2),
  [56] = {.count = 1, .reusable = true}, SHIFT(25),
  [58] = {.count = 1, .reusable = true}, SHIFT(26),
  [60] = {.count = 1, .reusable = true}, REDUCE(sym_namespace, 1),
  [62] = {.count = 1, .reusable = true}, SHIFT(28),
  [64] = {.count = 1, .reusable = true}, REDUCE(sym_type_definition, 4),
  [66] = {.count = 1, .reusable = true}, REDUCE(sym_model_block, 2),
  [68] = {.count = 1, .reusable = true}, REDUCE(sym_block_attribute, 1),
  [70] = {.count = 1, .reusable = true}, SHIFT(30),
  [72] = {.count = 1, .reusable = true}, SHIFT(32),
  [74] = {.count = 1, .reusable = true}, SHIFT(34),
  [76] = {.count = 1, .reusable = false}, SHIFT(36),
  [78] = {.count = 1, .reusable = false}, SHIFT(37),
  [80] = {.count = 1, .reusable = true}, SHIFT(38),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym_datasource_block, 3),
  [84] = {.count = 1, .reusable = true}, REDUCE(aux_sym_datasource_block_repeat1, 2),
  [86] = {.count = 2, .reusable = true}, REDUCE(aux_sym_datasource_block_repeat1, 2), SHIFT_REPEAT(17),
  [89] = {.count = 1, .reusable = true}, SHIFT(40),
  [91] = {.count = 1, .reusable = true}, SHIFT(41),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_namespace, 2),
  [95] = {.count = 1, .reusable = true}, SHIFT(42),
  [97] = {.count = 1, .reusable = true}, SHIFT(44),
  [99] = {.count = 1, .reusable = true}, SHIFT(43),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_block_attribute, 2),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym__column_value, 1),
  [105] = {.count = 1, .reusable = false}, SHIFT(80),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym__column_value, 1),
  [109] = {.count = 1, .reusable = false}, SHIFT(73),
  [111] = {.count = 1, .reusable = true}, SHIFT(46),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_model_block, 3),
  [115] = {.count = 1, .reusable = true}, REDUCE(aux_sym_model_block_repeat1, 2),
  [117] = {.count = 2, .reusable = true}, REDUCE(aux_sym_model_block_repeat1, 2), SHIFT_REPEAT(22),
  [120] = {.count = 2, .reusable = true}, REDUCE(aux_sym_model_block_repeat1, 2), SHIFT_REPEAT(23),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [125] = {.count = 1, .reusable = true}, SHIFT(49),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_assignee, 1),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym__datasource_statement, 3),
  [131] = {.count = 1, .reusable = true}, SHIFT(50),
  [133] = {.count = 1, .reusable = true}, SHIFT(51),
  [135] = {.count = 1, .reusable = true}, SHIFT(56),
  [137] = {.count = 1, .reusable = true}, SHIFT(53),
  [139] = {.count = 1, .reusable = true}, SHIFT(54),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_formal_parameters, 2),
  [143] = {.count = 1, .reusable = true}, SHIFT(57),
  [145] = {.count = 1, .reusable = true}, SHIFT(58),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym__column_value, 2),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym__column_value, 2),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_new_line, 1),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_column_statement, 3),
  [155] = {.count = 1, .reusable = true}, SHIFT(62),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_arguments, 3),
  [159] = {.count = 1, .reusable = true}, SHIFT(63),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym__namespace_function_call, 2),
  [163] = {.count = 1, .reusable = true}, SHIFT(64),
  [165] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat1, 1),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [169] = {.count = 1, .reusable = true}, SHIFT(65),
  [171] = {.count = 1, .reusable = true}, SHIFT(68),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_formal_parameters, 3),
  [175] = {.count = 1, .reusable = true}, SHIFT(69),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_column_statement, 4),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym__environment_variable, 3),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_function_call, 2),
  [183] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [187] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(53),
  [190] = {.count = 1, .reusable = true}, SHIFT(72),
  [192] = {.count = 1, .reusable = true}, REDUCE(aux_sym_formal_parameters_repeat1, 2),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_formal_parameters, 4),
  [196] = {.count = 2, .reusable = true}, REDUCE(aux_sym_formal_parameters_repeat1, 2), SHIFT_REPEAT(57),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_column_statement, 5),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_array, 4),
  [203] = {.count = 1, .reusable = false}, SHIFT(84),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_namespace, 1),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym_namespace, 2),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_arguments, 3),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_array, 2),
  [213] = {.count = 1, .reusable = false}, REDUCE(sym_array, 3),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym_array, 4),
  [217] = {.count = 1, .reusable = true}, SHIFT(75),
  [219] = {.count = 1, .reusable = true}, SHIFT(82),
  [221] = {.count = 1, .reusable = true}, SHIFT(76),
  [223] = {.count = 1, .reusable = true}, SHIFT(77),
  [225] = {.count = 1, .reusable = true}, SHIFT(78),
  [227] = {.count = 1, .reusable = true}, SHIFT(79),
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
