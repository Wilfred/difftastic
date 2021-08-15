#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 18
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
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
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_LBRACK = 18,
  anon_sym_RBRACK = 19,
  sym_comment = 20,
  sym_source_file = 21,
  sym__sexp = 22,
  sym_quote = 23,
  sym_unquote = 24,
  sym__atom = 25,
  sym_float = 26,
  sym_integer = 27,
  sym_list = 28,
  sym_vector = 29,
  aux_sym_source_file_repeat1 = 30,
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
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == '1') ADVANCE(47);
      if (lookahead == ';') ADVANCE(82);
      if (lookahead == '?') ADVANCE(71);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == ']') ADVANCE(80);
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
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead != 0) ADVANCE(82);
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(18),
    [sym__sexp] = STATE(5),
    [sym_quote] = STATE(5),
    [sym_unquote] = STATE(5),
    [sym__atom] = STATE(5),
    [sym_float] = STATE(5),
    [sym_integer] = STATE(5),
    [sym_list] = STATE(5),
    [sym_vector] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA_AT] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(13),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(15),
    [aux_sym_integer_token2] = ACTIONS(17),
    [sym_char] = ACTIONS(19),
    [sym_string] = ACTIONS(21),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_comment] = ACTIONS(21),
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
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(32),
    [anon_sym_COMMA] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(38),
    [aux_sym_float_token2] = ACTIONS(38),
    [aux_sym_float_token3] = ACTIONS(41),
    [aux_sym_float_token4] = ACTIONS(38),
    [aux_sym_float_token5] = ACTIONS(38),
    [aux_sym_integer_token1] = ACTIONS(44),
    [aux_sym_integer_token2] = ACTIONS(47),
    [sym_char] = ACTIONS(50),
    [sym_string] = ACTIONS(53),
    [sym_symbol] = ACTIONS(50),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(53),
  },
  [3] = {
    [sym__sexp] = STATE(6),
    [sym_quote] = STATE(6),
    [sym_unquote] = STATE(6),
    [sym__atom] = STATE(6),
    [sym_float] = STATE(6),
    [sym_integer] = STATE(6),
    [sym_list] = STATE(6),
    [sym_vector] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA_AT] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(13),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(15),
    [aux_sym_integer_token2] = ACTIONS(17),
    [sym_char] = ACTIONS(62),
    [sym_string] = ACTIONS(64),
    [sym_symbol] = ACTIONS(62),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(66),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_comment] = ACTIONS(64),
  },
  [4] = {
    [sym__sexp] = STATE(7),
    [sym_quote] = STATE(7),
    [sym_unquote] = STATE(7),
    [sym__atom] = STATE(7),
    [sym_float] = STATE(7),
    [sym_integer] = STATE(7),
    [sym_list] = STATE(7),
    [sym_vector] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA_AT] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(13),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(15),
    [aux_sym_integer_token2] = ACTIONS(17),
    [sym_char] = ACTIONS(68),
    [sym_string] = ACTIONS(70),
    [sym_symbol] = ACTIONS(68),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(72),
    [sym_comment] = ACTIONS(70),
  },
  [5] = {
    [sym__sexp] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_float] = STATE(2),
    [sym_integer] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA_AT] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(13),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(15),
    [aux_sym_integer_token2] = ACTIONS(17),
    [sym_char] = ACTIONS(76),
    [sym_string] = ACTIONS(78),
    [sym_symbol] = ACTIONS(76),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_comment] = ACTIONS(78),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA_AT] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(13),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(15),
    [aux_sym_integer_token2] = ACTIONS(17),
    [sym_char] = ACTIONS(76),
    [sym_string] = ACTIONS(78),
    [sym_symbol] = ACTIONS(76),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_comment] = ACTIONS(78),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA_AT] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(13),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(15),
    [aux_sym_integer_token2] = ACTIONS(17),
    [sym_char] = ACTIONS(76),
    [sym_string] = ACTIONS(78),
    [sym_symbol] = ACTIONS(76),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(82),
    [sym_comment] = ACTIONS(78),
  },
  [8] = {
    [sym__sexp] = STATE(12),
    [sym_quote] = STATE(12),
    [sym_unquote] = STATE(12),
    [sym__atom] = STATE(12),
    [sym_float] = STATE(12),
    [sym_integer] = STATE(12),
    [sym_list] = STATE(12),
    [sym_vector] = STATE(12),
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA_AT] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(13),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(15),
    [aux_sym_integer_token2] = ACTIONS(17),
    [sym_char] = ACTIONS(84),
    [sym_string] = ACTIONS(86),
    [sym_symbol] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA_AT] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(13),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(15),
    [aux_sym_integer_token2] = ACTIONS(17),
    [sym_char] = ACTIONS(88),
    [sym_string] = ACTIONS(90),
    [sym_symbol] = ACTIONS(88),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [anon_sym_POUND_SQUOTE] = ACTIONS(92),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_BQUOTE] = ACTIONS(92),
    [anon_sym_COMMA_AT] = ACTIONS(92),
    [anon_sym_COMMA] = ACTIONS(94),
    [aux_sym_float_token1] = ACTIONS(94),
    [aux_sym_float_token2] = ACTIONS(94),
    [aux_sym_float_token3] = ACTIONS(92),
    [aux_sym_float_token4] = ACTIONS(94),
    [aux_sym_float_token5] = ACTIONS(94),
    [aux_sym_integer_token1] = ACTIONS(94),
    [aux_sym_integer_token2] = ACTIONS(92),
    [sym_char] = ACTIONS(94),
    [sym_string] = ACTIONS(92),
    [sym_symbol] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(92),
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_LBRACK] = ACTIONS(92),
    [anon_sym_RBRACK] = ACTIONS(92),
    [sym_comment] = ACTIONS(92),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(96),
    [anon_sym_POUND_SQUOTE] = ACTIONS(96),
    [anon_sym_SQUOTE] = ACTIONS(96),
    [anon_sym_BQUOTE] = ACTIONS(96),
    [anon_sym_COMMA_AT] = ACTIONS(96),
    [anon_sym_COMMA] = ACTIONS(98),
    [aux_sym_float_token1] = ACTIONS(98),
    [aux_sym_float_token2] = ACTIONS(98),
    [aux_sym_float_token3] = ACTIONS(96),
    [aux_sym_float_token4] = ACTIONS(98),
    [aux_sym_float_token5] = ACTIONS(98),
    [aux_sym_integer_token1] = ACTIONS(98),
    [aux_sym_integer_token2] = ACTIONS(96),
    [sym_char] = ACTIONS(98),
    [sym_string] = ACTIONS(96),
    [sym_symbol] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_RPAREN] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(96),
    [anon_sym_RBRACK] = ACTIONS(96),
    [sym_comment] = ACTIONS(96),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [anon_sym_POUND_SQUOTE] = ACTIONS(100),
    [anon_sym_SQUOTE] = ACTIONS(100),
    [anon_sym_BQUOTE] = ACTIONS(100),
    [anon_sym_COMMA_AT] = ACTIONS(100),
    [anon_sym_COMMA] = ACTIONS(102),
    [aux_sym_float_token1] = ACTIONS(102),
    [aux_sym_float_token2] = ACTIONS(102),
    [aux_sym_float_token3] = ACTIONS(100),
    [aux_sym_float_token4] = ACTIONS(102),
    [aux_sym_float_token5] = ACTIONS(102),
    [aux_sym_integer_token1] = ACTIONS(102),
    [aux_sym_integer_token2] = ACTIONS(100),
    [sym_char] = ACTIONS(102),
    [sym_string] = ACTIONS(100),
    [sym_symbol] = ACTIONS(102),
    [anon_sym_LPAREN] = ACTIONS(100),
    [anon_sym_RPAREN] = ACTIONS(100),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_RBRACK] = ACTIONS(100),
    [sym_comment] = ACTIONS(100),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [anon_sym_POUND_SQUOTE] = ACTIONS(104),
    [anon_sym_SQUOTE] = ACTIONS(104),
    [anon_sym_BQUOTE] = ACTIONS(104),
    [anon_sym_COMMA_AT] = ACTIONS(104),
    [anon_sym_COMMA] = ACTIONS(106),
    [aux_sym_float_token1] = ACTIONS(106),
    [aux_sym_float_token2] = ACTIONS(106),
    [aux_sym_float_token3] = ACTIONS(104),
    [aux_sym_float_token4] = ACTIONS(106),
    [aux_sym_float_token5] = ACTIONS(106),
    [aux_sym_integer_token1] = ACTIONS(106),
    [aux_sym_integer_token2] = ACTIONS(104),
    [sym_char] = ACTIONS(106),
    [sym_string] = ACTIONS(104),
    [sym_symbol] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_RPAREN] = ACTIONS(104),
    [anon_sym_LBRACK] = ACTIONS(104),
    [anon_sym_RBRACK] = ACTIONS(104),
    [sym_comment] = ACTIONS(104),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [anon_sym_POUND_SQUOTE] = ACTIONS(108),
    [anon_sym_SQUOTE] = ACTIONS(108),
    [anon_sym_BQUOTE] = ACTIONS(108),
    [anon_sym_COMMA_AT] = ACTIONS(108),
    [anon_sym_COMMA] = ACTIONS(110),
    [aux_sym_float_token1] = ACTIONS(110),
    [aux_sym_float_token2] = ACTIONS(110),
    [aux_sym_float_token3] = ACTIONS(108),
    [aux_sym_float_token4] = ACTIONS(110),
    [aux_sym_float_token5] = ACTIONS(110),
    [aux_sym_integer_token1] = ACTIONS(110),
    [aux_sym_integer_token2] = ACTIONS(108),
    [sym_char] = ACTIONS(110),
    [sym_string] = ACTIONS(108),
    [sym_symbol] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(108),
    [anon_sym_RPAREN] = ACTIONS(108),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_RBRACK] = ACTIONS(108),
    [sym_comment] = ACTIONS(108),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [anon_sym_POUND_SQUOTE] = ACTIONS(112),
    [anon_sym_SQUOTE] = ACTIONS(112),
    [anon_sym_BQUOTE] = ACTIONS(112),
    [anon_sym_COMMA_AT] = ACTIONS(112),
    [anon_sym_COMMA] = ACTIONS(114),
    [aux_sym_float_token1] = ACTIONS(114),
    [aux_sym_float_token2] = ACTIONS(114),
    [aux_sym_float_token3] = ACTIONS(112),
    [aux_sym_float_token4] = ACTIONS(114),
    [aux_sym_float_token5] = ACTIONS(114),
    [aux_sym_integer_token1] = ACTIONS(114),
    [aux_sym_integer_token2] = ACTIONS(112),
    [sym_char] = ACTIONS(114),
    [sym_string] = ACTIONS(112),
    [sym_symbol] = ACTIONS(114),
    [anon_sym_LPAREN] = ACTIONS(112),
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_RBRACK] = ACTIONS(112),
    [sym_comment] = ACTIONS(112),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [anon_sym_POUND_SQUOTE] = ACTIONS(116),
    [anon_sym_SQUOTE] = ACTIONS(116),
    [anon_sym_BQUOTE] = ACTIONS(116),
    [anon_sym_COMMA_AT] = ACTIONS(116),
    [anon_sym_COMMA] = ACTIONS(118),
    [aux_sym_float_token1] = ACTIONS(118),
    [aux_sym_float_token2] = ACTIONS(118),
    [aux_sym_float_token3] = ACTIONS(116),
    [aux_sym_float_token4] = ACTIONS(118),
    [aux_sym_float_token5] = ACTIONS(118),
    [aux_sym_integer_token1] = ACTIONS(118),
    [aux_sym_integer_token2] = ACTIONS(116),
    [sym_char] = ACTIONS(118),
    [sym_string] = ACTIONS(116),
    [sym_symbol] = ACTIONS(118),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(116),
    [anon_sym_RBRACK] = ACTIONS(116),
    [sym_comment] = ACTIONS(116),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [anon_sym_POUND_SQUOTE] = ACTIONS(120),
    [anon_sym_SQUOTE] = ACTIONS(120),
    [anon_sym_BQUOTE] = ACTIONS(120),
    [anon_sym_COMMA_AT] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(122),
    [aux_sym_float_token1] = ACTIONS(122),
    [aux_sym_float_token2] = ACTIONS(122),
    [aux_sym_float_token3] = ACTIONS(120),
    [aux_sym_float_token4] = ACTIONS(122),
    [aux_sym_float_token5] = ACTIONS(122),
    [aux_sym_integer_token1] = ACTIONS(122),
    [aux_sym_integer_token2] = ACTIONS(120),
    [sym_char] = ACTIONS(122),
    [sym_string] = ACTIONS(120),
    [sym_symbol] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_RBRACK] = ACTIONS(120),
    [sym_comment] = ACTIONS(120),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(18)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [124] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
