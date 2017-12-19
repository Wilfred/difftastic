#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 155
#define SYMBOL_COUNT 107
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
  sym_marker_annotation = 81,
  sym_element_value_pair_list = 82,
  sym_element_value_pair = 83,
  sym_element_value = 84,
  sym_conditional_expression = 85,
  sym_conditional_or_expression = 86,
  sym_conditional_and_expression = 87,
  sym_inclusive_or_expression = 88,
  sym_exclusive_or_expression = 89,
  sym_and_expression = 90,
  sym_relational_expression = 91,
  sym_equality_expression = 92,
  sym_shift_expression = 93,
  sym_additive_expression = 94,
  sym_multiplicative_expression = 95,
  sym_element_value_array_initializer = 96,
  sym_element_value_list = 97,
  sym__declaration = 98,
  sym_module_declaration = 99,
  sym_module_identifier = 100,
  sym_package_or_type_name = 101,
  aux_sym_program_repeat1 = 102,
  aux_sym_character_literal_repeat1 = 103,
  aux_sym_element_value_pair_list_repeat1 = 104,
  aux_sym_element_value_list_repeat1 = 105,
  aux_sym_module_identifier_repeat1 = 106,
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
  [sym_marker_annotation] = "marker_annotation",
  [sym_element_value_pair_list] = "element_value_pair_list",
  [sym_element_value_pair] = "element_value_pair",
  [sym_element_value] = "element_value",
  [sym_conditional_expression] = "conditional_expression",
  [sym_conditional_or_expression] = "conditional_or_expression",
  [sym_conditional_and_expression] = "conditional_and_expression",
  [sym_inclusive_or_expression] = "inclusive_or_expression",
  [sym_exclusive_or_expression] = "exclusive_or_expression",
  [sym_and_expression] = "and_expression",
  [sym_relational_expression] = "relational_expression",
  [sym_equality_expression] = "equality_expression",
  [sym_shift_expression] = "shift_expression",
  [sym_additive_expression] = "additive_expression",
  [sym_multiplicative_expression] = "multiplicative_expression",
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
  [sym_marker_annotation] = {
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
  [sym_conditional_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_or_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_and_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_inclusive_or_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_exclusive_or_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_and_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_relational_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_equality_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_shift_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_additive_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_multiplicative_expression] = {
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
    case 128:
      if (lookahead == '!')
        ADVANCE(120);
      if (lookahead == '%')
        ADVANCE(129);
      if (lookahead == '&')
        ADVANCE(130);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(131);
      if (lookahead == '+')
        ADVANCE(132);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(133);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == '<')
        ADVANCE(135);
      if (lookahead == '=')
        ADVANCE(137);
      if (lookahead == '>')
        ADVANCE(138);
      if (lookahead == '?')
        ADVANCE(43);
      if (lookahead == '^')
        ADVANCE(141);
      if (lookahead == '|')
        ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 130:
      if (lookahead == '&')
        ADVANCE(8);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(27);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 137:
      if (lookahead == '=')
        ADVANCE(36);
      END_STATE();
    case 138:
      if (lookahead == '>')
        ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>')
        ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(51);
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
  [89] = {.lex_state = 55},
  [90] = {.lex_state = 119},
  [91] = {.lex_state = 128},
  [92] = {.lex_state = 119},
  [93] = {.lex_state = 119},
  [94] = {.lex_state = 119},
  [95] = {.lex_state = 119},
  [96] = {.lex_state = 119},
  [97] = {.lex_state = 119},
  [98] = {.lex_state = 119},
  [99] = {.lex_state = 119},
  [100] = {.lex_state = 119},
  [101] = {.lex_state = 128},
  [102] = {.lex_state = 128},
  [103] = {.lex_state = 119},
  [104] = {.lex_state = 119},
  [105] = {.lex_state = 127},
  [106] = {.lex_state = 55},
  [107] = {.lex_state = 55},
  [108] = {.lex_state = 55},
  [109] = {.lex_state = 119},
  [110] = {.lex_state = 55},
  [111] = {.lex_state = 119},
  [112] = {.lex_state = 55},
  [113] = {.lex_state = 55},
  [114] = {.lex_state = 55},
  [115] = {.lex_state = 55},
  [116] = {.lex_state = 55},
  [117] = {.lex_state = 55},
  [118] = {.lex_state = 55},
  [119] = {.lex_state = 55},
  [120] = {.lex_state = 55},
  [121] = {.lex_state = 55},
  [122] = {.lex_state = 119},
  [123] = {.lex_state = 119},
  [124] = {.lex_state = 119},
  [125] = {.lex_state = 55},
  [126] = {.lex_state = 55},
  [127] = {.lex_state = 55},
  [128] = {.lex_state = 55},
  [129] = {.lex_state = 55},
  [130] = {.lex_state = 55},
  [131] = {.lex_state = 55},
  [132] = {.lex_state = 119},
  [133] = {.lex_state = 55},
  [134] = {.lex_state = 119},
  [135] = {.lex_state = 119},
  [136] = {.lex_state = 119},
  [137] = {.lex_state = 119},
  [138] = {.lex_state = 119},
  [139] = {.lex_state = 119},
  [140] = {.lex_state = 119},
  [141] = {.lex_state = 128},
  [142] = {.lex_state = 128},
  [143] = {.lex_state = 128},
  [144] = {.lex_state = 119},
  [145] = {.lex_state = 119},
  [146] = {.lex_state = 119},
  [147] = {.lex_state = 119},
  [148] = {.lex_state = 119},
  [149] = {.lex_state = 119},
  [150] = {.lex_state = 119},
  [151] = {.lex_state = 55},
  [152] = {.lex_state = 55},
  [153] = {.lex_state = 119},
  [154] = {.lex_state = 119},
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
    [sym_marker_annotation] = STATE(19),
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
    [anon_sym_RPAREN] = ACTIONS(84),
    [anon_sym_COMMA] = ACTIONS(84),
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
    [anon_sym_RPAREN] = ACTIONS(88),
    [anon_sym_COMMA] = ACTIONS(88),
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
    [sym_marker_annotation] = STATE(19),
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
    [anon_sym_RPAREN] = ACTIONS(108),
    [anon_sym_COMMA] = ACTIONS(108),
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
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_COMMA] = ACTIONS(112),
    [sym_comment] = ACTIONS(32),
  },
  [27] = {
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_COMMA] = ACTIONS(116),
    [anon_sym_open] = ACTIONS(116),
    [anon_sym_module] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [sym_comment] = ACTIONS(32),
  },
  [28] = {
    [anon_sym_LPAREN] = ACTIONS(118),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(120),
    [anon_sym_open] = ACTIONS(120),
    [anon_sym_module] = ACTIONS(120),
    [anon_sym_DOT] = ACTIONS(122),
    [sym_comment] = ACTIONS(32),
  },
  [29] = {
    [sym_module_identifier] = STATE(47),
    [sym_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(32),
  },
  [30] = {
    [aux_sym_module_identifier_repeat1] = STATE(49),
    [anon_sym_SEMI] = ACTIONS(124),
    [anon_sym_DOT] = ACTIONS(126),
    [sym_comment] = ACTIONS(32),
  },
  [31] = {
    [anon_sym_SEMI] = ACTIONS(128),
    [sym_comment] = ACTIONS(32),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [sym_decimal_integer_literal] = ACTIONS(132),
    [sym_hex_integer_literal] = ACTIONS(132),
    [sym_octal_integer_literal] = ACTIONS(132),
    [sym_binary_integer_literal] = ACTIONS(132),
    [sym_decimal_floating_point_literal] = ACTIONS(132),
    [sym_hex_floating_point_literal] = ACTIONS(134),
    [anon_sym_true] = ACTIONS(130),
    [anon_sym_false] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(130),
    [sym_string_literal] = ACTIONS(130),
    [sym_null_literal] = ACTIONS(130),
    [anon_sym_BANG] = ACTIONS(130),
    [anon_sym_TILDE] = ACTIONS(130),
    [anon_sym_PLUS_PLUS] = ACTIONS(130),
    [anon_sym_DASH_DASH] = ACTIONS(130),
    [anon_sym_AT] = ACTIONS(130),
    [anon_sym_open] = ACTIONS(130),
    [anon_sym_module] = ACTIONS(130),
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
    [anon_sym_BANG] = ACTIONS(136),
    [anon_sym_TILDE] = ACTIONS(136),
    [anon_sym_PLUS_PLUS] = ACTIONS(138),
    [anon_sym_DASH_DASH] = ACTIONS(138),
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
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_COMMA] = ACTIONS(112),
    [sym_comment] = ACTIONS(32),
  },
  [41] = {
    [anon_sym_module] = ACTIONS(140),
    [sym_comment] = ACTIONS(32),
  },
  [42] = {
    [anon_sym_SEMI] = ACTIONS(142),
    [sym_comment] = ACTIONS(32),
  },
  [43] = {
    [anon_sym_SEMI] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(144),
    [anon_sym_COMMA] = ACTIONS(144),
    [sym_comment] = ACTIONS(32),
  },
  [44] = {
    [anon_sym_SQUOTE] = ACTIONS(146),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(146),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(146),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(44),
  },
  [45] = {
    [sym_element_value_pair_list] = STATE(63),
    [sym_element_value_pair] = STATE(64),
    [anon_sym_RPAREN] = ACTIONS(148),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(32),
  },
  [46] = {
    [sym_identifier] = ACTIONS(152),
    [sym_comment] = ACTIONS(32),
  },
  [47] = {
    [anon_sym_SEMI] = ACTIONS(154),
    [sym_comment] = ACTIONS(32),
  },
  [48] = {
    [sym_identifier] = ACTIONS(156),
    [sym_comment] = ACTIONS(32),
  },
  [49] = {
    [anon_sym_SEMI] = ACTIONS(158),
    [anon_sym_DOT] = ACTIONS(160),
    [sym_comment] = ACTIONS(32),
  },
  [50] = {
    [anon_sym_SEMI] = ACTIONS(162),
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
    [anon_sym_SEMI] = ACTIONS(164),
    [anon_sym_EQ] = ACTIONS(166),
    [anon_sym_PLUS_EQ] = ACTIONS(164),
    [anon_sym_DASH_EQ] = ACTIONS(164),
    [anon_sym_STAR_EQ] = ACTIONS(164),
    [anon_sym_SLASH_EQ] = ACTIONS(164),
    [anon_sym_AMP_EQ] = ACTIONS(164),
    [anon_sym_PIPE_EQ] = ACTIONS(164),
    [anon_sym_CARET_EQ] = ACTIONS(164),
    [anon_sym_PERCENT_EQ] = ACTIONS(164),
    [anon_sym_LT_LT_EQ] = ACTIONS(164),
    [anon_sym_GT_GT_EQ] = ACTIONS(164),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(164),
    [anon_sym_GT] = ACTIONS(166),
    [anon_sym_LT] = ACTIONS(166),
    [anon_sym_EQ_EQ] = ACTIONS(164),
    [anon_sym_GT_EQ] = ACTIONS(164),
    [anon_sym_LT_EQ] = ACTIONS(164),
    [anon_sym_BANG_EQ] = ACTIONS(164),
    [anon_sym_AMP_AMP] = ACTIONS(164),
    [anon_sym_PIPE_PIPE] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(166),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(74),
    [anon_sym_AMP] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(166),
    [anon_sym_CARET] = ACTIONS(166),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_LT_LT] = ACTIONS(74),
    [anon_sym_GT_GT] = ACTIONS(74),
    [anon_sym_GT_GT_GT] = ACTIONS(74),
    [anon_sym_QMARK] = ACTIONS(164),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(32),
  },
  [52] = {
    [anon_sym_SEMI] = ACTIONS(164),
    [anon_sym_EQ] = ACTIONS(166),
    [anon_sym_PLUS_EQ] = ACTIONS(164),
    [anon_sym_DASH_EQ] = ACTIONS(164),
    [anon_sym_STAR_EQ] = ACTIONS(164),
    [anon_sym_SLASH_EQ] = ACTIONS(164),
    [anon_sym_AMP_EQ] = ACTIONS(164),
    [anon_sym_PIPE_EQ] = ACTIONS(164),
    [anon_sym_CARET_EQ] = ACTIONS(164),
    [anon_sym_PERCENT_EQ] = ACTIONS(164),
    [anon_sym_LT_LT_EQ] = ACTIONS(164),
    [anon_sym_GT_GT_EQ] = ACTIONS(164),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(164),
    [anon_sym_GT] = ACTIONS(64),
    [anon_sym_LT] = ACTIONS(64),
    [anon_sym_EQ_EQ] = ACTIONS(66),
    [anon_sym_GT_EQ] = ACTIONS(66),
    [anon_sym_LT_EQ] = ACTIONS(66),
    [anon_sym_BANG_EQ] = ACTIONS(66),
    [anon_sym_AMP_AMP] = ACTIONS(164),
    [anon_sym_PIPE_PIPE] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(74),
    [anon_sym_AMP] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(166),
    [anon_sym_CARET] = ACTIONS(166),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_LT_LT] = ACTIONS(74),
    [anon_sym_GT_GT] = ACTIONS(74),
    [anon_sym_GT_GT_GT] = ACTIONS(74),
    [anon_sym_QMARK] = ACTIONS(164),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(32),
  },
  [53] = {
    [anon_sym_SEMI] = ACTIONS(164),
    [anon_sym_EQ] = ACTIONS(166),
    [anon_sym_PLUS_EQ] = ACTIONS(164),
    [anon_sym_DASH_EQ] = ACTIONS(164),
    [anon_sym_STAR_EQ] = ACTIONS(164),
    [anon_sym_SLASH_EQ] = ACTIONS(164),
    [anon_sym_AMP_EQ] = ACTIONS(164),
    [anon_sym_PIPE_EQ] = ACTIONS(164),
    [anon_sym_CARET_EQ] = ACTIONS(164),
    [anon_sym_PERCENT_EQ] = ACTIONS(164),
    [anon_sym_LT_LT_EQ] = ACTIONS(164),
    [anon_sym_GT_GT_EQ] = ACTIONS(164),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(164),
    [anon_sym_GT] = ACTIONS(64),
    [anon_sym_LT] = ACTIONS(64),
    [anon_sym_EQ_EQ] = ACTIONS(66),
    [anon_sym_GT_EQ] = ACTIONS(66),
    [anon_sym_LT_EQ] = ACTIONS(66),
    [anon_sym_BANG_EQ] = ACTIONS(66),
    [anon_sym_AMP_AMP] = ACTIONS(68),
    [anon_sym_PIPE_PIPE] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(74),
    [anon_sym_AMP] = ACTIONS(76),
    [anon_sym_PIPE] = ACTIONS(166),
    [anon_sym_CARET] = ACTIONS(166),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_LT_LT] = ACTIONS(74),
    [anon_sym_GT_GT] = ACTIONS(74),
    [anon_sym_GT_GT_GT] = ACTIONS(74),
    [anon_sym_QMARK] = ACTIONS(164),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(32),
  },
  [54] = {
    [anon_sym_SEMI] = ACTIONS(164),
    [anon_sym_EQ] = ACTIONS(166),
    [anon_sym_PLUS_EQ] = ACTIONS(164),
    [anon_sym_DASH_EQ] = ACTIONS(164),
    [anon_sym_STAR_EQ] = ACTIONS(164),
    [anon_sym_SLASH_EQ] = ACTIONS(164),
    [anon_sym_AMP_EQ] = ACTIONS(164),
    [anon_sym_PIPE_EQ] = ACTIONS(164),
    [anon_sym_CARET_EQ] = ACTIONS(164),
    [anon_sym_PERCENT_EQ] = ACTIONS(164),
    [anon_sym_LT_LT_EQ] = ACTIONS(164),
    [anon_sym_GT_GT_EQ] = ACTIONS(164),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(164),
    [anon_sym_GT] = ACTIONS(64),
    [anon_sym_LT] = ACTIONS(64),
    [anon_sym_EQ_EQ] = ACTIONS(66),
    [anon_sym_GT_EQ] = ACTIONS(66),
    [anon_sym_LT_EQ] = ACTIONS(66),
    [anon_sym_BANG_EQ] = ACTIONS(66),
    [anon_sym_AMP_AMP] = ACTIONS(164),
    [anon_sym_PIPE_PIPE] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(166),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(74),
    [anon_sym_AMP] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(166),
    [anon_sym_CARET] = ACTIONS(166),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_LT_LT] = ACTIONS(74),
    [anon_sym_GT_GT] = ACTIONS(74),
    [anon_sym_GT_GT_GT] = ACTIONS(74),
    [anon_sym_QMARK] = ACTIONS(164),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(32),
  },
  [55] = {
    [anon_sym_SEMI] = ACTIONS(164),
    [anon_sym_EQ] = ACTIONS(166),
    [anon_sym_PLUS_EQ] = ACTIONS(164),
    [anon_sym_DASH_EQ] = ACTIONS(164),
    [anon_sym_STAR_EQ] = ACTIONS(164),
    [anon_sym_SLASH_EQ] = ACTIONS(164),
    [anon_sym_AMP_EQ] = ACTIONS(164),
    [anon_sym_PIPE_EQ] = ACTIONS(164),
    [anon_sym_CARET_EQ] = ACTIONS(164),
    [anon_sym_PERCENT_EQ] = ACTIONS(164),
    [anon_sym_LT_LT_EQ] = ACTIONS(164),
    [anon_sym_GT_GT_EQ] = ACTIONS(164),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(164),
    [anon_sym_GT] = ACTIONS(166),
    [anon_sym_LT] = ACTIONS(166),
    [anon_sym_EQ_EQ] = ACTIONS(164),
    [anon_sym_GT_EQ] = ACTIONS(164),
    [anon_sym_LT_EQ] = ACTIONS(164),
    [anon_sym_BANG_EQ] = ACTIONS(164),
    [anon_sym_AMP_AMP] = ACTIONS(164),
    [anon_sym_PIPE_PIPE] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(166),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_STAR] = ACTIONS(166),
    [anon_sym_SLASH] = ACTIONS(166),
    [anon_sym_AMP] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(166),
    [anon_sym_CARET] = ACTIONS(166),
    [anon_sym_PERCENT] = ACTIONS(166),
    [anon_sym_LT_LT] = ACTIONS(166),
    [anon_sym_GT_GT] = ACTIONS(166),
    [anon_sym_GT_GT_GT] = ACTIONS(166),
    [anon_sym_QMARK] = ACTIONS(164),
    [anon_sym_COLON] = ACTIONS(164),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_COMMA] = ACTIONS(164),
    [sym_comment] = ACTIONS(32),
  },
  [56] = {
    [sym__expression] = STATE(25),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(136),
    [anon_sym_TILDE] = ACTIONS(136),
    [anon_sym_PLUS_PLUS] = ACTIONS(138),
    [anon_sym_DASH_DASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(32),
  },
  [57] = {
    [sym__expression] = STATE(26),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(136),
    [anon_sym_TILDE] = ACTIONS(136),
    [anon_sym_PLUS_PLUS] = ACTIONS(138),
    [anon_sym_DASH_DASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(32),
  },
  [58] = {
    [anon_sym_EQ] = ACTIONS(168),
    [anon_sym_PLUS_EQ] = ACTIONS(170),
    [anon_sym_DASH_EQ] = ACTIONS(170),
    [anon_sym_STAR_EQ] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [anon_sym_AMP_EQ] = ACTIONS(170),
    [anon_sym_PIPE_EQ] = ACTIONS(170),
    [anon_sym_CARET_EQ] = ACTIONS(170),
    [anon_sym_PERCENT_EQ] = ACTIONS(170),
    [anon_sym_LT_LT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_LT] = ACTIONS(172),
    [anon_sym_EQ_EQ] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(174),
    [anon_sym_BANG_EQ] = ACTIONS(174),
    [anon_sym_AMP_AMP] = ACTIONS(176),
    [anon_sym_PIPE_PIPE] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(182),
    [anon_sym_AMP] = ACTIONS(184),
    [anon_sym_PIPE] = ACTIONS(186),
    [anon_sym_CARET] = ACTIONS(186),
    [anon_sym_PERCENT] = ACTIONS(182),
    [anon_sym_LT_LT] = ACTIONS(182),
    [anon_sym_GT_GT] = ACTIONS(182),
    [anon_sym_GT_GT_GT] = ACTIONS(182),
    [anon_sym_QMARK] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(190),
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
    [ts_builtin_sym_end] = ACTIONS(192),
    [sym_decimal_integer_literal] = ACTIONS(194),
    [sym_hex_integer_literal] = ACTIONS(194),
    [sym_octal_integer_literal] = ACTIONS(194),
    [sym_binary_integer_literal] = ACTIONS(194),
    [sym_decimal_floating_point_literal] = ACTIONS(194),
    [sym_hex_floating_point_literal] = ACTIONS(196),
    [anon_sym_true] = ACTIONS(192),
    [anon_sym_false] = ACTIONS(192),
    [anon_sym_SQUOTE] = ACTIONS(192),
    [sym_string_literal] = ACTIONS(192),
    [sym_null_literal] = ACTIONS(192),
    [anon_sym_BANG] = ACTIONS(192),
    [anon_sym_TILDE] = ACTIONS(192),
    [anon_sym_PLUS_PLUS] = ACTIONS(192),
    [anon_sym_DASH_DASH] = ACTIONS(192),
    [anon_sym_AT] = ACTIONS(192),
    [anon_sym_open] = ACTIONS(192),
    [anon_sym_module] = ACTIONS(192),
    [sym_comment] = ACTIONS(32),
  },
  [61] = {
    [anon_sym_RPAREN] = ACTIONS(198),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_open] = ACTIONS(198),
    [anon_sym_module] = ACTIONS(198),
    [sym_comment] = ACTIONS(32),
  },
  [62] = {
    [anon_sym_EQ] = ACTIONS(200),
    [sym_comment] = ACTIONS(32),
  },
  [63] = {
    [anon_sym_RPAREN] = ACTIONS(202),
    [sym_comment] = ACTIONS(32),
  },
  [64] = {
    [aux_sym_element_value_pair_list_repeat1] = STATE(80),
    [anon_sym_RPAREN] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(206),
    [sym_comment] = ACTIONS(32),
  },
  [65] = {
    [anon_sym_LPAREN] = ACTIONS(208),
    [anon_sym_RPAREN] = ACTIONS(208),
    [anon_sym_COMMA] = ACTIONS(208),
    [anon_sym_open] = ACTIONS(208),
    [anon_sym_module] = ACTIONS(208),
    [anon_sym_DOT] = ACTIONS(208),
    [sym_comment] = ACTIONS(32),
  },
  [66] = {
    [anon_sym_SEMI] = ACTIONS(210),
    [anon_sym_DOT] = ACTIONS(210),
    [sym_comment] = ACTIONS(32),
  },
  [67] = {
    [sym_identifier] = ACTIONS(212),
    [sym_comment] = ACTIONS(32),
  },
  [68] = {
    [sym__expression] = STATE(82),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(136),
    [anon_sym_TILDE] = ACTIONS(136),
    [anon_sym_PLUS_PLUS] = ACTIONS(138),
    [anon_sym_DASH_DASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(32),
  },
  [69] = {
    [sym__expression] = STATE(83),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(136),
    [anon_sym_TILDE] = ACTIONS(136),
    [anon_sym_PLUS_PLUS] = ACTIONS(138),
    [anon_sym_DASH_DASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(32),
  },
  [70] = {
    [sym__expression] = STATE(84),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(136),
    [anon_sym_TILDE] = ACTIONS(136),
    [anon_sym_PLUS_PLUS] = ACTIONS(138),
    [anon_sym_DASH_DASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(32),
  },
  [71] = {
    [sym__expression] = STATE(85),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(136),
    [anon_sym_TILDE] = ACTIONS(136),
    [anon_sym_PLUS_PLUS] = ACTIONS(138),
    [anon_sym_DASH_DASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(32),
  },
  [72] = {
    [sym__expression] = STATE(86),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(136),
    [anon_sym_TILDE] = ACTIONS(136),
    [anon_sym_PLUS_PLUS] = ACTIONS(138),
    [anon_sym_DASH_DASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(32),
  },
  [73] = {
    [sym__expression] = STATE(55),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(136),
    [anon_sym_TILDE] = ACTIONS(136),
    [anon_sym_PLUS_PLUS] = ACTIONS(138),
    [anon_sym_DASH_DASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(32),
  },
  [74] = {
    [sym__expression] = STATE(87),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(136),
    [anon_sym_TILDE] = ACTIONS(136),
    [anon_sym_PLUS_PLUS] = ACTIONS(138),
    [anon_sym_DASH_DASH] = ACTIONS(138),
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
    [anon_sym_SEMI] = ACTIONS(214),
    [sym_comment] = ACTIONS(32),
  },
  [77] = {
    [sym__literal] = STATE(90),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(91),
    [sym__annotation] = STATE(90),
    [sym_normal_annotation] = STATE(19),
    [sym_marker_annotation] = STATE(19),
    [sym_element_value] = STATE(92),
    [sym_conditional_expression] = STATE(90),
    [sym_conditional_or_expression] = STATE(93),
    [sym_conditional_and_expression] = STATE(94),
    [sym_inclusive_or_expression] = STATE(95),
    [sym_exclusive_or_expression] = STATE(96),
    [sym_and_expression] = STATE(97),
    [sym_relational_expression] = STATE(98),
    [sym_equality_expression] = STATE(99),
    [sym_shift_expression] = STATE(100),
    [sym_additive_expression] = STATE(101),
    [sym_multiplicative_expression] = STATE(102),
    [sym_element_value_array_initializer] = STATE(90),
    [sym_element_value_list] = STATE(103),
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
    [anon_sym_BANG] = ACTIONS(216),
    [anon_sym_TILDE] = ACTIONS(216),
    [anon_sym_AT] = ACTIONS(26),
    [sym_comment] = ACTIONS(32),
  },
  [78] = {
    [anon_sym_RPAREN] = ACTIONS(218),
    [anon_sym_COMMA] = ACTIONS(218),
    [anon_sym_open] = ACTIONS(218),
    [anon_sym_module] = ACTIONS(218),
    [sym_comment] = ACTIONS(32),
  },
  [79] = {
    [sym_element_value_pair] = STATE(104),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(32),
  },
  [80] = {
    [anon_sym_RPAREN] = ACTIONS(220),
    [anon_sym_COMMA] = ACTIONS(222),
    [sym_comment] = ACTIONS(32),
  },
  [81] = {
    [anon_sym_SEMI] = ACTIONS(224),
    [anon_sym_DOT] = ACTIONS(224),
    [sym_comment] = ACTIONS(32),
  },
  [82] = {
    [anon_sym_EQ] = ACTIONS(168),
    [anon_sym_PLUS_EQ] = ACTIONS(170),
    [anon_sym_DASH_EQ] = ACTIONS(170),
    [anon_sym_STAR_EQ] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [anon_sym_AMP_EQ] = ACTIONS(170),
    [anon_sym_PIPE_EQ] = ACTIONS(170),
    [anon_sym_CARET_EQ] = ACTIONS(170),
    [anon_sym_PERCENT_EQ] = ACTIONS(170),
    [anon_sym_LT_LT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_LT] = ACTIONS(172),
    [anon_sym_EQ_EQ] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(174),
    [anon_sym_BANG_EQ] = ACTIONS(174),
    [anon_sym_AMP_AMP] = ACTIONS(176),
    [anon_sym_PIPE_PIPE] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(182),
    [anon_sym_AMP] = ACTIONS(184),
    [anon_sym_PIPE] = ACTIONS(186),
    [anon_sym_CARET] = ACTIONS(186),
    [anon_sym_PERCENT] = ACTIONS(182),
    [anon_sym_LT_LT] = ACTIONS(182),
    [anon_sym_GT_GT] = ACTIONS(182),
    [anon_sym_GT_GT_GT] = ACTIONS(182),
    [anon_sym_QMARK] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(162),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(32),
  },
  [83] = {
    [anon_sym_EQ] = ACTIONS(166),
    [anon_sym_PLUS_EQ] = ACTIONS(164),
    [anon_sym_DASH_EQ] = ACTIONS(164),
    [anon_sym_STAR_EQ] = ACTIONS(164),
    [anon_sym_SLASH_EQ] = ACTIONS(164),
    [anon_sym_AMP_EQ] = ACTIONS(164),
    [anon_sym_PIPE_EQ] = ACTIONS(164),
    [anon_sym_CARET_EQ] = ACTIONS(164),
    [anon_sym_PERCENT_EQ] = ACTIONS(164),
    [anon_sym_LT_LT_EQ] = ACTIONS(164),
    [anon_sym_GT_GT_EQ] = ACTIONS(164),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(164),
    [anon_sym_GT] = ACTIONS(166),
    [anon_sym_LT] = ACTIONS(166),
    [anon_sym_EQ_EQ] = ACTIONS(164),
    [anon_sym_GT_EQ] = ACTIONS(164),
    [anon_sym_LT_EQ] = ACTIONS(164),
    [anon_sym_BANG_EQ] = ACTIONS(164),
    [anon_sym_AMP_AMP] = ACTIONS(164),
    [anon_sym_PIPE_PIPE] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(166),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_STAR] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(182),
    [anon_sym_AMP] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(166),
    [anon_sym_CARET] = ACTIONS(166),
    [anon_sym_PERCENT] = ACTIONS(182),
    [anon_sym_LT_LT] = ACTIONS(182),
    [anon_sym_GT_GT] = ACTIONS(182),
    [anon_sym_GT_GT_GT] = ACTIONS(182),
    [anon_sym_QMARK] = ACTIONS(164),
    [anon_sym_COLON] = ACTIONS(164),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(32),
  },
  [84] = {
    [anon_sym_EQ] = ACTIONS(166),
    [anon_sym_PLUS_EQ] = ACTIONS(164),
    [anon_sym_DASH_EQ] = ACTIONS(164),
    [anon_sym_STAR_EQ] = ACTIONS(164),
    [anon_sym_SLASH_EQ] = ACTIONS(164),
    [anon_sym_AMP_EQ] = ACTIONS(164),
    [anon_sym_PIPE_EQ] = ACTIONS(164),
    [anon_sym_CARET_EQ] = ACTIONS(164),
    [anon_sym_PERCENT_EQ] = ACTIONS(164),
    [anon_sym_LT_LT_EQ] = ACTIONS(164),
    [anon_sym_GT_GT_EQ] = ACTIONS(164),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(164),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_LT] = ACTIONS(172),
    [anon_sym_EQ_EQ] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(174),
    [anon_sym_BANG_EQ] = ACTIONS(174),
    [anon_sym_AMP_AMP] = ACTIONS(164),
    [anon_sym_PIPE_PIPE] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(182),
    [anon_sym_AMP] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(166),
    [anon_sym_CARET] = ACTIONS(166),
    [anon_sym_PERCENT] = ACTIONS(182),
    [anon_sym_LT_LT] = ACTIONS(182),
    [anon_sym_GT_GT] = ACTIONS(182),
    [anon_sym_GT_GT_GT] = ACTIONS(182),
    [anon_sym_QMARK] = ACTIONS(164),
    [anon_sym_COLON] = ACTIONS(164),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(32),
  },
  [85] = {
    [anon_sym_EQ] = ACTIONS(166),
    [anon_sym_PLUS_EQ] = ACTIONS(164),
    [anon_sym_DASH_EQ] = ACTIONS(164),
    [anon_sym_STAR_EQ] = ACTIONS(164),
    [anon_sym_SLASH_EQ] = ACTIONS(164),
    [anon_sym_AMP_EQ] = ACTIONS(164),
    [anon_sym_PIPE_EQ] = ACTIONS(164),
    [anon_sym_CARET_EQ] = ACTIONS(164),
    [anon_sym_PERCENT_EQ] = ACTIONS(164),
    [anon_sym_LT_LT_EQ] = ACTIONS(164),
    [anon_sym_GT_GT_EQ] = ACTIONS(164),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(164),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_LT] = ACTIONS(172),
    [anon_sym_EQ_EQ] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(174),
    [anon_sym_BANG_EQ] = ACTIONS(174),
    [anon_sym_AMP_AMP] = ACTIONS(176),
    [anon_sym_PIPE_PIPE] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(182),
    [anon_sym_AMP] = ACTIONS(184),
    [anon_sym_PIPE] = ACTIONS(166),
    [anon_sym_CARET] = ACTIONS(166),
    [anon_sym_PERCENT] = ACTIONS(182),
    [anon_sym_LT_LT] = ACTIONS(182),
    [anon_sym_GT_GT] = ACTIONS(182),
    [anon_sym_GT_GT_GT] = ACTIONS(182),
    [anon_sym_QMARK] = ACTIONS(164),
    [anon_sym_COLON] = ACTIONS(164),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(32),
  },
  [86] = {
    [anon_sym_EQ] = ACTIONS(166),
    [anon_sym_PLUS_EQ] = ACTIONS(164),
    [anon_sym_DASH_EQ] = ACTIONS(164),
    [anon_sym_STAR_EQ] = ACTIONS(164),
    [anon_sym_SLASH_EQ] = ACTIONS(164),
    [anon_sym_AMP_EQ] = ACTIONS(164),
    [anon_sym_PIPE_EQ] = ACTIONS(164),
    [anon_sym_CARET_EQ] = ACTIONS(164),
    [anon_sym_PERCENT_EQ] = ACTIONS(164),
    [anon_sym_LT_LT_EQ] = ACTIONS(164),
    [anon_sym_GT_GT_EQ] = ACTIONS(164),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(164),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_LT] = ACTIONS(172),
    [anon_sym_EQ_EQ] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(174),
    [anon_sym_BANG_EQ] = ACTIONS(174),
    [anon_sym_AMP_AMP] = ACTIONS(164),
    [anon_sym_PIPE_PIPE] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(166),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_STAR] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(182),
    [anon_sym_AMP] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(166),
    [anon_sym_CARET] = ACTIONS(166),
    [anon_sym_PERCENT] = ACTIONS(182),
    [anon_sym_LT_LT] = ACTIONS(182),
    [anon_sym_GT_GT] = ACTIONS(182),
    [anon_sym_GT_GT_GT] = ACTIONS(182),
    [anon_sym_QMARK] = ACTIONS(164),
    [anon_sym_COLON] = ACTIONS(164),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(32),
  },
  [87] = {
    [anon_sym_EQ] = ACTIONS(168),
    [anon_sym_PLUS_EQ] = ACTIONS(170),
    [anon_sym_DASH_EQ] = ACTIONS(170),
    [anon_sym_STAR_EQ] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [anon_sym_AMP_EQ] = ACTIONS(170),
    [anon_sym_PIPE_EQ] = ACTIONS(170),
    [anon_sym_CARET_EQ] = ACTIONS(170),
    [anon_sym_PERCENT_EQ] = ACTIONS(170),
    [anon_sym_LT_LT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_LT] = ACTIONS(172),
    [anon_sym_EQ_EQ] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(174),
    [anon_sym_BANG_EQ] = ACTIONS(174),
    [anon_sym_AMP_AMP] = ACTIONS(176),
    [anon_sym_PIPE_PIPE] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(182),
    [anon_sym_AMP] = ACTIONS(184),
    [anon_sym_PIPE] = ACTIONS(186),
    [anon_sym_CARET] = ACTIONS(186),
    [anon_sym_PERCENT] = ACTIONS(182),
    [anon_sym_LT_LT] = ACTIONS(182),
    [anon_sym_GT_GT] = ACTIONS(182),
    [anon_sym_GT_GT_GT] = ACTIONS(182),
    [anon_sym_QMARK] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(226),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(32),
  },
  [88] = {
    [anon_sym_SEMI] = ACTIONS(228),
    [anon_sym_EQ] = ACTIONS(230),
    [anon_sym_PLUS_EQ] = ACTIONS(228),
    [anon_sym_DASH_EQ] = ACTIONS(228),
    [anon_sym_STAR_EQ] = ACTIONS(228),
    [anon_sym_SLASH_EQ] = ACTIONS(228),
    [anon_sym_AMP_EQ] = ACTIONS(228),
    [anon_sym_PIPE_EQ] = ACTIONS(228),
    [anon_sym_CARET_EQ] = ACTIONS(228),
    [anon_sym_PERCENT_EQ] = ACTIONS(228),
    [anon_sym_LT_LT_EQ] = ACTIONS(228),
    [anon_sym_GT_GT_EQ] = ACTIONS(228),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(228),
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
    [sym__expression] = STATE(109),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(232),
    [anon_sym_TILDE] = ACTIONS(232),
    [anon_sym_PLUS_PLUS] = ACTIONS(234),
    [anon_sym_DASH_DASH] = ACTIONS(234),
    [sym_comment] = ACTIONS(32),
  },
  [90] = {
    [anon_sym_RPAREN] = ACTIONS(236),
    [anon_sym_COMMA] = ACTIONS(236),
    [sym_comment] = ACTIONS(32),
  },
  [91] = {
    [anon_sym_LT] = ACTIONS(238),
    [anon_sym_EQ_EQ] = ACTIONS(240),
    [anon_sym_BANG_EQ] = ACTIONS(240),
    [anon_sym_AMP_AMP] = ACTIONS(240),
    [anon_sym_PIPE_PIPE] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(240),
    [anon_sym_STAR] = ACTIONS(240),
    [anon_sym_SLASH] = ACTIONS(238),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_CARET] = ACTIONS(240),
    [anon_sym_PERCENT] = ACTIONS(240),
    [anon_sym_LT_LT] = ACTIONS(240),
    [anon_sym_GT_GT] = ACTIONS(238),
    [anon_sym_GT_GT_GT] = ACTIONS(240),
    [anon_sym_QMARK] = ACTIONS(240),
    [anon_sym_RPAREN] = ACTIONS(240),
    [anon_sym_COMMA] = ACTIONS(240),
    [sym_comment] = ACTIONS(32),
  },
  [92] = {
    [aux_sym_element_value_list_repeat1] = STATE(111),
    [anon_sym_RPAREN] = ACTIONS(242),
    [anon_sym_COMMA] = ACTIONS(242),
    [sym_comment] = ACTIONS(32),
  },
  [93] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(244),
    [anon_sym_QMARK] = ACTIONS(246),
    [anon_sym_RPAREN] = ACTIONS(248),
    [anon_sym_COMMA] = ACTIONS(248),
    [sym_comment] = ACTIONS(32),
  },
  [94] = {
    [anon_sym_AMP_AMP] = ACTIONS(250),
    [anon_sym_PIPE_PIPE] = ACTIONS(252),
    [anon_sym_QMARK] = ACTIONS(252),
    [anon_sym_RPAREN] = ACTIONS(252),
    [anon_sym_COMMA] = ACTIONS(252),
    [sym_comment] = ACTIONS(32),
  },
  [95] = {
    [anon_sym_AMP_AMP] = ACTIONS(254),
    [anon_sym_PIPE_PIPE] = ACTIONS(254),
    [anon_sym_PIPE] = ACTIONS(256),
    [anon_sym_QMARK] = ACTIONS(254),
    [anon_sym_RPAREN] = ACTIONS(254),
    [anon_sym_COMMA] = ACTIONS(254),
    [sym_comment] = ACTIONS(32),
  },
  [96] = {
    [anon_sym_AMP_AMP] = ACTIONS(258),
    [anon_sym_PIPE_PIPE] = ACTIONS(258),
    [anon_sym_PIPE] = ACTIONS(260),
    [anon_sym_CARET] = ACTIONS(262),
    [anon_sym_QMARK] = ACTIONS(258),
    [anon_sym_RPAREN] = ACTIONS(258),
    [anon_sym_COMMA] = ACTIONS(258),
    [sym_comment] = ACTIONS(32),
  },
  [97] = {
    [anon_sym_AMP_AMP] = ACTIONS(264),
    [anon_sym_PIPE_PIPE] = ACTIONS(264),
    [anon_sym_PIPE] = ACTIONS(266),
    [anon_sym_CARET] = ACTIONS(264),
    [anon_sym_QMARK] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(264),
    [anon_sym_COMMA] = ACTIONS(264),
    [sym_comment] = ACTIONS(32),
  },
  [98] = {
    [anon_sym_LT] = ACTIONS(268),
    [anon_sym_EQ_EQ] = ACTIONS(270),
    [anon_sym_BANG_EQ] = ACTIONS(270),
    [anon_sym_AMP_AMP] = ACTIONS(272),
    [anon_sym_PIPE_PIPE] = ACTIONS(272),
    [anon_sym_PIPE] = ACTIONS(274),
    [anon_sym_CARET] = ACTIONS(272),
    [anon_sym_QMARK] = ACTIONS(272),
    [anon_sym_RPAREN] = ACTIONS(272),
    [anon_sym_COMMA] = ACTIONS(272),
    [sym_comment] = ACTIONS(32),
  },
  [99] = {
    [anon_sym_EQ_EQ] = ACTIONS(276),
    [anon_sym_BANG_EQ] = ACTIONS(276),
    [sym_comment] = ACTIONS(32),
  },
  [100] = {
    [anon_sym_LT] = ACTIONS(278),
    [anon_sym_EQ_EQ] = ACTIONS(280),
    [anon_sym_BANG_EQ] = ACTIONS(280),
    [anon_sym_AMP_AMP] = ACTIONS(280),
    [anon_sym_PIPE_PIPE] = ACTIONS(280),
    [anon_sym_PIPE] = ACTIONS(278),
    [anon_sym_CARET] = ACTIONS(280),
    [anon_sym_LT_LT] = ACTIONS(282),
    [anon_sym_GT_GT] = ACTIONS(284),
    [anon_sym_GT_GT_GT] = ACTIONS(282),
    [anon_sym_QMARK] = ACTIONS(280),
    [anon_sym_RPAREN] = ACTIONS(280),
    [anon_sym_COMMA] = ACTIONS(280),
    [sym_comment] = ACTIONS(32),
  },
  [101] = {
    [anon_sym_LT] = ACTIONS(286),
    [anon_sym_EQ_EQ] = ACTIONS(288),
    [anon_sym_BANG_EQ] = ACTIONS(288),
    [anon_sym_AMP_AMP] = ACTIONS(288),
    [anon_sym_PIPE_PIPE] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(290),
    [anon_sym_DASH] = ACTIONS(290),
    [anon_sym_PIPE] = ACTIONS(286),
    [anon_sym_CARET] = ACTIONS(288),
    [anon_sym_LT_LT] = ACTIONS(288),
    [anon_sym_GT_GT] = ACTIONS(286),
    [anon_sym_GT_GT_GT] = ACTIONS(288),
    [anon_sym_QMARK] = ACTIONS(288),
    [anon_sym_RPAREN] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(288),
    [sym_comment] = ACTIONS(32),
  },
  [102] = {
    [anon_sym_LT] = ACTIONS(292),
    [anon_sym_EQ_EQ] = ACTIONS(294),
    [anon_sym_BANG_EQ] = ACTIONS(294),
    [anon_sym_AMP_AMP] = ACTIONS(294),
    [anon_sym_PIPE_PIPE] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_DASH] = ACTIONS(294),
    [anon_sym_STAR] = ACTIONS(296),
    [anon_sym_SLASH] = ACTIONS(298),
    [anon_sym_PIPE] = ACTIONS(292),
    [anon_sym_CARET] = ACTIONS(294),
    [anon_sym_PERCENT] = ACTIONS(296),
    [anon_sym_LT_LT] = ACTIONS(294),
    [anon_sym_GT_GT] = ACTIONS(292),
    [anon_sym_GT_GT_GT] = ACTIONS(294),
    [anon_sym_QMARK] = ACTIONS(294),
    [anon_sym_RPAREN] = ACTIONS(294),
    [anon_sym_COMMA] = ACTIONS(294),
    [sym_comment] = ACTIONS(32),
  },
  [103] = {
    [anon_sym_RPAREN] = ACTIONS(300),
    [anon_sym_COMMA] = ACTIONS(302),
    [sym_comment] = ACTIONS(32),
  },
  [104] = {
    [anon_sym_RPAREN] = ACTIONS(304),
    [anon_sym_COMMA] = ACTIONS(304),
    [sym_comment] = ACTIONS(32),
  },
  [105] = {
    [sym_element_value_pair] = STATE(123),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(32),
  },
  [106] = {
    [sym__expression] = STATE(124),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(136),
    [anon_sym_TILDE] = ACTIONS(136),
    [anon_sym_PLUS_PLUS] = ACTIONS(138),
    [anon_sym_DASH_DASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(32),
  },
  [107] = {
    [sym__expression] = STATE(25),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(232),
    [anon_sym_TILDE] = ACTIONS(232),
    [anon_sym_PLUS_PLUS] = ACTIONS(234),
    [anon_sym_DASH_DASH] = ACTIONS(234),
    [sym_comment] = ACTIONS(32),
  },
  [108] = {
    [sym__expression] = STATE(26),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(232),
    [anon_sym_TILDE] = ACTIONS(232),
    [anon_sym_PLUS_PLUS] = ACTIONS(234),
    [anon_sym_DASH_DASH] = ACTIONS(234),
    [sym_comment] = ACTIONS(32),
  },
  [109] = {
    [anon_sym_EQ] = ACTIONS(306),
    [anon_sym_PLUS_EQ] = ACTIONS(308),
    [anon_sym_DASH_EQ] = ACTIONS(308),
    [anon_sym_STAR_EQ] = ACTIONS(308),
    [anon_sym_SLASH_EQ] = ACTIONS(308),
    [anon_sym_AMP_EQ] = ACTIONS(308),
    [anon_sym_PIPE_EQ] = ACTIONS(308),
    [anon_sym_CARET_EQ] = ACTIONS(308),
    [anon_sym_PERCENT_EQ] = ACTIONS(308),
    [anon_sym_LT_LT_EQ] = ACTIONS(308),
    [anon_sym_GT_GT_EQ] = ACTIONS(308),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(308),
    [anon_sym_GT] = ACTIONS(310),
    [anon_sym_LT] = ACTIONS(110),
    [anon_sym_EQ_EQ] = ACTIONS(108),
    [anon_sym_GT_EQ] = ACTIONS(312),
    [anon_sym_LT_EQ] = ACTIONS(312),
    [anon_sym_BANG_EQ] = ACTIONS(108),
    [anon_sym_AMP_AMP] = ACTIONS(108),
    [anon_sym_PIPE_PIPE] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_AMP] = ACTIONS(314),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_CARET] = ACTIONS(110),
    [anon_sym_PERCENT] = ACTIONS(110),
    [anon_sym_LT_LT] = ACTIONS(110),
    [anon_sym_GT_GT] = ACTIONS(110),
    [anon_sym_GT_GT_GT] = ACTIONS(110),
    [anon_sym_QMARK] = ACTIONS(108),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [anon_sym_RPAREN] = ACTIONS(108),
    [anon_sym_COMMA] = ACTIONS(108),
    [sym_comment] = ACTIONS(32),
  },
  [110] = {
    [sym__literal] = STATE(90),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(91),
    [sym__annotation] = STATE(90),
    [sym_normal_annotation] = STATE(19),
    [sym_marker_annotation] = STATE(19),
    [sym_element_value] = STATE(132),
    [sym_conditional_expression] = STATE(90),
    [sym_conditional_or_expression] = STATE(93),
    [sym_conditional_and_expression] = STATE(94),
    [sym_inclusive_or_expression] = STATE(95),
    [sym_exclusive_or_expression] = STATE(96),
    [sym_and_expression] = STATE(97),
    [sym_relational_expression] = STATE(98),
    [sym_equality_expression] = STATE(99),
    [sym_shift_expression] = STATE(100),
    [sym_additive_expression] = STATE(101),
    [sym_multiplicative_expression] = STATE(102),
    [sym_element_value_array_initializer] = STATE(90),
    [sym_element_value_list] = STATE(103),
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
    [anon_sym_BANG] = ACTIONS(216),
    [anon_sym_TILDE] = ACTIONS(216),
    [anon_sym_AT] = ACTIONS(26),
    [sym_comment] = ACTIONS(32),
  },
  [111] = {
    [anon_sym_RPAREN] = ACTIONS(316),
    [anon_sym_COMMA] = ACTIONS(316),
    [sym_comment] = ACTIONS(32),
  },
  [112] = {
    [sym_unary_expression] = STATE(91),
    [sym_conditional_and_expression] = STATE(134),
    [sym_inclusive_or_expression] = STATE(95),
    [sym_exclusive_or_expression] = STATE(96),
    [sym_and_expression] = STATE(97),
    [sym_relational_expression] = STATE(98),
    [sym_equality_expression] = STATE(99),
    [sym_shift_expression] = STATE(100),
    [sym_additive_expression] = STATE(101),
    [sym_multiplicative_expression] = STATE(102),
    [anon_sym_BANG] = ACTIONS(216),
    [anon_sym_TILDE] = ACTIONS(216),
    [sym_comment] = ACTIONS(32),
  },
  [113] = {
    [sym__expression] = STATE(135),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(136),
    [anon_sym_TILDE] = ACTIONS(136),
    [anon_sym_PLUS_PLUS] = ACTIONS(138),
    [anon_sym_DASH_DASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(32),
  },
  [114] = {
    [sym_unary_expression] = STATE(91),
    [sym_inclusive_or_expression] = STATE(136),
    [sym_exclusive_or_expression] = STATE(96),
    [sym_and_expression] = STATE(97),
    [sym_relational_expression] = STATE(98),
    [sym_equality_expression] = STATE(99),
    [sym_shift_expression] = STATE(100),
    [sym_additive_expression] = STATE(101),
    [sym_multiplicative_expression] = STATE(102),
    [anon_sym_BANG] = ACTIONS(216),
    [anon_sym_TILDE] = ACTIONS(216),
    [sym_comment] = ACTIONS(32),
  },
  [115] = {
    [sym_unary_expression] = STATE(91),
    [sym_exclusive_or_expression] = STATE(137),
    [sym_and_expression] = STATE(97),
    [sym_relational_expression] = STATE(98),
    [sym_equality_expression] = STATE(99),
    [sym_shift_expression] = STATE(100),
    [sym_additive_expression] = STATE(101),
    [sym_multiplicative_expression] = STATE(102),
    [anon_sym_BANG] = ACTIONS(216),
    [anon_sym_TILDE] = ACTIONS(216),
    [sym_comment] = ACTIONS(32),
  },
  [116] = {
    [sym_unary_expression] = STATE(91),
    [sym_and_expression] = STATE(138),
    [sym_relational_expression] = STATE(98),
    [sym_equality_expression] = STATE(99),
    [sym_shift_expression] = STATE(100),
    [sym_additive_expression] = STATE(101),
    [sym_multiplicative_expression] = STATE(102),
    [anon_sym_BANG] = ACTIONS(216),
    [anon_sym_TILDE] = ACTIONS(216),
    [sym_comment] = ACTIONS(32),
  },
  [117] = {
    [sym_unary_expression] = STATE(91),
    [sym_shift_expression] = STATE(139),
    [sym_additive_expression] = STATE(101),
    [sym_multiplicative_expression] = STATE(102),
    [anon_sym_BANG] = ACTIONS(216),
    [anon_sym_TILDE] = ACTIONS(216),
    [sym_comment] = ACTIONS(32),
  },
  [118] = {
    [sym_unary_expression] = STATE(91),
    [sym_relational_expression] = STATE(140),
    [sym_shift_expression] = STATE(100),
    [sym_additive_expression] = STATE(101),
    [sym_multiplicative_expression] = STATE(102),
    [anon_sym_BANG] = ACTIONS(216),
    [anon_sym_TILDE] = ACTIONS(216),
    [sym_comment] = ACTIONS(32),
  },
  [119] = {
    [sym_unary_expression] = STATE(91),
    [sym_additive_expression] = STATE(141),
    [sym_multiplicative_expression] = STATE(102),
    [anon_sym_BANG] = ACTIONS(216),
    [anon_sym_TILDE] = ACTIONS(216),
    [sym_comment] = ACTIONS(32),
  },
  [120] = {
    [sym_unary_expression] = STATE(91),
    [sym_multiplicative_expression] = STATE(142),
    [anon_sym_BANG] = ACTIONS(216),
    [anon_sym_TILDE] = ACTIONS(216),
    [sym_comment] = ACTIONS(32),
  },
  [121] = {
    [sym_unary_expression] = STATE(143),
    [anon_sym_BANG] = ACTIONS(216),
    [anon_sym_TILDE] = ACTIONS(216),
    [sym_comment] = ACTIONS(32),
  },
  [122] = {
    [anon_sym_RPAREN] = ACTIONS(318),
    [anon_sym_COMMA] = ACTIONS(318),
    [sym_comment] = ACTIONS(32),
  },
  [123] = {
    [anon_sym_RPAREN] = ACTIONS(320),
    [anon_sym_COMMA] = ACTIONS(320),
    [sym_comment] = ACTIONS(32),
  },
  [124] = {
    [anon_sym_EQ] = ACTIONS(230),
    [anon_sym_PLUS_EQ] = ACTIONS(228),
    [anon_sym_DASH_EQ] = ACTIONS(228),
    [anon_sym_STAR_EQ] = ACTIONS(228),
    [anon_sym_SLASH_EQ] = ACTIONS(228),
    [anon_sym_AMP_EQ] = ACTIONS(228),
    [anon_sym_PIPE_EQ] = ACTIONS(228),
    [anon_sym_CARET_EQ] = ACTIONS(228),
    [anon_sym_PERCENT_EQ] = ACTIONS(228),
    [anon_sym_LT_LT_EQ] = ACTIONS(228),
    [anon_sym_GT_GT_EQ] = ACTIONS(228),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(228),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_LT] = ACTIONS(172),
    [anon_sym_EQ_EQ] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(174),
    [anon_sym_BANG_EQ] = ACTIONS(174),
    [anon_sym_AMP_AMP] = ACTIONS(176),
    [anon_sym_PIPE_PIPE] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(182),
    [anon_sym_AMP] = ACTIONS(184),
    [anon_sym_PIPE] = ACTIONS(186),
    [anon_sym_CARET] = ACTIONS(186),
    [anon_sym_PERCENT] = ACTIONS(182),
    [anon_sym_LT_LT] = ACTIONS(182),
    [anon_sym_GT_GT] = ACTIONS(182),
    [anon_sym_GT_GT_GT] = ACTIONS(182),
    [anon_sym_QMARK] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(228),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(32),
  },
  [125] = {
    [sym__expression] = STATE(144),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(232),
    [anon_sym_TILDE] = ACTIONS(232),
    [anon_sym_PLUS_PLUS] = ACTIONS(234),
    [anon_sym_DASH_DASH] = ACTIONS(234),
    [sym_comment] = ACTIONS(32),
  },
  [126] = {
    [sym__expression] = STATE(145),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(232),
    [anon_sym_TILDE] = ACTIONS(232),
    [anon_sym_PLUS_PLUS] = ACTIONS(234),
    [anon_sym_DASH_DASH] = ACTIONS(234),
    [sym_comment] = ACTIONS(32),
  },
  [127] = {
    [sym__expression] = STATE(146),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(232),
    [anon_sym_TILDE] = ACTIONS(232),
    [anon_sym_PLUS_PLUS] = ACTIONS(234),
    [anon_sym_DASH_DASH] = ACTIONS(234),
    [sym_comment] = ACTIONS(32),
  },
  [128] = {
    [sym__expression] = STATE(147),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(232),
    [anon_sym_TILDE] = ACTIONS(232),
    [anon_sym_PLUS_PLUS] = ACTIONS(234),
    [anon_sym_DASH_DASH] = ACTIONS(234),
    [sym_comment] = ACTIONS(32),
  },
  [129] = {
    [sym__expression] = STATE(148),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(232),
    [anon_sym_TILDE] = ACTIONS(232),
    [anon_sym_PLUS_PLUS] = ACTIONS(234),
    [anon_sym_DASH_DASH] = ACTIONS(234),
    [sym_comment] = ACTIONS(32),
  },
  [130] = {
    [sym__expression] = STATE(55),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(232),
    [anon_sym_TILDE] = ACTIONS(232),
    [anon_sym_PLUS_PLUS] = ACTIONS(234),
    [anon_sym_DASH_DASH] = ACTIONS(234),
    [sym_comment] = ACTIONS(32),
  },
  [131] = {
    [sym__expression] = STATE(149),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(136),
    [anon_sym_TILDE] = ACTIONS(136),
    [anon_sym_PLUS_PLUS] = ACTIONS(138),
    [anon_sym_DASH_DASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(32),
  },
  [132] = {
    [aux_sym_element_value_list_repeat1] = STATE(111),
    [anon_sym_RPAREN] = ACTIONS(322),
    [anon_sym_COMMA] = ACTIONS(325),
    [sym_comment] = ACTIONS(32),
  },
  [133] = {
    [sym__literal] = STATE(90),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(91),
    [sym__annotation] = STATE(90),
    [sym_normal_annotation] = STATE(19),
    [sym_marker_annotation] = STATE(19),
    [sym_element_value] = STATE(150),
    [sym_conditional_expression] = STATE(90),
    [sym_conditional_or_expression] = STATE(93),
    [sym_conditional_and_expression] = STATE(94),
    [sym_inclusive_or_expression] = STATE(95),
    [sym_exclusive_or_expression] = STATE(96),
    [sym_and_expression] = STATE(97),
    [sym_relational_expression] = STATE(98),
    [sym_equality_expression] = STATE(99),
    [sym_shift_expression] = STATE(100),
    [sym_additive_expression] = STATE(101),
    [sym_multiplicative_expression] = STATE(102),
    [sym_element_value_array_initializer] = STATE(90),
    [sym_element_value_list] = STATE(103),
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
    [anon_sym_BANG] = ACTIONS(216),
    [anon_sym_TILDE] = ACTIONS(216),
    [anon_sym_AT] = ACTIONS(26),
    [sym_comment] = ACTIONS(32),
  },
  [134] = {
    [anon_sym_AMP_AMP] = ACTIONS(250),
    [anon_sym_PIPE_PIPE] = ACTIONS(329),
    [anon_sym_QMARK] = ACTIONS(329),
    [anon_sym_RPAREN] = ACTIONS(329),
    [anon_sym_COMMA] = ACTIONS(329),
    [sym_comment] = ACTIONS(32),
  },
  [135] = {
    [anon_sym_EQ] = ACTIONS(168),
    [anon_sym_PLUS_EQ] = ACTIONS(170),
    [anon_sym_DASH_EQ] = ACTIONS(170),
    [anon_sym_STAR_EQ] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [anon_sym_AMP_EQ] = ACTIONS(170),
    [anon_sym_PIPE_EQ] = ACTIONS(170),
    [anon_sym_CARET_EQ] = ACTIONS(170),
    [anon_sym_PERCENT_EQ] = ACTIONS(170),
    [anon_sym_LT_LT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_LT] = ACTIONS(172),
    [anon_sym_EQ_EQ] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(174),
    [anon_sym_BANG_EQ] = ACTIONS(174),
    [anon_sym_AMP_AMP] = ACTIONS(176),
    [anon_sym_PIPE_PIPE] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(182),
    [anon_sym_AMP] = ACTIONS(184),
    [anon_sym_PIPE] = ACTIONS(186),
    [anon_sym_CARET] = ACTIONS(186),
    [anon_sym_PERCENT] = ACTIONS(182),
    [anon_sym_LT_LT] = ACTIONS(182),
    [anon_sym_GT_GT] = ACTIONS(182),
    [anon_sym_GT_GT_GT] = ACTIONS(182),
    [anon_sym_QMARK] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(331),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(32),
  },
  [136] = {
    [anon_sym_AMP_AMP] = ACTIONS(333),
    [anon_sym_PIPE_PIPE] = ACTIONS(333),
    [anon_sym_PIPE] = ACTIONS(256),
    [anon_sym_QMARK] = ACTIONS(333),
    [anon_sym_RPAREN] = ACTIONS(333),
    [anon_sym_COMMA] = ACTIONS(333),
    [sym_comment] = ACTIONS(32),
  },
  [137] = {
    [anon_sym_AMP_AMP] = ACTIONS(335),
    [anon_sym_PIPE_PIPE] = ACTIONS(335),
    [anon_sym_PIPE] = ACTIONS(337),
    [anon_sym_CARET] = ACTIONS(262),
    [anon_sym_QMARK] = ACTIONS(335),
    [anon_sym_RPAREN] = ACTIONS(335),
    [anon_sym_COMMA] = ACTIONS(335),
    [sym_comment] = ACTIONS(32),
  },
  [138] = {
    [anon_sym_AMP_AMP] = ACTIONS(339),
    [anon_sym_PIPE_PIPE] = ACTIONS(339),
    [anon_sym_PIPE] = ACTIONS(341),
    [anon_sym_CARET] = ACTIONS(339),
    [anon_sym_QMARK] = ACTIONS(339),
    [anon_sym_RPAREN] = ACTIONS(339),
    [anon_sym_COMMA] = ACTIONS(339),
    [sym_comment] = ACTIONS(32),
  },
  [139] = {
    [anon_sym_LT] = ACTIONS(343),
    [anon_sym_EQ_EQ] = ACTIONS(345),
    [anon_sym_BANG_EQ] = ACTIONS(345),
    [anon_sym_AMP_AMP] = ACTIONS(345),
    [anon_sym_PIPE_PIPE] = ACTIONS(345),
    [anon_sym_PIPE] = ACTIONS(343),
    [anon_sym_CARET] = ACTIONS(345),
    [anon_sym_LT_LT] = ACTIONS(282),
    [anon_sym_GT_GT] = ACTIONS(284),
    [anon_sym_GT_GT_GT] = ACTIONS(282),
    [anon_sym_QMARK] = ACTIONS(345),
    [anon_sym_RPAREN] = ACTIONS(345),
    [anon_sym_COMMA] = ACTIONS(345),
    [sym_comment] = ACTIONS(32),
  },
  [140] = {
    [anon_sym_LT] = ACTIONS(268),
    [anon_sym_EQ_EQ] = ACTIONS(347),
    [anon_sym_BANG_EQ] = ACTIONS(347),
    [anon_sym_AMP_AMP] = ACTIONS(349),
    [anon_sym_PIPE_PIPE] = ACTIONS(349),
    [anon_sym_PIPE] = ACTIONS(351),
    [anon_sym_CARET] = ACTIONS(349),
    [anon_sym_QMARK] = ACTIONS(349),
    [anon_sym_RPAREN] = ACTIONS(349),
    [anon_sym_COMMA] = ACTIONS(349),
    [sym_comment] = ACTIONS(32),
  },
  [141] = {
    [anon_sym_LT] = ACTIONS(353),
    [anon_sym_EQ_EQ] = ACTIONS(355),
    [anon_sym_BANG_EQ] = ACTIONS(355),
    [anon_sym_AMP_AMP] = ACTIONS(355),
    [anon_sym_PIPE_PIPE] = ACTIONS(355),
    [anon_sym_PLUS] = ACTIONS(290),
    [anon_sym_DASH] = ACTIONS(290),
    [anon_sym_PIPE] = ACTIONS(353),
    [anon_sym_CARET] = ACTIONS(355),
    [anon_sym_LT_LT] = ACTIONS(355),
    [anon_sym_GT_GT] = ACTIONS(353),
    [anon_sym_GT_GT_GT] = ACTIONS(355),
    [anon_sym_QMARK] = ACTIONS(355),
    [anon_sym_RPAREN] = ACTIONS(355),
    [anon_sym_COMMA] = ACTIONS(355),
    [sym_comment] = ACTIONS(32),
  },
  [142] = {
    [anon_sym_LT] = ACTIONS(357),
    [anon_sym_EQ_EQ] = ACTIONS(359),
    [anon_sym_BANG_EQ] = ACTIONS(359),
    [anon_sym_AMP_AMP] = ACTIONS(359),
    [anon_sym_PIPE_PIPE] = ACTIONS(359),
    [anon_sym_PLUS] = ACTIONS(359),
    [anon_sym_DASH] = ACTIONS(359),
    [anon_sym_STAR] = ACTIONS(296),
    [anon_sym_SLASH] = ACTIONS(298),
    [anon_sym_PIPE] = ACTIONS(357),
    [anon_sym_CARET] = ACTIONS(359),
    [anon_sym_PERCENT] = ACTIONS(296),
    [anon_sym_LT_LT] = ACTIONS(359),
    [anon_sym_GT_GT] = ACTIONS(357),
    [anon_sym_GT_GT_GT] = ACTIONS(359),
    [anon_sym_QMARK] = ACTIONS(359),
    [anon_sym_RPAREN] = ACTIONS(359),
    [anon_sym_COMMA] = ACTIONS(359),
    [sym_comment] = ACTIONS(32),
  },
  [143] = {
    [anon_sym_LT] = ACTIONS(361),
    [anon_sym_EQ_EQ] = ACTIONS(363),
    [anon_sym_BANG_EQ] = ACTIONS(363),
    [anon_sym_AMP_AMP] = ACTIONS(363),
    [anon_sym_PIPE_PIPE] = ACTIONS(363),
    [anon_sym_PLUS] = ACTIONS(363),
    [anon_sym_DASH] = ACTIONS(363),
    [anon_sym_STAR] = ACTIONS(363),
    [anon_sym_SLASH] = ACTIONS(361),
    [anon_sym_PIPE] = ACTIONS(361),
    [anon_sym_CARET] = ACTIONS(363),
    [anon_sym_PERCENT] = ACTIONS(363),
    [anon_sym_LT_LT] = ACTIONS(363),
    [anon_sym_GT_GT] = ACTIONS(361),
    [anon_sym_GT_GT_GT] = ACTIONS(363),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_RPAREN] = ACTIONS(363),
    [anon_sym_COMMA] = ACTIONS(363),
    [sym_comment] = ACTIONS(32),
  },
  [144] = {
    [anon_sym_EQ] = ACTIONS(306),
    [anon_sym_PLUS_EQ] = ACTIONS(308),
    [anon_sym_DASH_EQ] = ACTIONS(308),
    [anon_sym_STAR_EQ] = ACTIONS(308),
    [anon_sym_SLASH_EQ] = ACTIONS(308),
    [anon_sym_AMP_EQ] = ACTIONS(308),
    [anon_sym_PIPE_EQ] = ACTIONS(308),
    [anon_sym_CARET_EQ] = ACTIONS(308),
    [anon_sym_PERCENT_EQ] = ACTIONS(308),
    [anon_sym_LT_LT_EQ] = ACTIONS(308),
    [anon_sym_GT_GT_EQ] = ACTIONS(308),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(308),
    [anon_sym_GT] = ACTIONS(310),
    [anon_sym_LT] = ACTIONS(310),
    [anon_sym_EQ_EQ] = ACTIONS(312),
    [anon_sym_GT_EQ] = ACTIONS(312),
    [anon_sym_LT_EQ] = ACTIONS(312),
    [anon_sym_BANG_EQ] = ACTIONS(312),
    [anon_sym_AMP_AMP] = ACTIONS(365),
    [anon_sym_PIPE_PIPE] = ACTIONS(367),
    [anon_sym_PLUS] = ACTIONS(369),
    [anon_sym_DASH] = ACTIONS(369),
    [anon_sym_STAR] = ACTIONS(371),
    [anon_sym_SLASH] = ACTIONS(371),
    [anon_sym_AMP] = ACTIONS(314),
    [anon_sym_PIPE] = ACTIONS(373),
    [anon_sym_CARET] = ACTIONS(373),
    [anon_sym_PERCENT] = ACTIONS(371),
    [anon_sym_LT_LT] = ACTIONS(371),
    [anon_sym_GT_GT] = ACTIONS(371),
    [anon_sym_GT_GT_GT] = ACTIONS(371),
    [anon_sym_QMARK] = ACTIONS(375),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [anon_sym_RPAREN] = ACTIONS(162),
    [anon_sym_COMMA] = ACTIONS(162),
    [sym_comment] = ACTIONS(32),
  },
  [145] = {
    [anon_sym_EQ] = ACTIONS(166),
    [anon_sym_PLUS_EQ] = ACTIONS(164),
    [anon_sym_DASH_EQ] = ACTIONS(164),
    [anon_sym_STAR_EQ] = ACTIONS(164),
    [anon_sym_SLASH_EQ] = ACTIONS(164),
    [anon_sym_AMP_EQ] = ACTIONS(164),
    [anon_sym_PIPE_EQ] = ACTIONS(164),
    [anon_sym_CARET_EQ] = ACTIONS(164),
    [anon_sym_PERCENT_EQ] = ACTIONS(164),
    [anon_sym_LT_LT_EQ] = ACTIONS(164),
    [anon_sym_GT_GT_EQ] = ACTIONS(164),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(164),
    [anon_sym_GT] = ACTIONS(166),
    [anon_sym_LT] = ACTIONS(166),
    [anon_sym_EQ_EQ] = ACTIONS(164),
    [anon_sym_GT_EQ] = ACTIONS(164),
    [anon_sym_LT_EQ] = ACTIONS(164),
    [anon_sym_BANG_EQ] = ACTIONS(164),
    [anon_sym_AMP_AMP] = ACTIONS(164),
    [anon_sym_PIPE_PIPE] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(166),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_STAR] = ACTIONS(371),
    [anon_sym_SLASH] = ACTIONS(371),
    [anon_sym_AMP] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(166),
    [anon_sym_CARET] = ACTIONS(166),
    [anon_sym_PERCENT] = ACTIONS(371),
    [anon_sym_LT_LT] = ACTIONS(371),
    [anon_sym_GT_GT] = ACTIONS(371),
    [anon_sym_GT_GT_GT] = ACTIONS(371),
    [anon_sym_QMARK] = ACTIONS(164),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_COMMA] = ACTIONS(164),
    [sym_comment] = ACTIONS(32),
  },
  [146] = {
    [anon_sym_EQ] = ACTIONS(166),
    [anon_sym_PLUS_EQ] = ACTIONS(164),
    [anon_sym_DASH_EQ] = ACTIONS(164),
    [anon_sym_STAR_EQ] = ACTIONS(164),
    [anon_sym_SLASH_EQ] = ACTIONS(164),
    [anon_sym_AMP_EQ] = ACTIONS(164),
    [anon_sym_PIPE_EQ] = ACTIONS(164),
    [anon_sym_CARET_EQ] = ACTIONS(164),
    [anon_sym_PERCENT_EQ] = ACTIONS(164),
    [anon_sym_LT_LT_EQ] = ACTIONS(164),
    [anon_sym_GT_GT_EQ] = ACTIONS(164),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(164),
    [anon_sym_GT] = ACTIONS(310),
    [anon_sym_LT] = ACTIONS(310),
    [anon_sym_EQ_EQ] = ACTIONS(312),
    [anon_sym_GT_EQ] = ACTIONS(312),
    [anon_sym_LT_EQ] = ACTIONS(312),
    [anon_sym_BANG_EQ] = ACTIONS(312),
    [anon_sym_AMP_AMP] = ACTIONS(164),
    [anon_sym_PIPE_PIPE] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(369),
    [anon_sym_DASH] = ACTIONS(369),
    [anon_sym_STAR] = ACTIONS(371),
    [anon_sym_SLASH] = ACTIONS(371),
    [anon_sym_AMP] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(166),
    [anon_sym_CARET] = ACTIONS(166),
    [anon_sym_PERCENT] = ACTIONS(371),
    [anon_sym_LT_LT] = ACTIONS(371),
    [anon_sym_GT_GT] = ACTIONS(371),
    [anon_sym_GT_GT_GT] = ACTIONS(371),
    [anon_sym_QMARK] = ACTIONS(164),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_COMMA] = ACTIONS(164),
    [sym_comment] = ACTIONS(32),
  },
  [147] = {
    [anon_sym_EQ] = ACTIONS(166),
    [anon_sym_PLUS_EQ] = ACTIONS(164),
    [anon_sym_DASH_EQ] = ACTIONS(164),
    [anon_sym_STAR_EQ] = ACTIONS(164),
    [anon_sym_SLASH_EQ] = ACTIONS(164),
    [anon_sym_AMP_EQ] = ACTIONS(164),
    [anon_sym_PIPE_EQ] = ACTIONS(164),
    [anon_sym_CARET_EQ] = ACTIONS(164),
    [anon_sym_PERCENT_EQ] = ACTIONS(164),
    [anon_sym_LT_LT_EQ] = ACTIONS(164),
    [anon_sym_GT_GT_EQ] = ACTIONS(164),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(164),
    [anon_sym_GT] = ACTIONS(310),
    [anon_sym_LT] = ACTIONS(310),
    [anon_sym_EQ_EQ] = ACTIONS(312),
    [anon_sym_GT_EQ] = ACTIONS(312),
    [anon_sym_LT_EQ] = ACTIONS(312),
    [anon_sym_BANG_EQ] = ACTIONS(312),
    [anon_sym_AMP_AMP] = ACTIONS(365),
    [anon_sym_PIPE_PIPE] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(369),
    [anon_sym_DASH] = ACTIONS(369),
    [anon_sym_STAR] = ACTIONS(371),
    [anon_sym_SLASH] = ACTIONS(371),
    [anon_sym_AMP] = ACTIONS(314),
    [anon_sym_PIPE] = ACTIONS(166),
    [anon_sym_CARET] = ACTIONS(166),
    [anon_sym_PERCENT] = ACTIONS(371),
    [anon_sym_LT_LT] = ACTIONS(371),
    [anon_sym_GT_GT] = ACTIONS(371),
    [anon_sym_GT_GT_GT] = ACTIONS(371),
    [anon_sym_QMARK] = ACTIONS(164),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_COMMA] = ACTIONS(164),
    [sym_comment] = ACTIONS(32),
  },
  [148] = {
    [anon_sym_EQ] = ACTIONS(166),
    [anon_sym_PLUS_EQ] = ACTIONS(164),
    [anon_sym_DASH_EQ] = ACTIONS(164),
    [anon_sym_STAR_EQ] = ACTIONS(164),
    [anon_sym_SLASH_EQ] = ACTIONS(164),
    [anon_sym_AMP_EQ] = ACTIONS(164),
    [anon_sym_PIPE_EQ] = ACTIONS(164),
    [anon_sym_CARET_EQ] = ACTIONS(164),
    [anon_sym_PERCENT_EQ] = ACTIONS(164),
    [anon_sym_LT_LT_EQ] = ACTIONS(164),
    [anon_sym_GT_GT_EQ] = ACTIONS(164),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(164),
    [anon_sym_GT] = ACTIONS(310),
    [anon_sym_LT] = ACTIONS(310),
    [anon_sym_EQ_EQ] = ACTIONS(312),
    [anon_sym_GT_EQ] = ACTIONS(312),
    [anon_sym_LT_EQ] = ACTIONS(312),
    [anon_sym_BANG_EQ] = ACTIONS(312),
    [anon_sym_AMP_AMP] = ACTIONS(164),
    [anon_sym_PIPE_PIPE] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(166),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_STAR] = ACTIONS(371),
    [anon_sym_SLASH] = ACTIONS(371),
    [anon_sym_AMP] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(166),
    [anon_sym_CARET] = ACTIONS(166),
    [anon_sym_PERCENT] = ACTIONS(371),
    [anon_sym_LT_LT] = ACTIONS(371),
    [anon_sym_GT_GT] = ACTIONS(371),
    [anon_sym_GT_GT_GT] = ACTIONS(371),
    [anon_sym_QMARK] = ACTIONS(164),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_COMMA] = ACTIONS(164),
    [sym_comment] = ACTIONS(32),
  },
  [149] = {
    [anon_sym_EQ] = ACTIONS(168),
    [anon_sym_PLUS_EQ] = ACTIONS(170),
    [anon_sym_DASH_EQ] = ACTIONS(170),
    [anon_sym_STAR_EQ] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [anon_sym_AMP_EQ] = ACTIONS(170),
    [anon_sym_PIPE_EQ] = ACTIONS(170),
    [anon_sym_CARET_EQ] = ACTIONS(170),
    [anon_sym_PERCENT_EQ] = ACTIONS(170),
    [anon_sym_LT_LT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_LT] = ACTIONS(172),
    [anon_sym_EQ_EQ] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(174),
    [anon_sym_BANG_EQ] = ACTIONS(174),
    [anon_sym_AMP_AMP] = ACTIONS(176),
    [anon_sym_PIPE_PIPE] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(182),
    [anon_sym_AMP] = ACTIONS(184),
    [anon_sym_PIPE] = ACTIONS(186),
    [anon_sym_CARET] = ACTIONS(186),
    [anon_sym_PERCENT] = ACTIONS(182),
    [anon_sym_LT_LT] = ACTIONS(182),
    [anon_sym_GT_GT] = ACTIONS(182),
    [anon_sym_GT_GT_GT] = ACTIONS(182),
    [anon_sym_QMARK] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(377),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(32),
  },
  [150] = {
    [aux_sym_element_value_list_repeat1] = STATE(111),
    [anon_sym_RPAREN] = ACTIONS(379),
    [anon_sym_COMMA] = ACTIONS(382),
    [sym_comment] = ACTIONS(32),
  },
  [151] = {
    [sym_unary_expression] = STATE(91),
    [sym_conditional_expression] = STATE(153),
    [sym_conditional_or_expression] = STATE(93),
    [sym_conditional_and_expression] = STATE(94),
    [sym_inclusive_or_expression] = STATE(95),
    [sym_exclusive_or_expression] = STATE(96),
    [sym_and_expression] = STATE(97),
    [sym_relational_expression] = STATE(98),
    [sym_equality_expression] = STATE(99),
    [sym_shift_expression] = STATE(100),
    [sym_additive_expression] = STATE(101),
    [sym_multiplicative_expression] = STATE(102),
    [anon_sym_BANG] = ACTIONS(216),
    [anon_sym_TILDE] = ACTIONS(216),
    [sym_comment] = ACTIONS(32),
  },
  [152] = {
    [sym__expression] = STATE(154),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(232),
    [anon_sym_TILDE] = ACTIONS(232),
    [anon_sym_PLUS_PLUS] = ACTIONS(234),
    [anon_sym_DASH_DASH] = ACTIONS(234),
    [sym_comment] = ACTIONS(32),
  },
  [153] = {
    [anon_sym_RPAREN] = ACTIONS(386),
    [anon_sym_COMMA] = ACTIONS(386),
    [sym_comment] = ACTIONS(32),
  },
  [154] = {
    [anon_sym_EQ] = ACTIONS(230),
    [anon_sym_PLUS_EQ] = ACTIONS(228),
    [anon_sym_DASH_EQ] = ACTIONS(228),
    [anon_sym_STAR_EQ] = ACTIONS(228),
    [anon_sym_SLASH_EQ] = ACTIONS(228),
    [anon_sym_AMP_EQ] = ACTIONS(228),
    [anon_sym_PIPE_EQ] = ACTIONS(228),
    [anon_sym_CARET_EQ] = ACTIONS(228),
    [anon_sym_PERCENT_EQ] = ACTIONS(228),
    [anon_sym_LT_LT_EQ] = ACTIONS(228),
    [anon_sym_GT_GT_EQ] = ACTIONS(228),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(228),
    [anon_sym_GT] = ACTIONS(310),
    [anon_sym_LT] = ACTIONS(310),
    [anon_sym_EQ_EQ] = ACTIONS(312),
    [anon_sym_GT_EQ] = ACTIONS(312),
    [anon_sym_LT_EQ] = ACTIONS(312),
    [anon_sym_BANG_EQ] = ACTIONS(312),
    [anon_sym_AMP_AMP] = ACTIONS(365),
    [anon_sym_PIPE_PIPE] = ACTIONS(367),
    [anon_sym_PLUS] = ACTIONS(369),
    [anon_sym_DASH] = ACTIONS(369),
    [anon_sym_STAR] = ACTIONS(371),
    [anon_sym_SLASH] = ACTIONS(371),
    [anon_sym_AMP] = ACTIONS(314),
    [anon_sym_PIPE] = ACTIONS(373),
    [anon_sym_CARET] = ACTIONS(373),
    [anon_sym_PERCENT] = ACTIONS(371),
    [anon_sym_LT_LT] = ACTIONS(371),
    [anon_sym_GT_GT] = ACTIONS(371),
    [anon_sym_GT_GT_GT] = ACTIONS(371),
    [anon_sym_QMARK] = ACTIONS(375),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [anon_sym_RPAREN] = ACTIONS(228),
    [anon_sym_COMMA] = ACTIONS(228),
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
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_marker_annotation, 2),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_identifier, 1),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 2),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [134] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
  [146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_character_literal_repeat1, 2),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(62),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 3),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_identifier, 2),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3, .fragile = true),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 3),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_binary_expression, 3),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(68),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(72),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(73),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(71),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 3),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 3),
  [196] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 3),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 4),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair_list, 1),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 3),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_identifier_repeat1, 2),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 4),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 5),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair_list, 2),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_identifier_repeat1, 3),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_ternary_expression, 5, .fragile = true),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_ternary_expression, 5, .fragile = true),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value, 1),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_multiplicative_expression, 1),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_multiplicative_expression, 1),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair, 3),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 1),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_or_expression, 1),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_and_expression, 1),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(115),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inclusive_or_expression, 1),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inclusive_or_expression, 1),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exclusive_or_expression, 1),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exclusive_or_expression, 1),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equality_expression, 1),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_and_expression, 1),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_and_expression, 1),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 1),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 1),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(119),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_shift_expression, 1),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_shift_expression, 1),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_additive_expression, 1),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_additive_expression, 1),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(121),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 1, .fragile = true),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_pair_list_repeat1, 2),
  [306] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(126),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(127),
  [316] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_list, 2),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 2),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_pair_list_repeat1, 3),
  [322] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_list, 1, .fragile = true), REDUCE(aux_sym_element_value_list_repeat1, 2, .fragile = true),
  [325] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_list, 1, .fragile = true), REDUCE(aux_sym_element_value_list_repeat1, 2, .fragile = true), SHIFT(110),
  [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_or_expression, 3),
  [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
  [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_and_expression, 3),
  [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inclusive_or_expression, 3),
  [337] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inclusive_or_expression, 3),
  [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exclusive_or_expression, 3),
  [341] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exclusive_or_expression, 3),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 3),
  [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equality_expression, 3),
  [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_and_expression, 3),
  [351] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_and_expression, 3),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_shift_expression, 3),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_shift_expression, 3),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_additive_expression, 3),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_additive_expression, 3),
  [361] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_multiplicative_expression, 3),
  [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_multiplicative_expression, 3),
  [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
  [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(129),
  [371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
  [373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(128),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
  [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
  [379] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_list, 1, .fragile = true), REDUCE(aux_sym_element_value_list_repeat1, 3, .fragile = true),
  [382] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_list, 1, .fragile = true), REDUCE(aux_sym_element_value_list_repeat1, 3, .fragile = true), SHIFT(110),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 5),
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
