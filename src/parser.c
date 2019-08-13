#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 85
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_datasource = 1,
  anon_sym_type = 2,
  anon_sym_model = 3,
  sym_comment = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  sym_namespace_name = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_COLON = 10,
  sym_block_name = 11,
  anon_sym_COMMA = 12,
  sym_identifier = 13,
  sym_column_value = 14,
  sym_string_value = 15,
  sym_number = 16,
  sym_assignation = 17,
  sym_dot = 18,
  anon_sym_LBRACK = 19,
  anon_sym_RBRACK = 20,
  anon_sym_LF = 21,
  sym_true = 22,
  sym_false = 23,
  sym_source_file = 24,
  sym__definition = 25,
  sym_datasource_definition = 26,
  sym_type_definition = 27,
  sym_model_definition = 28,
  sym_datasource_block = 29,
  sym_model_block = 30,
  sym__model_statement = 31,
  sym_column_statement = 32,
  sym__datasource_statement = 33,
  sym_assignee = 34,
  sym_namespace = 35,
  sym_namespace_arguments = 36,
  sym__namespace_function_call = 37,
  sym_namespace_function_call = 38,
  sym_block_attribute = 39,
  sym__environment_variable = 40,
  sym__call_signature = 41,
  sym_formal_parameters = 42,
  sym__formal_parameter = 43,
  sym__expression = 44,
  sym__column_value = 45,
  sym_array = 46,
  sym_new_line = 47,
  sym_boolean = 48,
  aux_sym_source_file_repeat1 = 49,
  aux_sym_datasource_block_repeat1 = 50,
  aux_sym_model_block_repeat1 = 51,
  aux_sym_formal_parameters_repeat1 = 52,
  aux_sym_array_repeat1 = 53,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_datasource] = "datasource",
  [anon_sym_type] = "type",
  [anon_sym_model] = "model",
  [sym_comment] = "comment",
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
      if (lookahead == 0) ADVANCE(39);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '@') ADVANCE(9);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '@') ADVANCE(10);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '@') ADVANCE(10);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(73);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(3)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(6)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(7)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 11:
      if (lookahead == '@') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(33);
      if (lookahead == 'y') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 34:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 36:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(4);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_datasource);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_namespace_name);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_namespace_name);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_namespace_name);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_namespace_name);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_block_name);
      if (lookahead == '.') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_block_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(57);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_column_value);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_column_value);
      if (lookahead == '?') ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_assignation);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
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
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 2},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_COLON] = ACTIONS(1),
    [sym_string_value] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_datasource] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_model] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_assignation] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_block_name] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [sym_namespace_name] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_type_definition] = STATE(5),
    [sym_model_definition] = STATE(5),
    [sym__definition] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [sym_datasource_definition] = STATE(5),
    [sym_source_file] = STATE(6),
    [anon_sym_type] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_datasource] = ACTIONS(9),
    [anon_sym_model] = ACTIONS(11),
  },
  [2] = {
    [sym_identifier] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_identifier] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_identifier] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_type_definition] = STATE(10),
    [sym_model_definition] = STATE(10),
    [sym__definition] = STATE(10),
    [sym_datasource_definition] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [anon_sym_type] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [anon_sym_datasource] = ACTIONS(9),
    [anon_sym_model] = ACTIONS(11),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_datasource_block] = STATE(12),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_identifier] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_model_block] = STATE(15),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_type_definition] = STATE(10),
    [sym_model_definition] = STATE(10),
    [sym__definition] = STATE(10),
    [sym_datasource_definition] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [anon_sym_type] = ACTIONS(29),
    [ts_builtin_sym_end] = ACTIONS(32),
    [sym_comment] = ACTIONS(3),
    [anon_sym_datasource] = ACTIONS(34),
    [anon_sym_model] = ACTIONS(37),
  },
  [11] = {
    [aux_sym_datasource_block_repeat1] = STATE(18),
    [sym__datasource_statement] = STATE(18),
    [sym_identifier] = ACTIONS(40),
    [anon_sym_RBRACE] = ACTIONS(42),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [anon_sym_type] = ACTIONS(44),
    [ts_builtin_sym_end] = ACTIONS(44),
    [sym_comment] = ACTIONS(3),
    [anon_sym_datasource] = ACTIONS(44),
    [anon_sym_model] = ACTIONS(44),
  },
  [13] = {
    [sym_namespace] = STATE(20),
    [sym_namespace_name] = ACTIONS(46),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [aux_sym_model_block_repeat1] = STATE(24),
    [sym__model_statement] = STATE(24),
    [sym_column_statement] = STATE(24),
    [sym_block_attribute] = STATE(24),
    [sym_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(50),
    [sym_block_name] = ACTIONS(52),
  },
  [15] = {
    [anon_sym_type] = ACTIONS(54),
    [ts_builtin_sym_end] = ACTIONS(54),
    [sym_comment] = ACTIONS(3),
    [anon_sym_datasource] = ACTIONS(54),
    [anon_sym_model] = ACTIONS(54),
  },
  [16] = {
    [sym_assignation] = ACTIONS(56),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [anon_sym_type] = ACTIONS(58),
    [ts_builtin_sym_end] = ACTIONS(58),
    [sym_comment] = ACTIONS(3),
    [anon_sym_datasource] = ACTIONS(58),
    [anon_sym_model] = ACTIONS(58),
  },
  [18] = {
    [aux_sym_datasource_block_repeat1] = STATE(27),
    [sym__datasource_statement] = STATE(27),
    [sym_identifier] = ACTIONS(40),
    [anon_sym_RBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym_namespace_arguments] = STATE(29),
    [anon_sym_type] = ACTIONS(62),
    [ts_builtin_sym_end] = ACTIONS(62),
    [sym_comment] = ACTIONS(3),
    [anon_sym_datasource] = ACTIONS(62),
    [anon_sym_model] = ACTIONS(62),
    [anon_sym_LPAREN] = ACTIONS(64),
  },
  [20] = {
    [anon_sym_type] = ACTIONS(66),
    [ts_builtin_sym_end] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
    [anon_sym_datasource] = ACTIONS(66),
    [anon_sym_model] = ACTIONS(66),
  },
  [21] = {
    [sym__column_value] = STATE(31),
    [sym_column_value] = ACTIONS(68),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [anon_sym_type] = ACTIONS(70),
    [ts_builtin_sym_end] = ACTIONS(70),
    [sym_comment] = ACTIONS(3),
    [anon_sym_datasource] = ACTIONS(70),
    [anon_sym_model] = ACTIONS(70),
  },
  [23] = {
    [sym__call_signature] = STATE(33),
    [sym_formal_parameters] = STATE(33),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(72),
    [sym_block_name] = ACTIONS(72),
    [anon_sym_LPAREN] = ACTIONS(74),
  },
  [24] = {
    [aux_sym_model_block_repeat1] = STATE(35),
    [sym__model_statement] = STATE(35),
    [sym_column_statement] = STATE(35),
    [sym_block_attribute] = STATE(35),
    [sym_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(76),
    [sym_block_name] = ACTIONS(52),
  },
  [25] = {
    [sym_assignee] = STATE(39),
    [sym__environment_variable] = STATE(37),
    [sym_boolean] = STATE(37),
    [sym_identifier] = ACTIONS(78),
    [sym_string_value] = ACTIONS(80),
    [sym_false] = ACTIONS(82),
    [sym_comment] = ACTIONS(3),
    [sym_true] = ACTIONS(82),
  },
  [26] = {
    [anon_sym_type] = ACTIONS(84),
    [ts_builtin_sym_end] = ACTIONS(84),
    [sym_comment] = ACTIONS(3),
    [anon_sym_datasource] = ACTIONS(84),
    [anon_sym_model] = ACTIONS(84),
  },
  [27] = {
    [aux_sym_datasource_block_repeat1] = STATE(27),
    [sym__datasource_statement] = STATE(27),
    [sym_identifier] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym__namespace_function_call] = STATE(41),
    [sym_identifier] = ACTIONS(91),
    [sym_string_value] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(93),
  },
  [29] = {
    [anon_sym_type] = ACTIONS(95),
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_comment] = ACTIONS(3),
    [anon_sym_datasource] = ACTIONS(95),
    [anon_sym_model] = ACTIONS(95),
  },
  [30] = {
    [sym_array] = STATE(43),
    [anon_sym_LF] = ACTIONS(97),
    [sym_namespace_name] = ACTIONS(99),
    [sym_comment] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(103),
  },
  [31] = {
    [sym_namespace] = STATE(45),
    [sym_new_line] = STATE(46),
    [anon_sym_LF] = ACTIONS(105),
    [sym_namespace_name] = ACTIONS(107),
    [sym_comment] = ACTIONS(101),
  },
  [32] = {
    [sym_array] = STATE(48),
    [sym__formal_parameter] = STATE(48),
    [sym_identifier] = ACTIONS(109),
    [sym_string_value] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(113),
  },
  [33] = {
    [sym_identifier] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(115),
    [sym_block_name] = ACTIONS(115),
  },
  [34] = {
    [anon_sym_type] = ACTIONS(117),
    [ts_builtin_sym_end] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
    [anon_sym_datasource] = ACTIONS(117),
    [anon_sym_model] = ACTIONS(117),
  },
  [35] = {
    [aux_sym_model_block_repeat1] = STATE(35),
    [sym__model_statement] = STATE(35),
    [sym_column_statement] = STATE(35),
    [sym_block_attribute] = STATE(35),
    [sym_identifier] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(122),
    [sym_block_name] = ACTIONS(124),
  },
  [36] = {
    [sym_dot] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [sym_identifier] = ACTIONS(129),
    [anon_sym_RBRACE] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [sym_identifier] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [sym_identifier] = ACTIONS(133),
    [anon_sym_RBRACE] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
  },
  [40] = {
    [sym_namespace_function_call] = STATE(51),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(135),
  },
  [41] = {
    [anon_sym_RPAREN] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
  },
  [42] = {
    [aux_sym_array_repeat1] = STATE(55),
    [sym__expression] = STATE(56),
    [sym_identifier] = ACTIONS(139),
    [anon_sym_RBRACK] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(139),
  },
  [43] = {
    [anon_sym_LF] = ACTIONS(145),
    [sym_namespace_name] = ACTIONS(147),
    [sym_comment] = ACTIONS(101),
  },
  [44] = {
    [sym_identifier] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(149),
    [sym_block_name] = ACTIONS(149),
  },
  [45] = {
    [sym_namespace] = STATE(57),
    [sym_new_line] = STATE(58),
    [anon_sym_LF] = ACTIONS(105),
    [sym_namespace_name] = ACTIONS(107),
    [sym_comment] = ACTIONS(101),
  },
  [46] = {
    [sym_identifier] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(151),
    [sym_block_name] = ACTIONS(151),
  },
  [47] = {
    [sym_identifier] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(153),
    [sym_block_name] = ACTIONS(153),
  },
  [48] = {
    [aux_sym_formal_parameters_repeat1] = STATE(61),
    [anon_sym_RPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(157),
  },
  [49] = {
    [sym_identifier] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
  },
  [50] = {
    [anon_sym_RPAREN] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
  },
  [51] = {
    [anon_sym_RPAREN] = ACTIONS(163),
    [sym_comment] = ACTIONS(3),
  },
  [52] = {
    [anon_sym_type] = ACTIONS(165),
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
    [anon_sym_datasource] = ACTIONS(165),
    [anon_sym_model] = ACTIONS(165),
  },
  [53] = {
    [sym__expression] = STATE(64),
    [sym_identifier] = ACTIONS(167),
    [anon_sym_RBRACK] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(169),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(167),
  },
  [54] = {
    [anon_sym_LF] = ACTIONS(171),
    [sym_namespace_name] = ACTIONS(173),
    [sym_comment] = ACTIONS(101),
  },
  [55] = {
    [aux_sym_array_repeat1] = STATE(66),
    [anon_sym_COMMA] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(175),
  },
  [56] = {
    [aux_sym_array_repeat1] = STATE(67),
    [anon_sym_COMMA] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(175),
  },
  [57] = {
    [sym_new_line] = STATE(68),
    [anon_sym_LF] = ACTIONS(105),
    [sym_comment] = ACTIONS(101),
  },
  [58] = {
    [sym_identifier] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(177),
    [sym_block_name] = ACTIONS(177),
  },
  [59] = {
    [sym_identifier] = ACTIONS(179),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(179),
    [sym_block_name] = ACTIONS(179),
  },
  [60] = {
    [sym_array] = STATE(69),
    [sym__formal_parameter] = STATE(69),
    [sym_identifier] = ACTIONS(181),
    [sym_string_value] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(113),
  },
  [61] = {
    [aux_sym_formal_parameters_repeat1] = STATE(71),
    [anon_sym_RPAREN] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(157),
  },
  [62] = {
    [sym_identifier] = ACTIONS(185),
    [anon_sym_RBRACE] = ACTIONS(185),
    [sym_comment] = ACTIONS(3),
  },
  [63] = {
    [anon_sym_RPAREN] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
  },
  [64] = {
    [anon_sym_RBRACK] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(189),
  },
  [65] = {
    [anon_sym_LF] = ACTIONS(191),
    [sym_namespace_name] = ACTIONS(193),
    [sym_comment] = ACTIONS(101),
  },
  [66] = {
    [aux_sym_array_repeat1] = STATE(66),
    [anon_sym_RBRACK] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(195),
  },
  [67] = {
    [aux_sym_array_repeat1] = STATE(66),
    [anon_sym_COMMA] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(198),
  },
  [68] = {
    [sym_identifier] = ACTIONS(200),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(200),
    [sym_block_name] = ACTIONS(200),
  },
  [69] = {
    [anon_sym_RPAREN] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(202),
  },
  [70] = {
    [sym_identifier] = ACTIONS(204),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(204),
    [sym_block_name] = ACTIONS(204),
  },
  [71] = {
    [aux_sym_formal_parameters_repeat1] = STATE(71),
    [anon_sym_RPAREN] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(206),
  },
  [72] = {
    [anon_sym_LF] = ACTIONS(209),
    [sym_namespace_name] = ACTIONS(211),
    [sym_comment] = ACTIONS(101),
  },
  [73] = {
    [sym_namespace_arguments] = STATE(74),
    [anon_sym_LF] = ACTIONS(62),
    [sym_namespace_name] = ACTIONS(213),
    [sym_comment] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(215),
  },
  [74] = {
    [anon_sym_LF] = ACTIONS(95),
    [sym_namespace_name] = ACTIONS(217),
    [sym_comment] = ACTIONS(101),
  },
  [75] = {
    [anon_sym_LF] = ACTIONS(165),
    [sym_namespace_name] = ACTIONS(219),
    [sym_comment] = ACTIONS(101),
  },
  [76] = {
    [anon_sym_RPAREN] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(171),
  },
  [77] = {
    [anon_sym_RPAREN] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(191),
  },
  [78] = {
    [anon_sym_RPAREN] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(209),
  },
  [79] = {
    [anon_sym_RPAREN] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
  },
  [80] = {
    [aux_sym_array_repeat1] = STATE(81),
    [sym__expression] = STATE(82),
    [sym_identifier] = ACTIONS(223),
    [anon_sym_RBRACK] = ACTIONS(225),
    [anon_sym_COMMA] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(223),
  },
  [81] = {
    [aux_sym_array_repeat1] = STATE(66),
    [anon_sym_COMMA] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(227),
  },
  [82] = {
    [aux_sym_array_repeat1] = STATE(83),
    [anon_sym_COMMA] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(227),
  },
  [83] = {
    [aux_sym_array_repeat1] = STATE(66),
    [anon_sym_COMMA] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(229),
  },
  [84] = {
    [sym__namespace_function_call] = STATE(79),
    [sym_identifier] = ACTIONS(91),
    [sym_string_value] = ACTIONS(231),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(231),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(3),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [9] = {.count = 1, .reusable = true}, SHIFT(2),
  [11] = {.count = 1, .reusable = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = true}, SHIFT(7),
  [15] = {.count = 1, .reusable = true}, SHIFT(8),
  [17] = {.count = 1, .reusable = true}, SHIFT(9),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [21] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [23] = {.count = 1, .reusable = true}, SHIFT(11),
  [25] = {.count = 1, .reusable = true}, SHIFT(13),
  [27] = {.count = 1, .reusable = true}, SHIFT(14),
  [29] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [32] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [34] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [37] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [40] = {.count = 1, .reusable = true}, SHIFT(16),
  [42] = {.count = 1, .reusable = true}, SHIFT(17),
  [44] = {.count = 1, .reusable = true}, REDUCE(sym_datasource_definition, 3),
  [46] = {.count = 1, .reusable = true}, SHIFT(19),
  [48] = {.count = 1, .reusable = true}, SHIFT(21),
  [50] = {.count = 1, .reusable = true}, SHIFT(22),
  [52] = {.count = 1, .reusable = true}, SHIFT(23),
  [54] = {.count = 1, .reusable = true}, REDUCE(sym_model_definition, 3),
  [56] = {.count = 1, .reusable = true}, SHIFT(25),
  [58] = {.count = 1, .reusable = true}, REDUCE(sym_datasource_block, 2),
  [60] = {.count = 1, .reusable = true}, SHIFT(26),
  [62] = {.count = 1, .reusable = true}, REDUCE(sym_namespace, 1),
  [64] = {.count = 1, .reusable = true}, SHIFT(28),
  [66] = {.count = 1, .reusable = true}, REDUCE(sym_type_definition, 4),
  [68] = {.count = 1, .reusable = true}, SHIFT(30),
  [70] = {.count = 1, .reusable = true}, REDUCE(sym_model_block, 2),
  [72] = {.count = 1, .reusable = true}, REDUCE(sym_block_attribute, 1),
  [74] = {.count = 1, .reusable = true}, SHIFT(32),
  [76] = {.count = 1, .reusable = true}, SHIFT(34),
  [78] = {.count = 1, .reusable = false}, SHIFT(36),
  [80] = {.count = 1, .reusable = true}, SHIFT(37),
  [82] = {.count = 1, .reusable = false}, SHIFT(38),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym_datasource_block, 3),
  [86] = {.count = 2, .reusable = true}, REDUCE(aux_sym_datasource_block_repeat1, 2), SHIFT_REPEAT(16),
  [89] = {.count = 1, .reusable = true}, REDUCE(aux_sym_datasource_block_repeat1, 2),
  [91] = {.count = 1, .reusable = true}, SHIFT(40),
  [93] = {.count = 1, .reusable = true}, SHIFT(41),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_namespace, 2),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym__column_value, 1),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym__column_value, 1),
  [101] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [103] = {.count = 1, .reusable = false}, SHIFT(42),
  [105] = {.count = 1, .reusable = true}, SHIFT(44),
  [107] = {.count = 1, .reusable = false}, SHIFT(73),
  [109] = {.count = 1, .reusable = true}, SHIFT(48),
  [111] = {.count = 1, .reusable = true}, SHIFT(47),
  [113] = {.count = 1, .reusable = true}, SHIFT(80),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_block_attribute, 2),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_model_block, 3),
  [119] = {.count = 2, .reusable = true}, REDUCE(aux_sym_model_block_repeat1, 2), SHIFT_REPEAT(21),
  [122] = {.count = 1, .reusable = true}, REDUCE(aux_sym_model_block_repeat1, 2),
  [124] = {.count = 2, .reusable = true}, REDUCE(aux_sym_model_block_repeat1, 2), SHIFT_REPEAT(23),
  [127] = {.count = 1, .reusable = true}, SHIFT(49),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_assignee, 1),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym__datasource_statement, 3),
  [135] = {.count = 1, .reusable = true}, SHIFT(50),
  [137] = {.count = 1, .reusable = true}, SHIFT(52),
  [139] = {.count = 1, .reusable = true}, SHIFT(56),
  [141] = {.count = 1, .reusable = true}, SHIFT(54),
  [143] = {.count = 1, .reusable = true}, SHIFT(53),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym__column_value, 2),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym__column_value, 2),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_new_line, 1),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_column_statement, 3),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_formal_parameters, 2),
  [155] = {.count = 1, .reusable = true}, SHIFT(59),
  [157] = {.count = 1, .reusable = true}, SHIFT(60),
  [159] = {.count = 1, .reusable = true}, SHIFT(62),
  [161] = {.count = 1, .reusable = true}, SHIFT(63),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym__namespace_function_call, 2),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_arguments, 3),
  [167] = {.count = 1, .reusable = true}, SHIFT(64),
  [169] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat1, 1),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym_array, 2),
  [175] = {.count = 1, .reusable = true}, SHIFT(65),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_column_statement, 4),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_formal_parameters, 3),
  [181] = {.count = 1, .reusable = true}, SHIFT(69),
  [183] = {.count = 1, .reusable = true}, SHIFT(70),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym__environment_variable, 3),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_function_call, 2),
  [189] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym_array, 3),
  [195] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(53),
  [198] = {.count = 1, .reusable = true}, SHIFT(72),
  [200] = {.count = 1, .reusable = true}, REDUCE(sym_column_statement, 5),
  [202] = {.count = 1, .reusable = true}, REDUCE(aux_sym_formal_parameters_repeat1, 2),
  [204] = {.count = 1, .reusable = true}, REDUCE(sym_formal_parameters, 4),
  [206] = {.count = 2, .reusable = true}, REDUCE(aux_sym_formal_parameters_repeat1, 2), SHIFT_REPEAT(60),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_array, 4),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_array, 4),
  [213] = {.count = 1, .reusable = false}, REDUCE(sym_namespace, 1),
  [215] = {.count = 1, .reusable = false}, SHIFT(84),
  [217] = {.count = 1, .reusable = false}, REDUCE(sym_namespace, 2),
  [219] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_arguments, 3),
  [221] = {.count = 1, .reusable = true}, SHIFT(75),
  [223] = {.count = 1, .reusable = true}, SHIFT(82),
  [225] = {.count = 1, .reusable = true}, SHIFT(76),
  [227] = {.count = 1, .reusable = true}, SHIFT(77),
  [229] = {.count = 1, .reusable = true}, SHIFT(78),
  [231] = {.count = 1, .reusable = true}, SHIFT(79),
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
