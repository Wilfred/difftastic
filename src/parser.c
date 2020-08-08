#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 86
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 1
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_EQ = 1,
  anon_sym_if = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_COMMA = 5,
  anon_sym_our = 6,
  anon_sym_my = 7,
  anon_sym_sub = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_return = 11,
  sym_integer = 12,
  sym_floating_point = 13,
  sym_scientific_notation = 14,
  sym_hexadecimal = 15,
  sym_octal = 16,
  sym_identifier = 17,
  sym__semi_colon = 18,
  sym_string_single_quoted = 19,
  sym_string_double_quoted = 20,
  sym_boolean = 21,
  sym_scalar_variable = 22,
  sym_array_variable = 23,
  sym_hash_variable = 24,
  anon_sym_LBRACK = 25,
  anon_sym_RBRACK = 26,
  anon_sym_EQ_GT = 27,
  sym_single_line_comment = 28,
  sym_source_file = 29,
  sym__statement = 30,
  sym__comments = 31,
  sym_assignment_statement = 32,
  sym_if_statement = 33,
  sym__declaration = 34,
  sym_variable_declaration = 35,
  sym_multi_var_declaration = 36,
  sym_single_var_declaration = 37,
  sym_variable_declarator = 38,
  sym__initializer = 39,
  sym_scope = 40,
  sym_function_definition = 41,
  sym_block = 42,
  sym_return_statement = 43,
  sym__expression = 44,
  sym__primitive_expression = 45,
  sym__numeric_literals = 46,
  sym_array = 47,
  sym_array_ref = 48,
  sym_hash = 49,
  sym_hash_ref = 50,
  sym__key_value_pair = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_multi_var_declaration_repeat1 = 53,
  aux_sym_array_repeat1 = 54,
  aux_sym_hash_repeat1 = 55,
  anon_alias_sym_single_var_declaration = 56,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_if] = "if",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_our] = "our",
  [anon_sym_my] = "my",
  [anon_sym_sub] = "sub",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [sym_integer] = "integer",
  [sym_floating_point] = "floating_point",
  [sym_scientific_notation] = "scientific_notation",
  [sym_hexadecimal] = "hexadecimal",
  [sym_octal] = "octal",
  [sym_identifier] = "identifier",
  [sym__semi_colon] = "_semi_colon",
  [sym_string_single_quoted] = "string_single_quoted",
  [sym_string_double_quoted] = "string_double_quoted",
  [sym_boolean] = "boolean",
  [sym_scalar_variable] = "scalar_variable",
  [sym_array_variable] = "array_variable",
  [sym_hash_variable] = "hash_variable",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ_GT] = "=>",
  [sym_single_line_comment] = "single_line_comment",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__comments] = "_comments",
  [sym_assignment_statement] = "assignment_statement",
  [sym_if_statement] = "if_statement",
  [sym__declaration] = "_declaration",
  [sym_variable_declaration] = "variable_declaration",
  [sym_multi_var_declaration] = "multi_var_declaration",
  [sym_single_var_declaration] = "single_var_declaration",
  [sym_variable_declarator] = "variable_declarator",
  [sym__initializer] = "_initializer",
  [sym_scope] = "scope",
  [sym_function_definition] = "function_definition",
  [sym_block] = "block",
  [sym_return_statement] = "return_statement",
  [sym__expression] = "_expression",
  [sym__primitive_expression] = "_primitive_expression",
  [sym__numeric_literals] = "_numeric_literals",
  [sym_array] = "array",
  [sym_array_ref] = "array_ref",
  [sym_hash] = "hash",
  [sym_hash_ref] = "hash_ref",
  [sym__key_value_pair] = "_key_value_pair",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_multi_var_declaration_repeat1] = "multi_var_declaration_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_hash_repeat1] = "hash_repeat1",
  [anon_alias_sym_single_var_declaration] = "single_var_declaration",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_our] = anon_sym_our,
  [anon_sym_my] = anon_sym_my,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
  [sym_integer] = sym_integer,
  [sym_floating_point] = sym_floating_point,
  [sym_scientific_notation] = sym_scientific_notation,
  [sym_hexadecimal] = sym_hexadecimal,
  [sym_octal] = sym_octal,
  [sym_identifier] = sym_identifier,
  [sym__semi_colon] = sym__semi_colon,
  [sym_string_single_quoted] = sym_string_single_quoted,
  [sym_string_double_quoted] = sym_string_double_quoted,
  [sym_boolean] = sym_boolean,
  [sym_scalar_variable] = sym_scalar_variable,
  [sym_array_variable] = sym_array_variable,
  [sym_hash_variable] = sym_hash_variable,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [sym_single_line_comment] = sym_single_line_comment,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__comments] = sym__comments,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym_if_statement] = sym_if_statement,
  [sym__declaration] = sym__declaration,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_multi_var_declaration] = sym_multi_var_declaration,
  [sym_single_var_declaration] = sym_single_var_declaration,
  [sym_variable_declarator] = sym_variable_declarator,
  [sym__initializer] = sym__initializer,
  [sym_scope] = sym_scope,
  [sym_function_definition] = sym_function_definition,
  [sym_block] = sym_block,
  [sym_return_statement] = sym_return_statement,
  [sym__expression] = sym__expression,
  [sym__primitive_expression] = sym__primitive_expression,
  [sym__numeric_literals] = sym__numeric_literals,
  [sym_array] = sym_array,
  [sym_array_ref] = sym_array_ref,
  [sym_hash] = sym_hash,
  [sym_hash_ref] = sym_hash_ref,
  [sym__key_value_pair] = sym__key_value_pair,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_multi_var_declaration_repeat1] = aux_sym_multi_var_declaration_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_hash_repeat1] = aux_sym_hash_repeat1,
  [anon_alias_sym_single_var_declaration] = anon_alias_sym_single_var_declaration,
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
  [anon_sym_if] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_our] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_my] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
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
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_floating_point] = {
    .visible = true,
    .named = true,
  },
  [sym_scientific_notation] = {
    .visible = true,
    .named = true,
  },
  [sym_hexadecimal] = {
    .visible = true,
    .named = true,
  },
  [sym_octal] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__semi_colon] = {
    .visible = false,
    .named = true,
  },
  [sym_string_single_quoted] = {
    .visible = true,
    .named = true,
  },
  [sym_string_double_quoted] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_scalar_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_array_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_hash_variable] = {
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
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_single_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__comments] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_multi_var_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_single_var_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declarator] = {
    .visible = true,
    .named = true,
  },
  [sym__initializer] = {
    .visible = false,
    .named = true,
  },
  [sym_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__primitive_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__numeric_literals] = {
    .visible = false,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_array_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_hash] = {
    .visible = true,
    .named = true,
  },
  [sym_hash_ref] = {
    .visible = true,
    .named = true,
  },
  [sym__key_value_pair] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multi_var_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hash_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_single_var_declaration] = {
    .visible = true,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_name = 2,
  field_value = 3,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[7] = {
  [1] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 2},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_body, 2},
    {field_name, 1},
  [3] =
    {field_name, 0},
    {field_value, 1, .inherited = true},
  [5] =
    {field_value, 1},
  [6] =
    {field_body, 4},
};

