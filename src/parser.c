#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 78
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 1
#define TOKEN_COUNT 28
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
  sym_array = 45,
  sym_array_ref = 46,
  sym_hash_ref = 47,
  sym__key_value_pair = 48,
  aux_sym_source_file_repeat1 = 49,
  aux_sym_multi_var_declaration_repeat1 = 50,
  aux_sym_array_repeat1 = 51,
  aux_sym_hash_ref_repeat1 = 52,
  anon_alias_sym_single_var_declaration = 53,
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
  [sym_array] = "array",
  [sym_array_ref] = "array_ref",
  [sym_hash_ref] = "hash_ref",
  [sym__key_value_pair] = "_key_value_pair",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_multi_var_declaration_repeat1] = "multi_var_declaration_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
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
  [sym_array] = sym_array,
  [sym_array_ref] = sym_array_ref,
  [sym_hash_ref] = sym_hash_ref,
  [sym__key_value_pair] = sym__key_value_pair,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_multi_var_declaration_repeat1] = aux_sym_multi_var_declaration_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
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
  [sym_array] = {
    .visible = true,
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
  [aux_sym_array_repeat1] = {
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
      if (eof) ADVANCE(32);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '$') ADVANCE(29);
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
      if (lookahead == '@') ADVANCE(30);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(59);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(59);
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
  [26] = {.lex_state = 31},
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
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 0},
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
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 0},
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
    [sym_source_file] = STATE(72),
    [sym__statement] = STATE(3),
    [sym__comments] = STATE(3),
    [sym_assignment_statement] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym__declaration] = STATE(3),
    [sym_variable_declaration] = STATE(3),
    [sym_scope] = STATE(25),
    [sym_function_definition] = STATE(3),
    [sym_return_statement] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
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
      ts_builtin_sym_end,
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
      anon_sym_RBRACE,
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
    STATE(4), 9,
      sym__statement,
      sym__comments,
      sym_assignment_statement,
      sym_if_statement,
      sym__declaration,
      sym_variable_declaration,
      sym_function_definition,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [149] = 7,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 4,
      sym_integer,
      sym_floating_point,
      sym_scientific_notation,
      sym_octal,
    ACTIONS(55), 4,
      sym_hexadecimal,
      sym_string_single_quoted,
      sym_string_double_quoted,
      sym_boolean,
    STATE(50), 5,
      sym__expression,
      sym__numeric_literals,
      sym_array,
      sym_array_ref,
      sym_hash_ref,
  [181] = 7,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_RBRACK,
    ACTIONS(59), 4,
      sym_integer,
      sym_floating_point,
      sym_scientific_notation,
      sym_octal,
    ACTIONS(61), 4,
      sym_hexadecimal,
      sym_string_single_quoted,
      sym_string_double_quoted,
      sym_boolean,
    STATE(49), 5,
      sym__expression,
      sym__numeric_literals,
      sym_array,
      sym_array_ref,
      sym_hash_ref,
  [213] = 7,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    ACTIONS(53), 4,
      sym_integer,
      sym_floating_point,
      sym_scientific_notation,
      sym_octal,
    ACTIONS(55), 4,
      sym_hexadecimal,
      sym_string_single_quoted,
      sym_string_double_quoted,
      sym_boolean,
    STATE(50), 5,
      sym__expression,
      sym__numeric_literals,
      sym_array,
      sym_array_ref,
      sym_hash_ref,
  [245] = 7,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(53), 4,
      sym_integer,
      sym_floating_point,
      sym_scientific_notation,
      sym_octal,
    ACTIONS(55), 4,
      sym_hexadecimal,
      sym_string_single_quoted,
      sym_string_double_quoted,
      sym_boolean,
    STATE(50), 5,
      sym__expression,
      sym__numeric_literals,
      sym_array,
      sym_array_ref,
      sym_hash_ref,
  [277] = 7,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    ACTIONS(53), 4,
      sym_integer,
      sym_floating_point,
      sym_scientific_notation,
      sym_octal,
    ACTIONS(55), 4,
      sym_hexadecimal,
      sym_string_single_quoted,
      sym_string_double_quoted,
      sym_boolean,
    STATE(50), 5,
      sym__expression,
      sym__numeric_literals,
      sym_array,
      sym_array_ref,
      sym_hash_ref,
  [309] = 6,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 4,
      sym_integer,
      sym_floating_point,
      sym_scientific_notation,
      sym_octal,
    ACTIONS(73), 4,
      sym_hexadecimal,
      sym_string_single_quoted,
      sym_string_double_quoted,
      sym_boolean,
    STATE(68), 5,
      sym__expression,
      sym__numeric_literals,
      sym_array,
      sym_array_ref,
      sym_hash_ref,
  [338] = 6,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
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
    STATE(45), 5,
      sym__expression,
      sym__numeric_literals,
      sym_array,
      sym_array_ref,
      sym_hash_ref,
  [367] = 6,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
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
    STATE(56), 5,
      sym__expression,
      sym__numeric_literals,
      sym_array,
      sym_array_ref,
      sym_hash_ref,
  [396] = 6,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
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
    STATE(77), 5,
      sym__expression,
      sym__numeric_literals,
      sym_array,
      sym_array_ref,
      sym_hash_ref,
  [425] = 6,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
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
    STATE(70), 5,
      sym__expression,
      sym__numeric_literals,
      sym_array,
      sym_array_ref,
      sym_hash_ref,
  [454] = 6,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 4,
      sym_integer,
      sym_floating_point,
      sym_scientific_notation,
      sym_octal,
    ACTIONS(55), 4,
      sym_hexadecimal,
      sym_string_single_quoted,
      sym_string_double_quoted,
      sym_boolean,
    STATE(50), 5,
      sym__expression,
      sym__numeric_literals,
      sym_array,
      sym_array_ref,
      sym_hash_ref,
  [483] = 6,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
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
    STATE(61), 5,
      sym__expression,
      sym__numeric_literals,
      sym_array,
      sym_array_ref,
      sym_hash_ref,
  [512] = 1,
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
  [524] = 1,
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
  [536] = 1,
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
  [548] = 1,
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
  [560] = 1,
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
  [572] = 1,
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
  [584] = 1,
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
  [596] = 4,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym_variable_declarator,
    ACTIONS(111), 2,
      sym_scalar_variable,
      sym_array_variable,
    STATE(69), 2,
      sym_multi_var_declaration,
      sym_single_var_declaration,
  [611] = 3,
    ACTIONS(113), 1,
      anon_sym_EQ,
    STATE(43), 1,
      sym__initializer,
    ACTIONS(115), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__semi_colon,
  [623] = 1,
    ACTIONS(117), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [631] = 1,
    ACTIONS(119), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [639] = 1,
    ACTIONS(121), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [647] = 1,
    ACTIONS(123), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [655] = 1,
    ACTIONS(125), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [663] = 1,
    ACTIONS(127), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [671] = 1,
    ACTIONS(129), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [679] = 1,
    ACTIONS(131), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [687] = 1,
    ACTIONS(133), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [695] = 1,
    ACTIONS(135), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [703] = 1,
    ACTIONS(137), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__semi_colon,
      anon_sym_RBRACK,
  [711] = 3,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      aux_sym_array_repeat1,
    ACTIONS(139), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [722] = 3,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      sym_variable_declarator,
    ACTIONS(111), 2,
      sym_scalar_variable,
      sym_array_variable,
  [733] = 3,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      sym_variable_declarator,
    ACTIONS(111), 2,
      sym_scalar_variable,
      sym_array_variable,
  [744] = 1,
    ACTIONS(148), 3,
      anon_sym_LPAREN,
      sym_scalar_variable,
      sym_array_variable,
  [750] = 3,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    ACTIONS(152), 1,
      sym_identifier,
    STATE(60), 1,
      sym__key_value_pair,
  [760] = 1,
    ACTIONS(154), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__semi_colon,
  [766] = 3,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      aux_sym_hash_ref_repeat1,
  [776] = 1,
    ACTIONS(160), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__semi_colon,
  [782] = 3,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym_multi_var_declaration_repeat1,
  [792] = 3,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      aux_sym_array_repeat1,
  [802] = 2,
    STATE(64), 1,
      sym_variable_declarator,
    ACTIONS(111), 2,
      sym_scalar_variable,
      sym_array_variable,
  [810] = 3,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      aux_sym_array_repeat1,
  [820] = 1,
    ACTIONS(139), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [826] = 2,
    STATE(53), 1,
      sym_variable_declarator,
    ACTIONS(111), 2,
      sym_scalar_variable,
      sym_array_variable,
  [834] = 3,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym_multi_var_declaration_repeat1,
  [844] = 3,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym_multi_var_declaration_repeat1,
  [854] = 3,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      sym__key_value_pair,
  [864] = 3,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      aux_sym_hash_ref_repeat1,
  [874] = 3,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_array_repeat1,
  [884] = 3,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      aux_sym_array_repeat1,
  [894] = 3,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      aux_sym_hash_ref_repeat1,
  [904] = 3,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym__key_value_pair,
  [914] = 1,
    ACTIONS(192), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [919] = 1,
    ACTIONS(196), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [924] = 2,
    ACTIONS(152), 1,
      sym_identifier,
    STATE(60), 1,
      sym__key_value_pair,
  [931] = 2,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_block,
  [938] = 1,
    ACTIONS(162), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [943] = 2,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_block,
  [950] = 1,
    ACTIONS(200), 1,
      sym__semi_colon,
  [954] = 1,
    ACTIONS(202), 1,
      sym__semi_colon,
  [958] = 1,
    ACTIONS(204), 1,
      sym__semi_colon,
  [962] = 1,
    ACTIONS(206), 1,
      sym__semi_colon,
  [966] = 1,
    ACTIONS(208), 1,
      sym__semi_colon,
  [970] = 1,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
  [974] = 1,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
  [978] = 1,
    ACTIONS(214), 1,
      sym_identifier,
  [982] = 1,
    ACTIONS(216), 1,
      anon_sym_EQ_GT,
  [986] = 1,
    ACTIONS(218), 1,
      sym__semi_colon,
  [990] = 1,
    ACTIONS(220), 1,
      sym__semi_colon,
  [994] = 1,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 75,
  [SMALL_STATE(5)] = 112,
  [SMALL_STATE(6)] = 149,
  [SMALL_STATE(7)] = 181,
  [SMALL_STATE(8)] = 213,
  [SMALL_STATE(9)] = 245,
  [SMALL_STATE(10)] = 277,
  [SMALL_STATE(11)] = 309,
  [SMALL_STATE(12)] = 338,
  [SMALL_STATE(13)] = 367,
  [SMALL_STATE(14)] = 396,
  [SMALL_STATE(15)] = 425,
  [SMALL_STATE(16)] = 454,
  [SMALL_STATE(17)] = 483,
  [SMALL_STATE(18)] = 512,
  [SMALL_STATE(19)] = 524,
  [SMALL_STATE(20)] = 536,
  [SMALL_STATE(21)] = 548,
  [SMALL_STATE(22)] = 560,
  [SMALL_STATE(23)] = 572,
  [SMALL_STATE(24)] = 584,
  [SMALL_STATE(25)] = 596,
  [SMALL_STATE(26)] = 611,
  [SMALL_STATE(27)] = 623,
  [SMALL_STATE(28)] = 631,
  [SMALL_STATE(29)] = 639,
  [SMALL_STATE(30)] = 647,
  [SMALL_STATE(31)] = 655,
  [SMALL_STATE(32)] = 663,
  [SMALL_STATE(33)] = 671,
  [SMALL_STATE(34)] = 679,
  [SMALL_STATE(35)] = 687,
  [SMALL_STATE(36)] = 695,
  [SMALL_STATE(37)] = 703,
  [SMALL_STATE(38)] = 711,
  [SMALL_STATE(39)] = 722,
  [SMALL_STATE(40)] = 733,
  [SMALL_STATE(41)] = 744,
  [SMALL_STATE(42)] = 750,
  [SMALL_STATE(43)] = 760,
  [SMALL_STATE(44)] = 766,
  [SMALL_STATE(45)] = 776,
  [SMALL_STATE(46)] = 782,
  [SMALL_STATE(47)] = 792,
  [SMALL_STATE(48)] = 802,
  [SMALL_STATE(49)] = 810,
  [SMALL_STATE(50)] = 820,
  [SMALL_STATE(51)] = 826,
  [SMALL_STATE(52)] = 834,
  [SMALL_STATE(53)] = 844,
  [SMALL_STATE(54)] = 854,
  [SMALL_STATE(55)] = 864,
  [SMALL_STATE(56)] = 874,
  [SMALL_STATE(57)] = 884,
  [SMALL_STATE(58)] = 894,
  [SMALL_STATE(59)] = 904,
  [SMALL_STATE(60)] = 914,
  [SMALL_STATE(61)] = 919,
  [SMALL_STATE(62)] = 924,
  [SMALL_STATE(63)] = 931,
  [SMALL_STATE(64)] = 938,
  [SMALL_STATE(65)] = 943,
  [SMALL_STATE(66)] = 950,
  [SMALL_STATE(67)] = 954,
  [SMALL_STATE(68)] = 958,
  [SMALL_STATE(69)] = 962,
  [SMALL_STATE(70)] = 966,
  [SMALL_STATE(71)] = 970,
  [SMALL_STATE(72)] = 974,
  [SMALL_STATE(73)] = 978,
  [SMALL_STATE(74)] = 982,
  [SMALL_STATE(75)] = 986,
  [SMALL_STATE(76)] = 990,
  [SMALL_STATE(77)] = 994,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 6),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declarator, 1, .production_id = 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_ref, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_ref, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_ref, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_ref, 5),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_ref, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_ref, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_ref, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_ref, 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(16),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declarator, 2, .production_id = 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__initializer, 2, .production_id = 5),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_var_declaration_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_var_declaration_repeat1, 2), SHIFT_REPEAT(48),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hash_ref_repeat1, 2), SHIFT_REPEAT(62),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hash_ref_repeat1, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_pair, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_var_declaration, 1, .production_id = 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_var_declaration, 4),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [212] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_var_declaration, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_var_declaration, 5),
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
