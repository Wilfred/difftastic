#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 79
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym__identifier = 1,
  sym_comment = 2,
  sym_true = 3,
  sym_false = 4,
  sym_null = 5,
  sym_float = 6,
  sym_integer = 7,
  anon_sym_LBRACK = 8,
  anon_sym_RBRACK = 9,
  anon_sym_EQ = 10,
  sym_path = 11,
  anon_sym_COLON = 12,
  anon_sym_LBRACE = 13,
  anon_sym_COMMA = 14,
  anon_sym_RBRACE = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  sym_string = 18,
  sym_resource = 19,
  sym_identifier = 20,
  sym__value = 21,
  sym_section = 22,
  sym__attributes = 23,
  sym_attribute = 24,
  sym__properties = 25,
  sym_property = 26,
  sym_pair = 27,
  sym_dictionary = 28,
  sym_array = 29,
  sym_arguments = 30,
  sym_constructor = 31,
  aux_sym_resource_repeat1 = 32,
  aux_sym_resource_repeat2 = 33,
  aux_sym__attributes_repeat1 = 34,
  aux_sym_dictionary_repeat1 = 35,
  aux_sym_array_repeat1 = 36,
  aux_sym_arguments_repeat1 = 37,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifier] = "_identifier",
  [sym_comment] = "comment",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_float] = "float",
  [sym_integer] = "integer",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [sym_path] = "path",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_string] = "string",
  [sym_resource] = "resource",
  [sym_identifier] = "identifier",
  [sym__value] = "_value",
  [sym_section] = "section",
  [sym__attributes] = "_attributes",
  [sym_attribute] = "attribute",
  [sym__properties] = "_properties",
  [sym_property] = "property",
  [sym_pair] = "pair",
  [sym_dictionary] = "dictionary",
  [sym_array] = "array",
  [sym_arguments] = "arguments",
  [sym_constructor] = "constructor",
  [aux_sym_resource_repeat1] = "resource_repeat1",
  [aux_sym_resource_repeat2] = "resource_repeat2",
  [aux_sym__attributes_repeat1] = "_attributes_repeat1",
  [aux_sym_dictionary_repeat1] = "dictionary_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
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
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_resource] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym__attributes] = {
    .visible = false,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__properties] = {
    .visible = false,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_resource_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_resource_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dictionary_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
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
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(6);
      if (lookahead == '0')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(10);
      if (lookahead == '[')
        ADVANCE(11);
      if (lookahead == '\\')
        SKIP(12);
      if (lookahead == ']')
        ADVANCE(13);
      if (lookahead == '{')
        ADVANCE(14);
      if (lookahead == '}')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == '-')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(21);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(22);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(23);
      if (lookahead == '_')
        ADVANCE(24);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(16);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 12:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(0);
      if (lookahead == '\r')
        SKIP(26);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == '_')
        ADVANCE(24);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-')
        ADVANCE(18);
      if (lookahead == '_')
        ADVANCE(27);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-')
        ADVANCE(29);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == '_')
        ADVANCE(32);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == '_')
        ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == '_')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(37);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == '+')
        ADVANCE(38);
      if (lookahead == '-')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(0);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-')
        ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 28:
      if (lookahead == '+')
        ADVANCE(40);
      if (lookahead == '-')
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(41);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == '+')
        ADVANCE(42);
      if (lookahead == '-')
        ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(43);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-')
        ADVANCE(29);
      if (lookahead == '_')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(32);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(33);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(35);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '-')
        ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == '_')
        ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '-')
        ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-')
        ADVANCE(48);
      if (lookahead == '_')
        ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '-')
        ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-')
        ADVANCE(50);
      if (lookahead == '_')
        ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-')
        ADVANCE(29);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
      END_STATE();
    case 45:
      if (lookahead == '+')
        ADVANCE(52);
      if (lookahead == '-')
        ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-')
        ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(41);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-')
        ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(41);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(43);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-')
        ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(43);
      END_STATE();
    case 52:
      if (lookahead == '-')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-')
        ADVANCE(54);
      if (lookahead == '_')
        ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      END_STATE();
    case 56:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '[')
        ADVANCE(11);
      if (lookahead == '\\')
        SKIP(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(58);
      END_STATE();
    case 57:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(56);
      if (lookahead == '\r')
        SKIP(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_path);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(58);
      END_STATE();
    case 59:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(56);
      END_STATE();
    case 60:
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(10);
      if (lookahead == '\\')
        SKIP(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(60);
      END_STATE();
    case 61:
      if (lookahead == '\n')
        SKIP(60);
      if (lookahead == '\r')
        SKIP(62);
      END_STATE();
    case 62:
      if (lookahead == '\n')
        SKIP(60);
      END_STATE();
    case 63:
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(6);
      if (lookahead == '0')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '[')
        ADVANCE(11);
      if (lookahead == '\\')
        SKIP(64);
      if (lookahead == ']')
        ADVANCE(13);
      if (lookahead == '{')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(63);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 64:
      if (lookahead == '\n')
        SKIP(63);
      if (lookahead == '\r')
        SKIP(65);
      END_STATE();
    case 65:
      if (lookahead == '\n')
        SKIP(63);
      END_STATE();
    case 66:
      if (lookahead == '(')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(10);
      if (lookahead == '\\')
        SKIP(67);
      if (lookahead == ']')
        ADVANCE(13);
      if (lookahead == '}')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 67:
      if (lookahead == '\n')
        SKIP(66);
      if (lookahead == '\r')
        SKIP(68);
      END_STATE();
    case 68:
      if (lookahead == '\n')
        SKIP(66);
      END_STATE();
    case 69:
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '\\')
        SKIP(70);
      if (lookahead == '}')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(69);
      END_STATE();
    case 70:
      if (lookahead == '\n')
        SKIP(69);
      if (lookahead == '\r')
        SKIP(71);
      END_STATE();
    case 71:
      if (lookahead == '\n')
        SKIP(69);
      END_STATE();
    case 72:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '[')
        ADVANCE(11);
      if (lookahead == '\\')
        SKIP(73);
      if (lookahead == ']')
        ADVANCE(13);
      if (lookahead == '}')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(58);
      END_STATE();
    case 73:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(72);
      if (lookahead == '\r')
        SKIP(74);
      END_STATE();
    case 74:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(72);
      END_STATE();
    case 75:
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '\\')
        SKIP(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(75);
      END_STATE();
    case 76:
      if (lookahead == '\n')
        SKIP(75);
      if (lookahead == '\r')
        SKIP(77);
      END_STATE();
    case 77:
      if (lookahead == '\n')
        SKIP(75);
      END_STATE();
    case 78:
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '\\')
        SKIP(79);
      if (lookahead == ']')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(78);
      END_STATE();
    case 79:
      if (lookahead == '\n')
        SKIP(78);
      if (lookahead == '\r')
        SKIP(80);
      END_STATE();
    case 80:
      if (lookahead == '\n')
        SKIP(78);
      END_STATE();
    case 81:
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(6);
      if (lookahead == '0')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '[')
        ADVANCE(11);
      if (lookahead == '\\')
        SKIP(82);
      if (lookahead == '{')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(81);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 82:
      if (lookahead == '\n')
        SKIP(81);
      if (lookahead == '\r')
        SKIP(83);
      END_STATE();
    case 83:
      if (lookahead == '\n')
        SKIP(81);
      END_STATE();
    case 84:
      if (lookahead == '(')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '\\')
        SKIP(85);
      if (lookahead == ']')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 85:
      if (lookahead == '\n')
        SKIP(84);
      if (lookahead == '\r')
        SKIP(86);
      END_STATE();
    case 86:
      if (lookahead == '\n')
        SKIP(84);
      END_STATE();
    case 87:
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '\\')
        SKIP(88);
      if (lookahead == '}')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(87);
      END_STATE();
    case 88:
      if (lookahead == '\n')
        SKIP(87);
      if (lookahead == '\r')
        SKIP(89);
      END_STATE();
    case 89:
      if (lookahead == '\n')
        SKIP(87);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == '\\')
        SKIP(1);
      if (lookahead == 'f')
        ADVANCE(2);
      if (lookahead == 'n')
        ADVANCE(3);
      if (lookahead == 't')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n')
        SKIP(0);
      if (lookahead == '\r')
        SKIP(5);
      END_STATE();
    case 2:
      if (lookahead == 'a')
        ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 'u')
        ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'r')
        ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == '\n')
        SKIP(0);
      END_STATE();
    case 6:
      if (lookahead == 'l')
        ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'l')
        ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'u')
        ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 's')
        ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'l')
        ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'e')
        ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'e')
        ADVANCE(15);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 56},
  [2] = {.lex_state = 60},
  [3] = {.lex_state = 63},
  [4] = {.lex_state = 56},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 56},
  [7] = {.lex_state = 63, .external_lex_state = 1},
  [8] = {.lex_state = 66},
  [9] = {.lex_state = 63},
  [10] = {.lex_state = 56},
  [11] = {.lex_state = 56},
  [12] = {.lex_state = 56},
  [13] = {.lex_state = 56},
  [14] = {.lex_state = 69, .external_lex_state = 1},
  [15] = {.lex_state = 63, .external_lex_state = 1},
  [16] = {.lex_state = 72},
  [17] = {.lex_state = 56},
  [18] = {.lex_state = 56},
  [19] = {.lex_state = 63},
  [20] = {.lex_state = 60},
  [21] = {.lex_state = 63},
  [22] = {.lex_state = 75},
  [23] = {.lex_state = 72},
  [24] = {.lex_state = 69},
  [25] = {.lex_state = 72},
  [26] = {.lex_state = 78},
  [27] = {.lex_state = 81, .external_lex_state = 1},
  [28] = {.lex_state = 72},
  [29] = {.lex_state = 56},
  [30] = {.lex_state = 56},
  [31] = {.lex_state = 56},
  [32] = {.lex_state = 63, .external_lex_state = 1},
  [33] = {.lex_state = 63},
  [34] = {.lex_state = 63, .external_lex_state = 1},
  [35] = {.lex_state = 0, .external_lex_state = 1},
  [36] = {.lex_state = 72},
  [37] = {.lex_state = 69},
  [38] = {.lex_state = 72},
  [39] = {.lex_state = 63, .external_lex_state = 1},
  [40] = {.lex_state = 78},
  [41] = {.lex_state = 75},
  [42] = {.lex_state = 72},
  [43] = {.lex_state = 75},
  [44] = {.lex_state = 56},
  [45] = {.lex_state = 69, .external_lex_state = 1},
  [46] = {.lex_state = 63, .external_lex_state = 1},
  [47] = {.lex_state = 84},
  [48] = {.lex_state = 63},
  [49] = {.lex_state = 87},
  [50] = {.lex_state = 69},
  [51] = {.lex_state = 72},
  [52] = {.lex_state = 69},
  [53] = {.lex_state = 78},
  [54] = {.lex_state = 72},
  [55] = {.lex_state = 78},
  [56] = {.lex_state = 72},
  [57] = {.lex_state = 63, .external_lex_state = 1},
  [58] = {.lex_state = 75},
  [59] = {.lex_state = 63},
  [60] = {.lex_state = 69},
  [61] = {.lex_state = 63},
  [62] = {.lex_state = 78},
  [63] = {.lex_state = 81, .external_lex_state = 1},
  [64] = {.lex_state = 63},
  [65] = {.lex_state = 75},
  [66] = {.lex_state = 72},
  [67] = {.lex_state = 75},
  [68] = {.lex_state = 63},
  [69] = {.lex_state = 69},
  [70] = {.lex_state = 63},
  [71] = {.lex_state = 78},
  [72] = {.lex_state = 63},
  [73] = {.lex_state = 75},
  [74] = {.lex_state = 63},
  [75] = {.lex_state = 63},
  [76] = {.lex_state = 63},
  [77] = {.lex_state = 75},
  [78] = {.lex_state = 63},
};

