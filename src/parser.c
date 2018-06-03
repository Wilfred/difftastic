#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 185
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 1
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 1

enum {
  sym_comment = 1,
  sym__multiline_string = 2,
  anon_sym_return = 3,
  anon_sym_COMMA = 4,
  anon_sym_do = 5,
  anon_sym_end = 6,
  anon_sym_SEMI = 7,
  sym_spread = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_LBRACK = 11,
  anon_sym_RBRACK = 12,
  anon_sym_EQ = 13,
  anon_sym_or = 14,
  anon_sym_and = 15,
  anon_sym_LT = 16,
  anon_sym_LT_EQ = 17,
  anon_sym_EQ_EQ = 18,
  anon_sym_TILDE_EQ = 19,
  anon_sym_GT_EQ = 20,
  anon_sym_GT = 21,
  anon_sym_PIPE = 22,
  anon_sym_TILDE = 23,
  anon_sym_AMP = 24,
  anon_sym_LT_LT = 25,
  anon_sym_GT_GT = 26,
  anon_sym_PLUS = 27,
  anon_sym_DASH = 28,
  anon_sym_STAR = 29,
  anon_sym_SLASH = 30,
  anon_sym_SLASH_SLASH = 31,
  anon_sym_PERCENT = 32,
  anon_sym_DOT_DOT = 33,
  anon_sym_CARET = 34,
  anon_sym_not = 35,
  anon_sym_POUND = 36,
  anon_sym_SQUOTE = 37,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH = 38,
  aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH = 39,
  anon_sym_DQUOTE = 40,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH = 41,
  sym_number = 42,
  sym_nil = 43,
  sym_true = 44,
  sym_false = 45,
  sym_identifier = 46,
  sym_lua = 47,
  sym_return_statement = 48,
  sym__statement = 49,
  sym_do_statement = 50,
  sym__empty_statement = 51,
  sym__expression = 52,
  sym_table = 53,
  sym_field = 54,
  sym__field_sequence = 55,
  sym__field_sep = 56,
  sym_binary_operation = 57,
  sym_unary_operation = 58,
  sym_string = 59,
  aux_sym_lua_repeat1 = 60,
  aux_sym_return_statement_repeat1 = 61,
  aux_sym__field_sequence_repeat1 = 62,
  aux_sym_string_repeat1 = 63,
  aux_sym_string_repeat2 = 64,
  alias_sym_expression = 65,
};

