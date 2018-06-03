#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 108
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 1
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 1

enum {
  sym_comment = 1,
  sym__multiline_string = 2,
  sym_spread = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_LBRACK = 6,
  anon_sym_RBRACK = 7,
  anon_sym_EQ = 8,
  anon_sym_COMMA = 9,
  anon_sym_SEMI = 10,
  anon_sym_or = 11,
  anon_sym_and = 12,
  anon_sym_LT = 13,
  anon_sym_LT_EQ = 14,
  anon_sym_EQ_EQ = 15,
  anon_sym_TILDE_EQ = 16,
  anon_sym_GT_EQ = 17,
  anon_sym_GT = 18,
  anon_sym_PIPE = 19,
  anon_sym_TILDE = 20,
  anon_sym_AMP = 21,
  anon_sym_LT_LT = 22,
  anon_sym_GT_GT = 23,
  anon_sym_PLUS = 24,
  anon_sym_DASH = 25,
  anon_sym_STAR = 26,
  anon_sym_SLASH = 27,
  anon_sym_SLASH_SLASH = 28,
  anon_sym_PERCENT = 29,
  anon_sym_DOT_DOT = 30,
  anon_sym_CARET = 31,
  anon_sym_not = 32,
  anon_sym_POUND = 33,
  anon_sym_SQUOTE = 34,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH = 35,
  aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH = 36,
  anon_sym_DQUOTE = 37,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH = 38,
  sym_number = 39,
  sym_nil = 40,
  sym_true = 41,
  sym_false = 42,
  sym_identifier = 43,
  sym_lua = 44,
  sym__statement = 45,
  sym__expression = 46,
  sym_table = 47,
  sym_field = 48,
  sym__field_sequence = 49,
  sym__field_sep = 50,
  sym_binary_operation = 51,
  sym_unary_operation = 52,
  sym_string = 53,
  aux_sym_lua_repeat1 = 54,
  aux_sym__field_sequence_repeat1 = 55,
  aux_sym_string_repeat1 = 56,
  aux_sym_string_repeat2 = 57,
  alias_sym_expression = 58,
};

static const char *ts_symbol_names[] = {
  [sym_comment] = "comment",
  [sym__multiline_string] = "_multiline_string",
  [ts_builtin_sym_end] = "END",
  [sym_spread] = "spread",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_or] = "or",
  [anon_sym_and] = "and",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_PIPE] = "|",
  [anon_sym_TILDE] = "~",
  [anon_sym_AMP] = "&",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_PERCENT] = "%",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_CARET] = "^",
  [anon_sym_not] = "not",
  [anon_sym_POUND] = "#",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = "/[^\\\\'\\n]/",
  [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = "/\\\\./",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = "/[^\\\\\"\\n]/",
  [sym_number] = "number",
  [sym_nil] = "nil",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_identifier] = "identifier",
  [sym_lua] = "lua",
  [sym__statement] = "_statement",
  [sym__expression] = "_expression",
  [sym_table] = "table",
  [sym_field] = "field",
  [sym__field_sequence] = "_field_sequence",
  [sym__field_sep] = "_field_sep",
  [sym_binary_operation] = "binary_operation",
  [sym_unary_operation] = "unary_operation",
  [sym_string] = "string",
  [aux_sym_lua_repeat1] = "lua_repeat1",
  [aux_sym__field_sequence_repeat1] = "_field_sequence_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [alias_sym_expression] = "expression",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__multiline_string] = {
    .visible = false,
    .named = true,
  },
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_spread] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
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
  [anon_sym_TILDE_EQ] = {
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
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
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
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_nil] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_lua] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym__field_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym__field_sep] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_lua_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__field_sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_expression] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_expression,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == '0')
        ADVANCE(20);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(30);
      if (lookahead == '>')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(35);
      if (lookahead == '\\')
        ADVANCE(36);
      if (lookahead == ']')
        ADVANCE(38);
      if (lookahead == '^')
        ADVANCE(39);
      if (lookahead == '{')
        ADVANCE(40);
      if (lookahead == '|')
        ADVANCE(41);
      if (lookahead == '}')
        ADVANCE(42);
      if (lookahead == '~')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 11:
      if (lookahead == '.')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_spread);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '+')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/')
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == 'E')
        ADVANCE(15);
      if (lookahead == 'X')
        ADVANCE(21);
      if (lookahead == 'e')
        ADVANCE(15);
      if (lookahead == 'x')
        ADVANCE(21);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == 'P')
        ADVANCE(15);
      if (lookahead == 'p')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(22);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P')
        ADVANCE(15);
      if (lookahead == 'p')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == 'E')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(28);
      if (lookahead == '=')
        ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 36:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=')
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(47);
      if (lookahead == '0')
        ADVANCE(20);
      if (lookahead == '{')
        ADVANCE(40);
      if (lookahead == '~')
        ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(46);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == '.')
        ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      END_STATE();
    case 48:
      if (lookahead == '.')
        ADVANCE(13);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 50:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == '0')
        ADVANCE(20);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(51);
      if (lookahead == '>')
        ADVANCE(32);
      if (lookahead == '^')
        ADVANCE(39);
      if (lookahead == '{')
        ADVANCE(40);
      if (lookahead == '|')
        ADVANCE(41);
      if (lookahead == '~')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(50);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 51:
      if (lookahead == '=')
        ADVANCE(31);
      END_STATE();
    case 52:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(47);
      if (lookahead == '0')
        ADVANCE(20);
      if (lookahead == '[')
        ADVANCE(35);
      if (lookahead == '{')
        ADVANCE(40);
      if (lookahead == '}')
        ADVANCE(42);
      if (lookahead == '~')
        ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(52);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 53:
      if (lookahead == '\n')
        SKIP(53);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '\\')
        ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(54);
      if (lookahead != 0)
        ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 55:
      if (lookahead == '\n')
        SKIP(55);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(56);
      if (lookahead != 0)
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 57:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(57);
      END_STATE();
    case 58:
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(59);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(51);
      if (lookahead == '>')
        ADVANCE(32);
      if (lookahead == ']')
        ADVANCE(38);
      if (lookahead == '^')
        ADVANCE(39);
      if (lookahead == '|')
        ADVANCE(41);
      if (lookahead == '}')
        ADVANCE(42);
      if (lookahead == '~')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 59:
      if (lookahead == '.')
        ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 61:
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(59);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(30);
      if (lookahead == '>')
        ADVANCE(32);
      if (lookahead == '^')
        ADVANCE(39);
      if (lookahead == '|')
        ADVANCE(41);
      if (lookahead == '}')
        ADVANCE(42);
      if (lookahead == '~')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 62:
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(59);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(51);
      if (lookahead == '>')
        ADVANCE(32);
      if (lookahead == '^')
        ADVANCE(39);
      if (lookahead == '|')
        ADVANCE(41);
      if (lookahead == '}')
        ADVANCE(42);
      if (lookahead == '~')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 63:
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '}')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(63);
      END_STATE();
    case 64:
      if (lookahead == '}')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(64);
      END_STATE();
    case 65:
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(59);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(51);
      if (lookahead == '>')
        ADVANCE(32);
      if (lookahead == ']')
        ADVANCE(38);
      if (lookahead == '^')
        ADVANCE(39);
      if (lookahead == '|')
        ADVANCE(41);
      if (lookahead == '~')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 66:
      if (lookahead == '=')
        ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 68:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(47);
      if (lookahead == '0')
        ADVANCE(20);
      if (lookahead == '[')
        ADVANCE(35);
      if (lookahead == '{')
        ADVANCE(40);
      if (lookahead == '~')
        ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(68);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 'a')
        ADVANCE(1);
      if (lookahead == 'f')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(9);
      if (lookahead == 'o')
        ADVANCE(14);
      if (lookahead == 't')
        ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == 'n')
        ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == 'd')
        ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 4:
      if (lookahead == 'a')
        ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'l')
        ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 's')
        ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'e')
        ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 9:
      if (lookahead == 'i')
        ADVANCE(10);
      if (lookahead == 'o')
        ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'l')
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 12:
      if (lookahead == 't')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 14:
      if (lookahead == 'r')
        ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 16:
      if (lookahead == 'r')
        ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'u')
        ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'e')
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 46, .external_lex_state = 1},
  [2] = {.lex_state = 50, .external_lex_state = 1},
  [3] = {.lex_state = 50, .external_lex_state = 1},
  [4] = {.lex_state = 52, .external_lex_state = 1},
  [5] = {.lex_state = 46, .external_lex_state = 1},
  [6] = {.lex_state = 53, .external_lex_state = 2},
  [7] = {.lex_state = 55, .external_lex_state = 2},
  [8] = {.lex_state = 57, .external_lex_state = 2},
  [9] = {.lex_state = 50, .external_lex_state = 1},
  [10] = {.lex_state = 46, .external_lex_state = 1},
  [11] = {.lex_state = 58, .external_lex_state = 2},
  [12] = {.lex_state = 58, .external_lex_state = 2},
  [13] = {.lex_state = 52, .external_lex_state = 1},
  [14] = {.lex_state = 50, .external_lex_state = 1},
  [15] = {.lex_state = 46, .external_lex_state = 1},
  [16] = {.lex_state = 46, .external_lex_state = 1},
  [17] = {.lex_state = 53, .external_lex_state = 2},
  [18] = {.lex_state = 55, .external_lex_state = 2},
  [19] = {.lex_state = 61, .external_lex_state = 2},
  [20] = {.lex_state = 62, .external_lex_state = 2},
  [21] = {.lex_state = 63, .external_lex_state = 2},
  [22] = {.lex_state = 64, .external_lex_state = 2},
  [23] = {.lex_state = 50, .external_lex_state = 1},
  [24] = {.lex_state = 50, .external_lex_state = 1},
  [25] = {.lex_state = 53, .external_lex_state = 2},
  [26] = {.lex_state = 55, .external_lex_state = 2},
  [27] = {.lex_state = 46, .external_lex_state = 1},
  [28] = {.lex_state = 46, .external_lex_state = 1},
  [29] = {.lex_state = 46, .external_lex_state = 1},
  [30] = {.lex_state = 46, .external_lex_state = 1},
  [31] = {.lex_state = 46, .external_lex_state = 1},
  [32] = {.lex_state = 46, .external_lex_state = 1},
  [33] = {.lex_state = 46, .external_lex_state = 1},
  [34] = {.lex_state = 46, .external_lex_state = 1},
  [35] = {.lex_state = 46, .external_lex_state = 1},
  [36] = {.lex_state = 46, .external_lex_state = 1},
  [37] = {.lex_state = 58, .external_lex_state = 2},
  [38] = {.lex_state = 64, .external_lex_state = 2},
  [39] = {.lex_state = 46, .external_lex_state = 1},
  [40] = {.lex_state = 65, .external_lex_state = 2},
  [41] = {.lex_state = 62, .external_lex_state = 2},
  [42] = {.lex_state = 58, .external_lex_state = 2},
  [43] = {.lex_state = 53, .external_lex_state = 2},
  [44] = {.lex_state = 55, .external_lex_state = 2},
  [45] = {.lex_state = 46, .external_lex_state = 1},
  [46] = {.lex_state = 46, .external_lex_state = 1},
  [47] = {.lex_state = 46, .external_lex_state = 1},
  [48] = {.lex_state = 46, .external_lex_state = 1},
  [49] = {.lex_state = 46, .external_lex_state = 1},
  [50] = {.lex_state = 46, .external_lex_state = 1},
  [51] = {.lex_state = 46, .external_lex_state = 1},
  [52] = {.lex_state = 46, .external_lex_state = 1},
  [53] = {.lex_state = 46, .external_lex_state = 1},
  [54] = {.lex_state = 46, .external_lex_state = 1},
  [55] = {.lex_state = 52, .external_lex_state = 1},
  [56] = {.lex_state = 63, .external_lex_state = 2},
  [57] = {.lex_state = 50, .external_lex_state = 1},
  [58] = {.lex_state = 50, .external_lex_state = 1},
  [59] = {.lex_state = 53, .external_lex_state = 2},
  [60] = {.lex_state = 55, .external_lex_state = 2},
  [61] = {.lex_state = 50, .external_lex_state = 1},
  [62] = {.lex_state = 50, .external_lex_state = 1},
  [63] = {.lex_state = 50, .external_lex_state = 1},
  [64] = {.lex_state = 50, .external_lex_state = 1},
  [65] = {.lex_state = 50, .external_lex_state = 1},
  [66] = {.lex_state = 50, .external_lex_state = 1},
  [67] = {.lex_state = 50, .external_lex_state = 1},
  [68] = {.lex_state = 50, .external_lex_state = 1},
  [69] = {.lex_state = 50, .external_lex_state = 1},
  [70] = {.lex_state = 58, .external_lex_state = 2},
  [71] = {.lex_state = 65, .external_lex_state = 2},
  [72] = {.lex_state = 66, .external_lex_state = 2},
  [73] = {.lex_state = 46, .external_lex_state = 1},
  [74] = {.lex_state = 46, .external_lex_state = 1},
  [75] = {.lex_state = 46, .external_lex_state = 1},
  [76] = {.lex_state = 46, .external_lex_state = 1},
  [77] = {.lex_state = 46, .external_lex_state = 1},
  [78] = {.lex_state = 46, .external_lex_state = 1},
  [79] = {.lex_state = 46, .external_lex_state = 1},
  [80] = {.lex_state = 46, .external_lex_state = 1},
  [81] = {.lex_state = 46, .external_lex_state = 1},
  [82] = {.lex_state = 58, .external_lex_state = 2},
  [83] = {.lex_state = 62, .external_lex_state = 2},
  [84] = {.lex_state = 62, .external_lex_state = 2},
  [85] = {.lex_state = 62, .external_lex_state = 2},
  [86] = {.lex_state = 62, .external_lex_state = 2},
  [87] = {.lex_state = 62, .external_lex_state = 2},
  [88] = {.lex_state = 62, .external_lex_state = 2},
  [89] = {.lex_state = 62, .external_lex_state = 2},
  [90] = {.lex_state = 62, .external_lex_state = 2},
  [91] = {.lex_state = 62, .external_lex_state = 2},
  [92] = {.lex_state = 62, .external_lex_state = 2},
  [93] = {.lex_state = 63, .external_lex_state = 2},
  [94] = {.lex_state = 52, .external_lex_state = 1},
  [95] = {.lex_state = 63, .external_lex_state = 2},
  [96] = {.lex_state = 46, .external_lex_state = 1},
  [97] = {.lex_state = 65, .external_lex_state = 2},
  [98] = {.lex_state = 65, .external_lex_state = 2},
  [99] = {.lex_state = 65, .external_lex_state = 2},
  [100] = {.lex_state = 65, .external_lex_state = 2},
  [101] = {.lex_state = 65, .external_lex_state = 2},
  [102] = {.lex_state = 65, .external_lex_state = 2},
  [103] = {.lex_state = 65, .external_lex_state = 2},
  [104] = {.lex_state = 65, .external_lex_state = 2},
  [105] = {.lex_state = 65, .external_lex_state = 2},
  [106] = {.lex_state = 68, .external_lex_state = 1},
  [107] = {.lex_state = 62, .external_lex_state = 2},
};

