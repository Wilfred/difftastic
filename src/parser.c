#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 72
#define SYMBOL_COUNT 83
#define ALIAS_COUNT 0
#define TOKEN_COUNT 64
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
  anon_sym_open = 59,
  anon_sym_module = 60,
  anon_sym_DOT = 61,
  sym_identifier = 62,
  sym_comment = 63,
  sym_program = 64,
  sym__statement = 65,
  sym__literal = 66,
  sym_integer_literal = 67,
  sym_floating_point_literal = 68,
  sym_boolean_literal = 69,
  sym_character_literal = 70,
  sym__expression = 71,
  sym_assignment_expression = 72,
  sym_binary_expression = 73,
  sym_ternary_expression = 74,
  sym_unary_expression = 75,
  sym_update_expression = 76,
  sym__declaration = 77,
  sym_module_declaration = 78,
  sym_module_identifier = 79,
  aux_sym_program_repeat1 = 80,
  aux_sym_character_literal_repeat1 = 81,
  aux_sym_module_identifier_repeat1 = 82,
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
  [sym__declaration] = "_declaration",
  [sym_module_declaration] = "module_declaration",
  [sym_module_identifier] = "module_identifier",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_character_literal_repeat1] = "character_literal_repeat1",
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
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_literal_repeat1] = {
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
      if (lookahead == '-')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == '/')
        ADVANCE(22);
      if (lookahead == ':')
        ADVANCE(28);
      if (lookahead == ';')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(30);
      if (lookahead == '=')
        ADVANCE(34);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(43);
      if (lookahead == '^')
        ADVANCE(44);
      if (lookahead == '{')
        ADVANCE(46);
      if (lookahead == '|')
        ADVANCE(47);
      if (lookahead == '}')
        ADVANCE(50);
      if (lookahead == '~')
        ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
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
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '=')
        ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(26);
      if (lookahead == '=')
        ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead != 0)
        ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(25);
      if (lookahead != 0)
        ADVANCE(23);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(31);
      if (lookahead == '=')
        ADVANCE(33);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=')
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(37);
      if (lookahead == '>')
        ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '>')
        ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      if (lookahead == '=')
        ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SLASH);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=')
        ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=')
        ADVANCE(48);
      if (lookahead == '|')
        ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 53:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(54);
      if (lookahead == '\"')
        ADVANCE(55);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(58);
      if (lookahead == '-')
        ADVANCE(59);
      if (lookahead == '.')
        ADVANCE(60);
      if (lookahead == '/')
        ADVANCE(68);
      if (lookahead == '0')
        ADVANCE(69);
      if (lookahead == 'f')
        ADVANCE(94);
      if (lookahead == 'm')
        ADVANCE(99);
      if (lookahead == 'n')
        ADVANCE(105);
      if (lookahead == 'o')
        ADVANCE(109);
      if (lookahead == 't')
        ADVANCE(113);
      if (lookahead == '~')
        ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(53);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 55:
      if (lookahead == '\"')
        ADVANCE(56);
      if (lookahead == '\\')
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 57:
      if (lookahead == '\n')
        ADVANCE(55);
      if (lookahead != 0)
        ADVANCE(55);
      END_STATE();
    case 58:
      if (lookahead == '+')
        ADVANCE(16);
      END_STATE();
    case 59:
      if (lookahead == '-')
        ADVANCE(19);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(62);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(63);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '_')
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(61);
      END_STATE();
    case 63:
      if (lookahead == '+')
        ADVANCE(64);
      if (lookahead == '-')
        ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(65);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(66);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(65);
      END_STATE();
    case 66:
      if (lookahead == '_')
        ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 68:
      if (lookahead == '*')
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(26);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(70);
      if (lookahead == 'B')
        ADVANCE(71);
      if (lookahead == 'O')
        ADVANCE(73);
      if (lookahead == 'X')
        ADVANCE(75);
      if (lookahead == '_')
        ADVANCE(92);
      if (lookahead == 'b')
        ADVANCE(71);
      if (lookahead == 'o')
        ADVANCE(73);
      if (lookahead == 'x')
        ADVANCE(75);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(63);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(63);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(61);
      END_STATE();
    case 71:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(72);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_octal_integer_literal);
      if (lookahead == '_')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead == '.')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(86);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == '_')
        ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(77);
      END_STATE();
    case 78:
      if (lookahead == '+')
        ADVANCE(79);
      if (lookahead == '-')
        ADVANCE(79);
      if (lookahead == '_')
        ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(77);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(81);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(80);
      END_STATE();
    case 81:
      if (lookahead == '_')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(78);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(83);
      END_STATE();
    case 84:
      if (lookahead == '_')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(77);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(77);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(87);
      if (lookahead == '_')
        ADVANCE(88);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(86);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(77);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(86);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '+')
        ADVANCE(79);
      if (lookahead == '-')
        ADVANCE(79);
      if (lookahead == '.')
        ADVANCE(87);
      if (lookahead == '_')
        ADVANCE(88);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(86);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(87);
      if (lookahead == '_')
        ADVANCE(91);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(89);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(90);
      END_STATE();
    case 91:
      if (lookahead == '_')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(86);
      END_STATE();
    case 92:
      if (lookahead == '_')
        ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(63);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      END_STATE();
    case 94:
      if (lookahead == 'a')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'l')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 's')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'e')
        ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 99:
      if (lookahead == 'o')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'd')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'u')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'l')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'e')
        ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 105:
      if (lookahead == 'u')
        ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'l')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 'l')
        ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 109:
      if (lookahead == 'p')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'e')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'n')
        ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 113:
      if (lookahead == 'r')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 'u')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 'e')
        ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 117:
      if (lookahead == '!')
        ADVANCE(118);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(13);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == '/')
        ADVANCE(22);
      if (lookahead == ':')
        ADVANCE(28);
      if (lookahead == ';')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(30);
      if (lookahead == '=')
        ADVANCE(34);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '^')
        ADVANCE(44);
      if (lookahead == '|')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(117);
      END_STATE();
    case 118:
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 119:
      if (lookahead == '\n')
        SKIP(119);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(120);
      if (lookahead == '\\')
        ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(124);
      if (lookahead != 0)
        ADVANCE(124);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(26);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '\n')
        ADVANCE(122);
      if (lookahead != 0)
        ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 53},
  [2] = {.lex_state = 117},
  [3] = {.lex_state = 117},
  [4] = {.lex_state = 117},
  [5] = {.lex_state = 119},
  [6] = {.lex_state = 117},
  [7] = {.lex_state = 53},
  [8] = {.lex_state = 53},
  [9] = {.lex_state = 53},
  [10] = {.lex_state = 125},
  [11] = {.lex_state = 53},
  [12] = {.lex_state = 117},
  [13] = {.lex_state = 117},
  [14] = {.lex_state = 117},
  [15] = {.lex_state = 117},
  [16] = {.lex_state = 117},
  [17] = {.lex_state = 117},
  [18] = {.lex_state = 53},
  [19] = {.lex_state = 117},
  [20] = {.lex_state = 119},
  [21] = {.lex_state = 119},
  [22] = {.lex_state = 117},
  [23] = {.lex_state = 117},
  [24] = {.lex_state = 125},
  [25] = {.lex_state = 117},
  [26] = {.lex_state = 117},
  [27] = {.lex_state = 53},
  [28] = {.lex_state = 53},
  [29] = {.lex_state = 53},
  [30] = {.lex_state = 53},
  [31] = {.lex_state = 53},
  [32] = {.lex_state = 53},
  [33] = {.lex_state = 53},
  [34] = {.lex_state = 53},
  [35] = {.lex_state = 117},
  [36] = {.lex_state = 117},
  [37] = {.lex_state = 117},
  [38] = {.lex_state = 119},
  [39] = {.lex_state = 117},
  [40] = {.lex_state = 125},
  [41] = {.lex_state = 117},
  [42] = {.lex_state = 117},
  [43] = {.lex_state = 117},
  [44] = {.lex_state = 117},
  [45] = {.lex_state = 117},
  [46] = {.lex_state = 117},
  [47] = {.lex_state = 117},
  [48] = {.lex_state = 53},
  [49] = {.lex_state = 53},
  [50] = {.lex_state = 117},
  [51] = {.lex_state = 53},
  [52] = {.lex_state = 117},
  [53] = {.lex_state = 125},
  [54] = {.lex_state = 53},
  [55] = {.lex_state = 53},
  [56] = {.lex_state = 53},
  [57] = {.lex_state = 53},
  [58] = {.lex_state = 53},
  [59] = {.lex_state = 53},
  [60] = {.lex_state = 53},
  [61] = {.lex_state = 53},
  [62] = {.lex_state = 117},
  [63] = {.lex_state = 117},
  [64] = {.lex_state = 117},
  [65] = {.lex_state = 117},
  [66] = {.lex_state = 117},
  [67] = {.lex_state = 117},
  [68] = {.lex_state = 117},
  [69] = {.lex_state = 117},
  [70] = {.lex_state = 53},
  [71] = {.lex_state = 117},
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
    [anon_sym_DOT] = ACTIONS(1),
    [sym_identifier] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_program] = STATE(11),
    [sym__statement] = STATE(12),
    [sym__literal] = STATE(13),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(14),
    [sym_assignment_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_ternary_expression] = STATE(15),
    [sym_unary_expression] = STATE(16),
    [sym_update_expression] = STATE(15),
    [sym__declaration] = STATE(13),
    [sym_module_declaration] = STATE(17),
    [aux_sym_program_repeat1] = STATE(18),
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
    [anon_sym_open] = ACTIONS(26),
    [anon_sym_module] = ACTIONS(28),
    [sym_comment] = ACTIONS(30),
  },
  [2] = {
    [anon_sym_SEMI] = ACTIONS(32),
    [sym_comment] = ACTIONS(30),
  },
  [3] = {
    [anon_sym_SEMI] = ACTIONS(34),
    [sym_comment] = ACTIONS(30),
  },
  [4] = {
    [anon_sym_SEMI] = ACTIONS(36),
    [sym_comment] = ACTIONS(30),
  },
  [5] = {
    [aux_sym_character_literal_repeat1] = STATE(21),
    [anon_sym_SQUOTE] = ACTIONS(38),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(40),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(40),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(40),
    [sym_comment] = ACTIONS(42),
  },
  [6] = {
    [anon_sym_SEMI] = ACTIONS(44),
    [sym_comment] = ACTIONS(30),
  },
  [7] = {
    [sym__expression] = STATE(22),
    [sym_assignment_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_ternary_expression] = STATE(15),
    [sym_unary_expression] = STATE(16),
    [sym_update_expression] = STATE(15),
    [anon_sym_BANG] = ACTIONS(22),
    [anon_sym_TILDE] = ACTIONS(22),
    [anon_sym_PLUS_PLUS] = ACTIONS(24),
    [anon_sym_DASH_DASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(30),
  },
  [8] = {
    [sym__expression] = STATE(23),
    [sym_assignment_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_ternary_expression] = STATE(15),
    [sym_unary_expression] = STATE(16),
    [sym_update_expression] = STATE(15),
    [anon_sym_BANG] = ACTIONS(22),
    [anon_sym_TILDE] = ACTIONS(22),
    [anon_sym_PLUS_PLUS] = ACTIONS(24),
    [anon_sym_DASH_DASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(30),
  },
  [9] = {
    [anon_sym_module] = ACTIONS(46),
    [sym_comment] = ACTIONS(30),
  },
  [10] = {
    [sym_module_identifier] = STATE(26),
    [sym_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(30),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(50),
    [sym_comment] = ACTIONS(30),
  },
  [12] = {
    [anon_sym_SEMI] = ACTIONS(52),
    [sym_comment] = ACTIONS(30),
  },
  [13] = {
    [anon_sym_SEMI] = ACTIONS(54),
    [sym_comment] = ACTIONS(30),
  },
  [14] = {
    [anon_sym_SEMI] = ACTIONS(54),
    [anon_sym_EQ] = ACTIONS(56),
    [anon_sym_PLUS_EQ] = ACTIONS(58),
    [anon_sym_DASH_EQ] = ACTIONS(58),
    [anon_sym_STAR_EQ] = ACTIONS(58),
    [anon_sym_SLASH_EQ] = ACTIONS(58),
    [anon_sym_AMP_EQ] = ACTIONS(58),
    [anon_sym_PIPE_EQ] = ACTIONS(58),
    [anon_sym_CARET_EQ] = ACTIONS(58),
    [anon_sym_PERCENT_EQ] = ACTIONS(58),
    [anon_sym_LT_LT_EQ] = ACTIONS(58),
    [anon_sym_GT_GT_EQ] = ACTIONS(58),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(58),
    [anon_sym_GT] = ACTIONS(60),
    [anon_sym_LT] = ACTIONS(60),
    [anon_sym_EQ_EQ] = ACTIONS(62),
    [anon_sym_GT_EQ] = ACTIONS(62),
    [anon_sym_LT_EQ] = ACTIONS(62),
    [anon_sym_BANG_EQ] = ACTIONS(62),
    [anon_sym_AMP_AMP] = ACTIONS(64),
    [anon_sym_PIPE_PIPE] = ACTIONS(66),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [anon_sym_STAR] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_AMP] = ACTIONS(72),
    [anon_sym_PIPE] = ACTIONS(74),
    [anon_sym_CARET] = ACTIONS(74),
    [anon_sym_PERCENT] = ACTIONS(70),
    [anon_sym_LT_LT] = ACTIONS(70),
    [anon_sym_GT_GT] = ACTIONS(70),
    [anon_sym_GT_GT_GT] = ACTIONS(70),
    [anon_sym_QMARK] = ACTIONS(76),
    [anon_sym_PLUS_PLUS] = ACTIONS(78),
    [anon_sym_DASH_DASH] = ACTIONS(78),
    [sym_comment] = ACTIONS(30),
  },
  [15] = {
    [anon_sym_SEMI] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(82),
    [anon_sym_PLUS_EQ] = ACTIONS(80),
    [anon_sym_DASH_EQ] = ACTIONS(80),
    [anon_sym_STAR_EQ] = ACTIONS(80),
    [anon_sym_SLASH_EQ] = ACTIONS(80),
    [anon_sym_AMP_EQ] = ACTIONS(80),
    [anon_sym_PIPE_EQ] = ACTIONS(80),
    [anon_sym_CARET_EQ] = ACTIONS(80),
    [anon_sym_PERCENT_EQ] = ACTIONS(80),
    [anon_sym_LT_LT_EQ] = ACTIONS(80),
    [anon_sym_GT_GT_EQ] = ACTIONS(80),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(80),
    [anon_sym_GT] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(82),
    [anon_sym_EQ_EQ] = ACTIONS(80),
    [anon_sym_GT_EQ] = ACTIONS(80),
    [anon_sym_LT_EQ] = ACTIONS(80),
    [anon_sym_BANG_EQ] = ACTIONS(80),
    [anon_sym_AMP_AMP] = ACTIONS(80),
    [anon_sym_PIPE_PIPE] = ACTIONS(80),
    [anon_sym_PLUS] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(82),
    [anon_sym_STAR] = ACTIONS(82),
    [anon_sym_SLASH] = ACTIONS(82),
    [anon_sym_AMP] = ACTIONS(82),
    [anon_sym_PIPE] = ACTIONS(82),
    [anon_sym_CARET] = ACTIONS(82),
    [anon_sym_PERCENT] = ACTIONS(82),
    [anon_sym_LT_LT] = ACTIONS(82),
    [anon_sym_GT_GT] = ACTIONS(82),
    [anon_sym_GT_GT_GT] = ACTIONS(82),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_COLON] = ACTIONS(80),
    [anon_sym_PLUS_PLUS] = ACTIONS(80),
    [anon_sym_DASH_DASH] = ACTIONS(80),
    [sym_comment] = ACTIONS(30),
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
    [sym_comment] = ACTIONS(30),
  },
  [17] = {
    [anon_sym_SEMI] = ACTIONS(88),
    [sym_comment] = ACTIONS(30),
  },
  [18] = {
    [sym__statement] = STATE(36),
    [sym__literal] = STATE(13),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(14),
    [sym_assignment_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_ternary_expression] = STATE(15),
    [sym_unary_expression] = STATE(16),
    [sym_update_expression] = STATE(15),
    [sym__declaration] = STATE(13),
    [sym_module_declaration] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(90),
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
    [anon_sym_open] = ACTIONS(26),
    [anon_sym_module] = ACTIONS(28),
    [sym_comment] = ACTIONS(30),
  },
  [19] = {
    [anon_sym_SEMI] = ACTIONS(92),
    [sym_comment] = ACTIONS(30),
  },
  [20] = {
    [anon_sym_SQUOTE] = ACTIONS(94),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(42),
  },
  [21] = {
    [anon_sym_SQUOTE] = ACTIONS(96),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(98),
    [sym_comment] = ACTIONS(42),
  },
  [22] = {
    [anon_sym_SEMI] = ACTIONS(100),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_PLUS_EQ] = ACTIONS(100),
    [anon_sym_DASH_EQ] = ACTIONS(100),
    [anon_sym_STAR_EQ] = ACTIONS(100),
    [anon_sym_SLASH_EQ] = ACTIONS(100),
    [anon_sym_AMP_EQ] = ACTIONS(100),
    [anon_sym_PIPE_EQ] = ACTIONS(100),
    [anon_sym_CARET_EQ] = ACTIONS(100),
    [anon_sym_PERCENT_EQ] = ACTIONS(100),
    [anon_sym_LT_LT_EQ] = ACTIONS(100),
    [anon_sym_GT_GT_EQ] = ACTIONS(100),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(100),
    [anon_sym_GT] = ACTIONS(102),
    [anon_sym_LT] = ACTIONS(102),
    [anon_sym_EQ_EQ] = ACTIONS(100),
    [anon_sym_GT_EQ] = ACTIONS(100),
    [anon_sym_LT_EQ] = ACTIONS(100),
    [anon_sym_BANG_EQ] = ACTIONS(100),
    [anon_sym_AMP_AMP] = ACTIONS(100),
    [anon_sym_PIPE_PIPE] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_DASH] = ACTIONS(102),
    [anon_sym_STAR] = ACTIONS(102),
    [anon_sym_SLASH] = ACTIONS(102),
    [anon_sym_AMP] = ACTIONS(102),
    [anon_sym_PIPE] = ACTIONS(102),
    [anon_sym_CARET] = ACTIONS(102),
    [anon_sym_PERCENT] = ACTIONS(102),
    [anon_sym_LT_LT] = ACTIONS(102),
    [anon_sym_GT_GT] = ACTIONS(102),
    [anon_sym_GT_GT_GT] = ACTIONS(102),
    [anon_sym_QMARK] = ACTIONS(100),
    [anon_sym_COLON] = ACTIONS(100),
    [anon_sym_PLUS_PLUS] = ACTIONS(78),
    [anon_sym_DASH_DASH] = ACTIONS(78),
    [sym_comment] = ACTIONS(30),
  },
  [23] = {
    [anon_sym_SEMI] = ACTIONS(104),
    [anon_sym_EQ] = ACTIONS(106),
    [anon_sym_PLUS_EQ] = ACTIONS(104),
    [anon_sym_DASH_EQ] = ACTIONS(104),
    [anon_sym_STAR_EQ] = ACTIONS(104),
    [anon_sym_SLASH_EQ] = ACTIONS(104),
    [anon_sym_AMP_EQ] = ACTIONS(104),
    [anon_sym_PIPE_EQ] = ACTIONS(104),
    [anon_sym_CARET_EQ] = ACTIONS(104),
    [anon_sym_PERCENT_EQ] = ACTIONS(104),
    [anon_sym_LT_LT_EQ] = ACTIONS(104),
    [anon_sym_GT_GT_EQ] = ACTIONS(104),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(104),
    [anon_sym_GT] = ACTIONS(106),
    [anon_sym_LT] = ACTIONS(106),
    [anon_sym_EQ_EQ] = ACTIONS(104),
    [anon_sym_GT_EQ] = ACTIONS(104),
    [anon_sym_LT_EQ] = ACTIONS(104),
    [anon_sym_BANG_EQ] = ACTIONS(104),
    [anon_sym_AMP_AMP] = ACTIONS(104),
    [anon_sym_PIPE_PIPE] = ACTIONS(104),
    [anon_sym_PLUS] = ACTIONS(106),
    [anon_sym_DASH] = ACTIONS(106),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_AMP] = ACTIONS(106),
    [anon_sym_PIPE] = ACTIONS(106),
    [anon_sym_CARET] = ACTIONS(106),
    [anon_sym_PERCENT] = ACTIONS(106),
    [anon_sym_LT_LT] = ACTIONS(106),
    [anon_sym_GT_GT] = ACTIONS(106),
    [anon_sym_GT_GT_GT] = ACTIONS(106),
    [anon_sym_QMARK] = ACTIONS(104),
    [anon_sym_COLON] = ACTIONS(104),
    [anon_sym_PLUS_PLUS] = ACTIONS(104),
    [anon_sym_DASH_DASH] = ACTIONS(104),
    [sym_comment] = ACTIONS(30),
  },
  [24] = {
    [sym_module_identifier] = STATE(39),
    [sym_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(30),
  },
  [25] = {
    [aux_sym_module_identifier_repeat1] = STATE(41),
    [anon_sym_SEMI] = ACTIONS(108),
    [anon_sym_DOT] = ACTIONS(110),
    [sym_comment] = ACTIONS(30),
  },
  [26] = {
    [anon_sym_SEMI] = ACTIONS(112),
    [sym_comment] = ACTIONS(30),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_decimal_integer_literal] = ACTIONS(116),
    [sym_hex_integer_literal] = ACTIONS(116),
    [sym_octal_integer_literal] = ACTIONS(116),
    [sym_binary_integer_literal] = ACTIONS(116),
    [sym_decimal_floating_point_literal] = ACTIONS(116),
    [sym_hex_floating_point_literal] = ACTIONS(118),
    [anon_sym_true] = ACTIONS(114),
    [anon_sym_false] = ACTIONS(114),
    [anon_sym_SQUOTE] = ACTIONS(114),
    [sym_string_literal] = ACTIONS(114),
    [sym_null_literal] = ACTIONS(114),
    [anon_sym_BANG] = ACTIONS(114),
    [anon_sym_TILDE] = ACTIONS(114),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [anon_sym_open] = ACTIONS(114),
    [anon_sym_module] = ACTIONS(114),
    [sym_comment] = ACTIONS(30),
  },
  [28] = {
    [sym__expression] = STATE(42),
    [sym_assignment_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_ternary_expression] = STATE(15),
    [sym_unary_expression] = STATE(16),
    [sym_update_expression] = STATE(15),
    [anon_sym_BANG] = ACTIONS(22),
    [anon_sym_TILDE] = ACTIONS(22),
    [anon_sym_PLUS_PLUS] = ACTIONS(24),
    [anon_sym_DASH_DASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(30),
  },
  [29] = {
    [sym__expression] = STATE(43),
    [sym_assignment_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_ternary_expression] = STATE(15),
    [sym_unary_expression] = STATE(16),
    [sym_update_expression] = STATE(15),
    [anon_sym_BANG] = ACTIONS(22),
    [anon_sym_TILDE] = ACTIONS(22),
    [anon_sym_PLUS_PLUS] = ACTIONS(24),
    [anon_sym_DASH_DASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(30),
  },
  [30] = {
    [sym__expression] = STATE(44),
    [sym_assignment_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_ternary_expression] = STATE(15),
    [sym_unary_expression] = STATE(16),
    [sym_update_expression] = STATE(15),
    [anon_sym_BANG] = ACTIONS(22),
    [anon_sym_TILDE] = ACTIONS(22),
    [anon_sym_PLUS_PLUS] = ACTIONS(24),
    [anon_sym_DASH_DASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(30),
  },
  [31] = {
    [sym__expression] = STATE(45),
    [sym_assignment_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_ternary_expression] = STATE(15),
    [sym_unary_expression] = STATE(16),
    [sym_update_expression] = STATE(15),
    [anon_sym_BANG] = ACTIONS(22),
    [anon_sym_TILDE] = ACTIONS(22),
    [anon_sym_PLUS_PLUS] = ACTIONS(24),
    [anon_sym_DASH_DASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(30),
  },
  [32] = {
    [sym__expression] = STATE(46),
    [sym_assignment_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_ternary_expression] = STATE(15),
    [sym_unary_expression] = STATE(16),
    [sym_update_expression] = STATE(15),
    [anon_sym_BANG] = ACTIONS(22),
    [anon_sym_TILDE] = ACTIONS(22),
    [anon_sym_PLUS_PLUS] = ACTIONS(24),
    [anon_sym_DASH_DASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(30),
  },
  [33] = {
    [sym__expression] = STATE(47),
    [sym_assignment_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_ternary_expression] = STATE(15),
    [sym_unary_expression] = STATE(16),
    [sym_update_expression] = STATE(15),
    [anon_sym_BANG] = ACTIONS(22),
    [anon_sym_TILDE] = ACTIONS(22),
    [anon_sym_PLUS_PLUS] = ACTIONS(24),
    [anon_sym_DASH_DASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(30),
  },
  [34] = {
    [sym__expression] = STATE(50),
    [sym_assignment_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_ternary_expression] = STATE(15),
    [sym_unary_expression] = STATE(16),
    [sym_update_expression] = STATE(15),
    [anon_sym_BANG] = ACTIONS(120),
    [anon_sym_TILDE] = ACTIONS(120),
    [anon_sym_PLUS_PLUS] = ACTIONS(122),
    [anon_sym_DASH_DASH] = ACTIONS(122),
    [sym_comment] = ACTIONS(30),
  },
  [35] = {
    [anon_sym_SEMI] = ACTIONS(104),
    [anon_sym_EQ] = ACTIONS(106),
    [anon_sym_PLUS_EQ] = ACTIONS(104),
    [anon_sym_DASH_EQ] = ACTIONS(104),
    [anon_sym_STAR_EQ] = ACTIONS(104),
    [anon_sym_SLASH_EQ] = ACTIONS(104),
    [anon_sym_AMP_EQ] = ACTIONS(104),
    [anon_sym_PIPE_EQ] = ACTIONS(104),
    [anon_sym_CARET_EQ] = ACTIONS(104),
    [anon_sym_PERCENT_EQ] = ACTIONS(104),
    [anon_sym_LT_LT_EQ] = ACTIONS(104),
    [anon_sym_GT_GT_EQ] = ACTIONS(104),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(104),
    [anon_sym_GT] = ACTIONS(106),
    [anon_sym_LT] = ACTIONS(106),
    [anon_sym_EQ_EQ] = ACTIONS(104),
    [anon_sym_GT_EQ] = ACTIONS(104),
    [anon_sym_LT_EQ] = ACTIONS(104),
    [anon_sym_BANG_EQ] = ACTIONS(104),
    [anon_sym_AMP_AMP] = ACTIONS(104),
    [anon_sym_PIPE_PIPE] = ACTIONS(104),
    [anon_sym_PLUS] = ACTIONS(106),
    [anon_sym_DASH] = ACTIONS(106),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_AMP] = ACTIONS(106),
    [anon_sym_PIPE] = ACTIONS(106),
    [anon_sym_CARET] = ACTIONS(106),
    [anon_sym_PERCENT] = ACTIONS(106),
    [anon_sym_LT_LT] = ACTIONS(106),
    [anon_sym_GT_GT] = ACTIONS(106),
    [anon_sym_GT_GT_GT] = ACTIONS(106),
    [anon_sym_QMARK] = ACTIONS(104),
    [anon_sym_COLON] = ACTIONS(104),
    [anon_sym_PLUS_PLUS] = ACTIONS(104),
    [anon_sym_DASH_DASH] = ACTIONS(104),
    [sym_comment] = ACTIONS(30),
  },
  [36] = {
    [anon_sym_SEMI] = ACTIONS(124),
    [sym_comment] = ACTIONS(30),
  },
  [37] = {
    [anon_sym_SEMI] = ACTIONS(126),
    [sym_comment] = ACTIONS(30),
  },
  [38] = {
    [anon_sym_SQUOTE] = ACTIONS(128),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(128),
    [sym_comment] = ACTIONS(42),
  },
  [39] = {
    [anon_sym_SEMI] = ACTIONS(130),
    [sym_comment] = ACTIONS(30),
  },
  [40] = {
    [sym_identifier] = ACTIONS(132),
    [sym_comment] = ACTIONS(30),
  },
  [41] = {
    [anon_sym_SEMI] = ACTIONS(134),
    [anon_sym_DOT] = ACTIONS(136),
    [sym_comment] = ACTIONS(30),
  },
  [42] = {
    [anon_sym_SEMI] = ACTIONS(138),
    [anon_sym_EQ] = ACTIONS(56),
    [anon_sym_PLUS_EQ] = ACTIONS(58),
    [anon_sym_DASH_EQ] = ACTIONS(58),
    [anon_sym_STAR_EQ] = ACTIONS(58),
    [anon_sym_SLASH_EQ] = ACTIONS(58),
    [anon_sym_AMP_EQ] = ACTIONS(58),
    [anon_sym_PIPE_EQ] = ACTIONS(58),
    [anon_sym_CARET_EQ] = ACTIONS(58),
    [anon_sym_PERCENT_EQ] = ACTIONS(58),
    [anon_sym_LT_LT_EQ] = ACTIONS(58),
    [anon_sym_GT_GT_EQ] = ACTIONS(58),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(58),
    [anon_sym_GT] = ACTIONS(60),
    [anon_sym_LT] = ACTIONS(60),
    [anon_sym_EQ_EQ] = ACTIONS(62),
    [anon_sym_GT_EQ] = ACTIONS(62),
    [anon_sym_LT_EQ] = ACTIONS(62),
    [anon_sym_BANG_EQ] = ACTIONS(62),
    [anon_sym_AMP_AMP] = ACTIONS(64),
    [anon_sym_PIPE_PIPE] = ACTIONS(66),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [anon_sym_STAR] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_AMP] = ACTIONS(72),
    [anon_sym_PIPE] = ACTIONS(74),
    [anon_sym_CARET] = ACTIONS(74),
    [anon_sym_PERCENT] = ACTIONS(70),
    [anon_sym_LT_LT] = ACTIONS(70),
    [anon_sym_GT_GT] = ACTIONS(70),
    [anon_sym_GT_GT_GT] = ACTIONS(70),
    [anon_sym_QMARK] = ACTIONS(76),
    [anon_sym_PLUS_PLUS] = ACTIONS(78),
    [anon_sym_DASH_DASH] = ACTIONS(78),
    [sym_comment] = ACTIONS(30),
  },
  [43] = {
    [anon_sym_SEMI] = ACTIONS(140),
    [anon_sym_EQ] = ACTIONS(142),
    [anon_sym_PLUS_EQ] = ACTIONS(140),
    [anon_sym_DASH_EQ] = ACTIONS(140),
    [anon_sym_STAR_EQ] = ACTIONS(140),
    [anon_sym_SLASH_EQ] = ACTIONS(140),
    [anon_sym_AMP_EQ] = ACTIONS(140),
    [anon_sym_PIPE_EQ] = ACTIONS(140),
    [anon_sym_CARET_EQ] = ACTIONS(140),
    [anon_sym_PERCENT_EQ] = ACTIONS(140),
    [anon_sym_LT_LT_EQ] = ACTIONS(140),
    [anon_sym_GT_GT_EQ] = ACTIONS(140),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(140),
    [anon_sym_GT] = ACTIONS(142),
    [anon_sym_LT] = ACTIONS(142),
    [anon_sym_EQ_EQ] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(140),
    [anon_sym_LT_EQ] = ACTIONS(140),
    [anon_sym_BANG_EQ] = ACTIONS(140),
    [anon_sym_AMP_AMP] = ACTIONS(140),
    [anon_sym_PIPE_PIPE] = ACTIONS(140),
    [anon_sym_PLUS] = ACTIONS(142),
    [anon_sym_DASH] = ACTIONS(142),
    [anon_sym_STAR] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_AMP] = ACTIONS(142),
    [anon_sym_PIPE] = ACTIONS(142),
    [anon_sym_CARET] = ACTIONS(142),
    [anon_sym_PERCENT] = ACTIONS(70),
    [anon_sym_LT_LT] = ACTIONS(70),
    [anon_sym_GT_GT] = ACTIONS(70),
    [anon_sym_GT_GT_GT] = ACTIONS(70),
    [anon_sym_QMARK] = ACTIONS(140),
    [anon_sym_PLUS_PLUS] = ACTIONS(78),
    [anon_sym_DASH_DASH] = ACTIONS(78),
    [sym_comment] = ACTIONS(30),
  },
  [44] = {
    [anon_sym_SEMI] = ACTIONS(140),
    [anon_sym_EQ] = ACTIONS(142),
    [anon_sym_PLUS_EQ] = ACTIONS(140),
    [anon_sym_DASH_EQ] = ACTIONS(140),
    [anon_sym_STAR_EQ] = ACTIONS(140),
    [anon_sym_SLASH_EQ] = ACTIONS(140),
    [anon_sym_AMP_EQ] = ACTIONS(140),
    [anon_sym_PIPE_EQ] = ACTIONS(140),
    [anon_sym_CARET_EQ] = ACTIONS(140),
    [anon_sym_PERCENT_EQ] = ACTIONS(140),
    [anon_sym_LT_LT_EQ] = ACTIONS(140),
    [anon_sym_GT_GT_EQ] = ACTIONS(140),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(140),
    [anon_sym_GT] = ACTIONS(60),
    [anon_sym_LT] = ACTIONS(60),
    [anon_sym_EQ_EQ] = ACTIONS(62),
    [anon_sym_GT_EQ] = ACTIONS(62),
    [anon_sym_LT_EQ] = ACTIONS(62),
    [anon_sym_BANG_EQ] = ACTIONS(62),
    [anon_sym_AMP_AMP] = ACTIONS(140),
    [anon_sym_PIPE_PIPE] = ACTIONS(140),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [anon_sym_STAR] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_AMP] = ACTIONS(142),
    [anon_sym_PIPE] = ACTIONS(142),
    [anon_sym_CARET] = ACTIONS(142),
    [anon_sym_PERCENT] = ACTIONS(70),
    [anon_sym_LT_LT] = ACTIONS(70),
    [anon_sym_GT_GT] = ACTIONS(70),
    [anon_sym_GT_GT_GT] = ACTIONS(70),
    [anon_sym_QMARK] = ACTIONS(140),
    [anon_sym_PLUS_PLUS] = ACTIONS(78),
    [anon_sym_DASH_DASH] = ACTIONS(78),
    [sym_comment] = ACTIONS(30),
  },
  [45] = {
    [anon_sym_SEMI] = ACTIONS(140),
    [anon_sym_EQ] = ACTIONS(142),
    [anon_sym_PLUS_EQ] = ACTIONS(140),
    [anon_sym_DASH_EQ] = ACTIONS(140),
    [anon_sym_STAR_EQ] = ACTIONS(140),
    [anon_sym_SLASH_EQ] = ACTIONS(140),
    [anon_sym_AMP_EQ] = ACTIONS(140),
    [anon_sym_PIPE_EQ] = ACTIONS(140),
    [anon_sym_CARET_EQ] = ACTIONS(140),
    [anon_sym_PERCENT_EQ] = ACTIONS(140),
    [anon_sym_LT_LT_EQ] = ACTIONS(140),
    [anon_sym_GT_GT_EQ] = ACTIONS(140),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(140),
    [anon_sym_GT] = ACTIONS(60),
    [anon_sym_LT] = ACTIONS(60),
    [anon_sym_EQ_EQ] = ACTIONS(62),
    [anon_sym_GT_EQ] = ACTIONS(62),
    [anon_sym_LT_EQ] = ACTIONS(62),
    [anon_sym_BANG_EQ] = ACTIONS(62),
    [anon_sym_AMP_AMP] = ACTIONS(64),
    [anon_sym_PIPE_PIPE] = ACTIONS(140),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [anon_sym_STAR] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_AMP] = ACTIONS(72),
    [anon_sym_PIPE] = ACTIONS(142),
    [anon_sym_CARET] = ACTIONS(142),
    [anon_sym_PERCENT] = ACTIONS(70),
    [anon_sym_LT_LT] = ACTIONS(70),
    [anon_sym_GT_GT] = ACTIONS(70),
    [anon_sym_GT_GT_GT] = ACTIONS(70),
    [anon_sym_QMARK] = ACTIONS(140),
    [anon_sym_PLUS_PLUS] = ACTIONS(78),
    [anon_sym_DASH_DASH] = ACTIONS(78),
    [sym_comment] = ACTIONS(30),
  },
  [46] = {
    [anon_sym_SEMI] = ACTIONS(140),
    [anon_sym_EQ] = ACTIONS(142),
    [anon_sym_PLUS_EQ] = ACTIONS(140),
    [anon_sym_DASH_EQ] = ACTIONS(140),
    [anon_sym_STAR_EQ] = ACTIONS(140),
    [anon_sym_SLASH_EQ] = ACTIONS(140),
    [anon_sym_AMP_EQ] = ACTIONS(140),
    [anon_sym_PIPE_EQ] = ACTIONS(140),
    [anon_sym_CARET_EQ] = ACTIONS(140),
    [anon_sym_PERCENT_EQ] = ACTIONS(140),
    [anon_sym_LT_LT_EQ] = ACTIONS(140),
    [anon_sym_GT_GT_EQ] = ACTIONS(140),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(140),
    [anon_sym_GT] = ACTIONS(60),
    [anon_sym_LT] = ACTIONS(60),
    [anon_sym_EQ_EQ] = ACTIONS(62),
    [anon_sym_GT_EQ] = ACTIONS(62),
    [anon_sym_LT_EQ] = ACTIONS(62),
    [anon_sym_BANG_EQ] = ACTIONS(62),
    [anon_sym_AMP_AMP] = ACTIONS(140),
    [anon_sym_PIPE_PIPE] = ACTIONS(140),
    [anon_sym_PLUS] = ACTIONS(142),
    [anon_sym_DASH] = ACTIONS(142),
    [anon_sym_STAR] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_AMP] = ACTIONS(142),
    [anon_sym_PIPE] = ACTIONS(142),
    [anon_sym_CARET] = ACTIONS(142),
    [anon_sym_PERCENT] = ACTIONS(70),
    [anon_sym_LT_LT] = ACTIONS(70),
    [anon_sym_GT_GT] = ACTIONS(70),
    [anon_sym_GT_GT_GT] = ACTIONS(70),
    [anon_sym_QMARK] = ACTIONS(140),
    [anon_sym_PLUS_PLUS] = ACTIONS(78),
    [anon_sym_DASH_DASH] = ACTIONS(78),
    [sym_comment] = ACTIONS(30),
  },
  [47] = {
    [anon_sym_SEMI] = ACTIONS(140),
    [anon_sym_EQ] = ACTIONS(142),
    [anon_sym_PLUS_EQ] = ACTIONS(140),
    [anon_sym_DASH_EQ] = ACTIONS(140),
    [anon_sym_STAR_EQ] = ACTIONS(140),
    [anon_sym_SLASH_EQ] = ACTIONS(140),
    [anon_sym_AMP_EQ] = ACTIONS(140),
    [anon_sym_PIPE_EQ] = ACTIONS(140),
    [anon_sym_CARET_EQ] = ACTIONS(140),
    [anon_sym_PERCENT_EQ] = ACTIONS(140),
    [anon_sym_LT_LT_EQ] = ACTIONS(140),
    [anon_sym_GT_GT_EQ] = ACTIONS(140),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(140),
    [anon_sym_GT] = ACTIONS(142),
    [anon_sym_LT] = ACTIONS(142),
    [anon_sym_EQ_EQ] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(140),
    [anon_sym_LT_EQ] = ACTIONS(140),
    [anon_sym_BANG_EQ] = ACTIONS(140),
    [anon_sym_AMP_AMP] = ACTIONS(140),
    [anon_sym_PIPE_PIPE] = ACTIONS(140),
    [anon_sym_PLUS] = ACTIONS(142),
    [anon_sym_DASH] = ACTIONS(142),
    [anon_sym_STAR] = ACTIONS(142),
    [anon_sym_SLASH] = ACTIONS(142),
    [anon_sym_AMP] = ACTIONS(142),
    [anon_sym_PIPE] = ACTIONS(142),
    [anon_sym_CARET] = ACTIONS(142),
    [anon_sym_PERCENT] = ACTIONS(142),
    [anon_sym_LT_LT] = ACTIONS(142),
    [anon_sym_GT_GT] = ACTIONS(142),
    [anon_sym_GT_GT_GT] = ACTIONS(142),
    [anon_sym_QMARK] = ACTIONS(140),
    [anon_sym_COLON] = ACTIONS(140),
    [anon_sym_PLUS_PLUS] = ACTIONS(78),
    [anon_sym_DASH_DASH] = ACTIONS(78),
    [sym_comment] = ACTIONS(30),
  },
  [48] = {
    [sym__expression] = STATE(22),
    [sym_assignment_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_ternary_expression] = STATE(15),
    [sym_unary_expression] = STATE(16),
    [sym_update_expression] = STATE(15),
    [anon_sym_BANG] = ACTIONS(120),
    [anon_sym_TILDE] = ACTIONS(120),
    [anon_sym_PLUS_PLUS] = ACTIONS(122),
    [anon_sym_DASH_DASH] = ACTIONS(122),
    [sym_comment] = ACTIONS(30),
  },
  [49] = {
    [sym__expression] = STATE(23),
    [sym_assignment_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_ternary_expression] = STATE(15),
    [sym_unary_expression] = STATE(16),
    [sym_update_expression] = STATE(15),
    [anon_sym_BANG] = ACTIONS(120),
    [anon_sym_TILDE] = ACTIONS(120),
    [anon_sym_PLUS_PLUS] = ACTIONS(122),
    [anon_sym_DASH_DASH] = ACTIONS(122),
    [sym_comment] = ACTIONS(30),
  },
  [50] = {
    [anon_sym_EQ] = ACTIONS(144),
    [anon_sym_PLUS_EQ] = ACTIONS(146),
    [anon_sym_DASH_EQ] = ACTIONS(146),
    [anon_sym_STAR_EQ] = ACTIONS(146),
    [anon_sym_SLASH_EQ] = ACTIONS(146),
    [anon_sym_AMP_EQ] = ACTIONS(146),
    [anon_sym_PIPE_EQ] = ACTIONS(146),
    [anon_sym_CARET_EQ] = ACTIONS(146),
    [anon_sym_PERCENT_EQ] = ACTIONS(146),
    [anon_sym_LT_LT_EQ] = ACTIONS(146),
    [anon_sym_GT_GT_EQ] = ACTIONS(146),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(146),
    [anon_sym_GT] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(148),
    [anon_sym_EQ_EQ] = ACTIONS(150),
    [anon_sym_GT_EQ] = ACTIONS(150),
    [anon_sym_LT_EQ] = ACTIONS(150),
    [anon_sym_BANG_EQ] = ACTIONS(150),
    [anon_sym_AMP_AMP] = ACTIONS(152),
    [anon_sym_PIPE_PIPE] = ACTIONS(154),
    [anon_sym_PLUS] = ACTIONS(156),
    [anon_sym_DASH] = ACTIONS(156),
    [anon_sym_STAR] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_AMP] = ACTIONS(160),
    [anon_sym_PIPE] = ACTIONS(162),
    [anon_sym_CARET] = ACTIONS(162),
    [anon_sym_PERCENT] = ACTIONS(158),
    [anon_sym_LT_LT] = ACTIONS(158),
    [anon_sym_GT_GT] = ACTIONS(158),
    [anon_sym_GT_GT_GT] = ACTIONS(158),
    [anon_sym_QMARK] = ACTIONS(164),
    [anon_sym_COLON] = ACTIONS(166),
    [anon_sym_PLUS_PLUS] = ACTIONS(78),
    [anon_sym_DASH_DASH] = ACTIONS(78),
    [sym_comment] = ACTIONS(30),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(168),
    [sym_decimal_integer_literal] = ACTIONS(170),
    [sym_hex_integer_literal] = ACTIONS(170),
    [sym_octal_integer_literal] = ACTIONS(170),
    [sym_binary_integer_literal] = ACTIONS(170),
    [sym_decimal_floating_point_literal] = ACTIONS(170),
    [sym_hex_floating_point_literal] = ACTIONS(172),
    [anon_sym_true] = ACTIONS(168),
    [anon_sym_false] = ACTIONS(168),
    [anon_sym_SQUOTE] = ACTIONS(168),
    [sym_string_literal] = ACTIONS(168),
    [sym_null_literal] = ACTIONS(168),
    [anon_sym_BANG] = ACTIONS(168),
    [anon_sym_TILDE] = ACTIONS(168),
    [anon_sym_PLUS_PLUS] = ACTIONS(168),
    [anon_sym_DASH_DASH] = ACTIONS(168),
    [anon_sym_open] = ACTIONS(168),
    [anon_sym_module] = ACTIONS(168),
    [sym_comment] = ACTIONS(30),
  },
  [52] = {
    [anon_sym_SEMI] = ACTIONS(174),
    [anon_sym_DOT] = ACTIONS(174),
    [sym_comment] = ACTIONS(30),
  },
  [53] = {
    [sym_identifier] = ACTIONS(176),
    [sym_comment] = ACTIONS(30),
  },
  [54] = {
    [sym__expression] = STATE(63),
    [sym_assignment_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_ternary_expression] = STATE(15),
    [sym_unary_expression] = STATE(16),
    [sym_update_expression] = STATE(15),
    [anon_sym_BANG] = ACTIONS(120),
    [anon_sym_TILDE] = ACTIONS(120),
    [anon_sym_PLUS_PLUS] = ACTIONS(122),
    [anon_sym_DASH_DASH] = ACTIONS(122),
    [sym_comment] = ACTIONS(30),
  },
  [55] = {
    [sym__expression] = STATE(64),
    [sym_assignment_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_ternary_expression] = STATE(15),
    [sym_unary_expression] = STATE(16),
    [sym_update_expression] = STATE(15),
    [anon_sym_BANG] = ACTIONS(120),
    [anon_sym_TILDE] = ACTIONS(120),
    [anon_sym_PLUS_PLUS] = ACTIONS(122),
    [anon_sym_DASH_DASH] = ACTIONS(122),
    [sym_comment] = ACTIONS(30),
  },
  [56] = {
    [sym__expression] = STATE(65),
    [sym_assignment_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_ternary_expression] = STATE(15),
    [sym_unary_expression] = STATE(16),
    [sym_update_expression] = STATE(15),
    [anon_sym_BANG] = ACTIONS(120),
    [anon_sym_TILDE] = ACTIONS(120),
    [anon_sym_PLUS_PLUS] = ACTIONS(122),
    [anon_sym_DASH_DASH] = ACTIONS(122),
    [sym_comment] = ACTIONS(30),
  },
  [57] = {
    [sym__expression] = STATE(66),
    [sym_assignment_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_ternary_expression] = STATE(15),
    [sym_unary_expression] = STATE(16),
    [sym_update_expression] = STATE(15),
    [anon_sym_BANG] = ACTIONS(120),
    [anon_sym_TILDE] = ACTIONS(120),
    [anon_sym_PLUS_PLUS] = ACTIONS(122),
    [anon_sym_DASH_DASH] = ACTIONS(122),
    [sym_comment] = ACTIONS(30),
  },
  [58] = {
    [sym__expression] = STATE(67),
    [sym_assignment_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_ternary_expression] = STATE(15),
    [sym_unary_expression] = STATE(16),
    [sym_update_expression] = STATE(15),
    [anon_sym_BANG] = ACTIONS(120),
    [anon_sym_TILDE] = ACTIONS(120),
    [anon_sym_PLUS_PLUS] = ACTIONS(122),
    [anon_sym_DASH_DASH] = ACTIONS(122),
    [sym_comment] = ACTIONS(30),
  },
  [59] = {
    [sym__expression] = STATE(47),
    [sym_assignment_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_ternary_expression] = STATE(15),
    [sym_unary_expression] = STATE(16),
    [sym_update_expression] = STATE(15),
    [anon_sym_BANG] = ACTIONS(120),
    [anon_sym_TILDE] = ACTIONS(120),
    [anon_sym_PLUS_PLUS] = ACTIONS(122),
    [anon_sym_DASH_DASH] = ACTIONS(122),
    [sym_comment] = ACTIONS(30),
  },
  [60] = {
    [sym__expression] = STATE(68),
    [sym_assignment_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_ternary_expression] = STATE(15),
    [sym_unary_expression] = STATE(16),
    [sym_update_expression] = STATE(15),
    [anon_sym_BANG] = ACTIONS(120),
    [anon_sym_TILDE] = ACTIONS(120),
    [anon_sym_PLUS_PLUS] = ACTIONS(122),
    [anon_sym_DASH_DASH] = ACTIONS(122),
    [sym_comment] = ACTIONS(30),
  },
  [61] = {
    [sym__expression] = STATE(69),
    [sym_assignment_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_ternary_expression] = STATE(15),
    [sym_unary_expression] = STATE(16),
    [sym_update_expression] = STATE(15),
    [anon_sym_BANG] = ACTIONS(22),
    [anon_sym_TILDE] = ACTIONS(22),
    [anon_sym_PLUS_PLUS] = ACTIONS(24),
    [anon_sym_DASH_DASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(30),
  },
  [62] = {
    [anon_sym_SEMI] = ACTIONS(178),
    [anon_sym_DOT] = ACTIONS(178),
    [sym_comment] = ACTIONS(30),
  },
  [63] = {
    [anon_sym_EQ] = ACTIONS(144),
    [anon_sym_PLUS_EQ] = ACTIONS(146),
    [anon_sym_DASH_EQ] = ACTIONS(146),
    [anon_sym_STAR_EQ] = ACTIONS(146),
    [anon_sym_SLASH_EQ] = ACTIONS(146),
    [anon_sym_AMP_EQ] = ACTIONS(146),
    [anon_sym_PIPE_EQ] = ACTIONS(146),
    [anon_sym_CARET_EQ] = ACTIONS(146),
    [anon_sym_PERCENT_EQ] = ACTIONS(146),
    [anon_sym_LT_LT_EQ] = ACTIONS(146),
    [anon_sym_GT_GT_EQ] = ACTIONS(146),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(146),
    [anon_sym_GT] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(148),
    [anon_sym_EQ_EQ] = ACTIONS(150),
    [anon_sym_GT_EQ] = ACTIONS(150),
    [anon_sym_LT_EQ] = ACTIONS(150),
    [anon_sym_BANG_EQ] = ACTIONS(150),
    [anon_sym_AMP_AMP] = ACTIONS(152),
    [anon_sym_PIPE_PIPE] = ACTIONS(154),
    [anon_sym_PLUS] = ACTIONS(156),
    [anon_sym_DASH] = ACTIONS(156),
    [anon_sym_STAR] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_AMP] = ACTIONS(160),
    [anon_sym_PIPE] = ACTIONS(162),
    [anon_sym_CARET] = ACTIONS(162),
    [anon_sym_PERCENT] = ACTIONS(158),
    [anon_sym_LT_LT] = ACTIONS(158),
    [anon_sym_GT_GT] = ACTIONS(158),
    [anon_sym_GT_GT_GT] = ACTIONS(158),
    [anon_sym_QMARK] = ACTIONS(164),
    [anon_sym_COLON] = ACTIONS(138),
    [anon_sym_PLUS_PLUS] = ACTIONS(78),
    [anon_sym_DASH_DASH] = ACTIONS(78),
    [sym_comment] = ACTIONS(30),
  },
  [64] = {
    [anon_sym_EQ] = ACTIONS(142),
    [anon_sym_PLUS_EQ] = ACTIONS(140),
    [anon_sym_DASH_EQ] = ACTIONS(140),
    [anon_sym_STAR_EQ] = ACTIONS(140),
    [anon_sym_SLASH_EQ] = ACTIONS(140),
    [anon_sym_AMP_EQ] = ACTIONS(140),
    [anon_sym_PIPE_EQ] = ACTIONS(140),
    [anon_sym_CARET_EQ] = ACTIONS(140),
    [anon_sym_PERCENT_EQ] = ACTIONS(140),
    [anon_sym_LT_LT_EQ] = ACTIONS(140),
    [anon_sym_GT_GT_EQ] = ACTIONS(140),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(140),
    [anon_sym_GT] = ACTIONS(142),
    [anon_sym_LT] = ACTIONS(142),
    [anon_sym_EQ_EQ] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(140),
    [anon_sym_LT_EQ] = ACTIONS(140),
    [anon_sym_BANG_EQ] = ACTIONS(140),
    [anon_sym_AMP_AMP] = ACTIONS(140),
    [anon_sym_PIPE_PIPE] = ACTIONS(140),
    [anon_sym_PLUS] = ACTIONS(142),
    [anon_sym_DASH] = ACTIONS(142),
    [anon_sym_STAR] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_AMP] = ACTIONS(142),
    [anon_sym_PIPE] = ACTIONS(142),
    [anon_sym_CARET] = ACTIONS(142),
    [anon_sym_PERCENT] = ACTIONS(158),
    [anon_sym_LT_LT] = ACTIONS(158),
    [anon_sym_GT_GT] = ACTIONS(158),
    [anon_sym_GT_GT_GT] = ACTIONS(158),
    [anon_sym_QMARK] = ACTIONS(140),
    [anon_sym_COLON] = ACTIONS(140),
    [anon_sym_PLUS_PLUS] = ACTIONS(78),
    [anon_sym_DASH_DASH] = ACTIONS(78),
    [sym_comment] = ACTIONS(30),
  },
  [65] = {
    [anon_sym_EQ] = ACTIONS(142),
    [anon_sym_PLUS_EQ] = ACTIONS(140),
    [anon_sym_DASH_EQ] = ACTIONS(140),
    [anon_sym_STAR_EQ] = ACTIONS(140),
    [anon_sym_SLASH_EQ] = ACTIONS(140),
    [anon_sym_AMP_EQ] = ACTIONS(140),
    [anon_sym_PIPE_EQ] = ACTIONS(140),
    [anon_sym_CARET_EQ] = ACTIONS(140),
    [anon_sym_PERCENT_EQ] = ACTIONS(140),
    [anon_sym_LT_LT_EQ] = ACTIONS(140),
    [anon_sym_GT_GT_EQ] = ACTIONS(140),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(140),
    [anon_sym_GT] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(148),
    [anon_sym_EQ_EQ] = ACTIONS(150),
    [anon_sym_GT_EQ] = ACTIONS(150),
    [anon_sym_LT_EQ] = ACTIONS(150),
    [anon_sym_BANG_EQ] = ACTIONS(150),
    [anon_sym_AMP_AMP] = ACTIONS(140),
    [anon_sym_PIPE_PIPE] = ACTIONS(140),
    [anon_sym_PLUS] = ACTIONS(156),
    [anon_sym_DASH] = ACTIONS(156),
    [anon_sym_STAR] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_AMP] = ACTIONS(142),
    [anon_sym_PIPE] = ACTIONS(142),
    [anon_sym_CARET] = ACTIONS(142),
    [anon_sym_PERCENT] = ACTIONS(158),
    [anon_sym_LT_LT] = ACTIONS(158),
    [anon_sym_GT_GT] = ACTIONS(158),
    [anon_sym_GT_GT_GT] = ACTIONS(158),
    [anon_sym_QMARK] = ACTIONS(140),
    [anon_sym_COLON] = ACTIONS(140),
    [anon_sym_PLUS_PLUS] = ACTIONS(78),
    [anon_sym_DASH_DASH] = ACTIONS(78),
    [sym_comment] = ACTIONS(30),
  },
  [66] = {
    [anon_sym_EQ] = ACTIONS(142),
    [anon_sym_PLUS_EQ] = ACTIONS(140),
    [anon_sym_DASH_EQ] = ACTIONS(140),
    [anon_sym_STAR_EQ] = ACTIONS(140),
    [anon_sym_SLASH_EQ] = ACTIONS(140),
    [anon_sym_AMP_EQ] = ACTIONS(140),
    [anon_sym_PIPE_EQ] = ACTIONS(140),
    [anon_sym_CARET_EQ] = ACTIONS(140),
    [anon_sym_PERCENT_EQ] = ACTIONS(140),
    [anon_sym_LT_LT_EQ] = ACTIONS(140),
    [anon_sym_GT_GT_EQ] = ACTIONS(140),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(140),
    [anon_sym_GT] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(148),
    [anon_sym_EQ_EQ] = ACTIONS(150),
    [anon_sym_GT_EQ] = ACTIONS(150),
    [anon_sym_LT_EQ] = ACTIONS(150),
    [anon_sym_BANG_EQ] = ACTIONS(150),
    [anon_sym_AMP_AMP] = ACTIONS(152),
    [anon_sym_PIPE_PIPE] = ACTIONS(140),
    [anon_sym_PLUS] = ACTIONS(156),
    [anon_sym_DASH] = ACTIONS(156),
    [anon_sym_STAR] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_AMP] = ACTIONS(160),
    [anon_sym_PIPE] = ACTIONS(142),
    [anon_sym_CARET] = ACTIONS(142),
    [anon_sym_PERCENT] = ACTIONS(158),
    [anon_sym_LT_LT] = ACTIONS(158),
    [anon_sym_GT_GT] = ACTIONS(158),
    [anon_sym_GT_GT_GT] = ACTIONS(158),
    [anon_sym_QMARK] = ACTIONS(140),
    [anon_sym_COLON] = ACTIONS(140),
    [anon_sym_PLUS_PLUS] = ACTIONS(78),
    [anon_sym_DASH_DASH] = ACTIONS(78),
    [sym_comment] = ACTIONS(30),
  },
  [67] = {
    [anon_sym_EQ] = ACTIONS(142),
    [anon_sym_PLUS_EQ] = ACTIONS(140),
    [anon_sym_DASH_EQ] = ACTIONS(140),
    [anon_sym_STAR_EQ] = ACTIONS(140),
    [anon_sym_SLASH_EQ] = ACTIONS(140),
    [anon_sym_AMP_EQ] = ACTIONS(140),
    [anon_sym_PIPE_EQ] = ACTIONS(140),
    [anon_sym_CARET_EQ] = ACTIONS(140),
    [anon_sym_PERCENT_EQ] = ACTIONS(140),
    [anon_sym_LT_LT_EQ] = ACTIONS(140),
    [anon_sym_GT_GT_EQ] = ACTIONS(140),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(140),
    [anon_sym_GT] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(148),
    [anon_sym_EQ_EQ] = ACTIONS(150),
    [anon_sym_GT_EQ] = ACTIONS(150),
    [anon_sym_LT_EQ] = ACTIONS(150),
    [anon_sym_BANG_EQ] = ACTIONS(150),
    [anon_sym_AMP_AMP] = ACTIONS(140),
    [anon_sym_PIPE_PIPE] = ACTIONS(140),
    [anon_sym_PLUS] = ACTIONS(142),
    [anon_sym_DASH] = ACTIONS(142),
    [anon_sym_STAR] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_AMP] = ACTIONS(142),
    [anon_sym_PIPE] = ACTIONS(142),
    [anon_sym_CARET] = ACTIONS(142),
    [anon_sym_PERCENT] = ACTIONS(158),
    [anon_sym_LT_LT] = ACTIONS(158),
    [anon_sym_GT_GT] = ACTIONS(158),
    [anon_sym_GT_GT_GT] = ACTIONS(158),
    [anon_sym_QMARK] = ACTIONS(140),
    [anon_sym_COLON] = ACTIONS(140),
    [anon_sym_PLUS_PLUS] = ACTIONS(78),
    [anon_sym_DASH_DASH] = ACTIONS(78),
    [sym_comment] = ACTIONS(30),
  },
  [68] = {
    [anon_sym_EQ] = ACTIONS(144),
    [anon_sym_PLUS_EQ] = ACTIONS(146),
    [anon_sym_DASH_EQ] = ACTIONS(146),
    [anon_sym_STAR_EQ] = ACTIONS(146),
    [anon_sym_SLASH_EQ] = ACTIONS(146),
    [anon_sym_AMP_EQ] = ACTIONS(146),
    [anon_sym_PIPE_EQ] = ACTIONS(146),
    [anon_sym_CARET_EQ] = ACTIONS(146),
    [anon_sym_PERCENT_EQ] = ACTIONS(146),
    [anon_sym_LT_LT_EQ] = ACTIONS(146),
    [anon_sym_GT_GT_EQ] = ACTIONS(146),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(146),
    [anon_sym_GT] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(148),
    [anon_sym_EQ_EQ] = ACTIONS(150),
    [anon_sym_GT_EQ] = ACTIONS(150),
    [anon_sym_LT_EQ] = ACTIONS(150),
    [anon_sym_BANG_EQ] = ACTIONS(150),
    [anon_sym_AMP_AMP] = ACTIONS(152),
    [anon_sym_PIPE_PIPE] = ACTIONS(154),
    [anon_sym_PLUS] = ACTIONS(156),
    [anon_sym_DASH] = ACTIONS(156),
    [anon_sym_STAR] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_AMP] = ACTIONS(160),
    [anon_sym_PIPE] = ACTIONS(162),
    [anon_sym_CARET] = ACTIONS(162),
    [anon_sym_PERCENT] = ACTIONS(158),
    [anon_sym_LT_LT] = ACTIONS(158),
    [anon_sym_GT_GT] = ACTIONS(158),
    [anon_sym_GT_GT_GT] = ACTIONS(158),
    [anon_sym_QMARK] = ACTIONS(164),
    [anon_sym_COLON] = ACTIONS(180),
    [anon_sym_PLUS_PLUS] = ACTIONS(78),
    [anon_sym_DASH_DASH] = ACTIONS(78),
    [sym_comment] = ACTIONS(30),
  },
  [69] = {
    [anon_sym_SEMI] = ACTIONS(182),
    [anon_sym_EQ] = ACTIONS(184),
    [anon_sym_PLUS_EQ] = ACTIONS(182),
    [anon_sym_DASH_EQ] = ACTIONS(182),
    [anon_sym_STAR_EQ] = ACTIONS(182),
    [anon_sym_SLASH_EQ] = ACTIONS(182),
    [anon_sym_AMP_EQ] = ACTIONS(182),
    [anon_sym_PIPE_EQ] = ACTIONS(182),
    [anon_sym_CARET_EQ] = ACTIONS(182),
    [anon_sym_PERCENT_EQ] = ACTIONS(182),
    [anon_sym_LT_LT_EQ] = ACTIONS(182),
    [anon_sym_GT_GT_EQ] = ACTIONS(182),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(182),
    [anon_sym_GT] = ACTIONS(60),
    [anon_sym_LT] = ACTIONS(60),
    [anon_sym_EQ_EQ] = ACTIONS(62),
    [anon_sym_GT_EQ] = ACTIONS(62),
    [anon_sym_LT_EQ] = ACTIONS(62),
    [anon_sym_BANG_EQ] = ACTIONS(62),
    [anon_sym_AMP_AMP] = ACTIONS(64),
    [anon_sym_PIPE_PIPE] = ACTIONS(66),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [anon_sym_STAR] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_AMP] = ACTIONS(72),
    [anon_sym_PIPE] = ACTIONS(74),
    [anon_sym_CARET] = ACTIONS(74),
    [anon_sym_PERCENT] = ACTIONS(70),
    [anon_sym_LT_LT] = ACTIONS(70),
    [anon_sym_GT_GT] = ACTIONS(70),
    [anon_sym_GT_GT_GT] = ACTIONS(70),
    [anon_sym_QMARK] = ACTIONS(76),
    [anon_sym_PLUS_PLUS] = ACTIONS(78),
    [anon_sym_DASH_DASH] = ACTIONS(78),
    [sym_comment] = ACTIONS(30),
  },
  [70] = {
    [sym__expression] = STATE(71),
    [sym_assignment_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_ternary_expression] = STATE(15),
    [sym_unary_expression] = STATE(16),
    [sym_update_expression] = STATE(15),
    [anon_sym_BANG] = ACTIONS(120),
    [anon_sym_TILDE] = ACTIONS(120),
    [anon_sym_PLUS_PLUS] = ACTIONS(122),
    [anon_sym_DASH_DASH] = ACTIONS(122),
    [sym_comment] = ACTIONS(30),
  },
  [71] = {
    [anon_sym_EQ] = ACTIONS(184),
    [anon_sym_PLUS_EQ] = ACTIONS(182),
    [anon_sym_DASH_EQ] = ACTIONS(182),
    [anon_sym_STAR_EQ] = ACTIONS(182),
    [anon_sym_SLASH_EQ] = ACTIONS(182),
    [anon_sym_AMP_EQ] = ACTIONS(182),
    [anon_sym_PIPE_EQ] = ACTIONS(182),
    [anon_sym_CARET_EQ] = ACTIONS(182),
    [anon_sym_PERCENT_EQ] = ACTIONS(182),
    [anon_sym_LT_LT_EQ] = ACTIONS(182),
    [anon_sym_GT_GT_EQ] = ACTIONS(182),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(182),
    [anon_sym_GT] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(148),
    [anon_sym_EQ_EQ] = ACTIONS(150),
    [anon_sym_GT_EQ] = ACTIONS(150),
    [anon_sym_LT_EQ] = ACTIONS(150),
    [anon_sym_BANG_EQ] = ACTIONS(150),
    [anon_sym_AMP_AMP] = ACTIONS(152),
    [anon_sym_PIPE_PIPE] = ACTIONS(154),
    [anon_sym_PLUS] = ACTIONS(156),
    [anon_sym_DASH] = ACTIONS(156),
    [anon_sym_STAR] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_AMP] = ACTIONS(160),
    [anon_sym_PIPE] = ACTIONS(162),
    [anon_sym_CARET] = ACTIONS(162),
    [anon_sym_PERCENT] = ACTIONS(158),
    [anon_sym_LT_LT] = ACTIONS(158),
    [anon_sym_GT_GT] = ACTIONS(158),
    [anon_sym_GT_GT_GT] = ACTIONS(158),
    [anon_sym_QMARK] = ACTIONS(164),
    [anon_sym_COLON] = ACTIONS(182),
    [anon_sym_PLUS_PLUS] = ACTIONS(78),
    [anon_sym_DASH_DASH] = ACTIONS(78),
    [sym_comment] = ACTIONS(30),
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
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_floating_point_literal, 1),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_literal, 1),
  [38] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(19),
  [40] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(20),
  [42] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(24),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(25),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(27),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(28),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(29),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(33),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(30),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1, .fragile = true),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1, .fragile = true),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 1),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_binary_expression, 1),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 2),
  [94] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_character_literal_repeat1, 1),
  [96] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unary_expression, 2),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_unary_expression, 2),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_update_expression, 2),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_update_expression, 2),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_identifier, 1),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 2),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [118] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
  [128] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_character_literal_repeat1, 2),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 3),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(52),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_identifier, 2),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3, .fragile = true),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 3),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_binary_expression, 3),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(54),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(55),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(58),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(59),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 3),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 3),
  [172] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 3),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_identifier_repeat1, 2),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(62),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_identifier_repeat1, 3),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_ternary_expression, 5, .fragile = true),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_ternary_expression, 5, .fragile = true),
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