static const char *ts_symbol_names[] = {
  [sym_comment] = "comment",
  [sym__multiline_string] = "_multiline_string",
  [ts_builtin_sym_end] = "END",
  [anon_sym_return] = "return",
  [anon_sym_COMMA] = ",",
  [anon_sym_do] = "do",
  [anon_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [sym_spread] = "spread",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
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
  [sym_return_statement] = "return_statement",
  [sym__statement] = "_statement",
  [sym_do_statement] = "do_statement",
  [sym__empty_statement] = "_empty_statement",
  [sym__expression] = "_expression",
  [sym_table] = "table",
  [sym_field] = "field",
  [sym__field_sequence] = "_field_sequence",
  [sym__field_sep] = "_field_sep",
  [sym_binary_operation] = "binary_operation",
  [sym_unary_operation] = "unary_operation",
  [sym_string] = "string",
  [aux_sym_lua_repeat1] = "lua_repeat1",
  [aux_sym_return_statement_repeat1] = "return_statement_repeat1",
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
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
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
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_do_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__empty_statement] = {
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
  [aux_sym_return_statement_repeat1] = {
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
      if (lookahead == ';')
        ADVANCE(26);
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
        SKIP(53);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 54:
      if (lookahead == '\n')
        SKIP(54);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '\\')
        ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(55);
      if (lookahead != 0)
        ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 56:
      if (lookahead == '\n')
        SKIP(56);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(57);
      if (lookahead != 0)
        ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 58:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(58);
      END_STATE();
    case 59:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 60:
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
        ADVANCE(61);
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
        SKIP(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 61:
      if (lookahead == '.')
        ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 63:
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
        ADVANCE(61);
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
        SKIP(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 64:
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
        ADVANCE(61);
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
        SKIP(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 65:
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
        SKIP(65);
      END_STATE();
    case 66:
      if (lookahead == '}')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(66);
      END_STATE();
    case 67:
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
        ADVANCE(61);
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
      if (lookahead == '~')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 68:
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
        ADVANCE(61);
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
        SKIP(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 69:
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 70:
      if (lookahead == '=')
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 72:
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
        SKIP(72);
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
      if (lookahead == 'd')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(6);
      if (lookahead == 'f')
        ADVANCE(9);
      if (lookahead == 'n')
        ADVANCE(14);
      if (lookahead == 'o')
        ADVANCE(19);
      if (lookahead == 'r')
        ADVANCE(21);
      if (lookahead == 't')
        ADVANCE(27);
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
      if (lookahead == 'o')
        ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 6:
      if (lookahead == 'n')
        ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'd')
        ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 9:
      if (lookahead == 'a')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'l')
        ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 's')
        ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'e')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 14:
      if (lookahead == 'i')
        ADVANCE(15);
      if (lookahead == 'o')
        ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'l')
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 17:
      if (lookahead == 't')
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 19:
      if (lookahead == 'r')
        ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 21:
      if (lookahead == 'e')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 't')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'u')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'r')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'n')
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 27:
      if (lookahead == 'r')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'u')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'e')
        ADVANCE(30);
      END_STATE();
    case 30:
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
  [3] = {.lex_state = 46, .external_lex_state = 1},
  [4] = {.lex_state = 50, .external_lex_state = 1},
  [5] = {.lex_state = 52, .external_lex_state = 1},
  [6] = {.lex_state = 53, .external_lex_state = 1},
  [7] = {.lex_state = 54, .external_lex_state = 2},
  [8] = {.lex_state = 56, .external_lex_state = 2},
  [9] = {.lex_state = 58, .external_lex_state = 2},
  [10] = {.lex_state = 50, .external_lex_state = 1},
  [11] = {.lex_state = 46, .external_lex_state = 1},
  [12] = {.lex_state = 50, .external_lex_state = 1},
  [13] = {.lex_state = 46, .external_lex_state = 1},
  [14] = {.lex_state = 46, .external_lex_state = 1},
  [15] = {.lex_state = 46, .external_lex_state = 1},
  [16] = {.lex_state = 50, .external_lex_state = 1},
  [17] = {.lex_state = 52, .external_lex_state = 1},
  [18] = {.lex_state = 53, .external_lex_state = 1},
  [19] = {.lex_state = 54, .external_lex_state = 2},
  [20] = {.lex_state = 56, .external_lex_state = 2},
  [21] = {.lex_state = 59, .external_lex_state = 2},
  [22] = {.lex_state = 50, .external_lex_state = 1},
  [23] = {.lex_state = 46, .external_lex_state = 1},
  [24] = {.lex_state = 60, .external_lex_state = 2},
  [25] = {.lex_state = 60, .external_lex_state = 2},
  [26] = {.lex_state = 52, .external_lex_state = 1},
  [27] = {.lex_state = 50, .external_lex_state = 1},
  [28] = {.lex_state = 53, .external_lex_state = 1},
  [29] = {.lex_state = 53, .external_lex_state = 1},
  [30] = {.lex_state = 54, .external_lex_state = 2},
  [31] = {.lex_state = 56, .external_lex_state = 2},
  [32] = {.lex_state = 63, .external_lex_state = 2},
  [33] = {.lex_state = 64, .external_lex_state = 2},
  [34] = {.lex_state = 65, .external_lex_state = 2},
  [35] = {.lex_state = 66, .external_lex_state = 2},
  [36] = {.lex_state = 50, .external_lex_state = 1},
  [37] = {.lex_state = 50, .external_lex_state = 1},
  [38] = {.lex_state = 54, .external_lex_state = 2},
  [39] = {.lex_state = 56, .external_lex_state = 2},
  [40] = {.lex_state = 53, .external_lex_state = 1},
  [41] = {.lex_state = 53, .external_lex_state = 1},
  [42] = {.lex_state = 53, .external_lex_state = 1},
  [43] = {.lex_state = 53, .external_lex_state = 1},
  [44] = {.lex_state = 53, .external_lex_state = 1},
  [45] = {.lex_state = 53, .external_lex_state = 1},
  [46] = {.lex_state = 53, .external_lex_state = 1},
  [47] = {.lex_state = 53, .external_lex_state = 1},
  [48] = {.lex_state = 53, .external_lex_state = 1},
  [49] = {.lex_state = 46, .external_lex_state = 1},
  [50] = {.lex_state = 53, .external_lex_state = 1},
  [51] = {.lex_state = 59, .external_lex_state = 2},
  [52] = {.lex_state = 67, .external_lex_state = 2},
  [53] = {.lex_state = 46, .external_lex_state = 1},
  [54] = {.lex_state = 59, .external_lex_state = 2},
  [55] = {.lex_state = 46, .external_lex_state = 1},
  [56] = {.lex_state = 50, .external_lex_state = 1},
  [57] = {.lex_state = 66, .external_lex_state = 2},
  [58] = {.lex_state = 50, .external_lex_state = 1},
  [59] = {.lex_state = 50, .external_lex_state = 1},
  [60] = {.lex_state = 54, .external_lex_state = 2},
  [61] = {.lex_state = 56, .external_lex_state = 2},
  [62] = {.lex_state = 46, .external_lex_state = 1},
  [63] = {.lex_state = 53, .external_lex_state = 1},
  [64] = {.lex_state = 53, .external_lex_state = 1},
  [65] = {.lex_state = 53, .external_lex_state = 1},
  [66] = {.lex_state = 53, .external_lex_state = 1},
  [67] = {.lex_state = 53, .external_lex_state = 1},
  [68] = {.lex_state = 53, .external_lex_state = 1},
  [69] = {.lex_state = 53, .external_lex_state = 1},
  [70] = {.lex_state = 53, .external_lex_state = 1},
  [71] = {.lex_state = 53, .external_lex_state = 1},
  [72] = {.lex_state = 59, .external_lex_state = 2},
  [73] = {.lex_state = 46, .external_lex_state = 1},
  [74] = {.lex_state = 60, .external_lex_state = 2},
  [75] = {.lex_state = 66, .external_lex_state = 2},
  [76] = {.lex_state = 53, .external_lex_state = 1},
  [77] = {.lex_state = 68, .external_lex_state = 2},
  [78] = {.lex_state = 64, .external_lex_state = 2},
  [79] = {.lex_state = 60, .external_lex_state = 2},
  [80] = {.lex_state = 54, .external_lex_state = 2},
  [81] = {.lex_state = 56, .external_lex_state = 2},
  [82] = {.lex_state = 53, .external_lex_state = 1},
  [83] = {.lex_state = 53, .external_lex_state = 1},
  [84] = {.lex_state = 53, .external_lex_state = 1},
  [85] = {.lex_state = 53, .external_lex_state = 1},
  [86] = {.lex_state = 53, .external_lex_state = 1},
  [87] = {.lex_state = 53, .external_lex_state = 1},
  [88] = {.lex_state = 53, .external_lex_state = 1},
  [89] = {.lex_state = 53, .external_lex_state = 1},
  [90] = {.lex_state = 53, .external_lex_state = 1},
  [91] = {.lex_state = 53, .external_lex_state = 1},
  [92] = {.lex_state = 52, .external_lex_state = 1},
  [93] = {.lex_state = 65, .external_lex_state = 2},
  [94] = {.lex_state = 50, .external_lex_state = 1},
  [95] = {.lex_state = 50, .external_lex_state = 1},
  [96] = {.lex_state = 54, .external_lex_state = 2},
  [97] = {.lex_state = 56, .external_lex_state = 2},
  [98] = {.lex_state = 50, .external_lex_state = 1},
  [99] = {.lex_state = 50, .external_lex_state = 1},
  [100] = {.lex_state = 50, .external_lex_state = 1},
  [101] = {.lex_state = 50, .external_lex_state = 1},
  [102] = {.lex_state = 50, .external_lex_state = 1},
  [103] = {.lex_state = 50, .external_lex_state = 1},
  [104] = {.lex_state = 50, .external_lex_state = 1},
  [105] = {.lex_state = 50, .external_lex_state = 1},
  [106] = {.lex_state = 50, .external_lex_state = 1},
  [107] = {.lex_state = 67, .external_lex_state = 2},
  [108] = {.lex_state = 53, .external_lex_state = 1},
  [109] = {.lex_state = 53, .external_lex_state = 1},
  [110] = {.lex_state = 53, .external_lex_state = 1},
  [111] = {.lex_state = 53, .external_lex_state = 1},
  [112] = {.lex_state = 53, .external_lex_state = 1},
  [113] = {.lex_state = 53, .external_lex_state = 1},
  [114] = {.lex_state = 53, .external_lex_state = 1},
  [115] = {.lex_state = 53, .external_lex_state = 1},
  [116] = {.lex_state = 53, .external_lex_state = 1},
  [117] = {.lex_state = 53, .external_lex_state = 1},
  [118] = {.lex_state = 59, .external_lex_state = 2},
  [119] = {.lex_state = 69, .external_lex_state = 2},
  [120] = {.lex_state = 46, .external_lex_state = 1},
  [121] = {.lex_state = 59, .external_lex_state = 2},
  [122] = {.lex_state = 50, .external_lex_state = 1},
  [123] = {.lex_state = 50, .external_lex_state = 1},
  [124] = {.lex_state = 50, .external_lex_state = 1},
  [125] = {.lex_state = 50, .external_lex_state = 1},
  [126] = {.lex_state = 50, .external_lex_state = 1},
  [127] = {.lex_state = 50, .external_lex_state = 1},
  [128] = {.lex_state = 50, .external_lex_state = 1},
  [129] = {.lex_state = 50, .external_lex_state = 1},
  [130] = {.lex_state = 50, .external_lex_state = 1},
  [131] = {.lex_state = 50, .external_lex_state = 1},
  [132] = {.lex_state = 50, .external_lex_state = 1},
  [133] = {.lex_state = 46, .external_lex_state = 1},
  [134] = {.lex_state = 60, .external_lex_state = 2},
  [135] = {.lex_state = 68, .external_lex_state = 2},
  [136] = {.lex_state = 70, .external_lex_state = 2},
  [137] = {.lex_state = 53, .external_lex_state = 1},
  [138] = {.lex_state = 53, .external_lex_state = 1},
  [139] = {.lex_state = 53, .external_lex_state = 1},
  [140] = {.lex_state = 53, .external_lex_state = 1},
  [141] = {.lex_state = 53, .external_lex_state = 1},
  [142] = {.lex_state = 53, .external_lex_state = 1},
  [143] = {.lex_state = 53, .external_lex_state = 1},
  [144] = {.lex_state = 53, .external_lex_state = 1},
  [145] = {.lex_state = 53, .external_lex_state = 1},
  [146] = {.lex_state = 60, .external_lex_state = 2},
  [147] = {.lex_state = 64, .external_lex_state = 2},
  [148] = {.lex_state = 64, .external_lex_state = 2},
  [149] = {.lex_state = 64, .external_lex_state = 2},
  [150] = {.lex_state = 64, .external_lex_state = 2},
  [151] = {.lex_state = 64, .external_lex_state = 2},
  [152] = {.lex_state = 64, .external_lex_state = 2},
  [153] = {.lex_state = 64, .external_lex_state = 2},
  [154] = {.lex_state = 64, .external_lex_state = 2},
  [155] = {.lex_state = 64, .external_lex_state = 2},
  [156] = {.lex_state = 64, .external_lex_state = 2},
  [157] = {.lex_state = 65, .external_lex_state = 2},
  [158] = {.lex_state = 52, .external_lex_state = 1},
  [159] = {.lex_state = 65, .external_lex_state = 2},
  [160] = {.lex_state = 67, .external_lex_state = 2},
  [161] = {.lex_state = 67, .external_lex_state = 2},
  [162] = {.lex_state = 67, .external_lex_state = 2},
  [163] = {.lex_state = 67, .external_lex_state = 2},
  [164] = {.lex_state = 67, .external_lex_state = 2},
  [165] = {.lex_state = 67, .external_lex_state = 2},
  [166] = {.lex_state = 67, .external_lex_state = 2},
  [167] = {.lex_state = 67, .external_lex_state = 2},
  [168] = {.lex_state = 67, .external_lex_state = 2},
  [169] = {.lex_state = 67, .external_lex_state = 2},
  [170] = {.lex_state = 59, .external_lex_state = 2},
  [171] = {.lex_state = 69, .external_lex_state = 2},
  [172] = {.lex_state = 46, .external_lex_state = 1},
  [173] = {.lex_state = 53, .external_lex_state = 1},
  [174] = {.lex_state = 68, .external_lex_state = 2},
  [175] = {.lex_state = 68, .external_lex_state = 2},
  [176] = {.lex_state = 68, .external_lex_state = 2},
  [177] = {.lex_state = 68, .external_lex_state = 2},
  [178] = {.lex_state = 68, .external_lex_state = 2},
  [179] = {.lex_state = 68, .external_lex_state = 2},
  [180] = {.lex_state = 68, .external_lex_state = 2},
  [181] = {.lex_state = 68, .external_lex_state = 2},
  [182] = {.lex_state = 68, .external_lex_state = 2},
  [183] = {.lex_state = 72, .external_lex_state = 1},
  [184] = {.lex_state = 64, .external_lex_state = 2},
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
    [anon_sym_return] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_spread] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(3),
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
    [sym_lua] = STATE(9),
    [sym__statement] = STATE(11),
    [sym_do_statement] = STATE(11),
    [sym__empty_statement] = STATE(11),
    [sym__expression] = STATE(10),
    [sym_table] = STATE(4),
    [sym_binary_operation] = STATE(4),
    [sym_unary_operation] = STATE(4),
    [sym_string] = STATE(4),
    [aux_sym_lua_repeat1] = STATE(11),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(13),
    [sym_spread] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_number] = ACTIONS(15),
    [sym_nil] = ACTIONS(27),
    [sym_true] = ACTIONS(27),
    [sym_false] = ACTIONS(27),
    [sym_identifier] = ACTIONS(27),
  },
  [2] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(29),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_do] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(29),
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
  [3] = {
    [sym_return_statement] = STATE(21),
    [sym__statement] = STATE(23),
    [sym_do_statement] = STATE(23),
    [sym__empty_statement] = STATE(23),
    [sym__expression] = STATE(22),
    [sym_table] = STATE(16),
    [sym_binary_operation] = STATE(16),
    [sym_unary_operation] = STATE(16),
    [sym_string] = STATE(16),
    [aux_sym_lua_repeat1] = STATE(23),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [anon_sym_return] = ACTIONS(35),
    [anon_sym_do] = ACTIONS(37),
    [anon_sym_end] = ACTIONS(39),
    [anon_sym_SEMI] = ACTIONS(41),
    [sym_spread] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(49),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [sym_number] = ACTIONS(43),
    [sym_nil] = ACTIONS(55),
    [sym_true] = ACTIONS(55),
    [sym_false] = ACTIONS(55),
    [sym_identifier] = ACTIONS(55),
  },
  [4] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(57),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_do] = ACTIONS(59),
    [anon_sym_SEMI] = ACTIONS(57),
    [sym_spread] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_or] = ACTIONS(59),
    [anon_sym_and] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_LT_EQ] = ACTIONS(57),
    [anon_sym_EQ_EQ] = ACTIONS(57),
    [anon_sym_TILDE_EQ] = ACTIONS(57),
    [anon_sym_GT_EQ] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(57),
    [anon_sym_TILDE] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_LT_LT] = ACTIONS(57),
    [anon_sym_GT_GT] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_SLASH_SLASH] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(57),
    [anon_sym_DOT_DOT] = ACTIONS(59),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_not] = ACTIONS(59),
    [anon_sym_POUND] = ACTIONS(57),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(57),
    [sym_nil] = ACTIONS(59),
    [sym_true] = ACTIONS(59),
    [sym_false] = ACTIONS(59),
    [sym_identifier] = ACTIONS(59),
  },
  [5] = {
    [sym__expression] = STATE(33),
    [sym_table] = STATE(25),
    [sym_field] = STATE(34),
    [sym__field_sequence] = STATE(35),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(81),
  },
  [6] = {
    [sym__expression] = STATE(36),
    [sym_table] = STATE(4),
    [sym_binary_operation] = STATE(4),
    [sym_unary_operation] = STATE(4),
    [sym_string] = STATE(4),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [sym_spread] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_number] = ACTIONS(15),
    [sym_nil] = ACTIONS(27),
    [sym_true] = ACTIONS(27),
    [sym_false] = ACTIONS(27),
    [sym_identifier] = ACTIONS(27),
  },
  [7] = {
    [aux_sym_string_repeat1] = STATE(38),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(85),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(87),
  },
  [8] = {
    [aux_sym_string_repeat2] = STATE(39),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(91),
  },
  [9] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(93),
  },
  [10] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(95),
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_do] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(95),
    [sym_spread] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_or] = ACTIONS(99),
    [anon_sym_and] = ACTIONS(101),
    [anon_sym_LT] = ACTIONS(103),
    [anon_sym_LT_EQ] = ACTIONS(105),
    [anon_sym_EQ_EQ] = ACTIONS(105),
    [anon_sym_TILDE_EQ] = ACTIONS(105),
    [anon_sym_GT_EQ] = ACTIONS(105),
    [anon_sym_GT] = ACTIONS(103),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(111),
    [anon_sym_LT_LT] = ACTIONS(113),
    [anon_sym_GT_GT] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_SLASH_SLASH] = ACTIONS(117),
    [anon_sym_PERCENT] = ACTIONS(117),
    [anon_sym_DOT_DOT] = ACTIONS(121),
    [anon_sym_CARET] = ACTIONS(117),
    [anon_sym_not] = ACTIONS(97),
    [anon_sym_POUND] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_number] = ACTIONS(95),
    [sym_nil] = ACTIONS(97),
    [sym_true] = ACTIONS(97),
    [sym_false] = ACTIONS(97),
    [sym_identifier] = ACTIONS(97),
  },
  [11] = {
    [sym__statement] = STATE(49),
    [sym_do_statement] = STATE(49),
    [sym__empty_statement] = STATE(49),
    [sym__expression] = STATE(10),
    [sym_table] = STATE(4),
    [sym_binary_operation] = STATE(4),
    [sym_unary_operation] = STATE(4),
    [sym_string] = STATE(4),
    [aux_sym_lua_repeat1] = STATE(49),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(125),
    [sym_spread] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_number] = ACTIONS(15),
    [sym_nil] = ACTIONS(27),
    [sym_true] = ACTIONS(27),
    [sym_false] = ACTIONS(27),
    [sym_identifier] = ACTIONS(27),
  },
  [12] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(29),
    [anon_sym_return] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(31),
    [anon_sym_end] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(29),
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
  [13] = {
    [sym__empty_statement] = STATE(51),
    [sym__expression] = STATE(52),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [anon_sym_end] = ACTIONS(127),
    [anon_sym_SEMI] = ACTIONS(129),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_not] = ACTIONS(133),
    [anon_sym_POUND] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [14] = {
    [sym_return_statement] = STATE(54),
    [sym__statement] = STATE(55),
    [sym_do_statement] = STATE(55),
    [sym__empty_statement] = STATE(55),
    [sym__expression] = STATE(22),
    [sym_table] = STATE(16),
    [sym_binary_operation] = STATE(16),
    [sym_unary_operation] = STATE(16),
    [sym_string] = STATE(16),
    [aux_sym_lua_repeat1] = STATE(55),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [anon_sym_return] = ACTIONS(35),
    [anon_sym_do] = ACTIONS(37),
    [anon_sym_end] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(137),
    [sym_spread] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(49),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [sym_number] = ACTIONS(43),
    [sym_nil] = ACTIONS(55),
    [sym_true] = ACTIONS(55),
    [sym_false] = ACTIONS(55),
    [sym_identifier] = ACTIONS(55),
  },
  [15] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(139),
    [ts_builtin_sym_end] = ACTIONS(139),
    [anon_sym_do] = ACTIONS(141),
    [anon_sym_SEMI] = ACTIONS(139),
    [sym_spread] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_not] = ACTIONS(141),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_SQUOTE] = ACTIONS(139),
    [anon_sym_DQUOTE] = ACTIONS(139),
    [sym_number] = ACTIONS(139),
    [sym_nil] = ACTIONS(141),
    [sym_true] = ACTIONS(141),
    [sym_false] = ACTIONS(141),
    [sym_identifier] = ACTIONS(141),
  },
  [16] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(57),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_do] = ACTIONS(59),
    [anon_sym_end] = ACTIONS(59),
    [anon_sym_SEMI] = ACTIONS(57),
    [sym_spread] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_or] = ACTIONS(59),
    [anon_sym_and] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_LT_EQ] = ACTIONS(57),
    [anon_sym_EQ_EQ] = ACTIONS(57),
    [anon_sym_TILDE_EQ] = ACTIONS(57),
    [anon_sym_GT_EQ] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(57),
    [anon_sym_TILDE] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_LT_LT] = ACTIONS(57),
    [anon_sym_GT_GT] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_SLASH_SLASH] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(57),
    [anon_sym_DOT_DOT] = ACTIONS(59),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_not] = ACTIONS(59),
    [anon_sym_POUND] = ACTIONS(57),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(57),
    [sym_nil] = ACTIONS(59),
    [sym_true] = ACTIONS(59),
    [sym_false] = ACTIONS(59),
    [sym_identifier] = ACTIONS(59),
  },
  [17] = {
    [sym__expression] = STATE(33),
    [sym_table] = STATE(25),
    [sym_field] = STATE(34),
    [sym__field_sequence] = STATE(57),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(81),
  },
  [18] = {
    [sym__expression] = STATE(58),
    [sym_table] = STATE(16),
    [sym_binary_operation] = STATE(16),
    [sym_unary_operation] = STATE(16),
    [sym_string] = STATE(16),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(49),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [sym_number] = ACTIONS(43),
    [sym_nil] = ACTIONS(55),
    [sym_true] = ACTIONS(55),
    [sym_false] = ACTIONS(55),
    [sym_identifier] = ACTIONS(55),
  },
  [19] = {
    [aux_sym_string_repeat1] = STATE(60),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(145),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(149),
  },
  [20] = {
    [aux_sym_string_repeat2] = STATE(61),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(153),
  },
  [21] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_end] = ACTIONS(155),
  },
  [22] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(95),
    [anon_sym_return] = ACTIONS(97),
    [anon_sym_do] = ACTIONS(97),
    [anon_sym_end] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(95),
    [sym_spread] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_or] = ACTIONS(157),
    [anon_sym_and] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(161),
    [anon_sym_LT_EQ] = ACTIONS(163),
    [anon_sym_EQ_EQ] = ACTIONS(163),
    [anon_sym_TILDE_EQ] = ACTIONS(163),
    [anon_sym_GT_EQ] = ACTIONS(163),
    [anon_sym_GT] = ACTIONS(161),
    [anon_sym_PIPE] = ACTIONS(165),
    [anon_sym_TILDE] = ACTIONS(167),
    [anon_sym_AMP] = ACTIONS(169),
    [anon_sym_LT_LT] = ACTIONS(171),
    [anon_sym_GT_GT] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(177),
    [anon_sym_SLASH_SLASH] = ACTIONS(175),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_DOT_DOT] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(175),
    [anon_sym_not] = ACTIONS(97),
    [anon_sym_POUND] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_number] = ACTIONS(95),
    [sym_nil] = ACTIONS(97),
    [sym_true] = ACTIONS(97),
    [sym_false] = ACTIONS(97),
    [sym_identifier] = ACTIONS(97),
  },
  [23] = {
    [sym_return_statement] = STATE(72),
    [sym__statement] = STATE(73),
    [sym_do_statement] = STATE(73),
    [sym__empty_statement] = STATE(73),
    [sym__expression] = STATE(22),
    [sym_table] = STATE(16),
    [sym_binary_operation] = STATE(16),
    [sym_unary_operation] = STATE(16),
    [sym_string] = STATE(16),
    [aux_sym_lua_repeat1] = STATE(73),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [anon_sym_return] = ACTIONS(35),
    [anon_sym_do] = ACTIONS(37),
    [anon_sym_end] = ACTIONS(181),
    [anon_sym_SEMI] = ACTIONS(183),
    [sym_spread] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(49),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [sym_number] = ACTIONS(43),
    [sym_nil] = ACTIONS(55),
    [sym_true] = ACTIONS(55),
    [sym_false] = ACTIONS(55),
    [sym_identifier] = ACTIONS(55),
  },
  [24] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(29),
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
  [25] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_end] = ACTIONS(57),
    [anon_sym_SEMI] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_RBRACK] = ACTIONS(57),
    [anon_sym_or] = ACTIONS(57),
    [anon_sym_and] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_LT_EQ] = ACTIONS(57),
    [anon_sym_EQ_EQ] = ACTIONS(57),
    [anon_sym_TILDE_EQ] = ACTIONS(57),
    [anon_sym_GT_EQ] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(57),
    [anon_sym_TILDE] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_LT_LT] = ACTIONS(57),
    [anon_sym_GT_GT] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_SLASH_SLASH] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(57),
    [anon_sym_DOT_DOT] = ACTIONS(57),
    [anon_sym_CARET] = ACTIONS(57),
  },
  [26] = {
    [sym__expression] = STATE(33),
    [sym_table] = STATE(25),
    [sym_field] = STATE(34),
    [sym__field_sequence] = STATE(75),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(81),
  },
  [27] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(187),
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_do] = ACTIONS(189),
    [anon_sym_SEMI] = ACTIONS(187),
    [sym_spread] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_or] = ACTIONS(189),
    [anon_sym_and] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(189),
    [anon_sym_LT_EQ] = ACTIONS(187),
    [anon_sym_EQ_EQ] = ACTIONS(187),
    [anon_sym_TILDE_EQ] = ACTIONS(187),
    [anon_sym_GT_EQ] = ACTIONS(187),
    [anon_sym_GT] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(187),
    [anon_sym_TILDE] = ACTIONS(189),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_LT_LT] = ACTIONS(187),
    [anon_sym_GT_GT] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(189),
    [anon_sym_SLASH_SLASH] = ACTIONS(187),
    [anon_sym_PERCENT] = ACTIONS(187),
    [anon_sym_DOT_DOT] = ACTIONS(189),
    [anon_sym_CARET] = ACTIONS(187),
    [anon_sym_not] = ACTIONS(189),
    [anon_sym_POUND] = ACTIONS(187),
    [anon_sym_SQUOTE] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(187),
    [sym_number] = ACTIONS(187),
    [sym_nil] = ACTIONS(189),
    [sym_true] = ACTIONS(189),
    [sym_false] = ACTIONS(189),
    [sym_identifier] = ACTIONS(189),
  },
  [28] = {
    [sym__expression] = STATE(77),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_not] = ACTIONS(193),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [29] = {
    [sym__expression] = STATE(78),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [30] = {
    [aux_sym_string_repeat1] = STATE(80),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(195),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(197),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(199),
  },
  [31] = {
    [aux_sym_string_repeat2] = STATE(81),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(195),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(203),
  },
  [32] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_SEMI] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(205),
    [anon_sym_or] = ACTIONS(57),
    [anon_sym_and] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_LT_EQ] = ACTIONS(57),
    [anon_sym_EQ_EQ] = ACTIONS(57),
    [anon_sym_TILDE_EQ] = ACTIONS(57),
    [anon_sym_GT_EQ] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(57),
    [anon_sym_TILDE] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_LT_LT] = ACTIONS(57),
    [anon_sym_GT_GT] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_SLASH_SLASH] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(57),
    [anon_sym_DOT_DOT] = ACTIONS(57),
    [anon_sym_CARET] = ACTIONS(57),
  },
  [33] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_SEMI] = ACTIONS(207),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_or] = ACTIONS(209),
    [anon_sym_and] = ACTIONS(211),
    [anon_sym_LT] = ACTIONS(213),
    [anon_sym_LT_EQ] = ACTIONS(215),
    [anon_sym_EQ_EQ] = ACTIONS(215),
    [anon_sym_TILDE_EQ] = ACTIONS(215),
    [anon_sym_GT_EQ] = ACTIONS(215),
    [anon_sym_GT] = ACTIONS(213),
    [anon_sym_PIPE] = ACTIONS(217),
    [anon_sym_TILDE] = ACTIONS(219),
    [anon_sym_AMP] = ACTIONS(221),
    [anon_sym_LT_LT] = ACTIONS(223),
    [anon_sym_GT_GT] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_SLASH_SLASH] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(227),
    [anon_sym_DOT_DOT] = ACTIONS(223),
    [anon_sym_CARET] = ACTIONS(227),
  },
  [34] = {
    [sym__field_sep] = STATE(92),
    [aux_sym__field_sequence_repeat1] = STATE(93),
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(231),
    [anon_sym_SEMI] = ACTIONS(231),
    [anon_sym_RBRACE] = ACTIONS(233),
  },
  [35] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(235),
  },
  [36] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(237),
    [ts_builtin_sym_end] = ACTIONS(237),
    [anon_sym_do] = ACTIONS(239),
    [anon_sym_SEMI] = ACTIONS(237),
    [sym_spread] = ACTIONS(237),
    [anon_sym_LBRACE] = ACTIONS(237),
    [anon_sym_or] = ACTIONS(239),
    [anon_sym_and] = ACTIONS(239),
    [anon_sym_LT] = ACTIONS(239),
    [anon_sym_LT_EQ] = ACTIONS(237),
    [anon_sym_EQ_EQ] = ACTIONS(237),
    [anon_sym_TILDE_EQ] = ACTIONS(237),
    [anon_sym_GT_EQ] = ACTIONS(237),
    [anon_sym_GT] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(237),
    [anon_sym_TILDE] = ACTIONS(239),
    [anon_sym_AMP] = ACTIONS(237),
    [anon_sym_LT_LT] = ACTIONS(237),
    [anon_sym_GT_GT] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(237),
    [anon_sym_DASH] = ACTIONS(237),
    [anon_sym_STAR] = ACTIONS(237),
    [anon_sym_SLASH] = ACTIONS(239),
    [anon_sym_SLASH_SLASH] = ACTIONS(237),
    [anon_sym_PERCENT] = ACTIONS(237),
    [anon_sym_DOT_DOT] = ACTIONS(239),
    [anon_sym_CARET] = ACTIONS(117),
    [anon_sym_not] = ACTIONS(239),
    [anon_sym_POUND] = ACTIONS(237),
    [anon_sym_SQUOTE] = ACTIONS(237),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [sym_number] = ACTIONS(237),
    [sym_nil] = ACTIONS(239),
    [sym_true] = ACTIONS(239),
    [sym_false] = ACTIONS(239),
    [sym_identifier] = ACTIONS(239),
  },
  [37] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(241),
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_do] = ACTIONS(243),
    [anon_sym_SEMI] = ACTIONS(241),
    [sym_spread] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(241),
    [anon_sym_or] = ACTIONS(243),
    [anon_sym_and] = ACTIONS(243),
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(241),
    [anon_sym_EQ_EQ] = ACTIONS(241),
    [anon_sym_TILDE_EQ] = ACTIONS(241),
    [anon_sym_GT_EQ] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(243),
    [anon_sym_AMP] = ACTIONS(241),
    [anon_sym_LT_LT] = ACTIONS(241),
    [anon_sym_GT_GT] = ACTIONS(241),
    [anon_sym_PLUS] = ACTIONS(241),
    [anon_sym_DASH] = ACTIONS(241),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(243),
    [anon_sym_SLASH_SLASH] = ACTIONS(241),
    [anon_sym_PERCENT] = ACTIONS(241),
    [anon_sym_DOT_DOT] = ACTIONS(243),
    [anon_sym_CARET] = ACTIONS(241),
    [anon_sym_not] = ACTIONS(243),
    [anon_sym_POUND] = ACTIONS(241),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [sym_number] = ACTIONS(241),
    [sym_nil] = ACTIONS(243),
    [sym_true] = ACTIONS(243),
    [sym_false] = ACTIONS(243),
    [sym_identifier] = ACTIONS(243),
  },
  [38] = {
    [aux_sym_string_repeat1] = STATE(96),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(245),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(247),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(249),
  },
  [39] = {
    [aux_sym_string_repeat2] = STATE(97),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(251),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(253),
  },
  [40] = {
    [sym__expression] = STATE(98),
    [sym_table] = STATE(4),
    [sym_binary_operation] = STATE(4),
    [sym_unary_operation] = STATE(4),
    [sym_string] = STATE(4),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [sym_spread] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_number] = ACTIONS(15),
    [sym_nil] = ACTIONS(27),
    [sym_true] = ACTIONS(27),
    [sym_false] = ACTIONS(27),
    [sym_identifier] = ACTIONS(27),
  },
  [41] = {
    [sym__expression] = STATE(99),
    [sym_table] = STATE(4),
    [sym_binary_operation] = STATE(4),
    [sym_unary_operation] = STATE(4),
    [sym_string] = STATE(4),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [sym_spread] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_number] = ACTIONS(15),
    [sym_nil] = ACTIONS(27),
    [sym_true] = ACTIONS(27),
    [sym_false] = ACTIONS(27),
    [sym_identifier] = ACTIONS(27),
  },
  [42] = {
    [sym__expression] = STATE(100),
    [sym_table] = STATE(4),
    [sym_binary_operation] = STATE(4),
    [sym_unary_operation] = STATE(4),
    [sym_string] = STATE(4),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [sym_spread] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_number] = ACTIONS(15),
    [sym_nil] = ACTIONS(27),
    [sym_true] = ACTIONS(27),
    [sym_false] = ACTIONS(27),
    [sym_identifier] = ACTIONS(27),
  },
  [43] = {
    [sym__expression] = STATE(101),
    [sym_table] = STATE(4),
    [sym_binary_operation] = STATE(4),
    [sym_unary_operation] = STATE(4),
    [sym_string] = STATE(4),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [sym_spread] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_number] = ACTIONS(15),
    [sym_nil] = ACTIONS(27),
    [sym_true] = ACTIONS(27),
    [sym_false] = ACTIONS(27),
    [sym_identifier] = ACTIONS(27),
  },
  [44] = {
    [sym__expression] = STATE(102),
    [sym_table] = STATE(4),
    [sym_binary_operation] = STATE(4),
    [sym_unary_operation] = STATE(4),
    [sym_string] = STATE(4),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [sym_spread] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_number] = ACTIONS(15),
    [sym_nil] = ACTIONS(27),
    [sym_true] = ACTIONS(27),
    [sym_false] = ACTIONS(27),
    [sym_identifier] = ACTIONS(27),
  },
  [45] = {
    [sym__expression] = STATE(103),
    [sym_table] = STATE(4),
    [sym_binary_operation] = STATE(4),
    [sym_unary_operation] = STATE(4),
    [sym_string] = STATE(4),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [sym_spread] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_number] = ACTIONS(15),
    [sym_nil] = ACTIONS(27),
    [sym_true] = ACTIONS(27),
    [sym_false] = ACTIONS(27),
    [sym_identifier] = ACTIONS(27),
  },
  [46] = {
    [sym__expression] = STATE(104),
    [sym_table] = STATE(4),
    [sym_binary_operation] = STATE(4),
    [sym_unary_operation] = STATE(4),
    [sym_string] = STATE(4),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [sym_spread] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_number] = ACTIONS(15),
    [sym_nil] = ACTIONS(27),
    [sym_true] = ACTIONS(27),
    [sym_false] = ACTIONS(27),
    [sym_identifier] = ACTIONS(27),
  },
  [47] = {
    [sym__expression] = STATE(105),
    [sym_table] = STATE(4),
    [sym_binary_operation] = STATE(4),
    [sym_unary_operation] = STATE(4),
    [sym_string] = STATE(4),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [sym_spread] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_number] = ACTIONS(15),
    [sym_nil] = ACTIONS(27),
    [sym_true] = ACTIONS(27),
    [sym_false] = ACTIONS(27),
    [sym_identifier] = ACTIONS(27),
  },
  [48] = {
    [sym__expression] = STATE(106),
    [sym_table] = STATE(4),
    [sym_binary_operation] = STATE(4),
    [sym_unary_operation] = STATE(4),
    [sym_string] = STATE(4),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [sym_spread] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_number] = ACTIONS(15),
    [sym_nil] = ACTIONS(27),
    [sym_true] = ACTIONS(27),
    [sym_false] = ACTIONS(27),
    [sym_identifier] = ACTIONS(27),
  },
  [49] = {
    [sym__statement] = STATE(49),
    [sym_do_statement] = STATE(49),
    [sym__empty_statement] = STATE(49),
    [sym__expression] = STATE(10),
    [sym_table] = STATE(4),
    [sym_binary_operation] = STATE(4),
    [sym_unary_operation] = STATE(4),
    [sym_string] = STATE(4),
    [aux_sym_lua_repeat1] = STATE(49),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(255),
    [ts_builtin_sym_end] = ACTIONS(258),
    [anon_sym_do] = ACTIONS(260),
    [anon_sym_SEMI] = ACTIONS(263),
    [sym_spread] = ACTIONS(266),
    [anon_sym_LBRACE] = ACTIONS(269),
    [anon_sym_TILDE] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [anon_sym_not] = ACTIONS(275),
    [anon_sym_POUND] = ACTIONS(272),
    [anon_sym_SQUOTE] = ACTIONS(278),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [sym_number] = ACTIONS(266),
    [sym_nil] = ACTIONS(284),
    [sym_true] = ACTIONS(284),
    [sym_false] = ACTIONS(284),
    [sym_identifier] = ACTIONS(284),
  },
  [50] = {
    [sym__expression] = STATE(107),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_not] = ACTIONS(133),
    [anon_sym_POUND] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [51] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_end] = ACTIONS(287),
  },
  [52] = {
    [sym__empty_statement] = STATE(118),
    [aux_sym_return_statement_repeat1] = STATE(119),
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_end] = ACTIONS(287),
    [anon_sym_SEMI] = ACTIONS(291),
    [anon_sym_or] = ACTIONS(293),
    [anon_sym_and] = ACTIONS(295),
    [anon_sym_LT] = ACTIONS(297),
    [anon_sym_LT_EQ] = ACTIONS(299),
    [anon_sym_EQ_EQ] = ACTIONS(299),
    [anon_sym_TILDE_EQ] = ACTIONS(299),
    [anon_sym_GT_EQ] = ACTIONS(299),
    [anon_sym_GT] = ACTIONS(297),
    [anon_sym_PIPE] = ACTIONS(301),
    [anon_sym_TILDE] = ACTIONS(303),
    [anon_sym_AMP] = ACTIONS(305),
    [anon_sym_LT_LT] = ACTIONS(307),
    [anon_sym_GT_GT] = ACTIONS(307),
    [anon_sym_PLUS] = ACTIONS(309),
    [anon_sym_DASH] = ACTIONS(309),
    [anon_sym_STAR] = ACTIONS(311),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_SLASH_SLASH] = ACTIONS(311),
    [anon_sym_PERCENT] = ACTIONS(311),
    [anon_sym_DOT_DOT] = ACTIONS(307),
    [anon_sym_CARET] = ACTIONS(311),
  },
  [53] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(139),
    [anon_sym_return] = ACTIONS(141),
    [anon_sym_do] = ACTIONS(141),
    [anon_sym_end] = ACTIONS(141),
    [anon_sym_SEMI] = ACTIONS(139),
    [sym_spread] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_not] = ACTIONS(141),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_SQUOTE] = ACTIONS(139),
    [anon_sym_DQUOTE] = ACTIONS(139),
    [sym_number] = ACTIONS(139),
    [sym_nil] = ACTIONS(141),
    [sym_true] = ACTIONS(141),
    [sym_false] = ACTIONS(141),
    [sym_identifier] = ACTIONS(141),
  },
  [54] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_end] = ACTIONS(315),
  },
  [55] = {
    [sym_return_statement] = STATE(121),
    [sym__statement] = STATE(73),
    [sym_do_statement] = STATE(73),
    [sym__empty_statement] = STATE(73),
    [sym__expression] = STATE(22),
    [sym_table] = STATE(16),
    [sym_binary_operation] = STATE(16),
    [sym_unary_operation] = STATE(16),
    [sym_string] = STATE(16),
    [aux_sym_lua_repeat1] = STATE(73),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [anon_sym_return] = ACTIONS(35),
    [anon_sym_do] = ACTIONS(37),
    [anon_sym_end] = ACTIONS(317),
    [anon_sym_SEMI] = ACTIONS(183),
    [sym_spread] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(49),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [sym_number] = ACTIONS(43),
    [sym_nil] = ACTIONS(55),
    [sym_true] = ACTIONS(55),
    [sym_false] = ACTIONS(55),
    [sym_identifier] = ACTIONS(55),
  },
  [56] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(187),
    [anon_sym_return] = ACTIONS(189),
    [anon_sym_do] = ACTIONS(189),
    [anon_sym_end] = ACTIONS(189),
    [anon_sym_SEMI] = ACTIONS(187),
    [sym_spread] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_or] = ACTIONS(189),
    [anon_sym_and] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(189),
    [anon_sym_LT_EQ] = ACTIONS(187),
    [anon_sym_EQ_EQ] = ACTIONS(187),
    [anon_sym_TILDE_EQ] = ACTIONS(187),
    [anon_sym_GT_EQ] = ACTIONS(187),
    [anon_sym_GT] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(187),
    [anon_sym_TILDE] = ACTIONS(189),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_LT_LT] = ACTIONS(187),
    [anon_sym_GT_GT] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(189),
    [anon_sym_SLASH_SLASH] = ACTIONS(187),
    [anon_sym_PERCENT] = ACTIONS(187),
    [anon_sym_DOT_DOT] = ACTIONS(189),
    [anon_sym_CARET] = ACTIONS(187),
    [anon_sym_not] = ACTIONS(189),
    [anon_sym_POUND] = ACTIONS(187),
    [anon_sym_SQUOTE] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(187),
    [sym_number] = ACTIONS(187),
    [sym_nil] = ACTIONS(189),
    [sym_true] = ACTIONS(189),
    [sym_false] = ACTIONS(189),
    [sym_identifier] = ACTIONS(189),
  },
  [57] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(319),
  },
  [58] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(237),
    [anon_sym_return] = ACTIONS(239),
    [anon_sym_do] = ACTIONS(239),
    [anon_sym_end] = ACTIONS(239),
    [anon_sym_SEMI] = ACTIONS(237),
    [sym_spread] = ACTIONS(237),
    [anon_sym_LBRACE] = ACTIONS(237),
    [anon_sym_or] = ACTIONS(239),
    [anon_sym_and] = ACTIONS(239),
    [anon_sym_LT] = ACTIONS(239),
    [anon_sym_LT_EQ] = ACTIONS(237),
    [anon_sym_EQ_EQ] = ACTIONS(237),
    [anon_sym_TILDE_EQ] = ACTIONS(237),
    [anon_sym_GT_EQ] = ACTIONS(237),
    [anon_sym_GT] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(237),
    [anon_sym_TILDE] = ACTIONS(239),
    [anon_sym_AMP] = ACTIONS(237),
    [anon_sym_LT_LT] = ACTIONS(237),
    [anon_sym_GT_GT] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(237),
    [anon_sym_DASH] = ACTIONS(237),
    [anon_sym_STAR] = ACTIONS(237),
    [anon_sym_SLASH] = ACTIONS(239),
    [anon_sym_SLASH_SLASH] = ACTIONS(237),
    [anon_sym_PERCENT] = ACTIONS(237),
    [anon_sym_DOT_DOT] = ACTIONS(239),
    [anon_sym_CARET] = ACTIONS(175),
    [anon_sym_not] = ACTIONS(239),
    [anon_sym_POUND] = ACTIONS(237),
    [anon_sym_SQUOTE] = ACTIONS(237),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [sym_number] = ACTIONS(237),
    [sym_nil] = ACTIONS(239),
    [sym_true] = ACTIONS(239),
    [sym_false] = ACTIONS(239),
    [sym_identifier] = ACTIONS(239),
  },
  [59] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(241),
    [anon_sym_return] = ACTIONS(243),
    [anon_sym_do] = ACTIONS(243),
    [anon_sym_end] = ACTIONS(243),
    [anon_sym_SEMI] = ACTIONS(241),
    [sym_spread] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(241),
    [anon_sym_or] = ACTIONS(243),
    [anon_sym_and] = ACTIONS(243),
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(241),
    [anon_sym_EQ_EQ] = ACTIONS(241),
    [anon_sym_TILDE_EQ] = ACTIONS(241),
    [anon_sym_GT_EQ] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(243),
    [anon_sym_AMP] = ACTIONS(241),
    [anon_sym_LT_LT] = ACTIONS(241),
    [anon_sym_GT_GT] = ACTIONS(241),
    [anon_sym_PLUS] = ACTIONS(241),
    [anon_sym_DASH] = ACTIONS(241),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(243),
    [anon_sym_SLASH_SLASH] = ACTIONS(241),
    [anon_sym_PERCENT] = ACTIONS(241),
    [anon_sym_DOT_DOT] = ACTIONS(243),
    [anon_sym_CARET] = ACTIONS(241),
    [anon_sym_not] = ACTIONS(243),
    [anon_sym_POUND] = ACTIONS(241),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [sym_number] = ACTIONS(241),
    [sym_nil] = ACTIONS(243),
    [sym_true] = ACTIONS(243),
    [sym_false] = ACTIONS(243),
    [sym_identifier] = ACTIONS(243),
  },
  [60] = {
    [aux_sym_string_repeat1] = STATE(96),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(321),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(247),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(249),
  },
  [61] = {
    [aux_sym_string_repeat2] = STATE(97),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(251),
    [anon_sym_DQUOTE] = ACTIONS(321),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(253),
  },
  [62] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(323),
    [ts_builtin_sym_end] = ACTIONS(323),
    [anon_sym_do] = ACTIONS(325),
    [anon_sym_SEMI] = ACTIONS(323),
    [sym_spread] = ACTIONS(323),
    [anon_sym_LBRACE] = ACTIONS(323),
    [anon_sym_TILDE] = ACTIONS(323),
    [anon_sym_DASH] = ACTIONS(323),
    [anon_sym_not] = ACTIONS(325),
    [anon_sym_POUND] = ACTIONS(323),
    [anon_sym_SQUOTE] = ACTIONS(323),
    [anon_sym_DQUOTE] = ACTIONS(323),
    [sym_number] = ACTIONS(323),
    [sym_nil] = ACTIONS(325),
    [sym_true] = ACTIONS(325),
    [sym_false] = ACTIONS(325),
    [sym_identifier] = ACTIONS(325),
  },
  [63] = {
    [sym__expression] = STATE(124),
    [sym_table] = STATE(16),
    [sym_binary_operation] = STATE(16),
    [sym_unary_operation] = STATE(16),
    [sym_string] = STATE(16),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(49),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [sym_number] = ACTIONS(43),
    [sym_nil] = ACTIONS(55),
    [sym_true] = ACTIONS(55),
    [sym_false] = ACTIONS(55),
    [sym_identifier] = ACTIONS(55),
  },
  [64] = {
    [sym__expression] = STATE(125),
    [sym_table] = STATE(16),
    [sym_binary_operation] = STATE(16),
    [sym_unary_operation] = STATE(16),
    [sym_string] = STATE(16),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(49),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [sym_number] = ACTIONS(43),
    [sym_nil] = ACTIONS(55),
    [sym_true] = ACTIONS(55),
    [sym_false] = ACTIONS(55),
    [sym_identifier] = ACTIONS(55),
  },
  [65] = {
    [sym__expression] = STATE(126),
    [sym_table] = STATE(16),
    [sym_binary_operation] = STATE(16),
    [sym_unary_operation] = STATE(16),
    [sym_string] = STATE(16),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(49),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [sym_number] = ACTIONS(43),
    [sym_nil] = ACTIONS(55),
    [sym_true] = ACTIONS(55),
    [sym_false] = ACTIONS(55),
    [sym_identifier] = ACTIONS(55),
  },
  [66] = {
    [sym__expression] = STATE(127),
    [sym_table] = STATE(16),
    [sym_binary_operation] = STATE(16),
    [sym_unary_operation] = STATE(16),
    [sym_string] = STATE(16),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(49),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [sym_number] = ACTIONS(43),
    [sym_nil] = ACTIONS(55),
    [sym_true] = ACTIONS(55),
    [sym_false] = ACTIONS(55),
    [sym_identifier] = ACTIONS(55),
  },
  [67] = {
    [sym__expression] = STATE(128),
    [sym_table] = STATE(16),
    [sym_binary_operation] = STATE(16),
    [sym_unary_operation] = STATE(16),
    [sym_string] = STATE(16),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(49),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [sym_number] = ACTIONS(43),
    [sym_nil] = ACTIONS(55),
    [sym_true] = ACTIONS(55),
    [sym_false] = ACTIONS(55),
    [sym_identifier] = ACTIONS(55),
  },
  [68] = {
    [sym__expression] = STATE(129),
    [sym_table] = STATE(16),
    [sym_binary_operation] = STATE(16),
    [sym_unary_operation] = STATE(16),
    [sym_string] = STATE(16),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(49),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [sym_number] = ACTIONS(43),
    [sym_nil] = ACTIONS(55),
    [sym_true] = ACTIONS(55),
    [sym_false] = ACTIONS(55),
    [sym_identifier] = ACTIONS(55),
  },
  [69] = {
    [sym__expression] = STATE(130),
    [sym_table] = STATE(16),
    [sym_binary_operation] = STATE(16),
    [sym_unary_operation] = STATE(16),
    [sym_string] = STATE(16),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(49),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [sym_number] = ACTIONS(43),
    [sym_nil] = ACTIONS(55),
    [sym_true] = ACTIONS(55),
    [sym_false] = ACTIONS(55),
    [sym_identifier] = ACTIONS(55),
  },
  [70] = {
    [sym__expression] = STATE(131),
    [sym_table] = STATE(16),
    [sym_binary_operation] = STATE(16),
    [sym_unary_operation] = STATE(16),
    [sym_string] = STATE(16),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(49),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [sym_number] = ACTIONS(43),
    [sym_nil] = ACTIONS(55),
    [sym_true] = ACTIONS(55),
    [sym_false] = ACTIONS(55),
    [sym_identifier] = ACTIONS(55),
  },
  [71] = {
    [sym__expression] = STATE(132),
    [sym_table] = STATE(16),
    [sym_binary_operation] = STATE(16),
    [sym_unary_operation] = STATE(16),
    [sym_string] = STATE(16),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [sym_spread] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(49),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [sym_number] = ACTIONS(43),
    [sym_nil] = ACTIONS(55),
    [sym_true] = ACTIONS(55),
    [sym_false] = ACTIONS(55),
    [sym_identifier] = ACTIONS(55),
  },
  [72] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_end] = ACTIONS(327),
  },
  [73] = {
    [sym__statement] = STATE(73),
    [sym_do_statement] = STATE(73),
    [sym__empty_statement] = STATE(73),
    [sym__expression] = STATE(22),
    [sym_table] = STATE(16),
    [sym_binary_operation] = STATE(16),
    [sym_unary_operation] = STATE(16),
    [sym_string] = STATE(16),
    [aux_sym_lua_repeat1] = STATE(73),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(329),
    [anon_sym_return] = ACTIONS(332),
    [anon_sym_do] = ACTIONS(334),
    [anon_sym_end] = ACTIONS(332),
    [anon_sym_SEMI] = ACTIONS(337),
    [sym_spread] = ACTIONS(340),
    [anon_sym_LBRACE] = ACTIONS(343),
    [anon_sym_TILDE] = ACTIONS(346),
    [anon_sym_DASH] = ACTIONS(346),
    [anon_sym_not] = ACTIONS(349),
    [anon_sym_POUND] = ACTIONS(346),
    [anon_sym_SQUOTE] = ACTIONS(352),
    [anon_sym_DQUOTE] = ACTIONS(355),
    [sym_number] = ACTIONS(340),
    [sym_nil] = ACTIONS(358),
    [sym_true] = ACTIONS(358),
    [sym_false] = ACTIONS(358),
    [sym_identifier] = ACTIONS(358),
  },
  [74] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(187),
    [anon_sym_end] = ACTIONS(187),
    [anon_sym_SEMI] = ACTIONS(187),
    [anon_sym_RBRACE] = ACTIONS(187),
    [anon_sym_RBRACK] = ACTIONS(187),
    [anon_sym_or] = ACTIONS(187),
    [anon_sym_and] = ACTIONS(187),
    [anon_sym_LT] = ACTIONS(189),
    [anon_sym_LT_EQ] = ACTIONS(187),
    [anon_sym_EQ_EQ] = ACTIONS(187),
    [anon_sym_TILDE_EQ] = ACTIONS(187),
    [anon_sym_GT_EQ] = ACTIONS(187),
    [anon_sym_GT] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(187),
    [anon_sym_TILDE] = ACTIONS(189),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_LT_LT] = ACTIONS(187),
    [anon_sym_GT_GT] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(189),
    [anon_sym_SLASH_SLASH] = ACTIONS(187),
    [anon_sym_PERCENT] = ACTIONS(187),
    [anon_sym_DOT_DOT] = ACTIONS(187),
    [anon_sym_CARET] = ACTIONS(187),
  },
  [75] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(361),
  },
  [76] = {
    [sym__expression] = STATE(135),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_not] = ACTIONS(193),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [77] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(363),
    [anon_sym_or] = ACTIONS(365),
    [anon_sym_and] = ACTIONS(367),
    [anon_sym_LT] = ACTIONS(369),
    [anon_sym_LT_EQ] = ACTIONS(371),
    [anon_sym_EQ_EQ] = ACTIONS(371),
    [anon_sym_TILDE_EQ] = ACTIONS(371),
    [anon_sym_GT_EQ] = ACTIONS(371),
    [anon_sym_GT] = ACTIONS(369),
    [anon_sym_PIPE] = ACTIONS(373),
    [anon_sym_TILDE] = ACTIONS(375),
    [anon_sym_AMP] = ACTIONS(377),
    [anon_sym_LT_LT] = ACTIONS(379),
    [anon_sym_GT_GT] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(385),
    [anon_sym_SLASH_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_DOT_DOT] = ACTIONS(379),
    [anon_sym_CARET] = ACTIONS(383),
  },
  [78] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(237),
    [anon_sym_SEMI] = ACTIONS(237),
    [anon_sym_RBRACE] = ACTIONS(237),
    [anon_sym_or] = ACTIONS(237),
    [anon_sym_and] = ACTIONS(237),
    [anon_sym_LT] = ACTIONS(239),
    [anon_sym_LT_EQ] = ACTIONS(237),
    [anon_sym_EQ_EQ] = ACTIONS(237),
    [anon_sym_TILDE_EQ] = ACTIONS(237),
    [anon_sym_GT_EQ] = ACTIONS(237),
    [anon_sym_GT] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(237),
    [anon_sym_TILDE] = ACTIONS(239),
    [anon_sym_AMP] = ACTIONS(237),
    [anon_sym_LT_LT] = ACTIONS(237),
    [anon_sym_GT_GT] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(237),
    [anon_sym_DASH] = ACTIONS(237),
    [anon_sym_STAR] = ACTIONS(237),
    [anon_sym_SLASH] = ACTIONS(239),
    [anon_sym_SLASH_SLASH] = ACTIONS(237),
    [anon_sym_PERCENT] = ACTIONS(237),
    [anon_sym_DOT_DOT] = ACTIONS(237),
    [anon_sym_CARET] = ACTIONS(227),
  },
  [79] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(241),
    [anon_sym_end] = ACTIONS(241),
    [anon_sym_SEMI] = ACTIONS(241),
    [anon_sym_RBRACE] = ACTIONS(241),
    [anon_sym_RBRACK] = ACTIONS(241),
    [anon_sym_or] = ACTIONS(241),
    [anon_sym_and] = ACTIONS(241),
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(241),
    [anon_sym_EQ_EQ] = ACTIONS(241),
    [anon_sym_TILDE_EQ] = ACTIONS(241),
    [anon_sym_GT_EQ] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(243),
    [anon_sym_AMP] = ACTIONS(241),
    [anon_sym_LT_LT] = ACTIONS(241),
    [anon_sym_GT_GT] = ACTIONS(241),
    [anon_sym_PLUS] = ACTIONS(241),
    [anon_sym_DASH] = ACTIONS(241),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(243),
    [anon_sym_SLASH_SLASH] = ACTIONS(241),
    [anon_sym_PERCENT] = ACTIONS(241),
    [anon_sym_DOT_DOT] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(241),
  },
  [80] = {
    [aux_sym_string_repeat1] = STATE(96),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(387),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(247),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(249),
  },
  [81] = {
    [aux_sym_string_repeat2] = STATE(97),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(251),
    [anon_sym_DQUOTE] = ACTIONS(387),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(253),
  },
  [82] = {
    [sym__expression] = STATE(147),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [83] = {
    [sym__expression] = STATE(148),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [84] = {
    [sym__expression] = STATE(149),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [85] = {
    [sym__expression] = STATE(150),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [86] = {
    [sym__expression] = STATE(151),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [87] = {
    [sym__expression] = STATE(152),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [88] = {
    [sym__expression] = STATE(153),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [89] = {
    [sym__expression] = STATE(154),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [90] = {
    [sym__expression] = STATE(155),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [91] = {
    [sym__expression] = STATE(156),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [92] = {
    [sym__expression] = STATE(33),
    [sym_table] = STATE(25),
    [sym_field] = STATE(157),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(81),
  },
  [93] = {
    [sym__field_sep] = STATE(158),
    [aux_sym__field_sequence_repeat1] = STATE(159),
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(391),
    [anon_sym_SEMI] = ACTIONS(391),
    [anon_sym_RBRACE] = ACTIONS(389),
  },
  [94] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(393),
    [ts_builtin_sym_end] = ACTIONS(393),
    [anon_sym_do] = ACTIONS(395),
    [anon_sym_SEMI] = ACTIONS(393),
    [sym_spread] = ACTIONS(393),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_or] = ACTIONS(395),
    [anon_sym_and] = ACTIONS(395),
    [anon_sym_LT] = ACTIONS(395),
    [anon_sym_LT_EQ] = ACTIONS(393),
    [anon_sym_EQ_EQ] = ACTIONS(393),
    [anon_sym_TILDE_EQ] = ACTIONS(393),
    [anon_sym_GT_EQ] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(393),
    [anon_sym_TILDE] = ACTIONS(395),
    [anon_sym_AMP] = ACTIONS(393),
    [anon_sym_LT_LT] = ACTIONS(393),
    [anon_sym_GT_GT] = ACTIONS(393),
    [anon_sym_PLUS] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(393),
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_SLASH_SLASH] = ACTIONS(393),
    [anon_sym_PERCENT] = ACTIONS(393),
    [anon_sym_DOT_DOT] = ACTIONS(395),
    [anon_sym_CARET] = ACTIONS(393),
    [anon_sym_not] = ACTIONS(395),
    [anon_sym_POUND] = ACTIONS(393),
    [anon_sym_SQUOTE] = ACTIONS(393),
    [anon_sym_DQUOTE] = ACTIONS(393),
    [sym_number] = ACTIONS(393),
    [sym_nil] = ACTIONS(395),
    [sym_true] = ACTIONS(395),
    [sym_false] = ACTIONS(395),
    [sym_identifier] = ACTIONS(395),
  },
  [95] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(397),
    [ts_builtin_sym_end] = ACTIONS(397),
    [anon_sym_do] = ACTIONS(399),
    [anon_sym_SEMI] = ACTIONS(397),
    [sym_spread] = ACTIONS(397),
    [anon_sym_LBRACE] = ACTIONS(397),
    [anon_sym_or] = ACTIONS(399),
    [anon_sym_and] = ACTIONS(399),
    [anon_sym_LT] = ACTIONS(399),
    [anon_sym_LT_EQ] = ACTIONS(397),
    [anon_sym_EQ_EQ] = ACTIONS(397),
    [anon_sym_TILDE_EQ] = ACTIONS(397),
    [anon_sym_GT_EQ] = ACTIONS(397),
    [anon_sym_GT] = ACTIONS(399),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_TILDE] = ACTIONS(399),
    [anon_sym_AMP] = ACTIONS(397),
    [anon_sym_LT_LT] = ACTIONS(397),
    [anon_sym_GT_GT] = ACTIONS(397),
    [anon_sym_PLUS] = ACTIONS(397),
    [anon_sym_DASH] = ACTIONS(397),
    [anon_sym_STAR] = ACTIONS(397),
    [anon_sym_SLASH] = ACTIONS(399),
    [anon_sym_SLASH_SLASH] = ACTIONS(397),
    [anon_sym_PERCENT] = ACTIONS(397),
    [anon_sym_DOT_DOT] = ACTIONS(399),
    [anon_sym_CARET] = ACTIONS(397),
    [anon_sym_not] = ACTIONS(399),
    [anon_sym_POUND] = ACTIONS(397),
    [anon_sym_SQUOTE] = ACTIONS(397),
    [anon_sym_DQUOTE] = ACTIONS(397),
    [sym_number] = ACTIONS(397),
    [sym_nil] = ACTIONS(399),
    [sym_true] = ACTIONS(399),
    [sym_false] = ACTIONS(399),
    [sym_identifier] = ACTIONS(399),
  },
  [96] = {
    [aux_sym_string_repeat1] = STATE(96),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(401),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(403),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(406),
  },
  [97] = {
    [aux_sym_string_repeat2] = STATE(97),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(409),
    [anon_sym_DQUOTE] = ACTIONS(412),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(414),
  },
  [98] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(417),
    [ts_builtin_sym_end] = ACTIONS(417),
    [anon_sym_do] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(417),
    [sym_spread] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(419),
    [anon_sym_and] = ACTIONS(101),
    [anon_sym_LT] = ACTIONS(103),
    [anon_sym_LT_EQ] = ACTIONS(105),
    [anon_sym_EQ_EQ] = ACTIONS(105),
    [anon_sym_TILDE_EQ] = ACTIONS(105),
    [anon_sym_GT_EQ] = ACTIONS(105),
    [anon_sym_GT] = ACTIONS(103),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(111),
    [anon_sym_LT_LT] = ACTIONS(113),
    [anon_sym_GT_GT] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_SLASH_SLASH] = ACTIONS(117),
    [anon_sym_PERCENT] = ACTIONS(117),
    [anon_sym_DOT_DOT] = ACTIONS(121),
    [anon_sym_CARET] = ACTIONS(117),
    [anon_sym_not] = ACTIONS(419),
    [anon_sym_POUND] = ACTIONS(417),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [sym_number] = ACTIONS(417),
    [sym_nil] = ACTIONS(419),
    [sym_true] = ACTIONS(419),
    [sym_false] = ACTIONS(419),
    [sym_identifier] = ACTIONS(419),
  },
  [99] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(417),
    [ts_builtin_sym_end] = ACTIONS(417),
    [anon_sym_do] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(417),
    [sym_spread] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(419),
    [anon_sym_and] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(103),
    [anon_sym_LT_EQ] = ACTIONS(105),
    [anon_sym_EQ_EQ] = ACTIONS(105),
    [anon_sym_TILDE_EQ] = ACTIONS(105),
    [anon_sym_GT_EQ] = ACTIONS(105),
    [anon_sym_GT] = ACTIONS(103),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(111),
    [anon_sym_LT_LT] = ACTIONS(113),
    [anon_sym_GT_GT] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_SLASH_SLASH] = ACTIONS(117),
    [anon_sym_PERCENT] = ACTIONS(117),
    [anon_sym_DOT_DOT] = ACTIONS(121),
    [anon_sym_CARET] = ACTIONS(117),
    [anon_sym_not] = ACTIONS(419),
    [anon_sym_POUND] = ACTIONS(417),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [sym_number] = ACTIONS(417),
    [sym_nil] = ACTIONS(419),
    [sym_true] = ACTIONS(419),
    [sym_false] = ACTIONS(419),
    [sym_identifier] = ACTIONS(419),
  },
  [100] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(417),
    [ts_builtin_sym_end] = ACTIONS(417),
    [anon_sym_do] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(417),
    [sym_spread] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(419),
    [anon_sym_and] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(111),
    [anon_sym_LT_LT] = ACTIONS(113),
    [anon_sym_GT_GT] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_SLASH_SLASH] = ACTIONS(117),
    [anon_sym_PERCENT] = ACTIONS(117),
    [anon_sym_DOT_DOT] = ACTIONS(121),
    [anon_sym_CARET] = ACTIONS(117),
    [anon_sym_not] = ACTIONS(419),
    [anon_sym_POUND] = ACTIONS(417),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [sym_number] = ACTIONS(417),
    [sym_nil] = ACTIONS(419),
    [sym_true] = ACTIONS(419),
    [sym_false] = ACTIONS(419),
    [sym_identifier] = ACTIONS(419),
  },
  [101] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(417),
    [ts_builtin_sym_end] = ACTIONS(417),
    [anon_sym_do] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(417),
    [sym_spread] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(419),
    [anon_sym_and] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(111),
    [anon_sym_LT_LT] = ACTIONS(113),
    [anon_sym_GT_GT] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_SLASH_SLASH] = ACTIONS(117),
    [anon_sym_PERCENT] = ACTIONS(117),
    [anon_sym_DOT_DOT] = ACTIONS(121),
    [anon_sym_CARET] = ACTIONS(117),
    [anon_sym_not] = ACTIONS(419),
    [anon_sym_POUND] = ACTIONS(417),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [sym_number] = ACTIONS(417),
    [sym_nil] = ACTIONS(419),
    [sym_true] = ACTIONS(419),
    [sym_false] = ACTIONS(419),
    [sym_identifier] = ACTIONS(419),
  },
  [102] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(417),
    [ts_builtin_sym_end] = ACTIONS(417),
    [anon_sym_do] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(417),
    [sym_spread] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(419),
    [anon_sym_and] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(111),
    [anon_sym_LT_LT] = ACTIONS(113),
    [anon_sym_GT_GT] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_SLASH_SLASH] = ACTIONS(117),
    [anon_sym_PERCENT] = ACTIONS(117),
    [anon_sym_DOT_DOT] = ACTIONS(121),
    [anon_sym_CARET] = ACTIONS(117),
    [anon_sym_not] = ACTIONS(419),
    [anon_sym_POUND] = ACTIONS(417),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [sym_number] = ACTIONS(417),
    [sym_nil] = ACTIONS(419),
    [sym_true] = ACTIONS(419),
    [sym_false] = ACTIONS(419),
    [sym_identifier] = ACTIONS(419),
  },
  [103] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(417),
    [ts_builtin_sym_end] = ACTIONS(417),
    [anon_sym_do] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(417),
    [sym_spread] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(419),
    [anon_sym_and] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(113),
    [anon_sym_GT_GT] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_SLASH_SLASH] = ACTIONS(117),
    [anon_sym_PERCENT] = ACTIONS(117),
    [anon_sym_DOT_DOT] = ACTIONS(121),
    [anon_sym_CARET] = ACTIONS(117),
    [anon_sym_not] = ACTIONS(419),
    [anon_sym_POUND] = ACTIONS(417),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [sym_number] = ACTIONS(417),
    [sym_nil] = ACTIONS(419),
    [sym_true] = ACTIONS(419),
    [sym_false] = ACTIONS(419),
    [sym_identifier] = ACTIONS(419),
  },
  [104] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(417),
    [ts_builtin_sym_end] = ACTIONS(417),
    [anon_sym_do] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(417),
    [sym_spread] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(419),
    [anon_sym_and] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(417),
    [anon_sym_GT_GT] = ACTIONS(417),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_SLASH_SLASH] = ACTIONS(117),
    [anon_sym_PERCENT] = ACTIONS(117),
    [anon_sym_DOT_DOT] = ACTIONS(121),
    [anon_sym_CARET] = ACTIONS(117),
    [anon_sym_not] = ACTIONS(419),
    [anon_sym_POUND] = ACTIONS(417),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [sym_number] = ACTIONS(417),
    [sym_nil] = ACTIONS(419),
    [sym_true] = ACTIONS(419),
    [sym_false] = ACTIONS(419),
    [sym_identifier] = ACTIONS(419),
  },
  [105] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(417),
    [ts_builtin_sym_end] = ACTIONS(417),
    [anon_sym_do] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(417),
    [sym_spread] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(419),
    [anon_sym_and] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(417),
    [anon_sym_GT_GT] = ACTIONS(417),
    [anon_sym_PLUS] = ACTIONS(417),
    [anon_sym_DASH] = ACTIONS(417),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_SLASH_SLASH] = ACTIONS(117),
    [anon_sym_PERCENT] = ACTIONS(117),
    [anon_sym_DOT_DOT] = ACTIONS(419),
    [anon_sym_CARET] = ACTIONS(117),
    [anon_sym_not] = ACTIONS(419),
    [anon_sym_POUND] = ACTIONS(417),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [sym_number] = ACTIONS(417),
    [sym_nil] = ACTIONS(419),
    [sym_true] = ACTIONS(419),
    [sym_false] = ACTIONS(419),
    [sym_identifier] = ACTIONS(419),
  },
  [106] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(417),
    [ts_builtin_sym_end] = ACTIONS(417),
    [anon_sym_do] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(417),
    [sym_spread] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(419),
    [anon_sym_and] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(417),
    [anon_sym_GT_GT] = ACTIONS(417),
    [anon_sym_PLUS] = ACTIONS(417),
    [anon_sym_DASH] = ACTIONS(417),
    [anon_sym_STAR] = ACTIONS(417),
    [anon_sym_SLASH] = ACTIONS(419),
    [anon_sym_SLASH_SLASH] = ACTIONS(417),
    [anon_sym_PERCENT] = ACTIONS(417),
    [anon_sym_DOT_DOT] = ACTIONS(419),
    [anon_sym_CARET] = ACTIONS(117),
    [anon_sym_not] = ACTIONS(419),
    [anon_sym_POUND] = ACTIONS(417),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [sym_number] = ACTIONS(417),
    [sym_nil] = ACTIONS(419),
    [sym_true] = ACTIONS(419),
    [sym_false] = ACTIONS(419),
    [sym_identifier] = ACTIONS(419),
  },
  [107] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(237),
    [anon_sym_end] = ACTIONS(237),
    [anon_sym_SEMI] = ACTIONS(237),
    [anon_sym_or] = ACTIONS(237),
    [anon_sym_and] = ACTIONS(237),
    [anon_sym_LT] = ACTIONS(239),
    [anon_sym_LT_EQ] = ACTIONS(237),
    [anon_sym_EQ_EQ] = ACTIONS(237),
    [anon_sym_TILDE_EQ] = ACTIONS(237),
    [anon_sym_GT_EQ] = ACTIONS(237),
    [anon_sym_GT] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(237),
    [anon_sym_TILDE] = ACTIONS(239),
    [anon_sym_AMP] = ACTIONS(237),
    [anon_sym_LT_LT] = ACTIONS(237),
    [anon_sym_GT_GT] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(237),
    [anon_sym_DASH] = ACTIONS(237),
    [anon_sym_STAR] = ACTIONS(237),
    [anon_sym_SLASH] = ACTIONS(239),
    [anon_sym_SLASH_SLASH] = ACTIONS(237),
    [anon_sym_PERCENT] = ACTIONS(237),
    [anon_sym_DOT_DOT] = ACTIONS(237),
    [anon_sym_CARET] = ACTIONS(311),
  },
  [108] = {
    [sym__expression] = STATE(160),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_not] = ACTIONS(133),
    [anon_sym_POUND] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [109] = {
    [sym__expression] = STATE(161),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_not] = ACTIONS(133),
    [anon_sym_POUND] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [110] = {
    [sym__expression] = STATE(162),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_not] = ACTIONS(133),
    [anon_sym_POUND] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [111] = {
    [sym__expression] = STATE(163),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_not] = ACTIONS(133),
    [anon_sym_POUND] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [112] = {
    [sym__expression] = STATE(164),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_not] = ACTIONS(133),
    [anon_sym_POUND] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [113] = {
    [sym__expression] = STATE(165),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_not] = ACTIONS(133),
    [anon_sym_POUND] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [114] = {
    [sym__expression] = STATE(166),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_not] = ACTIONS(133),
    [anon_sym_POUND] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [115] = {
    [sym__expression] = STATE(167),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_not] = ACTIONS(133),
    [anon_sym_POUND] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [116] = {
    [sym__expression] = STATE(168),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_not] = ACTIONS(133),
    [anon_sym_POUND] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [117] = {
    [sym__expression] = STATE(169),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_not] = ACTIONS(133),
    [anon_sym_POUND] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [118] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_end] = ACTIONS(421),
  },
  [119] = {
    [sym__empty_statement] = STATE(170),
    [aux_sym_return_statement_repeat1] = STATE(171),
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_end] = ACTIONS(421),
    [anon_sym_SEMI] = ACTIONS(423),
  },
  [120] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(323),
    [anon_sym_return] = ACTIONS(325),
    [anon_sym_do] = ACTIONS(325),
    [anon_sym_end] = ACTIONS(325),
    [anon_sym_SEMI] = ACTIONS(323),
    [sym_spread] = ACTIONS(323),
    [anon_sym_LBRACE] = ACTIONS(323),
    [anon_sym_TILDE] = ACTIONS(323),
    [anon_sym_DASH] = ACTIONS(323),
    [anon_sym_not] = ACTIONS(325),
    [anon_sym_POUND] = ACTIONS(323),
    [anon_sym_SQUOTE] = ACTIONS(323),
    [anon_sym_DQUOTE] = ACTIONS(323),
    [sym_number] = ACTIONS(323),
    [sym_nil] = ACTIONS(325),
    [sym_true] = ACTIONS(325),
    [sym_false] = ACTIONS(325),
    [sym_identifier] = ACTIONS(325),
  },
  [121] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_end] = ACTIONS(425),
  },
  [122] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(393),
    [anon_sym_return] = ACTIONS(395),
    [anon_sym_do] = ACTIONS(395),
    [anon_sym_end] = ACTIONS(395),
    [anon_sym_SEMI] = ACTIONS(393),
    [sym_spread] = ACTIONS(393),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_or] = ACTIONS(395),
    [anon_sym_and] = ACTIONS(395),
    [anon_sym_LT] = ACTIONS(395),
    [anon_sym_LT_EQ] = ACTIONS(393),
    [anon_sym_EQ_EQ] = ACTIONS(393),
    [anon_sym_TILDE_EQ] = ACTIONS(393),
    [anon_sym_GT_EQ] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(393),
    [anon_sym_TILDE] = ACTIONS(395),
    [anon_sym_AMP] = ACTIONS(393),
    [anon_sym_LT_LT] = ACTIONS(393),
    [anon_sym_GT_GT] = ACTIONS(393),
    [anon_sym_PLUS] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(393),
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_SLASH_SLASH] = ACTIONS(393),
    [anon_sym_PERCENT] = ACTIONS(393),
    [anon_sym_DOT_DOT] = ACTIONS(395),
    [anon_sym_CARET] = ACTIONS(393),
    [anon_sym_not] = ACTIONS(395),
    [anon_sym_POUND] = ACTIONS(393),
    [anon_sym_SQUOTE] = ACTIONS(393),
    [anon_sym_DQUOTE] = ACTIONS(393),
    [sym_number] = ACTIONS(393),
    [sym_nil] = ACTIONS(395),
    [sym_true] = ACTIONS(395),
    [sym_false] = ACTIONS(395),
    [sym_identifier] = ACTIONS(395),
  },
  [123] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(397),
    [anon_sym_return] = ACTIONS(399),
    [anon_sym_do] = ACTIONS(399),
    [anon_sym_end] = ACTIONS(399),
    [anon_sym_SEMI] = ACTIONS(397),
    [sym_spread] = ACTIONS(397),
    [anon_sym_LBRACE] = ACTIONS(397),
    [anon_sym_or] = ACTIONS(399),
    [anon_sym_and] = ACTIONS(399),
    [anon_sym_LT] = ACTIONS(399),
    [anon_sym_LT_EQ] = ACTIONS(397),
    [anon_sym_EQ_EQ] = ACTIONS(397),
    [anon_sym_TILDE_EQ] = ACTIONS(397),
    [anon_sym_GT_EQ] = ACTIONS(397),
    [anon_sym_GT] = ACTIONS(399),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_TILDE] = ACTIONS(399),
    [anon_sym_AMP] = ACTIONS(397),
    [anon_sym_LT_LT] = ACTIONS(397),
    [anon_sym_GT_GT] = ACTIONS(397),
    [anon_sym_PLUS] = ACTIONS(397),
    [anon_sym_DASH] = ACTIONS(397),
    [anon_sym_STAR] = ACTIONS(397),
    [anon_sym_SLASH] = ACTIONS(399),
    [anon_sym_SLASH_SLASH] = ACTIONS(397),
    [anon_sym_PERCENT] = ACTIONS(397),
    [anon_sym_DOT_DOT] = ACTIONS(399),
    [anon_sym_CARET] = ACTIONS(397),
    [anon_sym_not] = ACTIONS(399),
    [anon_sym_POUND] = ACTIONS(397),
    [anon_sym_SQUOTE] = ACTIONS(397),
    [anon_sym_DQUOTE] = ACTIONS(397),
    [sym_number] = ACTIONS(397),
    [sym_nil] = ACTIONS(399),
    [sym_true] = ACTIONS(399),
    [sym_false] = ACTIONS(399),
    [sym_identifier] = ACTIONS(399),
  },
  [124] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(417),
    [anon_sym_return] = ACTIONS(419),
    [anon_sym_do] = ACTIONS(419),
    [anon_sym_end] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(417),
    [sym_spread] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(419),
    [anon_sym_and] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(161),
    [anon_sym_LT_EQ] = ACTIONS(163),
    [anon_sym_EQ_EQ] = ACTIONS(163),
    [anon_sym_TILDE_EQ] = ACTIONS(163),
    [anon_sym_GT_EQ] = ACTIONS(163),
    [anon_sym_GT] = ACTIONS(161),
    [anon_sym_PIPE] = ACTIONS(165),
    [anon_sym_TILDE] = ACTIONS(167),
    [anon_sym_AMP] = ACTIONS(169),
    [anon_sym_LT_LT] = ACTIONS(171),
    [anon_sym_GT_GT] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(177),
    [anon_sym_SLASH_SLASH] = ACTIONS(175),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_DOT_DOT] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(175),
    [anon_sym_not] = ACTIONS(419),
    [anon_sym_POUND] = ACTIONS(417),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [sym_number] = ACTIONS(417),
    [sym_nil] = ACTIONS(419),
    [sym_true] = ACTIONS(419),
    [sym_false] = ACTIONS(419),
    [sym_identifier] = ACTIONS(419),
  },
  [125] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(417),
    [anon_sym_return] = ACTIONS(419),
    [anon_sym_do] = ACTIONS(419),
    [anon_sym_end] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(417),
    [sym_spread] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(419),
    [anon_sym_and] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(161),
    [anon_sym_LT_EQ] = ACTIONS(163),
    [anon_sym_EQ_EQ] = ACTIONS(163),
    [anon_sym_TILDE_EQ] = ACTIONS(163),
    [anon_sym_GT_EQ] = ACTIONS(163),
    [anon_sym_GT] = ACTIONS(161),
    [anon_sym_PIPE] = ACTIONS(165),
    [anon_sym_TILDE] = ACTIONS(167),
    [anon_sym_AMP] = ACTIONS(169),
    [anon_sym_LT_LT] = ACTIONS(171),
    [anon_sym_GT_GT] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(177),
    [anon_sym_SLASH_SLASH] = ACTIONS(175),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_DOT_DOT] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(175),
    [anon_sym_not] = ACTIONS(419),
    [anon_sym_POUND] = ACTIONS(417),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [sym_number] = ACTIONS(417),
    [sym_nil] = ACTIONS(419),
    [sym_true] = ACTIONS(419),
    [sym_false] = ACTIONS(419),
    [sym_identifier] = ACTIONS(419),
  },
  [126] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(417),
    [anon_sym_return] = ACTIONS(419),
    [anon_sym_do] = ACTIONS(419),
    [anon_sym_end] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(417),
    [sym_spread] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(419),
    [anon_sym_and] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(165),
    [anon_sym_TILDE] = ACTIONS(167),
    [anon_sym_AMP] = ACTIONS(169),
    [anon_sym_LT_LT] = ACTIONS(171),
    [anon_sym_GT_GT] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(177),
    [anon_sym_SLASH_SLASH] = ACTIONS(175),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_DOT_DOT] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(175),
    [anon_sym_not] = ACTIONS(419),
    [anon_sym_POUND] = ACTIONS(417),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [sym_number] = ACTIONS(417),
    [sym_nil] = ACTIONS(419),
    [sym_true] = ACTIONS(419),
    [sym_false] = ACTIONS(419),
    [sym_identifier] = ACTIONS(419),
  },
  [127] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(417),
    [anon_sym_return] = ACTIONS(419),
    [anon_sym_do] = ACTIONS(419),
    [anon_sym_end] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(417),
    [sym_spread] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(419),
    [anon_sym_and] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(167),
    [anon_sym_AMP] = ACTIONS(169),
    [anon_sym_LT_LT] = ACTIONS(171),
    [anon_sym_GT_GT] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(177),
    [anon_sym_SLASH_SLASH] = ACTIONS(175),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_DOT_DOT] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(175),
    [anon_sym_not] = ACTIONS(419),
    [anon_sym_POUND] = ACTIONS(417),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [sym_number] = ACTIONS(417),
    [sym_nil] = ACTIONS(419),
    [sym_true] = ACTIONS(419),
    [sym_false] = ACTIONS(419),
    [sym_identifier] = ACTIONS(419),
  },
  [128] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(417),
    [anon_sym_return] = ACTIONS(419),
    [anon_sym_do] = ACTIONS(419),
    [anon_sym_end] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(417),
    [sym_spread] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(419),
    [anon_sym_and] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(169),
    [anon_sym_LT_LT] = ACTIONS(171),
    [anon_sym_GT_GT] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(177),
    [anon_sym_SLASH_SLASH] = ACTIONS(175),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_DOT_DOT] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(175),
    [anon_sym_not] = ACTIONS(419),
    [anon_sym_POUND] = ACTIONS(417),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [sym_number] = ACTIONS(417),
    [sym_nil] = ACTIONS(419),
    [sym_true] = ACTIONS(419),
    [sym_false] = ACTIONS(419),
    [sym_identifier] = ACTIONS(419),
  },
  [129] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(417),
    [anon_sym_return] = ACTIONS(419),
    [anon_sym_do] = ACTIONS(419),
    [anon_sym_end] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(417),
    [sym_spread] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(419),
    [anon_sym_and] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(171),
    [anon_sym_GT_GT] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(177),
    [anon_sym_SLASH_SLASH] = ACTIONS(175),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_DOT_DOT] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(175),
    [anon_sym_not] = ACTIONS(419),
    [anon_sym_POUND] = ACTIONS(417),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [sym_number] = ACTIONS(417),
    [sym_nil] = ACTIONS(419),
    [sym_true] = ACTIONS(419),
    [sym_false] = ACTIONS(419),
    [sym_identifier] = ACTIONS(419),
  },
  [130] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(417),
    [anon_sym_return] = ACTIONS(419),
    [anon_sym_do] = ACTIONS(419),
    [anon_sym_end] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(417),
    [sym_spread] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(419),
    [anon_sym_and] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(417),
    [anon_sym_GT_GT] = ACTIONS(417),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(177),
    [anon_sym_SLASH_SLASH] = ACTIONS(175),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_DOT_DOT] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(175),
    [anon_sym_not] = ACTIONS(419),
    [anon_sym_POUND] = ACTIONS(417),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [sym_number] = ACTIONS(417),
    [sym_nil] = ACTIONS(419),
    [sym_true] = ACTIONS(419),
    [sym_false] = ACTIONS(419),
    [sym_identifier] = ACTIONS(419),
  },
  [131] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(417),
    [anon_sym_return] = ACTIONS(419),
    [anon_sym_do] = ACTIONS(419),
    [anon_sym_end] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(417),
    [sym_spread] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(419),
    [anon_sym_and] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(417),
    [anon_sym_GT_GT] = ACTIONS(417),
    [anon_sym_PLUS] = ACTIONS(417),
    [anon_sym_DASH] = ACTIONS(417),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(177),
    [anon_sym_SLASH_SLASH] = ACTIONS(175),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_DOT_DOT] = ACTIONS(419),
    [anon_sym_CARET] = ACTIONS(175),
    [anon_sym_not] = ACTIONS(419),
    [anon_sym_POUND] = ACTIONS(417),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [sym_number] = ACTIONS(417),
    [sym_nil] = ACTIONS(419),
    [sym_true] = ACTIONS(419),
    [sym_false] = ACTIONS(419),
    [sym_identifier] = ACTIONS(419),
  },
  [132] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(417),
    [anon_sym_return] = ACTIONS(419),
    [anon_sym_do] = ACTIONS(419),
    [anon_sym_end] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(417),
    [sym_spread] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(419),
    [anon_sym_and] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(417),
    [anon_sym_GT_GT] = ACTIONS(417),
    [anon_sym_PLUS] = ACTIONS(417),
    [anon_sym_DASH] = ACTIONS(417),
    [anon_sym_STAR] = ACTIONS(417),
    [anon_sym_SLASH] = ACTIONS(419),
    [anon_sym_SLASH_SLASH] = ACTIONS(417),
    [anon_sym_PERCENT] = ACTIONS(417),
    [anon_sym_DOT_DOT] = ACTIONS(419),
    [anon_sym_CARET] = ACTIONS(175),
    [anon_sym_not] = ACTIONS(419),
    [anon_sym_POUND] = ACTIONS(417),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [sym_number] = ACTIONS(417),
    [sym_nil] = ACTIONS(419),
    [sym_true] = ACTIONS(419),
    [sym_false] = ACTIONS(419),
    [sym_identifier] = ACTIONS(419),
  },
  [133] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(427),
    [ts_builtin_sym_end] = ACTIONS(427),
    [anon_sym_do] = ACTIONS(429),
    [anon_sym_SEMI] = ACTIONS(427),
    [sym_spread] = ACTIONS(427),
    [anon_sym_LBRACE] = ACTIONS(427),
    [anon_sym_TILDE] = ACTIONS(427),
    [anon_sym_DASH] = ACTIONS(427),
    [anon_sym_not] = ACTIONS(429),
    [anon_sym_POUND] = ACTIONS(427),
    [anon_sym_SQUOTE] = ACTIONS(427),
    [anon_sym_DQUOTE] = ACTIONS(427),
    [sym_number] = ACTIONS(427),
    [sym_nil] = ACTIONS(429),
    [sym_true] = ACTIONS(429),
    [sym_false] = ACTIONS(429),
    [sym_identifier] = ACTIONS(429),
  },
  [134] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(393),
    [anon_sym_end] = ACTIONS(393),
    [anon_sym_SEMI] = ACTIONS(393),
    [anon_sym_RBRACE] = ACTIONS(393),
    [anon_sym_RBRACK] = ACTIONS(393),
    [anon_sym_or] = ACTIONS(393),
    [anon_sym_and] = ACTIONS(393),
    [anon_sym_LT] = ACTIONS(395),
    [anon_sym_LT_EQ] = ACTIONS(393),
    [anon_sym_EQ_EQ] = ACTIONS(393),
    [anon_sym_TILDE_EQ] = ACTIONS(393),
    [anon_sym_GT_EQ] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(393),
    [anon_sym_TILDE] = ACTIONS(395),
    [anon_sym_AMP] = ACTIONS(393),
    [anon_sym_LT_LT] = ACTIONS(393),
    [anon_sym_GT_GT] = ACTIONS(393),
    [anon_sym_PLUS] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(393),
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_SLASH_SLASH] = ACTIONS(393),
    [anon_sym_PERCENT] = ACTIONS(393),
    [anon_sym_DOT_DOT] = ACTIONS(393),
    [anon_sym_CARET] = ACTIONS(393),
  },
  [135] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(237),
    [anon_sym_or] = ACTIONS(237),
    [anon_sym_and] = ACTIONS(237),
    [anon_sym_LT] = ACTIONS(239),
    [anon_sym_LT_EQ] = ACTIONS(237),
    [anon_sym_EQ_EQ] = ACTIONS(237),
    [anon_sym_TILDE_EQ] = ACTIONS(237),
    [anon_sym_GT_EQ] = ACTIONS(237),
    [anon_sym_GT] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(237),
    [anon_sym_TILDE] = ACTIONS(239),
    [anon_sym_AMP] = ACTIONS(237),
    [anon_sym_LT_LT] = ACTIONS(237),
    [anon_sym_GT_GT] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(237),
    [anon_sym_DASH] = ACTIONS(237),
    [anon_sym_STAR] = ACTIONS(237),
    [anon_sym_SLASH] = ACTIONS(239),
    [anon_sym_SLASH_SLASH] = ACTIONS(237),
    [anon_sym_PERCENT] = ACTIONS(237),
    [anon_sym_DOT_DOT] = ACTIONS(237),
    [anon_sym_CARET] = ACTIONS(383),
  },
  [136] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(431),
  },
  [137] = {
    [sym__expression] = STATE(174),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_not] = ACTIONS(193),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [138] = {
    [sym__expression] = STATE(175),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_not] = ACTIONS(193),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [139] = {
    [sym__expression] = STATE(176),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_not] = ACTIONS(193),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [140] = {
    [sym__expression] = STATE(177),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_not] = ACTIONS(193),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [141] = {
    [sym__expression] = STATE(178),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_not] = ACTIONS(193),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [142] = {
    [sym__expression] = STATE(179),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_not] = ACTIONS(193),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [143] = {
    [sym__expression] = STATE(180),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_not] = ACTIONS(193),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [144] = {
    [sym__expression] = STATE(181),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_not] = ACTIONS(193),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [145] = {
    [sym__expression] = STATE(182),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_not] = ACTIONS(193),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [146] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(397),
    [anon_sym_end] = ACTIONS(397),
    [anon_sym_SEMI] = ACTIONS(397),
    [anon_sym_RBRACE] = ACTIONS(397),
    [anon_sym_RBRACK] = ACTIONS(397),
    [anon_sym_or] = ACTIONS(397),
    [anon_sym_and] = ACTIONS(397),
    [anon_sym_LT] = ACTIONS(399),
    [anon_sym_LT_EQ] = ACTIONS(397),
    [anon_sym_EQ_EQ] = ACTIONS(397),
    [anon_sym_TILDE_EQ] = ACTIONS(397),
    [anon_sym_GT_EQ] = ACTIONS(397),
    [anon_sym_GT] = ACTIONS(399),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_TILDE] = ACTIONS(399),
    [anon_sym_AMP] = ACTIONS(397),
    [anon_sym_LT_LT] = ACTIONS(397),
    [anon_sym_GT_GT] = ACTIONS(397),
    [anon_sym_PLUS] = ACTIONS(397),
    [anon_sym_DASH] = ACTIONS(397),
    [anon_sym_STAR] = ACTIONS(397),
    [anon_sym_SLASH] = ACTIONS(399),
    [anon_sym_SLASH_SLASH] = ACTIONS(397),
    [anon_sym_PERCENT] = ACTIONS(397),
    [anon_sym_DOT_DOT] = ACTIONS(397),
    [anon_sym_CARET] = ACTIONS(397),
  },
  [147] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(433),
    [anon_sym_SEMI] = ACTIONS(433),
    [anon_sym_RBRACE] = ACTIONS(433),
    [anon_sym_or] = ACTIONS(209),
    [anon_sym_and] = ACTIONS(211),
    [anon_sym_LT] = ACTIONS(213),
    [anon_sym_LT_EQ] = ACTIONS(215),
    [anon_sym_EQ_EQ] = ACTIONS(215),
    [anon_sym_TILDE_EQ] = ACTIONS(215),
    [anon_sym_GT_EQ] = ACTIONS(215),
    [anon_sym_GT] = ACTIONS(213),
    [anon_sym_PIPE] = ACTIONS(217),
    [anon_sym_TILDE] = ACTIONS(219),
    [anon_sym_AMP] = ACTIONS(221),
    [anon_sym_LT_LT] = ACTIONS(223),
    [anon_sym_GT_GT] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_SLASH_SLASH] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(227),
    [anon_sym_DOT_DOT] = ACTIONS(223),
    [anon_sym_CARET] = ACTIONS(227),
  },
  [148] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_RBRACE] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(417),
    [anon_sym_and] = ACTIONS(211),
    [anon_sym_LT] = ACTIONS(213),
    [anon_sym_LT_EQ] = ACTIONS(215),
    [anon_sym_EQ_EQ] = ACTIONS(215),
    [anon_sym_TILDE_EQ] = ACTIONS(215),
    [anon_sym_GT_EQ] = ACTIONS(215),
    [anon_sym_GT] = ACTIONS(213),
    [anon_sym_PIPE] = ACTIONS(217),
    [anon_sym_TILDE] = ACTIONS(219),
    [anon_sym_AMP] = ACTIONS(221),
    [anon_sym_LT_LT] = ACTIONS(223),
    [anon_sym_GT_GT] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_SLASH_SLASH] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(227),
    [anon_sym_DOT_DOT] = ACTIONS(223),
    [anon_sym_CARET] = ACTIONS(227),
  },
  [149] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_RBRACE] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(417),
    [anon_sym_and] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(213),
    [anon_sym_LT_EQ] = ACTIONS(215),
    [anon_sym_EQ_EQ] = ACTIONS(215),
    [anon_sym_TILDE_EQ] = ACTIONS(215),
    [anon_sym_GT_EQ] = ACTIONS(215),
    [anon_sym_GT] = ACTIONS(213),
    [anon_sym_PIPE] = ACTIONS(217),
    [anon_sym_TILDE] = ACTIONS(219),
    [anon_sym_AMP] = ACTIONS(221),
    [anon_sym_LT_LT] = ACTIONS(223),
    [anon_sym_GT_GT] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_SLASH_SLASH] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(227),
    [anon_sym_DOT_DOT] = ACTIONS(223),
    [anon_sym_CARET] = ACTIONS(227),
  },
  [150] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_RBRACE] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(417),
    [anon_sym_and] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(217),
    [anon_sym_TILDE] = ACTIONS(219),
    [anon_sym_AMP] = ACTIONS(221),
    [anon_sym_LT_LT] = ACTIONS(223),
    [anon_sym_GT_GT] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_SLASH_SLASH] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(227),
    [anon_sym_DOT_DOT] = ACTIONS(223),
    [anon_sym_CARET] = ACTIONS(227),
  },
  [151] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_RBRACE] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(417),
    [anon_sym_and] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(219),
    [anon_sym_AMP] = ACTIONS(221),
    [anon_sym_LT_LT] = ACTIONS(223),
    [anon_sym_GT_GT] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_SLASH_SLASH] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(227),
    [anon_sym_DOT_DOT] = ACTIONS(223),
    [anon_sym_CARET] = ACTIONS(227),
  },
  [152] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_RBRACE] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(417),
    [anon_sym_and] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(221),
    [anon_sym_LT_LT] = ACTIONS(223),
    [anon_sym_GT_GT] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_SLASH_SLASH] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(227),
    [anon_sym_DOT_DOT] = ACTIONS(223),
    [anon_sym_CARET] = ACTIONS(227),
  },
  [153] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_RBRACE] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(417),
    [anon_sym_and] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(223),
    [anon_sym_GT_GT] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_SLASH_SLASH] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(227),
    [anon_sym_DOT_DOT] = ACTIONS(223),
    [anon_sym_CARET] = ACTIONS(227),
  },
  [154] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_RBRACE] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(417),
    [anon_sym_and] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(417),
    [anon_sym_GT_GT] = ACTIONS(417),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_SLASH_SLASH] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(227),
    [anon_sym_DOT_DOT] = ACTIONS(223),
    [anon_sym_CARET] = ACTIONS(227),
  },
  [155] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_RBRACE] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(417),
    [anon_sym_and] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(417),
    [anon_sym_GT_GT] = ACTIONS(417),
    [anon_sym_PLUS] = ACTIONS(417),
    [anon_sym_DASH] = ACTIONS(417),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_SLASH_SLASH] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(227),
    [anon_sym_DOT_DOT] = ACTIONS(417),
    [anon_sym_CARET] = ACTIONS(227),
  },
  [156] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_RBRACE] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(417),
    [anon_sym_and] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(417),
    [anon_sym_GT_GT] = ACTIONS(417),
    [anon_sym_PLUS] = ACTIONS(417),
    [anon_sym_DASH] = ACTIONS(417),
    [anon_sym_STAR] = ACTIONS(417),
    [anon_sym_SLASH] = ACTIONS(419),
    [anon_sym_SLASH_SLASH] = ACTIONS(417),
    [anon_sym_PERCENT] = ACTIONS(417),
    [anon_sym_DOT_DOT] = ACTIONS(417),
    [anon_sym_CARET] = ACTIONS(227),
  },
  [157] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(435),
    [anon_sym_SEMI] = ACTIONS(435),
    [anon_sym_RBRACE] = ACTIONS(435),
  },
  [158] = {
    [sym__expression] = STATE(33),
    [sym_table] = STATE(25),
    [sym_field] = STATE(157),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(437),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(81),
  },
  [159] = {
    [sym__field_sep] = STATE(183),
    [aux_sym__field_sequence_repeat1] = STATE(159),
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(439),
    [anon_sym_SEMI] = ACTIONS(439),
    [anon_sym_RBRACE] = ACTIONS(435),
  },
  [160] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(442),
    [anon_sym_end] = ACTIONS(442),
    [anon_sym_SEMI] = ACTIONS(442),
    [anon_sym_or] = ACTIONS(293),
    [anon_sym_and] = ACTIONS(295),
    [anon_sym_LT] = ACTIONS(297),
    [anon_sym_LT_EQ] = ACTIONS(299),
    [anon_sym_EQ_EQ] = ACTIONS(299),
    [anon_sym_TILDE_EQ] = ACTIONS(299),
    [anon_sym_GT_EQ] = ACTIONS(299),
    [anon_sym_GT] = ACTIONS(297),
    [anon_sym_PIPE] = ACTIONS(301),
    [anon_sym_TILDE] = ACTIONS(303),
    [anon_sym_AMP] = ACTIONS(305),
    [anon_sym_LT_LT] = ACTIONS(307),
    [anon_sym_GT_GT] = ACTIONS(307),
    [anon_sym_PLUS] = ACTIONS(309),
    [anon_sym_DASH] = ACTIONS(309),
    [anon_sym_STAR] = ACTIONS(311),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_SLASH_SLASH] = ACTIONS(311),
    [anon_sym_PERCENT] = ACTIONS(311),
    [anon_sym_DOT_DOT] = ACTIONS(307),
    [anon_sym_CARET] = ACTIONS(311),
  },
  [161] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_end] = ACTIONS(417),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(417),
    [anon_sym_and] = ACTIONS(295),
    [anon_sym_LT] = ACTIONS(297),
    [anon_sym_LT_EQ] = ACTIONS(299),
    [anon_sym_EQ_EQ] = ACTIONS(299),
    [anon_sym_TILDE_EQ] = ACTIONS(299),
    [anon_sym_GT_EQ] = ACTIONS(299),
    [anon_sym_GT] = ACTIONS(297),
    [anon_sym_PIPE] = ACTIONS(301),
    [anon_sym_TILDE] = ACTIONS(303),
    [anon_sym_AMP] = ACTIONS(305),
    [anon_sym_LT_LT] = ACTIONS(307),
    [anon_sym_GT_GT] = ACTIONS(307),
    [anon_sym_PLUS] = ACTIONS(309),
    [anon_sym_DASH] = ACTIONS(309),
    [anon_sym_STAR] = ACTIONS(311),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_SLASH_SLASH] = ACTIONS(311),
    [anon_sym_PERCENT] = ACTIONS(311),
    [anon_sym_DOT_DOT] = ACTIONS(307),
    [anon_sym_CARET] = ACTIONS(311),
  },
  [162] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_end] = ACTIONS(417),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(417),
    [anon_sym_and] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(297),
    [anon_sym_LT_EQ] = ACTIONS(299),
    [anon_sym_EQ_EQ] = ACTIONS(299),
    [anon_sym_TILDE_EQ] = ACTIONS(299),
    [anon_sym_GT_EQ] = ACTIONS(299),
    [anon_sym_GT] = ACTIONS(297),
    [anon_sym_PIPE] = ACTIONS(301),
    [anon_sym_TILDE] = ACTIONS(303),
    [anon_sym_AMP] = ACTIONS(305),
    [anon_sym_LT_LT] = ACTIONS(307),
    [anon_sym_GT_GT] = ACTIONS(307),
    [anon_sym_PLUS] = ACTIONS(309),
    [anon_sym_DASH] = ACTIONS(309),
    [anon_sym_STAR] = ACTIONS(311),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_SLASH_SLASH] = ACTIONS(311),
    [anon_sym_PERCENT] = ACTIONS(311),
    [anon_sym_DOT_DOT] = ACTIONS(307),
    [anon_sym_CARET] = ACTIONS(311),
  },
  [163] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_end] = ACTIONS(417),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(417),
    [anon_sym_and] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(301),
    [anon_sym_TILDE] = ACTIONS(303),
    [anon_sym_AMP] = ACTIONS(305),
    [anon_sym_LT_LT] = ACTIONS(307),
    [anon_sym_GT_GT] = ACTIONS(307),
    [anon_sym_PLUS] = ACTIONS(309),
    [anon_sym_DASH] = ACTIONS(309),
    [anon_sym_STAR] = ACTIONS(311),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_SLASH_SLASH] = ACTIONS(311),
    [anon_sym_PERCENT] = ACTIONS(311),
    [anon_sym_DOT_DOT] = ACTIONS(307),
    [anon_sym_CARET] = ACTIONS(311),
  },
  [164] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_end] = ACTIONS(417),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(417),
    [anon_sym_and] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(303),
    [anon_sym_AMP] = ACTIONS(305),
    [anon_sym_LT_LT] = ACTIONS(307),
    [anon_sym_GT_GT] = ACTIONS(307),
    [anon_sym_PLUS] = ACTIONS(309),
    [anon_sym_DASH] = ACTIONS(309),
    [anon_sym_STAR] = ACTIONS(311),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_SLASH_SLASH] = ACTIONS(311),
    [anon_sym_PERCENT] = ACTIONS(311),
    [anon_sym_DOT_DOT] = ACTIONS(307),
    [anon_sym_CARET] = ACTIONS(311),
  },
  [165] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_end] = ACTIONS(417),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(417),
    [anon_sym_and] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(305),
    [anon_sym_LT_LT] = ACTIONS(307),
    [anon_sym_GT_GT] = ACTIONS(307),
    [anon_sym_PLUS] = ACTIONS(309),
    [anon_sym_DASH] = ACTIONS(309),
    [anon_sym_STAR] = ACTIONS(311),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_SLASH_SLASH] = ACTIONS(311),
    [anon_sym_PERCENT] = ACTIONS(311),
    [anon_sym_DOT_DOT] = ACTIONS(307),
    [anon_sym_CARET] = ACTIONS(311),
  },
  [166] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_end] = ACTIONS(417),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(417),
    [anon_sym_and] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(307),
    [anon_sym_GT_GT] = ACTIONS(307),
    [anon_sym_PLUS] = ACTIONS(309),
    [anon_sym_DASH] = ACTIONS(309),
    [anon_sym_STAR] = ACTIONS(311),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_SLASH_SLASH] = ACTIONS(311),
    [anon_sym_PERCENT] = ACTIONS(311),
    [anon_sym_DOT_DOT] = ACTIONS(307),
    [anon_sym_CARET] = ACTIONS(311),
  },
  [167] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_end] = ACTIONS(417),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(417),
    [anon_sym_and] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(417),
    [anon_sym_GT_GT] = ACTIONS(417),
    [anon_sym_PLUS] = ACTIONS(309),
    [anon_sym_DASH] = ACTIONS(309),
    [anon_sym_STAR] = ACTIONS(311),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_SLASH_SLASH] = ACTIONS(311),
    [anon_sym_PERCENT] = ACTIONS(311),
    [anon_sym_DOT_DOT] = ACTIONS(307),
    [anon_sym_CARET] = ACTIONS(311),
  },
  [168] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_end] = ACTIONS(417),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(417),
    [anon_sym_and] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(417),
    [anon_sym_GT_GT] = ACTIONS(417),
    [anon_sym_PLUS] = ACTIONS(417),
    [anon_sym_DASH] = ACTIONS(417),
    [anon_sym_STAR] = ACTIONS(311),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_SLASH_SLASH] = ACTIONS(311),
    [anon_sym_PERCENT] = ACTIONS(311),
    [anon_sym_DOT_DOT] = ACTIONS(417),
    [anon_sym_CARET] = ACTIONS(311),
  },
  [169] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_end] = ACTIONS(417),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(417),
    [anon_sym_and] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(417),
    [anon_sym_GT_GT] = ACTIONS(417),
    [anon_sym_PLUS] = ACTIONS(417),
    [anon_sym_DASH] = ACTIONS(417),
    [anon_sym_STAR] = ACTIONS(417),
    [anon_sym_SLASH] = ACTIONS(419),
    [anon_sym_SLASH_SLASH] = ACTIONS(417),
    [anon_sym_PERCENT] = ACTIONS(417),
    [anon_sym_DOT_DOT] = ACTIONS(417),
    [anon_sym_CARET] = ACTIONS(311),
  },
  [170] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_end] = ACTIONS(444),
  },
  [171] = {
    [aux_sym_return_statement_repeat1] = STATE(171),
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(446),
    [anon_sym_end] = ACTIONS(442),
    [anon_sym_SEMI] = ACTIONS(442),
  },
  [172] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(427),
    [anon_sym_return] = ACTIONS(429),
    [anon_sym_do] = ACTIONS(429),
    [anon_sym_end] = ACTIONS(429),
    [anon_sym_SEMI] = ACTIONS(427),
    [sym_spread] = ACTIONS(427),
    [anon_sym_LBRACE] = ACTIONS(427),
    [anon_sym_TILDE] = ACTIONS(427),
    [anon_sym_DASH] = ACTIONS(427),
    [anon_sym_not] = ACTIONS(429),
    [anon_sym_POUND] = ACTIONS(427),
    [anon_sym_SQUOTE] = ACTIONS(427),
    [anon_sym_DQUOTE] = ACTIONS(427),
    [sym_number] = ACTIONS(427),
    [sym_nil] = ACTIONS(429),
    [sym_true] = ACTIONS(429),
    [sym_false] = ACTIONS(429),
    [sym_identifier] = ACTIONS(429),
  },
  [173] = {
    [sym__expression] = STATE(184),
    [sym_table] = STATE(25),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [174] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(417),
    [anon_sym_and] = ACTIONS(367),
    [anon_sym_LT] = ACTIONS(369),
    [anon_sym_LT_EQ] = ACTIONS(371),
    [anon_sym_EQ_EQ] = ACTIONS(371),
    [anon_sym_TILDE_EQ] = ACTIONS(371),
    [anon_sym_GT_EQ] = ACTIONS(371),
    [anon_sym_GT] = ACTIONS(369),
    [anon_sym_PIPE] = ACTIONS(373),
    [anon_sym_TILDE] = ACTIONS(375),
    [anon_sym_AMP] = ACTIONS(377),
    [anon_sym_LT_LT] = ACTIONS(379),
    [anon_sym_GT_GT] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(385),
    [anon_sym_SLASH_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_DOT_DOT] = ACTIONS(379),
    [anon_sym_CARET] = ACTIONS(383),
  },
  [175] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(417),
    [anon_sym_and] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(369),
    [anon_sym_LT_EQ] = ACTIONS(371),
    [anon_sym_EQ_EQ] = ACTIONS(371),
    [anon_sym_TILDE_EQ] = ACTIONS(371),
    [anon_sym_GT_EQ] = ACTIONS(371),
    [anon_sym_GT] = ACTIONS(369),
    [anon_sym_PIPE] = ACTIONS(373),
    [anon_sym_TILDE] = ACTIONS(375),
    [anon_sym_AMP] = ACTIONS(377),
    [anon_sym_LT_LT] = ACTIONS(379),
    [anon_sym_GT_GT] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(385),
    [anon_sym_SLASH_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_DOT_DOT] = ACTIONS(379),
    [anon_sym_CARET] = ACTIONS(383),
  },
  [176] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(417),
    [anon_sym_and] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(373),
    [anon_sym_TILDE] = ACTIONS(375),
    [anon_sym_AMP] = ACTIONS(377),
    [anon_sym_LT_LT] = ACTIONS(379),
    [anon_sym_GT_GT] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(385),
    [anon_sym_SLASH_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_DOT_DOT] = ACTIONS(379),
    [anon_sym_CARET] = ACTIONS(383),
  },
  [177] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(417),
    [anon_sym_and] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(375),
    [anon_sym_AMP] = ACTIONS(377),
    [anon_sym_LT_LT] = ACTIONS(379),
    [anon_sym_GT_GT] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(385),
    [anon_sym_SLASH_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_DOT_DOT] = ACTIONS(379),
    [anon_sym_CARET] = ACTIONS(383),
  },
  [178] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(417),
    [anon_sym_and] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(377),
    [anon_sym_LT_LT] = ACTIONS(379),
    [anon_sym_GT_GT] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(385),
    [anon_sym_SLASH_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_DOT_DOT] = ACTIONS(379),
    [anon_sym_CARET] = ACTIONS(383),
  },
  [179] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(417),
    [anon_sym_and] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(379),
    [anon_sym_GT_GT] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(385),
    [anon_sym_SLASH_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_DOT_DOT] = ACTIONS(379),
    [anon_sym_CARET] = ACTIONS(383),
  },
  [180] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(417),
    [anon_sym_and] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(417),
    [anon_sym_GT_GT] = ACTIONS(417),
    [anon_sym_PLUS] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(385),
    [anon_sym_SLASH_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_DOT_DOT] = ACTIONS(379),
    [anon_sym_CARET] = ACTIONS(383),
  },
  [181] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(417),
    [anon_sym_and] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(417),
    [anon_sym_GT_GT] = ACTIONS(417),
    [anon_sym_PLUS] = ACTIONS(417),
    [anon_sym_DASH] = ACTIONS(417),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(385),
    [anon_sym_SLASH_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_DOT_DOT] = ACTIONS(417),
    [anon_sym_CARET] = ACTIONS(383),
  },
  [182] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(417),
    [anon_sym_and] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_TILDE_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(417),
    [anon_sym_GT_GT] = ACTIONS(417),
    [anon_sym_PLUS] = ACTIONS(417),
    [anon_sym_DASH] = ACTIONS(417),
    [anon_sym_STAR] = ACTIONS(417),
    [anon_sym_SLASH] = ACTIONS(419),
    [anon_sym_SLASH_SLASH] = ACTIONS(417),
    [anon_sym_PERCENT] = ACTIONS(417),
    [anon_sym_DOT_DOT] = ACTIONS(417),
    [anon_sym_CARET] = ACTIONS(383),
  },
  [183] = {
    [sym__expression] = STATE(33),
    [sym_table] = STATE(25),
    [sym_field] = STATE(157),
    [sym_binary_operation] = STATE(25),
    [sym_unary_operation] = STATE(25),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(61),
    [sym_spread] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(63),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(81),
  },
  [184] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(449),
    [anon_sym_SEMI] = ACTIONS(449),
    [anon_sym_RBRACE] = ACTIONS(449),
    [anon_sym_or] = ACTIONS(209),
    [anon_sym_and] = ACTIONS(211),
    [anon_sym_LT] = ACTIONS(213),
    [anon_sym_LT_EQ] = ACTIONS(215),
    [anon_sym_EQ_EQ] = ACTIONS(215),
    [anon_sym_TILDE_EQ] = ACTIONS(215),
    [anon_sym_GT_EQ] = ACTIONS(215),
    [anon_sym_GT] = ACTIONS(213),
    [anon_sym_PIPE] = ACTIONS(217),
    [anon_sym_TILDE] = ACTIONS(219),
    [anon_sym_AMP] = ACTIONS(221),
    [anon_sym_LT_LT] = ACTIONS(223),
    [anon_sym_GT_GT] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_SLASH_SLASH] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(227),
    [anon_sym_DOT_DOT] = ACTIONS(223),
    [anon_sym_CARET] = ACTIONS(227),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, REDUCE(sym_lua, 0),
  [11] = {.count = 1, .reusable = false}, SHIFT(3),
  [13] = {.count = 1, .reusable = true}, SHIFT(11),
  [15] = {.count = 1, .reusable = true}, SHIFT(4),
  [17] = {.count = 1, .reusable = true}, SHIFT(5),
  [19] = {.count = 1, .reusable = true}, SHIFT(6),
  [21] = {.count = 1, .reusable = false}, SHIFT(6),
  [23] = {.count = 1, .reusable = true}, SHIFT(7),
  [25] = {.count = 1, .reusable = true}, SHIFT(8),
  [27] = {.count = 1, .reusable = false}, SHIFT(4),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym_string, 1),
  [33] = {.count = 1, .reusable = true}, SHIFT(12),
  [35] = {.count = 1, .reusable = false}, SHIFT(13),
  [37] = {.count = 1, .reusable = false}, SHIFT(14),
  [39] = {.count = 1, .reusable = false}, SHIFT(15),
  [41] = {.count = 1, .reusable = true}, SHIFT(23),
  [43] = {.count = 1, .reusable = true}, SHIFT(16),
  [45] = {.count = 1, .reusable = true}, SHIFT(17),
  [47] = {.count = 1, .reusable = true}, SHIFT(18),
  [49] = {.count = 1, .reusable = false}, SHIFT(18),
  [51] = {.count = 1, .reusable = true}, SHIFT(19),
  [53] = {.count = 1, .reusable = true}, SHIFT(20),
  [55] = {.count = 1, .reusable = false}, SHIFT(16),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 1),
  [61] = {.count = 1, .reusable = true}, SHIFT(24),
  [63] = {.count = 1, .reusable = true}, SHIFT(25),
  [65] = {.count = 1, .reusable = true}, SHIFT(26),
  [67] = {.count = 1, .reusable = true}, SHIFT(27),
  [69] = {.count = 1, .reusable = true}, SHIFT(28),
  [71] = {.count = 1, .reusable = true}, SHIFT(29),
  [73] = {.count = 1, .reusable = false}, SHIFT(29),
  [75] = {.count = 1, .reusable = true}, SHIFT(30),
  [77] = {.count = 1, .reusable = true}, SHIFT(31),
  [79] = {.count = 1, .reusable = false}, SHIFT(25),
  [81] = {.count = 1, .reusable = false}, SHIFT(32),
  [83] = {.count = 1, .reusable = false}, SHIFT(37),
  [85] = {.count = 1, .reusable = true}, SHIFT(38),
  [87] = {.count = 1, .reusable = false}, SHIFT(38),
  [89] = {.count = 1, .reusable = false}, SHIFT(39),
  [91] = {.count = 1, .reusable = true}, SHIFT(39),
  [93] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym__statement, 1, .alias_sequence_id = 1),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym__statement, 1, .alias_sequence_id = 1),
  [99] = {.count = 1, .reusable = false}, SHIFT(40),
  [101] = {.count = 1, .reusable = false}, SHIFT(41),
  [103] = {.count = 1, .reusable = false}, SHIFT(42),
  [105] = {.count = 1, .reusable = true}, SHIFT(42),
  [107] = {.count = 1, .reusable = true}, SHIFT(43),
  [109] = {.count = 1, .reusable = false}, SHIFT(44),
  [111] = {.count = 1, .reusable = true}, SHIFT(45),
  [113] = {.count = 1, .reusable = true}, SHIFT(46),
  [115] = {.count = 1, .reusable = true}, SHIFT(47),
  [117] = {.count = 1, .reusable = true}, SHIFT(48),
  [119] = {.count = 1, .reusable = false}, SHIFT(48),
  [121] = {.count = 1, .reusable = false}, SHIFT(46),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_lua, 1),
  [125] = {.count = 1, .reusable = true}, SHIFT(49),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym_return_statement, 1),
  [129] = {.count = 1, .reusable = true}, SHIFT(51),
  [131] = {.count = 1, .reusable = true}, SHIFT(50),
  [133] = {.count = 1, .reusable = false}, SHIFT(50),
  [135] = {.count = 1, .reusable = false}, SHIFT(53),
  [137] = {.count = 1, .reusable = true}, SHIFT(55),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_do_statement, 2),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym_do_statement, 2),
  [143] = {.count = 1, .reusable = true}, SHIFT(56),
  [145] = {.count = 1, .reusable = false}, SHIFT(59),
  [147] = {.count = 1, .reusable = true}, SHIFT(60),
  [149] = {.count = 1, .reusable = false}, SHIFT(60),
  [151] = {.count = 1, .reusable = false}, SHIFT(61),
  [153] = {.count = 1, .reusable = true}, SHIFT(61),
  [155] = {.count = 1, .reusable = true}, SHIFT(62),
  [157] = {.count = 1, .reusable = false}, SHIFT(63),
  [159] = {.count = 1, .reusable = false}, SHIFT(64),
  [161] = {.count = 1, .reusable = false}, SHIFT(65),
  [163] = {.count = 1, .reusable = true}, SHIFT(65),
  [165] = {.count = 1, .reusable = true}, SHIFT(66),
  [167] = {.count = 1, .reusable = false}, SHIFT(67),
  [169] = {.count = 1, .reusable = true}, SHIFT(68),
  [171] = {.count = 1, .reusable = true}, SHIFT(69),
  [173] = {.count = 1, .reusable = true}, SHIFT(70),
  [175] = {.count = 1, .reusable = true}, SHIFT(71),
  [177] = {.count = 1, .reusable = false}, SHIFT(71),
  [179] = {.count = 1, .reusable = false}, SHIFT(69),
  [181] = {.count = 1, .reusable = false}, SHIFT(62),
  [183] = {.count = 1, .reusable = true}, SHIFT(73),
  [185] = {.count = 1, .reusable = true}, SHIFT(74),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_table, 2),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym_table, 2),
  [191] = {.count = 1, .reusable = true}, SHIFT(76),
  [193] = {.count = 1, .reusable = false}, SHIFT(76),
  [195] = {.count = 1, .reusable = false}, SHIFT(79),
  [197] = {.count = 1, .reusable = true}, SHIFT(80),
  [199] = {.count = 1, .reusable = false}, SHIFT(80),
  [201] = {.count = 1, .reusable = false}, SHIFT(81),
  [203] = {.count = 1, .reusable = true}, SHIFT(81),
  [205] = {.count = 1, .reusable = false}, SHIFT(82),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_field, 1),
  [209] = {.count = 1, .reusable = true}, SHIFT(83),
  [211] = {.count = 1, .reusable = true}, SHIFT(84),
  [213] = {.count = 1, .reusable = false}, SHIFT(85),
  [215] = {.count = 1, .reusable = true}, SHIFT(85),
  [217] = {.count = 1, .reusable = true}, SHIFT(86),
  [219] = {.count = 1, .reusable = false}, SHIFT(87),
  [221] = {.count = 1, .reusable = true}, SHIFT(88),
  [223] = {.count = 1, .reusable = true}, SHIFT(89),
  [225] = {.count = 1, .reusable = true}, SHIFT(90),
  [227] = {.count = 1, .reusable = true}, SHIFT(91),
  [229] = {.count = 1, .reusable = false}, SHIFT(91),
  [231] = {.count = 1, .reusable = true}, SHIFT(92),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym__field_sequence, 1),
  [235] = {.count = 1, .reusable = true}, SHIFT(94),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_unary_operation, 2),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym_unary_operation, 2),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [243] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [245] = {.count = 1, .reusable = false}, SHIFT(95),
  [247] = {.count = 1, .reusable = true}, SHIFT(96),
  [249] = {.count = 1, .reusable = false}, SHIFT(96),
  [251] = {.count = 1, .reusable = false}, SHIFT(97),
  [253] = {.count = 1, .reusable = true}, SHIFT(97),
  [255] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(2),
  [258] = {.count = 1, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2),
  [260] = {.count = 2, .reusable = false}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(3),
  [263] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(49),
  [266] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(4),
  [269] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(5),
  [272] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(6),
  [275] = {.count = 2, .reusable = false}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(6),
  [278] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(7),
  [281] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(8),
  [284] = {.count = 2, .reusable = false}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(4),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_return_statement, 2),
  [289] = {.count = 1, .reusable = true}, SHIFT(108),
  [291] = {.count = 1, .reusable = true}, SHIFT(118),
  [293] = {.count = 1, .reusable = true}, SHIFT(109),
  [295] = {.count = 1, .reusable = true}, SHIFT(110),
  [297] = {.count = 1, .reusable = false}, SHIFT(111),
  [299] = {.count = 1, .reusable = true}, SHIFT(111),
  [301] = {.count = 1, .reusable = true}, SHIFT(112),
  [303] = {.count = 1, .reusable = false}, SHIFT(113),
  [305] = {.count = 1, .reusable = true}, SHIFT(114),
  [307] = {.count = 1, .reusable = true}, SHIFT(115),
  [309] = {.count = 1, .reusable = true}, SHIFT(116),
  [311] = {.count = 1, .reusable = true}, SHIFT(117),
  [313] = {.count = 1, .reusable = false}, SHIFT(117),
  [315] = {.count = 1, .reusable = true}, SHIFT(120),
  [317] = {.count = 1, .reusable = false}, SHIFT(120),
  [319] = {.count = 1, .reusable = true}, SHIFT(122),
  [321] = {.count = 1, .reusable = false}, SHIFT(123),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_do_statement, 3),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym_do_statement, 3),
  [327] = {.count = 1, .reusable = true}, SHIFT(133),
  [329] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(12),
  [332] = {.count = 1, .reusable = false}, REDUCE(aux_sym_lua_repeat1, 2),
  [334] = {.count = 2, .reusable = false}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(14),
  [337] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(73),
  [340] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(16),
  [343] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(17),
  [346] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(18),
  [349] = {.count = 2, .reusable = false}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(18),
  [352] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(19),
  [355] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(20),
  [358] = {.count = 2, .reusable = false}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(16),
  [361] = {.count = 1, .reusable = true}, SHIFT(134),
  [363] = {.count = 1, .reusable = true}, SHIFT(136),
  [365] = {.count = 1, .reusable = true}, SHIFT(137),
  [367] = {.count = 1, .reusable = true}, SHIFT(138),
  [369] = {.count = 1, .reusable = false}, SHIFT(139),
  [371] = {.count = 1, .reusable = true}, SHIFT(139),
  [373] = {.count = 1, .reusable = true}, SHIFT(140),
  [375] = {.count = 1, .reusable = false}, SHIFT(141),
  [377] = {.count = 1, .reusable = true}, SHIFT(142),
  [379] = {.count = 1, .reusable = true}, SHIFT(143),
  [381] = {.count = 1, .reusable = true}, SHIFT(144),
  [383] = {.count = 1, .reusable = true}, SHIFT(145),
  [385] = {.count = 1, .reusable = false}, SHIFT(145),
  [387] = {.count = 1, .reusable = false}, SHIFT(146),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym__field_sequence, 2),
  [391] = {.count = 1, .reusable = true}, SHIFT(158),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_table, 3),
  [395] = {.count = 1, .reusable = false}, REDUCE(sym_table, 3),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [399] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [401] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2),
  [403] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(96),
  [406] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(96),
  [409] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(97),
  [412] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat2, 2),
  [414] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(97),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_binary_operation, 3),
  [419] = {.count = 1, .reusable = false}, REDUCE(sym_binary_operation, 3),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_return_statement, 3),
  [423] = {.count = 1, .reusable = true}, SHIFT(170),
  [425] = {.count = 1, .reusable = true}, SHIFT(172),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_do_statement, 4),
  [429] = {.count = 1, .reusable = false}, REDUCE(sym_do_statement, 4),
  [431] = {.count = 1, .reusable = true}, SHIFT(173),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_field, 3),
  [435] = {.count = 1, .reusable = true}, REDUCE(aux_sym__field_sequence_repeat1, 2),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym__field_sequence, 3),
  [439] = {.count = 2, .reusable = true}, REDUCE(aux_sym__field_sequence_repeat1, 2), SHIFT_REPEAT(183),
  [442] = {.count = 1, .reusable = true}, REDUCE(aux_sym_return_statement_repeat1, 2),
  [444] = {.count = 1, .reusable = true}, REDUCE(sym_return_statement, 4),
  [446] = {.count = 2, .reusable = true}, REDUCE(aux_sym_return_statement_repeat1, 2), SHIFT_REPEAT(108),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_field, 5),
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
