#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 21
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_POUND_SQUOTE = 1,
  anon_sym_SQUOTE = 2,
  anon_sym_BQUOTE = 3,
  anon_sym_COMMA_AT = 4,
  anon_sym_COMMA = 5,
  aux_sym_float_token1 = 6,
  aux_sym_float_token2 = 7,
  aux_sym_float_token3 = 8,
  aux_sym_float_token4 = 9,
  aux_sym_float_token5 = 10,
  aux_sym_integer_token1 = 11,
  aux_sym_integer_token2 = 12,
  sym_char = 13,
  sym_string = 14,
  sym_symbol = 15,
  sym_dot = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  anon_sym_LBRACK = 19,
  anon_sym_RBRACK = 20,
  sym_comment = 21,
  sym_source_file = 22,
  sym__sexp = 23,
  sym_quote = 24,
  sym_unquote = 25,
  sym__atom = 26,
  sym_float = 27,
  sym_integer = 28,
  sym_list = 29,
  sym_vector = 30,
  aux_sym_source_file_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND_SQUOTE] = "#'",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_COMMA_AT] = ",@",
  [anon_sym_COMMA] = ",",
  [aux_sym_float_token1] = "float_token1",
  [aux_sym_float_token2] = "float_token2",
  [aux_sym_float_token3] = "float_token3",
  [aux_sym_float_token4] = "float_token4",
  [aux_sym_float_token5] = "float_token5",
  [aux_sym_integer_token1] = "integer_token1",
  [aux_sym_integer_token2] = "integer_token2",
  [sym_char] = "char",
  [sym_string] = "string",
  [sym_symbol] = "symbol",
  [sym_dot] = "dot",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__sexp] = "_sexp",
  [sym_quote] = "quote",
  [sym_unquote] = "unquote",
  [sym__atom] = "_atom",
  [sym_float] = "float",
  [sym_integer] = "integer",
  [sym_list] = "list",
  [sym_vector] = "vector",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND_SQUOTE] = anon_sym_POUND_SQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_COMMA_AT] = anon_sym_COMMA_AT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [aux_sym_float_token2] = aux_sym_float_token2,
  [aux_sym_float_token3] = aux_sym_float_token3,
  [aux_sym_float_token4] = aux_sym_float_token4,
  [aux_sym_float_token5] = aux_sym_float_token5,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [aux_sym_integer_token2] = aux_sym_integer_token2,
  [sym_char] = sym_char,
  [sym_string] = sym_string,
  [sym_symbol] = sym_symbol,
  [sym_dot] = sym_dot,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__sexp] = sym__sexp,
  [sym_quote] = sym_quote,
  [sym_unquote] = sym_unquote,
  [sym__atom] = sym__atom,
  [sym_float] = sym_float,
  [sym_integer] = sym_integer,
  [sym_list] = sym_list,
  [sym_vector] = sym_vector,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_dot] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__sexp] = {
    .visible = false,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote] = {
    .visible = true,
    .named = true,
  },
  [sym__atom] = {
    .visible = false,
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
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_vector] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == '1') ADVANCE(47);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '?') ADVANCE(71);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('*' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == 'b' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == '+') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 5:
      if (lookahead == '+') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == '+') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'F') ADVANCE(37);
      END_STATE();
    case 10:
      if (lookahead == 'I') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'N') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'N') ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == 'N') ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 18:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 22:
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 23:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(28);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_float_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_float_token4);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_float_token4);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_float_token5);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_float_token5);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == '0') ADVANCE(45);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == '0') ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '0') ADVANCE(30);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '0') ADVANCE(32);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_char);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+') ADVANCE(68);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == '1') ADVANCE(47);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(33);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(34);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(74);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'F') ADVANCE(38);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'I') ADVANCE(69);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N') ADVANCE(72);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N') ADVANCE(66);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N') ADVANCE(40);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_dot);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
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
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_COMMA_AT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_float_token1] = ACTIONS(1),
    [aux_sym_float_token2] = ACTIONS(1),
    [aux_sym_float_token3] = ACTIONS(1),
    [aux_sym_float_token4] = ACTIONS(1),
    [aux_sym_float_token5] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [aux_sym_integer_token2] = ACTIONS(1),
    [sym_char] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(21),
    [sym__sexp] = STATE(7),
    [sym_quote] = STATE(7),
    [sym_unquote] = STATE(7),
    [sym__atom] = STATE(7),
    [sym_float] = STATE(7),
    [sym_integer] = STATE(7),
    [sym_list] = STATE(7),
    [sym_vector] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUND_SQUOTE] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_BQUOTE] = ACTIONS(7),
    [anon_sym_COMMA_AT] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_float_token1] = ACTIONS(13),
    [aux_sym_float_token2] = ACTIONS(13),
    [aux_sym_float_token3] = ACTIONS(15),
    [aux_sym_float_token4] = ACTIONS(13),
    [aux_sym_float_token5] = ACTIONS(13),
    [aux_sym_integer_token1] = ACTIONS(17),
    [aux_sym_integer_token2] = ACTIONS(19),
    [sym_char] = ACTIONS(21),
    [sym_string] = ACTIONS(23),
    [sym_symbol] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__sexp] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_float] = STATE(2),
    [sym_integer] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA_AT] = ACTIONS(34),
    [anon_sym_COMMA] = ACTIONS(37),
    [aux_sym_float_token1] = ACTIONS(40),
    [aux_sym_float_token2] = ACTIONS(40),
    [aux_sym_float_token3] = ACTIONS(43),
    [aux_sym_float_token4] = ACTIONS(40),
    [aux_sym_float_token5] = ACTIONS(40),
    [aux_sym_integer_token1] = ACTIONS(46),
    [aux_sym_integer_token2] = ACTIONS(49),
    [sym_char] = ACTIONS(52),
    [sym_string] = ACTIONS(55),
    [sym_symbol] = ACTIONS(52),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_RBRACK] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__sexp] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_float] = STATE(2),
    [sym_integer] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_POUND_SQUOTE] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_BQUOTE] = ACTIONS(7),
    [anon_sym_COMMA_AT] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_float_token1] = ACTIONS(13),
    [aux_sym_float_token2] = ACTIONS(13),
    [aux_sym_float_token3] = ACTIONS(15),
    [aux_sym_float_token4] = ACTIONS(13),
    [aux_sym_float_token5] = ACTIONS(13),
    [aux_sym_integer_token1] = ACTIONS(17),
    [aux_sym_integer_token2] = ACTIONS(19),
    [sym_char] = ACTIONS(64),
    [sym_string] = ACTIONS(66),
    [sym_symbol] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__sexp] = STATE(20),
    [sym_quote] = STATE(20),
    [sym_unquote] = STATE(20),
    [sym__atom] = STATE(20),
    [sym_float] = STATE(20),
    [sym_integer] = STATE(20),
    [sym_list] = STATE(20),
    [sym_vector] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_POUND_SQUOTE] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_BQUOTE] = ACTIONS(7),
    [anon_sym_COMMA_AT] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_float_token1] = ACTIONS(13),
    [aux_sym_float_token2] = ACTIONS(13),
    [aux_sym_float_token3] = ACTIONS(15),
    [aux_sym_float_token4] = ACTIONS(13),
    [aux_sym_float_token5] = ACTIONS(13),
    [aux_sym_integer_token1] = ACTIONS(17),
    [aux_sym_integer_token2] = ACTIONS(19),
    [sym_char] = ACTIONS(70),
    [sym_string] = ACTIONS(72),
    [sym_symbol] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__sexp] = STATE(6),
    [sym_quote] = STATE(6),
    [sym_unquote] = STATE(6),
    [sym__atom] = STATE(6),
    [sym_float] = STATE(6),
    [sym_integer] = STATE(6),
    [sym_list] = STATE(6),
    [sym_vector] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [anon_sym_POUND_SQUOTE] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_BQUOTE] = ACTIONS(7),
    [anon_sym_COMMA_AT] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_float_token1] = ACTIONS(13),
    [aux_sym_float_token2] = ACTIONS(13),
    [aux_sym_float_token3] = ACTIONS(15),
    [aux_sym_float_token4] = ACTIONS(13),
    [aux_sym_float_token5] = ACTIONS(13),
    [aux_sym_integer_token1] = ACTIONS(17),
    [aux_sym_integer_token2] = ACTIONS(19),
    [sym_char] = ACTIONS(76),
    [sym_string] = ACTIONS(78),
    [sym_symbol] = ACTIONS(76),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(80),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__sexp] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_float] = STATE(2),
    [sym_integer] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_POUND_SQUOTE] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_BQUOTE] = ACTIONS(7),
    [anon_sym_COMMA_AT] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_float_token1] = ACTIONS(13),
    [aux_sym_float_token2] = ACTIONS(13),
    [aux_sym_float_token3] = ACTIONS(15),
    [aux_sym_float_token4] = ACTIONS(13),
    [aux_sym_float_token5] = ACTIONS(13),
    [aux_sym_integer_token1] = ACTIONS(17),
    [aux_sym_integer_token2] = ACTIONS(19),
    [sym_char] = ACTIONS(64),
    [sym_string] = ACTIONS(66),
    [sym_symbol] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(82),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__sexp] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_float] = STATE(2),
    [sym_integer] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(84),
    [anon_sym_POUND_SQUOTE] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_BQUOTE] = ACTIONS(7),
    [anon_sym_COMMA_AT] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_float_token1] = ACTIONS(13),
    [aux_sym_float_token2] = ACTIONS(13),
    [aux_sym_float_token3] = ACTIONS(15),
    [aux_sym_float_token4] = ACTIONS(13),
    [aux_sym_float_token5] = ACTIONS(13),
    [aux_sym_integer_token1] = ACTIONS(17),
    [aux_sym_integer_token2] = ACTIONS(19),
    [sym_char] = ACTIONS(64),
    [sym_string] = ACTIONS(66),
    [sym_symbol] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__sexp] = STATE(11),
    [sym_quote] = STATE(11),
    [sym_unquote] = STATE(11),
    [sym__atom] = STATE(11),
    [sym_float] = STATE(11),
    [sym_integer] = STATE(11),
    [sym_list] = STATE(11),
    [sym_vector] = STATE(11),
    [anon_sym_POUND_SQUOTE] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_BQUOTE] = ACTIONS(7),
    [anon_sym_COMMA_AT] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_float_token1] = ACTIONS(13),
    [aux_sym_float_token2] = ACTIONS(13),
    [aux_sym_float_token3] = ACTIONS(15),
    [aux_sym_float_token4] = ACTIONS(13),
    [aux_sym_float_token5] = ACTIONS(13),
    [aux_sym_integer_token1] = ACTIONS(17),
    [aux_sym_integer_token2] = ACTIONS(19),
    [sym_char] = ACTIONS(86),
    [sym_string] = ACTIONS(88),
    [sym_symbol] = ACTIONS(86),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__sexp] = STATE(13),
    [sym_quote] = STATE(13),
    [sym_unquote] = STATE(13),
    [sym__atom] = STATE(13),
    [sym_float] = STATE(13),
    [sym_integer] = STATE(13),
    [sym_list] = STATE(13),
    [sym_vector] = STATE(13),
    [anon_sym_POUND_SQUOTE] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_BQUOTE] = ACTIONS(7),
    [anon_sym_COMMA_AT] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_float_token1] = ACTIONS(13),
    [aux_sym_float_token2] = ACTIONS(13),
    [aux_sym_float_token3] = ACTIONS(15),
    [aux_sym_float_token4] = ACTIONS(13),
    [aux_sym_float_token5] = ACTIONS(13),
    [aux_sym_integer_token1] = ACTIONS(17),
    [aux_sym_integer_token2] = ACTIONS(19),
    [sym_char] = ACTIONS(90),
    [sym_string] = ACTIONS(92),
    [sym_symbol] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__sexp] = STATE(22),
    [sym_quote] = STATE(22),
    [sym_unquote] = STATE(22),
    [sym__atom] = STATE(22),
    [sym_float] = STATE(22),
    [sym_integer] = STATE(22),
    [sym_list] = STATE(22),
    [sym_vector] = STATE(22),
    [anon_sym_POUND_SQUOTE] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_BQUOTE] = ACTIONS(7),
    [anon_sym_COMMA_AT] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_float_token1] = ACTIONS(13),
    [aux_sym_float_token2] = ACTIONS(13),
    [aux_sym_float_token3] = ACTIONS(15),
    [aux_sym_float_token4] = ACTIONS(13),
    [aux_sym_float_token5] = ACTIONS(13),
    [aux_sym_integer_token1] = ACTIONS(17),
    [aux_sym_integer_token2] = ACTIONS(19),
    [sym_char] = ACTIONS(94),
    [sym_string] = ACTIONS(96),
    [sym_symbol] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [anon_sym_POUND_SQUOTE] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(98),
    [anon_sym_BQUOTE] = ACTIONS(98),
    [anon_sym_COMMA_AT] = ACTIONS(98),
    [anon_sym_COMMA] = ACTIONS(100),
    [aux_sym_float_token1] = ACTIONS(100),
    [aux_sym_float_token2] = ACTIONS(100),
    [aux_sym_float_token3] = ACTIONS(98),
    [aux_sym_float_token4] = ACTIONS(100),
    [aux_sym_float_token5] = ACTIONS(100),
    [aux_sym_integer_token1] = ACTIONS(100),
    [aux_sym_integer_token2] = ACTIONS(98),
    [sym_char] = ACTIONS(100),
    [sym_string] = ACTIONS(98),
    [sym_symbol] = ACTIONS(100),
    [sym_dot] = ACTIONS(100),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_RPAREN] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_RBRACK] = ACTIONS(98),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [anon_sym_POUND_SQUOTE] = ACTIONS(102),
    [anon_sym_SQUOTE] = ACTIONS(102),
    [anon_sym_BQUOTE] = ACTIONS(102),
    [anon_sym_COMMA_AT] = ACTIONS(102),
    [anon_sym_COMMA] = ACTIONS(104),
    [aux_sym_float_token1] = ACTIONS(104),
    [aux_sym_float_token2] = ACTIONS(104),
    [aux_sym_float_token3] = ACTIONS(102),
    [aux_sym_float_token4] = ACTIONS(104),
    [aux_sym_float_token5] = ACTIONS(104),
    [aux_sym_integer_token1] = ACTIONS(104),
    [aux_sym_integer_token2] = ACTIONS(102),
    [sym_char] = ACTIONS(104),
    [sym_string] = ACTIONS(102),
    [sym_symbol] = ACTIONS(104),
    [sym_dot] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(102),
    [anon_sym_RPAREN] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(102),
    [anon_sym_RBRACK] = ACTIONS(102),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [anon_sym_POUND_SQUOTE] = ACTIONS(106),
    [anon_sym_SQUOTE] = ACTIONS(106),
    [anon_sym_BQUOTE] = ACTIONS(106),
    [anon_sym_COMMA_AT] = ACTIONS(106),
    [anon_sym_COMMA] = ACTIONS(108),
    [aux_sym_float_token1] = ACTIONS(108),
    [aux_sym_float_token2] = ACTIONS(108),
    [aux_sym_float_token3] = ACTIONS(106),
    [aux_sym_float_token4] = ACTIONS(108),
    [aux_sym_float_token5] = ACTIONS(108),
    [aux_sym_integer_token1] = ACTIONS(108),
    [aux_sym_integer_token2] = ACTIONS(106),
    [sym_char] = ACTIONS(108),
    [sym_string] = ACTIONS(106),
    [sym_symbol] = ACTIONS(108),
    [sym_dot] = ACTIONS(108),
    [anon_sym_LPAREN] = ACTIONS(106),
    [anon_sym_RPAREN] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(106),
    [anon_sym_RBRACK] = ACTIONS(106),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [anon_sym_POUND_SQUOTE] = ACTIONS(110),
    [anon_sym_SQUOTE] = ACTIONS(110),
    [anon_sym_BQUOTE] = ACTIONS(110),
    [anon_sym_COMMA_AT] = ACTIONS(110),
    [anon_sym_COMMA] = ACTIONS(112),
    [aux_sym_float_token1] = ACTIONS(112),
    [aux_sym_float_token2] = ACTIONS(112),
    [aux_sym_float_token3] = ACTIONS(110),
    [aux_sym_float_token4] = ACTIONS(112),
    [aux_sym_float_token5] = ACTIONS(112),
    [aux_sym_integer_token1] = ACTIONS(112),
    [aux_sym_integer_token2] = ACTIONS(110),
    [sym_char] = ACTIONS(112),
    [sym_string] = ACTIONS(110),
    [sym_symbol] = ACTIONS(112),
    [sym_dot] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(110),
    [anon_sym_RBRACK] = ACTIONS(110),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [anon_sym_POUND_SQUOTE] = ACTIONS(114),
    [anon_sym_SQUOTE] = ACTIONS(114),
    [anon_sym_BQUOTE] = ACTIONS(114),
    [anon_sym_COMMA_AT] = ACTIONS(114),
    [anon_sym_COMMA] = ACTIONS(116),
    [aux_sym_float_token1] = ACTIONS(116),
    [aux_sym_float_token2] = ACTIONS(116),
    [aux_sym_float_token3] = ACTIONS(114),
    [aux_sym_float_token4] = ACTIONS(116),
    [aux_sym_float_token5] = ACTIONS(116),
    [aux_sym_integer_token1] = ACTIONS(116),
    [aux_sym_integer_token2] = ACTIONS(114),
    [sym_char] = ACTIONS(116),
    [sym_string] = ACTIONS(114),
    [sym_symbol] = ACTIONS(116),
    [sym_dot] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(114),
    [anon_sym_LBRACK] = ACTIONS(114),
    [anon_sym_RBRACK] = ACTIONS(114),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [anon_sym_POUND_SQUOTE] = ACTIONS(118),
    [anon_sym_SQUOTE] = ACTIONS(118),
    [anon_sym_BQUOTE] = ACTIONS(118),
    [anon_sym_COMMA_AT] = ACTIONS(118),
    [anon_sym_COMMA] = ACTIONS(120),
    [aux_sym_float_token1] = ACTIONS(120),
    [aux_sym_float_token2] = ACTIONS(120),
    [aux_sym_float_token3] = ACTIONS(118),
    [aux_sym_float_token4] = ACTIONS(120),
    [aux_sym_float_token5] = ACTIONS(120),
    [aux_sym_integer_token1] = ACTIONS(120),
    [aux_sym_integer_token2] = ACTIONS(118),
    [sym_char] = ACTIONS(120),
    [sym_string] = ACTIONS(118),
    [sym_symbol] = ACTIONS(120),
    [sym_dot] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(118),
    [anon_sym_RPAREN] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(118),
    [anon_sym_RBRACK] = ACTIONS(118),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(122),
    [anon_sym_POUND_SQUOTE] = ACTIONS(122),
    [anon_sym_SQUOTE] = ACTIONS(122),
    [anon_sym_BQUOTE] = ACTIONS(122),
    [anon_sym_COMMA_AT] = ACTIONS(122),
    [anon_sym_COMMA] = ACTIONS(124),
    [aux_sym_float_token1] = ACTIONS(124),
    [aux_sym_float_token2] = ACTIONS(124),
    [aux_sym_float_token3] = ACTIONS(122),
    [aux_sym_float_token4] = ACTIONS(124),
    [aux_sym_float_token5] = ACTIONS(124),
    [aux_sym_integer_token1] = ACTIONS(124),
    [aux_sym_integer_token2] = ACTIONS(122),
    [sym_char] = ACTIONS(124),
    [sym_string] = ACTIONS(122),
    [sym_symbol] = ACTIONS(124),
    [sym_dot] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(122),
    [anon_sym_RPAREN] = ACTIONS(122),
    [anon_sym_LBRACK] = ACTIONS(122),
    [anon_sym_RBRACK] = ACTIONS(122),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(126),
    [anon_sym_POUND_SQUOTE] = ACTIONS(126),
    [anon_sym_SQUOTE] = ACTIONS(126),
    [anon_sym_BQUOTE] = ACTIONS(126),
    [anon_sym_COMMA_AT] = ACTIONS(126),
    [anon_sym_COMMA] = ACTIONS(128),
    [aux_sym_float_token1] = ACTIONS(128),
    [aux_sym_float_token2] = ACTIONS(128),
    [aux_sym_float_token3] = ACTIONS(126),
    [aux_sym_float_token4] = ACTIONS(128),
    [aux_sym_float_token5] = ACTIONS(128),
    [aux_sym_integer_token1] = ACTIONS(128),
    [aux_sym_integer_token2] = ACTIONS(126),
    [sym_char] = ACTIONS(128),
    [sym_string] = ACTIONS(126),
    [sym_symbol] = ACTIONS(128),
    [sym_dot] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_RPAREN] = ACTIONS(126),
    [anon_sym_LBRACK] = ACTIONS(126),
    [anon_sym_RBRACK] = ACTIONS(126),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [anon_sym_POUND_SQUOTE] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(130),
    [anon_sym_BQUOTE] = ACTIONS(130),
    [anon_sym_COMMA_AT] = ACTIONS(130),
    [anon_sym_COMMA] = ACTIONS(132),
    [aux_sym_float_token1] = ACTIONS(132),
    [aux_sym_float_token2] = ACTIONS(132),
    [aux_sym_float_token3] = ACTIONS(130),
    [aux_sym_float_token4] = ACTIONS(132),
    [aux_sym_float_token5] = ACTIONS(132),
    [aux_sym_integer_token1] = ACTIONS(132),
    [aux_sym_integer_token2] = ACTIONS(130),
    [sym_char] = ACTIONS(132),
    [sym_string] = ACTIONS(130),
    [sym_symbol] = ACTIONS(132),
    [sym_dot] = ACTIONS(132),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_RPAREN] = ACTIONS(130),
    [anon_sym_LBRACK] = ACTIONS(130),
    [anon_sym_RBRACK] = ACTIONS(130),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [anon_sym_POUND_SQUOTE] = ACTIONS(134),
    [anon_sym_SQUOTE] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(134),
    [anon_sym_COMMA_AT] = ACTIONS(134),
    [anon_sym_COMMA] = ACTIONS(136),
    [aux_sym_float_token1] = ACTIONS(136),
    [aux_sym_float_token2] = ACTIONS(136),
    [aux_sym_float_token3] = ACTIONS(134),
    [aux_sym_float_token4] = ACTIONS(136),
    [aux_sym_float_token5] = ACTIONS(136),
    [aux_sym_integer_token1] = ACTIONS(136),
    [aux_sym_integer_token2] = ACTIONS(134),
    [sym_char] = ACTIONS(136),
    [sym_string] = ACTIONS(134),
    [sym_symbol] = ACTIONS(136),
    [sym_dot] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_RPAREN] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
  [7] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(21)] = 0,
  [SMALL_STATE(22)] = 7,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [140] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_elisp(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