enum {
  ts_external_token_comment,
  ts_external_token__multiline_string,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_comment] = sym_comment,
  [ts_external_token__multiline_string] = sym__multiline_string,
};

static bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_comment] = true,
    [ts_external_token__multiline_string] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = ACTIONS(1),
    [sym__multiline_string] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_spread] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(3),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(3),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_nil] = ACTIONS(3),
    [sym_true] = ACTIONS(3),
    [sym_false] = ACTIONS(3),
    [sym_identifier] = ACTIONS(3),
  },
  [1] = {
    [sym_lua] = STATE(8),
    [sym__statement] = STATE(10),
    [sym__expression] = STATE(9),
    [sym_table] = STATE(3),
    [sym_binary_operation] = STATE(3),
    [sym_unary_operation] = STATE(3),
    [sym_string] = STATE(3),
    [aux_sym_lua_repeat1] = STATE(10),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_spread] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(11),
    [sym_nil] = ACTIONS(23),
    [sym_true] = ACTIONS(23),
    [sym_false] = ACTIONS(23),
    [sym_identifier] = ACTIONS(23),
  },
  [2] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(25),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_spread] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(27),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_TILDE_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(25),
    [anon_sym_LT_LT] = ACTIONS(25),
    [anon_sym_GT_GT] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_PERCENT] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_not] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_number] = ACTIONS(25),
    [sym_nil] = ACTIONS(27),
    [sym_true] = ACTIONS(27),
    [sym_false] = ACTIONS(27),
    [sym_identifier] = ACTIONS(27),
  },
  [3] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(29),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_spread] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(31),
    [anon_sym_and] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_TILDE_EQ] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_GT_GT] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_SLASH_SLASH] = ACTIONS(29),
    [anon_sym_PERCENT] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_nil] = ACTIONS(31),
    [sym_true] = ACTIONS(31),
    [sym_false] = ACTIONS(31),
    [sym_identifier] = ACTIONS(31),
  },
  [4] = {
    [sym__expression] = STATE(20),
    [sym_table] = STATE(12),
    [sym_field] = STATE(21),
    [sym__field_sequence] = STATE(22),
    [sym_binary_operation] = STATE(12),
    [sym_unary_operation] = STATE(12),
    [sym_string] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_number] = ACTIONS(35),
    [sym_nil] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_identifier] = ACTIONS(53),
  },
  [5] = {
    [sym__expression] = STATE(23),
    [sym_table] = STATE(3),
    [sym_binary_operation] = STATE(3),
    [sym_unary_operation] = STATE(3),
    [sym_string] = STATE(3),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [sym_spread] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(11),
    [sym_nil] = ACTIONS(23),
    [sym_true] = ACTIONS(23),
    [sym_false] = ACTIONS(23),
    [sym_identifier] = ACTIONS(23),
  },
  [6] = {
    [aux_sym_string_repeat1] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(57),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(59),
  },
  [7] = {
    [aux_sym_string_repeat2] = STATE(26),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(63),
  },
  [8] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(65),
  },
  [9] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(67),
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_spread] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_or] = ACTIONS(69),
    [anon_sym_and] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_LT_EQ] = ACTIONS(75),
    [anon_sym_EQ_EQ] = ACTIONS(75),
    [anon_sym_TILDE_EQ] = ACTIONS(75),
    [anon_sym_GT_EQ] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_TILDE] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_LT_LT] = ACTIONS(83),
    [anon_sym_GT_GT] = ACTIONS(83),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(89),
    [anon_sym_SLASH_SLASH] = ACTIONS(87),
    [anon_sym_PERCENT] = ACTIONS(87),
    [anon_sym_DOT_DOT] = ACTIONS(91),
    [anon_sym_CARET] = ACTIONS(87),
    [anon_sym_not] = ACTIONS(93),
    [anon_sym_POUND] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [sym_number] = ACTIONS(67),
    [sym_nil] = ACTIONS(93),
    [sym_true] = ACTIONS(93),
    [sym_false] = ACTIONS(93),
    [sym_identifier] = ACTIONS(93),
  },
  [10] = {
    [sym__statement] = STATE(36),
    [sym__expression] = STATE(9),
    [sym_table] = STATE(3),
    [sym_binary_operation] = STATE(3),
    [sym_unary_operation] = STATE(3),
    [sym_string] = STATE(3),
    [aux_sym_lua_repeat1] = STATE(36),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_spread] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(11),
    [sym_nil] = ACTIONS(23),
    [sym_true] = ACTIONS(23),
    [sym_false] = ACTIONS(23),
    [sym_identifier] = ACTIONS(23),
  },
  [11] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_TILDE_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(25),
    [anon_sym_LT_LT] = ACTIONS(25),
    [anon_sym_GT_GT] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_PERCENT] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_CARET] = ACTIONS(25),
  },
  [12] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_TILDE_EQ] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_GT_GT] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_SLASH_SLASH] = ACTIONS(29),
    [anon_sym_PERCENT] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(29),
    [anon_sym_CARET] = ACTIONS(29),
  },
  [13] = {
    [sym__expression] = STATE(20),
    [sym_table] = STATE(12),
    [sym_field] = STATE(21),
    [sym__field_sequence] = STATE(38),
    [sym_binary_operation] = STATE(12),
    [sym_unary_operation] = STATE(12),
    [sym_string] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_number] = ACTIONS(35),
    [sym_nil] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_identifier] = ACTIONS(53),
  },
  [14] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(99),
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_spread] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_or] = ACTIONS(101),
    [anon_sym_and] = ACTIONS(101),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_LT_EQ] = ACTIONS(99),
    [anon_sym_EQ_EQ] = ACTIONS(99),
    [anon_sym_TILDE_EQ] = ACTIONS(99),
    [anon_sym_GT_EQ] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_TILDE] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_LT_LT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_DASH] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(99),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_SLASH_SLASH] = ACTIONS(99),
    [anon_sym_PERCENT] = ACTIONS(99),
    [anon_sym_DOT_DOT] = ACTIONS(101),
    [anon_sym_CARET] = ACTIONS(99),
    [anon_sym_not] = ACTIONS(101),
    [anon_sym_POUND] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [sym_number] = ACTIONS(99),
    [sym_nil] = ACTIONS(101),
    [sym_true] = ACTIONS(101),
    [sym_false] = ACTIONS(101),
    [sym_identifier] = ACTIONS(101),
  },
  [15] = {
    [sym__expression] = STATE(40),
    [sym_table] = STATE(12),
    [sym_binary_operation] = STATE(12),
    [sym_unary_operation] = STATE(12),
    [sym_string] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_not] = ACTIONS(105),
    [anon_sym_POUND] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_number] = ACTIONS(35),
    [sym_nil] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
  },
  [16] = {
    [sym__expression] = STATE(41),
    [sym_table] = STATE(12),
    [sym_binary_operation] = STATE(12),
    [sym_unary_operation] = STATE(12),
    [sym_string] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_number] = ACTIONS(35),
    [sym_nil] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
  },
  [17] = {
    [aux_sym_string_repeat1] = STATE(43),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(109),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(111),
  },
  [18] = {
    [aux_sym_string_repeat2] = STATE(44),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(115),
  },
  [19] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(29),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_TILDE_EQ] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_GT_GT] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_SLASH_SLASH] = ACTIONS(29),
    [anon_sym_PERCENT] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(29),
    [anon_sym_CARET] = ACTIONS(29),
  },
  [20] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_COMMA] = ACTIONS(119),
    [anon_sym_SEMI] = ACTIONS(119),
    [anon_sym_or] = ACTIONS(121),
    [anon_sym_and] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(125),
    [anon_sym_LT_EQ] = ACTIONS(127),
    [anon_sym_EQ_EQ] = ACTIONS(127),
    [anon_sym_TILDE_EQ] = ACTIONS(127),
    [anon_sym_GT_EQ] = ACTIONS(127),
    [anon_sym_GT] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(131),
    [anon_sym_AMP] = ACTIONS(133),
    [anon_sym_LT_LT] = ACTIONS(135),
    [anon_sym_GT_GT] = ACTIONS(135),
    [anon_sym_PLUS] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(141),
    [anon_sym_SLASH_SLASH] = ACTIONS(139),
    [anon_sym_PERCENT] = ACTIONS(139),
    [anon_sym_DOT_DOT] = ACTIONS(135),
    [anon_sym_CARET] = ACTIONS(139),
  },
  [21] = {
    [sym__field_sep] = STATE(55),
    [aux_sym__field_sequence_repeat1] = STATE(56),
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(143),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(145),
  },
  [22] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(147),
  },
  [23] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(149),
    [ts_builtin_sym_end] = ACTIONS(149),
    [sym_spread] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(149),
    [anon_sym_or] = ACTIONS(151),
    [anon_sym_and] = ACTIONS(151),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_LT_EQ] = ACTIONS(149),
    [anon_sym_EQ_EQ] = ACTIONS(149),
    [anon_sym_TILDE_EQ] = ACTIONS(149),
    [anon_sym_GT_EQ] = ACTIONS(149),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_PIPE] = ACTIONS(149),
    [anon_sym_TILDE] = ACTIONS(151),
    [anon_sym_AMP] = ACTIONS(149),
    [anon_sym_LT_LT] = ACTIONS(149),
    [anon_sym_GT_GT] = ACTIONS(149),
    [anon_sym_PLUS] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(149),
    [anon_sym_STAR] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(151),
    [anon_sym_SLASH_SLASH] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(149),
    [anon_sym_DOT_DOT] = ACTIONS(151),
    [anon_sym_CARET] = ACTIONS(87),
    [anon_sym_not] = ACTIONS(151),
    [anon_sym_POUND] = ACTIONS(149),
    [anon_sym_SQUOTE] = ACTIONS(149),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [sym_number] = ACTIONS(149),
    [sym_nil] = ACTIONS(151),
    [sym_true] = ACTIONS(151),
    [sym_false] = ACTIONS(151),
    [sym_identifier] = ACTIONS(151),
  },
  [24] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(153),
    [ts_builtin_sym_end] = ACTIONS(153),
    [sym_spread] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(153),
    [anon_sym_or] = ACTIONS(155),
    [anon_sym_and] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(155),
    [anon_sym_LT_EQ] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(153),
    [anon_sym_TILDE_EQ] = ACTIONS(153),
    [anon_sym_GT_EQ] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(155),
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_TILDE] = ACTIONS(155),
    [anon_sym_AMP] = ACTIONS(153),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_GT_GT] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_SLASH_SLASH] = ACTIONS(153),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_DOT_DOT] = ACTIONS(155),
    [anon_sym_CARET] = ACTIONS(153),
    [anon_sym_not] = ACTIONS(155),
    [anon_sym_POUND] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [sym_number] = ACTIONS(153),
    [sym_nil] = ACTIONS(155),
    [sym_true] = ACTIONS(155),
    [sym_false] = ACTIONS(155),
    [sym_identifier] = ACTIONS(155),
  },
  [25] = {
    [aux_sym_string_repeat1] = STATE(59),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(159),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(161),
  },
  [26] = {
    [aux_sym_string_repeat2] = STATE(60),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(165),
  },
  [27] = {
    [sym__expression] = STATE(61),
    [sym_table] = STATE(3),
    [sym_binary_operation] = STATE(3),
    [sym_unary_operation] = STATE(3),
    [sym_string] = STATE(3),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [sym_spread] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(11),
    [sym_nil] = ACTIONS(23),
    [sym_true] = ACTIONS(23),
    [sym_false] = ACTIONS(23),
    [sym_identifier] = ACTIONS(23),
  },
  [28] = {
    [sym__expression] = STATE(62),
    [sym_table] = STATE(3),
    [sym_binary_operation] = STATE(3),
    [sym_unary_operation] = STATE(3),
    [sym_string] = STATE(3),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [sym_spread] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(11),
    [sym_nil] = ACTIONS(23),
    [sym_true] = ACTIONS(23),
    [sym_false] = ACTIONS(23),
    [sym_identifier] = ACTIONS(23),
  },
  [29] = {
    [sym__expression] = STATE(63),
    [sym_table] = STATE(3),
    [sym_binary_operation] = STATE(3),
    [sym_unary_operation] = STATE(3),
    [sym_string] = STATE(3),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [sym_spread] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(11),
    [sym_nil] = ACTIONS(23),
    [sym_true] = ACTIONS(23),
    [sym_false] = ACTIONS(23),
    [sym_identifier] = ACTIONS(23),
  },
  [30] = {
    [sym__expression] = STATE(64),
    [sym_table] = STATE(3),
    [sym_binary_operation] = STATE(3),
    [sym_unary_operation] = STATE(3),
    [sym_string] = STATE(3),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [sym_spread] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(11),
    [sym_nil] = ACTIONS(23),
    [sym_true] = ACTIONS(23),
    [sym_false] = ACTIONS(23),
    [sym_identifier] = ACTIONS(23),
  },
  [31] = {
    [sym__expression] = STATE(65),
    [sym_table] = STATE(3),
    [sym_binary_operation] = STATE(3),
    [sym_unary_operation] = STATE(3),
    [sym_string] = STATE(3),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [sym_spread] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(11),
    [sym_nil] = ACTIONS(23),
    [sym_true] = ACTIONS(23),
    [sym_false] = ACTIONS(23),
    [sym_identifier] = ACTIONS(23),
  },
  [32] = {
    [sym__expression] = STATE(66),
    [sym_table] = STATE(3),
    [sym_binary_operation] = STATE(3),
    [sym_unary_operation] = STATE(3),
    [sym_string] = STATE(3),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [sym_spread] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(11),
    [sym_nil] = ACTIONS(23),
    [sym_true] = ACTIONS(23),
    [sym_false] = ACTIONS(23),
    [sym_identifier] = ACTIONS(23),
  },
  [33] = {
    [sym__expression] = STATE(67),
    [sym_table] = STATE(3),
    [sym_binary_operation] = STATE(3),
    [sym_unary_operation] = STATE(3),
    [sym_string] = STATE(3),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [sym_spread] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(11),
    [sym_nil] = ACTIONS(23),
    [sym_true] = ACTIONS(23),
    [sym_false] = ACTIONS(23),
    [sym_identifier] = ACTIONS(23),
  },
  [34] = {
    [sym__expression] = STATE(68),
    [sym_table] = STATE(3),
    [sym_binary_operation] = STATE(3),
    [sym_unary_operation] = STATE(3),
    [sym_string] = STATE(3),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [sym_spread] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(11),
    [sym_nil] = ACTIONS(23),
    [sym_true] = ACTIONS(23),
    [sym_false] = ACTIONS(23),
    [sym_identifier] = ACTIONS(23),
  },
  [35] = {
    [sym__expression] = STATE(69),
    [sym_table] = STATE(3),
    [sym_binary_operation] = STATE(3),
    [sym_unary_operation] = STATE(3),
    [sym_string] = STATE(3),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [sym_spread] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(11),
    [sym_nil] = ACTIONS(23),
    [sym_true] = ACTIONS(23),
    [sym_false] = ACTIONS(23),
    [sym_identifier] = ACTIONS(23),
  },
  [36] = {
    [sym__statement] = STATE(36),
    [sym__expression] = STATE(9),
    [sym_table] = STATE(3),
    [sym_binary_operation] = STATE(3),
    [sym_unary_operation] = STATE(3),
    [sym_string] = STATE(3),
    [aux_sym_lua_repeat1] = STATE(36),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(167),
    [ts_builtin_sym_end] = ACTIONS(170),
    [sym_spread] = ACTIONS(172),
    [anon_sym_LBRACE] = ACTIONS(175),
    [anon_sym_TILDE] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_not] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(178),
    [anon_sym_SQUOTE] = ACTIONS(184),
    [anon_sym_DQUOTE] = ACTIONS(187),
    [sym_number] = ACTIONS(172),
    [sym_nil] = ACTIONS(190),
    [sym_true] = ACTIONS(190),
    [sym_false] = ACTIONS(190),
    [sym_identifier] = ACTIONS(190),
  },
  [37] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(99),
    [anon_sym_RBRACK] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_SEMI] = ACTIONS(99),
    [anon_sym_or] = ACTIONS(99),
    [anon_sym_and] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_LT_EQ] = ACTIONS(99),
    [anon_sym_EQ_EQ] = ACTIONS(99),
    [anon_sym_TILDE_EQ] = ACTIONS(99),
    [anon_sym_GT_EQ] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_TILDE] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_LT_LT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_DASH] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(99),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_SLASH_SLASH] = ACTIONS(99),
    [anon_sym_PERCENT] = ACTIONS(99),
    [anon_sym_DOT_DOT] = ACTIONS(99),
    [anon_sym_CARET] = ACTIONS(99),
  },
  [38] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(193),
  },
  [39] = {
    [sym__expression] = STATE(71),
    [sym_table] = STATE(12),
    [sym_binary_operation] = STATE(12),
    [sym_unary_operation] = STATE(12),
    [sym_string] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_not] = ACTIONS(105),
    [anon_sym_POUND] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_number] = ACTIONS(35),
    [sym_nil] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
  },
  [40] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(195),
    [anon_sym_or] = ACTIONS(197),
    [anon_sym_and] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(201),
    [anon_sym_LT_EQ] = ACTIONS(203),
    [anon_sym_EQ_EQ] = ACTIONS(203),
    [anon_sym_TILDE_EQ] = ACTIONS(203),
    [anon_sym_GT_EQ] = ACTIONS(203),
    [anon_sym_GT] = ACTIONS(201),
    [anon_sym_PIPE] = ACTIONS(205),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_LT_LT] = ACTIONS(211),
    [anon_sym_GT_GT] = ACTIONS(211),
    [anon_sym_PLUS] = ACTIONS(213),
    [anon_sym_DASH] = ACTIONS(213),
    [anon_sym_STAR] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_SLASH_SLASH] = ACTIONS(215),
    [anon_sym_PERCENT] = ACTIONS(215),
    [anon_sym_DOT_DOT] = ACTIONS(211),
    [anon_sym_CARET] = ACTIONS(215),
  },
  [41] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_COMMA] = ACTIONS(149),
    [anon_sym_SEMI] = ACTIONS(149),
    [anon_sym_or] = ACTIONS(149),
    [anon_sym_and] = ACTIONS(149),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_LT_EQ] = ACTIONS(149),
    [anon_sym_EQ_EQ] = ACTIONS(149),
    [anon_sym_TILDE_EQ] = ACTIONS(149),
    [anon_sym_GT_EQ] = ACTIONS(149),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_PIPE] = ACTIONS(149),
    [anon_sym_TILDE] = ACTIONS(151),
    [anon_sym_AMP] = ACTIONS(149),
    [anon_sym_LT_LT] = ACTIONS(149),
    [anon_sym_GT_GT] = ACTIONS(149),
    [anon_sym_PLUS] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(149),
    [anon_sym_STAR] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(151),
    [anon_sym_SLASH_SLASH] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(149),
    [anon_sym_DOT_DOT] = ACTIONS(149),
    [anon_sym_CARET] = ACTIONS(139),
  },
  [42] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_SEMI] = ACTIONS(153),
    [anon_sym_or] = ACTIONS(153),
    [anon_sym_and] = ACTIONS(153),
    [anon_sym_LT] = ACTIONS(155),
    [anon_sym_LT_EQ] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(153),
    [anon_sym_TILDE_EQ] = ACTIONS(153),
    [anon_sym_GT_EQ] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(155),
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_TILDE] = ACTIONS(155),
    [anon_sym_AMP] = ACTIONS(153),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_GT_GT] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_SLASH_SLASH] = ACTIONS(153),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_DOT_DOT] = ACTIONS(153),
    [anon_sym_CARET] = ACTIONS(153),
  },
  [43] = {
    [aux_sym_string_repeat1] = STATE(59),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(219),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(159),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(161),
  },
  [44] = {
    [aux_sym_string_repeat2] = STATE(60),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(219),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(165),
  },
  [45] = {
    [sym__expression] = STATE(83),
    [sym_table] = STATE(12),
    [sym_binary_operation] = STATE(12),
    [sym_unary_operation] = STATE(12),
    [sym_string] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_number] = ACTIONS(35),
    [sym_nil] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
  },
  [46] = {
    [sym__expression] = STATE(84),
    [sym_table] = STATE(12),
    [sym_binary_operation] = STATE(12),
    [sym_unary_operation] = STATE(12),
    [sym_string] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_number] = ACTIONS(35),
    [sym_nil] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
  },
  [47] = {
    [sym__expression] = STATE(85),
    [sym_table] = STATE(12),
    [sym_binary_operation] = STATE(12),
    [sym_unary_operation] = STATE(12),
    [sym_string] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_number] = ACTIONS(35),
    [sym_nil] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
  },
  [48] = {
    [sym__expression] = STATE(86),
    [sym_table] = STATE(12),
    [sym_binary_operation] = STATE(12),
    [sym_unary_operation] = STATE(12),
    [sym_string] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_number] = ACTIONS(35),
    [sym_nil] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
  },
  [49] = {
    [sym__expression] = STATE(87),
    [sym_table] = STATE(12),
    [sym_binary_operation] = STATE(12),
    [sym_unary_operation] = STATE(12),
    [sym_string] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_number] = ACTIONS(35),
    [sym_nil] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
  },
  [50] = {
    [sym__expression] = STATE(88),
    [sym_table] = STATE(12),
    [sym_binary_operation] = STATE(12),
    [sym_unary_operation] = STATE(12),
    [sym_string] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_number] = ACTIONS(35),
    [sym_nil] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
  },
  [51] = {
    [sym__expression] = STATE(89),
    [sym_table] = STATE(12),
    [sym_binary_operation] = STATE(12),
    [sym_unary_operation] = STATE(12),
    [sym_string] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_number] = ACTIONS(35),
    [sym_nil] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
  },
  [52] = {
    [sym__expression] = STATE(90),
    [sym_table] = STATE(12),
    [sym_binary_operation] = STATE(12),
    [sym_unary_operation] = STATE(12),
    [sym_string] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_number] = ACTIONS(35),
    [sym_nil] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
  },
  [53] = {
    [sym__expression] = STATE(91),
    [sym_table] = STATE(12),
    [sym_binary_operation] = STATE(12),
    [sym_unary_operation] = STATE(12),
    [sym_string] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_number] = ACTIONS(35),
    [sym_nil] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
  },
  [54] = {
    [sym__expression] = STATE(92),
    [sym_table] = STATE(12),
    [sym_binary_operation] = STATE(12),
    [sym_unary_operation] = STATE(12),
    [sym_string] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_number] = ACTIONS(35),
    [sym_nil] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
  },
  [55] = {
    [sym__expression] = STATE(20),
    [sym_table] = STATE(12),
    [sym_field] = STATE(93),
    [sym_binary_operation] = STATE(12),
    [sym_unary_operation] = STATE(12),
    [sym_string] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_number] = ACTIONS(35),
    [sym_nil] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_identifier] = ACTIONS(53),
  },
  [56] = {
    [sym__field_sep] = STATE(94),
    [aux_sym__field_sequence_repeat1] = STATE(95),
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(223),
    [anon_sym_SEMI] = ACTIONS(223),
  },
  [57] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(225),
    [ts_builtin_sym_end] = ACTIONS(225),
    [sym_spread] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(225),
    [anon_sym_or] = ACTIONS(227),
    [anon_sym_and] = ACTIONS(227),
    [anon_sym_LT] = ACTIONS(227),
    [anon_sym_LT_EQ] = ACTIONS(225),
    [anon_sym_EQ_EQ] = ACTIONS(225),
    [anon_sym_TILDE_EQ] = ACTIONS(225),
    [anon_sym_GT_EQ] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_PIPE] = ACTIONS(225),
    [anon_sym_TILDE] = ACTIONS(227),
    [anon_sym_AMP] = ACTIONS(225),
    [anon_sym_LT_LT] = ACTIONS(225),
    [anon_sym_GT_GT] = ACTIONS(225),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(227),
    [anon_sym_SLASH_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_DOT_DOT] = ACTIONS(227),
    [anon_sym_CARET] = ACTIONS(225),
    [anon_sym_not] = ACTIONS(227),
    [anon_sym_POUND] = ACTIONS(225),
    [anon_sym_SQUOTE] = ACTIONS(225),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [sym_number] = ACTIONS(225),
    [sym_nil] = ACTIONS(227),
    [sym_true] = ACTIONS(227),
    [sym_false] = ACTIONS(227),
    [sym_identifier] = ACTIONS(227),
  },
  [58] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(229),
    [ts_builtin_sym_end] = ACTIONS(229),
    [sym_spread] = ACTIONS(229),
    [anon_sym_LBRACE] = ACTIONS(229),
    [anon_sym_or] = ACTIONS(231),
    [anon_sym_and] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(231),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_EQ_EQ] = ACTIONS(229),
    [anon_sym_TILDE_EQ] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_GT] = ACTIONS(231),
    [anon_sym_PIPE] = ACTIONS(229),
    [anon_sym_TILDE] = ACTIONS(231),
    [anon_sym_AMP] = ACTIONS(229),
    [anon_sym_LT_LT] = ACTIONS(229),
    [anon_sym_GT_GT] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(231),
    [anon_sym_SLASH_SLASH] = ACTIONS(229),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_DOT_DOT] = ACTIONS(231),
    [anon_sym_CARET] = ACTIONS(229),
    [anon_sym_not] = ACTIONS(231),
    [anon_sym_POUND] = ACTIONS(229),
    [anon_sym_SQUOTE] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [sym_number] = ACTIONS(229),
    [sym_nil] = ACTIONS(231),
    [sym_true] = ACTIONS(231),
    [sym_false] = ACTIONS(231),
    [sym_identifier] = ACTIONS(231),
  },
  [59] = {
    [aux_sym_string_repeat1] = STATE(59),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(233),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(235),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(238),
  },
  [60] = {
    [aux_sym_string_repeat2] = STATE(60),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(246),
  },
  [61] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(249),
    [ts_builtin_sym_end] = ACTIONS(249),
    [sym_spread] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(251),
    [anon_sym_and] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_LT_EQ] = ACTIONS(75),
    [anon_sym_EQ_EQ] = ACTIONS(75),
    [anon_sym_TILDE_EQ] = ACTIONS(75),
    [anon_sym_GT_EQ] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_TILDE] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_LT_LT] = ACTIONS(83),
    [anon_sym_GT_GT] = ACTIONS(83),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(89),
    [anon_sym_SLASH_SLASH] = ACTIONS(87),
    [anon_sym_PERCENT] = ACTIONS(87),
    [anon_sym_DOT_DOT] = ACTIONS(91),
    [anon_sym_CARET] = ACTIONS(87),
    [anon_sym_not] = ACTIONS(251),
    [anon_sym_POUND] = ACTIONS(249),
    [anon_sym_SQUOTE] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [sym_number] = ACTIONS(249),
    [sym_nil] = ACTIONS(251),
    [sym_true] = ACTIONS(251),
    [sym_false] = ACTIONS(251),
    [sym_identifier] = ACTIONS(251),
  },
  [62] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(249),
    [ts_builtin_sym_end] = ACTIONS(249),
    [sym_spread] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(251),
    [anon_sym_and] = ACTIONS(251),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_LT_EQ] = ACTIONS(75),
    [anon_sym_EQ_EQ] = ACTIONS(75),
    [anon_sym_TILDE_EQ] = ACTIONS(75),
    [anon_sym_GT_EQ] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_TILDE] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_LT_LT] = ACTIONS(83),
    [anon_sym_GT_GT] = ACTIONS(83),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(89),
    [anon_sym_SLASH_SLASH] = ACTIONS(87),
    [anon_sym_PERCENT] = ACTIONS(87),
    [anon_sym_DOT_DOT] = ACTIONS(91),
    [anon_sym_CARET] = ACTIONS(87),
    [anon_sym_not] = ACTIONS(251),
    [anon_sym_POUND] = ACTIONS(249),
    [anon_sym_SQUOTE] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [sym_number] = ACTIONS(249),
    [sym_nil] = ACTIONS(251),
    [sym_true] = ACTIONS(251),
    [sym_false] = ACTIONS(251),
    [sym_identifier] = ACTIONS(251),
  },
  [63] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(249),
    [ts_builtin_sym_end] = ACTIONS(249),
    [sym_spread] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(251),
    [anon_sym_and] = ACTIONS(251),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_TILDE_EQ] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_TILDE] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_LT_LT] = ACTIONS(83),
    [anon_sym_GT_GT] = ACTIONS(83),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(89),
    [anon_sym_SLASH_SLASH] = ACTIONS(87),
    [anon_sym_PERCENT] = ACTIONS(87),
    [anon_sym_DOT_DOT] = ACTIONS(91),
    [anon_sym_CARET] = ACTIONS(87),
    [anon_sym_not] = ACTIONS(251),
    [anon_sym_POUND] = ACTIONS(249),
    [anon_sym_SQUOTE] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [sym_number] = ACTIONS(249),
    [sym_nil] = ACTIONS(251),
    [sym_true] = ACTIONS(251),
    [sym_false] = ACTIONS(251),
    [sym_identifier] = ACTIONS(251),
  },
  [64] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(249),
    [ts_builtin_sym_end] = ACTIONS(249),
    [sym_spread] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(251),
    [anon_sym_and] = ACTIONS(251),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_TILDE_EQ] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(249),
    [anon_sym_TILDE] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_LT_LT] = ACTIONS(83),
    [anon_sym_GT_GT] = ACTIONS(83),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(89),
    [anon_sym_SLASH_SLASH] = ACTIONS(87),
    [anon_sym_PERCENT] = ACTIONS(87),
    [anon_sym_DOT_DOT] = ACTIONS(91),
    [anon_sym_CARET] = ACTIONS(87),
    [anon_sym_not] = ACTIONS(251),
    [anon_sym_POUND] = ACTIONS(249),
    [anon_sym_SQUOTE] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [sym_number] = ACTIONS(249),
    [sym_nil] = ACTIONS(251),
    [sym_true] = ACTIONS(251),
    [sym_false] = ACTIONS(251),
    [sym_identifier] = ACTIONS(251),
  },
  [65] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(249),
    [ts_builtin_sym_end] = ACTIONS(249),
    [sym_spread] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(251),
    [anon_sym_and] = ACTIONS(251),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_TILDE_EQ] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(249),
    [anon_sym_TILDE] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_LT_LT] = ACTIONS(83),
    [anon_sym_GT_GT] = ACTIONS(83),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(89),
    [anon_sym_SLASH_SLASH] = ACTIONS(87),
    [anon_sym_PERCENT] = ACTIONS(87),
    [anon_sym_DOT_DOT] = ACTIONS(91),
    [anon_sym_CARET] = ACTIONS(87),
    [anon_sym_not] = ACTIONS(251),
    [anon_sym_POUND] = ACTIONS(249),
    [anon_sym_SQUOTE] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [sym_number] = ACTIONS(249),
    [sym_nil] = ACTIONS(251),
    [sym_true] = ACTIONS(251),
    [sym_false] = ACTIONS(251),
    [sym_identifier] = ACTIONS(251),
  },
  [66] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(249),
    [ts_builtin_sym_end] = ACTIONS(249),
    [sym_spread] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(251),
    [anon_sym_and] = ACTIONS(251),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_TILDE_EQ] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(249),
    [anon_sym_TILDE] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(83),
    [anon_sym_GT_GT] = ACTIONS(83),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(89),
    [anon_sym_SLASH_SLASH] = ACTIONS(87),
    [anon_sym_PERCENT] = ACTIONS(87),
    [anon_sym_DOT_DOT] = ACTIONS(91),
    [anon_sym_CARET] = ACTIONS(87),
    [anon_sym_not] = ACTIONS(251),
    [anon_sym_POUND] = ACTIONS(249),
    [anon_sym_SQUOTE] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [sym_number] = ACTIONS(249),
    [sym_nil] = ACTIONS(251),
    [sym_true] = ACTIONS(251),
    [sym_false] = ACTIONS(251),
    [sym_identifier] = ACTIONS(251),
  },
  [67] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(249),
    [ts_builtin_sym_end] = ACTIONS(249),
    [sym_spread] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(251),
    [anon_sym_and] = ACTIONS(251),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_TILDE_EQ] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(249),
    [anon_sym_TILDE] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(249),
    [anon_sym_GT_GT] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(89),
    [anon_sym_SLASH_SLASH] = ACTIONS(87),
    [anon_sym_PERCENT] = ACTIONS(87),
    [anon_sym_DOT_DOT] = ACTIONS(91),
    [anon_sym_CARET] = ACTIONS(87),
    [anon_sym_not] = ACTIONS(251),
    [anon_sym_POUND] = ACTIONS(249),
    [anon_sym_SQUOTE] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [sym_number] = ACTIONS(249),
    [sym_nil] = ACTIONS(251),
    [sym_true] = ACTIONS(251),
    [sym_false] = ACTIONS(251),
    [sym_identifier] = ACTIONS(251),
  },
  [68] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(249),
    [ts_builtin_sym_end] = ACTIONS(249),
    [sym_spread] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(251),
    [anon_sym_and] = ACTIONS(251),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_TILDE_EQ] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(249),
    [anon_sym_TILDE] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(249),
    [anon_sym_GT_GT] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(89),
    [anon_sym_SLASH_SLASH] = ACTIONS(87),
    [anon_sym_PERCENT] = ACTIONS(87),
    [anon_sym_DOT_DOT] = ACTIONS(251),
    [anon_sym_CARET] = ACTIONS(87),
    [anon_sym_not] = ACTIONS(251),
    [anon_sym_POUND] = ACTIONS(249),
    [anon_sym_SQUOTE] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [sym_number] = ACTIONS(249),
    [sym_nil] = ACTIONS(251),
    [sym_true] = ACTIONS(251),
    [sym_false] = ACTIONS(251),
    [sym_identifier] = ACTIONS(251),
  },
  [69] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(249),
    [ts_builtin_sym_end] = ACTIONS(249),
    [sym_spread] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(251),
    [anon_sym_and] = ACTIONS(251),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_TILDE_EQ] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(249),
    [anon_sym_TILDE] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(249),
    [anon_sym_GT_GT] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(251),
    [anon_sym_SLASH_SLASH] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_DOT_DOT] = ACTIONS(251),
    [anon_sym_CARET] = ACTIONS(87),
    [anon_sym_not] = ACTIONS(251),
    [anon_sym_POUND] = ACTIONS(249),
    [anon_sym_SQUOTE] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [sym_number] = ACTIONS(249),
    [sym_nil] = ACTIONS(251),
    [sym_true] = ACTIONS(251),
    [sym_false] = ACTIONS(251),
    [sym_identifier] = ACTIONS(251),
  },
  [70] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(225),
    [anon_sym_RBRACK] = ACTIONS(225),
    [anon_sym_COMMA] = ACTIONS(225),
    [anon_sym_SEMI] = ACTIONS(225),
    [anon_sym_or] = ACTIONS(225),
    [anon_sym_and] = ACTIONS(225),
    [anon_sym_LT] = ACTIONS(227),
    [anon_sym_LT_EQ] = ACTIONS(225),
    [anon_sym_EQ_EQ] = ACTIONS(225),
    [anon_sym_TILDE_EQ] = ACTIONS(225),
    [anon_sym_GT_EQ] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_PIPE] = ACTIONS(225),
    [anon_sym_TILDE] = ACTIONS(227),
    [anon_sym_AMP] = ACTIONS(225),
    [anon_sym_LT_LT] = ACTIONS(225),
    [anon_sym_GT_GT] = ACTIONS(225),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(227),
    [anon_sym_SLASH_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_DOT_DOT] = ACTIONS(225),
    [anon_sym_CARET] = ACTIONS(225),
  },
  [71] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(149),
    [anon_sym_or] = ACTIONS(149),
    [anon_sym_and] = ACTIONS(149),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_LT_EQ] = ACTIONS(149),
    [anon_sym_EQ_EQ] = ACTIONS(149),
    [anon_sym_TILDE_EQ] = ACTIONS(149),
    [anon_sym_GT_EQ] = ACTIONS(149),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_PIPE] = ACTIONS(149),
    [anon_sym_TILDE] = ACTIONS(151),
    [anon_sym_AMP] = ACTIONS(149),
    [anon_sym_LT_LT] = ACTIONS(149),
    [anon_sym_GT_GT] = ACTIONS(149),
    [anon_sym_PLUS] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(149),
    [anon_sym_STAR] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(151),
    [anon_sym_SLASH_SLASH] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(149),
    [anon_sym_DOT_DOT] = ACTIONS(149),
    [anon_sym_CARET] = ACTIONS(215),
  },
  [72] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(253),
  },
  [73] = {
    [sym__expression] = STATE(97),
    [sym_table] = STATE(12),
    [sym_binary_operation] = STATE(12),
    [sym_unary_operation] = STATE(12),
    [sym_string] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_not] = ACTIONS(105),
    [anon_sym_POUND] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_number] = ACTIONS(35),
    [sym_nil] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
  },
  [74] = {
    [sym__expression] = STATE(98),
    [sym_table] = STATE(12),
    [sym_binary_operation] = STATE(12),
    [sym_unary_operation] = STATE(12),
    [sym_string] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_not] = ACTIONS(105),
    [anon_sym_POUND] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_number] = ACTIONS(35),
    [sym_nil] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
  },
  [75] = {
    [sym__expression] = STATE(99),
    [sym_table] = STATE(12),
    [sym_binary_operation] = STATE(12),
    [sym_unary_operation] = STATE(12),
    [sym_string] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_not] = ACTIONS(105),
    [anon_sym_POUND] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_number] = ACTIONS(35),
    [sym_nil] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
  },
  [76] = {
    [sym__expression] = STATE(100),
    [sym_table] = STATE(12),
    [sym_binary_operation] = STATE(12),
    [sym_unary_operation] = STATE(12),
    [sym_string] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_not] = ACTIONS(105),
    [anon_sym_POUND] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_number] = ACTIONS(35),
    [sym_nil] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
  },
  [77] = {
    [sym__expression] = STATE(101),
    [sym_table] = STATE(12),
    [sym_binary_operation] = STATE(12),
    [sym_unary_operation] = STATE(12),
    [sym_string] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_not] = ACTIONS(105),
    [anon_sym_POUND] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_number] = ACTIONS(35),
    [sym_nil] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
  },
  [78] = {
    [sym__expression] = STATE(102),
    [sym_table] = STATE(12),
    [sym_binary_operation] = STATE(12),
    [sym_unary_operation] = STATE(12),
    [sym_string] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_not] = ACTIONS(105),
    [anon_sym_POUND] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_number] = ACTIONS(35),
    [sym_nil] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
  },
  [79] = {
    [sym__expression] = STATE(103),
    [sym_table] = STATE(12),
    [sym_binary_operation] = STATE(12),
    [sym_unary_operation] = STATE(12),
    [sym_string] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_not] = ACTIONS(105),
    [anon_sym_POUND] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_number] = ACTIONS(35),
    [sym_nil] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
  },
  [80] = {
    [sym__expression] = STATE(104),
    [sym_table] = STATE(12),
    [sym_binary_operation] = STATE(12),
    [sym_unary_operation] = STATE(12),
    [sym_string] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_not] = ACTIONS(105),
    [anon_sym_POUND] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_number] = ACTIONS(35),
    [sym_nil] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
  },
  [81] = {
    [sym__expression] = STATE(105),
    [sym_table] = STATE(12),
    [sym_binary_operation] = STATE(12),
    [sym_unary_operation] = STATE(12),
    [sym_string] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_not] = ACTIONS(105),
    [anon_sym_POUND] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_number] = ACTIONS(35),
    [sym_nil] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
  },
  [82] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(229),
    [anon_sym_RBRACK] = ACTIONS(229),
    [anon_sym_COMMA] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(229),
    [anon_sym_or] = ACTIONS(229),
    [anon_sym_and] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(231),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_EQ_EQ] = ACTIONS(229),
    [anon_sym_TILDE_EQ] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_GT] = ACTIONS(231),
    [anon_sym_PIPE] = ACTIONS(229),
    [anon_sym_TILDE] = ACTIONS(231),
    [anon_sym_AMP] = ACTIONS(229),
    [anon_sym_LT_LT] = ACTIONS(229),
    [anon_sym_GT_GT] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(231),
    [anon_sym_SLASH_SLASH] = ACTIONS(229),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_DOT_DOT] = ACTIONS(229),
    [anon_sym_CARET] = ACTIONS(229),
  },
  [83] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(255),
    [anon_sym_SEMI] = ACTIONS(255),
    [anon_sym_or] = ACTIONS(121),
    [anon_sym_and] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(125),
    [anon_sym_LT_EQ] = ACTIONS(127),
    [anon_sym_EQ_EQ] = ACTIONS(127),
    [anon_sym_TILDE_EQ] = ACTIONS(127),
    [anon_sym_GT_EQ] = ACTIONS(127),
    [anon_sym_GT] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(131),
    [anon_sym_AMP] = ACTIONS(133),
    [anon_sym_LT_LT] = ACTIONS(135),
    [anon_sym_GT_GT] = ACTIONS(135),
    [anon_sym_PLUS] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(141),
    [anon_sym_SLASH_SLASH] = ACTIONS(139),
    [anon_sym_PERCENT] = ACTIONS(139),
    [anon_sym_DOT_DOT] = ACTIONS(135),
    [anon_sym_CARET] = ACTIONS(139),
  },
  [84] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(125),
    [anon_sym_LT_EQ] = ACTIONS(127),
    [anon_sym_EQ_EQ] = ACTIONS(127),
    [anon_sym_TILDE_EQ] = ACTIONS(127),
    [anon_sym_GT_EQ] = ACTIONS(127),
    [anon_sym_GT] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(131),
    [anon_sym_AMP] = ACTIONS(133),
    [anon_sym_LT_LT] = ACTIONS(135),
    [anon_sym_GT_GT] = ACTIONS(135),
    [anon_sym_PLUS] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(141),
    [anon_sym_SLASH_SLASH] = ACTIONS(139),
    [anon_sym_PERCENT] = ACTIONS(139),
    [anon_sym_DOT_DOT] = ACTIONS(135),
    [anon_sym_CARET] = ACTIONS(139),
  },
  [85] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(125),
    [anon_sym_LT_EQ] = ACTIONS(127),
    [anon_sym_EQ_EQ] = ACTIONS(127),
    [anon_sym_TILDE_EQ] = ACTIONS(127),
    [anon_sym_GT_EQ] = ACTIONS(127),
    [anon_sym_GT] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(131),
    [anon_sym_AMP] = ACTIONS(133),
    [anon_sym_LT_LT] = ACTIONS(135),
    [anon_sym_GT_GT] = ACTIONS(135),
    [anon_sym_PLUS] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(141),
    [anon_sym_SLASH_SLASH] = ACTIONS(139),
    [anon_sym_PERCENT] = ACTIONS(139),
    [anon_sym_DOT_DOT] = ACTIONS(135),
    [anon_sym_CARET] = ACTIONS(139),
  },
  [86] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_TILDE_EQ] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(131),
    [anon_sym_AMP] = ACTIONS(133),
    [anon_sym_LT_LT] = ACTIONS(135),
    [anon_sym_GT_GT] = ACTIONS(135),
    [anon_sym_PLUS] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(141),
    [anon_sym_SLASH_SLASH] = ACTIONS(139),
    [anon_sym_PERCENT] = ACTIONS(139),
    [anon_sym_DOT_DOT] = ACTIONS(135),
    [anon_sym_CARET] = ACTIONS(139),
  },
  [87] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_TILDE_EQ] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(249),
    [anon_sym_TILDE] = ACTIONS(131),
    [anon_sym_AMP] = ACTIONS(133),
    [anon_sym_LT_LT] = ACTIONS(135),
    [anon_sym_GT_GT] = ACTIONS(135),
    [anon_sym_PLUS] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(141),
    [anon_sym_SLASH_SLASH] = ACTIONS(139),
    [anon_sym_PERCENT] = ACTIONS(139),
    [anon_sym_DOT_DOT] = ACTIONS(135),
    [anon_sym_CARET] = ACTIONS(139),
  },
  [88] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_TILDE_EQ] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(249),
    [anon_sym_TILDE] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(133),
    [anon_sym_LT_LT] = ACTIONS(135),
    [anon_sym_GT_GT] = ACTIONS(135),
    [anon_sym_PLUS] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(141),
    [anon_sym_SLASH_SLASH] = ACTIONS(139),
    [anon_sym_PERCENT] = ACTIONS(139),
    [anon_sym_DOT_DOT] = ACTIONS(135),
    [anon_sym_CARET] = ACTIONS(139),
  },
  [89] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_TILDE_EQ] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(249),
    [anon_sym_TILDE] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(135),
    [anon_sym_GT_GT] = ACTIONS(135),
    [anon_sym_PLUS] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(141),
    [anon_sym_SLASH_SLASH] = ACTIONS(139),
    [anon_sym_PERCENT] = ACTIONS(139),
    [anon_sym_DOT_DOT] = ACTIONS(135),
    [anon_sym_CARET] = ACTIONS(139),
  },
  [90] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_TILDE_EQ] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(249),
    [anon_sym_TILDE] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(249),
    [anon_sym_GT_GT] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(141),
    [anon_sym_SLASH_SLASH] = ACTIONS(139),
    [anon_sym_PERCENT] = ACTIONS(139),
    [anon_sym_DOT_DOT] = ACTIONS(135),
    [anon_sym_CARET] = ACTIONS(139),
  },
  [91] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_TILDE_EQ] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(249),
    [anon_sym_TILDE] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(249),
    [anon_sym_GT_GT] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(141),
    [anon_sym_SLASH_SLASH] = ACTIONS(139),
    [anon_sym_PERCENT] = ACTIONS(139),
    [anon_sym_DOT_DOT] = ACTIONS(249),
    [anon_sym_CARET] = ACTIONS(139),
  },
  [92] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_TILDE_EQ] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(249),
    [anon_sym_TILDE] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(249),
    [anon_sym_GT_GT] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(251),
    [anon_sym_SLASH_SLASH] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_DOT_DOT] = ACTIONS(249),
    [anon_sym_CARET] = ACTIONS(139),
  },
  [93] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(257),
    [anon_sym_COMMA] = ACTIONS(257),
    [anon_sym_SEMI] = ACTIONS(257),
  },
  [94] = {
    [sym__expression] = STATE(20),
    [sym_table] = STATE(12),
    [sym_field] = STATE(93),
    [sym_binary_operation] = STATE(12),
    [sym_unary_operation] = STATE(12),
    [sym_string] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_number] = ACTIONS(35),
    [sym_nil] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_identifier] = ACTIONS(53),
  },
  [95] = {
    [sym__field_sep] = STATE(106),
    [aux_sym__field_sequence_repeat1] = STATE(95),
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(257),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_SEMI] = ACTIONS(261),
  },
  [96] = {
    [sym__expression] = STATE(107),
    [sym_table] = STATE(12),
    [sym_binary_operation] = STATE(12),
    [sym_unary_operation] = STATE(12),
    [sym_string] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_number] = ACTIONS(35),
    [sym_nil] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
  },
  [97] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(201),
    [anon_sym_LT_EQ] = ACTIONS(203),
    [anon_sym_EQ_EQ] = ACTIONS(203),
    [anon_sym_TILDE_EQ] = ACTIONS(203),
    [anon_sym_GT_EQ] = ACTIONS(203),
    [anon_sym_GT] = ACTIONS(201),
    [anon_sym_PIPE] = ACTIONS(205),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_LT_LT] = ACTIONS(211),
    [anon_sym_GT_GT] = ACTIONS(211),
    [anon_sym_PLUS] = ACTIONS(213),
    [anon_sym_DASH] = ACTIONS(213),
    [anon_sym_STAR] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_SLASH_SLASH] = ACTIONS(215),
    [anon_sym_PERCENT] = ACTIONS(215),
    [anon_sym_DOT_DOT] = ACTIONS(211),
    [anon_sym_CARET] = ACTIONS(215),
  },
  [98] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(201),
    [anon_sym_LT_EQ] = ACTIONS(203),
    [anon_sym_EQ_EQ] = ACTIONS(203),
    [anon_sym_TILDE_EQ] = ACTIONS(203),
    [anon_sym_GT_EQ] = ACTIONS(203),
    [anon_sym_GT] = ACTIONS(201),
    [anon_sym_PIPE] = ACTIONS(205),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_LT_LT] = ACTIONS(211),
    [anon_sym_GT_GT] = ACTIONS(211),
    [anon_sym_PLUS] = ACTIONS(213),
    [anon_sym_DASH] = ACTIONS(213),
    [anon_sym_STAR] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_SLASH_SLASH] = ACTIONS(215),
    [anon_sym_PERCENT] = ACTIONS(215),
    [anon_sym_DOT_DOT] = ACTIONS(211),
    [anon_sym_CARET] = ACTIONS(215),
  },
  [99] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_TILDE_EQ] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(205),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_LT_LT] = ACTIONS(211),
    [anon_sym_GT_GT] = ACTIONS(211),
    [anon_sym_PLUS] = ACTIONS(213),
    [anon_sym_DASH] = ACTIONS(213),
    [anon_sym_STAR] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_SLASH_SLASH] = ACTIONS(215),
    [anon_sym_PERCENT] = ACTIONS(215),
    [anon_sym_DOT_DOT] = ACTIONS(211),
    [anon_sym_CARET] = ACTIONS(215),
  },
  [100] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_TILDE_EQ] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(249),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_LT_LT] = ACTIONS(211),
    [anon_sym_GT_GT] = ACTIONS(211),
    [anon_sym_PLUS] = ACTIONS(213),
    [anon_sym_DASH] = ACTIONS(213),
    [anon_sym_STAR] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_SLASH_SLASH] = ACTIONS(215),
    [anon_sym_PERCENT] = ACTIONS(215),
    [anon_sym_DOT_DOT] = ACTIONS(211),
    [anon_sym_CARET] = ACTIONS(215),
  },
  [101] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_TILDE_EQ] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(249),
    [anon_sym_TILDE] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_LT_LT] = ACTIONS(211),
    [anon_sym_GT_GT] = ACTIONS(211),
    [anon_sym_PLUS] = ACTIONS(213),
    [anon_sym_DASH] = ACTIONS(213),
    [anon_sym_STAR] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_SLASH_SLASH] = ACTIONS(215),
    [anon_sym_PERCENT] = ACTIONS(215),
    [anon_sym_DOT_DOT] = ACTIONS(211),
    [anon_sym_CARET] = ACTIONS(215),
  },
  [102] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_TILDE_EQ] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(249),
    [anon_sym_TILDE] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(211),
    [anon_sym_GT_GT] = ACTIONS(211),
    [anon_sym_PLUS] = ACTIONS(213),
    [anon_sym_DASH] = ACTIONS(213),
    [anon_sym_STAR] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_SLASH_SLASH] = ACTIONS(215),
    [anon_sym_PERCENT] = ACTIONS(215),
    [anon_sym_DOT_DOT] = ACTIONS(211),
    [anon_sym_CARET] = ACTIONS(215),
  },
  [103] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_TILDE_EQ] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(249),
    [anon_sym_TILDE] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(249),
    [anon_sym_GT_GT] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(213),
    [anon_sym_DASH] = ACTIONS(213),
    [anon_sym_STAR] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_SLASH_SLASH] = ACTIONS(215),
    [anon_sym_PERCENT] = ACTIONS(215),
    [anon_sym_DOT_DOT] = ACTIONS(211),
    [anon_sym_CARET] = ACTIONS(215),
  },
  [104] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_TILDE_EQ] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(249),
    [anon_sym_TILDE] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(249),
    [anon_sym_GT_GT] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_SLASH_SLASH] = ACTIONS(215),
    [anon_sym_PERCENT] = ACTIONS(215),
    [anon_sym_DOT_DOT] = ACTIONS(249),
    [anon_sym_CARET] = ACTIONS(215),
  },
  [105] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_TILDE_EQ] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(249),
    [anon_sym_TILDE] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(249),
    [anon_sym_GT_GT] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(251),
    [anon_sym_SLASH_SLASH] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_DOT_DOT] = ACTIONS(249),
    [anon_sym_CARET] = ACTIONS(215),
  },
  [106] = {
    [sym__expression] = STATE(20),
    [sym_table] = STATE(12),
    [sym_field] = STATE(93),
    [sym_binary_operation] = STATE(12),
    [sym_unary_operation] = STATE(12),
    [sym_string] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_number] = ACTIONS(35),
    [sym_nil] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_identifier] = ACTIONS(53),
  },
  [107] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(264),
    [anon_sym_COMMA] = ACTIONS(264),
    [anon_sym_SEMI] = ACTIONS(264),
    [anon_sym_or] = ACTIONS(121),
    [anon_sym_and] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(125),
    [anon_sym_LT_EQ] = ACTIONS(127),
    [anon_sym_EQ_EQ] = ACTIONS(127),
    [anon_sym_TILDE_EQ] = ACTIONS(127),
    [anon_sym_GT_EQ] = ACTIONS(127),
    [anon_sym_GT] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(131),
    [anon_sym_AMP] = ACTIONS(133),
    [anon_sym_LT_LT] = ACTIONS(135),
    [anon_sym_GT_GT] = ACTIONS(135),
    [anon_sym_PLUS] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(141),
    [anon_sym_SLASH_SLASH] = ACTIONS(139),
    [anon_sym_PERCENT] = ACTIONS(139),
    [anon_sym_DOT_DOT] = ACTIONS(135),
    [anon_sym_CARET] = ACTIONS(139),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, REDUCE(sym_lua, 0),
  [11] = {.count = 1, .reusable = true}, SHIFT(3),
  [13] = {.count = 1, .reusable = true}, SHIFT(4),
  [15] = {.count = 1, .reusable = true}, SHIFT(5),
  [17] = {.count = 1, .reusable = false}, SHIFT(5),
  [19] = {.count = 1, .reusable = true}, SHIFT(6),
  [21] = {.count = 1, .reusable = true}, SHIFT(7),
  [23] = {.count = 1, .reusable = false}, SHIFT(3),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [27] = {.count = 1, .reusable = false}, REDUCE(sym_string, 1),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 1),
  [33] = {.count = 1, .reusable = true}, SHIFT(11),
  [35] = {.count = 1, .reusable = true}, SHIFT(12),
  [37] = {.count = 1, .reusable = true}, SHIFT(13),
  [39] = {.count = 1, .reusable = true}, SHIFT(14),
  [41] = {.count = 1, .reusable = true}, SHIFT(15),
  [43] = {.count = 1, .reusable = true}, SHIFT(16),
  [45] = {.count = 1, .reusable = false}, SHIFT(16),
  [47] = {.count = 1, .reusable = true}, SHIFT(17),
  [49] = {.count = 1, .reusable = true}, SHIFT(18),
  [51] = {.count = 1, .reusable = false}, SHIFT(12),
  [53] = {.count = 1, .reusable = false}, SHIFT(19),
  [55] = {.count = 1, .reusable = false}, SHIFT(24),
  [57] = {.count = 1, .reusable = true}, SHIFT(25),
  [59] = {.count = 1, .reusable = false}, SHIFT(25),
  [61] = {.count = 1, .reusable = false}, SHIFT(26),
  [63] = {.count = 1, .reusable = true}, SHIFT(26),
  [65] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym__statement, 1, .alias_sequence_id = 1),
  [69] = {.count = 1, .reusable = false}, SHIFT(27),
  [71] = {.count = 1, .reusable = false}, SHIFT(28),
  [73] = {.count = 1, .reusable = false}, SHIFT(29),
  [75] = {.count = 1, .reusable = true}, SHIFT(29),
  [77] = {.count = 1, .reusable = true}, SHIFT(30),
  [79] = {.count = 1, .reusable = false}, SHIFT(31),
  [81] = {.count = 1, .reusable = true}, SHIFT(32),
  [83] = {.count = 1, .reusable = true}, SHIFT(33),
  [85] = {.count = 1, .reusable = true}, SHIFT(34),
  [87] = {.count = 1, .reusable = true}, SHIFT(35),
  [89] = {.count = 1, .reusable = false}, SHIFT(35),
  [91] = {.count = 1, .reusable = false}, SHIFT(33),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym__statement, 1, .alias_sequence_id = 1),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_lua, 1),
  [97] = {.count = 1, .reusable = true}, SHIFT(37),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_table, 2),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym_table, 2),
  [103] = {.count = 1, .reusable = true}, SHIFT(39),
  [105] = {.count = 1, .reusable = false}, SHIFT(39),
  [107] = {.count = 1, .reusable = false}, SHIFT(42),
  [109] = {.count = 1, .reusable = true}, SHIFT(43),
  [111] = {.count = 1, .reusable = false}, SHIFT(43),
  [113] = {.count = 1, .reusable = false}, SHIFT(44),
  [115] = {.count = 1, .reusable = true}, SHIFT(44),
  [117] = {.count = 1, .reusable = false}, SHIFT(45),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_field, 1),
  [121] = {.count = 1, .reusable = true}, SHIFT(46),
  [123] = {.count = 1, .reusable = true}, SHIFT(47),
  [125] = {.count = 1, .reusable = false}, SHIFT(48),
  [127] = {.count = 1, .reusable = true}, SHIFT(48),
  [129] = {.count = 1, .reusable = true}, SHIFT(49),
  [131] = {.count = 1, .reusable = false}, SHIFT(50),
  [133] = {.count = 1, .reusable = true}, SHIFT(51),
  [135] = {.count = 1, .reusable = true}, SHIFT(52),
  [137] = {.count = 1, .reusable = true}, SHIFT(53),
  [139] = {.count = 1, .reusable = true}, SHIFT(54),
  [141] = {.count = 1, .reusable = false}, SHIFT(54),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym__field_sequence, 1),
  [145] = {.count = 1, .reusable = true}, SHIFT(55),
  [147] = {.count = 1, .reusable = true}, SHIFT(57),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_unary_operation, 2),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym_unary_operation, 2),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [157] = {.count = 1, .reusable = false}, SHIFT(58),
  [159] = {.count = 1, .reusable = true}, SHIFT(59),
  [161] = {.count = 1, .reusable = false}, SHIFT(59),
  [163] = {.count = 1, .reusable = false}, SHIFT(60),
  [165] = {.count = 1, .reusable = true}, SHIFT(60),
  [167] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(2),
  [170] = {.count = 1, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2),
  [172] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(3),
  [175] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(4),
  [178] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(5),
  [181] = {.count = 2, .reusable = false}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(5),
  [184] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(6),
  [187] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(7),
  [190] = {.count = 2, .reusable = false}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(3),
  [193] = {.count = 1, .reusable = true}, SHIFT(70),
  [195] = {.count = 1, .reusable = true}, SHIFT(72),
  [197] = {.count = 1, .reusable = true}, SHIFT(73),
  [199] = {.count = 1, .reusable = true}, SHIFT(74),
  [201] = {.count = 1, .reusable = false}, SHIFT(75),
  [203] = {.count = 1, .reusable = true}, SHIFT(75),
  [205] = {.count = 1, .reusable = true}, SHIFT(76),
  [207] = {.count = 1, .reusable = false}, SHIFT(77),
  [209] = {.count = 1, .reusable = true}, SHIFT(78),
  [211] = {.count = 1, .reusable = true}, SHIFT(79),
  [213] = {.count = 1, .reusable = true}, SHIFT(80),
  [215] = {.count = 1, .reusable = true}, SHIFT(81),
  [217] = {.count = 1, .reusable = false}, SHIFT(81),
  [219] = {.count = 1, .reusable = false}, SHIFT(82),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym__field_sequence, 2),
  [223] = {.count = 1, .reusable = true}, SHIFT(94),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_table, 3),
  [227] = {.count = 1, .reusable = false}, REDUCE(sym_table, 3),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [231] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [233] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2),
  [235] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(59),
  [238] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(59),
  [241] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(60),
  [244] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat2, 2),
  [246] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(60),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_binary_operation, 3),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym_binary_operation, 3),
  [253] = {.count = 1, .reusable = true}, SHIFT(96),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_field, 3),
  [257] = {.count = 1, .reusable = true}, REDUCE(aux_sym__field_sequence_repeat1, 2),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym__field_sequence, 3),
  [261] = {.count = 2, .reusable = true}, REDUCE(aux_sym__field_sequence_repeat1, 2), SHIFT_REPEAT(106),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_field, 5),
};

void *tree_sitter_lua_external_scanner_create();
void tree_sitter_lua_external_scanner_destroy(void *);
bool tree_sitter_lua_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_lua_external_scanner_serialize(void *, char *);
void tree_sitter_lua_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_lua() {
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
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_lua_external_scanner_create,
      tree_sitter_lua_external_scanner_destroy,
      tree_sitter_lua_external_scanner_scan,
      tree_sitter_lua_external_scanner_serialize,
      tree_sitter_lua_external_scanner_deserialize,
    },
  };
  return &language;
}