enum {
  ts_external_token_string = 0,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_string] = sym_string,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_string] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_string] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(1),
  },
  [1] = {
    [aux_sym_resource_repeat2] = STATE(4),
    [sym_section] = STATE(4),
    [sym_property] = STATE(6),
    [sym_resource] = STATE(5),
    [aux_sym_resource_repeat1] = STATE(6),
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_path] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
  },
  [2] = {
    [anon_sym_EQ] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_identifier] = STATE(9),
    [sym__identifier] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [aux_sym_resource_repeat2] = STATE(10),
    [sym_section] = STATE(10),
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(9),
  },
  [5] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(17),
  },
  [6] = {
    [aux_sym_resource_repeat2] = STATE(11),
    [sym_section] = STATE(11),
    [sym_property] = STATE(12),
    [aux_sym_resource_repeat1] = STATE(12),
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_path] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
  },
  [7] = {
    [sym_constructor] = STATE(17),
    [sym_dictionary] = STATE(17),
    [sym_array] = STATE(17),
    [sym_identifier] = STATE(16),
    [sym__value] = STATE(17),
    [sym_string] = ACTIONS(19),
    [sym_null] = ACTIONS(21),
    [sym_false] = ACTIONS(21),
    [sym__identifier] = ACTIONS(23),
    [sym_float] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(21),
    [sym_true] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(27),
  },
  [8] = {
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(29),
    [sym__identifier] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
  },
  [9] = {
    [sym__attributes] = STATE(19),
    [sym_identifier] = STATE(20),
    [aux_sym__attributes_repeat1] = STATE(21),
    [sym_attribute] = STATE(21),
    [sym__identifier] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [aux_sym_resource_repeat2] = STATE(10),
    [sym_section] = STATE(10),
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
  },
  [11] = {
    [aux_sym_resource_repeat2] = STATE(10),
    [sym_section] = STATE(10),
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_LBRACK] = ACTIONS(9),
  },
  [12] = {
    [sym_property] = STATE(12),
    [aux_sym_resource_repeat1] = STATE(12),
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(40),
    [sym_path] = ACTIONS(42),
    [anon_sym_LBRACK] = ACTIONS(40),
  },
  [13] = {
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_path] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(29),
  },
  [14] = {
    [sym_pair] = STATE(24),
    [sym_string] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(47),
  },
  [15] = {
    [sym_constructor] = STATE(26),
    [sym_dictionary] = STATE(26),
    [sym_array] = STATE(26),
    [sym_identifier] = STATE(16),
    [sym__value] = STATE(26),
    [sym_string] = ACTIONS(49),
    [sym_null] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym__identifier] = ACTIONS(53),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(55),
    [sym_true] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(27),
  },
  [16] = {
    [sym_arguments] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_RPAREN] = ACTIONS(57),
    [sym_path] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(57),
  },
  [17] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym_path] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(61),
  },
  [18] = {
    [sym__properties] = STATE(29),
    [sym_property] = STATE(30),
    [aux_sym_resource_repeat1] = STATE(30),
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_path] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(63),
  },
  [19] = {
    [anon_sym_RBRACK] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [anon_sym_EQ] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym_identifier] = STATE(20),
    [aux_sym__attributes_repeat1] = STATE(33),
    [sym_attribute] = STATE(33),
    [anon_sym_RBRACK] = ACTIONS(69),
    [sym__identifier] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(71),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(73),
    [sym_path] = ACTIONS(73),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(73),
  },
  [24] = {
    [aux_sym_dictionary_repeat1] = STATE(37),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [sym_path] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
  },
  [26] = {
    [aux_sym_array_repeat1] = STATE(40),
    [anon_sym_RBRACK] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym_constructor] = STATE(43),
    [sym_dictionary] = STATE(43),
    [sym_array] = STATE(43),
    [sym_identifier] = STATE(16),
    [sym__value] = STATE(43),
    [sym_pair] = STATE(43),
    [sym_string] = ACTIONS(85),
    [sym_null] = ACTIONS(87),
    [sym_false] = ACTIONS(87),
    [sym__identifier] = ACTIONS(53),
    [sym_float] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(87),
    [sym_true] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(27),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_RBRACE] = ACTIONS(93),
    [anon_sym_RPAREN] = ACTIONS(93),
    [sym_path] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(93),
  },
  [29] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(95),
  },
  [30] = {
    [sym_property] = STATE(12),
    [aux_sym_resource_repeat1] = STATE(12),
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(97),
    [sym_path] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(97),
  },
  [31] = {
    [sym__properties] = STATE(44),
    [sym_property] = STATE(30),
    [aux_sym_resource_repeat1] = STATE(30),
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_path] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(95),
  },
  [32] = {
    [sym_constructor] = STATE(48),
    [sym_dictionary] = STATE(48),
    [sym_array] = STATE(48),
    [sym_identifier] = STATE(47),
    [sym__value] = STATE(48),
    [sym_string] = ACTIONS(99),
    [sym_null] = ACTIONS(101),
    [sym_false] = ACTIONS(101),
    [sym__identifier] = ACTIONS(53),
    [sym_float] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(103),
    [sym_comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(101),
    [sym_true] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(105),
  },
  [33] = {
    [sym_identifier] = STATE(20),
    [aux_sym__attributes_repeat1] = STATE(33),
    [sym_attribute] = STATE(33),
    [sym__identifier] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(110),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [sym_constructor] = STATE(49),
    [sym_dictionary] = STATE(49),
    [sym_array] = STATE(49),
    [sym_identifier] = STATE(16),
    [sym__value] = STATE(49),
    [sym_string] = ACTIONS(112),
    [sym_null] = ACTIONS(114),
    [sym_false] = ACTIONS(114),
    [sym__identifier] = ACTIONS(53),
    [sym_float] = ACTIONS(112),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(114),
    [sym_true] = ACTIONS(114),
    [anon_sym_LBRACK] = ACTIONS(27),
  },
  [35] = {
    [sym_pair] = STATE(50),
    [sym_string] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [sym_path] = ACTIONS(116),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(116),
    [anon_sym_COMMA] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(116),
  },
  [37] = {
    [aux_sym_dictionary_repeat1] = STATE(52),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(118),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(120),
    [sym_path] = ACTIONS(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(120),
  },
  [39] = {
    [sym_constructor] = STATE(53),
    [sym_dictionary] = STATE(53),
    [sym_array] = STATE(53),
    [sym_identifier] = STATE(16),
    [sym__value] = STATE(53),
    [sym_string] = ACTIONS(122),
    [sym_null] = ACTIONS(124),
    [sym_false] = ACTIONS(124),
    [sym__identifier] = ACTIONS(53),
    [sym_float] = ACTIONS(122),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(124),
    [sym_true] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(27),
  },
  [40] = {
    [aux_sym_array_repeat1] = STATE(55),
    [anon_sym_RBRACK] = ACTIONS(126),
    [anon_sym_COMMA] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(57),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(128),
    [anon_sym_RBRACE] = ACTIONS(128),
    [anon_sym_RPAREN] = ACTIONS(128),
    [sym_path] = ACTIONS(128),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(128),
    [anon_sym_COMMA] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(128),
  },
  [43] = {
    [aux_sym_arguments_repeat1] = STATE(58),
    [anon_sym_RPAREN] = ACTIONS(130),
    [anon_sym_COMMA] = ACTIONS(132),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(134),
  },
  [45] = {
    [sym_pair] = STATE(60),
    [sym_string] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(136),
  },
  [46] = {
    [sym_constructor] = STATE(62),
    [sym_dictionary] = STATE(62),
    [sym_array] = STATE(62),
    [sym_identifier] = STATE(16),
    [sym__value] = STATE(62),
    [sym_string] = ACTIONS(138),
    [sym_null] = ACTIONS(140),
    [sym_false] = ACTIONS(140),
    [sym__identifier] = ACTIONS(53),
    [sym_float] = ACTIONS(138),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(140),
    [anon_sym_RBRACK] = ACTIONS(142),
    [sym_true] = ACTIONS(140),
    [anon_sym_LBRACK] = ACTIONS(27),
  },
  [47] = {
    [sym_arguments] = STATE(64),
    [sym_comment] = ACTIONS(3),
    [sym__identifier] = ACTIONS(57),
    [anon_sym_RBRACK] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(144),
  },
  [48] = {
    [sym__identifier] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
  },
  [49] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(148),
    [anon_sym_COMMA] = ACTIONS(148),
  },
  [50] = {
    [anon_sym_COMMA] = ACTIONS(150),
    [anon_sym_RBRACE] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [anon_sym_RBRACE] = ACTIONS(152),
    [anon_sym_RPAREN] = ACTIONS(152),
    [sym_path] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(152),
    [anon_sym_COMMA] = ACTIONS(152),
    [anon_sym_LBRACK] = ACTIONS(152),
  },
  [52] = {
    [aux_sym_dictionary_repeat1] = STATE(52),
    [anon_sym_COMMA] = ACTIONS(154),
    [anon_sym_RBRACE] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
  },
  [53] = {
    [anon_sym_RBRACK] = ACTIONS(157),
    [anon_sym_COMMA] = ACTIONS(157),
    [sym_comment] = ACTIONS(3),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [anon_sym_RBRACE] = ACTIONS(159),
    [anon_sym_RPAREN] = ACTIONS(159),
    [sym_path] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(159),
    [anon_sym_COMMA] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(159),
  },
  [55] = {
    [aux_sym_array_repeat1] = STATE(55),
    [anon_sym_RBRACK] = ACTIONS(157),
    [anon_sym_COMMA] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(164),
    [anon_sym_RBRACE] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [sym_path] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(164),
    [anon_sym_COMMA] = ACTIONS(164),
    [anon_sym_LBRACK] = ACTIONS(164),
  },
  [57] = {
    [sym_constructor] = STATE(65),
    [sym_dictionary] = STATE(65),
    [sym_array] = STATE(65),
    [sym_identifier] = STATE(16),
    [sym__value] = STATE(65),
    [sym_pair] = STATE(65),
    [sym_string] = ACTIONS(85),
    [sym_null] = ACTIONS(166),
    [sym_false] = ACTIONS(166),
    [sym__identifier] = ACTIONS(53),
    [sym_float] = ACTIONS(168),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(166),
    [sym_true] = ACTIONS(166),
    [anon_sym_LBRACK] = ACTIONS(27),
  },
  [58] = {
    [aux_sym_arguments_repeat1] = STATE(67),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_COMMA] = ACTIONS(132),
    [sym_comment] = ACTIONS(3),
  },
  [59] = {
    [sym__identifier] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(73),
    [sym_comment] = ACTIONS(3),
  },
  [60] = {
    [aux_sym_dictionary_repeat1] = STATE(69),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
  },
  [61] = {
    [sym__identifier] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
  },
  [62] = {
    [aux_sym_array_repeat1] = STATE(71),
    [anon_sym_RBRACK] = ACTIONS(174),
    [anon_sym_COMMA] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
  },
  [63] = {
    [sym_constructor] = STATE(73),
    [sym_dictionary] = STATE(73),
    [sym_array] = STATE(73),
    [sym_identifier] = STATE(16),
    [sym__value] = STATE(73),
    [sym_pair] = STATE(73),
    [sym_string] = ACTIONS(85),
    [sym_null] = ACTIONS(176),
    [sym_false] = ACTIONS(176),
    [sym__identifier] = ACTIONS(53),
    [sym_float] = ACTIONS(178),
    [anon_sym_RPAREN] = ACTIONS(180),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(176),
    [sym_true] = ACTIONS(176),
    [anon_sym_LBRACK] = ACTIONS(27),
  },
  [64] = {
    [sym__identifier] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
  },
  [65] = {
    [anon_sym_RPAREN] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(184),
    [anon_sym_RBRACE] = ACTIONS(184),
    [anon_sym_RPAREN] = ACTIONS(184),
    [sym_path] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(184),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_LBRACK] = ACTIONS(184),
  },
  [67] = {
    [aux_sym_arguments_repeat1] = STATE(67),
    [anon_sym_RPAREN] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(186),
    [sym_comment] = ACTIONS(3),
  },
  [68] = {
    [sym__identifier] = ACTIONS(116),
    [anon_sym_RBRACK] = ACTIONS(116),
    [sym_comment] = ACTIONS(3),
  },
  [69] = {
    [aux_sym_dictionary_repeat1] = STATE(52),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
  },
  [70] = {
    [sym__identifier] = ACTIONS(120),
    [anon_sym_RBRACK] = ACTIONS(120),
    [sym_comment] = ACTIONS(3),
  },
  [71] = {
    [aux_sym_array_repeat1] = STATE(55),
    [anon_sym_RBRACK] = ACTIONS(191),
    [anon_sym_COMMA] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
  },
  [72] = {
    [sym__identifier] = ACTIONS(128),
    [anon_sym_RBRACK] = ACTIONS(128),
    [sym_comment] = ACTIONS(3),
  },
  [73] = {
    [aux_sym_arguments_repeat1] = STATE(77),
    [anon_sym_RPAREN] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(132),
    [sym_comment] = ACTIONS(3),
  },
  [74] = {
    [sym__identifier] = ACTIONS(152),
    [anon_sym_RBRACK] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
  },
  [75] = {
    [sym__identifier] = ACTIONS(159),
    [anon_sym_RBRACK] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
  },
  [76] = {
    [sym__identifier] = ACTIONS(164),
    [anon_sym_RBRACK] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
  [77] = {
    [aux_sym_arguments_repeat1] = STATE(67),
    [anon_sym_RPAREN] = ACTIONS(195),
    [anon_sym_COMMA] = ACTIONS(132),
    [sym_comment] = ACTIONS(3),
  },
  [78] = {
    [sym__identifier] = ACTIONS(184),
    [anon_sym_RBRACK] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_resource, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(3),
  [11] = {.count = 1, .reusable = true}, SHIFT(7),
  [13] = {.count = 1, .reusable = true}, SHIFT(8),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_resource, 1),
  [17] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [19] = {.count = 1, .reusable = true}, SHIFT(17),
  [21] = {.count = 1, .reusable = false}, SHIFT(17),
  [23] = {.count = 1, .reusable = false}, SHIFT(13),
  [25] = {.count = 1, .reusable = true}, SHIFT(14),
  [27] = {.count = 1, .reusable = true}, SHIFT(15),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [31] = {.count = 1, .reusable = true}, SHIFT(18),
  [33] = {.count = 1, .reusable = true}, REDUCE(aux_sym_resource_repeat2, 2),
  [35] = {.count = 2, .reusable = true}, REDUCE(aux_sym_resource_repeat2, 2), SHIFT_REPEAT(3),
  [38] = {.count = 1, .reusable = true}, REDUCE(sym_resource, 2),
  [40] = {.count = 1, .reusable = true}, REDUCE(aux_sym_resource_repeat1, 2),
  [42] = {.count = 2, .reusable = true}, REDUCE(aux_sym_resource_repeat1, 2), SHIFT_REPEAT(2),
  [45] = {.count = 1, .reusable = true}, SHIFT(22),
  [47] = {.count = 1, .reusable = true}, SHIFT(23),
  [49] = {.count = 1, .reusable = true}, SHIFT(26),
  [51] = {.count = 1, .reusable = false}, SHIFT(26),
  [53] = {.count = 1, .reusable = false}, SHIFT(8),
  [55] = {.count = 1, .reusable = true}, SHIFT(25),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1),
  [59] = {.count = 1, .reusable = true}, SHIFT(27),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_property, 3),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [65] = {.count = 1, .reusable = true}, SHIFT(31),
  [67] = {.count = 1, .reusable = true}, SHIFT(32),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym__attributes, 1),
  [71] = {.count = 1, .reusable = true}, SHIFT(34),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_dictionary, 2),
  [75] = {.count = 1, .reusable = true}, SHIFT(35),
  [77] = {.count = 1, .reusable = true}, SHIFT(36),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [81] = {.count = 1, .reusable = true}, SHIFT(38),
  [83] = {.count = 1, .reusable = true}, SHIFT(39),
  [85] = {.count = 1, .reusable = true}, SHIFT(41),
  [87] = {.count = 1, .reusable = false}, SHIFT(43),
  [89] = {.count = 1, .reusable = true}, SHIFT(43),
  [91] = {.count = 1, .reusable = true}, SHIFT(42),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_constructor, 2),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_section, 4),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym__properties, 1),
  [99] = {.count = 1, .reusable = true}, SHIFT(48),
  [101] = {.count = 1, .reusable = false}, SHIFT(48),
  [103] = {.count = 1, .reusable = true}, SHIFT(45),
  [105] = {.count = 1, .reusable = true}, SHIFT(46),
  [107] = {.count = 2, .reusable = true}, REDUCE(aux_sym__attributes_repeat1, 2), SHIFT_REPEAT(8),
  [110] = {.count = 1, .reusable = true}, REDUCE(aux_sym__attributes_repeat1, 2),
  [112] = {.count = 1, .reusable = true}, SHIFT(49),
  [114] = {.count = 1, .reusable = false}, SHIFT(49),
  [116] = {.count = 1, .reusable = true}, REDUCE(sym_dictionary, 3),
  [118] = {.count = 1, .reusable = true}, SHIFT(51),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [122] = {.count = 1, .reusable = true}, SHIFT(53),
  [124] = {.count = 1, .reusable = false}, SHIFT(53),
  [126] = {.count = 1, .reusable = true}, SHIFT(54),
  [128] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 2),
  [130] = {.count = 1, .reusable = true}, SHIFT(56),
  [132] = {.count = 1, .reusable = true}, SHIFT(57),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_section, 5),
  [136] = {.count = 1, .reusable = true}, SHIFT(59),
  [138] = {.count = 1, .reusable = true}, SHIFT(62),
  [140] = {.count = 1, .reusable = false}, SHIFT(62),
  [142] = {.count = 1, .reusable = true}, SHIFT(61),
  [144] = {.count = 1, .reusable = true}, SHIFT(63),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 3),
  [148] = {.count = 1, .reusable = true}, REDUCE(sym_pair, 3),
  [150] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dictionary_repeat1, 2),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_dictionary, 4),
  [154] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dictionary_repeat1, 2), SHIFT_REPEAT(35),
  [157] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_array, 4),
  [161] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(39),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [166] = {.count = 1, .reusable = false}, SHIFT(65),
  [168] = {.count = 1, .reusable = true}, SHIFT(65),
  [170] = {.count = 1, .reusable = true}, SHIFT(66),
  [172] = {.count = 1, .reusable = true}, SHIFT(68),
  [174] = {.count = 1, .reusable = true}, SHIFT(70),
  [176] = {.count = 1, .reusable = false}, SHIFT(73),
  [178] = {.count = 1, .reusable = true}, SHIFT(73),
  [180] = {.count = 1, .reusable = true}, SHIFT(72),
  [182] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 4),
  [186] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(57),
  [189] = {.count = 1, .reusable = true}, SHIFT(74),
  [191] = {.count = 1, .reusable = true}, SHIFT(75),
  [193] = {.count = 1, .reusable = true}, SHIFT(76),
  [195] = {.count = 1, .reusable = true}, SHIFT(78),
};

void *tree_sitter_godotResource_external_scanner_create();
void tree_sitter_godotResource_external_scanner_destroy(void *);
bool tree_sitter_godotResource_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_godotResource_external_scanner_serialize(void *, char *);
void tree_sitter_godotResource_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_godotResource() {
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
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__identifier,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_godotResource_external_scanner_create,
      tree_sitter_godotResource_external_scanner_destroy,
      tree_sitter_godotResource_external_scanner_scan,
      tree_sitter_godotResource_external_scanner_serialize,
      tree_sitter_godotResource_external_scanner_deserialize,
    },
  };
  return &language;
}
