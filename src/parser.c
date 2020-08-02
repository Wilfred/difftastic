#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 78
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 1
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6

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
  anon_sym_LBRACK = 24,
  anon_sym_RBRACK = 25,
  anon_sym_EQ_GT = 26,
  sym_single_line_comment = 27,
  sym_source_file = 28,
  sym__statement = 29,
  sym__comments = 30,
  sym_assignment_statement = 31,
  sym_if_statement = 32,
  sym__declaration = 33,
  sym_variable_declaration = 34,
  sym_multi_var_declaration = 35,
  sym_single_var_declaration = 36,
  sym_variable_declarator = 37,
  sym__initializer = 38,
  sym_scope = 39,
  sym_function_definition = 40,
  sym_block = 41,
  sym_return_statement = 42,
  sym__expression = 43,
  sym__numeric_literals = 44,
  sym_array_ref = 45,
  sym_hash_ref = 46,
  sym__key_value_pair = 47,
  aux_sym_source_file_repeat1 = 48,
  aux_sym_multi_var_declaration_repeat1 = 49,
  aux_sym__initializer_repeat1 = 50,
  aux_sym_hash_ref_repeat1 = 51,
  anon_alias_sym_single_var_declaration = 52,
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
  [sym__numeric_literals] = "_numeric_literals",
  [sym_array_ref] = "array_ref",
  [sym_hash_ref] = "hash_ref",
  [sym__key_value_pair] = "_key_value_pair",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_multi_var_declaration_repeat1] = "multi_var_declaration_repeat1",
  [aux_sym__initializer_repeat1] = "_initializer_repeat1",
  [aux_sym_hash_ref_repeat1] = "hash_ref_repeat1",
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
  [sym__numeric_literals] = sym__numeric_literals,
  [sym_array_ref] = sym_array_ref,
  [sym_hash_ref] = sym_hash_ref,
  [sym__key_value_pair] = sym__key_value_pair,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_multi_var_declaration_repeat1] = aux_sym_multi_var_declaration_repeat1,
  [aux_sym__initializer_repeat1] = aux_sym__initializer_repeat1,
  [aux_sym_hash_ref_repeat1] = aux_sym_hash_ref_repeat1,
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
  [sym__numeric_literals] = {
    .visible = false,
    .named = true,
  },
  [sym_array_ref] = {
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
  [aux_sym__initializer_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hash_ref_repeat1] = {
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

static const TSFieldMapSlice ts_field_map_slices[10] = {
  [1] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 2},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 3},
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
  [7] =
    {field_value, 2},
  [8] =
    {field_value, 2},
    {field_value, 3},
  [10] =
    {field_value, 2},
    {field_value, 3},
    {field_value, 4},
};

