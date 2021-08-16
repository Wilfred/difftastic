#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 26
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
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
  anon_sym_POUND_LBRACK = 22,
  sym_comment = 23,
  sym_source_file = 24,
  sym__sexp = 25,
  sym_quote = 26,
  sym_unquote = 27,
  sym__atom = 28,
  sym_float = 29,
  sym_integer = 30,
  sym_list = 31,
  sym_vector = 32,
  sym_bytecode = 33,
  aux_sym_source_file_repeat1 = 34,
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
  [anon_sym_POUND_LBRACK] = "#[",
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
  [sym_bytecode] = "bytecode",
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
  [anon_sym_POUND_LBRACK] = anon_sym_POUND_LBRACK,
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
  [sym_bytecode] = sym_bytecode,
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
  [anon_sym_POUND_LBRACK] = {
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
  [sym_bytecode] = {
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
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '?') ADVANCE(72);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == '`') ADVANCE(27);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('%' <= lookahead && lookahead <= '>') ||
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
      if (lookahead == '[') ADVANCE(83);
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      if (lookahead == '%' ||
          lookahead == '*' ||
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
      ACCEPT_TOKEN(anon_sym_POUND_LBRACK);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead != 0) ADVANCE(85);
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
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
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
    [anon_sym_POUND_LBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(26),
    [sym__sexp] = STATE(8),
    [sym_quote] = STATE(8),
    [sym_unquote] = STATE(8),
    [sym__atom] = STATE(8),
    [sym_float] = STATE(8),
    [sym_integer] = STATE(8),
    [sym_list] = STATE(8),
    [sym_vector] = STATE(8),
    [sym_bytecode] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
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
    [anon_sym_POUND_LBRACK] = ACTIONS(29),
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
    [sym_bytecode] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_POUND_SQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(39),
    [aux_sym_float_token1] = ACTIONS(42),
    [aux_sym_float_token2] = ACTIONS(42),
    [aux_sym_float_token3] = ACTIONS(45),
    [aux_sym_float_token4] = ACTIONS(42),
    [aux_sym_float_token5] = ACTIONS(42),
    [aux_sym_integer_token1] = ACTIONS(48),
    [aux_sym_integer_token2] = ACTIONS(51),
    [sym_char] = ACTIONS(54),
    [sym_string] = ACTIONS(57),
    [sym_byte_compiled_file_name] = ACTIONS(57),
    [sym_symbol] = ACTIONS(54),
    [sym_dot] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(62),
    [anon_sym_RPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(65),
    [anon_sym_RBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(68),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__sexp] = STATE(4),
    [sym_quote] = STATE(4),
    [sym_unquote] = STATE(4),
    [sym__atom] = STATE(4),
    [sym_float] = STATE(4),
    [sym_integer] = STATE(4),
    [sym_list] = STATE(4),
    [sym_vector] = STATE(4),
    [sym_bytecode] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
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
    [sym_char] = ACTIONS(71),
    [sym_string] = ACTIONS(73),
    [sym_byte_compiled_file_name] = ACTIONS(73),
    [sym_symbol] = ACTIONS(71),
    [sym_dot] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_POUND_LBRACK] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__sexp] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_float] = STATE(2),
    [sym_integer] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_bytecode] = STATE(2),
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
    [sym_char] = ACTIONS(79),
    [sym_string] = ACTIONS(81),
    [sym_byte_compiled_file_name] = ACTIONS(81),
    [sym_symbol] = ACTIONS(79),
    [sym_dot] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_POUND_LBRACK] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__sexp] = STATE(9),
    [sym_quote] = STATE(9),
    [sym_unquote] = STATE(9),
    [sym__atom] = STATE(9),
    [sym_float] = STATE(9),
    [sym_integer] = STATE(9),
    [sym_list] = STATE(9),
    [sym_vector] = STATE(9),
    [sym_bytecode] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
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
    [sym_char] = ACTIONS(87),
    [sym_string] = ACTIONS(89),
    [sym_byte_compiled_file_name] = ACTIONS(89),
    [sym_symbol] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(91),
    [anon_sym_POUND_LBRACK] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__sexp] = STATE(7),
    [sym_quote] = STATE(7),
    [sym_unquote] = STATE(7),
    [sym__atom] = STATE(7),
    [sym_float] = STATE(7),
    [sym_integer] = STATE(7),
    [sym_list] = STATE(7),
    [sym_vector] = STATE(7),
    [sym_bytecode] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
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
    [sym_char] = ACTIONS(93),
    [sym_string] = ACTIONS(95),
    [sym_byte_compiled_file_name] = ACTIONS(95),
    [sym_symbol] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(97),
    [anon_sym_POUND_LBRACK] = ACTIONS(29),
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
    [sym_bytecode] = STATE(2),
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
    [sym_char] = ACTIONS(79),
    [sym_string] = ACTIONS(81),
    [sym_byte_compiled_file_name] = ACTIONS(81),
    [sym_symbol] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(99),
    [anon_sym_POUND_LBRACK] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__sexp] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_float] = STATE(2),
    [sym_integer] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_bytecode] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(101),
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
    [sym_char] = ACTIONS(79),
    [sym_string] = ACTIONS(81),
    [sym_byte_compiled_file_name] = ACTIONS(81),
    [sym_symbol] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_POUND_LBRACK] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__sexp] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_float] = STATE(2),
    [sym_integer] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_bytecode] = STATE(2),
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
    [sym_char] = ACTIONS(79),
    [sym_string] = ACTIONS(81),
    [sym_byte_compiled_file_name] = ACTIONS(81),
    [sym_symbol] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(103),
    [anon_sym_POUND_LBRACK] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__sexp] = STATE(19),
    [sym_quote] = STATE(19),
    [sym_unquote] = STATE(19),
    [sym__atom] = STATE(19),
    [sym_float] = STATE(19),
    [sym_integer] = STATE(19),
    [sym_list] = STATE(19),
    [sym_vector] = STATE(19),
    [sym_bytecode] = STATE(19),
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
    [sym_char] = ACTIONS(105),
    [sym_string] = ACTIONS(107),
    [sym_byte_compiled_file_name] = ACTIONS(107),
    [sym_symbol] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_POUND_LBRACK] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__sexp] = STATE(17),
    [sym_quote] = STATE(17),
    [sym_unquote] = STATE(17),
    [sym__atom] = STATE(17),
    [sym_float] = STATE(17),
    [sym_integer] = STATE(17),
    [sym_list] = STATE(17),
    [sym_vector] = STATE(17),
    [sym_bytecode] = STATE(17),
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
    [sym_char] = ACTIONS(109),
    [sym_string] = ACTIONS(111),
    [sym_byte_compiled_file_name] = ACTIONS(111),
    [sym_symbol] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_POUND_LBRACK] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym__sexp] = STATE(28),
    [sym_quote] = STATE(28),
    [sym_unquote] = STATE(28),
    [sym__atom] = STATE(28),
    [sym_float] = STATE(28),
    [sym_integer] = STATE(28),
    [sym_list] = STATE(28),
    [sym_vector] = STATE(28),
    [sym_bytecode] = STATE(28),
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
    [sym_char] = ACTIONS(113),
    [sym_string] = ACTIONS(115),
    [sym_byte_compiled_file_name] = ACTIONS(115),
    [sym_symbol] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_POUND_LBRACK] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym__sexp] = STATE(27),
    [sym_quote] = STATE(27),
    [sym_unquote] = STATE(27),
    [sym__atom] = STATE(27),
    [sym_float] = STATE(27),
    [sym_integer] = STATE(27),
    [sym_list] = STATE(27),
    [sym_vector] = STATE(27),
    [sym_bytecode] = STATE(27),
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
    [sym_char] = ACTIONS(117),
    [sym_string] = ACTIONS(119),
    [sym_byte_compiled_file_name] = ACTIONS(119),
    [sym_symbol] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_POUND_LBRACK] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_POUND_SQUOTE] = ACTIONS(121),
    [anon_sym_SQUOTE] = ACTIONS(121),
    [anon_sym_BQUOTE] = ACTIONS(121),
    [anon_sym_COMMA_AT] = ACTIONS(121),
    [anon_sym_COMMA] = ACTIONS(123),
    [aux_sym_float_token1] = ACTIONS(123),
    [aux_sym_float_token2] = ACTIONS(123),
    [aux_sym_float_token3] = ACTIONS(121),
    [aux_sym_float_token4] = ACTIONS(123),
    [aux_sym_float_token5] = ACTIONS(123),
    [aux_sym_integer_token1] = ACTIONS(123),
    [aux_sym_integer_token2] = ACTIONS(121),
    [sym_char] = ACTIONS(123),
    [sym_string] = ACTIONS(121),
    [sym_byte_compiled_file_name] = ACTIONS(121),
    [sym_symbol] = ACTIONS(123),
    [sym_dot] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(121),
    [anon_sym_POUND_LBRACK] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_POUND_SQUOTE] = ACTIONS(125),
    [anon_sym_SQUOTE] = ACTIONS(125),
    [anon_sym_BQUOTE] = ACTIONS(125),
    [anon_sym_COMMA_AT] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(127),
    [aux_sym_float_token1] = ACTIONS(127),
    [aux_sym_float_token2] = ACTIONS(127),
    [aux_sym_float_token3] = ACTIONS(125),
    [aux_sym_float_token4] = ACTIONS(127),
    [aux_sym_float_token5] = ACTIONS(127),
    [aux_sym_integer_token1] = ACTIONS(127),
    [aux_sym_integer_token2] = ACTIONS(125),
    [sym_char] = ACTIONS(127),
    [sym_string] = ACTIONS(125),
    [sym_byte_compiled_file_name] = ACTIONS(125),
    [sym_symbol] = ACTIONS(127),
    [sym_dot] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(125),
    [anon_sym_POUND_LBRACK] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [anon_sym_POUND_SQUOTE] = ACTIONS(129),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [anon_sym_BQUOTE] = ACTIONS(129),
    [anon_sym_COMMA_AT] = ACTIONS(129),
    [anon_sym_COMMA] = ACTIONS(131),
    [aux_sym_float_token1] = ACTIONS(131),
    [aux_sym_float_token2] = ACTIONS(131),
    [aux_sym_float_token3] = ACTIONS(129),
    [aux_sym_float_token4] = ACTIONS(131),
    [aux_sym_float_token5] = ACTIONS(131),
    [aux_sym_integer_token1] = ACTIONS(131),
    [aux_sym_integer_token2] = ACTIONS(129),
    [sym_char] = ACTIONS(131),
    [sym_string] = ACTIONS(129),
    [sym_byte_compiled_file_name] = ACTIONS(129),
    [sym_symbol] = ACTIONS(131),
    [sym_dot] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(129),
    [anon_sym_RPAREN] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_RBRACK] = ACTIONS(129),
    [anon_sym_POUND_LBRACK] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_POUND_SQUOTE] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_BQUOTE] = ACTIONS(133),
    [anon_sym_COMMA_AT] = ACTIONS(133),
    [anon_sym_COMMA] = ACTIONS(135),
    [aux_sym_float_token1] = ACTIONS(135),
    [aux_sym_float_token2] = ACTIONS(135),
    [aux_sym_float_token3] = ACTIONS(133),
    [aux_sym_float_token4] = ACTIONS(135),
    [aux_sym_float_token5] = ACTIONS(135),
    [aux_sym_integer_token1] = ACTIONS(135),
    [aux_sym_integer_token2] = ACTIONS(133),
    [sym_char] = ACTIONS(135),
    [sym_string] = ACTIONS(133),
    [sym_byte_compiled_file_name] = ACTIONS(133),
    [sym_symbol] = ACTIONS(135),
    [sym_dot] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(133),
    [anon_sym_POUND_LBRACK] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_POUND_SQUOTE] = ACTIONS(137),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_BQUOTE] = ACTIONS(137),
    [anon_sym_COMMA_AT] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(139),
    [aux_sym_float_token1] = ACTIONS(139),
    [aux_sym_float_token2] = ACTIONS(139),
    [aux_sym_float_token3] = ACTIONS(137),
    [aux_sym_float_token4] = ACTIONS(139),
    [aux_sym_float_token5] = ACTIONS(139),
    [aux_sym_integer_token1] = ACTIONS(139),
    [aux_sym_integer_token2] = ACTIONS(137),
    [sym_char] = ACTIONS(139),
    [sym_string] = ACTIONS(137),
    [sym_byte_compiled_file_name] = ACTIONS(137),
    [sym_symbol] = ACTIONS(139),
    [sym_dot] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(137),
    [anon_sym_POUND_LBRACK] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [anon_sym_POUND_SQUOTE] = ACTIONS(141),
    [anon_sym_SQUOTE] = ACTIONS(141),
    [anon_sym_BQUOTE] = ACTIONS(141),
    [anon_sym_COMMA_AT] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(143),
    [aux_sym_float_token1] = ACTIONS(143),
    [aux_sym_float_token2] = ACTIONS(143),
    [aux_sym_float_token3] = ACTIONS(141),
    [aux_sym_float_token4] = ACTIONS(143),
    [aux_sym_float_token5] = ACTIONS(143),
    [aux_sym_integer_token1] = ACTIONS(143),
    [aux_sym_integer_token2] = ACTIONS(141),
    [sym_char] = ACTIONS(143),
    [sym_string] = ACTIONS(141),
    [sym_byte_compiled_file_name] = ACTIONS(141),
    [sym_symbol] = ACTIONS(143),
    [sym_dot] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(141),
    [anon_sym_POUND_LBRACK] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [anon_sym_POUND_SQUOTE] = ACTIONS(145),
    [anon_sym_SQUOTE] = ACTIONS(145),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_COMMA_AT] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(147),
    [aux_sym_float_token1] = ACTIONS(147),
    [aux_sym_float_token2] = ACTIONS(147),
    [aux_sym_float_token3] = ACTIONS(145),
    [aux_sym_float_token4] = ACTIONS(147),
    [aux_sym_float_token5] = ACTIONS(147),
    [aux_sym_integer_token1] = ACTIONS(147),
    [aux_sym_integer_token2] = ACTIONS(145),
    [sym_char] = ACTIONS(147),
    [sym_string] = ACTIONS(145),
    [sym_byte_compiled_file_name] = ACTIONS(145),
    [sym_symbol] = ACTIONS(147),
    [sym_dot] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_RPAREN] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym_RBRACK] = ACTIONS(145),
    [anon_sym_POUND_LBRACK] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_POUND_SQUOTE] = ACTIONS(149),
    [anon_sym_SQUOTE] = ACTIONS(149),
    [anon_sym_BQUOTE] = ACTIONS(149),
    [anon_sym_COMMA_AT] = ACTIONS(149),
    [anon_sym_COMMA] = ACTIONS(151),
    [aux_sym_float_token1] = ACTIONS(151),
    [aux_sym_float_token2] = ACTIONS(151),
    [aux_sym_float_token3] = ACTIONS(149),
    [aux_sym_float_token4] = ACTIONS(151),
    [aux_sym_float_token5] = ACTIONS(151),
    [aux_sym_integer_token1] = ACTIONS(151),
    [aux_sym_integer_token2] = ACTIONS(149),
    [sym_char] = ACTIONS(151),
    [sym_string] = ACTIONS(149),
    [sym_byte_compiled_file_name] = ACTIONS(149),
    [sym_symbol] = ACTIONS(151),
    [sym_dot] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_RBRACK] = ACTIONS(149),
    [anon_sym_POUND_LBRACK] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [anon_sym_POUND_SQUOTE] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(153),
    [anon_sym_COMMA_AT] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(155),
    [aux_sym_float_token1] = ACTIONS(155),
    [aux_sym_float_token2] = ACTIONS(155),
    [aux_sym_float_token3] = ACTIONS(153),
    [aux_sym_float_token4] = ACTIONS(155),
    [aux_sym_float_token5] = ACTIONS(155),
    [aux_sym_integer_token1] = ACTIONS(155),
    [aux_sym_integer_token2] = ACTIONS(153),
    [sym_char] = ACTIONS(155),
    [sym_string] = ACTIONS(153),
    [sym_byte_compiled_file_name] = ACTIONS(153),
    [sym_symbol] = ACTIONS(155),
    [sym_dot] = ACTIONS(155),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_RPAREN] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(153),
    [anon_sym_POUND_LBRACK] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [anon_sym_POUND_SQUOTE] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [anon_sym_BQUOTE] = ACTIONS(157),
    [anon_sym_COMMA_AT] = ACTIONS(157),
    [anon_sym_COMMA] = ACTIONS(159),
    [aux_sym_float_token1] = ACTIONS(159),
    [aux_sym_float_token2] = ACTIONS(159),
    [aux_sym_float_token3] = ACTIONS(157),
    [aux_sym_float_token4] = ACTIONS(159),
    [aux_sym_float_token5] = ACTIONS(159),
    [aux_sym_integer_token1] = ACTIONS(159),
    [aux_sym_integer_token2] = ACTIONS(157),
    [sym_char] = ACTIONS(159),
    [sym_string] = ACTIONS(157),
    [sym_byte_compiled_file_name] = ACTIONS(157),
    [sym_symbol] = ACTIONS(159),
    [sym_dot] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(157),
    [anon_sym_RPAREN] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(157),
    [anon_sym_POUND_LBRACK] = ACTIONS(157),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_POUND_SQUOTE] = ACTIONS(161),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_BQUOTE] = ACTIONS(161),
    [anon_sym_COMMA_AT] = ACTIONS(161),
    [anon_sym_COMMA] = ACTIONS(163),
    [aux_sym_float_token1] = ACTIONS(163),
    [aux_sym_float_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(161),
    [aux_sym_float_token4] = ACTIONS(163),
    [aux_sym_float_token5] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(163),
    [aux_sym_integer_token2] = ACTIONS(161),
    [sym_char] = ACTIONS(163),
    [sym_string] = ACTIONS(161),
    [sym_byte_compiled_file_name] = ACTIONS(161),
    [sym_symbol] = ACTIONS(163),
    [sym_dot] = ACTIONS(163),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_RPAREN] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_RBRACK] = ACTIONS(161),
    [anon_sym_POUND_LBRACK] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA_AT] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [aux_sym_float_token1] = ACTIONS(167),
    [aux_sym_float_token2] = ACTIONS(167),
    [aux_sym_float_token3] = ACTIONS(165),
    [aux_sym_float_token4] = ACTIONS(167),
    [aux_sym_float_token5] = ACTIONS(167),
    [aux_sym_integer_token1] = ACTIONS(167),
    [aux_sym_integer_token2] = ACTIONS(165),
    [sym_char] = ACTIONS(167),
    [sym_string] = ACTIONS(165),
    [sym_byte_compiled_file_name] = ACTIONS(165),
    [sym_symbol] = ACTIONS(167),
    [sym_dot] = ACTIONS(167),
    [anon_sym_LPAREN] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_RBRACK] = ACTIONS(165),
    [anon_sym_POUND_LBRACK] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
  [7] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
  [14] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(26)] = 0,
  [SMALL_STATE(27)] = 7,
  [SMALL_STATE(28)] = 14,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytecode, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytecode, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytecode, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytecode, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [169] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
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
