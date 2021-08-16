#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 22
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
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
  sym_byte_compiled_file_name = 15,
  sym_symbol = 16,
  sym_dot = 17,
  anon_sym_LPAREN = 18,
  anon_sym_RPAREN = 19,
  anon_sym_LBRACK = 20,
  anon_sym_RBRACK = 21,
  sym_comment = 22,
  sym_source_file = 23,
  sym__sexp = 24,
  sym_quote = 25,
  sym_unquote = 26,
  sym__atom = 27,
  sym_float = 28,
  sym_integer = 29,
  sym_list = 30,
  sym_vector = 31,
  aux_sym_source_file_repeat1 = 32,
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
  [sym_byte_compiled_file_name] = "byte_compiled_file_name",
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
  [sym_byte_compiled_file_name] = sym_byte_compiled_file_name,
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
  [sym_byte_compiled_file_name] = {
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '(') ADVANCE(79);
      if (lookahead == ')') ADVANCE(80);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == '1') ADVANCE(47);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '?') ADVANCE(72);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == '`') ADVANCE(27);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('*' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(56);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 23:
      if (lookahead != 0) ADVANCE(1);
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
          lookahead == 'e') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == '0') ADVANCE(45);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == '0') ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
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
      ACCEPT_TOKEN(sym_byte_compiled_file_name);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+') ADVANCE(68);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 61:
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 63:
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(74);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 65:
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(75);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'F') ADVANCE(38);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'I') ADVANCE(70);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N') ADVANCE(73);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N') ADVANCE(67);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N') ADVANCE(40);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 72:
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
    case 73:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_dot);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead != 0) ADVANCE(84);
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
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
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
    [sym_byte_compiled_file_name] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(22),
    [sym__sexp] = STATE(5),
    [sym_quote] = STATE(5),
    [sym_unquote] = STATE(5),
    [sym__atom] = STATE(5),
    [sym_float] = STATE(5),
    [sym_integer] = STATE(5),
    [sym_list] = STATE(5),
    [sym_vector] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
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
    [sym_byte_compiled_file_name] = ACTIONS(23),
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
    [sym_byte_compiled_file_name] = ACTIONS(55),
    [sym_symbol] = ACTIONS(52),
    [sym_dot] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(63),
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
    [sym_char] = ACTIONS(66),
    [sym_string] = ACTIONS(68),
    [sym_byte_compiled_file_name] = ACTIONS(68),
    [sym_symbol] = ACTIONS(66),
    [sym_dot] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__sexp] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
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
    [sym_char] = ACTIONS(74),
    [sym_string] = ACTIONS(76),
    [sym_byte_compiled_file_name] = ACTIONS(76),
    [sym_symbol] = ACTIONS(74),
    [sym_dot] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
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
    [ts_builtin_sym_end] = ACTIONS(82),
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
    [sym_char] = ACTIONS(66),
    [sym_string] = ACTIONS(68),
    [sym_byte_compiled_file_name] = ACTIONS(68),
    [sym_symbol] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
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
    [sym_char] = ACTIONS(66),
    [sym_string] = ACTIONS(68),
    [sym_byte_compiled_file_name] = ACTIONS(68),
    [sym_symbol] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(84),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
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
    [sym_char] = ACTIONS(86),
    [sym_string] = ACTIONS(88),
    [sym_byte_compiled_file_name] = ACTIONS(88),
    [sym_symbol] = ACTIONS(86),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(90),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__sexp] = STATE(23),
    [sym_quote] = STATE(23),
    [sym_unquote] = STATE(23),
    [sym__atom] = STATE(23),
    [sym_float] = STATE(23),
    [sym_integer] = STATE(23),
    [sym_list] = STATE(23),
    [sym_vector] = STATE(23),
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
    [sym_char] = ACTIONS(92),
    [sym_string] = ACTIONS(94),
    [sym_byte_compiled_file_name] = ACTIONS(94),
    [sym_symbol] = ACTIONS(92),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__sexp] = STATE(12),
    [sym_quote] = STATE(12),
    [sym_unquote] = STATE(12),
    [sym__atom] = STATE(12),
    [sym_float] = STATE(12),
    [sym_integer] = STATE(12),
    [sym_list] = STATE(12),
    [sym_vector] = STATE(12),
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
    [sym_char] = ACTIONS(96),
    [sym_string] = ACTIONS(98),
    [sym_byte_compiled_file_name] = ACTIONS(98),
    [sym_symbol] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
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
    [sym_char] = ACTIONS(100),
    [sym_string] = ACTIONS(102),
    [sym_byte_compiled_file_name] = ACTIONS(102),
    [sym_symbol] = ACTIONS(100),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__sexp] = STATE(24),
    [sym_quote] = STATE(24),
    [sym_unquote] = STATE(24),
    [sym__atom] = STATE(24),
    [sym_float] = STATE(24),
    [sym_integer] = STATE(24),
    [sym_list] = STATE(24),
    [sym_vector] = STATE(24),
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
    [sym_char] = ACTIONS(104),
    [sym_string] = ACTIONS(106),
    [sym_byte_compiled_file_name] = ACTIONS(106),
    [sym_symbol] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
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
    [sym_byte_compiled_file_name] = ACTIONS(108),
    [sym_symbol] = ACTIONS(110),
    [sym_dot] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(108),
    [anon_sym_RPAREN] = ACTIONS(108),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_RBRACK] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
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
    [sym_byte_compiled_file_name] = ACTIONS(112),
    [sym_symbol] = ACTIONS(114),
    [sym_dot] = ACTIONS(114),
    [anon_sym_LPAREN] = ACTIONS(112),
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_RBRACK] = ACTIONS(112),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
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
    [sym_byte_compiled_file_name] = ACTIONS(116),
    [sym_symbol] = ACTIONS(118),
    [sym_dot] = ACTIONS(118),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(116),
    [anon_sym_RBRACK] = ACTIONS(116),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
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
    [sym_byte_compiled_file_name] = ACTIONS(120),
    [sym_symbol] = ACTIONS(122),
    [sym_dot] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_RBRACK] = ACTIONS(120),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(124),
    [anon_sym_POUND_SQUOTE] = ACTIONS(124),
    [anon_sym_SQUOTE] = ACTIONS(124),
    [anon_sym_BQUOTE] = ACTIONS(124),
    [anon_sym_COMMA_AT] = ACTIONS(124),
    [anon_sym_COMMA] = ACTIONS(126),
    [aux_sym_float_token1] = ACTIONS(126),
    [aux_sym_float_token2] = ACTIONS(126),
    [aux_sym_float_token3] = ACTIONS(124),
    [aux_sym_float_token4] = ACTIONS(126),
    [aux_sym_float_token5] = ACTIONS(126),
    [aux_sym_integer_token1] = ACTIONS(126),
    [aux_sym_integer_token2] = ACTIONS(124),
    [sym_char] = ACTIONS(126),
    [sym_string] = ACTIONS(124),
    [sym_byte_compiled_file_name] = ACTIONS(124),
    [sym_symbol] = ACTIONS(126),
    [sym_dot] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(124),
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(124),
    [anon_sym_RBRACK] = ACTIONS(124),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(128),
    [anon_sym_POUND_SQUOTE] = ACTIONS(128),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_BQUOTE] = ACTIONS(128),
    [anon_sym_COMMA_AT] = ACTIONS(128),
    [anon_sym_COMMA] = ACTIONS(130),
    [aux_sym_float_token1] = ACTIONS(130),
    [aux_sym_float_token2] = ACTIONS(130),
    [aux_sym_float_token3] = ACTIONS(128),
    [aux_sym_float_token4] = ACTIONS(130),
    [aux_sym_float_token5] = ACTIONS(130),
    [aux_sym_integer_token1] = ACTIONS(130),
    [aux_sym_integer_token2] = ACTIONS(128),
    [sym_char] = ACTIONS(130),
    [sym_string] = ACTIONS(128),
    [sym_byte_compiled_file_name] = ACTIONS(128),
    [sym_symbol] = ACTIONS(130),
    [sym_dot] = ACTIONS(130),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_RPAREN] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(128),
    [anon_sym_RBRACK] = ACTIONS(128),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(132),
    [anon_sym_POUND_SQUOTE] = ACTIONS(132),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_BQUOTE] = ACTIONS(132),
    [anon_sym_COMMA_AT] = ACTIONS(132),
    [anon_sym_COMMA] = ACTIONS(134),
    [aux_sym_float_token1] = ACTIONS(134),
    [aux_sym_float_token2] = ACTIONS(134),
    [aux_sym_float_token3] = ACTIONS(132),
    [aux_sym_float_token4] = ACTIONS(134),
    [aux_sym_float_token5] = ACTIONS(134),
    [aux_sym_integer_token1] = ACTIONS(134),
    [aux_sym_integer_token2] = ACTIONS(132),
    [sym_char] = ACTIONS(134),
    [sym_string] = ACTIONS(132),
    [sym_byte_compiled_file_name] = ACTIONS(132),
    [sym_symbol] = ACTIONS(134),
    [sym_dot] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(132),
    [anon_sym_LBRACK] = ACTIONS(132),
    [anon_sym_RBRACK] = ACTIONS(132),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(136),
    [anon_sym_POUND_SQUOTE] = ACTIONS(136),
    [anon_sym_SQUOTE] = ACTIONS(136),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [anon_sym_COMMA_AT] = ACTIONS(136),
    [anon_sym_COMMA] = ACTIONS(138),
    [aux_sym_float_token1] = ACTIONS(138),
    [aux_sym_float_token2] = ACTIONS(138),
    [aux_sym_float_token3] = ACTIONS(136),
    [aux_sym_float_token4] = ACTIONS(138),
    [aux_sym_float_token5] = ACTIONS(138),
    [aux_sym_integer_token1] = ACTIONS(138),
    [aux_sym_integer_token2] = ACTIONS(136),
    [sym_char] = ACTIONS(138),
    [sym_string] = ACTIONS(136),
    [sym_byte_compiled_file_name] = ACTIONS(136),
    [sym_symbol] = ACTIONS(138),
    [sym_dot] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(136),
    [anon_sym_RBRACK] = ACTIONS(136),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_POUND_SQUOTE] = ACTIONS(140),
    [anon_sym_SQUOTE] = ACTIONS(140),
    [anon_sym_BQUOTE] = ACTIONS(140),
    [anon_sym_COMMA_AT] = ACTIONS(140),
    [anon_sym_COMMA] = ACTIONS(142),
    [aux_sym_float_token1] = ACTIONS(142),
    [aux_sym_float_token2] = ACTIONS(142),
    [aux_sym_float_token3] = ACTIONS(140),
    [aux_sym_float_token4] = ACTIONS(142),
    [aux_sym_float_token5] = ACTIONS(142),
    [aux_sym_integer_token1] = ACTIONS(142),
    [aux_sym_integer_token2] = ACTIONS(140),
    [sym_char] = ACTIONS(142),
    [sym_string] = ACTIONS(140),
    [sym_byte_compiled_file_name] = ACTIONS(140),
    [sym_symbol] = ACTIONS(142),
    [sym_dot] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(140),
    [anon_sym_RPAREN] = ACTIONS(140),
    [anon_sym_LBRACK] = ACTIONS(140),
    [anon_sym_RBRACK] = ACTIONS(140),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [anon_sym_POUND_SQUOTE] = ACTIONS(144),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [anon_sym_BQUOTE] = ACTIONS(144),
    [anon_sym_COMMA_AT] = ACTIONS(144),
    [anon_sym_COMMA] = ACTIONS(146),
    [aux_sym_float_token1] = ACTIONS(146),
    [aux_sym_float_token2] = ACTIONS(146),
    [aux_sym_float_token3] = ACTIONS(144),
    [aux_sym_float_token4] = ACTIONS(146),
    [aux_sym_float_token5] = ACTIONS(146),
    [aux_sym_integer_token1] = ACTIONS(146),
    [aux_sym_integer_token2] = ACTIONS(144),
    [sym_char] = ACTIONS(146),
    [sym_string] = ACTIONS(144),
    [sym_byte_compiled_file_name] = ACTIONS(144),
    [sym_symbol] = ACTIONS(146),
    [sym_dot] = ACTIONS(146),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_RBRACK] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
  [7] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
  [14] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(22)] = 0,
  [SMALL_STATE(23)] = 7,
  [SMALL_STATE(24)] = 14,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [148] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
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