static TSSymbol ts_alias_sequences[10][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      if (eof) ADVANCE(32);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '+') ADVANCE(4);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '0') ADVANCE(46);
      if (lookahead == ';') ADVANCE(54);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == ']') ADVANCE(61);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 'm') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(62);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(41);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 11:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 23:
      if (lookahead == 'y') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 29:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == ';') ADVANCE(54);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 'm') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(62);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_our);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_my);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(28);
      if (lookahead == '0' ||
          lookahead == '8' ||
          lookahead == '9') ADVANCE(47);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_floating_point);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_scientific_notation);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_scientific_notation);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_scientific_notation);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__semi_colon);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_string_single_quoted);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_string_double_quoted);
      if (lookahead == '"') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_scalar_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_array_variable);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 31},
  [2] = {.lex_state = 31},
  [3] = {.lex_state = 31},
  [4] = {.lex_state = 31},
  [5] = {.lex_state = 31},
  [6] = {.lex_state = 0},
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
  [18] = {.lex_state = 31},
  [19] = {.lex_state = 31},
  [20] = {.lex_state = 31},
  [21] = {.lex_state = 31},
  [22] = {.lex_state = 31},
  [23] = {.lex_state = 31},
  [24] = {.lex_state = 31},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 31},
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
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [sym_single_line_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(69),
    [sym__statement] = STATE(4),
    [sym__comments] = STATE(4),
    [sym_assignment_statement] = STATE(4),
    [sym_if_statement] = STATE(4),
    [sym__declaration] = STATE(4),
    [sym_variable_declaration] = STATE(4),
    [sym_scope] = STATE(25),
    [sym_function_definition] = STATE(4),
    [sym_return_statement] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
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
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(22), 1,
      anon_sym_if,
    ACTIONS(28), 1,
      anon_sym_sub,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(34), 1,
      sym_single_line_comment,
    STATE(25), 1,
      sym_scope,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(25), 2,
      anon_sym_our,
      anon_sym_my,
    STATE(2), 9,
      sym__statement,
      sym__comments,
      sym_assignment_statement,
      sym_if_statement,
      sym__declaration,
      sym_variable_declaration,
      sym_function_definition,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [38] = 9,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_sub,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      sym_single_line_comment,
    STATE(25), 1,
      sym_scope,
    ACTIONS(9), 2,
      anon_sym_our,
      anon_sym_my,
    STATE(2), 9,
      sym__statement,
      sym__comments,
      sym_assignment_statement,
      sym_if_statement,
      sym__declaration,
      sym_variable_declaration,
      sym_function_definition,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [75] = 9,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_sub,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(39), 1,
      sym_single_line_comment,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym_scope,
    ACTIONS(9), 2,
      anon_sym_our,
      anon_sym_my,
    STATE(2), 9,
      sym__statement,
      sym__comments,
      sym_assignment_statement,
      sym_if_statement,
      sym__declaration,
      sym_variable_declaration,
      sym_function_definition,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [112] = 9,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_sub,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(45), 1,
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
  [149] = 6,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
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
    STATE(38), 4,
      sym__expression,
      sym__numeric_literals,
      sym_array_ref,
      sym_hash_ref,
  [177] = 6,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
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
    STATE(38), 4,
      sym__expression,
      sym__numeric_literals,
      sym_array_ref,
      sym_hash_ref,
  [205] = 6,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
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
    STATE(49), 4,
      sym__expression,
      sym__numeric_literals,
      sym_array_ref,
      sym_hash_ref,
  [233] = 6,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    ACTIONS(65), 4,
      sym_integer,
      sym_floating_point,
      sym_scientific_notation,
      sym_octal,
    ACTIONS(67), 4,
      sym_hexadecimal,
      sym_string_single_quoted,
      sym_string_double_quoted,
      sym_boolean,
    STATE(45), 4,
      sym__expression,
      sym__numeric_literals,
      sym_array_ref,
      sym_hash_ref,
  [261] = 6,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
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
    STATE(38), 4,
      sym__expression,
      sym__numeric_literals,
      sym_array_ref,
      sym_hash_ref,
  [289] = 6,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
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
    STATE(38), 4,
      sym__expression,
      sym__numeric_literals,
      sym_array_ref,
      sym_hash_ref,
  [317] = 5,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 4,
      sym_integer,
      sym_floating_point,
      sym_scientific_notation,
      sym_octal,
    ACTIONS(77), 4,
      sym_hexadecimal,
      sym_string_single_quoted,
      sym_string_double_quoted,
      sym_boolean,
    STATE(71), 4,
      sym__expression,
      sym__numeric_literals,
      sym_array_ref,
      sym_hash_ref,
  [342] = 5,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
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
    STATE(38), 4,
      sym__expression,
      sym__numeric_literals,
      sym_array_ref,
      sym_hash_ref,
  [367] = 5,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 4,
      sym_integer,
      sym_floating_point,
      sym_scientific_notation,
      sym_octal,
    ACTIONS(81), 4,
      sym_hexadecimal,
      sym_string_single_quoted,
      sym_string_double_quoted,
      sym_boolean,
    STATE(67), 4,
      sym__expression,
      sym__numeric_literals,
      sym_array_ref,
      sym_hash_ref,
  [392] = 5,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 4,
      sym_integer,
      sym_floating_point,
      sym_scientific_notation,
      sym_octal,
    ACTIONS(85), 4,
      sym_hexadecimal,
      sym_string_single_quoted,
      sym_string_double_quoted,
      sym_boolean,
    STATE(63), 4,
      sym__expression,
      sym__numeric_literals,
      sym_array_ref,
      sym_hash_ref,
  [417] = 5,
    ACTIONS(49), 1,
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
    STATE(77), 4,
      sym__expression,
      sym__numeric_literals,
      sym_array_ref,
      sym_hash_ref,
  [442] = 5,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 4,
      sym_integer,
      sym_floating_point,
      sym_scientific_notation,
      sym_octal,
    ACTIONS(93), 4,
      sym_hexadecimal,
      sym_string_single_quoted,
      sym_string_double_quoted,
      sym_boolean,
    STATE(50), 4,
      sym__expression,
      sym__numeric_literals,
      sym_array_ref,
      sym_hash_ref,
  [467] = 1,
    ACTIONS(95), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_our,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_single_line_comment,
  [479] = 1,
    ACTIONS(97), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_our,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_single_line_comment,
  [491] = 1,
    ACTIONS(99), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_our,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_single_line_comment,
  [503] = 1,
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
  [515] = 1,
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
  [527] = 1,
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
  [539] = 1,
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
  [551] = 4,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym_variable_declarator,
    ACTIONS(111), 2,
      sym_scalar_variable,
      sym_array_variable,
    STATE(66), 2,
      sym_multi_var_declaration,
      sym_single_var_declaration,
  [566] = 1,
    ACTIONS(113), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [574] = 1,
    ACTIONS(115), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [582] = 1,
    ACTIONS(117), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [590] = 1,
    ACTIONS(119), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [598] = 1,
    ACTIONS(121), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [606] = 1,
    ACTIONS(123), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [614] = 3,
    ACTIONS(125), 1,
      anon_sym_EQ,
    STATE(59), 1,
      sym__initializer,
    ACTIONS(127), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__semi_colon,
  [626] = 1,
    ACTIONS(129), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [634] = 1,
    ACTIONS(131), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [642] = 3,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym__initializer_repeat1,
    ACTIONS(133), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [653] = 3,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_variable_declarator,
    ACTIONS(111), 2,
      sym_scalar_variable,
      sym_array_variable,
  [664] = 3,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_variable_declarator,
    ACTIONS(111), 2,
      sym_scalar_variable,
      sym_array_variable,
  [675] = 1,
    ACTIONS(133), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [681] = 3,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym__initializer_repeat1,
  [691] = 3,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_hash_ref_repeat1,
  [701] = 1,
    ACTIONS(148), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__semi_colon,
  [707] = 3,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym__initializer_repeat1,
  [717] = 3,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(48), 1,
      sym__key_value_pair,
  [727] = 1,
    ACTIONS(156), 3,
      anon_sym_LPAREN,
      sym_scalar_variable,
      sym_array_variable,
  [733] = 3,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(160), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      aux_sym__initializer_repeat1,
  [743] = 1,
    ACTIONS(162), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__semi_colon,
  [749] = 3,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_multi_var_declaration_repeat1,
  [759] = 3,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_hash_ref_repeat1,
  [769] = 1,
    ACTIONS(170), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__semi_colon,
  [775] = 3,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym__initializer_repeat1,
  [785] = 2,
    STATE(60), 1,
      sym_variable_declarator,
    ACTIONS(111), 2,
      sym_scalar_variable,
      sym_array_variable,
  [793] = 2,
    STATE(55), 1,
      sym_variable_declarator,
    ACTIONS(111), 2,
      sym_scalar_variable,
      sym_array_variable,
  [801] = 3,
    ACTIONS(154), 1,
      sym_identifier,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      sym__key_value_pair,
  [811] = 3,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_hash_ref_repeat1,
  [821] = 3,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym_multi_var_declaration_repeat1,
  [831] = 1,
    ACTIONS(187), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__semi_colon,
  [837] = 3,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(62), 1,
      sym__key_value_pair,
  [847] = 3,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_multi_var_declaration_repeat1,
  [857] = 1,
    ACTIONS(194), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__semi_colon,
  [863] = 1,
    ACTIONS(189), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [868] = 2,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_block,
  [875] = 1,
    ACTIONS(181), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [880] = 1,
    ACTIONS(198), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [885] = 2,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(62), 1,
      sym__key_value_pair,
  [892] = 2,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_block,
  [899] = 1,
    ACTIONS(200), 1,
      sym__semi_colon,
  [903] = 1,
    ACTIONS(202), 1,
      sym__semi_colon,
  [907] = 1,
    ACTIONS(204), 1,
      sym__semi_colon,
  [911] = 1,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
  [915] = 1,
    ACTIONS(208), 1,
      sym__semi_colon,
  [919] = 1,
    ACTIONS(210), 1,
      sym__semi_colon,
  [923] = 1,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
  [927] = 1,
    ACTIONS(214), 1,
      sym_identifier,
  [931] = 1,
    ACTIONS(216), 1,
      sym__semi_colon,
  [935] = 1,
    ACTIONS(218), 1,
      anon_sym_EQ_GT,
  [939] = 1,
    ACTIONS(220), 1,
      sym__semi_colon,
  [943] = 1,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 75,
  [SMALL_STATE(5)] = 112,
  [SMALL_STATE(6)] = 149,
  [SMALL_STATE(7)] = 177,
  [SMALL_STATE(8)] = 205,
  [SMALL_STATE(9)] = 233,
  [SMALL_STATE(10)] = 261,
  [SMALL_STATE(11)] = 289,
  [SMALL_STATE(12)] = 317,
  [SMALL_STATE(13)] = 342,
  [SMALL_STATE(14)] = 367,
  [SMALL_STATE(15)] = 392,
  [SMALL_STATE(16)] = 417,
  [SMALL_STATE(17)] = 442,
  [SMALL_STATE(18)] = 467,
  [SMALL_STATE(19)] = 479,
  [SMALL_STATE(20)] = 491,
  [SMALL_STATE(21)] = 503,
  [SMALL_STATE(22)] = 515,
  [SMALL_STATE(23)] = 527,
  [SMALL_STATE(24)] = 539,
  [SMALL_STATE(25)] = 551,
  [SMALL_STATE(26)] = 566,
  [SMALL_STATE(27)] = 574,
  [SMALL_STATE(28)] = 582,
  [SMALL_STATE(29)] = 590,
  [SMALL_STATE(30)] = 598,
  [SMALL_STATE(31)] = 606,
  [SMALL_STATE(32)] = 614,
  [SMALL_STATE(33)] = 626,
  [SMALL_STATE(34)] = 634,
  [SMALL_STATE(35)] = 642,
  [SMALL_STATE(36)] = 653,
  [SMALL_STATE(37)] = 664,
  [SMALL_STATE(38)] = 675,
  [SMALL_STATE(39)] = 681,
  [SMALL_STATE(40)] = 691,
  [SMALL_STATE(41)] = 701,
  [SMALL_STATE(42)] = 707,
  [SMALL_STATE(43)] = 717,
  [SMALL_STATE(44)] = 727,
  [SMALL_STATE(45)] = 733,
  [SMALL_STATE(46)] = 743,
  [SMALL_STATE(47)] = 749,
  [SMALL_STATE(48)] = 759,
  [SMALL_STATE(49)] = 769,
  [SMALL_STATE(50)] = 775,
  [SMALL_STATE(51)] = 785,
  [SMALL_STATE(52)] = 793,
  [SMALL_STATE(53)] = 801,
  [SMALL_STATE(54)] = 811,
  [SMALL_STATE(55)] = 821,
  [SMALL_STATE(56)] = 831,
  [SMALL_STATE(57)] = 837,
  [SMALL_STATE(58)] = 847,
  [SMALL_STATE(59)] = 857,
  [SMALL_STATE(60)] = 863,
  [SMALL_STATE(61)] = 868,
  [SMALL_STATE(62)] = 875,
  [SMALL_STATE(63)] = 880,
  [SMALL_STATE(64)] = 885,
  [SMALL_STATE(65)] = 892,
  [SMALL_STATE(66)] = 899,
  [SMALL_STATE(67)] = 903,
  [SMALL_STATE(68)] = 907,
  [SMALL_STATE(69)] = 911,
  [SMALL_STATE(70)] = 915,
  [SMALL_STATE(71)] = 919,
  [SMALL_STATE(72)] = 923,
  [SMALL_STATE(73)] = 927,
  [SMALL_STATE(74)] = 931,
  [SMALL_STATE(75)] = 935,
  [SMALL_STATE(76)] = 939,
  [SMALL_STATE(77)] = 943,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 6),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_ref, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_ref, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_ref, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_ref, 5),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_ref, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_ref, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declarator, 1, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_ref, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_ref, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__initializer_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__initializer_repeat1, 2), SHIFT_REPEAT(13),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__initializer, 6, .production_id = 9),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__initializer, 5, .production_id = 8),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__initializer, 2, .production_id = 5),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hash_ref_repeat1, 2), SHIFT_REPEAT(64),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hash_ref_repeat1, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__initializer, 4, .production_id = 7),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_var_declaration_repeat1, 2),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_var_declaration_repeat1, 2), SHIFT_REPEAT(51),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declarator, 2, .production_id = 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_pair, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_var_declaration, 4),
  [206] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_var_declaration, 5),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_var_declaration, 1, .production_id = 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_var_declaration, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
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
