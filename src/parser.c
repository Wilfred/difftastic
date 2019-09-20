#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 171
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 2
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_datasource = 1,
  anon_sym_model = 2,
  anon_sym_generator = 3,
  anon_sym_type = 4,
  anon_sym_enum = 5,
  sym_comment = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_EQ = 9,
  anon_sym_AMP_AMP = 10,
  anon_sym_PIPE_PIPE = 11,
  anon_sym_GT_GT = 12,
  anon_sym_GT_GT_GT = 13,
  anon_sym_LT_LT = 14,
  anon_sym_AMP = 15,
  anon_sym_CARET = 16,
  anon_sym_PIPE = 17,
  anon_sym_PLUS = 18,
  anon_sym_DASH = 19,
  anon_sym_STAR = 20,
  anon_sym_SLASH = 21,
  anon_sym_PERCENT = 22,
  anon_sym_STAR_STAR = 23,
  anon_sym_LT = 24,
  anon_sym_LT_EQ = 25,
  anon_sym_EQ_EQ = 26,
  anon_sym_EQ_EQ_EQ = 27,
  anon_sym_BANG_EQ = 28,
  anon_sym_BANG_EQ_EQ = 29,
  anon_sym_GT_EQ = 30,
  anon_sym_GT = 31,
  anon_sym_DOT = 32,
  aux_sym_column_type_token1 = 33,
  anon_sym_COLON = 34,
  anon_sym_AT = 35,
  anon_sym_AT_AT = 36,
  anon_sym_LPAREN = 37,
  anon_sym_COMMA = 38,
  anon_sym_RPAREN = 39,
  aux_sym_identifier_token1 = 40,
  sym_string = 41,
  sym_number = 42,
  anon_sym_LBRACK = 43,
  anon_sym_RBRACK = 44,
  sym_true = 45,
  sym_false = 46,
  sym_null = 47,
  sym_program = 48,
  sym_datasource_declaration = 49,
  sym_model_declaration = 50,
  sym_generator_declaration = 51,
  sym_type_declaration = 52,
  sym_enum_declaration = 53,
  sym__declaration = 54,
  sym_statement_block = 55,
  sym_enum_block = 56,
  sym__statement = 57,
  sym_column_declaration = 58,
  sym_assignment_expression = 59,
  sym__constructable_expression = 60,
  sym_binary_expression = 61,
  sym_member_expression = 62,
  sym_column_type = 63,
  sym_type_expression = 64,
  sym_call_expression = 65,
  sym_attribute = 66,
  sym_block_attribute_declaration = 67,
  sym_arguments = 68,
  sym__expression = 69,
  sym_identifier = 70,
  sym_enumeral = 71,
  sym_array = 72,
  aux_sym_program_repeat1 = 73,
  aux_sym_type_declaration_repeat1 = 74,
  aux_sym_statement_block_repeat1 = 75,
  aux_sym_enum_block_repeat1 = 76,
  aux_sym_column_declaration_repeat1 = 77,
  aux_sym_arguments_repeat1 = 78,
  alias_sym_property_identifier = 79,
  alias_sym_variable = 80,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_datasource] = "datasource",
  [anon_sym_model] = "model",
  [anon_sym_generator] = "generator",
  [anon_sym_type] = "type",
  [anon_sym_enum] = "enum",
  [sym_comment] = "comment",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_GT_GT_GT] = ">>>",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_AMP] = "&",
  [anon_sym_CARET] = "^",
  [anon_sym_PIPE] = "|",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_EQ_EQ_EQ] = "===",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_BANG_EQ_EQ] = "!==",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_DOT] = ".",
  [aux_sym_column_type_token1] = "column_type_token1",
  [anon_sym_COLON] = ":",
  [anon_sym_AT] = "@",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [aux_sym_identifier_token1] = "identifier_token1",
  [sym_string] = "string",
  [sym_number] = "number",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_program] = "program",
  [sym_datasource_declaration] = "datasource_declaration",
  [sym_model_declaration] = "model_declaration",
  [sym_generator_declaration] = "generator_declaration",
  [sym_type_declaration] = "type_declaration",
  [sym_enum_declaration] = "enum_declaration",
  [sym__declaration] = "_declaration",
  [sym_statement_block] = "statement_block",
  [sym_enum_block] = "enum_block",
  [sym__statement] = "_statement",
  [sym_column_declaration] = "column_declaration",
  [sym_assignment_expression] = "assignment_expression",
  [sym__constructable_expression] = "_constructable_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_member_expression] = "member_expression",
  [sym_column_type] = "column_type",
  [sym_type_expression] = "type_expression",
  [sym_call_expression] = "call_expression",
  [sym_attribute] = "attribute",
  [sym_block_attribute_declaration] = "block_attribute_declaration",
  [sym_arguments] = "arguments",
  [sym__expression] = "_expression",
  [sym_identifier] = "identifier",
  [sym_enumeral] = "enumeral",
  [sym_array] = "array",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_type_declaration_repeat1] = "type_declaration_repeat1",
  [aux_sym_statement_block_repeat1] = "statement_block_repeat1",
  [aux_sym_enum_block_repeat1] = "enum_block_repeat1",
  [aux_sym_column_declaration_repeat1] = "column_declaration_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [alias_sym_property_identifier] = "property_identifier",
  [alias_sym_variable] = "variable",
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
  [anon_sym_generator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
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
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
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
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_string] = {
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
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_datasource_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_model_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_generator_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_statement_block] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_column_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__constructable_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
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
  [sym_type_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_block_attribute_declaration] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_enumeral] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statement_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_column_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_property_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_variable] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_variable,
  },
  [2] = {
    [2] = alias_sym_property_identifier,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(39);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '&') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '+') ADVANCE(63);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '<') ADVANCE(70);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '[') ADVANCE(129);
      if (lookahead == ']') ADVANCE(130);
      if (lookahead == '^') ADVANCE(61);
      if (lookahead == 'd') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 'g') ADVANCE(98);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(39);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '&') ADVANCE(60);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '+') ADVANCE(63);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '<') ADVANCE(70);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == ']') ADVANCE(130);
      if (lookahead == '^') ADVANCE(61);
      if (lookahead == 'd') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'g') ADVANCE(19);
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(39);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '[') ADVANCE(129);
      if (lookahead == 'd') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 'g') ADVANCE(98);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '&') ADVANCE(60);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '+') ADVANCE(63);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '<') ADVANCE(70);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '^') ADVANCE(61);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '[') ADVANCE(129);
      if (lookahead == ']') ADVANCE(130);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(50);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '[') ADVANCE(129);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(8)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 36:
      if (lookahead == 'y') ADVANCE(27);
      END_STATE();
    case 37:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(5);
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_datasource);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_datasource);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_model);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_generator);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_generator);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(55);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(56);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(69);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(50);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_BANG_EQ_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '>') ADVANCE(57);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_column_type_token1);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_column_type_token1);
      if (lookahead == '?') ADVANCE(79);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(92);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead == 'y') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 80},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 80},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_generator] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_datasource] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_GT_GT_GT] = ACTIONS(1),
    [anon_sym_model] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
  },
  [1] = {
    [sym_generator_declaration] = STATE(8),
    [sym_type_declaration] = STATE(8),
    [sym_program] = STATE(7),
    [sym_enum_declaration] = STATE(8),
    [sym__declaration] = STATE(8),
    [sym_datasource_declaration] = STATE(8),
    [sym_model_declaration] = STATE(8),
    [aux_sym_program_repeat1] = STATE(8),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_model] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_datasource] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_generator] = ACTIONS(15),
  },
  [2] = {
    [sym_identifier] = STATE(10),
    [sym_comment] = ACTIONS(3),
    [aux_sym_identifier_token1] = ACTIONS(17),
  },
  [3] = {
    [sym_identifier] = STATE(11),
    [sym_comment] = ACTIONS(3),
    [aux_sym_identifier_token1] = ACTIONS(17),
  },
  [4] = {
    [sym_binary_expression] = STATE(15),
    [sym_attribute] = STATE(15),
    [sym_block_attribute_declaration] = STATE(15),
    [sym__expression] = STATE(15),
    [sym_identifier] = STATE(16),
    [sym_member_expression] = STATE(17),
    [aux_sym_type_declaration_repeat1] = STATE(18),
    [sym_array] = STATE(15),
    [sym_type_expression] = STATE(15),
    [sym_assignment_expression] = STATE(15),
    [sym_call_expression] = STATE(15),
    [sym__constructable_expression] = STATE(15),
    [sym_number] = ACTIONS(19),
    [sym_null] = ACTIONS(21),
    [anon_sym_AT_AT] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_true] = ACTIONS(21),
    [sym_string] = ACTIONS(19),
    [sym_false] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(27),
    [aux_sym_identifier_token1] = ACTIONS(29),
  },
  [5] = {
    [sym_identifier] = STATE(19),
    [sym_comment] = ACTIONS(3),
    [aux_sym_identifier_token1] = ACTIONS(17),
  },
  [6] = {
    [sym_identifier] = STATE(20),
    [sym_comment] = ACTIONS(3),
    [aux_sym_identifier_token1] = ACTIONS(17),
  },
  [7] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(31),
  },
  [8] = {
    [sym__declaration] = STATE(21),
    [sym_generator_declaration] = STATE(21),
    [sym_type_declaration] = STATE(21),
    [sym_datasource_declaration] = STATE(21),
    [sym_model_declaration] = STATE(21),
    [sym_enum_declaration] = STATE(21),
    [aux_sym_program_repeat1] = STATE(21),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_model] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_datasource] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_generator] = ACTIONS(15),
  },
  [9] = {
    [sym_null] = ACTIONS(35),
    [anon_sym_EQ] = ACTIONS(35),
    [anon_sym_generator] = ACTIONS(35),
    [anon_sym_enum] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_COLON] = ACTIONS(37),
    [anon_sym_AMP_AMP] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [sym_string] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_PIPE_PIPE] = ACTIONS(37),
    [anon_sym_GT_GT_GT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(35),
    [sym_number] = ACTIONS(37),
    [anon_sym_AT_AT] = ACTIONS(37),
    [anon_sym_GT_GT] = ACTIONS(35),
    [anon_sym_LT_LT] = ACTIONS(37),
    [anon_sym_EQ_EQ] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_PERCENT] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(37),
    [sym_true] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_datasource] = ACTIONS(35),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(37),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(37),
    [anon_sym_STAR_STAR] = ACTIONS(37),
    [sym_false] = ACTIONS(35),
    [aux_sym_identifier_token1] = ACTIONS(35),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_CARET] = ACTIONS(37),
    [anon_sym_model] = ACTIONS(35),
    [anon_sym_BANG_EQ] = ACTIONS(35),
    [anon_sym_GT_EQ] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(35),
  },
  [10] = {
    [sym_enum_block] = STATE(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(39),
  },
  [11] = {
    [sym_statement_block] = STATE(25),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(41),
  },
  [12] = {
    [sym_binary_expression] = STATE(26),
    [sym_attribute] = STATE(26),
    [sym_block_attribute_declaration] = STATE(26),
    [sym__expression] = STATE(26),
    [sym_identifier] = STATE(16),
    [sym_member_expression] = STATE(17),
    [sym_array] = STATE(26),
    [sym_type_expression] = STATE(26),
    [sym_assignment_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym__constructable_expression] = STATE(26),
    [sym_number] = ACTIONS(43),
    [sym_null] = ACTIONS(45),
    [anon_sym_AT_AT] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_true] = ACTIONS(45),
    [sym_string] = ACTIONS(43),
    [sym_false] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(27),
    [aux_sym_identifier_token1] = ACTIONS(29),
  },
  [13] = {
    [sym_binary_expression] = STATE(29),
    [sym_attribute] = STATE(29),
    [sym_block_attribute_declaration] = STATE(29),
    [sym__expression] = STATE(29),
    [sym_identifier] = STATE(85),
    [sym_member_expression] = STATE(86),
    [sym_array] = STATE(29),
    [sym_type_expression] = STATE(29),
    [sym_assignment_expression] = STATE(29),
    [sym_call_expression] = STATE(29),
    [aux_sym_arguments_repeat1] = STATE(30),
    [sym__constructable_expression] = STATE(29),
    [sym_number] = ACTIONS(47),
    [sym_null] = ACTIONS(49),
    [anon_sym_AT_AT] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [sym_comment] = ACTIONS(3),
    [sym_true] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(57),
    [sym_string] = ACTIONS(47),
    [sym_false] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(61),
  },
  [14] = {
    [sym_binary_expression] = STATE(31),
    [sym_attribute] = STATE(31),
    [sym_block_attribute_declaration] = STATE(31),
    [sym__expression] = STATE(31),
    [sym_identifier] = STATE(16),
    [sym_member_expression] = STATE(17),
    [sym_array] = STATE(31),
    [sym_type_expression] = STATE(31),
    [sym_assignment_expression] = STATE(31),
    [sym_call_expression] = STATE(31),
    [sym__constructable_expression] = STATE(31),
    [sym_number] = ACTIONS(63),
    [sym_null] = ACTIONS(65),
    [anon_sym_AT_AT] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_true] = ACTIONS(65),
    [sym_string] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(27),
    [aux_sym_identifier_token1] = ACTIONS(29),
  },
  [15] = {
    [sym_arguments] = STATE(39),
    [anon_sym_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [sym_null] = ACTIONS(71),
    [anon_sym_AT_AT] = ACTIONS(69),
    [anon_sym_GT_GT] = ACTIONS(67),
    [anon_sym_LT_LT] = ACTIONS(73),
    [anon_sym_generator] = ACTIONS(71),
    [anon_sym_enum] = ACTIONS(71),
    [anon_sym_EQ_EQ] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_PERCENT] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(69),
    [sym_true] = ACTIONS(71),
    [anon_sym_AMP_AMP] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_type] = ACTIONS(71),
    [anon_sym_datasource] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(83),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(83),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_STAR_STAR] = ACTIONS(87),
    [sym_string] = ACTIONS(69),
    [sym_false] = ACTIONS(71),
    [anon_sym_AT] = ACTIONS(71),
    [aux_sym_identifier_token1] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(89),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_PIPE_PIPE] = ACTIONS(91),
    [anon_sym_CARET] = ACTIONS(91),
    [anon_sym_GT_GT_GT] = ACTIONS(73),
    [anon_sym_model] = ACTIONS(71),
    [anon_sym_BANG_EQ] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(83),
    [anon_sym_GT_EQ] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(75),
  },
  [16] = {
    [anon_sym_SLASH] = ACTIONS(95),
    [sym_number] = ACTIONS(97),
    [sym_null] = ACTIONS(95),
    [anon_sym_AT_AT] = ACTIONS(97),
    [anon_sym_GT_GT] = ACTIONS(95),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_LT_LT] = ACTIONS(97),
    [anon_sym_generator] = ACTIONS(95),
    [anon_sym_enum] = ACTIONS(95),
    [anon_sym_EQ_EQ] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_STAR] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(95),
    [anon_sym_PERCENT] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(97),
    [sym_true] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(101),
    [anon_sym_AMP_AMP] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(95),
    [anon_sym_type] = ACTIONS(95),
    [anon_sym_datasource] = ACTIONS(95),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(97),
    [anon_sym_DOT] = ACTIONS(103),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(97),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_STAR_STAR] = ACTIONS(97),
    [sym_string] = ACTIONS(97),
    [sym_false] = ACTIONS(95),
    [anon_sym_AT] = ACTIONS(95),
    [aux_sym_identifier_token1] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(97),
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_PIPE_PIPE] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(97),
    [anon_sym_GT_GT_GT] = ACTIONS(97),
    [anon_sym_model] = ACTIONS(95),
    [anon_sym_BANG_EQ] = ACTIONS(95),
    [anon_sym_LT_EQ] = ACTIONS(97),
    [anon_sym_GT_EQ] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_LT] = ACTIONS(95),
  },
  [17] = {
    [anon_sym_SLASH] = ACTIONS(95),
    [sym_number] = ACTIONS(97),
    [sym_null] = ACTIONS(95),
    [anon_sym_AT_AT] = ACTIONS(97),
    [anon_sym_GT_GT] = ACTIONS(95),
    [anon_sym_LT_LT] = ACTIONS(97),
    [anon_sym_generator] = ACTIONS(95),
    [anon_sym_enum] = ACTIONS(95),
    [anon_sym_EQ_EQ] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_STAR] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(95),
    [anon_sym_PERCENT] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(97),
    [sym_true] = ACTIONS(95),
    [anon_sym_AMP_AMP] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(95),
    [anon_sym_type] = ACTIONS(95),
    [anon_sym_datasource] = ACTIONS(95),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(97),
    [anon_sym_DOT] = ACTIONS(103),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(97),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_STAR_STAR] = ACTIONS(97),
    [sym_string] = ACTIONS(97),
    [sym_false] = ACTIONS(95),
    [anon_sym_AT] = ACTIONS(95),
    [aux_sym_identifier_token1] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(97),
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_PIPE_PIPE] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(97),
    [anon_sym_GT_GT_GT] = ACTIONS(97),
    [anon_sym_model] = ACTIONS(95),
    [anon_sym_BANG_EQ] = ACTIONS(95),
    [anon_sym_LT_EQ] = ACTIONS(97),
    [anon_sym_GT_EQ] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_LT] = ACTIONS(95),
  },
  [18] = {
    [sym_binary_expression] = STATE(15),
    [sym_attribute] = STATE(15),
    [sym_block_attribute_declaration] = STATE(15),
    [sym__expression] = STATE(15),
    [sym_identifier] = STATE(16),
    [sym_member_expression] = STATE(17),
    [aux_sym_type_declaration_repeat1] = STATE(43),
    [sym_array] = STATE(15),
    [sym_type_expression] = STATE(15),
    [sym_assignment_expression] = STATE(15),
    [sym_call_expression] = STATE(15),
    [sym__constructable_expression] = STATE(15),
    [sym_number] = ACTIONS(19),
    [sym_null] = ACTIONS(21),
    [anon_sym_type] = ACTIONS(105),
    [anon_sym_datasource] = ACTIONS(105),
    [anon_sym_AT_AT] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(19),
    [sym_false] = ACTIONS(21),
    [anon_sym_generator] = ACTIONS(105),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_enum] = ACTIONS(105),
    [aux_sym_identifier_token1] = ACTIONS(29),
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_true] = ACTIONS(21),
    [anon_sym_model] = ACTIONS(105),
  },
  [19] = {
    [sym_statement_block] = STATE(44),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(41),
  },
  [20] = {
    [sym_statement_block] = STATE(45),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(41),
  },
  [21] = {
    [sym__declaration] = STATE(21),
    [sym_generator_declaration] = STATE(21),
    [sym_type_declaration] = STATE(21),
    [sym_datasource_declaration] = STATE(21),
    [sym_model_declaration] = STATE(21),
    [sym_enum_declaration] = STATE(21),
    [aux_sym_program_repeat1] = STATE(21),
    [anon_sym_enum] = ACTIONS(109),
    [anon_sym_model] = ACTIONS(112),
    [ts_builtin_sym_end] = ACTIONS(115),
    [anon_sym_type] = ACTIONS(117),
    [anon_sym_datasource] = ACTIONS(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_generator] = ACTIONS(123),
  },
  [22] = {
    [sym_enumeral] = STATE(48),
    [aux_sym_enum_block_repeat1] = STATE(48),
    [aux_sym_identifier_token1] = ACTIONS(126),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(128),
  },
  [23] = {
    [anon_sym_enum] = ACTIONS(130),
    [anon_sym_model] = ACTIONS(130),
    [ts_builtin_sym_end] = ACTIONS(130),
    [anon_sym_type] = ACTIONS(130),
    [anon_sym_datasource] = ACTIONS(130),
    [sym_comment] = ACTIONS(3),
    [anon_sym_generator] = ACTIONS(130),
  },
  [24] = {
    [sym_assignment_expression] = STATE(51),
    [sym_block_attribute_declaration] = STATE(51),
    [sym_column_declaration] = STATE(51),
    [sym_identifier] = STATE(50),
    [sym__statement] = STATE(51),
    [aux_sym_statement_block_repeat1] = STATE(51),
    [aux_sym_identifier_token1] = ACTIONS(132),
    [anon_sym_AT_AT] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(136),
  },
  [25] = {
    [anon_sym_enum] = ACTIONS(138),
    [anon_sym_model] = ACTIONS(138),
    [ts_builtin_sym_end] = ACTIONS(138),
    [anon_sym_type] = ACTIONS(138),
    [anon_sym_datasource] = ACTIONS(138),
    [sym_comment] = ACTIONS(3),
    [anon_sym_generator] = ACTIONS(138),
  },
  [26] = {
    [sym_arguments] = STATE(39),
    [anon_sym_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(140),
    [sym_null] = ACTIONS(142),
    [anon_sym_AT_AT] = ACTIONS(140),
    [anon_sym_GT_GT] = ACTIONS(67),
    [anon_sym_LT_LT] = ACTIONS(73),
    [anon_sym_generator] = ACTIONS(142),
    [anon_sym_enum] = ACTIONS(142),
    [anon_sym_EQ_EQ] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_PERCENT] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(140),
    [sym_true] = ACTIONS(142),
    [anon_sym_AMP_AMP] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_type] = ACTIONS(142),
    [anon_sym_datasource] = ACTIONS(142),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(83),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(83),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_STAR_STAR] = ACTIONS(87),
    [sym_string] = ACTIONS(140),
    [sym_false] = ACTIONS(142),
    [anon_sym_AT] = ACTIONS(142),
    [aux_sym_identifier_token1] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(89),
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_PIPE_PIPE] = ACTIONS(91),
    [anon_sym_CARET] = ACTIONS(91),
    [anon_sym_GT_GT_GT] = ACTIONS(73),
    [anon_sym_model] = ACTIONS(142),
    [anon_sym_BANG_EQ] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(83),
    [anon_sym_GT_EQ] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(75),
  },
  [27] = {
    [sym_member_expression] = STATE(86),
    [sym_array] = STATE(52),
    [sym__constructable_expression] = STATE(52),
    [sym_binary_expression] = STATE(52),
    [sym_attribute] = STATE(52),
    [sym_block_attribute_declaration] = STATE(52),
    [sym__expression] = STATE(52),
    [sym_identifier] = STATE(85),
    [sym_assignment_expression] = STATE(52),
    [sym_type_expression] = STATE(52),
    [sym_call_expression] = STATE(52),
    [sym_number] = ACTIONS(144),
    [sym_null] = ACTIONS(146),
    [anon_sym_AT_AT] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(148),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(148),
    [sym_string] = ACTIONS(144),
    [sym_false] = ACTIONS(146),
    [anon_sym_AT] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(55),
    [sym_true] = ACTIONS(146),
    [anon_sym_RPAREN] = ACTIONS(148),
  },
  [28] = {
    [anon_sym_SLASH] = ACTIONS(150),
    [sym_number] = ACTIONS(152),
    [sym_null] = ACTIONS(150),
    [anon_sym_AT_AT] = ACTIONS(152),
    [anon_sym_GT_GT] = ACTIONS(150),
    [anon_sym_LT_LT] = ACTIONS(152),
    [anon_sym_generator] = ACTIONS(150),
    [anon_sym_enum] = ACTIONS(150),
    [anon_sym_EQ_EQ] = ACTIONS(150),
    [anon_sym_GT] = ACTIONS(150),
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_PIPE] = ACTIONS(150),
    [anon_sym_PERCENT] = ACTIONS(152),
    [anon_sym_LBRACK] = ACTIONS(152),
    [sym_true] = ACTIONS(150),
    [anon_sym_AMP_AMP] = ACTIONS(152),
    [anon_sym_AMP] = ACTIONS(150),
    [anon_sym_type] = ACTIONS(150),
    [anon_sym_datasource] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(152),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(152),
    [anon_sym_PLUS] = ACTIONS(152),
    [anon_sym_STAR_STAR] = ACTIONS(152),
    [sym_string] = ACTIONS(152),
    [sym_false] = ACTIONS(150),
    [anon_sym_AT] = ACTIONS(150),
    [aux_sym_identifier_token1] = ACTIONS(150),
    [anon_sym_LPAREN] = ACTIONS(152),
    [ts_builtin_sym_end] = ACTIONS(152),
    [anon_sym_PIPE_PIPE] = ACTIONS(152),
    [anon_sym_CARET] = ACTIONS(152),
    [anon_sym_GT_GT_GT] = ACTIONS(152),
    [anon_sym_model] = ACTIONS(150),
    [anon_sym_BANG_EQ] = ACTIONS(150),
    [anon_sym_LT_EQ] = ACTIONS(152),
    [anon_sym_GT_EQ] = ACTIONS(152),
    [anon_sym_DASH] = ACTIONS(150),
    [anon_sym_LT] = ACTIONS(150),
  },
  [29] = {
    [aux_sym_arguments_repeat1] = STATE(54),
    [sym_arguments] = STATE(96),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_AMP_AMP] = ACTIONS(156),
    [anon_sym_AMP] = ACTIONS(158),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(160),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(160),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_STAR_STAR] = ACTIONS(164),
    [anon_sym_GT_GT] = ACTIONS(154),
    [anon_sym_RBRACK] = ACTIONS(166),
    [anon_sym_LT_LT] = ACTIONS(168),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(168),
    [anon_sym_PIPE_PIPE] = ACTIONS(176),
    [anon_sym_CARET] = ACTIONS(176),
    [anon_sym_GT_GT_GT] = ACTIONS(168),
    [anon_sym_BANG_EQ] = ACTIONS(172),
    [anon_sym_LT_EQ] = ACTIONS(160),
    [anon_sym_GT_EQ] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym_LT] = ACTIONS(172),
  },
  [30] = {
    [aux_sym_arguments_repeat1] = STATE(55),
    [anon_sym_COMMA] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(166),
  },
  [31] = {
    [sym_arguments] = STATE(39),
    [anon_sym_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(178),
    [sym_null] = ACTIONS(180),
    [anon_sym_AT_AT] = ACTIONS(178),
    [anon_sym_GT_GT] = ACTIONS(67),
    [anon_sym_LT_LT] = ACTIONS(73),
    [anon_sym_generator] = ACTIONS(180),
    [anon_sym_enum] = ACTIONS(180),
    [anon_sym_EQ_EQ] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_PERCENT] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(178),
    [sym_true] = ACTIONS(180),
    [anon_sym_AMP_AMP] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_type] = ACTIONS(180),
    [anon_sym_datasource] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(83),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(83),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_STAR_STAR] = ACTIONS(87),
    [sym_string] = ACTIONS(178),
    [sym_false] = ACTIONS(180),
    [anon_sym_AT] = ACTIONS(180),
    [aux_sym_identifier_token1] = ACTIONS(180),
    [anon_sym_LPAREN] = ACTIONS(89),
    [ts_builtin_sym_end] = ACTIONS(178),
    [anon_sym_PIPE_PIPE] = ACTIONS(91),
    [anon_sym_CARET] = ACTIONS(91),
    [anon_sym_GT_GT_GT] = ACTIONS(73),
    [anon_sym_model] = ACTIONS(180),
    [anon_sym_BANG_EQ] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(83),
    [anon_sym_GT_EQ] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(75),
  },
  [32] = {
    [sym_binary_expression] = STATE(56),
    [sym_attribute] = STATE(56),
    [sym_block_attribute_declaration] = STATE(56),
    [sym__expression] = STATE(56),
    [sym_identifier] = STATE(16),
    [sym_member_expression] = STATE(17),
    [sym_array] = STATE(56),
    [sym_type_expression] = STATE(56),
    [sym_assignment_expression] = STATE(56),
    [sym_call_expression] = STATE(56),
    [sym__constructable_expression] = STATE(56),
    [sym_number] = ACTIONS(182),
    [sym_null] = ACTIONS(184),
    [anon_sym_AT_AT] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_true] = ACTIONS(184),
    [sym_string] = ACTIONS(182),
    [sym_false] = ACTIONS(184),
    [anon_sym_AT] = ACTIONS(27),
    [aux_sym_identifier_token1] = ACTIONS(29),
  },
  [33] = {
    [sym_binary_expression] = STATE(57),
    [sym_attribute] = STATE(57),
    [sym_block_attribute_declaration] = STATE(57),
    [sym__expression] = STATE(57),
    [sym_identifier] = STATE(16),
    [sym_member_expression] = STATE(17),
    [sym_array] = STATE(57),
    [sym_type_expression] = STATE(57),
    [sym_assignment_expression] = STATE(57),
    [sym_call_expression] = STATE(57),
    [sym__constructable_expression] = STATE(57),
    [sym_number] = ACTIONS(186),
    [sym_null] = ACTIONS(188),
    [anon_sym_AT_AT] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_true] = ACTIONS(188),
    [sym_string] = ACTIONS(186),
    [sym_false] = ACTIONS(188),
    [anon_sym_AT] = ACTIONS(27),
    [aux_sym_identifier_token1] = ACTIONS(29),
  },
  [34] = {
    [sym_binary_expression] = STATE(58),
    [sym_attribute] = STATE(58),
    [sym_block_attribute_declaration] = STATE(58),
    [sym__expression] = STATE(58),
    [sym_identifier] = STATE(16),
    [sym_member_expression] = STATE(17),
    [sym_array] = STATE(58),
    [sym_type_expression] = STATE(58),
    [sym_assignment_expression] = STATE(58),
    [sym_call_expression] = STATE(58),
    [sym__constructable_expression] = STATE(58),
    [sym_number] = ACTIONS(190),
    [sym_null] = ACTIONS(192),
    [anon_sym_AT_AT] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_true] = ACTIONS(192),
    [sym_string] = ACTIONS(190),
    [sym_false] = ACTIONS(192),
    [anon_sym_AT] = ACTIONS(27),
    [aux_sym_identifier_token1] = ACTIONS(29),
  },
  [35] = {
    [sym_binary_expression] = STATE(59),
    [sym_attribute] = STATE(59),
    [sym_block_attribute_declaration] = STATE(59),
    [sym__expression] = STATE(59),
    [sym_identifier] = STATE(16),
    [sym_member_expression] = STATE(17),
    [sym_array] = STATE(59),
    [sym_type_expression] = STATE(59),
    [sym_assignment_expression] = STATE(59),
    [sym_call_expression] = STATE(59),
    [sym__constructable_expression] = STATE(59),
    [sym_number] = ACTIONS(194),
    [sym_null] = ACTIONS(196),
    [anon_sym_AT_AT] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_true] = ACTIONS(196),
    [sym_string] = ACTIONS(194),
    [sym_false] = ACTIONS(196),
    [anon_sym_AT] = ACTIONS(27),
    [aux_sym_identifier_token1] = ACTIONS(29),
  },
  [36] = {
    [sym_binary_expression] = STATE(60),
    [sym_attribute] = STATE(60),
    [sym_block_attribute_declaration] = STATE(60),
    [sym__expression] = STATE(60),
    [sym_identifier] = STATE(16),
    [sym_member_expression] = STATE(17),
    [sym_array] = STATE(60),
    [sym_type_expression] = STATE(60),
    [sym_assignment_expression] = STATE(60),
    [sym_call_expression] = STATE(60),
    [sym__constructable_expression] = STATE(60),
    [sym_number] = ACTIONS(198),
    [sym_null] = ACTIONS(200),
    [anon_sym_AT_AT] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_true] = ACTIONS(200),
    [sym_string] = ACTIONS(198),
    [sym_false] = ACTIONS(200),
    [anon_sym_AT] = ACTIONS(27),
    [aux_sym_identifier_token1] = ACTIONS(29),
  },
  [37] = {
    [sym_binary_expression] = STATE(62),
    [sym_attribute] = STATE(62),
    [sym_block_attribute_declaration] = STATE(62),
    [sym__expression] = STATE(62),
    [sym_identifier] = STATE(85),
    [sym_member_expression] = STATE(86),
    [sym_array] = STATE(62),
    [sym_type_expression] = STATE(62),
    [sym_assignment_expression] = STATE(62),
    [sym_call_expression] = STATE(62),
    [aux_sym_arguments_repeat1] = STATE(63),
    [sym__constructable_expression] = STATE(62),
    [sym_number] = ACTIONS(202),
    [sym_null] = ACTIONS(204),
    [anon_sym_AT_AT] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [sym_comment] = ACTIONS(3),
    [sym_true] = ACTIONS(204),
    [anon_sym_RPAREN] = ACTIONS(206),
    [sym_string] = ACTIONS(202),
    [sym_false] = ACTIONS(204),
    [anon_sym_AT] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(61),
  },
  [38] = {
    [sym_binary_expression] = STATE(64),
    [sym_attribute] = STATE(64),
    [sym_block_attribute_declaration] = STATE(64),
    [sym__expression] = STATE(64),
    [sym_identifier] = STATE(16),
    [sym_member_expression] = STATE(17),
    [sym_array] = STATE(64),
    [sym_type_expression] = STATE(64),
    [sym_assignment_expression] = STATE(64),
    [sym_call_expression] = STATE(64),
    [sym__constructable_expression] = STATE(64),
    [sym_number] = ACTIONS(208),
    [sym_null] = ACTIONS(210),
    [anon_sym_AT_AT] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_true] = ACTIONS(210),
    [sym_string] = ACTIONS(208),
    [sym_false] = ACTIONS(210),
    [anon_sym_AT] = ACTIONS(27),
    [aux_sym_identifier_token1] = ACTIONS(29),
  },
  [39] = {
    [anon_sym_SLASH] = ACTIONS(212),
    [sym_number] = ACTIONS(214),
    [sym_null] = ACTIONS(212),
    [anon_sym_AT_AT] = ACTIONS(214),
    [anon_sym_GT_GT] = ACTIONS(212),
    [anon_sym_LT_LT] = ACTIONS(214),
    [anon_sym_generator] = ACTIONS(212),
    [anon_sym_enum] = ACTIONS(212),
    [anon_sym_EQ_EQ] = ACTIONS(212),
    [anon_sym_GT] = ACTIONS(212),
    [anon_sym_STAR] = ACTIONS(212),
    [anon_sym_PIPE] = ACTIONS(212),
    [anon_sym_PERCENT] = ACTIONS(214),
    [anon_sym_LBRACK] = ACTIONS(214),
    [sym_true] = ACTIONS(212),
    [anon_sym_AMP_AMP] = ACTIONS(214),
    [anon_sym_AMP] = ACTIONS(212),
    [anon_sym_type] = ACTIONS(212),
    [anon_sym_datasource] = ACTIONS(212),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(214),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(214),
    [anon_sym_STAR_STAR] = ACTIONS(214),
    [sym_string] = ACTIONS(214),
    [sym_false] = ACTIONS(212),
    [anon_sym_AT] = ACTIONS(212),
    [aux_sym_identifier_token1] = ACTIONS(212),
    [anon_sym_LPAREN] = ACTIONS(214),
    [ts_builtin_sym_end] = ACTIONS(214),
    [anon_sym_PIPE_PIPE] = ACTIONS(214),
    [anon_sym_CARET] = ACTIONS(214),
    [anon_sym_GT_GT_GT] = ACTIONS(214),
    [anon_sym_model] = ACTIONS(212),
    [anon_sym_BANG_EQ] = ACTIONS(212),
    [anon_sym_LT_EQ] = ACTIONS(214),
    [anon_sym_GT_EQ] = ACTIONS(214),
    [anon_sym_DASH] = ACTIONS(212),
    [anon_sym_LT] = ACTIONS(212),
  },
  [40] = {
    [sym_binary_expression] = STATE(65),
    [sym_attribute] = STATE(65),
    [sym_block_attribute_declaration] = STATE(65),
    [sym__expression] = STATE(65),
    [sym_identifier] = STATE(16),
    [sym_member_expression] = STATE(17),
    [sym_array] = STATE(65),
    [sym_type_expression] = STATE(65),
    [sym_assignment_expression] = STATE(65),
    [sym_call_expression] = STATE(65),
    [sym__constructable_expression] = STATE(65),
    [sym_number] = ACTIONS(216),
    [sym_null] = ACTIONS(218),
    [anon_sym_AT_AT] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_true] = ACTIONS(218),
    [sym_string] = ACTIONS(216),
    [sym_false] = ACTIONS(218),
    [anon_sym_AT] = ACTIONS(27),
    [aux_sym_identifier_token1] = ACTIONS(29),
  },
  [41] = {
    [sym_binary_expression] = STATE(66),
    [sym_attribute] = STATE(66),
    [sym_block_attribute_declaration] = STATE(66),
    [sym__expression] = STATE(66),
    [sym_identifier] = STATE(16),
    [sym_member_expression] = STATE(17),
    [sym_array] = STATE(66),
    [sym_type_expression] = STATE(66),
    [sym_assignment_expression] = STATE(66),
    [sym_call_expression] = STATE(66),
    [sym__constructable_expression] = STATE(66),
    [sym_number] = ACTIONS(220),
    [sym_null] = ACTIONS(222),
    [anon_sym_AT_AT] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_true] = ACTIONS(222),
    [sym_string] = ACTIONS(220),
    [sym_false] = ACTIONS(222),
    [anon_sym_AT] = ACTIONS(27),
    [aux_sym_identifier_token1] = ACTIONS(29),
  },
  [42] = {
    [sym_identifier] = STATE(67),
    [sym_comment] = ACTIONS(3),
    [aux_sym_identifier_token1] = ACTIONS(17),
  },
  [43] = {
    [sym_binary_expression] = STATE(15),
    [sym_attribute] = STATE(15),
    [sym_block_attribute_declaration] = STATE(15),
    [sym__expression] = STATE(15),
    [sym_identifier] = STATE(16),
    [sym_member_expression] = STATE(17),
    [aux_sym_type_declaration_repeat1] = STATE(43),
    [sym_array] = STATE(15),
    [sym_type_expression] = STATE(15),
    [sym_assignment_expression] = STATE(15),
    [sym_call_expression] = STATE(15),
    [sym__constructable_expression] = STATE(15),
    [sym_number] = ACTIONS(224),
    [sym_null] = ACTIONS(227),
    [anon_sym_type] = ACTIONS(230),
    [anon_sym_datasource] = ACTIONS(230),
    [anon_sym_AT_AT] = ACTIONS(232),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(224),
    [sym_false] = ACTIONS(227),
    [anon_sym_generator] = ACTIONS(230),
    [aux_sym_identifier_token1] = ACTIONS(235),
    [anon_sym_enum] = ACTIONS(230),
    [anon_sym_AT] = ACTIONS(238),
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_LBRACK] = ACTIONS(243),
    [sym_true] = ACTIONS(227),
    [anon_sym_model] = ACTIONS(230),
  },
  [44] = {
    [anon_sym_enum] = ACTIONS(246),
    [anon_sym_model] = ACTIONS(246),
    [ts_builtin_sym_end] = ACTIONS(246),
    [anon_sym_type] = ACTIONS(246),
    [anon_sym_datasource] = ACTIONS(246),
    [sym_comment] = ACTIONS(3),
    [anon_sym_generator] = ACTIONS(246),
  },
  [45] = {
    [anon_sym_enum] = ACTIONS(248),
    [anon_sym_model] = ACTIONS(248),
    [ts_builtin_sym_end] = ACTIONS(248),
    [anon_sym_type] = ACTIONS(248),
    [anon_sym_datasource] = ACTIONS(248),
    [sym_comment] = ACTIONS(3),
    [anon_sym_generator] = ACTIONS(248),
  },
  [46] = {
    [anon_sym_enum] = ACTIONS(250),
    [anon_sym_model] = ACTIONS(250),
    [ts_builtin_sym_end] = ACTIONS(250),
    [anon_sym_type] = ACTIONS(250),
    [anon_sym_datasource] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
    [anon_sym_generator] = ACTIONS(250),
  },
  [47] = {
    [aux_sym_identifier_token1] = ACTIONS(252),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(252),
  },
  [48] = {
    [sym_enumeral] = STATE(69),
    [aux_sym_enum_block_repeat1] = STATE(69),
    [aux_sym_identifier_token1] = ACTIONS(126),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(254),
  },
  [49] = {
    [anon_sym_enum] = ACTIONS(256),
    [anon_sym_model] = ACTIONS(256),
    [ts_builtin_sym_end] = ACTIONS(256),
    [anon_sym_type] = ACTIONS(256),
    [anon_sym_datasource] = ACTIONS(256),
    [sym_comment] = ACTIONS(3),
    [anon_sym_generator] = ACTIONS(256),
  },
  [50] = {
    [sym_identifier] = STATE(70),
    [sym_column_type] = STATE(71),
    [anon_sym_EQ] = ACTIONS(258),
    [sym_comment] = ACTIONS(3),
    [aux_sym_identifier_token1] = ACTIONS(260),
  },
  [51] = {
    [sym_assignment_expression] = STATE(73),
    [sym_block_attribute_declaration] = STATE(73),
    [sym_column_declaration] = STATE(73),
    [sym_identifier] = STATE(50),
    [sym__statement] = STATE(73),
    [aux_sym_statement_block_repeat1] = STATE(73),
    [aux_sym_identifier_token1] = ACTIONS(132),
    [anon_sym_AT_AT] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(262),
  },
  [52] = {
    [sym_arguments] = STATE(96),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(264),
    [anon_sym_GT_GT] = ACTIONS(154),
    [anon_sym_LT_LT] = ACTIONS(168),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(264),
    [anon_sym_AMP_AMP] = ACTIONS(156),
    [anon_sym_AMP] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(160),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(160),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_STAR_STAR] = ACTIONS(164),
    [anon_sym_RBRACK] = ACTIONS(264),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_PIPE_PIPE] = ACTIONS(176),
    [anon_sym_CARET] = ACTIONS(176),
    [anon_sym_GT_GT_GT] = ACTIONS(168),
    [anon_sym_BANG_EQ] = ACTIONS(172),
    [anon_sym_LT_EQ] = ACTIONS(160),
    [anon_sym_GT_EQ] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym_LT] = ACTIONS(172),
  },
  [53] = {
    [anon_sym_SLASH] = ACTIONS(266),
    [sym_number] = ACTIONS(268),
    [sym_null] = ACTIONS(266),
    [anon_sym_AT_AT] = ACTIONS(268),
    [anon_sym_GT_GT] = ACTIONS(266),
    [anon_sym_LT_LT] = ACTIONS(268),
    [anon_sym_generator] = ACTIONS(266),
    [anon_sym_enum] = ACTIONS(266),
    [anon_sym_EQ_EQ] = ACTIONS(266),
    [anon_sym_GT] = ACTIONS(266),
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_PIPE] = ACTIONS(266),
    [anon_sym_PERCENT] = ACTIONS(268),
    [anon_sym_LBRACK] = ACTIONS(268),
    [sym_true] = ACTIONS(266),
    [anon_sym_AMP_AMP] = ACTIONS(268),
    [anon_sym_AMP] = ACTIONS(266),
    [anon_sym_type] = ACTIONS(266),
    [anon_sym_datasource] = ACTIONS(266),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(268),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(268),
    [anon_sym_PLUS] = ACTIONS(268),
    [anon_sym_STAR_STAR] = ACTIONS(268),
    [sym_string] = ACTIONS(268),
    [sym_false] = ACTIONS(266),
    [anon_sym_AT] = ACTIONS(266),
    [aux_sym_identifier_token1] = ACTIONS(266),
    [anon_sym_LPAREN] = ACTIONS(268),
    [ts_builtin_sym_end] = ACTIONS(268),
    [anon_sym_PIPE_PIPE] = ACTIONS(268),
    [anon_sym_CARET] = ACTIONS(268),
    [anon_sym_GT_GT_GT] = ACTIONS(268),
    [anon_sym_model] = ACTIONS(266),
    [anon_sym_BANG_EQ] = ACTIONS(266),
    [anon_sym_LT_EQ] = ACTIONS(268),
    [anon_sym_GT_EQ] = ACTIONS(268),
    [anon_sym_DASH] = ACTIONS(266),
    [anon_sym_LT] = ACTIONS(266),
  },
  [54] = {
    [aux_sym_arguments_repeat1] = STATE(55),
    [anon_sym_COMMA] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(270),
  },
  [55] = {
    [aux_sym_arguments_repeat1] = STATE(55),
    [anon_sym_RPAREN] = ACTIONS(264),
    [anon_sym_RBRACK] = ACTIONS(264),
    [anon_sym_COMMA] = ACTIONS(272),
    [sym_comment] = ACTIONS(3),
  },
  [56] = {
    [sym_arguments] = STATE(39),
    [anon_sym_SLASH] = ACTIONS(275),
    [sym_number] = ACTIONS(277),
    [sym_null] = ACTIONS(275),
    [anon_sym_AT_AT] = ACTIONS(277),
    [anon_sym_GT_GT] = ACTIONS(275),
    [anon_sym_LT_LT] = ACTIONS(277),
    [anon_sym_generator] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(275),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [anon_sym_GT] = ACTIONS(275),
    [anon_sym_STAR] = ACTIONS(275),
    [anon_sym_PIPE] = ACTIONS(275),
    [anon_sym_PERCENT] = ACTIONS(277),
    [anon_sym_LBRACK] = ACTIONS(277),
    [sym_true] = ACTIONS(275),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_AMP] = ACTIONS(275),
    [anon_sym_type] = ACTIONS(275),
    [anon_sym_datasource] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(277),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_STAR_STAR] = ACTIONS(87),
    [sym_string] = ACTIONS(277),
    [sym_false] = ACTIONS(275),
    [anon_sym_AT] = ACTIONS(275),
    [aux_sym_identifier_token1] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(89),
    [ts_builtin_sym_end] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym_GT_GT_GT] = ACTIONS(277),
    [anon_sym_model] = ACTIONS(275),
    [anon_sym_BANG_EQ] = ACTIONS(275),
    [anon_sym_LT_EQ] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(275),
    [anon_sym_LT] = ACTIONS(275),
  },
  [57] = {
    [sym_arguments] = STATE(39),
    [anon_sym_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(277),
    [sym_null] = ACTIONS(275),
    [anon_sym_AT_AT] = ACTIONS(277),
    [anon_sym_GT_GT] = ACTIONS(67),
    [anon_sym_LT_LT] = ACTIONS(73),
    [anon_sym_generator] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(275),
    [anon_sym_EQ_EQ] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(275),
    [anon_sym_PERCENT] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(277),
    [sym_true] = ACTIONS(275),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_AMP] = ACTIONS(275),
    [anon_sym_type] = ACTIONS(275),
    [anon_sym_datasource] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(83),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(83),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_STAR_STAR] = ACTIONS(87),
    [sym_string] = ACTIONS(277),
    [sym_false] = ACTIONS(275),
    [anon_sym_AT] = ACTIONS(275),
    [aux_sym_identifier_token1] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(89),
    [ts_builtin_sym_end] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym_GT_GT_GT] = ACTIONS(73),
    [anon_sym_model] = ACTIONS(275),
    [anon_sym_BANG_EQ] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(83),
    [anon_sym_GT_EQ] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(75),
  },
  [58] = {
    [sym_arguments] = STATE(39),
    [anon_sym_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(277),
    [sym_null] = ACTIONS(275),
    [anon_sym_AT_AT] = ACTIONS(277),
    [anon_sym_GT_GT] = ACTIONS(67),
    [anon_sym_LT_LT] = ACTIONS(73),
    [anon_sym_generator] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(275),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [anon_sym_GT] = ACTIONS(275),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(275),
    [anon_sym_PERCENT] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(277),
    [sym_true] = ACTIONS(275),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_AMP] = ACTIONS(275),
    [anon_sym_type] = ACTIONS(275),
    [anon_sym_datasource] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(277),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_STAR_STAR] = ACTIONS(87),
    [sym_string] = ACTIONS(277),
    [sym_false] = ACTIONS(275),
    [anon_sym_AT] = ACTIONS(275),
    [aux_sym_identifier_token1] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(89),
    [ts_builtin_sym_end] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym_GT_GT_GT] = ACTIONS(73),
    [anon_sym_model] = ACTIONS(275),
    [anon_sym_BANG_EQ] = ACTIONS(275),
    [anon_sym_LT_EQ] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(275),
  },
  [59] = {
    [sym_arguments] = STATE(39),
    [anon_sym_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(277),
    [sym_null] = ACTIONS(275),
    [anon_sym_AT_AT] = ACTIONS(277),
    [anon_sym_GT_GT] = ACTIONS(67),
    [anon_sym_LT_LT] = ACTIONS(73),
    [anon_sym_generator] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(275),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [anon_sym_GT] = ACTIONS(275),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(275),
    [anon_sym_PERCENT] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(277),
    [sym_true] = ACTIONS(275),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_AMP] = ACTIONS(275),
    [anon_sym_type] = ACTIONS(275),
    [anon_sym_datasource] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(277),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_STAR_STAR] = ACTIONS(87),
    [sym_string] = ACTIONS(277),
    [sym_false] = ACTIONS(275),
    [anon_sym_AT] = ACTIONS(275),
    [aux_sym_identifier_token1] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(89),
    [ts_builtin_sym_end] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym_GT_GT_GT] = ACTIONS(73),
    [anon_sym_model] = ACTIONS(275),
    [anon_sym_BANG_EQ] = ACTIONS(275),
    [anon_sym_LT_EQ] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(275),
    [anon_sym_LT] = ACTIONS(275),
  },
  [60] = {
    [sym_arguments] = STATE(39),
    [anon_sym_SLASH] = ACTIONS(275),
    [sym_number] = ACTIONS(277),
    [sym_null] = ACTIONS(275),
    [anon_sym_AT_AT] = ACTIONS(277),
    [anon_sym_GT_GT] = ACTIONS(275),
    [anon_sym_LT_LT] = ACTIONS(277),
    [anon_sym_generator] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(275),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [anon_sym_GT] = ACTIONS(275),
    [anon_sym_STAR] = ACTIONS(275),
    [anon_sym_PIPE] = ACTIONS(275),
    [anon_sym_PERCENT] = ACTIONS(277),
    [anon_sym_LBRACK] = ACTIONS(277),
    [sym_true] = ACTIONS(275),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_AMP] = ACTIONS(275),
    [anon_sym_type] = ACTIONS(275),
    [anon_sym_datasource] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(277),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_STAR_STAR] = ACTIONS(277),
    [sym_string] = ACTIONS(277),
    [sym_false] = ACTIONS(275),
    [anon_sym_AT] = ACTIONS(275),
    [aux_sym_identifier_token1] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(89),
    [ts_builtin_sym_end] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym_GT_GT_GT] = ACTIONS(277),
    [anon_sym_model] = ACTIONS(275),
    [anon_sym_BANG_EQ] = ACTIONS(275),
    [anon_sym_LT_EQ] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(275),
    [anon_sym_LT] = ACTIONS(275),
  },
  [61] = {
    [anon_sym_SLASH] = ACTIONS(279),
    [sym_number] = ACTIONS(281),
    [sym_null] = ACTIONS(279),
    [anon_sym_AT_AT] = ACTIONS(281),
    [anon_sym_GT_GT] = ACTIONS(279),
    [anon_sym_LT_LT] = ACTIONS(281),
    [anon_sym_generator] = ACTIONS(279),
    [anon_sym_enum] = ACTIONS(279),
    [anon_sym_EQ_EQ] = ACTIONS(279),
    [anon_sym_GT] = ACTIONS(279),
    [anon_sym_STAR] = ACTIONS(279),
    [anon_sym_PIPE] = ACTIONS(279),
    [anon_sym_PERCENT] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(281),
    [sym_true] = ACTIONS(279),
    [anon_sym_AMP_AMP] = ACTIONS(281),
    [anon_sym_AMP] = ACTIONS(279),
    [anon_sym_type] = ACTIONS(279),
    [anon_sym_datasource] = ACTIONS(279),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(281),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(281),
    [anon_sym_STAR_STAR] = ACTIONS(281),
    [sym_string] = ACTIONS(281),
    [sym_false] = ACTIONS(279),
    [anon_sym_AT] = ACTIONS(279),
    [aux_sym_identifier_token1] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(281),
    [ts_builtin_sym_end] = ACTIONS(281),
    [anon_sym_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_CARET] = ACTIONS(281),
    [anon_sym_GT_GT_GT] = ACTIONS(281),
    [anon_sym_model] = ACTIONS(279),
    [anon_sym_BANG_EQ] = ACTIONS(279),
    [anon_sym_LT_EQ] = ACTIONS(281),
    [anon_sym_GT_EQ] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(279),
    [anon_sym_LT] = ACTIONS(279),
  },
  [62] = {
    [aux_sym_arguments_repeat1] = STATE(76),
    [sym_arguments] = STATE(96),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_AMP_AMP] = ACTIONS(156),
    [anon_sym_AMP] = ACTIONS(158),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(160),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(160),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_STAR_STAR] = ACTIONS(164),
    [anon_sym_GT_GT] = ACTIONS(154),
    [anon_sym_LT_LT] = ACTIONS(168),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(168),
    [anon_sym_PIPE_PIPE] = ACTIONS(176),
    [anon_sym_CARET] = ACTIONS(176),
    [anon_sym_GT_GT_GT] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(283),
    [anon_sym_BANG_EQ] = ACTIONS(172),
    [anon_sym_LT_EQ] = ACTIONS(160),
    [anon_sym_GT_EQ] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym_LT] = ACTIONS(172),
  },
  [63] = {
    [aux_sym_arguments_repeat1] = STATE(55),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(283),
    [sym_comment] = ACTIONS(3),
  },
  [64] = {
    [sym_arguments] = STATE(39),
    [anon_sym_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(277),
    [sym_null] = ACTIONS(275),
    [anon_sym_AT_AT] = ACTIONS(277),
    [anon_sym_GT_GT] = ACTIONS(67),
    [anon_sym_LT_LT] = ACTIONS(73),
    [anon_sym_generator] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(275),
    [anon_sym_EQ_EQ] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(275),
    [anon_sym_PERCENT] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(277),
    [sym_true] = ACTIONS(275),
    [anon_sym_AMP_AMP] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_type] = ACTIONS(275),
    [anon_sym_datasource] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(83),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(83),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_STAR_STAR] = ACTIONS(87),
    [sym_string] = ACTIONS(277),
    [sym_false] = ACTIONS(275),
    [anon_sym_AT] = ACTIONS(275),
    [aux_sym_identifier_token1] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(89),
    [ts_builtin_sym_end] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym_GT_GT_GT] = ACTIONS(73),
    [anon_sym_model] = ACTIONS(275),
    [anon_sym_BANG_EQ] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(83),
    [anon_sym_GT_EQ] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(75),
  },
  [65] = {
    [sym_arguments] = STATE(39),
    [anon_sym_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(285),
    [sym_null] = ACTIONS(287),
    [anon_sym_AT_AT] = ACTIONS(285),
    [anon_sym_GT_GT] = ACTIONS(67),
    [anon_sym_LT_LT] = ACTIONS(73),
    [anon_sym_generator] = ACTIONS(287),
    [anon_sym_enum] = ACTIONS(287),
    [anon_sym_EQ_EQ] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_PERCENT] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(285),
    [sym_true] = ACTIONS(287),
    [anon_sym_AMP_AMP] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_type] = ACTIONS(287),
    [anon_sym_datasource] = ACTIONS(287),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(83),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(83),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_STAR_STAR] = ACTIONS(87),
    [sym_string] = ACTIONS(285),
    [sym_false] = ACTIONS(287),
    [anon_sym_AT] = ACTIONS(287),
    [aux_sym_identifier_token1] = ACTIONS(287),
    [anon_sym_LPAREN] = ACTIONS(89),
    [ts_builtin_sym_end] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(91),
    [anon_sym_CARET] = ACTIONS(91),
    [anon_sym_GT_GT_GT] = ACTIONS(73),
    [anon_sym_model] = ACTIONS(287),
    [anon_sym_BANG_EQ] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(83),
    [anon_sym_GT_EQ] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(75),
  },
  [66] = {
    [sym_arguments] = STATE(39),
    [anon_sym_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(289),
    [sym_null] = ACTIONS(291),
    [anon_sym_AT_AT] = ACTIONS(289),
    [anon_sym_GT_GT] = ACTIONS(67),
    [anon_sym_LT_LT] = ACTIONS(73),
    [anon_sym_generator] = ACTIONS(291),
    [anon_sym_enum] = ACTIONS(291),
    [anon_sym_EQ_EQ] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_PERCENT] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(289),
    [sym_true] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_type] = ACTIONS(291),
    [anon_sym_datasource] = ACTIONS(291),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(83),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(83),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_STAR_STAR] = ACTIONS(87),
    [sym_string] = ACTIONS(289),
    [sym_false] = ACTIONS(291),
    [anon_sym_AT] = ACTIONS(291),
    [aux_sym_identifier_token1] = ACTIONS(291),
    [anon_sym_LPAREN] = ACTIONS(89),
    [ts_builtin_sym_end] = ACTIONS(289),
    [anon_sym_PIPE_PIPE] = ACTIONS(91),
    [anon_sym_CARET] = ACTIONS(91),
    [anon_sym_GT_GT_GT] = ACTIONS(73),
    [anon_sym_model] = ACTIONS(291),
    [anon_sym_BANG_EQ] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(83),
    [anon_sym_GT_EQ] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(75),
  },
  [67] = {
    [anon_sym_SLASH] = ACTIONS(293),
    [sym_number] = ACTIONS(295),
    [sym_null] = ACTIONS(293),
    [anon_sym_AT_AT] = ACTIONS(295),
    [anon_sym_GT_GT] = ACTIONS(293),
    [anon_sym_LT_LT] = ACTIONS(295),
    [anon_sym_generator] = ACTIONS(293),
    [anon_sym_enum] = ACTIONS(293),
    [anon_sym_EQ_EQ] = ACTIONS(293),
    [anon_sym_GT] = ACTIONS(293),
    [anon_sym_STAR] = ACTIONS(293),
    [anon_sym_PIPE] = ACTIONS(293),
    [anon_sym_PERCENT] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(295),
    [sym_true] = ACTIONS(293),
    [anon_sym_AMP_AMP] = ACTIONS(295),
    [anon_sym_AMP] = ACTIONS(293),
    [anon_sym_type] = ACTIONS(293),
    [anon_sym_datasource] = ACTIONS(293),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(295),
    [anon_sym_DOT] = ACTIONS(295),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(295),
    [anon_sym_PLUS] = ACTIONS(295),
    [anon_sym_STAR_STAR] = ACTIONS(295),
    [sym_string] = ACTIONS(295),
    [sym_false] = ACTIONS(293),
    [anon_sym_AT] = ACTIONS(293),
    [aux_sym_identifier_token1] = ACTIONS(293),
    [anon_sym_LPAREN] = ACTIONS(295),
    [ts_builtin_sym_end] = ACTIONS(295),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_CARET] = ACTIONS(295),
    [anon_sym_GT_GT_GT] = ACTIONS(295),
    [anon_sym_model] = ACTIONS(293),
    [anon_sym_BANG_EQ] = ACTIONS(293),
    [anon_sym_LT_EQ] = ACTIONS(295),
    [anon_sym_GT_EQ] = ACTIONS(295),
    [anon_sym_DASH] = ACTIONS(293),
    [anon_sym_LT] = ACTIONS(293),
  },
  [68] = {
    [anon_sym_enum] = ACTIONS(297),
    [anon_sym_model] = ACTIONS(297),
    [ts_builtin_sym_end] = ACTIONS(297),
    [anon_sym_type] = ACTIONS(297),
    [anon_sym_datasource] = ACTIONS(297),
    [sym_comment] = ACTIONS(3),
    [anon_sym_generator] = ACTIONS(297),
  },
  [69] = {
    [sym_enumeral] = STATE(69),
    [aux_sym_enum_block_repeat1] = STATE(69),
    [aux_sym_identifier_token1] = ACTIONS(299),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(302),
  },
  [70] = {
    [aux_sym_column_type_token1] = ACTIONS(304),
    [sym_comment] = ACTIONS(306),
  },
  [71] = {
    [sym_attribute] = STATE(78),
    [aux_sym_column_declaration_repeat1] = STATE(78),
    [anon_sym_RBRACE] = ACTIONS(308),
    [anon_sym_AT_AT] = ACTIONS(308),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(310),
    [aux_sym_identifier_token1] = ACTIONS(308),
  },
  [72] = {
    [anon_sym_enum] = ACTIONS(312),
    [anon_sym_model] = ACTIONS(312),
    [ts_builtin_sym_end] = ACTIONS(312),
    [anon_sym_type] = ACTIONS(312),
    [anon_sym_datasource] = ACTIONS(312),
    [sym_comment] = ACTIONS(3),
    [anon_sym_generator] = ACTIONS(312),
  },
  [73] = {
    [sym_assignment_expression] = STATE(73),
    [sym_block_attribute_declaration] = STATE(73),
    [sym_column_declaration] = STATE(73),
    [sym_identifier] = STATE(50),
    [sym__statement] = STATE(73),
    [aux_sym_statement_block_repeat1] = STATE(73),
    [anon_sym_RBRACE] = ACTIONS(314),
    [anon_sym_AT_AT] = ACTIONS(316),
    [sym_comment] = ACTIONS(3),
    [aux_sym_identifier_token1] = ACTIONS(319),
  },
  [74] = {
    [anon_sym_SLASH] = ACTIONS(322),
    [sym_number] = ACTIONS(324),
    [sym_null] = ACTIONS(322),
    [anon_sym_AT_AT] = ACTIONS(324),
    [anon_sym_GT_GT] = ACTIONS(322),
    [anon_sym_LT_LT] = ACTIONS(324),
    [anon_sym_generator] = ACTIONS(322),
    [anon_sym_enum] = ACTIONS(322),
    [anon_sym_EQ_EQ] = ACTIONS(322),
    [anon_sym_GT] = ACTIONS(322),
    [anon_sym_STAR] = ACTIONS(322),
    [anon_sym_PIPE] = ACTIONS(322),
    [anon_sym_PERCENT] = ACTIONS(324),
    [anon_sym_LBRACK] = ACTIONS(324),
    [sym_true] = ACTIONS(322),
    [anon_sym_AMP_AMP] = ACTIONS(324),
    [anon_sym_AMP] = ACTIONS(322),
    [anon_sym_type] = ACTIONS(322),
    [anon_sym_datasource] = ACTIONS(322),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(324),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(324),
    [anon_sym_PLUS] = ACTIONS(324),
    [anon_sym_STAR_STAR] = ACTIONS(324),
    [sym_string] = ACTIONS(324),
    [sym_false] = ACTIONS(322),
    [anon_sym_AT] = ACTIONS(322),
    [aux_sym_identifier_token1] = ACTIONS(322),
    [anon_sym_LPAREN] = ACTIONS(324),
    [ts_builtin_sym_end] = ACTIONS(324),
    [anon_sym_PIPE_PIPE] = ACTIONS(324),
    [anon_sym_CARET] = ACTIONS(324),
    [anon_sym_GT_GT_GT] = ACTIONS(324),
    [anon_sym_model] = ACTIONS(322),
    [anon_sym_BANG_EQ] = ACTIONS(322),
    [anon_sym_LT_EQ] = ACTIONS(324),
    [anon_sym_GT_EQ] = ACTIONS(324),
    [anon_sym_DASH] = ACTIONS(322),
    [anon_sym_LT] = ACTIONS(322),
  },
  [75] = {
    [anon_sym_SLASH] = ACTIONS(326),
    [sym_number] = ACTIONS(328),
    [sym_null] = ACTIONS(326),
    [anon_sym_AT_AT] = ACTIONS(328),
    [anon_sym_GT_GT] = ACTIONS(326),
    [anon_sym_LT_LT] = ACTIONS(328),
    [anon_sym_generator] = ACTIONS(326),
    [anon_sym_enum] = ACTIONS(326),
    [anon_sym_EQ_EQ] = ACTIONS(326),
    [anon_sym_GT] = ACTIONS(326),
    [anon_sym_STAR] = ACTIONS(326),
    [anon_sym_PIPE] = ACTIONS(326),
    [anon_sym_PERCENT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(328),
    [sym_true] = ACTIONS(326),
    [anon_sym_AMP_AMP] = ACTIONS(328),
    [anon_sym_AMP] = ACTIONS(326),
    [anon_sym_type] = ACTIONS(326),
    [anon_sym_datasource] = ACTIONS(326),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(328),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(328),
    [anon_sym_PLUS] = ACTIONS(328),
    [anon_sym_STAR_STAR] = ACTIONS(328),
    [sym_string] = ACTIONS(328),
    [sym_false] = ACTIONS(326),
    [anon_sym_AT] = ACTIONS(326),
    [aux_sym_identifier_token1] = ACTIONS(326),
    [anon_sym_LPAREN] = ACTIONS(328),
    [ts_builtin_sym_end] = ACTIONS(328),
    [anon_sym_PIPE_PIPE] = ACTIONS(328),
    [anon_sym_CARET] = ACTIONS(328),
    [anon_sym_GT_GT_GT] = ACTIONS(328),
    [anon_sym_model] = ACTIONS(326),
    [anon_sym_BANG_EQ] = ACTIONS(326),
    [anon_sym_LT_EQ] = ACTIONS(328),
    [anon_sym_GT_EQ] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(326),
    [anon_sym_LT] = ACTIONS(326),
  },
  [76] = {
    [aux_sym_arguments_repeat1] = STATE(55),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(330),
    [sym_comment] = ACTIONS(3),
  },
  [77] = {
    [sym_array] = STATE(80),
    [aux_sym_identifier_token1] = ACTIONS(332),
    [anon_sym_LBRACK] = ACTIONS(334),
    [anon_sym_AT_AT] = ACTIONS(332),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(336),
    [anon_sym_RBRACE] = ACTIONS(332),
  },
  [78] = {
    [sym_attribute] = STATE(81),
    [aux_sym_column_declaration_repeat1] = STATE(81),
    [anon_sym_RBRACE] = ACTIONS(338),
    [anon_sym_AT_AT] = ACTIONS(338),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(310),
    [aux_sym_identifier_token1] = ACTIONS(338),
  },
  [79] = {
    [anon_sym_SLASH] = ACTIONS(340),
    [sym_number] = ACTIONS(342),
    [sym_null] = ACTIONS(340),
    [anon_sym_AT_AT] = ACTIONS(342),
    [anon_sym_GT_GT] = ACTIONS(340),
    [anon_sym_LT_LT] = ACTIONS(342),
    [anon_sym_generator] = ACTIONS(340),
    [anon_sym_enum] = ACTIONS(340),
    [anon_sym_EQ_EQ] = ACTIONS(340),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(340),
    [anon_sym_PIPE] = ACTIONS(340),
    [anon_sym_PERCENT] = ACTIONS(342),
    [anon_sym_LBRACK] = ACTIONS(342),
    [sym_true] = ACTIONS(340),
    [anon_sym_AMP_AMP] = ACTIONS(342),
    [anon_sym_AMP] = ACTIONS(340),
    [anon_sym_type] = ACTIONS(340),
    [anon_sym_datasource] = ACTIONS(340),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(342),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(342),
    [anon_sym_PLUS] = ACTIONS(342),
    [anon_sym_STAR_STAR] = ACTIONS(342),
    [sym_string] = ACTIONS(342),
    [sym_false] = ACTIONS(340),
    [anon_sym_AT] = ACTIONS(340),
    [aux_sym_identifier_token1] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [ts_builtin_sym_end] = ACTIONS(342),
    [anon_sym_PIPE_PIPE] = ACTIONS(342),
    [anon_sym_CARET] = ACTIONS(342),
    [anon_sym_GT_GT_GT] = ACTIONS(342),
    [anon_sym_model] = ACTIONS(340),
    [anon_sym_BANG_EQ] = ACTIONS(340),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_LT] = ACTIONS(340),
  },
  [80] = {
    [aux_sym_identifier_token1] = ACTIONS(344),
    [anon_sym_AT_AT] = ACTIONS(344),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(346),
    [anon_sym_RBRACE] = ACTIONS(344),
  },
  [81] = {
    [sym_attribute] = STATE(81),
    [aux_sym_column_declaration_repeat1] = STATE(81),
    [aux_sym_identifier_token1] = ACTIONS(348),
    [anon_sym_AT_AT] = ACTIONS(348),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(350),
    [anon_sym_RBRACE] = ACTIONS(348),
  },
  [82] = {
    [aux_sym_column_type_token1] = ACTIONS(37),
    [sym_comment] = ACTIONS(306),
  },
  [83] = {
    [sym_member_expression] = STATE(86),
    [sym_array] = STATE(87),
    [sym__constructable_expression] = STATE(87),
    [sym_binary_expression] = STATE(87),
    [sym_attribute] = STATE(87),
    [sym_block_attribute_declaration] = STATE(87),
    [sym__expression] = STATE(87),
    [sym_identifier] = STATE(85),
    [sym_assignment_expression] = STATE(87),
    [sym_type_expression] = STATE(87),
    [sym_call_expression] = STATE(87),
    [sym_number] = ACTIONS(353),
    [sym_null] = ACTIONS(355),
    [anon_sym_AT_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(353),
    [sym_false] = ACTIONS(355),
    [anon_sym_AT] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(55),
    [sym_true] = ACTIONS(355),
  },
  [84] = {
    [sym_member_expression] = STATE(86),
    [sym_array] = STATE(89),
    [sym__constructable_expression] = STATE(89),
    [sym_binary_expression] = STATE(89),
    [sym_attribute] = STATE(89),
    [sym_block_attribute_declaration] = STATE(89),
    [sym__expression] = STATE(89),
    [sym_identifier] = STATE(85),
    [sym_assignment_expression] = STATE(89),
    [sym_type_expression] = STATE(89),
    [sym_call_expression] = STATE(89),
    [sym_number] = ACTIONS(357),
    [sym_null] = ACTIONS(359),
    [anon_sym_AT_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(357),
    [sym_false] = ACTIONS(359),
    [anon_sym_AT] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(55),
    [sym_true] = ACTIONS(359),
  },
  [85] = {
    [anon_sym_SLASH] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(97),
    [anon_sym_GT_GT] = ACTIONS(95),
    [anon_sym_EQ] = ACTIONS(361),
    [anon_sym_LT_LT] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_STAR] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(95),
    [anon_sym_PERCENT] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(363),
    [anon_sym_RPAREN] = ACTIONS(97),
    [anon_sym_AMP_AMP] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(95),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(97),
    [anon_sym_DOT] = ACTIONS(365),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(97),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_STAR_STAR] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_PIPE_PIPE] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(97),
    [anon_sym_GT_GT_GT] = ACTIONS(97),
    [anon_sym_BANG_EQ] = ACTIONS(95),
    [anon_sym_LT_EQ] = ACTIONS(97),
    [anon_sym_GT_EQ] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(95),
  },
  [86] = {
    [anon_sym_SLASH] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(97),
    [anon_sym_GT_GT] = ACTIONS(95),
    [anon_sym_LT_LT] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_STAR] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(95),
    [anon_sym_PERCENT] = ACTIONS(97),
    [anon_sym_RPAREN] = ACTIONS(97),
    [anon_sym_AMP_AMP] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(95),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(97),
    [anon_sym_DOT] = ACTIONS(365),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(97),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_STAR_STAR] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_PIPE_PIPE] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(97),
    [anon_sym_GT_GT_GT] = ACTIONS(97),
    [anon_sym_BANG_EQ] = ACTIONS(95),
    [anon_sym_LT_EQ] = ACTIONS(97),
    [anon_sym_GT_EQ] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(95),
  },
  [87] = {
    [sym_arguments] = STATE(96),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(140),
    [anon_sym_GT_GT] = ACTIONS(154),
    [anon_sym_LT_LT] = ACTIONS(168),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(140),
    [anon_sym_AMP_AMP] = ACTIONS(156),
    [anon_sym_AMP] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(160),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(160),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_STAR_STAR] = ACTIONS(164),
    [anon_sym_RBRACK] = ACTIONS(140),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_PIPE_PIPE] = ACTIONS(176),
    [anon_sym_CARET] = ACTIONS(176),
    [anon_sym_GT_GT_GT] = ACTIONS(168),
    [anon_sym_BANG_EQ] = ACTIONS(172),
    [anon_sym_LT_EQ] = ACTIONS(160),
    [anon_sym_GT_EQ] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym_LT] = ACTIONS(172),
  },
  [88] = {
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_COMMA] = ACTIONS(152),
    [anon_sym_GT_GT] = ACTIONS(150),
    [anon_sym_LT_LT] = ACTIONS(152),
    [anon_sym_EQ_EQ] = ACTIONS(150),
    [anon_sym_GT] = ACTIONS(150),
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_PIPE] = ACTIONS(150),
    [anon_sym_PERCENT] = ACTIONS(152),
    [anon_sym_RPAREN] = ACTIONS(152),
    [anon_sym_AMP_AMP] = ACTIONS(152),
    [anon_sym_AMP] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(152),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(152),
    [anon_sym_PLUS] = ACTIONS(152),
    [anon_sym_STAR_STAR] = ACTIONS(152),
    [anon_sym_RBRACK] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_PIPE_PIPE] = ACTIONS(152),
    [anon_sym_CARET] = ACTIONS(152),
    [anon_sym_GT_GT_GT] = ACTIONS(152),
    [anon_sym_BANG_EQ] = ACTIONS(150),
    [anon_sym_LT_EQ] = ACTIONS(152),
    [anon_sym_GT_EQ] = ACTIONS(152),
    [anon_sym_DASH] = ACTIONS(152),
    [anon_sym_LT] = ACTIONS(150),
  },
  [89] = {
    [sym_arguments] = STATE(96),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(178),
    [anon_sym_GT_GT] = ACTIONS(154),
    [anon_sym_LT_LT] = ACTIONS(168),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(178),
    [anon_sym_AMP_AMP] = ACTIONS(156),
    [anon_sym_AMP] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(160),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(160),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_STAR_STAR] = ACTIONS(164),
    [anon_sym_RBRACK] = ACTIONS(178),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_PIPE_PIPE] = ACTIONS(176),
    [anon_sym_CARET] = ACTIONS(176),
    [anon_sym_GT_GT_GT] = ACTIONS(168),
    [anon_sym_BANG_EQ] = ACTIONS(172),
    [anon_sym_LT_EQ] = ACTIONS(160),
    [anon_sym_GT_EQ] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym_LT] = ACTIONS(172),
  },
  [90] = {
    [sym_member_expression] = STATE(86),
    [sym_array] = STATE(101),
    [sym__constructable_expression] = STATE(101),
    [sym_binary_expression] = STATE(101),
    [sym_attribute] = STATE(101),
    [sym_block_attribute_declaration] = STATE(101),
    [sym__expression] = STATE(101),
    [sym_identifier] = STATE(85),
    [sym_assignment_expression] = STATE(101),
    [sym_type_expression] = STATE(101),
    [sym_call_expression] = STATE(101),
    [sym_number] = ACTIONS(367),
    [sym_null] = ACTIONS(369),
    [anon_sym_AT_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(367),
    [sym_false] = ACTIONS(369),
    [anon_sym_AT] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(55),
    [sym_true] = ACTIONS(369),
  },
  [91] = {
    [sym_member_expression] = STATE(86),
    [sym_array] = STATE(102),
    [sym__constructable_expression] = STATE(102),
    [sym_binary_expression] = STATE(102),
    [sym_attribute] = STATE(102),
    [sym_block_attribute_declaration] = STATE(102),
    [sym__expression] = STATE(102),
    [sym_identifier] = STATE(85),
    [sym_assignment_expression] = STATE(102),
    [sym_type_expression] = STATE(102),
    [sym_call_expression] = STATE(102),
    [sym_number] = ACTIONS(371),
    [sym_null] = ACTIONS(373),
    [anon_sym_AT_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(371),
    [sym_false] = ACTIONS(373),
    [anon_sym_AT] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(55),
    [sym_true] = ACTIONS(373),
  },
  [92] = {
    [sym_member_expression] = STATE(86),
    [sym_array] = STATE(103),
    [sym__constructable_expression] = STATE(103),
    [sym_binary_expression] = STATE(103),
    [sym_attribute] = STATE(103),
    [sym_block_attribute_declaration] = STATE(103),
    [sym__expression] = STATE(103),
    [sym_identifier] = STATE(85),
    [sym_assignment_expression] = STATE(103),
    [sym_type_expression] = STATE(103),
    [sym_call_expression] = STATE(103),
    [sym_number] = ACTIONS(375),
    [sym_null] = ACTIONS(377),
    [anon_sym_AT_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(375),
    [sym_false] = ACTIONS(377),
    [anon_sym_AT] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(55),
    [sym_true] = ACTIONS(377),
  },
  [93] = {
    [sym_member_expression] = STATE(86),
    [sym_array] = STATE(104),
    [sym__constructable_expression] = STATE(104),
    [sym_binary_expression] = STATE(104),
    [sym_attribute] = STATE(104),
    [sym_block_attribute_declaration] = STATE(104),
    [sym__expression] = STATE(104),
    [sym_identifier] = STATE(85),
    [sym_assignment_expression] = STATE(104),
    [sym_type_expression] = STATE(104),
    [sym_call_expression] = STATE(104),
    [sym_number] = ACTIONS(379),
    [sym_null] = ACTIONS(381),
    [anon_sym_AT_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(379),
    [sym_false] = ACTIONS(381),
    [anon_sym_AT] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(55),
    [sym_true] = ACTIONS(381),
  },
  [94] = {
    [sym_member_expression] = STATE(86),
    [sym_array] = STATE(105),
    [sym__constructable_expression] = STATE(105),
    [sym_binary_expression] = STATE(105),
    [sym_attribute] = STATE(105),
    [sym_block_attribute_declaration] = STATE(105),
    [sym__expression] = STATE(105),
    [sym_identifier] = STATE(85),
    [sym_assignment_expression] = STATE(105),
    [sym_type_expression] = STATE(105),
    [sym_call_expression] = STATE(105),
    [sym_number] = ACTIONS(383),
    [sym_null] = ACTIONS(385),
    [anon_sym_AT_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(383),
    [sym_false] = ACTIONS(385),
    [anon_sym_AT] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(55),
    [sym_true] = ACTIONS(385),
  },
  [95] = {
    [sym_member_expression] = STATE(86),
    [sym_array] = STATE(107),
    [sym__constructable_expression] = STATE(107),
    [sym_binary_expression] = STATE(107),
    [sym_attribute] = STATE(107),
    [sym_block_attribute_declaration] = STATE(107),
    [sym__expression] = STATE(107),
    [sym_identifier] = STATE(85),
    [sym_assignment_expression] = STATE(107),
    [sym_type_expression] = STATE(107),
    [sym_call_expression] = STATE(107),
    [sym_number] = ACTIONS(387),
    [sym_null] = ACTIONS(389),
    [anon_sym_AT_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(387),
    [sym_false] = ACTIONS(389),
    [anon_sym_AT] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(55),
    [sym_true] = ACTIONS(389),
  },
  [96] = {
    [anon_sym_SLASH] = ACTIONS(212),
    [anon_sym_COMMA] = ACTIONS(214),
    [anon_sym_GT_GT] = ACTIONS(212),
    [anon_sym_LT_LT] = ACTIONS(214),
    [anon_sym_EQ_EQ] = ACTIONS(212),
    [anon_sym_GT] = ACTIONS(212),
    [anon_sym_STAR] = ACTIONS(212),
    [anon_sym_PIPE] = ACTIONS(212),
    [anon_sym_PERCENT] = ACTIONS(214),
    [anon_sym_RPAREN] = ACTIONS(214),
    [anon_sym_AMP_AMP] = ACTIONS(214),
    [anon_sym_AMP] = ACTIONS(212),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(214),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(214),
    [anon_sym_STAR_STAR] = ACTIONS(214),
    [anon_sym_RBRACK] = ACTIONS(214),
    [anon_sym_LPAREN] = ACTIONS(214),
    [anon_sym_PIPE_PIPE] = ACTIONS(214),
    [anon_sym_CARET] = ACTIONS(214),
    [anon_sym_GT_GT_GT] = ACTIONS(214),
    [anon_sym_BANG_EQ] = ACTIONS(212),
    [anon_sym_LT_EQ] = ACTIONS(214),
    [anon_sym_GT_EQ] = ACTIONS(214),
    [anon_sym_DASH] = ACTIONS(214),
    [anon_sym_LT] = ACTIONS(212),
  },
  [97] = {
    [sym_member_expression] = STATE(86),
    [sym_array] = STATE(108),
    [sym__constructable_expression] = STATE(108),
    [sym_binary_expression] = STATE(108),
    [sym_attribute] = STATE(108),
    [sym_block_attribute_declaration] = STATE(108),
    [sym__expression] = STATE(108),
    [sym_identifier] = STATE(85),
    [sym_assignment_expression] = STATE(108),
    [sym_type_expression] = STATE(108),
    [sym_call_expression] = STATE(108),
    [sym_number] = ACTIONS(391),
    [sym_null] = ACTIONS(393),
    [anon_sym_AT_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(391),
    [sym_false] = ACTIONS(393),
    [anon_sym_AT] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(55),
    [sym_true] = ACTIONS(393),
  },
  [98] = {
    [sym_member_expression] = STATE(86),
    [sym_array] = STATE(109),
    [sym__constructable_expression] = STATE(109),
    [sym_binary_expression] = STATE(109),
    [sym_attribute] = STATE(109),
    [sym_block_attribute_declaration] = STATE(109),
    [sym__expression] = STATE(109),
    [sym_identifier] = STATE(85),
    [sym_assignment_expression] = STATE(109),
    [sym_type_expression] = STATE(109),
    [sym_call_expression] = STATE(109),
    [sym_number] = ACTIONS(395),
    [sym_null] = ACTIONS(397),
    [anon_sym_AT_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(395),
    [sym_false] = ACTIONS(397),
    [anon_sym_AT] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(55),
    [sym_true] = ACTIONS(397),
  },
  [99] = {
    [sym_identifier] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [aux_sym_identifier_token1] = ACTIONS(399),
  },
  [100] = {
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_COMMA] = ACTIONS(268),
    [anon_sym_GT_GT] = ACTIONS(266),
    [anon_sym_LT_LT] = ACTIONS(268),
    [anon_sym_EQ_EQ] = ACTIONS(266),
    [anon_sym_GT] = ACTIONS(266),
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_PIPE] = ACTIONS(266),
    [anon_sym_PERCENT] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(268),
    [anon_sym_AMP_AMP] = ACTIONS(268),
    [anon_sym_AMP] = ACTIONS(266),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(268),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(268),
    [anon_sym_PLUS] = ACTIONS(268),
    [anon_sym_STAR_STAR] = ACTIONS(268),
    [anon_sym_RBRACK] = ACTIONS(268),
    [anon_sym_LPAREN] = ACTIONS(268),
    [anon_sym_PIPE_PIPE] = ACTIONS(268),
    [anon_sym_CARET] = ACTIONS(268),
    [anon_sym_GT_GT_GT] = ACTIONS(268),
    [anon_sym_BANG_EQ] = ACTIONS(266),
    [anon_sym_LT_EQ] = ACTIONS(268),
    [anon_sym_GT_EQ] = ACTIONS(268),
    [anon_sym_DASH] = ACTIONS(268),
    [anon_sym_LT] = ACTIONS(266),
  },
  [101] = {
    [sym_arguments] = STATE(96),
    [anon_sym_SLASH] = ACTIONS(275),
    [anon_sym_COMMA] = ACTIONS(277),
    [anon_sym_GT_GT] = ACTIONS(275),
    [anon_sym_LT_LT] = ACTIONS(277),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [anon_sym_GT] = ACTIONS(275),
    [anon_sym_STAR] = ACTIONS(275),
    [anon_sym_PIPE] = ACTIONS(275),
    [anon_sym_PERCENT] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_AMP] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(277),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_STAR_STAR] = ACTIONS(164),
    [anon_sym_RBRACK] = ACTIONS(277),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym_GT_GT_GT] = ACTIONS(277),
    [anon_sym_BANG_EQ] = ACTIONS(275),
    [anon_sym_LT_EQ] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_LT] = ACTIONS(275),
  },
  [102] = {
    [sym_arguments] = STATE(96),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(277),
    [anon_sym_GT_GT] = ACTIONS(154),
    [anon_sym_LT_LT] = ACTIONS(168),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(275),
    [anon_sym_PERCENT] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_AMP] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(160),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(160),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_STAR_STAR] = ACTIONS(164),
    [anon_sym_RBRACK] = ACTIONS(277),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym_GT_GT_GT] = ACTIONS(168),
    [anon_sym_BANG_EQ] = ACTIONS(172),
    [anon_sym_LT_EQ] = ACTIONS(160),
    [anon_sym_GT_EQ] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym_LT] = ACTIONS(172),
  },
  [103] = {
    [sym_arguments] = STATE(96),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(277),
    [anon_sym_GT_GT] = ACTIONS(154),
    [anon_sym_LT_LT] = ACTIONS(168),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [anon_sym_GT] = ACTIONS(275),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(275),
    [anon_sym_PERCENT] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_AMP] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(277),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_STAR_STAR] = ACTIONS(164),
    [anon_sym_RBRACK] = ACTIONS(277),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym_GT_GT_GT] = ACTIONS(168),
    [anon_sym_BANG_EQ] = ACTIONS(275),
    [anon_sym_LT_EQ] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym_LT] = ACTIONS(275),
  },
  [104] = {
    [sym_arguments] = STATE(96),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(277),
    [anon_sym_GT_GT] = ACTIONS(154),
    [anon_sym_LT_LT] = ACTIONS(168),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [anon_sym_GT] = ACTIONS(275),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(275),
    [anon_sym_PERCENT] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_AMP] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(277),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_STAR_STAR] = ACTIONS(164),
    [anon_sym_RBRACK] = ACTIONS(277),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym_GT_GT_GT] = ACTIONS(168),
    [anon_sym_BANG_EQ] = ACTIONS(275),
    [anon_sym_LT_EQ] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_LT] = ACTIONS(275),
  },
  [105] = {
    [sym_arguments] = STATE(96),
    [anon_sym_SLASH] = ACTIONS(275),
    [anon_sym_COMMA] = ACTIONS(277),
    [anon_sym_GT_GT] = ACTIONS(275),
    [anon_sym_LT_LT] = ACTIONS(277),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [anon_sym_GT] = ACTIONS(275),
    [anon_sym_STAR] = ACTIONS(275),
    [anon_sym_PIPE] = ACTIONS(275),
    [anon_sym_PERCENT] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_AMP] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(277),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_STAR_STAR] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym_GT_GT_GT] = ACTIONS(277),
    [anon_sym_BANG_EQ] = ACTIONS(275),
    [anon_sym_LT_EQ] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_LT] = ACTIONS(275),
  },
  [106] = {
    [anon_sym_SLASH] = ACTIONS(279),
    [anon_sym_COMMA] = ACTIONS(281),
    [anon_sym_GT_GT] = ACTIONS(279),
    [anon_sym_LT_LT] = ACTIONS(281),
    [anon_sym_EQ_EQ] = ACTIONS(279),
    [anon_sym_GT] = ACTIONS(279),
    [anon_sym_STAR] = ACTIONS(279),
    [anon_sym_PIPE] = ACTIONS(279),
    [anon_sym_PERCENT] = ACTIONS(281),
    [anon_sym_RPAREN] = ACTIONS(281),
    [anon_sym_AMP_AMP] = ACTIONS(281),
    [anon_sym_AMP] = ACTIONS(279),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(281),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(281),
    [anon_sym_STAR_STAR] = ACTIONS(281),
    [anon_sym_RBRACK] = ACTIONS(281),
    [anon_sym_LPAREN] = ACTIONS(281),
    [anon_sym_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_CARET] = ACTIONS(281),
    [anon_sym_GT_GT_GT] = ACTIONS(281),
    [anon_sym_BANG_EQ] = ACTIONS(279),
    [anon_sym_LT_EQ] = ACTIONS(281),
    [anon_sym_GT_EQ] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(281),
    [anon_sym_LT] = ACTIONS(279),
  },
  [107] = {
    [sym_arguments] = STATE(96),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(277),
    [anon_sym_GT_GT] = ACTIONS(154),
    [anon_sym_LT_LT] = ACTIONS(168),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(275),
    [anon_sym_PERCENT] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(156),
    [anon_sym_AMP] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(160),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(160),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_STAR_STAR] = ACTIONS(164),
    [anon_sym_RBRACK] = ACTIONS(277),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym_GT_GT_GT] = ACTIONS(168),
    [anon_sym_BANG_EQ] = ACTIONS(172),
    [anon_sym_LT_EQ] = ACTIONS(160),
    [anon_sym_GT_EQ] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym_LT] = ACTIONS(172),
  },
  [108] = {
    [sym_arguments] = STATE(96),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(285),
    [anon_sym_GT_GT] = ACTIONS(154),
    [anon_sym_LT_LT] = ACTIONS(168),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(285),
    [anon_sym_AMP_AMP] = ACTIONS(156),
    [anon_sym_AMP] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(160),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(160),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_STAR_STAR] = ACTIONS(164),
    [anon_sym_RBRACK] = ACTIONS(285),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_PIPE_PIPE] = ACTIONS(176),
    [anon_sym_CARET] = ACTIONS(176),
    [anon_sym_GT_GT_GT] = ACTIONS(168),
    [anon_sym_BANG_EQ] = ACTIONS(172),
    [anon_sym_LT_EQ] = ACTIONS(160),
    [anon_sym_GT_EQ] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym_LT] = ACTIONS(172),
  },
  [109] = {
    [sym_arguments] = STATE(96),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_GT_GT] = ACTIONS(154),
    [anon_sym_LT_LT] = ACTIONS(168),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(289),
    [anon_sym_AMP_AMP] = ACTIONS(156),
    [anon_sym_AMP] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(160),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(160),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_STAR_STAR] = ACTIONS(164),
    [anon_sym_RBRACK] = ACTIONS(289),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_PIPE_PIPE] = ACTIONS(176),
    [anon_sym_CARET] = ACTIONS(176),
    [anon_sym_GT_GT_GT] = ACTIONS(168),
    [anon_sym_BANG_EQ] = ACTIONS(172),
    [anon_sym_LT_EQ] = ACTIONS(160),
    [anon_sym_GT_EQ] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym_LT] = ACTIONS(172),
  },
  [110] = {
    [anon_sym_SLASH] = ACTIONS(293),
    [anon_sym_COMMA] = ACTIONS(295),
    [anon_sym_GT_GT] = ACTIONS(293),
    [anon_sym_LT_LT] = ACTIONS(295),
    [anon_sym_EQ_EQ] = ACTIONS(293),
    [anon_sym_GT] = ACTIONS(293),
    [anon_sym_STAR] = ACTIONS(293),
    [anon_sym_PIPE] = ACTIONS(293),
    [anon_sym_PERCENT] = ACTIONS(295),
    [anon_sym_RPAREN] = ACTIONS(295),
    [anon_sym_AMP_AMP] = ACTIONS(295),
    [anon_sym_AMP] = ACTIONS(293),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(295),
    [anon_sym_DOT] = ACTIONS(295),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(295),
    [anon_sym_PLUS] = ACTIONS(295),
    [anon_sym_STAR_STAR] = ACTIONS(295),
    [anon_sym_RBRACK] = ACTIONS(295),
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_CARET] = ACTIONS(295),
    [anon_sym_GT_GT_GT] = ACTIONS(295),
    [anon_sym_BANG_EQ] = ACTIONS(293),
    [anon_sym_LT_EQ] = ACTIONS(295),
    [anon_sym_GT_EQ] = ACTIONS(295),
    [anon_sym_DASH] = ACTIONS(295),
    [anon_sym_LT] = ACTIONS(293),
  },
  [111] = {
    [anon_sym_SLASH] = ACTIONS(322),
    [anon_sym_COMMA] = ACTIONS(324),
    [anon_sym_GT_GT] = ACTIONS(322),
    [anon_sym_LT_LT] = ACTIONS(324),
    [anon_sym_EQ_EQ] = ACTIONS(322),
    [anon_sym_GT] = ACTIONS(322),
    [anon_sym_STAR] = ACTIONS(322),
    [anon_sym_PIPE] = ACTIONS(322),
    [anon_sym_PERCENT] = ACTIONS(324),
    [anon_sym_RPAREN] = ACTIONS(324),
    [anon_sym_AMP_AMP] = ACTIONS(324),
    [anon_sym_AMP] = ACTIONS(322),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(324),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(324),
    [anon_sym_PLUS] = ACTIONS(324),
    [anon_sym_STAR_STAR] = ACTIONS(324),
    [anon_sym_RBRACK] = ACTIONS(324),
    [anon_sym_LPAREN] = ACTIONS(324),
    [anon_sym_PIPE_PIPE] = ACTIONS(324),
    [anon_sym_CARET] = ACTIONS(324),
    [anon_sym_GT_GT_GT] = ACTIONS(324),
    [anon_sym_BANG_EQ] = ACTIONS(322),
    [anon_sym_LT_EQ] = ACTIONS(324),
    [anon_sym_GT_EQ] = ACTIONS(324),
    [anon_sym_DASH] = ACTIONS(324),
    [anon_sym_LT] = ACTIONS(322),
  },
  [112] = {
    [anon_sym_SLASH] = ACTIONS(326),
    [anon_sym_COMMA] = ACTIONS(328),
    [anon_sym_GT_GT] = ACTIONS(326),
    [anon_sym_LT_LT] = ACTIONS(328),
    [anon_sym_EQ_EQ] = ACTIONS(326),
    [anon_sym_GT] = ACTIONS(326),
    [anon_sym_STAR] = ACTIONS(326),
    [anon_sym_PIPE] = ACTIONS(326),
    [anon_sym_PERCENT] = ACTIONS(328),
    [anon_sym_RPAREN] = ACTIONS(328),
    [anon_sym_AMP_AMP] = ACTIONS(328),
    [anon_sym_AMP] = ACTIONS(326),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(328),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(328),
    [anon_sym_PLUS] = ACTIONS(328),
    [anon_sym_STAR_STAR] = ACTIONS(328),
    [anon_sym_RBRACK] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(328),
    [anon_sym_PIPE_PIPE] = ACTIONS(328),
    [anon_sym_CARET] = ACTIONS(328),
    [anon_sym_GT_GT_GT] = ACTIONS(328),
    [anon_sym_BANG_EQ] = ACTIONS(326),
    [anon_sym_LT_EQ] = ACTIONS(328),
    [anon_sym_GT_EQ] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(328),
    [anon_sym_LT] = ACTIONS(326),
  },
  [113] = {
    [anon_sym_SLASH] = ACTIONS(340),
    [anon_sym_COMMA] = ACTIONS(342),
    [anon_sym_GT_GT] = ACTIONS(340),
    [anon_sym_LT_LT] = ACTIONS(342),
    [anon_sym_EQ_EQ] = ACTIONS(340),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(340),
    [anon_sym_PIPE] = ACTIONS(340),
    [anon_sym_PERCENT] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(342),
    [anon_sym_AMP_AMP] = ACTIONS(342),
    [anon_sym_AMP] = ACTIONS(340),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(342),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(342),
    [anon_sym_PLUS] = ACTIONS(342),
    [anon_sym_STAR_STAR] = ACTIONS(342),
    [anon_sym_RBRACK] = ACTIONS(342),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_PIPE_PIPE] = ACTIONS(342),
    [anon_sym_CARET] = ACTIONS(342),
    [anon_sym_GT_GT_GT] = ACTIONS(342),
    [anon_sym_BANG_EQ] = ACTIONS(340),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_DASH] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [114] = {
    [anon_sym_SLASH] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [anon_sym_GT_GT] = ACTIONS(35),
    [anon_sym_EQ] = ACTIONS(35),
    [anon_sym_LT_LT] = ACTIONS(37),
    [anon_sym_EQ_EQ] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_PERCENT] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(37),
    [anon_sym_RPAREN] = ACTIONS(37),
    [anon_sym_AMP_AMP] = ACTIONS(37),
    [anon_sym_AMP] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(37),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_STAR_STAR] = ACTIONS(37),
    [anon_sym_RBRACK] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_PIPE_PIPE] = ACTIONS(37),
    [anon_sym_CARET] = ACTIONS(37),
    [anon_sym_GT_GT_GT] = ACTIONS(37),
    [anon_sym_BANG_EQ] = ACTIONS(35),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [anon_sym_GT_EQ] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(35),
  },
  [115] = {
    [sym_member_expression] = STATE(118),
    [sym_array] = STATE(119),
    [sym__constructable_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym_attribute] = STATE(119),
    [sym_block_attribute_declaration] = STATE(119),
    [sym__expression] = STATE(119),
    [sym_identifier] = STATE(117),
    [sym_assignment_expression] = STATE(119),
    [sym_type_expression] = STATE(119),
    [sym_call_expression] = STATE(119),
    [sym_number] = ACTIONS(401),
    [sym_null] = ACTIONS(403),
    [anon_sym_AT_AT] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(401),
    [sym_false] = ACTIONS(403),
    [anon_sym_AT] = ACTIONS(310),
    [aux_sym_identifier_token1] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(407),
    [sym_true] = ACTIONS(403),
  },
  [116] = {
    [sym_member_expression] = STATE(118),
    [sym_array] = STATE(121),
    [sym__constructable_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym_attribute] = STATE(121),
    [sym_block_attribute_declaration] = STATE(121),
    [sym__expression] = STATE(121),
    [sym_identifier] = STATE(117),
    [sym_assignment_expression] = STATE(121),
    [sym_type_expression] = STATE(121),
    [sym_call_expression] = STATE(121),
    [sym_number] = ACTIONS(409),
    [sym_null] = ACTIONS(411),
    [anon_sym_AT_AT] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(409),
    [sym_false] = ACTIONS(411),
    [anon_sym_AT] = ACTIONS(310),
    [aux_sym_identifier_token1] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(407),
    [sym_true] = ACTIONS(411),
  },
  [117] = {
    [anon_sym_SLASH] = ACTIONS(95),
    [anon_sym_AT_AT] = ACTIONS(97),
    [anon_sym_GT_GT] = ACTIONS(95),
    [anon_sym_EQ] = ACTIONS(413),
    [anon_sym_LT_LT] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_STAR] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(95),
    [anon_sym_PERCENT] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(415),
    [anon_sym_AMP_AMP] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(95),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(97),
    [anon_sym_DOT] = ACTIONS(417),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(97),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_STAR_STAR] = ACTIONS(97),
    [anon_sym_AT] = ACTIONS(95),
    [aux_sym_identifier_token1] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_PIPE_PIPE] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(97),
    [anon_sym_GT_GT_GT] = ACTIONS(97),
    [anon_sym_BANG_EQ] = ACTIONS(95),
    [anon_sym_LT_EQ] = ACTIONS(97),
    [anon_sym_GT_EQ] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_LT] = ACTIONS(95),
  },
  [118] = {
    [anon_sym_SLASH] = ACTIONS(95),
    [anon_sym_AT_AT] = ACTIONS(97),
    [anon_sym_GT_GT] = ACTIONS(95),
    [anon_sym_LT_LT] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_STAR] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(95),
    [anon_sym_PERCENT] = ACTIONS(97),
    [anon_sym_AMP_AMP] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(95),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(97),
    [anon_sym_DOT] = ACTIONS(417),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(97),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_STAR_STAR] = ACTIONS(97),
    [anon_sym_AT] = ACTIONS(95),
    [aux_sym_identifier_token1] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_PIPE_PIPE] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(97),
    [anon_sym_GT_GT_GT] = ACTIONS(97),
    [anon_sym_BANG_EQ] = ACTIONS(95),
    [anon_sym_LT_EQ] = ACTIONS(97),
    [anon_sym_GT_EQ] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_LT] = ACTIONS(95),
  },
  [119] = {
    [sym_arguments] = STATE(128),
    [anon_sym_SLASH] = ACTIONS(419),
    [anon_sym_AT_AT] = ACTIONS(140),
    [anon_sym_GT_GT] = ACTIONS(419),
    [anon_sym_LT_LT] = ACTIONS(421),
    [anon_sym_RBRACE] = ACTIONS(140),
    [anon_sym_EQ_EQ] = ACTIONS(423),
    [anon_sym_GT] = ACTIONS(423),
    [anon_sym_STAR] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(425),
    [anon_sym_PERCENT] = ACTIONS(421),
    [anon_sym_AMP_AMP] = ACTIONS(427),
    [anon_sym_AMP] = ACTIONS(429),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(431),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(431),
    [anon_sym_PLUS] = ACTIONS(433),
    [anon_sym_STAR_STAR] = ACTIONS(435),
    [anon_sym_AT] = ACTIONS(142),
    [aux_sym_identifier_token1] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(437),
    [anon_sym_PIPE_PIPE] = ACTIONS(439),
    [anon_sym_CARET] = ACTIONS(439),
    [anon_sym_GT_GT_GT] = ACTIONS(421),
    [anon_sym_BANG_EQ] = ACTIONS(423),
    [anon_sym_LT_EQ] = ACTIONS(431),
    [anon_sym_GT_EQ] = ACTIONS(431),
    [anon_sym_DASH] = ACTIONS(441),
    [anon_sym_LT] = ACTIONS(423),
  },
  [120] = {
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_AT_AT] = ACTIONS(152),
    [anon_sym_GT_GT] = ACTIONS(150),
    [anon_sym_LT_LT] = ACTIONS(152),
    [anon_sym_RBRACE] = ACTIONS(152),
    [anon_sym_EQ_EQ] = ACTIONS(150),
    [anon_sym_GT] = ACTIONS(150),
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_PIPE] = ACTIONS(150),
    [anon_sym_PERCENT] = ACTIONS(152),
    [anon_sym_AMP_AMP] = ACTIONS(152),
    [anon_sym_AMP] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(152),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(152),
    [anon_sym_PLUS] = ACTIONS(152),
    [anon_sym_STAR_STAR] = ACTIONS(152),
    [anon_sym_AT] = ACTIONS(150),
    [aux_sym_identifier_token1] = ACTIONS(150),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_PIPE_PIPE] = ACTIONS(152),
    [anon_sym_CARET] = ACTIONS(152),
    [anon_sym_GT_GT_GT] = ACTIONS(152),
    [anon_sym_BANG_EQ] = ACTIONS(150),
    [anon_sym_LT_EQ] = ACTIONS(152),
    [anon_sym_GT_EQ] = ACTIONS(152),
    [anon_sym_DASH] = ACTIONS(150),
    [anon_sym_LT] = ACTIONS(150),
  },
  [121] = {
    [sym_arguments] = STATE(128),
    [anon_sym_SLASH] = ACTIONS(419),
    [anon_sym_AT_AT] = ACTIONS(178),
    [anon_sym_GT_GT] = ACTIONS(419),
    [anon_sym_LT_LT] = ACTIONS(421),
    [anon_sym_RBRACE] = ACTIONS(178),
    [anon_sym_EQ_EQ] = ACTIONS(423),
    [anon_sym_GT] = ACTIONS(423),
    [anon_sym_STAR] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(425),
    [anon_sym_PERCENT] = ACTIONS(421),
    [anon_sym_AMP_AMP] = ACTIONS(427),
    [anon_sym_AMP] = ACTIONS(429),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(431),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(431),
    [anon_sym_PLUS] = ACTIONS(433),
    [anon_sym_STAR_STAR] = ACTIONS(435),
    [anon_sym_AT] = ACTIONS(180),
    [aux_sym_identifier_token1] = ACTIONS(180),
    [anon_sym_LPAREN] = ACTIONS(437),
    [anon_sym_PIPE_PIPE] = ACTIONS(439),
    [anon_sym_CARET] = ACTIONS(439),
    [anon_sym_GT_GT_GT] = ACTIONS(421),
    [anon_sym_BANG_EQ] = ACTIONS(423),
    [anon_sym_LT_EQ] = ACTIONS(431),
    [anon_sym_GT_EQ] = ACTIONS(431),
    [anon_sym_DASH] = ACTIONS(441),
    [anon_sym_LT] = ACTIONS(423),
  },
  [122] = {
    [sym_member_expression] = STATE(118),
    [sym_array] = STATE(132),
    [sym__constructable_expression] = STATE(132),
    [sym_binary_expression] = STATE(132),
    [sym_attribute] = STATE(132),
    [sym_block_attribute_declaration] = STATE(132),
    [sym__expression] = STATE(132),
    [sym_identifier] = STATE(117),
    [sym_assignment_expression] = STATE(132),
    [sym_type_expression] = STATE(132),
    [sym_call_expression] = STATE(132),
    [sym_number] = ACTIONS(443),
    [sym_null] = ACTIONS(445),
    [anon_sym_AT_AT] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(443),
    [sym_false] = ACTIONS(445),
    [anon_sym_AT] = ACTIONS(310),
    [aux_sym_identifier_token1] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(407),
    [sym_true] = ACTIONS(445),
  },
  [123] = {
    [sym_member_expression] = STATE(118),
    [sym_array] = STATE(133),
    [sym__constructable_expression] = STATE(133),
    [sym_binary_expression] = STATE(133),
    [sym_attribute] = STATE(133),
    [sym_block_attribute_declaration] = STATE(133),
    [sym__expression] = STATE(133),
    [sym_identifier] = STATE(117),
    [sym_assignment_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_call_expression] = STATE(133),
    [sym_number] = ACTIONS(447),
    [sym_null] = ACTIONS(449),
    [anon_sym_AT_AT] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(447),
    [sym_false] = ACTIONS(449),
    [anon_sym_AT] = ACTIONS(310),
    [aux_sym_identifier_token1] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(407),
    [sym_true] = ACTIONS(449),
  },
  [124] = {
    [sym_member_expression] = STATE(118),
    [sym_array] = STATE(134),
    [sym__constructable_expression] = STATE(134),
    [sym_binary_expression] = STATE(134),
    [sym_attribute] = STATE(134),
    [sym_block_attribute_declaration] = STATE(134),
    [sym__expression] = STATE(134),
    [sym_identifier] = STATE(117),
    [sym_assignment_expression] = STATE(134),
    [sym_type_expression] = STATE(134),
    [sym_call_expression] = STATE(134),
    [sym_number] = ACTIONS(451),
    [sym_null] = ACTIONS(453),
    [anon_sym_AT_AT] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(451),
    [sym_false] = ACTIONS(453),
    [anon_sym_AT] = ACTIONS(310),
    [aux_sym_identifier_token1] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(407),
    [sym_true] = ACTIONS(453),
  },
  [125] = {
    [sym_member_expression] = STATE(118),
    [sym_array] = STATE(135),
    [sym__constructable_expression] = STATE(135),
    [sym_binary_expression] = STATE(135),
    [sym_attribute] = STATE(135),
    [sym_block_attribute_declaration] = STATE(135),
    [sym__expression] = STATE(135),
    [sym_identifier] = STATE(117),
    [sym_assignment_expression] = STATE(135),
    [sym_type_expression] = STATE(135),
    [sym_call_expression] = STATE(135),
    [sym_number] = ACTIONS(455),
    [sym_null] = ACTIONS(457),
    [anon_sym_AT_AT] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(455),
    [sym_false] = ACTIONS(457),
    [anon_sym_AT] = ACTIONS(310),
    [aux_sym_identifier_token1] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(407),
    [sym_true] = ACTIONS(457),
  },
  [126] = {
    [sym_member_expression] = STATE(118),
    [sym_array] = STATE(136),
    [sym__constructable_expression] = STATE(136),
    [sym_binary_expression] = STATE(136),
    [sym_attribute] = STATE(136),
    [sym_block_attribute_declaration] = STATE(136),
    [sym__expression] = STATE(136),
    [sym_identifier] = STATE(117),
    [sym_assignment_expression] = STATE(136),
    [sym_type_expression] = STATE(136),
    [sym_call_expression] = STATE(136),
    [sym_number] = ACTIONS(459),
    [sym_null] = ACTIONS(461),
    [anon_sym_AT_AT] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(459),
    [sym_false] = ACTIONS(461),
    [anon_sym_AT] = ACTIONS(310),
    [aux_sym_identifier_token1] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(407),
    [sym_true] = ACTIONS(461),
  },
  [127] = {
    [sym_member_expression] = STATE(118),
    [sym_array] = STATE(138),
    [sym__constructable_expression] = STATE(138),
    [sym_binary_expression] = STATE(138),
    [sym_attribute] = STATE(138),
    [sym_block_attribute_declaration] = STATE(138),
    [sym__expression] = STATE(138),
    [sym_identifier] = STATE(117),
    [sym_assignment_expression] = STATE(138),
    [sym_type_expression] = STATE(138),
    [sym_call_expression] = STATE(138),
    [sym_number] = ACTIONS(463),
    [sym_null] = ACTIONS(465),
    [anon_sym_AT_AT] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(463),
    [sym_false] = ACTIONS(465),
    [anon_sym_AT] = ACTIONS(310),
    [aux_sym_identifier_token1] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(407),
    [sym_true] = ACTIONS(465),
  },
  [128] = {
    [anon_sym_SLASH] = ACTIONS(212),
    [anon_sym_AT_AT] = ACTIONS(214),
    [anon_sym_GT_GT] = ACTIONS(212),
    [anon_sym_LT_LT] = ACTIONS(214),
    [anon_sym_RBRACE] = ACTIONS(214),
    [anon_sym_EQ_EQ] = ACTIONS(212),
    [anon_sym_GT] = ACTIONS(212),
    [anon_sym_STAR] = ACTIONS(212),
    [anon_sym_PIPE] = ACTIONS(212),
    [anon_sym_PERCENT] = ACTIONS(214),
    [anon_sym_AMP_AMP] = ACTIONS(214),
    [anon_sym_AMP] = ACTIONS(212),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(214),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(214),
    [anon_sym_STAR_STAR] = ACTIONS(214),
    [anon_sym_AT] = ACTIONS(212),
    [aux_sym_identifier_token1] = ACTIONS(212),
    [anon_sym_LPAREN] = ACTIONS(214),
    [anon_sym_PIPE_PIPE] = ACTIONS(214),
    [anon_sym_CARET] = ACTIONS(214),
    [anon_sym_GT_GT_GT] = ACTIONS(214),
    [anon_sym_BANG_EQ] = ACTIONS(212),
    [anon_sym_LT_EQ] = ACTIONS(214),
    [anon_sym_GT_EQ] = ACTIONS(214),
    [anon_sym_DASH] = ACTIONS(212),
    [anon_sym_LT] = ACTIONS(212),
  },
  [129] = {
    [sym_member_expression] = STATE(118),
    [sym_array] = STATE(139),
    [sym__constructable_expression] = STATE(139),
    [sym_binary_expression] = STATE(139),
    [sym_attribute] = STATE(139),
    [sym_block_attribute_declaration] = STATE(139),
    [sym__expression] = STATE(139),
    [sym_identifier] = STATE(117),
    [sym_assignment_expression] = STATE(139),
    [sym_type_expression] = STATE(139),
    [sym_call_expression] = STATE(139),
    [sym_number] = ACTIONS(467),
    [sym_null] = ACTIONS(469),
    [anon_sym_AT_AT] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(467),
    [sym_false] = ACTIONS(469),
    [anon_sym_AT] = ACTIONS(310),
    [aux_sym_identifier_token1] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(407),
    [sym_true] = ACTIONS(469),
  },
  [130] = {
    [sym_member_expression] = STATE(118),
    [sym_array] = STATE(140),
    [sym__constructable_expression] = STATE(140),
    [sym_binary_expression] = STATE(140),
    [sym_attribute] = STATE(140),
    [sym_block_attribute_declaration] = STATE(140),
    [sym__expression] = STATE(140),
    [sym_identifier] = STATE(117),
    [sym_assignment_expression] = STATE(140),
    [sym_type_expression] = STATE(140),
    [sym_call_expression] = STATE(140),
    [sym_number] = ACTIONS(471),
    [sym_null] = ACTIONS(473),
    [anon_sym_AT_AT] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(471),
    [sym_false] = ACTIONS(473),
    [anon_sym_AT] = ACTIONS(310),
    [aux_sym_identifier_token1] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(407),
    [sym_true] = ACTIONS(473),
  },
  [131] = {
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_AT_AT] = ACTIONS(268),
    [anon_sym_GT_GT] = ACTIONS(266),
    [anon_sym_LT_LT] = ACTIONS(268),
    [anon_sym_RBRACE] = ACTIONS(268),
    [anon_sym_EQ_EQ] = ACTIONS(266),
    [anon_sym_GT] = ACTIONS(266),
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_PIPE] = ACTIONS(266),
    [anon_sym_PERCENT] = ACTIONS(268),
    [anon_sym_AMP_AMP] = ACTIONS(268),
    [anon_sym_AMP] = ACTIONS(266),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(268),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(268),
    [anon_sym_PLUS] = ACTIONS(268),
    [anon_sym_STAR_STAR] = ACTIONS(268),
    [anon_sym_AT] = ACTIONS(266),
    [aux_sym_identifier_token1] = ACTIONS(266),
    [anon_sym_LPAREN] = ACTIONS(268),
    [anon_sym_PIPE_PIPE] = ACTIONS(268),
    [anon_sym_CARET] = ACTIONS(268),
    [anon_sym_GT_GT_GT] = ACTIONS(268),
    [anon_sym_BANG_EQ] = ACTIONS(266),
    [anon_sym_LT_EQ] = ACTIONS(268),
    [anon_sym_GT_EQ] = ACTIONS(268),
    [anon_sym_DASH] = ACTIONS(266),
    [anon_sym_LT] = ACTIONS(266),
  },
  [132] = {
    [sym_arguments] = STATE(128),
    [anon_sym_SLASH] = ACTIONS(275),
    [anon_sym_AT_AT] = ACTIONS(277),
    [anon_sym_GT_GT] = ACTIONS(275),
    [anon_sym_LT_LT] = ACTIONS(277),
    [anon_sym_RBRACE] = ACTIONS(277),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [anon_sym_GT] = ACTIONS(275),
    [anon_sym_STAR] = ACTIONS(275),
    [anon_sym_PIPE] = ACTIONS(275),
    [anon_sym_PERCENT] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_AMP] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(277),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_STAR_STAR] = ACTIONS(435),
    [anon_sym_AT] = ACTIONS(275),
    [aux_sym_identifier_token1] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(437),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym_GT_GT_GT] = ACTIONS(277),
    [anon_sym_BANG_EQ] = ACTIONS(275),
    [anon_sym_LT_EQ] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(275),
    [anon_sym_LT] = ACTIONS(275),
  },
  [133] = {
    [sym_arguments] = STATE(128),
    [anon_sym_SLASH] = ACTIONS(419),
    [anon_sym_AT_AT] = ACTIONS(277),
    [anon_sym_GT_GT] = ACTIONS(419),
    [anon_sym_LT_LT] = ACTIONS(421),
    [anon_sym_RBRACE] = ACTIONS(277),
    [anon_sym_EQ_EQ] = ACTIONS(423),
    [anon_sym_GT] = ACTIONS(423),
    [anon_sym_STAR] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(275),
    [anon_sym_PERCENT] = ACTIONS(421),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_AMP] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(431),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(431),
    [anon_sym_PLUS] = ACTIONS(433),
    [anon_sym_STAR_STAR] = ACTIONS(435),
    [anon_sym_AT] = ACTIONS(275),
    [aux_sym_identifier_token1] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(437),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym_GT_GT_GT] = ACTIONS(421),
    [anon_sym_BANG_EQ] = ACTIONS(423),
    [anon_sym_LT_EQ] = ACTIONS(431),
    [anon_sym_GT_EQ] = ACTIONS(431),
    [anon_sym_DASH] = ACTIONS(441),
    [anon_sym_LT] = ACTIONS(423),
  },
  [134] = {
    [sym_arguments] = STATE(128),
    [anon_sym_SLASH] = ACTIONS(419),
    [anon_sym_AT_AT] = ACTIONS(277),
    [anon_sym_GT_GT] = ACTIONS(419),
    [anon_sym_LT_LT] = ACTIONS(421),
    [anon_sym_RBRACE] = ACTIONS(277),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [anon_sym_GT] = ACTIONS(275),
    [anon_sym_STAR] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(275),
    [anon_sym_PERCENT] = ACTIONS(421),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_AMP] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(277),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(433),
    [anon_sym_STAR_STAR] = ACTIONS(435),
    [anon_sym_AT] = ACTIONS(275),
    [aux_sym_identifier_token1] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(437),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym_GT_GT_GT] = ACTIONS(421),
    [anon_sym_BANG_EQ] = ACTIONS(275),
    [anon_sym_LT_EQ] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(441),
    [anon_sym_LT] = ACTIONS(275),
  },
  [135] = {
    [sym_arguments] = STATE(128),
    [anon_sym_SLASH] = ACTIONS(419),
    [anon_sym_AT_AT] = ACTIONS(277),
    [anon_sym_GT_GT] = ACTIONS(419),
    [anon_sym_LT_LT] = ACTIONS(421),
    [anon_sym_RBRACE] = ACTIONS(277),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [anon_sym_GT] = ACTIONS(275),
    [anon_sym_STAR] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(275),
    [anon_sym_PERCENT] = ACTIONS(421),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_AMP] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(277),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_STAR_STAR] = ACTIONS(435),
    [anon_sym_AT] = ACTIONS(275),
    [aux_sym_identifier_token1] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(437),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym_GT_GT_GT] = ACTIONS(421),
    [anon_sym_BANG_EQ] = ACTIONS(275),
    [anon_sym_LT_EQ] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(275),
    [anon_sym_LT] = ACTIONS(275),
  },
  [136] = {
    [sym_arguments] = STATE(128),
    [anon_sym_SLASH] = ACTIONS(275),
    [anon_sym_AT_AT] = ACTIONS(277),
    [anon_sym_GT_GT] = ACTIONS(275),
    [anon_sym_LT_LT] = ACTIONS(277),
    [anon_sym_RBRACE] = ACTIONS(277),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [anon_sym_GT] = ACTIONS(275),
    [anon_sym_STAR] = ACTIONS(275),
    [anon_sym_PIPE] = ACTIONS(275),
    [anon_sym_PERCENT] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_AMP] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(277),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_STAR_STAR] = ACTIONS(277),
    [anon_sym_AT] = ACTIONS(275),
    [aux_sym_identifier_token1] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(437),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym_GT_GT_GT] = ACTIONS(277),
    [anon_sym_BANG_EQ] = ACTIONS(275),
    [anon_sym_LT_EQ] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(275),
    [anon_sym_LT] = ACTIONS(275),
  },
  [137] = {
    [anon_sym_SLASH] = ACTIONS(279),
    [anon_sym_AT_AT] = ACTIONS(281),
    [anon_sym_GT_GT] = ACTIONS(279),
    [anon_sym_LT_LT] = ACTIONS(281),
    [anon_sym_RBRACE] = ACTIONS(281),
    [anon_sym_EQ_EQ] = ACTIONS(279),
    [anon_sym_GT] = ACTIONS(279),
    [anon_sym_STAR] = ACTIONS(279),
    [anon_sym_PIPE] = ACTIONS(279),
    [anon_sym_PERCENT] = ACTIONS(281),
    [anon_sym_AMP_AMP] = ACTIONS(281),
    [anon_sym_AMP] = ACTIONS(279),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(281),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(281),
    [anon_sym_STAR_STAR] = ACTIONS(281),
    [anon_sym_AT] = ACTIONS(279),
    [aux_sym_identifier_token1] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(281),
    [anon_sym_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_CARET] = ACTIONS(281),
    [anon_sym_GT_GT_GT] = ACTIONS(281),
    [anon_sym_BANG_EQ] = ACTIONS(279),
    [anon_sym_LT_EQ] = ACTIONS(281),
    [anon_sym_GT_EQ] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(279),
    [anon_sym_LT] = ACTIONS(279),
  },
  [138] = {
    [sym_arguments] = STATE(128),
    [anon_sym_SLASH] = ACTIONS(419),
    [anon_sym_AT_AT] = ACTIONS(277),
    [anon_sym_GT_GT] = ACTIONS(419),
    [anon_sym_LT_LT] = ACTIONS(421),
    [anon_sym_RBRACE] = ACTIONS(277),
    [anon_sym_EQ_EQ] = ACTIONS(423),
    [anon_sym_GT] = ACTIONS(423),
    [anon_sym_STAR] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(275),
    [anon_sym_PERCENT] = ACTIONS(421),
    [anon_sym_AMP_AMP] = ACTIONS(427),
    [anon_sym_AMP] = ACTIONS(429),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(431),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(431),
    [anon_sym_PLUS] = ACTIONS(433),
    [anon_sym_STAR_STAR] = ACTIONS(435),
    [anon_sym_AT] = ACTIONS(275),
    [aux_sym_identifier_token1] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(437),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym_GT_GT_GT] = ACTIONS(421),
    [anon_sym_BANG_EQ] = ACTIONS(423),
    [anon_sym_LT_EQ] = ACTIONS(431),
    [anon_sym_GT_EQ] = ACTIONS(431),
    [anon_sym_DASH] = ACTIONS(441),
    [anon_sym_LT] = ACTIONS(423),
  },
  [139] = {
    [sym_arguments] = STATE(128),
    [anon_sym_SLASH] = ACTIONS(419),
    [anon_sym_AT_AT] = ACTIONS(285),
    [anon_sym_GT_GT] = ACTIONS(419),
    [anon_sym_LT_LT] = ACTIONS(421),
    [anon_sym_RBRACE] = ACTIONS(285),
    [anon_sym_EQ_EQ] = ACTIONS(423),
    [anon_sym_GT] = ACTIONS(423),
    [anon_sym_STAR] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(425),
    [anon_sym_PERCENT] = ACTIONS(421),
    [anon_sym_AMP_AMP] = ACTIONS(427),
    [anon_sym_AMP] = ACTIONS(429),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(431),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(431),
    [anon_sym_PLUS] = ACTIONS(433),
    [anon_sym_STAR_STAR] = ACTIONS(435),
    [anon_sym_AT] = ACTIONS(287),
    [aux_sym_identifier_token1] = ACTIONS(287),
    [anon_sym_LPAREN] = ACTIONS(437),
    [anon_sym_PIPE_PIPE] = ACTIONS(439),
    [anon_sym_CARET] = ACTIONS(439),
    [anon_sym_GT_GT_GT] = ACTIONS(421),
    [anon_sym_BANG_EQ] = ACTIONS(423),
    [anon_sym_LT_EQ] = ACTIONS(431),
    [anon_sym_GT_EQ] = ACTIONS(431),
    [anon_sym_DASH] = ACTIONS(441),
    [anon_sym_LT] = ACTIONS(423),
  },
  [140] = {
    [sym_arguments] = STATE(128),
    [anon_sym_SLASH] = ACTIONS(419),
    [anon_sym_AT_AT] = ACTIONS(289),
    [anon_sym_GT_GT] = ACTIONS(419),
    [anon_sym_LT_LT] = ACTIONS(421),
    [anon_sym_RBRACE] = ACTIONS(289),
    [anon_sym_EQ_EQ] = ACTIONS(423),
    [anon_sym_GT] = ACTIONS(423),
    [anon_sym_STAR] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(425),
    [anon_sym_PERCENT] = ACTIONS(421),
    [anon_sym_AMP_AMP] = ACTIONS(427),
    [anon_sym_AMP] = ACTIONS(429),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(431),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(431),
    [anon_sym_PLUS] = ACTIONS(433),
    [anon_sym_STAR_STAR] = ACTIONS(435),
    [anon_sym_AT] = ACTIONS(291),
    [aux_sym_identifier_token1] = ACTIONS(291),
    [anon_sym_LPAREN] = ACTIONS(437),
    [anon_sym_PIPE_PIPE] = ACTIONS(439),
    [anon_sym_CARET] = ACTIONS(439),
    [anon_sym_GT_GT_GT] = ACTIONS(421),
    [anon_sym_BANG_EQ] = ACTIONS(423),
    [anon_sym_LT_EQ] = ACTIONS(431),
    [anon_sym_GT_EQ] = ACTIONS(431),
    [anon_sym_DASH] = ACTIONS(441),
    [anon_sym_LT] = ACTIONS(423),
  },
  [141] = {
    [anon_sym_SLASH] = ACTIONS(293),
    [anon_sym_AT_AT] = ACTIONS(295),
    [anon_sym_GT_GT] = ACTIONS(293),
    [anon_sym_LT_LT] = ACTIONS(295),
    [anon_sym_RBRACE] = ACTIONS(295),
    [anon_sym_EQ_EQ] = ACTIONS(293),
    [anon_sym_GT] = ACTIONS(293),
    [anon_sym_STAR] = ACTIONS(293),
    [anon_sym_PIPE] = ACTIONS(293),
    [anon_sym_PERCENT] = ACTIONS(295),
    [anon_sym_AMP_AMP] = ACTIONS(295),
    [anon_sym_AMP] = ACTIONS(293),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(295),
    [anon_sym_DOT] = ACTIONS(295),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(295),
    [anon_sym_PLUS] = ACTIONS(295),
    [anon_sym_STAR_STAR] = ACTIONS(295),
    [anon_sym_AT] = ACTIONS(293),
    [aux_sym_identifier_token1] = ACTIONS(293),
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_CARET] = ACTIONS(295),
    [anon_sym_GT_GT_GT] = ACTIONS(295),
    [anon_sym_BANG_EQ] = ACTIONS(293),
    [anon_sym_LT_EQ] = ACTIONS(295),
    [anon_sym_GT_EQ] = ACTIONS(295),
    [anon_sym_DASH] = ACTIONS(293),
    [anon_sym_LT] = ACTIONS(293),
  },
  [142] = {
    [anon_sym_SLASH] = ACTIONS(322),
    [anon_sym_AT_AT] = ACTIONS(324),
    [anon_sym_GT_GT] = ACTIONS(322),
    [anon_sym_LT_LT] = ACTIONS(324),
    [anon_sym_RBRACE] = ACTIONS(324),
    [anon_sym_EQ_EQ] = ACTIONS(322),
    [anon_sym_GT] = ACTIONS(322),
    [anon_sym_STAR] = ACTIONS(322),
    [anon_sym_PIPE] = ACTIONS(322),
    [anon_sym_PERCENT] = ACTIONS(324),
    [anon_sym_AMP_AMP] = ACTIONS(324),
    [anon_sym_AMP] = ACTIONS(322),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(324),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(324),
    [anon_sym_PLUS] = ACTIONS(324),
    [anon_sym_STAR_STAR] = ACTIONS(324),
    [anon_sym_AT] = ACTIONS(322),
    [aux_sym_identifier_token1] = ACTIONS(322),
    [anon_sym_LPAREN] = ACTIONS(324),
    [anon_sym_PIPE_PIPE] = ACTIONS(324),
    [anon_sym_CARET] = ACTIONS(324),
    [anon_sym_GT_GT_GT] = ACTIONS(324),
    [anon_sym_BANG_EQ] = ACTIONS(322),
    [anon_sym_LT_EQ] = ACTIONS(324),
    [anon_sym_GT_EQ] = ACTIONS(324),
    [anon_sym_DASH] = ACTIONS(322),
    [anon_sym_LT] = ACTIONS(322),
  },
  [143] = {
    [anon_sym_SLASH] = ACTIONS(326),
    [anon_sym_AT_AT] = ACTIONS(328),
    [anon_sym_GT_GT] = ACTIONS(326),
    [anon_sym_LT_LT] = ACTIONS(328),
    [anon_sym_RBRACE] = ACTIONS(328),
    [anon_sym_EQ_EQ] = ACTIONS(326),
    [anon_sym_GT] = ACTIONS(326),
    [anon_sym_STAR] = ACTIONS(326),
    [anon_sym_PIPE] = ACTIONS(326),
    [anon_sym_PERCENT] = ACTIONS(328),
    [anon_sym_AMP_AMP] = ACTIONS(328),
    [anon_sym_AMP] = ACTIONS(326),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(328),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(328),
    [anon_sym_PLUS] = ACTIONS(328),
    [anon_sym_STAR_STAR] = ACTIONS(328),
    [anon_sym_AT] = ACTIONS(326),
    [aux_sym_identifier_token1] = ACTIONS(326),
    [anon_sym_LPAREN] = ACTIONS(328),
    [anon_sym_PIPE_PIPE] = ACTIONS(328),
    [anon_sym_CARET] = ACTIONS(328),
    [anon_sym_GT_GT_GT] = ACTIONS(328),
    [anon_sym_BANG_EQ] = ACTIONS(326),
    [anon_sym_LT_EQ] = ACTIONS(328),
    [anon_sym_GT_EQ] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(326),
    [anon_sym_LT] = ACTIONS(326),
  },
  [144] = {
    [anon_sym_SLASH] = ACTIONS(340),
    [anon_sym_AT_AT] = ACTIONS(342),
    [anon_sym_GT_GT] = ACTIONS(340),
    [anon_sym_LT_LT] = ACTIONS(342),
    [anon_sym_RBRACE] = ACTIONS(342),
    [anon_sym_EQ_EQ] = ACTIONS(340),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(340),
    [anon_sym_PIPE] = ACTIONS(340),
    [anon_sym_PERCENT] = ACTIONS(342),
    [anon_sym_AMP_AMP] = ACTIONS(342),
    [anon_sym_AMP] = ACTIONS(340),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(342),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(342),
    [anon_sym_PLUS] = ACTIONS(342),
    [anon_sym_STAR_STAR] = ACTIONS(342),
    [anon_sym_AT] = ACTIONS(340),
    [aux_sym_identifier_token1] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_PIPE_PIPE] = ACTIONS(342),
    [anon_sym_CARET] = ACTIONS(342),
    [anon_sym_GT_GT_GT] = ACTIONS(342),
    [anon_sym_BANG_EQ] = ACTIONS(340),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_LT] = ACTIONS(340),
  },
  [145] = {
    [anon_sym_EQ] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [aux_sym_identifier_token1] = ACTIONS(37),
  },
  [146] = {
    [aux_sym_identifier_token1] = ACTIONS(152),
    [anon_sym_AT_AT] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(150),
    [anon_sym_RBRACE] = ACTIONS(152),
  },
  [147] = {
    [aux_sym_identifier_token1] = ACTIONS(268),
    [anon_sym_AT_AT] = ACTIONS(268),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(266),
    [anon_sym_RBRACE] = ACTIONS(268),
  },
  [148] = {
    [aux_sym_identifier_token1] = ACTIONS(324),
    [anon_sym_AT_AT] = ACTIONS(324),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(322),
    [anon_sym_RBRACE] = ACTIONS(324),
  },
  [149] = {
    [anon_sym_SLASH] = ACTIONS(35),
    [anon_sym_AT_AT] = ACTIONS(37),
    [anon_sym_GT_GT] = ACTIONS(35),
    [anon_sym_EQ] = ACTIONS(35),
    [anon_sym_LT_LT] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_EQ_EQ] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_PERCENT] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(37),
    [anon_sym_AMP_AMP] = ACTIONS(37),
    [anon_sym_AMP] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(37),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_STAR_STAR] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(35),
    [aux_sym_identifier_token1] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_PIPE_PIPE] = ACTIONS(37),
    [anon_sym_CARET] = ACTIONS(37),
    [anon_sym_GT_GT_GT] = ACTIONS(37),
    [anon_sym_BANG_EQ] = ACTIONS(35),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [anon_sym_GT_EQ] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_LT] = ACTIONS(35),
  },
  [150] = {
    [sym_member_expression] = STATE(86),
    [sym_array] = STATE(151),
    [aux_sym_arguments_repeat1] = STATE(152),
    [sym__constructable_expression] = STATE(151),
    [sym_binary_expression] = STATE(151),
    [sym_attribute] = STATE(151),
    [sym_block_attribute_declaration] = STATE(151),
    [sym__expression] = STATE(151),
    [sym_identifier] = STATE(85),
    [sym_assignment_expression] = STATE(151),
    [sym_type_expression] = STATE(151),
    [sym_call_expression] = STATE(151),
    [sym_number] = ACTIONS(475),
    [sym_null] = ACTIONS(477),
    [anon_sym_AT_AT] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(479),
    [sym_string] = ACTIONS(475),
    [sym_false] = ACTIONS(477),
    [anon_sym_AT] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(55),
    [sym_true] = ACTIONS(477),
  },
  [151] = {
    [aux_sym_arguments_repeat1] = STATE(154),
    [sym_arguments] = STATE(96),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_GT_GT] = ACTIONS(154),
    [anon_sym_LT_LT] = ACTIONS(168),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(168),
    [anon_sym_AMP_AMP] = ACTIONS(156),
    [anon_sym_AMP] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(160),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(160),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_STAR_STAR] = ACTIONS(164),
    [anon_sym_RBRACK] = ACTIONS(481),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_PIPE_PIPE] = ACTIONS(176),
    [anon_sym_CARET] = ACTIONS(176),
    [anon_sym_GT_GT_GT] = ACTIONS(168),
    [anon_sym_BANG_EQ] = ACTIONS(172),
    [anon_sym_LT_EQ] = ACTIONS(160),
    [anon_sym_GT_EQ] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym_LT] = ACTIONS(172),
  },
  [152] = {
    [aux_sym_arguments_repeat1] = STATE(55),
    [anon_sym_RBRACK] = ACTIONS(481),
    [anon_sym_COMMA] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
  },
  [153] = {
    [sym_member_expression] = STATE(86),
    [sym_array] = STATE(155),
    [aux_sym_arguments_repeat1] = STATE(156),
    [sym__constructable_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym_attribute] = STATE(155),
    [sym_block_attribute_declaration] = STATE(155),
    [sym__expression] = STATE(155),
    [sym_identifier] = STATE(85),
    [sym_assignment_expression] = STATE(155),
    [sym_type_expression] = STATE(155),
    [sym_call_expression] = STATE(155),
    [sym_number] = ACTIONS(483),
    [sym_null] = ACTIONS(485),
    [anon_sym_AT_AT] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(483),
    [sym_false] = ACTIONS(485),
    [anon_sym_AT] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(55),
    [sym_true] = ACTIONS(485),
    [anon_sym_RPAREN] = ACTIONS(487),
  },
  [154] = {
    [aux_sym_arguments_repeat1] = STATE(55),
    [anon_sym_RBRACK] = ACTIONS(489),
    [anon_sym_COMMA] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
  },
  [155] = {
    [aux_sym_arguments_repeat1] = STATE(157),
    [sym_arguments] = STATE(96),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_GT_GT] = ACTIONS(154),
    [anon_sym_LT_LT] = ACTIONS(168),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(491),
    [anon_sym_AMP_AMP] = ACTIONS(156),
    [anon_sym_AMP] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(160),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(160),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_STAR_STAR] = ACTIONS(164),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_PIPE_PIPE] = ACTIONS(176),
    [anon_sym_CARET] = ACTIONS(176),
    [anon_sym_GT_GT_GT] = ACTIONS(168),
    [anon_sym_BANG_EQ] = ACTIONS(172),
    [anon_sym_LT_EQ] = ACTIONS(160),
    [anon_sym_GT_EQ] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym_LT] = ACTIONS(172),
  },
  [156] = {
    [aux_sym_arguments_repeat1] = STATE(55),
    [anon_sym_RPAREN] = ACTIONS(491),
    [anon_sym_COMMA] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
  },
  [157] = {
    [aux_sym_arguments_repeat1] = STATE(55),
    [anon_sym_RPAREN] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
  },
  [158] = {
    [sym_identifier] = STATE(141),
    [sym_comment] = ACTIONS(3),
    [aux_sym_identifier_token1] = ACTIONS(495),
  },
  [159] = {
    [sym_member_expression] = STATE(86),
    [sym_array] = STATE(160),
    [aux_sym_arguments_repeat1] = STATE(161),
    [sym__constructable_expression] = STATE(160),
    [sym_binary_expression] = STATE(160),
    [sym_attribute] = STATE(160),
    [sym_block_attribute_declaration] = STATE(160),
    [sym__expression] = STATE(160),
    [sym_identifier] = STATE(85),
    [sym_assignment_expression] = STATE(160),
    [sym_type_expression] = STATE(160),
    [sym_call_expression] = STATE(160),
    [sym_number] = ACTIONS(497),
    [sym_null] = ACTIONS(499),
    [anon_sym_AT_AT] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(501),
    [sym_string] = ACTIONS(497),
    [sym_false] = ACTIONS(499),
    [anon_sym_AT] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(55),
    [sym_true] = ACTIONS(499),
  },
  [160] = {
    [aux_sym_arguments_repeat1] = STATE(163),
    [sym_arguments] = STATE(96),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_GT_GT] = ACTIONS(154),
    [anon_sym_LT_LT] = ACTIONS(168),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(168),
    [anon_sym_AMP_AMP] = ACTIONS(156),
    [anon_sym_AMP] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(160),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(160),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_STAR_STAR] = ACTIONS(164),
    [anon_sym_RBRACK] = ACTIONS(503),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_PIPE_PIPE] = ACTIONS(176),
    [anon_sym_CARET] = ACTIONS(176),
    [anon_sym_GT_GT_GT] = ACTIONS(168),
    [anon_sym_BANG_EQ] = ACTIONS(172),
    [anon_sym_LT_EQ] = ACTIONS(160),
    [anon_sym_GT_EQ] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym_LT] = ACTIONS(172),
  },
  [161] = {
    [aux_sym_arguments_repeat1] = STATE(55),
    [anon_sym_RBRACK] = ACTIONS(503),
    [anon_sym_COMMA] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
  },
  [162] = {
    [sym_member_expression] = STATE(86),
    [sym_array] = STATE(164),
    [aux_sym_arguments_repeat1] = STATE(165),
    [sym__constructable_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_attribute] = STATE(164),
    [sym_block_attribute_declaration] = STATE(164),
    [sym__expression] = STATE(164),
    [sym_identifier] = STATE(85),
    [sym_assignment_expression] = STATE(164),
    [sym_type_expression] = STATE(164),
    [sym_call_expression] = STATE(164),
    [sym_number] = ACTIONS(505),
    [sym_null] = ACTIONS(507),
    [anon_sym_AT_AT] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(505),
    [sym_false] = ACTIONS(507),
    [anon_sym_AT] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(55),
    [sym_true] = ACTIONS(507),
    [anon_sym_RPAREN] = ACTIONS(509),
  },
  [163] = {
    [aux_sym_arguments_repeat1] = STATE(55),
    [anon_sym_RBRACK] = ACTIONS(511),
    [anon_sym_COMMA] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
  },
  [164] = {
    [aux_sym_arguments_repeat1] = STATE(166),
    [sym_arguments] = STATE(96),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_GT_GT] = ACTIONS(154),
    [anon_sym_LT_LT] = ACTIONS(168),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(513),
    [anon_sym_AMP_AMP] = ACTIONS(156),
    [anon_sym_AMP] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(160),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(160),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_STAR_STAR] = ACTIONS(164),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_PIPE_PIPE] = ACTIONS(176),
    [anon_sym_CARET] = ACTIONS(176),
    [anon_sym_GT_GT_GT] = ACTIONS(168),
    [anon_sym_BANG_EQ] = ACTIONS(172),
    [anon_sym_LT_EQ] = ACTIONS(160),
    [anon_sym_GT_EQ] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym_LT] = ACTIONS(172),
  },
  [165] = {
    [aux_sym_arguments_repeat1] = STATE(55),
    [anon_sym_RPAREN] = ACTIONS(513),
    [anon_sym_COMMA] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
  },
  [166] = {
    [aux_sym_arguments_repeat1] = STATE(55),
    [anon_sym_RPAREN] = ACTIONS(515),
    [anon_sym_COMMA] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
  },
  [167] = {
    [sym_binary_expression] = STATE(168),
    [sym_attribute] = STATE(168),
    [sym_block_attribute_declaration] = STATE(168),
    [sym__expression] = STATE(168),
    [sym_identifier] = STATE(85),
    [sym_member_expression] = STATE(86),
    [sym_array] = STATE(168),
    [sym_type_expression] = STATE(168),
    [sym_assignment_expression] = STATE(168),
    [sym_call_expression] = STATE(168),
    [aux_sym_arguments_repeat1] = STATE(169),
    [sym__constructable_expression] = STATE(168),
    [sym_number] = ACTIONS(517),
    [sym_null] = ACTIONS(519),
    [anon_sym_AT_AT] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [sym_comment] = ACTIONS(3),
    [sym_true] = ACTIONS(519),
    [anon_sym_RBRACK] = ACTIONS(521),
    [sym_string] = ACTIONS(517),
    [sym_false] = ACTIONS(519),
    [anon_sym_AT] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(61),
  },
  [168] = {
    [aux_sym_arguments_repeat1] = STATE(170),
    [sym_arguments] = STATE(96),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_AMP_AMP] = ACTIONS(156),
    [anon_sym_AMP] = ACTIONS(158),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(160),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(160),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_STAR_STAR] = ACTIONS(164),
    [anon_sym_GT_GT] = ACTIONS(154),
    [anon_sym_RBRACK] = ACTIONS(523),
    [anon_sym_LT_LT] = ACTIONS(168),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(168),
    [anon_sym_PIPE_PIPE] = ACTIONS(176),
    [anon_sym_CARET] = ACTIONS(176),
    [anon_sym_GT_GT_GT] = ACTIONS(168),
    [anon_sym_BANG_EQ] = ACTIONS(172),
    [anon_sym_LT_EQ] = ACTIONS(160),
    [anon_sym_GT_EQ] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym_LT] = ACTIONS(172),
  },
  [169] = {
    [aux_sym_arguments_repeat1] = STATE(55),
    [anon_sym_COMMA] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(523),
  },
  [170] = {
    [aux_sym_arguments_repeat1] = STATE(55),
    [anon_sym_COMMA] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(525),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [11] = {.count = 1, .reusable = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = true}, SHIFT(6),
  [17] = {.count = 1, .reusable = true}, SHIFT(9),
  [19] = {.count = 1, .reusable = true}, SHIFT(15),
  [21] = {.count = 1, .reusable = false}, SHIFT(15),
  [23] = {.count = 1, .reusable = true}, SHIFT(12),
  [25] = {.count = 1, .reusable = true}, SHIFT(13),
  [27] = {.count = 1, .reusable = false}, SHIFT(14),
  [29] = {.count = 1, .reusable = false}, SHIFT(9),
  [31] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [39] = {.count = 1, .reusable = true}, SHIFT(22),
  [41] = {.count = 1, .reusable = true}, SHIFT(24),
  [43] = {.count = 1, .reusable = true}, SHIFT(26),
  [45] = {.count = 1, .reusable = false}, SHIFT(26),
  [47] = {.count = 1, .reusable = true}, SHIFT(29),
  [49] = {.count = 1, .reusable = false}, SHIFT(29),
  [51] = {.count = 1, .reusable = true}, SHIFT(83),
  [53] = {.count = 1, .reusable = true}, SHIFT(27),
  [55] = {.count = 1, .reusable = true}, SHIFT(150),
  [57] = {.count = 1, .reusable = true}, SHIFT(28),
  [59] = {.count = 1, .reusable = false}, SHIFT(84),
  [61] = {.count = 1, .reusable = false}, SHIFT(114),
  [63] = {.count = 1, .reusable = true}, SHIFT(31),
  [65] = {.count = 1, .reusable = false}, SHIFT(31),
  [67] = {.count = 1, .reusable = false}, SHIFT(32),
  [69] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_declaration_repeat1, 1),
  [71] = {.count = 1, .reusable = false}, REDUCE(aux_sym_type_declaration_repeat1, 1),
  [73] = {.count = 1, .reusable = true}, SHIFT(32),
  [75] = {.count = 1, .reusable = false}, SHIFT(34),
  [77] = {.count = 1, .reusable = false}, SHIFT(38),
  [79] = {.count = 1, .reusable = true}, SHIFT(33),
  [81] = {.count = 1, .reusable = false}, SHIFT(33),
  [83] = {.count = 1, .reusable = true}, SHIFT(34),
  [85] = {.count = 1, .reusable = true}, SHIFT(35),
  [87] = {.count = 1, .reusable = true}, SHIFT(36),
  [89] = {.count = 1, .reusable = true}, SHIFT(37),
  [91] = {.count = 1, .reusable = true}, SHIFT(38),
  [93] = {.count = 1, .reusable = false}, SHIFT(35),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym__constructable_expression, 1),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym__constructable_expression, 1),
  [99] = {.count = 1, .reusable = false}, SHIFT(40),
  [101] = {.count = 1, .reusable = true}, SHIFT(41),
  [103] = {.count = 1, .reusable = true}, SHIFT(42),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_type_declaration, 2),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_type_declaration, 2),
  [109] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [112] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [115] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [117] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [120] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [123] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [126] = {.count = 1, .reusable = true}, SHIFT(47),
  [128] = {.count = 1, .reusable = true}, SHIFT(46),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_enum_declaration, 3),
  [132] = {.count = 1, .reusable = true}, SHIFT(145),
  [134] = {.count = 1, .reusable = true}, SHIFT(115),
  [136] = {.count = 1, .reusable = true}, SHIFT(49),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym_model_declaration, 3),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_block_attribute_declaration, 2),
  [142] = {.count = 1, .reusable = false}, REDUCE(sym_block_attribute_declaration, 2),
  [144] = {.count = 1, .reusable = true}, SHIFT(52),
  [146] = {.count = 1, .reusable = false}, SHIFT(52),
  [148] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 1),
  [150] = {.count = 1, .reusable = false}, REDUCE(sym_array, 2),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [154] = {.count = 1, .reusable = false}, SHIFT(90),
  [156] = {.count = 1, .reusable = true}, SHIFT(91),
  [158] = {.count = 1, .reusable = false}, SHIFT(91),
  [160] = {.count = 1, .reusable = true}, SHIFT(92),
  [162] = {.count = 1, .reusable = true}, SHIFT(93),
  [164] = {.count = 1, .reusable = true}, SHIFT(94),
  [166] = {.count = 1, .reusable = true}, SHIFT(53),
  [168] = {.count = 1, .reusable = true}, SHIFT(90),
  [170] = {.count = 1, .reusable = true}, SHIFT(153),
  [172] = {.count = 1, .reusable = false}, SHIFT(92),
  [174] = {.count = 1, .reusable = false}, SHIFT(95),
  [176] = {.count = 1, .reusable = true}, SHIFT(95),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 2),
  [180] = {.count = 1, .reusable = false}, REDUCE(sym_attribute, 2),
  [182] = {.count = 1, .reusable = true}, SHIFT(56),
  [184] = {.count = 1, .reusable = false}, SHIFT(56),
  [186] = {.count = 1, .reusable = true}, SHIFT(57),
  [188] = {.count = 1, .reusable = false}, SHIFT(57),
  [190] = {.count = 1, .reusable = true}, SHIFT(58),
  [192] = {.count = 1, .reusable = false}, SHIFT(58),
  [194] = {.count = 1, .reusable = true}, SHIFT(59),
  [196] = {.count = 1, .reusable = false}, SHIFT(59),
  [198] = {.count = 1, .reusable = true}, SHIFT(60),
  [200] = {.count = 1, .reusable = false}, SHIFT(60),
  [202] = {.count = 1, .reusable = true}, SHIFT(62),
  [204] = {.count = 1, .reusable = false}, SHIFT(62),
  [206] = {.count = 1, .reusable = true}, SHIFT(61),
  [208] = {.count = 1, .reusable = true}, SHIFT(64),
  [210] = {.count = 1, .reusable = false}, SHIFT(64),
  [212] = {.count = 1, .reusable = false}, REDUCE(sym_call_expression, 2),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2),
  [216] = {.count = 1, .reusable = true}, SHIFT(65),
  [218] = {.count = 1, .reusable = false}, SHIFT(65),
  [220] = {.count = 1, .reusable = true}, SHIFT(66),
  [222] = {.count = 1, .reusable = false}, SHIFT(66),
  [224] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_declaration_repeat1, 2), SHIFT_REPEAT(15),
  [227] = {.count = 2, .reusable = false}, REDUCE(aux_sym_type_declaration_repeat1, 2), SHIFT_REPEAT(15),
  [230] = {.count = 1, .reusable = false}, REDUCE(aux_sym_type_declaration_repeat1, 2),
  [232] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_declaration_repeat1, 2), SHIFT_REPEAT(12),
  [235] = {.count = 2, .reusable = false}, REDUCE(aux_sym_type_declaration_repeat1, 2), SHIFT_REPEAT(9),
  [238] = {.count = 2, .reusable = false}, REDUCE(aux_sym_type_declaration_repeat1, 2), SHIFT_REPEAT(14),
  [241] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_declaration_repeat1, 2),
  [243] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_declaration_repeat1, 2), SHIFT_REPEAT(13),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym_datasource_declaration, 3),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym_generator_declaration, 3),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym_enum_block, 2),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym_enumeral, 1),
  [254] = {.count = 1, .reusable = true}, SHIFT(68),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym_statement_block, 2),
  [258] = {.count = 1, .reusable = true}, SHIFT(129),
  [260] = {.count = 1, .reusable = true}, SHIFT(82),
  [262] = {.count = 1, .reusable = true}, SHIFT(72),
  [264] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2),
  [266] = {.count = 1, .reusable = false}, REDUCE(sym_array, 3),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [270] = {.count = 1, .reusable = true}, SHIFT(74),
  [272] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(27),
  [275] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [279] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 2),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 2),
  [283] = {.count = 1, .reusable = true}, SHIFT(75),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3, .production_id = 1),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_expression, 3, .production_id = 1),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_type_expression, 3),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym_type_expression, 3),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym_member_expression, 3, .production_id = 2),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_member_expression, 3, .production_id = 2),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_enum_block, 3),
  [299] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_block_repeat1, 2), SHIFT_REPEAT(47),
  [302] = {.count = 1, .reusable = true}, REDUCE(aux_sym_enum_block_repeat1, 2),
  [304] = {.count = 1, .reusable = true}, SHIFT(77),
  [306] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym_column_declaration, 2),
  [310] = {.count = 1, .reusable = false}, SHIFT(116),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_statement_block, 3),
  [314] = {.count = 1, .reusable = true}, REDUCE(aux_sym_statement_block_repeat1, 2),
  [316] = {.count = 2, .reusable = true}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(115),
  [319] = {.count = 2, .reusable = true}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(145),
  [322] = {.count = 1, .reusable = false}, REDUCE(sym_array, 4),
  [324] = {.count = 1, .reusable = true}, REDUCE(sym_array, 4),
  [326] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 3),
  [328] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [330] = {.count = 1, .reusable = true}, SHIFT(79),
  [332] = {.count = 1, .reusable = true}, REDUCE(sym_column_type, 2),
  [334] = {.count = 1, .reusable = true}, SHIFT(167),
  [336] = {.count = 1, .reusable = false}, REDUCE(sym_column_type, 2),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym_column_declaration, 3),
  [340] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 4),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 4),
  [344] = {.count = 1, .reusable = true}, REDUCE(sym_column_type, 3),
  [346] = {.count = 1, .reusable = false}, REDUCE(sym_column_type, 3),
  [348] = {.count = 1, .reusable = true}, REDUCE(aux_sym_column_declaration_repeat1, 2),
  [350] = {.count = 2, .reusable = false}, REDUCE(aux_sym_column_declaration_repeat1, 2), SHIFT_REPEAT(116),
  [353] = {.count = 1, .reusable = true}, SHIFT(87),
  [355] = {.count = 1, .reusable = false}, SHIFT(87),
  [357] = {.count = 1, .reusable = true}, SHIFT(89),
  [359] = {.count = 1, .reusable = false}, SHIFT(89),
  [361] = {.count = 1, .reusable = false}, SHIFT(97),
  [363] = {.count = 1, .reusable = true}, SHIFT(98),
  [365] = {.count = 1, .reusable = true}, SHIFT(99),
  [367] = {.count = 1, .reusable = true}, SHIFT(101),
  [369] = {.count = 1, .reusable = false}, SHIFT(101),
  [371] = {.count = 1, .reusable = true}, SHIFT(102),
  [373] = {.count = 1, .reusable = false}, SHIFT(102),
  [375] = {.count = 1, .reusable = true}, SHIFT(103),
  [377] = {.count = 1, .reusable = false}, SHIFT(103),
  [379] = {.count = 1, .reusable = true}, SHIFT(104),
  [381] = {.count = 1, .reusable = false}, SHIFT(104),
  [383] = {.count = 1, .reusable = true}, SHIFT(105),
  [385] = {.count = 1, .reusable = false}, SHIFT(105),
  [387] = {.count = 1, .reusable = true}, SHIFT(107),
  [389] = {.count = 1, .reusable = false}, SHIFT(107),
  [391] = {.count = 1, .reusable = true}, SHIFT(108),
  [393] = {.count = 1, .reusable = false}, SHIFT(108),
  [395] = {.count = 1, .reusable = true}, SHIFT(109),
  [397] = {.count = 1, .reusable = false}, SHIFT(109),
  [399] = {.count = 1, .reusable = true}, SHIFT(114),
  [401] = {.count = 1, .reusable = true}, SHIFT(119),
  [403] = {.count = 1, .reusable = false}, SHIFT(119),
  [405] = {.count = 1, .reusable = false}, SHIFT(149),
  [407] = {.count = 1, .reusable = true}, SHIFT(159),
  [409] = {.count = 1, .reusable = true}, SHIFT(121),
  [411] = {.count = 1, .reusable = false}, SHIFT(121),
  [413] = {.count = 1, .reusable = false}, SHIFT(129),
  [415] = {.count = 1, .reusable = true}, SHIFT(130),
  [417] = {.count = 1, .reusable = true}, SHIFT(158),
  [419] = {.count = 1, .reusable = false}, SHIFT(122),
  [421] = {.count = 1, .reusable = true}, SHIFT(122),
  [423] = {.count = 1, .reusable = false}, SHIFT(124),
  [425] = {.count = 1, .reusable = false}, SHIFT(127),
  [427] = {.count = 1, .reusable = true}, SHIFT(123),
  [429] = {.count = 1, .reusable = false}, SHIFT(123),
  [431] = {.count = 1, .reusable = true}, SHIFT(124),
  [433] = {.count = 1, .reusable = true}, SHIFT(125),
  [435] = {.count = 1, .reusable = true}, SHIFT(126),
  [437] = {.count = 1, .reusable = true}, SHIFT(162),
  [439] = {.count = 1, .reusable = true}, SHIFT(127),
  [441] = {.count = 1, .reusable = false}, SHIFT(125),
  [443] = {.count = 1, .reusable = true}, SHIFT(132),
  [445] = {.count = 1, .reusable = false}, SHIFT(132),
  [447] = {.count = 1, .reusable = true}, SHIFT(133),
  [449] = {.count = 1, .reusable = false}, SHIFT(133),
  [451] = {.count = 1, .reusable = true}, SHIFT(134),
  [453] = {.count = 1, .reusable = false}, SHIFT(134),
  [455] = {.count = 1, .reusable = true}, SHIFT(135),
  [457] = {.count = 1, .reusable = false}, SHIFT(135),
  [459] = {.count = 1, .reusable = true}, SHIFT(136),
  [461] = {.count = 1, .reusable = false}, SHIFT(136),
  [463] = {.count = 1, .reusable = true}, SHIFT(138),
  [465] = {.count = 1, .reusable = false}, SHIFT(138),
  [467] = {.count = 1, .reusable = true}, SHIFT(139),
  [469] = {.count = 1, .reusable = false}, SHIFT(139),
  [471] = {.count = 1, .reusable = true}, SHIFT(140),
  [473] = {.count = 1, .reusable = false}, SHIFT(140),
  [475] = {.count = 1, .reusable = true}, SHIFT(151),
  [477] = {.count = 1, .reusable = false}, SHIFT(151),
  [479] = {.count = 1, .reusable = true}, SHIFT(88),
  [481] = {.count = 1, .reusable = true}, SHIFT(100),
  [483] = {.count = 1, .reusable = true}, SHIFT(155),
  [485] = {.count = 1, .reusable = false}, SHIFT(155),
  [487] = {.count = 1, .reusable = true}, SHIFT(106),
  [489] = {.count = 1, .reusable = true}, SHIFT(111),
  [491] = {.count = 1, .reusable = true}, SHIFT(112),
  [493] = {.count = 1, .reusable = true}, SHIFT(113),
  [495] = {.count = 1, .reusable = true}, SHIFT(149),
  [497] = {.count = 1, .reusable = true}, SHIFT(160),
  [499] = {.count = 1, .reusable = false}, SHIFT(160),
  [501] = {.count = 1, .reusable = true}, SHIFT(120),
  [503] = {.count = 1, .reusable = true}, SHIFT(131),
  [505] = {.count = 1, .reusable = true}, SHIFT(164),
  [507] = {.count = 1, .reusable = false}, SHIFT(164),
  [509] = {.count = 1, .reusable = true}, SHIFT(137),
  [511] = {.count = 1, .reusable = true}, SHIFT(142),
  [513] = {.count = 1, .reusable = true}, SHIFT(143),
  [515] = {.count = 1, .reusable = true}, SHIFT(144),
  [517] = {.count = 1, .reusable = true}, SHIFT(168),
  [519] = {.count = 1, .reusable = false}, SHIFT(168),
  [521] = {.count = 1, .reusable = true}, SHIFT(146),
  [523] = {.count = 1, .reusable = true}, SHIFT(147),
  [525] = {.count = 1, .reusable = true}, SHIFT(148),
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
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
