#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 103
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 0
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_SEMI = 1,
  sym_decimal_integer_literal = 2,
  sym_hex_integer_literal = 3,
  sym_octal_integer_literal = 4,
  sym_binary_integer_literal = 5,
  sym_decimal_floating_point_literal = 6,
  sym_hex_floating_point_literal = 7,
  anon_sym_true = 8,
  anon_sym_false = 9,
  anon_sym_SQUOTE = 10,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH = 11,
  aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH = 12,
  aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH = 13,
  sym_string_literal = 14,
  sym_null_literal = 15,
  aux_sym_SLASH_BSLASH_BSLASH_SLASH = 16,
  anon_sym_DQUOTE = 17,
  anon_sym_EQ = 18,
  anon_sym_PLUS_EQ = 19,
  anon_sym_DASH_EQ = 20,
  anon_sym_STAR_EQ = 21,
  anon_sym_SLASH_EQ = 22,
  anon_sym_AMP_EQ = 23,
  anon_sym_PIPE_EQ = 24,
  anon_sym_CARET_EQ = 25,
  anon_sym_PERCENT_EQ = 26,
  anon_sym_LT_LT_EQ = 27,
  anon_sym_GT_GT_EQ = 28,
  anon_sym_GT_GT_GT_EQ = 29,
  anon_sym_GT = 30,
  anon_sym_LT = 31,
  anon_sym_EQ_EQ = 32,
  anon_sym_GT_EQ = 33,
  anon_sym_LT_EQ = 34,
  anon_sym_BANG_EQ = 35,
  anon_sym_AMP_AMP = 36,
  anon_sym_PIPE_PIPE = 37,
  anon_sym_PLUS = 38,
  anon_sym_DASH = 39,
  anon_sym_STAR = 40,
  anon_sym_SLASH = 41,
  anon_sym_AMP = 42,
  anon_sym_PIPE = 43,
  anon_sym_CARET = 44,
  anon_sym_PERCENT = 45,
  anon_sym_LT_LT = 46,
  anon_sym_GT_GT = 47,
  anon_sym_GT_GT_GT = 48,
  anon_sym_QMARK = 49,
  anon_sym_COLON = 50,
  anon_sym_BANG = 51,
  anon_sym_TILDE = 52,
  anon_sym_PLUS_PLUS = 53,
  anon_sym_DASH_DASH = 54,
  anon_sym_LPAREN = 55,
  anon_sym_RPAREN = 56,
  anon_sym_LBRACE = 57,
  anon_sym_RBRACE = 58,
  anon_sym_AT = 59,
  anon_sym_COMMA = 60,
  anon_sym_open = 61,
  anon_sym_module = 62,
  anon_sym_DOT = 63,
  sym_identifier = 64,
  sym_comment = 65,
  sym_program = 66,
  sym__statement = 67,
  sym__literal = 68,
  sym_integer_literal = 69,
  sym_floating_point_literal = 70,
  sym_boolean_literal = 71,
  sym_character_literal = 72,
  sym__expression = 73,
  sym_assignment_expression = 74,
  sym_binary_expression = 75,
  sym_ternary_expression = 76,
  sym_unary_expression = 77,
  sym_update_expression = 78,
  sym__annotation = 79,
  sym_normal_annotation = 80,
  sym_element_value_pair_list = 81,
  sym_element_value_pair = 82,
  sym_element_value = 83,
  sym_element_value_array_initializer = 84,
  sym_element_value_list = 85,
  sym__declaration = 86,
  sym_module_declaration = 87,
  sym_module_identifier = 88,
  sym_package_or_type_name = 89,
  aux_sym_program_repeat1 = 90,
  aux_sym_character_literal_repeat1 = 91,
  aux_sym_element_value_pair_list_repeat1 = 92,
  aux_sym_element_value_list_repeat1 = 93,
  aux_sym_module_identifier_repeat1 = 94,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_SEMI] = ";",
  [sym_decimal_integer_literal] = "decimal_integer_literal",
  [sym_hex_integer_literal] = "hex_integer_literal",
  [sym_octal_integer_literal] = "octal_integer_literal",
  [sym_binary_integer_literal] = "binary_integer_literal",
  [sym_decimal_floating_point_literal] = "decimal_floating_point_literal",
  [sym_hex_floating_point_literal] = "hex_floating_point_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = "/[^\\'\\n]/",
  [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = "/\\\\./",
  [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = "/\\\\\\n/",
  [sym_string_literal] = "string_literal",
  [sym_null_literal] = "null_literal",
  [aux_sym_SLASH_BSLASH_BSLASH_SLASH] = "/\\\\/",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_AMP_EQ] = "&=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_LT_LT_EQ] = "<<=",
  [anon_sym_GT_GT_EQ] = ">>=",
  [anon_sym_GT_GT_GT_EQ] = ">>>=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_GT_GT_GT] = ">>>",
  [anon_sym_QMARK] = "?",
  [anon_sym_COLON] = ":",
  [anon_sym_BANG] = "!",
  [anon_sym_TILDE] = "~",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_AT] = "@",
  [anon_sym_COMMA] = ",",
  [anon_sym_open] = "open",
  [anon_sym_module] = "module",
  [anon_sym_DOT] = ".",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym__literal] = "_literal",
  [sym_integer_literal] = "integer_literal",
  [sym_floating_point_literal] = "floating_point_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_character_literal] = "character_literal",
  [sym__expression] = "_expression",
  [sym_assignment_expression] = "assignment_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_ternary_expression] = "ternary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_update_expression] = "update_expression",
  [sym__annotation] = "_annotation",
  [sym_normal_annotation] = "normal_annotation",
  [sym_element_value_pair_list] = "element_value_pair_list",
  [sym_element_value_pair] = "element_value_pair",
  [sym_element_value] = "element_value",
  [sym_element_value_array_initializer] = "element_value_array_initializer",
  [sym_element_value_list] = "element_value_list",
  [sym__declaration] = "_declaration",
  [sym_module_declaration] = "module_declaration",
  [sym_module_identifier] = "module_identifier",
  [sym_package_or_type_name] = "package_or_type_name",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_character_literal_repeat1] = "character_literal_repeat1",
  [aux_sym_element_value_pair_list_repeat1] = "element_value_pair_list_repeat1",
  [aux_sym_element_value_list_repeat1] = "element_value_list_repeat1",
  [aux_sym_module_identifier_repeat1] = "module_identifier_repeat1",
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
  [sym_decimal_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_octal_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_floating_point_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_floating_point_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_null_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_SLASH_BSLASH_BSLASH_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
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
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
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
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_floating_point_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_character_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_ternary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_update_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__annotation] = {
    .visible = false,
    .named = true,
  },
  [sym_normal_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_element_value_pair_list] = {
    .visible = true,
    .named = true,
  },
  [sym_element_value_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_element_value] = {
    .visible = true,
    .named = true,
  },
  [sym_element_value_array_initializer] = {
    .visible = true,
    .named = true,
  },
  [sym_element_value_list] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_module_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_module_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_package_or_type_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_element_value_pair_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_element_value_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(13);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == ';')
        ADVANCE(30);
      if (lookahead == '<')
        ADVANCE(31);
      if (lookahead == '=')
        ADVANCE(35);
      if (lookahead == '>')
        ADVANCE(37);
      if (lookahead == '?')
        ADVANCE(43);
      if (lookahead == '@')
        ADVANCE(44);
      if (lookahead == '\\')
        ADVANCE(45);
      if (lookahead == '^')
        ADVANCE(46);
      if (lookahead == '{')
        ADVANCE(48);
      if (lookahead == '|')
        ADVANCE(49);
      if (lookahead == '}')
        ADVANCE(52);
      if (lookahead == '~')
        ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=')
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(8);
      if (lookahead == '=')
        ADVANCE(9);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=')
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == '*')
        ADVANCE(25);
      if (lookahead != 0)
        ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '*')
        ADVANCE(25);
      if (lookahead == '/')
        ADVANCE(26);
      if (lookahead != 0)
        ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=')
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(38);
      if (lookahead == '>')
        ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=')
        ADVANCE(40);
      if (lookahead == '>')
        ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      if (lookahead == '=')
        ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SLASH);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=')
        ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=')
        ADVANCE(50);
      if (lookahead == '|')
        ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 55:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(56);
      if (lookahead == '\"')
        ADVANCE(57);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(60);
      if (lookahead == '-')
        ADVANCE(61);
      if (lookahead == '.')
        ADVANCE(62);
      if (lookahead == '/')
        ADVANCE(70);
      if (lookahead == '0')
        ADVANCE(71);
      if (lookahead == '@')
        ADVANCE(44);
      if (lookahead == 'f')
        ADVANCE(96);
      if (lookahead == 'm')
        ADVANCE(101);
      if (lookahead == 'n')
        ADVANCE(107);
      if (lookahead == 'o')
        ADVANCE(111);
      if (lookahead == 't')
        ADVANCE(115);
      if (lookahead == '~')
        ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(55);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(95);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 57:
      if (lookahead == '\"')
        ADVANCE(58);
      if (lookahead == '\\')
        ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 59:
      if (lookahead == '\n')
        ADVANCE(57);
      if (lookahead != 0)
        ADVANCE(57);
      END_STATE();
    case 60:
      if (lookahead == '+')
        ADVANCE(16);
      END_STATE();
    case 61:
      if (lookahead == '-')
        ADVANCE(20);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(65);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(63);
      END_STATE();
    case 64:
      if (lookahead == '_')
        ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(63);
      END_STATE();
    case 65:
      if (lookahead == '+')
        ADVANCE(66);
      if (lookahead == '-')
        ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(67);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(68);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == '_')
        ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 70:
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(27);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(72);
      if (lookahead == 'B')
        ADVANCE(73);
      if (lookahead == 'O')
        ADVANCE(75);
      if (lookahead == 'X')
        ADVANCE(77);
      if (lookahead == '_')
        ADVANCE(94);
      if (lookahead == 'b')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(75);
      if (lookahead == 'x')
        ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(65);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(95);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(65);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(63);
      END_STATE();
    case 73:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == '_')
        ADVANCE(73);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(74);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_octal_integer_literal);
      if (lookahead == '_')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead == '.')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(88);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == '_')
        ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(79);
      END_STATE();
    case 80:
      if (lookahead == '+')
        ADVANCE(81);
      if (lookahead == '-')
        ADVANCE(81);
      if (lookahead == '_')
        ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(79);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(83);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(82);
      END_STATE();
    case 83:
      if (lookahead == '_')
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(82);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(86);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(80);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(85);
      END_STATE();
    case 86:
      if (lookahead == '_')
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(79);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(79);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(89);
      if (lookahead == '_')
        ADVANCE(90);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(88);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(79);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(88);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '+')
        ADVANCE(81);
      if (lookahead == '-')
        ADVANCE(81);
      if (lookahead == '.')
        ADVANCE(89);
      if (lookahead == '_')
        ADVANCE(90);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(88);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(89);
      if (lookahead == '_')
        ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(91);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(92);
      END_STATE();
    case 93:
      if (lookahead == '_')
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(88);
      END_STATE();
    case 94:
      if (lookahead == '_')
        ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(72);
      if (lookahead == '_')
        ADVANCE(94);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(65);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(95);
      END_STATE();
    case 96:
      if (lookahead == 'a')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'l')
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 's')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'e')
        ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 101:
      if (lookahead == 'o')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'd')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'u')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 'l')
        ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 'e')
        ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 107:
      if (lookahead == 'u')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'l')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 'l')
        ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 111:
      if (lookahead == 'p')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'e')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 'n')
        ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 115:
      if (lookahead == 'r')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'u')
        ADVANCE(117);
      END_STATE();
    case 117:
      if (lookahead == 'e')
        ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 119:
      if (lookahead == '!')
        ADVANCE(120);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(13);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == ';')
        ADVANCE(30);
      if (lookahead == '<')
        ADVANCE(31);
      if (lookahead == '=')
        ADVANCE(35);
      if (lookahead == '>')
        ADVANCE(37);
      if (lookahead == '?')
        ADVANCE(43);
      if (lookahead == '^')
        ADVANCE(46);
      if (lookahead == 'm')
        ADVANCE(101);
      if (lookahead == 'o')
        ADVANCE(111);
      if (lookahead == '|')
        ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(119);
      END_STATE();
    case 120:
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 121:
      if (lookahead == '\n')
        SKIP(121);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(122);
      if (lookahead == '\\')
        ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(126);
      if (lookahead != 0)
        ADVANCE(126);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(27);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '\n')
        ADVANCE(124);
      if (lookahead != 0)
        ADVANCE(125);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 55},
  [2] = {.lex_state = 119},
  [3] = {.lex_state = 119},
  [4] = {.lex_state = 119},
  [5] = {.lex_state = 121},
  [6] = {.lex_state = 119},
  [7] = {.lex_state = 55},
  [8] = {.lex_state = 55},
  [9] = {.lex_state = 127},
  [10] = {.lex_state = 55},
  [11] = {.lex_state = 127},
  [12] = {.lex_state = 55},
  [13] = {.lex_state = 119},
  [14] = {.lex_state = 119},
  [15] = {.lex_state = 119},
  [16] = {.lex_state = 119},
  [17] = {.lex_state = 119},
  [18] = {.lex_state = 55},
  [19] = {.lex_state = 119},
  [20] = {.lex_state = 119},
  [21] = {.lex_state = 55},
  [22] = {.lex_state = 119},
  [23] = {.lex_state = 121},
  [24] = {.lex_state = 121},
  [25] = {.lex_state = 119},
  [26] = {.lex_state = 119},
  [27] = {.lex_state = 119},
  [28] = {.lex_state = 119},
  [29] = {.lex_state = 127},
  [30] = {.lex_state = 119},
  [31] = {.lex_state = 119},
  [32] = {.lex_state = 55},
  [33] = {.lex_state = 55},
  [34] = {.lex_state = 55},
  [35] = {.lex_state = 55},
  [36] = {.lex_state = 55},
  [37] = {.lex_state = 55},
  [38] = {.lex_state = 55},
  [39] = {.lex_state = 55},
  [40] = {.lex_state = 119},
  [41] = {.lex_state = 55},
  [42] = {.lex_state = 119},
  [43] = {.lex_state = 119},
  [44] = {.lex_state = 121},
  [45] = {.lex_state = 127},
  [46] = {.lex_state = 127},
  [47] = {.lex_state = 119},
  [48] = {.lex_state = 127},
  [49] = {.lex_state = 119},
  [50] = {.lex_state = 119},
  [51] = {.lex_state = 119},
  [52] = {.lex_state = 119},
  [53] = {.lex_state = 119},
  [54] = {.lex_state = 119},
  [55] = {.lex_state = 119},
  [56] = {.lex_state = 55},
  [57] = {.lex_state = 55},
  [58] = {.lex_state = 119},
  [59] = {.lex_state = 127},
  [60] = {.lex_state = 55},
  [61] = {.lex_state = 119},
  [62] = {.lex_state = 119},
  [63] = {.lex_state = 119},
  [64] = {.lex_state = 119},
  [65] = {.lex_state = 119},
  [66] = {.lex_state = 119},
  [67] = {.lex_state = 127},
  [68] = {.lex_state = 55},
  [69] = {.lex_state = 55},
  [70] = {.lex_state = 55},
  [71] = {.lex_state = 55},
  [72] = {.lex_state = 55},
  [73] = {.lex_state = 55},
  [74] = {.lex_state = 55},
  [75] = {.lex_state = 55},
  [76] = {.lex_state = 119},
  [77] = {.lex_state = 55},
  [78] = {.lex_state = 119},
  [79] = {.lex_state = 127},
  [80] = {.lex_state = 119},
  [81] = {.lex_state = 119},
  [82] = {.lex_state = 119},
  [83] = {.lex_state = 119},
  [84] = {.lex_state = 119},
  [85] = {.lex_state = 119},
  [86] = {.lex_state = 119},
  [87] = {.lex_state = 119},
  [88] = {.lex_state = 119},
  [89] = {.lex_state = 119},
  [90] = {.lex_state = 119},
  [91] = {.lex_state = 119},
  [92] = {.lex_state = 119},
  [93] = {.lex_state = 127},
  [94] = {.lex_state = 55},
  [95] = {.lex_state = 55},
  [96] = {.lex_state = 119},
  [97] = {.lex_state = 119},
  [98] = {.lex_state = 119},
  [99] = {.lex_state = 119},
  [100] = {.lex_state = 119},
  [101] = {.lex_state = 55},
  [102] = {.lex_state = 119},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_BSLASH_SLASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(3),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(3),
    [anon_sym_CARET] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(3),
    [anon_sym_LT_LT] = ACTIONS(3),
    [anon_sym_GT_GT] = ACTIONS(3),
    [anon_sym_GT_GT_GT] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_identifier] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_program] = STATE(12),
    [sym__statement] = STATE(13),
    [sym__literal] = STATE(14),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(15),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [sym__annotation] = STATE(18),
    [sym_normal_annotation] = STATE(19),
    [sym__declaration] = STATE(14),
    [sym_module_declaration] = STATE(20),
    [aux_sym_program_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(8),
    [sym_decimal_integer_literal] = ACTIONS(10),
    [sym_hex_integer_literal] = ACTIONS(10),
    [sym_octal_integer_literal] = ACTIONS(10),
    [sym_binary_integer_literal] = ACTIONS(10),
    [sym_decimal_floating_point_literal] = ACTIONS(12),
    [sym_hex_floating_point_literal] = ACTIONS(14),
    [anon_sym_true] = ACTIONS(16),
    [anon_sym_false] = ACTIONS(16),
    [anon_sym_SQUOTE] = ACTIONS(18),
    [sym_string_literal] = ACTIONS(20),
    [sym_null_literal] = ACTIONS(20),
    [anon_sym_BANG] = ACTIONS(22),
    [anon_sym_TILDE] = ACTIONS(22),
    [anon_sym_PLUS_PLUS] = ACTIONS(24),
    [anon_sym_DASH_DASH] = ACTIONS(24),
    [anon_sym_AT] = ACTIONS(26),
    [anon_sym_open] = ACTIONS(28),
    [anon_sym_module] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [2] = {
    [anon_sym_SEMI] = ACTIONS(34),
    [anon_sym_RPAREN] = ACTIONS(34),
    [anon_sym_COMMA] = ACTIONS(34),
    [sym_comment] = ACTIONS(32),
  },
  [3] = {
    [anon_sym_SEMI] = ACTIONS(36),
    [anon_sym_RPAREN] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(36),
    [sym_comment] = ACTIONS(32),
  },
  [4] = {
    [anon_sym_SEMI] = ACTIONS(38),
    [anon_sym_RPAREN] = ACTIONS(38),
    [anon_sym_COMMA] = ACTIONS(38),
    [sym_comment] = ACTIONS(32),
  },
  [5] = {
    [aux_sym_character_literal_repeat1] = STATE(24),
    [anon_sym_SQUOTE] = ACTIONS(40),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(42),
    [sym_comment] = ACTIONS(44),
  },
  [6] = {
    [anon_sym_SEMI] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(46),
    [anon_sym_COMMA] = ACTIONS(46),
    [sym_comment] = ACTIONS(32),
  },
  [7] = {
    [sym__expression] = STATE(25),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(22),
    [anon_sym_TILDE] = ACTIONS(22),
    [anon_sym_PLUS_PLUS] = ACTIONS(24),
    [anon_sym_DASH_DASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(32),
  },
  [8] = {
    [sym__expression] = STATE(26),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(22),
    [anon_sym_TILDE] = ACTIONS(22),
    [anon_sym_PLUS_PLUS] = ACTIONS(24),
    [anon_sym_DASH_DASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(32),
  },
  [9] = {
    [sym_package_or_type_name] = STATE(28),
    [sym_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(32),
  },
  [10] = {
    [anon_sym_module] = ACTIONS(50),
    [sym_comment] = ACTIONS(32),
  },
  [11] = {
    [sym_module_identifier] = STATE(31),
    [sym_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(32),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [sym_comment] = ACTIONS(32),
  },
  [13] = {
    [anon_sym_SEMI] = ACTIONS(56),
    [sym_comment] = ACTIONS(32),
  },
  [14] = {
    [anon_sym_SEMI] = ACTIONS(58),
    [sym_comment] = ACTIONS(32),
  },
  [15] = {
    [anon_sym_SEMI] = ACTIONS(58),
    [anon_sym_EQ] = ACTIONS(60),
    [anon_sym_PLUS_EQ] = ACTIONS(62),
    [anon_sym_DASH_EQ] = ACTIONS(62),
    [anon_sym_STAR_EQ] = ACTIONS(62),
    [anon_sym_SLASH_EQ] = ACTIONS(62),
    [anon_sym_AMP_EQ] = ACTIONS(62),
    [anon_sym_PIPE_EQ] = ACTIONS(62),
    [anon_sym_CARET_EQ] = ACTIONS(62),
    [anon_sym_PERCENT_EQ] = ACTIONS(62),
    [anon_sym_LT_LT_EQ] = ACTIONS(62),
    [anon_sym_GT_GT_EQ] = ACTIONS(62),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(62),
    [anon_sym_GT] = ACTIONS(64),
    [anon_sym_LT] = ACTIONS(64),
    [anon_sym_EQ_EQ] = ACTIONS(66),
    [anon_sym_GT_EQ] = ACTIONS(66),
    [anon_sym_LT_EQ] = ACTIONS(66),
    [anon_sym_BANG_EQ] = ACTIONS(66),
    [anon_sym_AMP_AMP] = ACTIONS(68),
    [anon_sym_PIPE_PIPE] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(74),
    [anon_sym_AMP] = ACTIONS(76),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(78),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_LT_LT] = ACTIONS(74),
    [anon_sym_GT_GT] = ACTIONS(74),
    [anon_sym_GT_GT_GT] = ACTIONS(74),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(32),
  },
  [16] = {
    [anon_sym_SEMI] = ACTIONS(84),
    [anon_sym_EQ] = ACTIONS(86),
    [anon_sym_PLUS_EQ] = ACTIONS(84),
    [anon_sym_DASH_EQ] = ACTIONS(84),
    [anon_sym_STAR_EQ] = ACTIONS(84),
    [anon_sym_SLASH_EQ] = ACTIONS(84),
    [anon_sym_AMP_EQ] = ACTIONS(84),
    [anon_sym_PIPE_EQ] = ACTIONS(84),
    [anon_sym_CARET_EQ] = ACTIONS(84),
    [anon_sym_PERCENT_EQ] = ACTIONS(84),
    [anon_sym_LT_LT_EQ] = ACTIONS(84),
    [anon_sym_GT_GT_EQ] = ACTIONS(84),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(84),
    [anon_sym_GT] = ACTIONS(86),
    [anon_sym_LT] = ACTIONS(86),
    [anon_sym_EQ_EQ] = ACTIONS(84),
    [anon_sym_GT_EQ] = ACTIONS(84),
    [anon_sym_LT_EQ] = ACTIONS(84),
    [anon_sym_BANG_EQ] = ACTIONS(84),
    [anon_sym_AMP_AMP] = ACTIONS(84),
    [anon_sym_PIPE_PIPE] = ACTIONS(84),
    [anon_sym_PLUS] = ACTIONS(86),
    [anon_sym_DASH] = ACTIONS(86),
    [anon_sym_STAR] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_AMP] = ACTIONS(86),
    [anon_sym_PIPE] = ACTIONS(86),
    [anon_sym_CARET] = ACTIONS(86),
    [anon_sym_PERCENT] = ACTIONS(86),
    [anon_sym_LT_LT] = ACTIONS(86),
    [anon_sym_GT_GT] = ACTIONS(86),
    [anon_sym_GT_GT_GT] = ACTIONS(86),
    [anon_sym_QMARK] = ACTIONS(84),
    [anon_sym_COLON] = ACTIONS(84),
    [anon_sym_PLUS_PLUS] = ACTIONS(84),
    [anon_sym_DASH_DASH] = ACTIONS(84),
    [sym_comment] = ACTIONS(32),
  },
  [17] = {
    [anon_sym_SEMI] = ACTIONS(88),
    [anon_sym_EQ] = ACTIONS(90),
    [anon_sym_PLUS_EQ] = ACTIONS(88),
    [anon_sym_DASH_EQ] = ACTIONS(88),
    [anon_sym_STAR_EQ] = ACTIONS(88),
    [anon_sym_SLASH_EQ] = ACTIONS(88),
    [anon_sym_AMP_EQ] = ACTIONS(88),
    [anon_sym_PIPE_EQ] = ACTIONS(88),
    [anon_sym_CARET_EQ] = ACTIONS(88),
    [anon_sym_PERCENT_EQ] = ACTIONS(88),
    [anon_sym_LT_LT_EQ] = ACTIONS(88),
    [anon_sym_GT_GT_EQ] = ACTIONS(88),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(88),
    [anon_sym_GT] = ACTIONS(90),
    [anon_sym_LT] = ACTIONS(90),
    [anon_sym_EQ_EQ] = ACTIONS(88),
    [anon_sym_GT_EQ] = ACTIONS(88),
    [anon_sym_LT_EQ] = ACTIONS(88),
    [anon_sym_BANG_EQ] = ACTIONS(88),
    [anon_sym_AMP_AMP] = ACTIONS(88),
    [anon_sym_PIPE_PIPE] = ACTIONS(88),
    [anon_sym_PLUS] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(90),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(90),
    [anon_sym_AMP] = ACTIONS(90),
    [anon_sym_PIPE] = ACTIONS(90),
    [anon_sym_CARET] = ACTIONS(90),
    [anon_sym_PERCENT] = ACTIONS(90),
    [anon_sym_LT_LT] = ACTIONS(90),
    [anon_sym_GT_GT] = ACTIONS(90),
    [anon_sym_GT_GT_GT] = ACTIONS(90),
    [anon_sym_QMARK] = ACTIONS(88),
    [anon_sym_COLON] = ACTIONS(88),
    [anon_sym_PLUS_PLUS] = ACTIONS(88),
    [anon_sym_DASH_DASH] = ACTIONS(88),
    [sym_comment] = ACTIONS(32),
  },
  [18] = {
    [anon_sym_open] = ACTIONS(92),
    [anon_sym_module] = ACTIONS(50),
    [sym_comment] = ACTIONS(32),
  },
  [19] = {
    [anon_sym_RPAREN] = ACTIONS(94),
    [anon_sym_COMMA] = ACTIONS(94),
    [anon_sym_open] = ACTIONS(94),
    [anon_sym_module] = ACTIONS(94),
    [sym_comment] = ACTIONS(32),
  },
  [20] = {
    [anon_sym_SEMI] = ACTIONS(96),
    [sym_comment] = ACTIONS(32),
  },
  [21] = {
    [sym__statement] = STATE(42),
    [sym__literal] = STATE(14),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(15),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [sym__annotation] = STATE(18),
    [sym_normal_annotation] = STATE(19),
    [sym__declaration] = STATE(14),
    [sym_module_declaration] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(98),
    [sym_decimal_integer_literal] = ACTIONS(10),
    [sym_hex_integer_literal] = ACTIONS(10),
    [sym_octal_integer_literal] = ACTIONS(10),
    [sym_binary_integer_literal] = ACTIONS(10),
    [sym_decimal_floating_point_literal] = ACTIONS(12),
    [sym_hex_floating_point_literal] = ACTIONS(14),
    [anon_sym_true] = ACTIONS(16),
    [anon_sym_false] = ACTIONS(16),
    [anon_sym_SQUOTE] = ACTIONS(18),
    [sym_string_literal] = ACTIONS(20),
    [sym_null_literal] = ACTIONS(20),
    [anon_sym_BANG] = ACTIONS(22),
    [anon_sym_TILDE] = ACTIONS(22),
    [anon_sym_PLUS_PLUS] = ACTIONS(24),
    [anon_sym_DASH_DASH] = ACTIONS(24),
    [anon_sym_AT] = ACTIONS(26),
    [anon_sym_open] = ACTIONS(28),
    [anon_sym_module] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [22] = {
    [anon_sym_SEMI] = ACTIONS(100),
    [anon_sym_RPAREN] = ACTIONS(100),
    [anon_sym_COMMA] = ACTIONS(100),
    [sym_comment] = ACTIONS(32),
  },
  [23] = {
    [anon_sym_SQUOTE] = ACTIONS(102),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(102),
    [sym_comment] = ACTIONS(44),
  },
  [24] = {
    [anon_sym_SQUOTE] = ACTIONS(104),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(106),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(106),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(106),
    [sym_comment] = ACTIONS(44),
  },
  [25] = {
    [anon_sym_SEMI] = ACTIONS(108),
    [anon_sym_EQ] = ACTIONS(110),
    [anon_sym_PLUS_EQ] = ACTIONS(108),
    [anon_sym_DASH_EQ] = ACTIONS(108),
    [anon_sym_STAR_EQ] = ACTIONS(108),
    [anon_sym_SLASH_EQ] = ACTIONS(108),
    [anon_sym_AMP_EQ] = ACTIONS(108),
    [anon_sym_PIPE_EQ] = ACTIONS(108),
    [anon_sym_CARET_EQ] = ACTIONS(108),
    [anon_sym_PERCENT_EQ] = ACTIONS(108),
    [anon_sym_LT_LT_EQ] = ACTIONS(108),
    [anon_sym_GT_GT_EQ] = ACTIONS(108),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(108),
    [anon_sym_GT] = ACTIONS(110),
    [anon_sym_LT] = ACTIONS(110),
    [anon_sym_EQ_EQ] = ACTIONS(108),
    [anon_sym_GT_EQ] = ACTIONS(108),
    [anon_sym_LT_EQ] = ACTIONS(108),
    [anon_sym_BANG_EQ] = ACTIONS(108),
    [anon_sym_AMP_AMP] = ACTIONS(108),
    [anon_sym_PIPE_PIPE] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_AMP] = ACTIONS(110),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_CARET] = ACTIONS(110),
    [anon_sym_PERCENT] = ACTIONS(110),
    [anon_sym_LT_LT] = ACTIONS(110),
    [anon_sym_GT_GT] = ACTIONS(110),
    [anon_sym_GT_GT_GT] = ACTIONS(110),
    [anon_sym_QMARK] = ACTIONS(108),
    [anon_sym_COLON] = ACTIONS(108),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(32),
  },
  [26] = {
    [anon_sym_SEMI] = ACTIONS(112),
    [anon_sym_EQ] = ACTIONS(114),
    [anon_sym_PLUS_EQ] = ACTIONS(112),
    [anon_sym_DASH_EQ] = ACTIONS(112),
    [anon_sym_STAR_EQ] = ACTIONS(112),
    [anon_sym_SLASH_EQ] = ACTIONS(112),
    [anon_sym_AMP_EQ] = ACTIONS(112),
    [anon_sym_PIPE_EQ] = ACTIONS(112),
    [anon_sym_CARET_EQ] = ACTIONS(112),
    [anon_sym_PERCENT_EQ] = ACTIONS(112),
    [anon_sym_LT_LT_EQ] = ACTIONS(112),
    [anon_sym_GT_GT_EQ] = ACTIONS(112),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(112),
    [anon_sym_GT] = ACTIONS(114),
    [anon_sym_LT] = ACTIONS(114),
    [anon_sym_EQ_EQ] = ACTIONS(112),
    [anon_sym_GT_EQ] = ACTIONS(112),
    [anon_sym_LT_EQ] = ACTIONS(112),
    [anon_sym_BANG_EQ] = ACTIONS(112),
    [anon_sym_AMP_AMP] = ACTIONS(112),
    [anon_sym_PIPE_PIPE] = ACTIONS(112),
    [anon_sym_PLUS] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(114),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_AMP] = ACTIONS(114),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_CARET] = ACTIONS(114),
    [anon_sym_PERCENT] = ACTIONS(114),
    [anon_sym_LT_LT] = ACTIONS(114),
    [anon_sym_GT_GT] = ACTIONS(114),
    [anon_sym_GT_GT_GT] = ACTIONS(114),
    [anon_sym_QMARK] = ACTIONS(112),
    [anon_sym_COLON] = ACTIONS(112),
    [anon_sym_PLUS_PLUS] = ACTIONS(112),
    [anon_sym_DASH_DASH] = ACTIONS(112),
    [sym_comment] = ACTIONS(32),
  },
  [27] = {
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [sym_comment] = ACTIONS(32),
  },
  [28] = {
    [anon_sym_LPAREN] = ACTIONS(118),
    [anon_sym_DOT] = ACTIONS(120),
    [sym_comment] = ACTIONS(32),
  },
  [29] = {
    [sym_module_identifier] = STATE(47),
    [sym_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(32),
  },
  [30] = {
    [aux_sym_module_identifier_repeat1] = STATE(49),
    [anon_sym_SEMI] = ACTIONS(122),
    [anon_sym_DOT] = ACTIONS(124),
    [sym_comment] = ACTIONS(32),
  },
  [31] = {
    [anon_sym_SEMI] = ACTIONS(126),
    [sym_comment] = ACTIONS(32),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(128),
    [sym_decimal_integer_literal] = ACTIONS(130),
    [sym_hex_integer_literal] = ACTIONS(130),
    [sym_octal_integer_literal] = ACTIONS(130),
    [sym_binary_integer_literal] = ACTIONS(130),
    [sym_decimal_floating_point_literal] = ACTIONS(130),
    [sym_hex_floating_point_literal] = ACTIONS(132),
    [anon_sym_true] = ACTIONS(128),
    [anon_sym_false] = ACTIONS(128),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [sym_string_literal] = ACTIONS(128),
    [sym_null_literal] = ACTIONS(128),
    [anon_sym_BANG] = ACTIONS(128),
    [anon_sym_TILDE] = ACTIONS(128),
    [anon_sym_PLUS_PLUS] = ACTIONS(128),
    [anon_sym_DASH_DASH] = ACTIONS(128),
    [anon_sym_AT] = ACTIONS(128),
    [anon_sym_open] = ACTIONS(128),
    [anon_sym_module] = ACTIONS(128),
    [sym_comment] = ACTIONS(32),
  },
  [33] = {
    [sym__expression] = STATE(50),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(22),
    [anon_sym_TILDE] = ACTIONS(22),
    [anon_sym_PLUS_PLUS] = ACTIONS(24),
    [anon_sym_DASH_DASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(32),
  },
  [34] = {
    [sym__expression] = STATE(51),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(22),
    [anon_sym_TILDE] = ACTIONS(22),
    [anon_sym_PLUS_PLUS] = ACTIONS(24),
    [anon_sym_DASH_DASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(32),
  },
  [35] = {
    [sym__expression] = STATE(52),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(22),
    [anon_sym_TILDE] = ACTIONS(22),
    [anon_sym_PLUS_PLUS] = ACTIONS(24),
    [anon_sym_DASH_DASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(32),
  },
  [36] = {
    [sym__expression] = STATE(53),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(22),
    [anon_sym_TILDE] = ACTIONS(22),
    [anon_sym_PLUS_PLUS] = ACTIONS(24),
    [anon_sym_DASH_DASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(32),
  },
  [37] = {
    [sym__expression] = STATE(54),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(22),
    [anon_sym_TILDE] = ACTIONS(22),
    [anon_sym_PLUS_PLUS] = ACTIONS(24),
    [anon_sym_DASH_DASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(32),
  },
  [38] = {
    [sym__expression] = STATE(55),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(22),
    [anon_sym_TILDE] = ACTIONS(22),
    [anon_sym_PLUS_PLUS] = ACTIONS(24),
    [anon_sym_DASH_DASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(32),
  },
  [39] = {
    [sym__expression] = STATE(58),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(134),
    [anon_sym_TILDE] = ACTIONS(134),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(32),
  },
  [40] = {
    [anon_sym_SEMI] = ACTIONS(112),
    [anon_sym_EQ] = ACTIONS(114),
    [anon_sym_PLUS_EQ] = ACTIONS(112),
    [anon_sym_DASH_EQ] = ACTIONS(112),
    [anon_sym_STAR_EQ] = ACTIONS(112),
    [anon_sym_SLASH_EQ] = ACTIONS(112),
    [anon_sym_AMP_EQ] = ACTIONS(112),
    [anon_sym_PIPE_EQ] = ACTIONS(112),
    [anon_sym_CARET_EQ] = ACTIONS(112),
    [anon_sym_PERCENT_EQ] = ACTIONS(112),
    [anon_sym_LT_LT_EQ] = ACTIONS(112),
    [anon_sym_GT_GT_EQ] = ACTIONS(112),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(112),
    [anon_sym_GT] = ACTIONS(114),
    [anon_sym_LT] = ACTIONS(114),
    [anon_sym_EQ_EQ] = ACTIONS(112),
    [anon_sym_GT_EQ] = ACTIONS(112),
    [anon_sym_LT_EQ] = ACTIONS(112),
    [anon_sym_BANG_EQ] = ACTIONS(112),
    [anon_sym_AMP_AMP] = ACTIONS(112),
    [anon_sym_PIPE_PIPE] = ACTIONS(112),
    [anon_sym_PLUS] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(114),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_AMP] = ACTIONS(114),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_CARET] = ACTIONS(114),
    [anon_sym_PERCENT] = ACTIONS(114),
    [anon_sym_LT_LT] = ACTIONS(114),
    [anon_sym_GT_GT] = ACTIONS(114),
    [anon_sym_GT_GT_GT] = ACTIONS(114),
    [anon_sym_QMARK] = ACTIONS(112),
    [anon_sym_COLON] = ACTIONS(112),
    [anon_sym_PLUS_PLUS] = ACTIONS(112),
    [anon_sym_DASH_DASH] = ACTIONS(112),
    [sym_comment] = ACTIONS(32),
  },
  [41] = {
    [anon_sym_module] = ACTIONS(138),
    [sym_comment] = ACTIONS(32),
  },
  [42] = {
    [anon_sym_SEMI] = ACTIONS(140),
    [sym_comment] = ACTIONS(32),
  },
  [43] = {
    [anon_sym_SEMI] = ACTIONS(142),
    [anon_sym_RPAREN] = ACTIONS(142),
    [anon_sym_COMMA] = ACTIONS(142),
    [sym_comment] = ACTIONS(32),
  },
  [44] = {
    [anon_sym_SQUOTE] = ACTIONS(144),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(144),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(144),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(144),
    [sym_comment] = ACTIONS(44),
  },
  [45] = {
    [sym_element_value_pair_list] = STATE(63),
    [sym_element_value_pair] = STATE(64),
    [anon_sym_RPAREN] = ACTIONS(146),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(32),
  },
  [46] = {
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(32),
  },
  [47] = {
    [anon_sym_SEMI] = ACTIONS(152),
    [sym_comment] = ACTIONS(32),
  },
  [48] = {
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(32),
  },
  [49] = {
    [anon_sym_SEMI] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(158),
    [sym_comment] = ACTIONS(32),
  },
  [50] = {
    [anon_sym_SEMI] = ACTIONS(160),
    [anon_sym_EQ] = ACTIONS(60),
    [anon_sym_PLUS_EQ] = ACTIONS(62),
    [anon_sym_DASH_EQ] = ACTIONS(62),
    [anon_sym_STAR_EQ] = ACTIONS(62),
    [anon_sym_SLASH_EQ] = ACTIONS(62),
    [anon_sym_AMP_EQ] = ACTIONS(62),
    [anon_sym_PIPE_EQ] = ACTIONS(62),
    [anon_sym_CARET_EQ] = ACTIONS(62),
    [anon_sym_PERCENT_EQ] = ACTIONS(62),
    [anon_sym_LT_LT_EQ] = ACTIONS(62),
    [anon_sym_GT_GT_EQ] = ACTIONS(62),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(62),
    [anon_sym_GT] = ACTIONS(64),
    [anon_sym_LT] = ACTIONS(64),
    [anon_sym_EQ_EQ] = ACTIONS(66),
    [anon_sym_GT_EQ] = ACTIONS(66),
    [anon_sym_LT_EQ] = ACTIONS(66),
    [anon_sym_BANG_EQ] = ACTIONS(66),
    [anon_sym_AMP_AMP] = ACTIONS(68),
    [anon_sym_PIPE_PIPE] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(74),
    [anon_sym_AMP] = ACTIONS(76),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(78),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_LT_LT] = ACTIONS(74),
    [anon_sym_GT_GT] = ACTIONS(74),
    [anon_sym_GT_GT_GT] = ACTIONS(74),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(32),
  },
  [51] = {
    [anon_sym_SEMI] = ACTIONS(162),
    [anon_sym_EQ] = ACTIONS(164),
    [anon_sym_PLUS_EQ] = ACTIONS(162),
    [anon_sym_DASH_EQ] = ACTIONS(162),
    [anon_sym_STAR_EQ] = ACTIONS(162),
    [anon_sym_SLASH_EQ] = ACTIONS(162),
    [anon_sym_AMP_EQ] = ACTIONS(162),
    [anon_sym_PIPE_EQ] = ACTIONS(162),
    [anon_sym_CARET_EQ] = ACTIONS(162),
    [anon_sym_PERCENT_EQ] = ACTIONS(162),
    [anon_sym_LT_LT_EQ] = ACTIONS(162),
    [anon_sym_GT_GT_EQ] = ACTIONS(162),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(164),
    [anon_sym_LT] = ACTIONS(164),
    [anon_sym_EQ_EQ] = ACTIONS(162),
    [anon_sym_GT_EQ] = ACTIONS(162),
    [anon_sym_LT_EQ] = ACTIONS(162),
    [anon_sym_BANG_EQ] = ACTIONS(162),
    [anon_sym_AMP_AMP] = ACTIONS(162),
    [anon_sym_PIPE_PIPE] = ACTIONS(162),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(164),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(74),
    [anon_sym_AMP] = ACTIONS(164),
    [anon_sym_PIPE] = ACTIONS(164),
    [anon_sym_CARET] = ACTIONS(164),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_LT_LT] = ACTIONS(74),
    [anon_sym_GT_GT] = ACTIONS(74),
    [anon_sym_GT_GT_GT] = ACTIONS(74),
    [anon_sym_QMARK] = ACTIONS(162),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(32),
  },
  [52] = {
    [anon_sym_SEMI] = ACTIONS(162),
    [anon_sym_EQ] = ACTIONS(164),
    [anon_sym_PLUS_EQ] = ACTIONS(162),
    [anon_sym_DASH_EQ] = ACTIONS(162),
    [anon_sym_STAR_EQ] = ACTIONS(162),
    [anon_sym_SLASH_EQ] = ACTIONS(162),
    [anon_sym_AMP_EQ] = ACTIONS(162),
    [anon_sym_PIPE_EQ] = ACTIONS(162),
    [anon_sym_CARET_EQ] = ACTIONS(162),
    [anon_sym_PERCENT_EQ] = ACTIONS(162),
    [anon_sym_LT_LT_EQ] = ACTIONS(162),
    [anon_sym_GT_GT_EQ] = ACTIONS(162),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(64),
    [anon_sym_LT] = ACTIONS(64),
    [anon_sym_EQ_EQ] = ACTIONS(66),
    [anon_sym_GT_EQ] = ACTIONS(66),
    [anon_sym_LT_EQ] = ACTIONS(66),
    [anon_sym_BANG_EQ] = ACTIONS(66),
    [anon_sym_AMP_AMP] = ACTIONS(162),
    [anon_sym_PIPE_PIPE] = ACTIONS(162),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(74),
    [anon_sym_AMP] = ACTIONS(164),
    [anon_sym_PIPE] = ACTIONS(164),
    [anon_sym_CARET] = ACTIONS(164),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_LT_LT] = ACTIONS(74),
    [anon_sym_GT_GT] = ACTIONS(74),
    [anon_sym_GT_GT_GT] = ACTIONS(74),
    [anon_sym_QMARK] = ACTIONS(162),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(32),
  },
  [53] = {
    [anon_sym_SEMI] = ACTIONS(162),
    [anon_sym_EQ] = ACTIONS(164),
    [anon_sym_PLUS_EQ] = ACTIONS(162),
    [anon_sym_DASH_EQ] = ACTIONS(162),
    [anon_sym_STAR_EQ] = ACTIONS(162),
    [anon_sym_SLASH_EQ] = ACTIONS(162),
    [anon_sym_AMP_EQ] = ACTIONS(162),
    [anon_sym_PIPE_EQ] = ACTIONS(162),
    [anon_sym_CARET_EQ] = ACTIONS(162),
    [anon_sym_PERCENT_EQ] = ACTIONS(162),
    [anon_sym_LT_LT_EQ] = ACTIONS(162),
    [anon_sym_GT_GT_EQ] = ACTIONS(162),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(64),
    [anon_sym_LT] = ACTIONS(64),
    [anon_sym_EQ_EQ] = ACTIONS(66),
    [anon_sym_GT_EQ] = ACTIONS(66),
    [anon_sym_LT_EQ] = ACTIONS(66),
    [anon_sym_BANG_EQ] = ACTIONS(66),
    [anon_sym_AMP_AMP] = ACTIONS(68),
    [anon_sym_PIPE_PIPE] = ACTIONS(162),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(74),
    [anon_sym_AMP] = ACTIONS(76),
    [anon_sym_PIPE] = ACTIONS(164),
    [anon_sym_CARET] = ACTIONS(164),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_LT_LT] = ACTIONS(74),
    [anon_sym_GT_GT] = ACTIONS(74),
    [anon_sym_GT_GT_GT] = ACTIONS(74),
    [anon_sym_QMARK] = ACTIONS(162),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(32),
  },
  [54] = {
    [anon_sym_SEMI] = ACTIONS(162),
    [anon_sym_EQ] = ACTIONS(164),
    [anon_sym_PLUS_EQ] = ACTIONS(162),
    [anon_sym_DASH_EQ] = ACTIONS(162),
    [anon_sym_STAR_EQ] = ACTIONS(162),
    [anon_sym_SLASH_EQ] = ACTIONS(162),
    [anon_sym_AMP_EQ] = ACTIONS(162),
    [anon_sym_PIPE_EQ] = ACTIONS(162),
    [anon_sym_CARET_EQ] = ACTIONS(162),
    [anon_sym_PERCENT_EQ] = ACTIONS(162),
    [anon_sym_LT_LT_EQ] = ACTIONS(162),
    [anon_sym_GT_GT_EQ] = ACTIONS(162),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(64),
    [anon_sym_LT] = ACTIONS(64),
    [anon_sym_EQ_EQ] = ACTIONS(66),
    [anon_sym_GT_EQ] = ACTIONS(66),
    [anon_sym_LT_EQ] = ACTIONS(66),
    [anon_sym_BANG_EQ] = ACTIONS(66),
    [anon_sym_AMP_AMP] = ACTIONS(162),
    [anon_sym_PIPE_PIPE] = ACTIONS(162),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(164),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(74),
    [anon_sym_AMP] = ACTIONS(164),
    [anon_sym_PIPE] = ACTIONS(164),
    [anon_sym_CARET] = ACTIONS(164),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_LT_LT] = ACTIONS(74),
    [anon_sym_GT_GT] = ACTIONS(74),
    [anon_sym_GT_GT_GT] = ACTIONS(74),
    [anon_sym_QMARK] = ACTIONS(162),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(32),
  },
  [55] = {
    [anon_sym_SEMI] = ACTIONS(162),
    [anon_sym_EQ] = ACTIONS(164),
    [anon_sym_PLUS_EQ] = ACTIONS(162),
    [anon_sym_DASH_EQ] = ACTIONS(162),
    [anon_sym_STAR_EQ] = ACTIONS(162),
    [anon_sym_SLASH_EQ] = ACTIONS(162),
    [anon_sym_AMP_EQ] = ACTIONS(162),
    [anon_sym_PIPE_EQ] = ACTIONS(162),
    [anon_sym_CARET_EQ] = ACTIONS(162),
    [anon_sym_PERCENT_EQ] = ACTIONS(162),
    [anon_sym_LT_LT_EQ] = ACTIONS(162),
    [anon_sym_GT_GT_EQ] = ACTIONS(162),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(164),
    [anon_sym_LT] = ACTIONS(164),
    [anon_sym_EQ_EQ] = ACTIONS(162),
    [anon_sym_GT_EQ] = ACTIONS(162),
    [anon_sym_LT_EQ] = ACTIONS(162),
    [anon_sym_BANG_EQ] = ACTIONS(162),
    [anon_sym_AMP_AMP] = ACTIONS(162),
    [anon_sym_PIPE_PIPE] = ACTIONS(162),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(164),
    [anon_sym_STAR] = ACTIONS(164),
    [anon_sym_SLASH] = ACTIONS(164),
    [anon_sym_AMP] = ACTIONS(164),
    [anon_sym_PIPE] = ACTIONS(164),
    [anon_sym_CARET] = ACTIONS(164),
    [anon_sym_PERCENT] = ACTIONS(164),
    [anon_sym_LT_LT] = ACTIONS(164),
    [anon_sym_GT_GT] = ACTIONS(164),
    [anon_sym_GT_GT_GT] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(162),
    [anon_sym_COLON] = ACTIONS(162),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(32),
  },
  [56] = {
    [sym__expression] = STATE(25),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(134),
    [anon_sym_TILDE] = ACTIONS(134),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(32),
  },
  [57] = {
    [sym__expression] = STATE(26),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(134),
    [anon_sym_TILDE] = ACTIONS(134),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(32),
  },
  [58] = {
    [anon_sym_EQ] = ACTIONS(166),
    [anon_sym_PLUS_EQ] = ACTIONS(168),
    [anon_sym_DASH_EQ] = ACTIONS(168),
    [anon_sym_STAR_EQ] = ACTIONS(168),
    [anon_sym_SLASH_EQ] = ACTIONS(168),
    [anon_sym_AMP_EQ] = ACTIONS(168),
    [anon_sym_PIPE_EQ] = ACTIONS(168),
    [anon_sym_CARET_EQ] = ACTIONS(168),
    [anon_sym_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_LT_LT_EQ] = ACTIONS(168),
    [anon_sym_GT_GT_EQ] = ACTIONS(168),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(168),
    [anon_sym_GT] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [anon_sym_GT_EQ] = ACTIONS(172),
    [anon_sym_LT_EQ] = ACTIONS(172),
    [anon_sym_BANG_EQ] = ACTIONS(172),
    [anon_sym_AMP_AMP] = ACTIONS(174),
    [anon_sym_PIPE_PIPE] = ACTIONS(176),
    [anon_sym_PLUS] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_STAR] = ACTIONS(180),
    [anon_sym_SLASH] = ACTIONS(180),
    [anon_sym_AMP] = ACTIONS(182),
    [anon_sym_PIPE] = ACTIONS(184),
    [anon_sym_CARET] = ACTIONS(184),
    [anon_sym_PERCENT] = ACTIONS(180),
    [anon_sym_LT_LT] = ACTIONS(180),
    [anon_sym_GT_GT] = ACTIONS(180),
    [anon_sym_GT_GT_GT] = ACTIONS(180),
    [anon_sym_QMARK] = ACTIONS(186),
    [anon_sym_COLON] = ACTIONS(188),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(32),
  },
  [59] = {
    [sym_module_identifier] = STATE(76),
    [sym_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(32),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(190),
    [sym_decimal_integer_literal] = ACTIONS(192),
    [sym_hex_integer_literal] = ACTIONS(192),
    [sym_octal_integer_literal] = ACTIONS(192),
    [sym_binary_integer_literal] = ACTIONS(192),
    [sym_decimal_floating_point_literal] = ACTIONS(192),
    [sym_hex_floating_point_literal] = ACTIONS(194),
    [anon_sym_true] = ACTIONS(190),
    [anon_sym_false] = ACTIONS(190),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [sym_string_literal] = ACTIONS(190),
    [sym_null_literal] = ACTIONS(190),
    [anon_sym_BANG] = ACTIONS(190),
    [anon_sym_TILDE] = ACTIONS(190),
    [anon_sym_PLUS_PLUS] = ACTIONS(190),
    [anon_sym_DASH_DASH] = ACTIONS(190),
    [anon_sym_AT] = ACTIONS(190),
    [anon_sym_open] = ACTIONS(190),
    [anon_sym_module] = ACTIONS(190),
    [sym_comment] = ACTIONS(32),
  },
  [61] = {
    [anon_sym_RPAREN] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(196),
    [anon_sym_open] = ACTIONS(196),
    [anon_sym_module] = ACTIONS(196),
    [sym_comment] = ACTIONS(32),
  },
  [62] = {
    [anon_sym_EQ] = ACTIONS(198),
    [sym_comment] = ACTIONS(32),
  },
  [63] = {
    [anon_sym_RPAREN] = ACTIONS(200),
    [sym_comment] = ACTIONS(32),
  },
  [64] = {
    [aux_sym_element_value_pair_list_repeat1] = STATE(80),
    [anon_sym_RPAREN] = ACTIONS(202),
    [anon_sym_COMMA] = ACTIONS(204),
    [sym_comment] = ACTIONS(32),
  },
  [65] = {
    [anon_sym_LPAREN] = ACTIONS(206),
    [anon_sym_DOT] = ACTIONS(206),
    [sym_comment] = ACTIONS(32),
  },
  [66] = {
    [anon_sym_SEMI] = ACTIONS(208),
    [anon_sym_DOT] = ACTIONS(208),
    [sym_comment] = ACTIONS(32),
  },
  [67] = {
    [sym_identifier] = ACTIONS(210),
    [sym_comment] = ACTIONS(32),
  },
  [68] = {
    [sym__expression] = STATE(82),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(134),
    [anon_sym_TILDE] = ACTIONS(134),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(32),
  },
  [69] = {
    [sym__expression] = STATE(83),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(134),
    [anon_sym_TILDE] = ACTIONS(134),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(32),
  },
  [70] = {
    [sym__expression] = STATE(84),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(134),
    [anon_sym_TILDE] = ACTIONS(134),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(32),
  },
  [71] = {
    [sym__expression] = STATE(85),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(134),
    [anon_sym_TILDE] = ACTIONS(134),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(32),
  },
  [72] = {
    [sym__expression] = STATE(86),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(134),
    [anon_sym_TILDE] = ACTIONS(134),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(32),
  },
  [73] = {
    [sym__expression] = STATE(55),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(134),
    [anon_sym_TILDE] = ACTIONS(134),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(32),
  },
  [74] = {
    [sym__expression] = STATE(87),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(134),
    [anon_sym_TILDE] = ACTIONS(134),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(32),
  },
  [75] = {
    [sym__expression] = STATE(88),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(22),
    [anon_sym_TILDE] = ACTIONS(22),
    [anon_sym_PLUS_PLUS] = ACTIONS(24),
    [anon_sym_DASH_DASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(32),
  },
  [76] = {
    [anon_sym_SEMI] = ACTIONS(212),
    [sym_comment] = ACTIONS(32),
  },
  [77] = {
    [sym__literal] = STATE(89),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__annotation] = STATE(89),
    [sym_normal_annotation] = STATE(19),
    [sym_element_value] = STATE(90),
    [sym_element_value_array_initializer] = STATE(89),
    [sym_element_value_list] = STATE(91),
    [sym_decimal_integer_literal] = ACTIONS(10),
    [sym_hex_integer_literal] = ACTIONS(10),
    [sym_octal_integer_literal] = ACTIONS(10),
    [sym_binary_integer_literal] = ACTIONS(10),
    [sym_decimal_floating_point_literal] = ACTIONS(12),
    [sym_hex_floating_point_literal] = ACTIONS(14),
    [anon_sym_true] = ACTIONS(16),
    [anon_sym_false] = ACTIONS(16),
    [anon_sym_SQUOTE] = ACTIONS(18),
    [sym_string_literal] = ACTIONS(20),
    [sym_null_literal] = ACTIONS(20),
    [anon_sym_AT] = ACTIONS(26),
    [sym_comment] = ACTIONS(32),
  },
  [78] = {
    [anon_sym_RPAREN] = ACTIONS(214),
    [anon_sym_COMMA] = ACTIONS(214),
    [anon_sym_open] = ACTIONS(214),
    [anon_sym_module] = ACTIONS(214),
    [sym_comment] = ACTIONS(32),
  },
  [79] = {
    [sym_element_value_pair] = STATE(92),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(32),
  },
  [80] = {
    [anon_sym_RPAREN] = ACTIONS(216),
    [anon_sym_COMMA] = ACTIONS(218),
    [sym_comment] = ACTIONS(32),
  },
  [81] = {
    [anon_sym_SEMI] = ACTIONS(220),
    [anon_sym_DOT] = ACTIONS(220),
    [sym_comment] = ACTIONS(32),
  },
  [82] = {
    [anon_sym_EQ] = ACTIONS(166),
    [anon_sym_PLUS_EQ] = ACTIONS(168),
    [anon_sym_DASH_EQ] = ACTIONS(168),
    [anon_sym_STAR_EQ] = ACTIONS(168),
    [anon_sym_SLASH_EQ] = ACTIONS(168),
    [anon_sym_AMP_EQ] = ACTIONS(168),
    [anon_sym_PIPE_EQ] = ACTIONS(168),
    [anon_sym_CARET_EQ] = ACTIONS(168),
    [anon_sym_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_LT_LT_EQ] = ACTIONS(168),
    [anon_sym_GT_GT_EQ] = ACTIONS(168),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(168),
    [anon_sym_GT] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [anon_sym_GT_EQ] = ACTIONS(172),
    [anon_sym_LT_EQ] = ACTIONS(172),
    [anon_sym_BANG_EQ] = ACTIONS(172),
    [anon_sym_AMP_AMP] = ACTIONS(174),
    [anon_sym_PIPE_PIPE] = ACTIONS(176),
    [anon_sym_PLUS] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_STAR] = ACTIONS(180),
    [anon_sym_SLASH] = ACTIONS(180),
    [anon_sym_AMP] = ACTIONS(182),
    [anon_sym_PIPE] = ACTIONS(184),
    [anon_sym_CARET] = ACTIONS(184),
    [anon_sym_PERCENT] = ACTIONS(180),
    [anon_sym_LT_LT] = ACTIONS(180),
    [anon_sym_GT_GT] = ACTIONS(180),
    [anon_sym_GT_GT_GT] = ACTIONS(180),
    [anon_sym_QMARK] = ACTIONS(186),
    [anon_sym_COLON] = ACTIONS(160),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(32),
  },
  [83] = {
    [anon_sym_EQ] = ACTIONS(164),
    [anon_sym_PLUS_EQ] = ACTIONS(162),
    [anon_sym_DASH_EQ] = ACTIONS(162),
    [anon_sym_STAR_EQ] = ACTIONS(162),
    [anon_sym_SLASH_EQ] = ACTIONS(162),
    [anon_sym_AMP_EQ] = ACTIONS(162),
    [anon_sym_PIPE_EQ] = ACTIONS(162),
    [anon_sym_CARET_EQ] = ACTIONS(162),
    [anon_sym_PERCENT_EQ] = ACTIONS(162),
    [anon_sym_LT_LT_EQ] = ACTIONS(162),
    [anon_sym_GT_GT_EQ] = ACTIONS(162),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(164),
    [anon_sym_LT] = ACTIONS(164),
    [anon_sym_EQ_EQ] = ACTIONS(162),
    [anon_sym_GT_EQ] = ACTIONS(162),
    [anon_sym_LT_EQ] = ACTIONS(162),
    [anon_sym_BANG_EQ] = ACTIONS(162),
    [anon_sym_AMP_AMP] = ACTIONS(162),
    [anon_sym_PIPE_PIPE] = ACTIONS(162),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(164),
    [anon_sym_STAR] = ACTIONS(180),
    [anon_sym_SLASH] = ACTIONS(180),
    [anon_sym_AMP] = ACTIONS(164),
    [anon_sym_PIPE] = ACTIONS(164),
    [anon_sym_CARET] = ACTIONS(164),
    [anon_sym_PERCENT] = ACTIONS(180),
    [anon_sym_LT_LT] = ACTIONS(180),
    [anon_sym_GT_GT] = ACTIONS(180),
    [anon_sym_GT_GT_GT] = ACTIONS(180),
    [anon_sym_QMARK] = ACTIONS(162),
    [anon_sym_COLON] = ACTIONS(162),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(32),
  },
  [84] = {
    [anon_sym_EQ] = ACTIONS(164),
    [anon_sym_PLUS_EQ] = ACTIONS(162),
    [anon_sym_DASH_EQ] = ACTIONS(162),
    [anon_sym_STAR_EQ] = ACTIONS(162),
    [anon_sym_SLASH_EQ] = ACTIONS(162),
    [anon_sym_AMP_EQ] = ACTIONS(162),
    [anon_sym_PIPE_EQ] = ACTIONS(162),
    [anon_sym_CARET_EQ] = ACTIONS(162),
    [anon_sym_PERCENT_EQ] = ACTIONS(162),
    [anon_sym_LT_LT_EQ] = ACTIONS(162),
    [anon_sym_GT_GT_EQ] = ACTIONS(162),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [anon_sym_GT_EQ] = ACTIONS(172),
    [anon_sym_LT_EQ] = ACTIONS(172),
    [anon_sym_BANG_EQ] = ACTIONS(172),
    [anon_sym_AMP_AMP] = ACTIONS(162),
    [anon_sym_PIPE_PIPE] = ACTIONS(162),
    [anon_sym_PLUS] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_STAR] = ACTIONS(180),
    [anon_sym_SLASH] = ACTIONS(180),
    [anon_sym_AMP] = ACTIONS(164),
    [anon_sym_PIPE] = ACTIONS(164),
    [anon_sym_CARET] = ACTIONS(164),
    [anon_sym_PERCENT] = ACTIONS(180),
    [anon_sym_LT_LT] = ACTIONS(180),
    [anon_sym_GT_GT] = ACTIONS(180),
    [anon_sym_GT_GT_GT] = ACTIONS(180),
    [anon_sym_QMARK] = ACTIONS(162),
    [anon_sym_COLON] = ACTIONS(162),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(32),
  },
  [85] = {
    [anon_sym_EQ] = ACTIONS(164),
    [anon_sym_PLUS_EQ] = ACTIONS(162),
    [anon_sym_DASH_EQ] = ACTIONS(162),
    [anon_sym_STAR_EQ] = ACTIONS(162),
    [anon_sym_SLASH_EQ] = ACTIONS(162),
    [anon_sym_AMP_EQ] = ACTIONS(162),
    [anon_sym_PIPE_EQ] = ACTIONS(162),
    [anon_sym_CARET_EQ] = ACTIONS(162),
    [anon_sym_PERCENT_EQ] = ACTIONS(162),
    [anon_sym_LT_LT_EQ] = ACTIONS(162),
    [anon_sym_GT_GT_EQ] = ACTIONS(162),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [anon_sym_GT_EQ] = ACTIONS(172),
    [anon_sym_LT_EQ] = ACTIONS(172),
    [anon_sym_BANG_EQ] = ACTIONS(172),
    [anon_sym_AMP_AMP] = ACTIONS(174),
    [anon_sym_PIPE_PIPE] = ACTIONS(162),
    [anon_sym_PLUS] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_STAR] = ACTIONS(180),
    [anon_sym_SLASH] = ACTIONS(180),
    [anon_sym_AMP] = ACTIONS(182),
    [anon_sym_PIPE] = ACTIONS(164),
    [anon_sym_CARET] = ACTIONS(164),
    [anon_sym_PERCENT] = ACTIONS(180),
    [anon_sym_LT_LT] = ACTIONS(180),
    [anon_sym_GT_GT] = ACTIONS(180),
    [anon_sym_GT_GT_GT] = ACTIONS(180),
    [anon_sym_QMARK] = ACTIONS(162),
    [anon_sym_COLON] = ACTIONS(162),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(32),
  },
  [86] = {
    [anon_sym_EQ] = ACTIONS(164),
    [anon_sym_PLUS_EQ] = ACTIONS(162),
    [anon_sym_DASH_EQ] = ACTIONS(162),
    [anon_sym_STAR_EQ] = ACTIONS(162),
    [anon_sym_SLASH_EQ] = ACTIONS(162),
    [anon_sym_AMP_EQ] = ACTIONS(162),
    [anon_sym_PIPE_EQ] = ACTIONS(162),
    [anon_sym_CARET_EQ] = ACTIONS(162),
    [anon_sym_PERCENT_EQ] = ACTIONS(162),
    [anon_sym_LT_LT_EQ] = ACTIONS(162),
    [anon_sym_GT_GT_EQ] = ACTIONS(162),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [anon_sym_GT_EQ] = ACTIONS(172),
    [anon_sym_LT_EQ] = ACTIONS(172),
    [anon_sym_BANG_EQ] = ACTIONS(172),
    [anon_sym_AMP_AMP] = ACTIONS(162),
    [anon_sym_PIPE_PIPE] = ACTIONS(162),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(164),
    [anon_sym_STAR] = ACTIONS(180),
    [anon_sym_SLASH] = ACTIONS(180),
    [anon_sym_AMP] = ACTIONS(164),
    [anon_sym_PIPE] = ACTIONS(164),
    [anon_sym_CARET] = ACTIONS(164),
    [anon_sym_PERCENT] = ACTIONS(180),
    [anon_sym_LT_LT] = ACTIONS(180),
    [anon_sym_GT_GT] = ACTIONS(180),
    [anon_sym_GT_GT_GT] = ACTIONS(180),
    [anon_sym_QMARK] = ACTIONS(162),
    [anon_sym_COLON] = ACTIONS(162),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(32),
  },
  [87] = {
    [anon_sym_EQ] = ACTIONS(166),
    [anon_sym_PLUS_EQ] = ACTIONS(168),
    [anon_sym_DASH_EQ] = ACTIONS(168),
    [anon_sym_STAR_EQ] = ACTIONS(168),
    [anon_sym_SLASH_EQ] = ACTIONS(168),
    [anon_sym_AMP_EQ] = ACTIONS(168),
    [anon_sym_PIPE_EQ] = ACTIONS(168),
    [anon_sym_CARET_EQ] = ACTIONS(168),
    [anon_sym_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_LT_LT_EQ] = ACTIONS(168),
    [anon_sym_GT_GT_EQ] = ACTIONS(168),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(168),
    [anon_sym_GT] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [anon_sym_GT_EQ] = ACTIONS(172),
    [anon_sym_LT_EQ] = ACTIONS(172),
    [anon_sym_BANG_EQ] = ACTIONS(172),
    [anon_sym_AMP_AMP] = ACTIONS(174),
    [anon_sym_PIPE_PIPE] = ACTIONS(176),
    [anon_sym_PLUS] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_STAR] = ACTIONS(180),
    [anon_sym_SLASH] = ACTIONS(180),
    [anon_sym_AMP] = ACTIONS(182),
    [anon_sym_PIPE] = ACTIONS(184),
    [anon_sym_CARET] = ACTIONS(184),
    [anon_sym_PERCENT] = ACTIONS(180),
    [anon_sym_LT_LT] = ACTIONS(180),
    [anon_sym_GT_GT] = ACTIONS(180),
    [anon_sym_GT_GT_GT] = ACTIONS(180),
    [anon_sym_QMARK] = ACTIONS(186),
    [anon_sym_COLON] = ACTIONS(222),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(32),
  },
  [88] = {
    [anon_sym_SEMI] = ACTIONS(224),
    [anon_sym_EQ] = ACTIONS(226),
    [anon_sym_PLUS_EQ] = ACTIONS(224),
    [anon_sym_DASH_EQ] = ACTIONS(224),
    [anon_sym_STAR_EQ] = ACTIONS(224),
    [anon_sym_SLASH_EQ] = ACTIONS(224),
    [anon_sym_AMP_EQ] = ACTIONS(224),
    [anon_sym_PIPE_EQ] = ACTIONS(224),
    [anon_sym_CARET_EQ] = ACTIONS(224),
    [anon_sym_PERCENT_EQ] = ACTIONS(224),
    [anon_sym_LT_LT_EQ] = ACTIONS(224),
    [anon_sym_GT_GT_EQ] = ACTIONS(224),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(224),
    [anon_sym_GT] = ACTIONS(64),
    [anon_sym_LT] = ACTIONS(64),
    [anon_sym_EQ_EQ] = ACTIONS(66),
    [anon_sym_GT_EQ] = ACTIONS(66),
    [anon_sym_LT_EQ] = ACTIONS(66),
    [anon_sym_BANG_EQ] = ACTIONS(66),
    [anon_sym_AMP_AMP] = ACTIONS(68),
    [anon_sym_PIPE_PIPE] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(74),
    [anon_sym_AMP] = ACTIONS(76),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(78),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_LT_LT] = ACTIONS(74),
    [anon_sym_GT_GT] = ACTIONS(74),
    [anon_sym_GT_GT_GT] = ACTIONS(74),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(32),
  },
  [89] = {
    [anon_sym_RPAREN] = ACTIONS(228),
    [anon_sym_COMMA] = ACTIONS(228),
    [sym_comment] = ACTIONS(32),
  },
  [90] = {
    [aux_sym_element_value_list_repeat1] = STATE(96),
    [anon_sym_RPAREN] = ACTIONS(230),
    [anon_sym_COMMA] = ACTIONS(230),
    [sym_comment] = ACTIONS(32),
  },
  [91] = {
    [anon_sym_RPAREN] = ACTIONS(232),
    [anon_sym_COMMA] = ACTIONS(234),
    [sym_comment] = ACTIONS(32),
  },
  [92] = {
    [anon_sym_RPAREN] = ACTIONS(236),
    [anon_sym_COMMA] = ACTIONS(236),
    [sym_comment] = ACTIONS(32),
  },
  [93] = {
    [sym_element_value_pair] = STATE(98),
    [sym_identifier] = ACTIONS(148),
    [sym_comment] = ACTIONS(32),
  },
  [94] = {
    [sym__expression] = STATE(99),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(134),
    [anon_sym_TILDE] = ACTIONS(134),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(32),
  },
  [95] = {
    [sym__literal] = STATE(89),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__annotation] = STATE(89),
    [sym_normal_annotation] = STATE(19),
    [sym_element_value] = STATE(100),
    [sym_element_value_array_initializer] = STATE(89),
    [sym_element_value_list] = STATE(91),
    [sym_decimal_integer_literal] = ACTIONS(10),
    [sym_hex_integer_literal] = ACTIONS(10),
    [sym_octal_integer_literal] = ACTIONS(10),
    [sym_binary_integer_literal] = ACTIONS(10),
    [sym_decimal_floating_point_literal] = ACTIONS(12),
    [sym_hex_floating_point_literal] = ACTIONS(14),
    [anon_sym_true] = ACTIONS(16),
    [anon_sym_false] = ACTIONS(16),
    [anon_sym_SQUOTE] = ACTIONS(18),
    [sym_string_literal] = ACTIONS(20),
    [sym_null_literal] = ACTIONS(20),
    [anon_sym_AT] = ACTIONS(26),
    [sym_comment] = ACTIONS(32),
  },
  [96] = {
    [anon_sym_RPAREN] = ACTIONS(238),
    [anon_sym_COMMA] = ACTIONS(240),
    [sym_comment] = ACTIONS(32),
  },
  [97] = {
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_COMMA] = ACTIONS(243),
    [sym_comment] = ACTIONS(32),
  },
  [98] = {
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(245),
    [sym_comment] = ACTIONS(32),
  },
  [99] = {
    [anon_sym_EQ] = ACTIONS(226),
    [anon_sym_PLUS_EQ] = ACTIONS(224),
    [anon_sym_DASH_EQ] = ACTIONS(224),
    [anon_sym_STAR_EQ] = ACTIONS(224),
    [anon_sym_SLASH_EQ] = ACTIONS(224),
    [anon_sym_AMP_EQ] = ACTIONS(224),
    [anon_sym_PIPE_EQ] = ACTIONS(224),
    [anon_sym_CARET_EQ] = ACTIONS(224),
    [anon_sym_PERCENT_EQ] = ACTIONS(224),
    [anon_sym_LT_LT_EQ] = ACTIONS(224),
    [anon_sym_GT_GT_EQ] = ACTIONS(224),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(224),
    [anon_sym_GT] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [anon_sym_GT_EQ] = ACTIONS(172),
    [anon_sym_LT_EQ] = ACTIONS(172),
    [anon_sym_BANG_EQ] = ACTIONS(172),
    [anon_sym_AMP_AMP] = ACTIONS(174),
    [anon_sym_PIPE_PIPE] = ACTIONS(176),
    [anon_sym_PLUS] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_STAR] = ACTIONS(180),
    [anon_sym_SLASH] = ACTIONS(180),
    [anon_sym_AMP] = ACTIONS(182),
    [anon_sym_PIPE] = ACTIONS(184),
    [anon_sym_CARET] = ACTIONS(184),
    [anon_sym_PERCENT] = ACTIONS(180),
    [anon_sym_LT_LT] = ACTIONS(180),
    [anon_sym_GT_GT] = ACTIONS(180),
    [anon_sym_GT_GT_GT] = ACTIONS(180),
    [anon_sym_QMARK] = ACTIONS(186),
    [anon_sym_COLON] = ACTIONS(224),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(32),
  },
  [100] = {
    [aux_sym_element_value_list_repeat1] = STATE(96),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_COMMA] = ACTIONS(250),
    [sym_comment] = ACTIONS(32),
  },
  [101] = {
    [sym__literal] = STATE(89),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__annotation] = STATE(89),
    [sym_normal_annotation] = STATE(19),
    [sym_element_value] = STATE(102),
    [sym_element_value_array_initializer] = STATE(89),
    [sym_element_value_list] = STATE(91),
    [sym_decimal_integer_literal] = ACTIONS(10),
    [sym_hex_integer_literal] = ACTIONS(10),
    [sym_octal_integer_literal] = ACTIONS(10),
    [sym_binary_integer_literal] = ACTIONS(10),
    [sym_decimal_floating_point_literal] = ACTIONS(12),
    [sym_hex_floating_point_literal] = ACTIONS(14),
    [anon_sym_true] = ACTIONS(16),
    [anon_sym_false] = ACTIONS(16),
    [anon_sym_SQUOTE] = ACTIONS(18),
    [sym_string_literal] = ACTIONS(20),
    [sym_null_literal] = ACTIONS(20),
    [anon_sym_AT] = ACTIONS(26),
    [sym_comment] = ACTIONS(32),
  },
  [102] = {
    [aux_sym_element_value_list_repeat1] = STATE(96),
    [anon_sym_RPAREN] = ACTIONS(254),
    [anon_sym_COMMA] = ACTIONS(257),
    [sym_comment] = ACTIONS(32),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(), RECOVER(),
  [8] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [14] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(3),
  [16] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(9),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_floating_point_literal, 1),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_literal, 1),
  [40] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(22),
  [42] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(23),
  [44] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(27),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(30),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(33),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(37),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(38),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(35),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(36),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1, .fragile = true),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1, .fragile = true),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 1),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_binary_expression, 1),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__annotation, 1),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 2),
  [102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_character_literal_repeat1, 1),
  [104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unary_expression, 2),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_unary_expression, 2),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_update_expression, 2),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_update_expression, 2),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 1),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_identifier, 1),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 2),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [132] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
  [144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_character_literal_repeat1, 2),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(62),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 3),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_identifier, 2),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3, .fragile = true),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 3),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_binary_expression, 3),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(68),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(72),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(73),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(71),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 3),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 3),
  [194] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 3),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 4),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair_list, 1),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 3),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_identifier_repeat1, 2),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 4),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 5),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair_list, 2),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_identifier_repeat1, 3),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_ternary_expression, 5, .fragile = true),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_ternary_expression, 5, .fragile = true),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value, 1),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair, 3),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 1, .fragile = true),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_pair_list_repeat1, 2),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_list, 2, .fragile = true),
  [240] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_list, 2, .fragile = true), SHIFT(101),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 2),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_pair_list_repeat1, 3),
  [247] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_list, 1, .fragile = true), REDUCE(aux_sym_element_value_list_repeat1, 2, .fragile = true),
  [250] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_list, 1, .fragile = true), REDUCE(aux_sym_element_value_list_repeat1, 2, .fragile = true), SHIFT(95),
  [254] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_list, 1, .fragile = true), REDUCE(aux_sym_element_value_list_repeat1, 3, .fragile = true),
  [257] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_list, 1, .fragile = true), REDUCE(aux_sym_element_value_list_repeat1, 3, .fragile = true), SHIFT(95),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_java() {
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
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