static TSSymbol ts_alias_sequences[7][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = anon_alias_sym_single_var_declaration,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(34);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '+') ADVANCE(6);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '0') ADVANCE(49);
      if (lookahead == ';') ADVANCE(69);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 's') ADVANCE(20);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '+') ADVANCE(6);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 't') ADVANCE(63);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(79);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(43);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead == 'y') ADVANCE(42);
      END_STATE();
    case 25:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == ';') ADVANCE(69);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 's') ADVANCE(20);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(79);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_our);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_my);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(52);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(29);
      if (lookahead == '0' ||
          lookahead == '8' ||
          lookahead == '9') ADVANCE(50);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(47);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(67);
      if (lookahead == '0' ||
          lookahead == '8' ||
          lookahead == '9') ADVANCE(52);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_floating_point);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_scientific_notation);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_scientific_notation);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_scientific_notation);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_scientific_notation);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      if (('G' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      if (('G' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__semi_colon);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_string_single_quoted);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_string_double_quoted);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_scalar_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_array_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_hash_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 33},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 33},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 33},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 33},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 33},
  [19] = {.lex_state = 33},
  [20] = {.lex_state = 33},
  [21] = {.lex_state = 33},
  [22] = {.lex_state = 33},
  [23] = {.lex_state = 33},
  [24] = {.lex_state = 33},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 33},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 1},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_our] = ACTIONS(1),
    [anon_sym_my] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_floating_point] = ACTIONS(1),
    [sym_scientific_notation] = ACTIONS(1),
    [sym_hexadecimal] = ACTIONS(1),
    [sym_octal] = ACTIONS(1),
    [sym__semi_colon] = ACTIONS(1),
    [sym_string_single_quoted] = ACTIONS(1),
    [sym_string_double_quoted] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_scalar_variable] = ACTIONS(1),
    [sym_array_variable] = ACTIONS(1),
    [sym_hash_variable] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [sym_single_line_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(76),
    [sym__statement] = STATE(9),
    [sym__comments] = STATE(9),
    [sym_assignment_statement] = STATE(9),
    [sym_if_statement] = STATE(9),
    [sym__declaration] = STATE(9),
    [sym_variable_declaration] = STATE(9),
    [sym_scope] = STATE(25),
    [sym_function_definition] = STATE(9),
    [sym_return_statement] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_our] = ACTIONS(9),
    [anon_sym_my] = ACTIONS(9),
    [anon_sym_sub] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [sym_single_line_comment] = ACTIONS(15),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    STATE(54), 1,
      sym__key_value_pair,
    ACTIONS(27), 2,
      sym_string_single_quoted,
      sym_string_double_quoted,
    ACTIONS(23), 6,
      sym_integer,
      sym_floating_point,
      sym_scientific_notation,
      sym_hexadecimal,
      sym_octal,
      sym_boolean,
    STATE(53), 6,
      sym__primitive_expression,
      sym__numeric_literals,
      sym_array,
      sym_array_ref,
      sym_hash,
      sym_hash_ref,
  [39] = 9,
    ACTIONS(33), 1,
      anon_sym_EQ,
    ACTIONS(36), 1,
      anon_sym_if,
    ACTIONS(42), 1,
      anon_sym_sub,
    ACTIONS(45), 1,
      anon_sym_return,
    ACTIONS(48), 1,
      sym_single_line_comment,
    STATE(25), 1,
      sym_scope,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(39), 2,
      anon_sym_our,
      anon_sym_my,
    STATE(3), 9,
      sym__statement,
      sym__comments,
      sym_assignment_statement,
      sym_if_statement,
      sym__declaration,
      sym_variable_declaration,
      sym_function_definition,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [77] = 7,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_RBRACK,
    ACTIONS(51), 4,
      sym_integer,
      sym_floating_point,
      sym_scientific_notation,
      sym_octal,
    ACTIONS(53), 4,
      sym_hexadecimal,
      sym_string_single_quoted,
      sym_string_double_quoted,
      sym_boolean,
    STATE(56), 6,
      sym__primitive_expression,
      sym__numeric_literals,
      sym_array,
      sym_array_ref,
      sym_hash,
      sym_hash_ref,
  [110] = 7,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    ACTIONS(61), 4,
      sym_integer,
      sym_floating_point,
      sym_scientific_notation,
      sym_octal,
    ACTIONS(63), 4,
      sym_hexadecimal,
      sym_string_single_quoted,
      sym_string_double_quoted,
      sym_boolean,
    STATE(61), 6,
      sym__primitive_expression,
      sym__numeric_literals,
      sym_array,
      sym_array_ref,
      sym_hash,
      sym_hash_ref,
  [143] = 9,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_sub,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(67), 1,
      sym_single_line_comment,
    STATE(25), 1,
      sym_scope,
    ACTIONS(9), 2,
      anon_sym_our,
      anon_sym_my,
    STATE(12), 9,
      sym__statement,
      sym__comments,
      sym_assignment_statement,
      sym_if_statement,
      sym__declaration,
      sym_variable_declaration,
      sym_function_definition,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [180] = 6,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 4,
      sym_integer,
      sym_floating_point,
      sym_scientific_notation,
      sym_octal,
    ACTIONS(71), 4,
      sym_hexadecimal,
      sym_string_single_quoted,
      sym_string_double_quoted,
      sym_boolean,
    STATE(83), 7,
      sym__expression,
      sym__primitive_expression,
      sym__numeric_literals,
      sym_array,
      sym_array_ref,
      sym_hash,
      sym_hash_ref,
  [211] = 7,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    ACTIONS(61), 4,
      sym_integer,
      sym_floating_point,
      sym_scientific_notation,
      sym_octal,
    ACTIONS(63), 4,
      sym_hexadecimal,
      sym_string_single_quoted,
      sym_string_double_quoted,
      sym_boolean,
    STATE(61), 6,
      sym__primitive_expression,
      sym__numeric_literals,
      sym_array,
      sym_array_ref,
      sym_hash,
      sym_hash_ref,
  [244] = 9,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_sub,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      sym_single_line_comment,
    STATE(25), 1,
      sym_scope,
    ACTIONS(9), 2,
      anon_sym_our,
      anon_sym_my,
    STATE(3), 9,
      sym__statement,
      sym__comments,
      sym_assignment_statement,
      sym_if_statement,
      sym__declaration,
      sym_variable_declaration,
      sym_function_definition,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [281] = 7,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(61), 4,
      sym_integer,
      sym_floating_point,
      sym_scientific_notation,
      sym_octal,
    ACTIONS(63), 4,
      sym_hexadecimal,
      sym_string_single_quoted,
      sym_string_double_quoted,
      sym_boolean,
    STATE(61), 6,
      sym__primitive_expression,
      sym__numeric_literals,
      sym_array,
      sym_array_ref,
      sym_hash,
      sym_hash_ref,
  [314] = 6,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 4,
      sym_integer,
      sym_floating_point,
      sym_scientific_notation,
      sym_octal,
    ACTIONS(83), 4,
      sym_hexadecimal,
      sym_string_single_quoted,
      sym_string_double_quoted,
      sym_boolean,
    STATE(58), 7,
      sym__expression,
      sym__primitive_expression,
      sym__numeric_literals,
      sym_array,
      sym_array_ref,
      sym_hash,
      sym_hash_ref,
  [345] = 9,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_sub,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(77), 1,
      sym_single_line_comment,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym_scope,
    ACTIONS(9), 2,
      anon_sym_our,
      anon_sym_my,
    STATE(3), 9,
      sym__statement,
      sym__comments,
      sym_assignment_statement,
      sym_if_statement,
      sym__declaration,
      sym_variable_declaration,
      sym_function_definition,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [382] = 6,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 4,
      sym_integer,
      sym_floating_point,
      sym_scientific_notation,
      sym_octal,
    ACTIONS(89), 4,
      sym_hexadecimal,
      sym_string_single_quoted,
      sym_string_double_quoted,
      sym_boolean,
    STATE(81), 7,
      sym__expression,
      sym__primitive_expression,
      sym__numeric_literals,
      sym_array,
      sym_array_ref,
      sym_hash,
      sym_hash_ref,
  [413] = 7,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    ACTIONS(61), 4,
      sym_integer,
      sym_floating_point,
      sym_scientific_notation,
      sym_octal,
    ACTIONS(63), 4,
      sym_hexadecimal,
      sym_string_single_quoted,
      sym_string_double_quoted,
      sym_boolean,
    STATE(61), 6,
      sym__primitive_expression,
      sym__numeric_literals,
      sym_array,
      sym_array_ref,
      sym_hash,
      sym_hash_ref,
  [446] = 6,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 4,
      sym_integer,
      sym_floating_point,
      sym_scientific_notation,
      sym_octal,
    ACTIONS(95), 4,
      sym_hexadecimal,
      sym_string_single_quoted,
      sym_string_double_quoted,
      sym_boolean,
    STATE(79), 7,
      sym__expression,
      sym__primitive_expression,
      sym__numeric_literals,
      sym_array,
      sym_array_ref,
      sym_hash,
      sym_hash_ref,
  [477] = 6,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 4,
      sym_integer,
      sym_floating_point,
      sym_scientific_notation,
      sym_octal,
    ACTIONS(99), 4,
      sym_hexadecimal,
      sym_string_single_quoted,
      sym_string_double_quoted,
      sym_boolean,
    STATE(59), 6,
      sym__primitive_expression,
      sym__numeric_literals,
      sym_array,
      sym_array_ref,
      sym_hash,
      sym_hash_ref,
  [507] = 6,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 4,
      sym_integer,
      sym_floating_point,
      sym_scientific_notation,
      sym_octal,
    ACTIONS(63), 4,
      sym_hexadecimal,
      sym_string_single_quoted,
      sym_string_double_quoted,
      sym_boolean,
    STATE(61), 6,
      sym__primitive_expression,
      sym__numeric_literals,
      sym_array,
      sym_array_ref,
      sym_hash,
      sym_hash_ref,
  [537] = 1,
    ACTIONS(101), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_our,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_single_line_comment,
  [549] = 1,
    ACTIONS(103), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_our,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_single_line_comment,
  [561] = 1,
    ACTIONS(105), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_our,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_single_line_comment,
  [573] = 1,
    ACTIONS(107), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_our,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_single_line_comment,
  [585] = 1,
    ACTIONS(109), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_our,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_single_line_comment,
  [597] = 1,
    ACTIONS(111), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_our,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_single_line_comment,
  [609] = 1,
    ACTIONS(113), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_our,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_single_line_comment,
  [621] = 4,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_variable_declarator,
    STATE(75), 2,
      sym_multi_var_declaration,
      sym_single_var_declaration,
    ACTIONS(117), 3,
      sym_scalar_variable,
      sym_array_variable,
      sym_hash_variable,
  [637] = 1,
    ACTIONS(119), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [645] = 3,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      sym_variable_declarator,
    ACTIONS(117), 3,
      sym_scalar_variable,
      sym_array_variable,
      sym_hash_variable,
  [657] = 3,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      sym_variable_declarator,
    ACTIONS(117), 3,
      sym_scalar_variable,
      sym_array_variable,
      sym_hash_variable,
  [669] = 1,
    ACTIONS(125), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [677] = 1,
    ACTIONS(127), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [685] = 1,
    ACTIONS(129), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [693] = 1,
    ACTIONS(131), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [701] = 1,
    ACTIONS(133), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [709] = 1,
    ACTIONS(135), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [717] = 1,
    ACTIONS(137), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [725] = 1,
    ACTIONS(139), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [733] = 1,
    ACTIONS(141), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [741] = 1,
    ACTIONS(143), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [749] = 1,
    ACTIONS(145), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [757] = 1,
    ACTIONS(147), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [765] = 1,
    ACTIONS(149), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [773] = 1,
    ACTIONS(151), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [781] = 3,
    ACTIONS(153), 1,
      anon_sym_EQ,
    STATE(68), 1,
      sym__initializer,
    ACTIONS(155), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__semi_colon,
  [793] = 3,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_array_repeat1,
    ACTIONS(157), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [804] = 3,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_hash_repeat1,
    ACTIONS(162), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [815] = 2,
    STATE(62), 1,
      sym_variable_declarator,
    ACTIONS(117), 3,
      sym_scalar_variable,
      sym_array_variable,
      sym_hash_variable,
  [824] = 1,
    ACTIONS(167), 4,
      anon_sym_LPAREN,
      sym_scalar_variable,
      sym_array_variable,
      sym_hash_variable,
  [831] = 2,
    STATE(70), 1,
      sym_variable_declarator,
    ACTIONS(117), 3,
      sym_scalar_variable,
      sym_array_variable,
      sym_hash_variable,
  [840] = 3,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_array_repeat1,
  [850] = 3,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_multi_var_declaration_repeat1,
  [860] = 3,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym_hash_repeat1,
  [870] = 3,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_array_repeat1,
  [880] = 3,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_array_repeat1,
  [890] = 3,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    STATE(63), 1,
      aux_sym_hash_repeat1,
  [900] = 3,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_hash_repeat1,
  [910] = 3,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      anon_sym_RBRACK,
    STATE(52), 1,
      aux_sym_array_repeat1,
  [920] = 3,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_multi_var_declaration_repeat1,
  [930] = 1,
    ACTIONS(200), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__semi_colon,
  [936] = 1,
    ACTIONS(202), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [942] = 3,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    ACTIONS(204), 1,
      sym_identifier,
    STATE(65), 1,
      sym__key_value_pair,
  [952] = 1,
    ACTIONS(157), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [958] = 3,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_multi_var_declaration_repeat1,
  [968] = 3,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_hash_repeat1,
  [978] = 3,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      sym__key_value_pair,
  [988] = 1,
    ACTIONS(162), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [994] = 3,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      sym__key_value_pair,
  [1004] = 3,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym__key_value_pair,
  [1014] = 1,
    ACTIONS(218), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__semi_colon,
  [1020] = 3,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym__key_value_pair,
  [1030] = 1,
    ACTIONS(171), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1035] = 2,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_block,
  [1042] = 2,
    ACTIONS(204), 1,
      sym_identifier,
    STATE(65), 1,
      sym__key_value_pair,
  [1049] = 2,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_block,
  [1056] = 1,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
  [1060] = 1,
    ACTIONS(226), 1,
      sym__semi_colon,
  [1064] = 1,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
  [1068] = 1,
    ACTIONS(230), 1,
      sym_identifier,
  [1072] = 1,
    ACTIONS(232), 1,
      sym__semi_colon,
  [1076] = 1,
    ACTIONS(234), 1,
      sym__semi_colon,
  [1080] = 1,
    ACTIONS(236), 1,
      sym__semi_colon,
  [1084] = 1,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
  [1088] = 1,
    ACTIONS(240), 1,
      sym__semi_colon,
  [1092] = 1,
    ACTIONS(242), 1,
      sym__semi_colon,
  [1096] = 1,
    ACTIONS(244), 1,
      sym__semi_colon,
  [1100] = 1,
    ACTIONS(246), 1,
      anon_sym_EQ_GT,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 77,
  [SMALL_STATE(5)] = 110,
  [SMALL_STATE(6)] = 143,
  [SMALL_STATE(7)] = 180,
  [SMALL_STATE(8)] = 211,
  [SMALL_STATE(9)] = 244,
  [SMALL_STATE(10)] = 281,
  [SMALL_STATE(11)] = 314,
  [SMALL_STATE(12)] = 345,
  [SMALL_STATE(13)] = 382,
  [SMALL_STATE(14)] = 413,
  [SMALL_STATE(15)] = 446,
  [SMALL_STATE(16)] = 477,
  [SMALL_STATE(17)] = 507,
  [SMALL_STATE(18)] = 537,
  [SMALL_STATE(19)] = 549,
  [SMALL_STATE(20)] = 561,
  [SMALL_STATE(21)] = 573,
  [SMALL_STATE(22)] = 585,
  [SMALL_STATE(23)] = 597,
  [SMALL_STATE(24)] = 609,
  [SMALL_STATE(25)] = 621,
  [SMALL_STATE(26)] = 637,
  [SMALL_STATE(27)] = 645,
  [SMALL_STATE(28)] = 657,
  [SMALL_STATE(29)] = 669,
  [SMALL_STATE(30)] = 677,
  [SMALL_STATE(31)] = 685,
  [SMALL_STATE(32)] = 693,
  [SMALL_STATE(33)] = 701,
  [SMALL_STATE(34)] = 709,
  [SMALL_STATE(35)] = 717,
  [SMALL_STATE(36)] = 725,
  [SMALL_STATE(37)] = 733,
  [SMALL_STATE(38)] = 741,
  [SMALL_STATE(39)] = 749,
  [SMALL_STATE(40)] = 757,
  [SMALL_STATE(41)] = 765,
  [SMALL_STATE(42)] = 773,
  [SMALL_STATE(43)] = 781,
  [SMALL_STATE(44)] = 793,
  [SMALL_STATE(45)] = 804,
  [SMALL_STATE(46)] = 815,
  [SMALL_STATE(47)] = 824,
  [SMALL_STATE(48)] = 831,
  [SMALL_STATE(49)] = 840,
  [SMALL_STATE(50)] = 850,
  [SMALL_STATE(51)] = 860,
  [SMALL_STATE(52)] = 870,
  [SMALL_STATE(53)] = 880,
  [SMALL_STATE(54)] = 890,
  [SMALL_STATE(55)] = 900,
  [SMALL_STATE(56)] = 910,
  [SMALL_STATE(57)] = 920,
  [SMALL_STATE(58)] = 930,
  [SMALL_STATE(59)] = 936,
  [SMALL_STATE(60)] = 942,
  [SMALL_STATE(61)] = 952,
  [SMALL_STATE(62)] = 958,
  [SMALL_STATE(63)] = 968,
  [SMALL_STATE(64)] = 978,
  [SMALL_STATE(65)] = 988,
  [SMALL_STATE(66)] = 994,
  [SMALL_STATE(67)] = 1004,
  [SMALL_STATE(68)] = 1014,
  [SMALL_STATE(69)] = 1020,
  [SMALL_STATE(70)] = 1030,
  [SMALL_STATE(71)] = 1035,
  [SMALL_STATE(72)] = 1042,
  [SMALL_STATE(73)] = 1049,
  [SMALL_STATE(74)] = 1056,
  [SMALL_STATE(75)] = 1060,
  [SMALL_STATE(76)] = 1064,
  [SMALL_STATE(77)] = 1068,
  [SMALL_STATE(78)] = 1072,
  [SMALL_STATE(79)] = 1076,
  [SMALL_STATE(80)] = 1080,
  [SMALL_STATE(81)] = 1084,
  [SMALL_STATE(82)] = 1088,
  [SMALL_STATE(83)] = 1092,
  [SMALL_STATE(84)] = 1096,
  [SMALL_STATE(85)] = 1100,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 6),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_ref, 5),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_ref, 5),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_ref, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_ref, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_ref, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_ref, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_ref, 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_ref, 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 4),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declarator, 1, .production_id = 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(17),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 2), SHIFT_REPEAT(72),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_var_declaration_repeat1, 2),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_var_declaration_repeat1, 2), SHIFT_REPEAT(48),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__initializer, 2, .production_id = 5),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_pair, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declarator, 2, .production_id = 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [228] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_var_declaration, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_var_declaration, 1, .production_id = 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_var_declaration, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_var_declaration, 5),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_perl(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
