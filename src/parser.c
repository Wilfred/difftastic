#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 49
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

static inline bool sym_char_character_set_1(int32_t c) {
  return (c < '<'
    ? (c < '*'
      ? (c < '%'
        ? c == '!'
        : c <= '%')
      : (c <= '+' || (c >= '-' && c <= ':')))
    : (c <= '?' || (c < 'a'
      ? (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : c <= '_')
      : (c <= 'z' || c == '|'))));
}

static inline bool sym_symbol_character_set_1(int32_t c) {
  return (c < 'A'
    ? (c < '*'
      ? (c < '%'
        ? c == '!'
        : c <= '%')
      : (c <= '+' || (c < '<'
        ? (c >= '-' && c <= ':')
        : c <= '?')))
    : (c <= 'Z' || (c < 'a'
      ? (c < '_'
        ? c == '\\'
        : c <= '_')
      : (c <= 'z' || c == '|'))));
}

static inline bool sym_symbol_character_set_2(int32_t c) {
  return (c < 'A'
    ? (c < '*'
      ? (c < '%'
        ? c == '!'
        : c <= '%')
      : (c <= '*' || (c < '<'
        ? (c >= '-' && c <= ':')
        : c <= '?')))
    : (c <= 'Z' || (c < 'a'
      ? (c < '_'
        ? c == '\\'
        : c <= '_')
      : (c <= 'z' || c == '|'))));
}

static inline bool sym_symbol_character_set_3(int32_t c) {
  return (c < 'A'
    ? (c < '*'
      ? (c < '%'
        ? c == '!'
        : c <= '%')
      : (c <= '+' || (c < '<'
        ? (c >= '-' && c <= ':')
        : c <= '?')))
    : (c <= 'Z' || (c < 'b'
      ? (c < '_'
        ? c == '\\'
        : c <= '_')
      : (c <= 'z' || c == '|'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '&') ADVANCE(18);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '(') ADVANCE(80);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '0') ADVANCE(38);
      if (lookahead == '1') ADVANCE(44);
      if (lookahead == ';') ADVANCE(86);
      if (lookahead == '?') ADVANCE(71);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == '`') ADVANCE(24);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(78);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == 'b' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == '+') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'F') ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == 'I') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'N') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'N') ADVANCE(7);
      END_STATE();
    case 11:
      if (lookahead == 'N') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 16:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 18:
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 19:
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '&') ADVANCE(18);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '(') ADVANCE(80);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '0') ADVANCE(38);
      if (lookahead == '1') ADVANCE(44);
      if (lookahead == ';') ADVANCE(86);
      if (lookahead == '?') ADVANCE(71);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == '`') ADVANCE(24);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(78);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_float_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_float_token4);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_float_token4);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_float_token5);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_float_token5);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '0') ADVANCE(42);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '0') ADVANCE(27);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '0') ADVANCE(29);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_char);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_char);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_byte_compiled_file_name);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (sym_symbol_character_set_2(lookahead)) ADVANCE(78);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (sym_symbol_character_set_2(lookahead)) ADVANCE(78);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+') ADVANCE(68);
      if (sym_symbol_character_set_2(lookahead)) ADVANCE(78);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (sym_symbol_character_set_2(lookahead)) ADVANCE(78);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (sym_symbol_character_set_2(lookahead)) ADVANCE(78);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+') ADVANCE(67);
      if (sym_symbol_character_set_2(lookahead)) ADVANCE(78);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '0') ADVANCE(38);
      if (lookahead == '1') ADVANCE(44);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(30);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(73);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(31);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(74);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'F') ADVANCE(35);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'I') ADVANCE(69);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N') ADVANCE(72);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N') ADVANCE(66);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N') ADVANCE(37);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(51);
      if (sym_char_character_set_1(lookahead)) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(70);
      if (sym_symbol_character_set_3(lookahead)) ADVANCE(78);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_dot);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACK);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 20},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 20},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 20},
  [29] = {.lex_state = 20},
  [30] = {.lex_state = 20},
  [31] = {.lex_state = 20},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 20},
  [34] = {.lex_state = 20},
  [35] = {.lex_state = 20},
  [36] = {.lex_state = 20},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
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
    [sym_source_file] = STATE(53),
    [sym__sexp] = STATE(10),
    [sym_quote] = STATE(10),
    [sym_unquote] = STATE(10),
    [sym__atom] = STATE(10),
    [sym_float] = STATE(10),
    [sym_integer] = STATE(10),
    [sym_list] = STATE(10),
    [sym_vector] = STATE(10),
    [sym_bytecode] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUND_SQUOTE] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_BQUOTE] = ACTIONS(7),
    [anon_sym_COMMA_AT] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_float_token1] = ACTIONS(13),
    [aux_sym_float_token2] = ACTIONS(13),
    [aux_sym_float_token3] = ACTIONS(13),
    [aux_sym_float_token4] = ACTIONS(13),
    [aux_sym_float_token5] = ACTIONS(13),
    [aux_sym_integer_token1] = ACTIONS(15),
    [aux_sym_integer_token2] = ACTIONS(17),
    [sym_char] = ACTIONS(19),
    [sym_string] = ACTIONS(21),
    [sym_byte_compiled_file_name] = ACTIONS(21),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__sexp] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_bytecode] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [aux_sym_float_token1] = ACTIONS(35),
    [aux_sym_float_token2] = ACTIONS(35),
    [aux_sym_float_token3] = ACTIONS(35),
    [aux_sym_float_token4] = ACTIONS(35),
    [aux_sym_float_token5] = ACTIONS(35),
    [aux_sym_integer_token1] = ACTIONS(37),
    [aux_sym_integer_token2] = ACTIONS(39),
    [sym_char] = ACTIONS(41),
    [sym_string] = ACTIONS(43),
    [sym_byte_compiled_file_name] = ACTIONS(43),
    [sym_symbol] = ACTIONS(41),
    [sym_dot] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_POUND_LBRACK] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__sexp] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_bytecode] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_POUND_SQUOTE] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(55),
    [anon_sym_COMMA_AT] = ACTIONS(58),
    [anon_sym_COMMA] = ACTIONS(61),
    [aux_sym_float_token1] = ACTIONS(64),
    [aux_sym_float_token2] = ACTIONS(64),
    [aux_sym_float_token3] = ACTIONS(64),
    [aux_sym_float_token4] = ACTIONS(64),
    [aux_sym_float_token5] = ACTIONS(64),
    [aux_sym_integer_token1] = ACTIONS(67),
    [aux_sym_integer_token2] = ACTIONS(70),
    [sym_char] = ACTIONS(73),
    [sym_string] = ACTIONS(76),
    [sym_byte_compiled_file_name] = ACTIONS(76),
    [sym_symbol] = ACTIONS(73),
    [sym_dot] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(84),
    [anon_sym_LBRACK] = ACTIONS(86),
    [anon_sym_POUND_LBRACK] = ACTIONS(89),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
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
    [ts_builtin_sym_end] = ACTIONS(84),
    [anon_sym_POUND_SQUOTE] = ACTIONS(92),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_BQUOTE] = ACTIONS(92),
    [anon_sym_COMMA_AT] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(98),
    [aux_sym_float_token1] = ACTIONS(101),
    [aux_sym_float_token2] = ACTIONS(101),
    [aux_sym_float_token3] = ACTIONS(101),
    [aux_sym_float_token4] = ACTIONS(101),
    [aux_sym_float_token5] = ACTIONS(101),
    [aux_sym_integer_token1] = ACTIONS(104),
    [aux_sym_integer_token2] = ACTIONS(107),
    [sym_char] = ACTIONS(110),
    [sym_string] = ACTIONS(113),
    [sym_byte_compiled_file_name] = ACTIONS(113),
    [sym_symbol] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(119),
    [anon_sym_RBRACK] = ACTIONS(84),
    [anon_sym_POUND_LBRACK] = ACTIONS(122),
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
    [sym_bytecode] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [aux_sym_float_token1] = ACTIONS(35),
    [aux_sym_float_token2] = ACTIONS(35),
    [aux_sym_float_token3] = ACTIONS(35),
    [aux_sym_float_token4] = ACTIONS(35),
    [aux_sym_float_token5] = ACTIONS(35),
    [aux_sym_integer_token1] = ACTIONS(37),
    [aux_sym_integer_token2] = ACTIONS(39),
    [sym_char] = ACTIONS(125),
    [sym_string] = ACTIONS(127),
    [sym_byte_compiled_file_name] = ACTIONS(127),
    [sym_symbol] = ACTIONS(125),
    [sym_dot] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_POUND_LBRACK] = ACTIONS(53),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [aux_sym_float_token1] = ACTIONS(35),
    [aux_sym_float_token2] = ACTIONS(35),
    [aux_sym_float_token3] = ACTIONS(35),
    [aux_sym_float_token4] = ACTIONS(35),
    [aux_sym_float_token5] = ACTIONS(35),
    [aux_sym_integer_token1] = ACTIONS(37),
    [aux_sym_integer_token2] = ACTIONS(39),
    [sym_char] = ACTIONS(133),
    [sym_string] = ACTIONS(135),
    [sym_byte_compiled_file_name] = ACTIONS(135),
    [sym_symbol] = ACTIONS(133),
    [sym_dot] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_POUND_LBRACK] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__sexp] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_bytecode] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [aux_sym_float_token1] = ACTIONS(35),
    [aux_sym_float_token2] = ACTIONS(35),
    [aux_sym_float_token3] = ACTIONS(35),
    [aux_sym_float_token4] = ACTIONS(35),
    [aux_sym_float_token5] = ACTIONS(35),
    [aux_sym_integer_token1] = ACTIONS(37),
    [aux_sym_integer_token2] = ACTIONS(39),
    [sym_char] = ACTIONS(41),
    [sym_string] = ACTIONS(43),
    [sym_byte_compiled_file_name] = ACTIONS(43),
    [sym_symbol] = ACTIONS(41),
    [sym_dot] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_POUND_LBRACK] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
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
    [sym_bytecode] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [anon_sym_POUND_SQUOTE] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_BQUOTE] = ACTIONS(7),
    [anon_sym_COMMA_AT] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_float_token1] = ACTIONS(13),
    [aux_sym_float_token2] = ACTIONS(13),
    [aux_sym_float_token3] = ACTIONS(13),
    [aux_sym_float_token4] = ACTIONS(13),
    [aux_sym_float_token5] = ACTIONS(13),
    [aux_sym_integer_token1] = ACTIONS(15),
    [aux_sym_integer_token2] = ACTIONS(17),
    [sym_char] = ACTIONS(145),
    [sym_string] = ACTIONS(147),
    [sym_byte_compiled_file_name] = ACTIONS(147),
    [sym_symbol] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(149),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
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
    [aux_sym_float_token3] = ACTIONS(13),
    [aux_sym_float_token4] = ACTIONS(13),
    [aux_sym_float_token5] = ACTIONS(13),
    [aux_sym_integer_token1] = ACTIONS(15),
    [aux_sym_integer_token2] = ACTIONS(17),
    [sym_char] = ACTIONS(151),
    [sym_string] = ACTIONS(153),
    [sym_byte_compiled_file_name] = ACTIONS(153),
    [sym_symbol] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(155),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
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
    [ts_builtin_sym_end] = ACTIONS(157),
    [anon_sym_POUND_SQUOTE] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_BQUOTE] = ACTIONS(7),
    [anon_sym_COMMA_AT] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_float_token1] = ACTIONS(13),
    [aux_sym_float_token2] = ACTIONS(13),
    [aux_sym_float_token3] = ACTIONS(13),
    [aux_sym_float_token4] = ACTIONS(13),
    [aux_sym_float_token5] = ACTIONS(13),
    [aux_sym_integer_token1] = ACTIONS(15),
    [aux_sym_integer_token2] = ACTIONS(17),
    [sym_char] = ACTIONS(151),
    [sym_string] = ACTIONS(153),
    [sym_byte_compiled_file_name] = ACTIONS(153),
    [sym_symbol] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
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
    [aux_sym_float_token3] = ACTIONS(13),
    [aux_sym_float_token4] = ACTIONS(13),
    [aux_sym_float_token5] = ACTIONS(13),
    [aux_sym_integer_token1] = ACTIONS(15),
    [aux_sym_integer_token2] = ACTIONS(17),
    [sym_char] = ACTIONS(151),
    [sym_string] = ACTIONS(153),
    [sym_byte_compiled_file_name] = ACTIONS(153),
    [sym_symbol] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(159),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
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
    [aux_sym_float_token3] = ACTIONS(13),
    [aux_sym_float_token4] = ACTIONS(13),
    [aux_sym_float_token5] = ACTIONS(13),
    [aux_sym_integer_token1] = ACTIONS(15),
    [aux_sym_integer_token2] = ACTIONS(17),
    [sym_char] = ACTIONS(151),
    [sym_string] = ACTIONS(153),
    [sym_byte_compiled_file_name] = ACTIONS(153),
    [sym_symbol] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(161),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
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
    [aux_sym_float_token3] = ACTIONS(13),
    [aux_sym_float_token4] = ACTIONS(13),
    [aux_sym_float_token5] = ACTIONS(13),
    [aux_sym_integer_token1] = ACTIONS(15),
    [aux_sym_integer_token2] = ACTIONS(17),
    [sym_char] = ACTIONS(163),
    [sym_string] = ACTIONS(165),
    [sym_byte_compiled_file_name] = ACTIONS(165),
    [sym_symbol] = ACTIONS(163),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(167),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym__sexp] = STATE(11),
    [sym_quote] = STATE(11),
    [sym_unquote] = STATE(11),
    [sym__atom] = STATE(11),
    [sym_float] = STATE(11),
    [sym_integer] = STATE(11),
    [sym_list] = STATE(11),
    [sym_vector] = STATE(11),
    [sym_bytecode] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [anon_sym_POUND_SQUOTE] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_BQUOTE] = ACTIONS(7),
    [anon_sym_COMMA_AT] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_float_token1] = ACTIONS(13),
    [aux_sym_float_token2] = ACTIONS(13),
    [aux_sym_float_token3] = ACTIONS(13),
    [aux_sym_float_token4] = ACTIONS(13),
    [aux_sym_float_token5] = ACTIONS(13),
    [aux_sym_integer_token1] = ACTIONS(15),
    [aux_sym_integer_token2] = ACTIONS(17),
    [sym_char] = ACTIONS(169),
    [sym_string] = ACTIONS(171),
    [sym_byte_compiled_file_name] = ACTIONS(171),
    [sym_symbol] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(173),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
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
    [aux_sym_float_token3] = ACTIONS(13),
    [aux_sym_float_token4] = ACTIONS(13),
    [aux_sym_float_token5] = ACTIONS(13),
    [aux_sym_integer_token1] = ACTIONS(15),
    [aux_sym_integer_token2] = ACTIONS(17),
    [sym_char] = ACTIONS(151),
    [sym_string] = ACTIONS(153),
    [sym_byte_compiled_file_name] = ACTIONS(153),
    [sym_symbol] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(175),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym__sexp] = STATE(15),
    [sym_quote] = STATE(15),
    [sym_unquote] = STATE(15),
    [sym__atom] = STATE(15),
    [sym_float] = STATE(15),
    [sym_integer] = STATE(15),
    [sym_list] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_bytecode] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [anon_sym_POUND_SQUOTE] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_BQUOTE] = ACTIONS(7),
    [anon_sym_COMMA_AT] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_float_token1] = ACTIONS(13),
    [aux_sym_float_token2] = ACTIONS(13),
    [aux_sym_float_token3] = ACTIONS(13),
    [aux_sym_float_token4] = ACTIONS(13),
    [aux_sym_float_token5] = ACTIONS(13),
    [aux_sym_integer_token1] = ACTIONS(15),
    [aux_sym_integer_token2] = ACTIONS(17),
    [sym_char] = ACTIONS(177),
    [sym_string] = ACTIONS(179),
    [sym_byte_compiled_file_name] = ACTIONS(179),
    [sym_symbol] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(181),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym__sexp] = STATE(52),
    [sym_quote] = STATE(52),
    [sym_unquote] = STATE(52),
    [sym__atom] = STATE(52),
    [sym_float] = STATE(52),
    [sym_integer] = STATE(52),
    [sym_list] = STATE(52),
    [sym_vector] = STATE(52),
    [sym_bytecode] = STATE(52),
    [anon_sym_POUND_SQUOTE] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_BQUOTE] = ACTIONS(7),
    [anon_sym_COMMA_AT] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_float_token1] = ACTIONS(13),
    [aux_sym_float_token2] = ACTIONS(13),
    [aux_sym_float_token3] = ACTIONS(13),
    [aux_sym_float_token4] = ACTIONS(13),
    [aux_sym_float_token5] = ACTIONS(13),
    [aux_sym_integer_token1] = ACTIONS(15),
    [aux_sym_integer_token2] = ACTIONS(17),
    [sym_char] = ACTIONS(183),
    [sym_string] = ACTIONS(185),
    [sym_byte_compiled_file_name] = ACTIONS(185),
    [sym_symbol] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym__sexp] = STATE(30),
    [sym_quote] = STATE(30),
    [sym_unquote] = STATE(30),
    [sym__atom] = STATE(30),
    [sym_float] = STATE(30),
    [sym_integer] = STATE(30),
    [sym_list] = STATE(30),
    [sym_vector] = STATE(30),
    [sym_bytecode] = STATE(30),
    [anon_sym_POUND_SQUOTE] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_BQUOTE] = ACTIONS(7),
    [anon_sym_COMMA_AT] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_float_token1] = ACTIONS(13),
    [aux_sym_float_token2] = ACTIONS(13),
    [aux_sym_float_token3] = ACTIONS(13),
    [aux_sym_float_token4] = ACTIONS(13),
    [aux_sym_float_token5] = ACTIONS(13),
    [aux_sym_integer_token1] = ACTIONS(15),
    [aux_sym_integer_token2] = ACTIONS(17),
    [sym_char] = ACTIONS(187),
    [sym_string] = ACTIONS(189),
    [sym_byte_compiled_file_name] = ACTIONS(189),
    [sym_symbol] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym__sexp] = STATE(50),
    [sym_quote] = STATE(50),
    [sym_unquote] = STATE(50),
    [sym__atom] = STATE(50),
    [sym_float] = STATE(50),
    [sym_integer] = STATE(50),
    [sym_list] = STATE(50),
    [sym_vector] = STATE(50),
    [sym_bytecode] = STATE(50),
    [anon_sym_POUND_SQUOTE] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_BQUOTE] = ACTIONS(7),
    [anon_sym_COMMA_AT] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_float_token1] = ACTIONS(13),
    [aux_sym_float_token2] = ACTIONS(13),
    [aux_sym_float_token3] = ACTIONS(13),
    [aux_sym_float_token4] = ACTIONS(13),
    [aux_sym_float_token5] = ACTIONS(13),
    [aux_sym_integer_token1] = ACTIONS(15),
    [aux_sym_integer_token2] = ACTIONS(17),
    [sym_char] = ACTIONS(191),
    [sym_string] = ACTIONS(193),
    [sym_byte_compiled_file_name] = ACTIONS(193),
    [sym_symbol] = ACTIONS(191),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym__sexp] = STATE(51),
    [sym_quote] = STATE(51),
    [sym_unquote] = STATE(51),
    [sym__atom] = STATE(51),
    [sym_float] = STATE(51),
    [sym_integer] = STATE(51),
    [sym_list] = STATE(51),
    [sym_vector] = STATE(51),
    [sym_bytecode] = STATE(51),
    [anon_sym_POUND_SQUOTE] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_BQUOTE] = ACTIONS(7),
    [anon_sym_COMMA_AT] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_float_token1] = ACTIONS(13),
    [aux_sym_float_token2] = ACTIONS(13),
    [aux_sym_float_token3] = ACTIONS(13),
    [aux_sym_float_token4] = ACTIONS(13),
    [aux_sym_float_token5] = ACTIONS(13),
    [aux_sym_integer_token1] = ACTIONS(15),
    [aux_sym_integer_token2] = ACTIONS(17),
    [sym_char] = ACTIONS(195),
    [sym_string] = ACTIONS(197),
    [sym_byte_compiled_file_name] = ACTIONS(197),
    [sym_symbol] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym__sexp] = STATE(45),
    [sym_quote] = STATE(45),
    [sym_unquote] = STATE(45),
    [sym__atom] = STATE(45),
    [sym_float] = STATE(45),
    [sym_integer] = STATE(45),
    [sym_list] = STATE(45),
    [sym_vector] = STATE(45),
    [sym_bytecode] = STATE(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [aux_sym_float_token1] = ACTIONS(35),
    [aux_sym_float_token2] = ACTIONS(35),
    [aux_sym_float_token3] = ACTIONS(35),
    [aux_sym_float_token4] = ACTIONS(35),
    [aux_sym_float_token5] = ACTIONS(35),
    [aux_sym_integer_token1] = ACTIONS(37),
    [aux_sym_integer_token2] = ACTIONS(39),
    [sym_char] = ACTIONS(199),
    [sym_string] = ACTIONS(201),
    [sym_byte_compiled_file_name] = ACTIONS(201),
    [sym_symbol] = ACTIONS(199),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_POUND_LBRACK] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym__sexp] = STATE(49),
    [sym_quote] = STATE(49),
    [sym_unquote] = STATE(49),
    [sym__atom] = STATE(49),
    [sym_float] = STATE(49),
    [sym_integer] = STATE(49),
    [sym_list] = STATE(49),
    [sym_vector] = STATE(49),
    [sym_bytecode] = STATE(49),
    [anon_sym_POUND_SQUOTE] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_BQUOTE] = ACTIONS(7),
    [anon_sym_COMMA_AT] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_float_token1] = ACTIONS(13),
    [aux_sym_float_token2] = ACTIONS(13),
    [aux_sym_float_token3] = ACTIONS(13),
    [aux_sym_float_token4] = ACTIONS(13),
    [aux_sym_float_token5] = ACTIONS(13),
    [aux_sym_integer_token1] = ACTIONS(15),
    [aux_sym_integer_token2] = ACTIONS(17),
    [sym_char] = ACTIONS(203),
    [sym_string] = ACTIONS(205),
    [sym_byte_compiled_file_name] = ACTIONS(205),
    [sym_symbol] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym__sexp] = STATE(46),
    [sym_quote] = STATE(46),
    [sym_unquote] = STATE(46),
    [sym__atom] = STATE(46),
    [sym_float] = STATE(46),
    [sym_integer] = STATE(46),
    [sym_list] = STATE(46),
    [sym_vector] = STATE(46),
    [sym_bytecode] = STATE(46),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [aux_sym_float_token1] = ACTIONS(35),
    [aux_sym_float_token2] = ACTIONS(35),
    [aux_sym_float_token3] = ACTIONS(35),
    [aux_sym_float_token4] = ACTIONS(35),
    [aux_sym_float_token5] = ACTIONS(35),
    [aux_sym_integer_token1] = ACTIONS(37),
    [aux_sym_integer_token2] = ACTIONS(39),
    [sym_char] = ACTIONS(207),
    [sym_string] = ACTIONS(209),
    [sym_byte_compiled_file_name] = ACTIONS(209),
    [sym_symbol] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_POUND_LBRACK] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym__sexp] = STATE(29),
    [sym_quote] = STATE(29),
    [sym_unquote] = STATE(29),
    [sym__atom] = STATE(29),
    [sym_float] = STATE(29),
    [sym_integer] = STATE(29),
    [sym_list] = STATE(29),
    [sym_vector] = STATE(29),
    [sym_bytecode] = STATE(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_BQUOTE] = ACTIONS(7),
    [anon_sym_COMMA_AT] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_float_token1] = ACTIONS(13),
    [aux_sym_float_token2] = ACTIONS(13),
    [aux_sym_float_token3] = ACTIONS(13),
    [aux_sym_float_token4] = ACTIONS(13),
    [aux_sym_float_token5] = ACTIONS(13),
    [aux_sym_integer_token1] = ACTIONS(15),
    [aux_sym_integer_token2] = ACTIONS(17),
    [sym_char] = ACTIONS(211),
    [sym_string] = ACTIONS(213),
    [sym_byte_compiled_file_name] = ACTIONS(213),
    [sym_symbol] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(215),
    [anon_sym_POUND_SQUOTE] = ACTIONS(215),
    [anon_sym_SQUOTE] = ACTIONS(215),
    [anon_sym_BQUOTE] = ACTIONS(215),
    [anon_sym_COMMA_AT] = ACTIONS(215),
    [anon_sym_COMMA] = ACTIONS(217),
    [aux_sym_float_token1] = ACTIONS(217),
    [aux_sym_float_token2] = ACTIONS(217),
    [aux_sym_float_token3] = ACTIONS(217),
    [aux_sym_float_token4] = ACTIONS(217),
    [aux_sym_float_token5] = ACTIONS(217),
    [aux_sym_integer_token1] = ACTIONS(217),
    [aux_sym_integer_token2] = ACTIONS(215),
    [sym_char] = ACTIONS(217),
    [sym_string] = ACTIONS(215),
    [sym_byte_compiled_file_name] = ACTIONS(215),
    [sym_symbol] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(215),
    [anon_sym_RPAREN] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(215),
    [anon_sym_RBRACK] = ACTIONS(215),
    [anon_sym_POUND_LBRACK] = ACTIONS(215),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(219),
    [anon_sym_POUND_SQUOTE] = ACTIONS(219),
    [anon_sym_SQUOTE] = ACTIONS(219),
    [anon_sym_BQUOTE] = ACTIONS(219),
    [anon_sym_COMMA_AT] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(221),
    [aux_sym_float_token1] = ACTIONS(221),
    [aux_sym_float_token2] = ACTIONS(221),
    [aux_sym_float_token3] = ACTIONS(221),
    [aux_sym_float_token4] = ACTIONS(221),
    [aux_sym_float_token5] = ACTIONS(221),
    [aux_sym_integer_token1] = ACTIONS(221),
    [aux_sym_integer_token2] = ACTIONS(219),
    [sym_char] = ACTIONS(221),
    [sym_string] = ACTIONS(219),
    [sym_byte_compiled_file_name] = ACTIONS(219),
    [sym_symbol] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_RPAREN] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_RBRACK] = ACTIONS(219),
    [anon_sym_POUND_LBRACK] = ACTIONS(219),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(223),
    [anon_sym_POUND_SQUOTE] = ACTIONS(223),
    [anon_sym_SQUOTE] = ACTIONS(223),
    [anon_sym_BQUOTE] = ACTIONS(223),
    [anon_sym_COMMA_AT] = ACTIONS(223),
    [anon_sym_COMMA] = ACTIONS(225),
    [aux_sym_float_token1] = ACTIONS(225),
    [aux_sym_float_token2] = ACTIONS(225),
    [aux_sym_float_token3] = ACTIONS(225),
    [aux_sym_float_token4] = ACTIONS(225),
    [aux_sym_float_token5] = ACTIONS(225),
    [aux_sym_integer_token1] = ACTIONS(225),
    [aux_sym_integer_token2] = ACTIONS(223),
    [sym_char] = ACTIONS(225),
    [sym_string] = ACTIONS(223),
    [sym_byte_compiled_file_name] = ACTIONS(223),
    [sym_symbol] = ACTIONS(225),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_RPAREN] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_RBRACK] = ACTIONS(223),
    [anon_sym_POUND_LBRACK] = ACTIONS(223),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(227),
    [anon_sym_POUND_SQUOTE] = ACTIONS(227),
    [anon_sym_SQUOTE] = ACTIONS(227),
    [anon_sym_BQUOTE] = ACTIONS(227),
    [anon_sym_COMMA_AT] = ACTIONS(227),
    [anon_sym_COMMA] = ACTIONS(229),
    [aux_sym_float_token1] = ACTIONS(229),
    [aux_sym_float_token2] = ACTIONS(229),
    [aux_sym_float_token3] = ACTIONS(229),
    [aux_sym_float_token4] = ACTIONS(229),
    [aux_sym_float_token5] = ACTIONS(229),
    [aux_sym_integer_token1] = ACTIONS(229),
    [aux_sym_integer_token2] = ACTIONS(227),
    [sym_char] = ACTIONS(229),
    [sym_string] = ACTIONS(227),
    [sym_byte_compiled_file_name] = ACTIONS(227),
    [sym_symbol] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(227),
    [anon_sym_RPAREN] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(227),
    [anon_sym_RBRACK] = ACTIONS(227),
    [anon_sym_POUND_LBRACK] = ACTIONS(227),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(231),
    [anon_sym_POUND_SQUOTE] = ACTIONS(231),
    [anon_sym_SQUOTE] = ACTIONS(231),
    [anon_sym_BQUOTE] = ACTIONS(231),
    [anon_sym_COMMA_AT] = ACTIONS(231),
    [anon_sym_COMMA] = ACTIONS(233),
    [aux_sym_float_token1] = ACTIONS(233),
    [aux_sym_float_token2] = ACTIONS(233),
    [aux_sym_float_token3] = ACTIONS(233),
    [aux_sym_float_token4] = ACTIONS(233),
    [aux_sym_float_token5] = ACTIONS(233),
    [aux_sym_integer_token1] = ACTIONS(233),
    [aux_sym_integer_token2] = ACTIONS(231),
    [sym_char] = ACTIONS(233),
    [sym_string] = ACTIONS(231),
    [sym_byte_compiled_file_name] = ACTIONS(231),
    [sym_symbol] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_RPAREN] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_RBRACK] = ACTIONS(231),
    [anon_sym_POUND_LBRACK] = ACTIONS(231),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(235),
    [anon_sym_POUND_SQUOTE] = ACTIONS(235),
    [anon_sym_SQUOTE] = ACTIONS(235),
    [anon_sym_BQUOTE] = ACTIONS(235),
    [anon_sym_COMMA_AT] = ACTIONS(235),
    [anon_sym_COMMA] = ACTIONS(237),
    [aux_sym_float_token1] = ACTIONS(237),
    [aux_sym_float_token2] = ACTIONS(237),
    [aux_sym_float_token3] = ACTIONS(237),
    [aux_sym_float_token4] = ACTIONS(237),
    [aux_sym_float_token5] = ACTIONS(237),
    [aux_sym_integer_token1] = ACTIONS(237),
    [aux_sym_integer_token2] = ACTIONS(235),
    [sym_char] = ACTIONS(237),
    [sym_string] = ACTIONS(235),
    [sym_byte_compiled_file_name] = ACTIONS(235),
    [sym_symbol] = ACTIONS(237),
    [anon_sym_LPAREN] = ACTIONS(235),
    [anon_sym_RPAREN] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(235),
    [anon_sym_RBRACK] = ACTIONS(235),
    [anon_sym_POUND_LBRACK] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [anon_sym_POUND_SQUOTE] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(239),
    [anon_sym_BQUOTE] = ACTIONS(239),
    [anon_sym_COMMA_AT] = ACTIONS(239),
    [anon_sym_COMMA] = ACTIONS(241),
    [aux_sym_float_token1] = ACTIONS(241),
    [aux_sym_float_token2] = ACTIONS(241),
    [aux_sym_float_token3] = ACTIONS(241),
    [aux_sym_float_token4] = ACTIONS(241),
    [aux_sym_float_token5] = ACTIONS(241),
    [aux_sym_integer_token1] = ACTIONS(241),
    [aux_sym_integer_token2] = ACTIONS(239),
    [sym_char] = ACTIONS(241),
    [sym_string] = ACTIONS(239),
    [sym_byte_compiled_file_name] = ACTIONS(239),
    [sym_symbol] = ACTIONS(241),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(239),
    [anon_sym_RBRACK] = ACTIONS(239),
    [anon_sym_POUND_LBRACK] = ACTIONS(239),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(243),
    [anon_sym_POUND_SQUOTE] = ACTIONS(243),
    [anon_sym_SQUOTE] = ACTIONS(243),
    [anon_sym_BQUOTE] = ACTIONS(243),
    [anon_sym_COMMA_AT] = ACTIONS(243),
    [anon_sym_COMMA] = ACTIONS(245),
    [aux_sym_float_token1] = ACTIONS(245),
    [aux_sym_float_token2] = ACTIONS(245),
    [aux_sym_float_token3] = ACTIONS(245),
    [aux_sym_float_token4] = ACTIONS(245),
    [aux_sym_float_token5] = ACTIONS(245),
    [aux_sym_integer_token1] = ACTIONS(245),
    [aux_sym_integer_token2] = ACTIONS(243),
    [sym_char] = ACTIONS(245),
    [sym_string] = ACTIONS(243),
    [sym_byte_compiled_file_name] = ACTIONS(243),
    [sym_symbol] = ACTIONS(245),
    [anon_sym_LPAREN] = ACTIONS(243),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(243),
    [anon_sym_RBRACK] = ACTIONS(243),
    [anon_sym_POUND_LBRACK] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(247),
    [anon_sym_POUND_SQUOTE] = ACTIONS(247),
    [anon_sym_SQUOTE] = ACTIONS(247),
    [anon_sym_BQUOTE] = ACTIONS(247),
    [anon_sym_COMMA_AT] = ACTIONS(247),
    [anon_sym_COMMA] = ACTIONS(249),
    [aux_sym_float_token1] = ACTIONS(249),
    [aux_sym_float_token2] = ACTIONS(249),
    [aux_sym_float_token3] = ACTIONS(249),
    [aux_sym_float_token4] = ACTIONS(249),
    [aux_sym_float_token5] = ACTIONS(249),
    [aux_sym_integer_token1] = ACTIONS(249),
    [aux_sym_integer_token2] = ACTIONS(247),
    [sym_char] = ACTIONS(249),
    [sym_string] = ACTIONS(247),
    [sym_byte_compiled_file_name] = ACTIONS(247),
    [sym_symbol] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_RBRACK] = ACTIONS(247),
    [anon_sym_POUND_LBRACK] = ACTIONS(247),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_POUND_SQUOTE] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(251),
    [anon_sym_BQUOTE] = ACTIONS(251),
    [anon_sym_COMMA_AT] = ACTIONS(251),
    [anon_sym_COMMA] = ACTIONS(253),
    [aux_sym_float_token1] = ACTIONS(253),
    [aux_sym_float_token2] = ACTIONS(253),
    [aux_sym_float_token3] = ACTIONS(253),
    [aux_sym_float_token4] = ACTIONS(253),
    [aux_sym_float_token5] = ACTIONS(253),
    [aux_sym_integer_token1] = ACTIONS(253),
    [aux_sym_integer_token2] = ACTIONS(251),
    [sym_char] = ACTIONS(253),
    [sym_string] = ACTIONS(251),
    [sym_byte_compiled_file_name] = ACTIONS(251),
    [sym_symbol] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_LBRACK] = ACTIONS(251),
    [anon_sym_RBRACK] = ACTIONS(251),
    [anon_sym_POUND_LBRACK] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(255),
    [anon_sym_POUND_SQUOTE] = ACTIONS(255),
    [anon_sym_SQUOTE] = ACTIONS(255),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [anon_sym_COMMA_AT] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(257),
    [aux_sym_float_token1] = ACTIONS(257),
    [aux_sym_float_token2] = ACTIONS(257),
    [aux_sym_float_token3] = ACTIONS(257),
    [aux_sym_float_token4] = ACTIONS(257),
    [aux_sym_float_token5] = ACTIONS(257),
    [aux_sym_integer_token1] = ACTIONS(257),
    [aux_sym_integer_token2] = ACTIONS(255),
    [sym_char] = ACTIONS(257),
    [sym_string] = ACTIONS(255),
    [sym_byte_compiled_file_name] = ACTIONS(255),
    [sym_symbol] = ACTIONS(257),
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_RPAREN] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(255),
    [anon_sym_RBRACK] = ACTIONS(255),
    [anon_sym_POUND_LBRACK] = ACTIONS(255),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [anon_sym_POUND_SQUOTE] = ACTIONS(259),
    [anon_sym_SQUOTE] = ACTIONS(259),
    [anon_sym_BQUOTE] = ACTIONS(259),
    [anon_sym_COMMA_AT] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(261),
    [aux_sym_float_token1] = ACTIONS(261),
    [aux_sym_float_token2] = ACTIONS(261),
    [aux_sym_float_token3] = ACTIONS(261),
    [aux_sym_float_token4] = ACTIONS(261),
    [aux_sym_float_token5] = ACTIONS(261),
    [aux_sym_integer_token1] = ACTIONS(261),
    [aux_sym_integer_token2] = ACTIONS(259),
    [sym_char] = ACTIONS(261),
    [sym_string] = ACTIONS(259),
    [sym_byte_compiled_file_name] = ACTIONS(259),
    [sym_symbol] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_RPAREN] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_RBRACK] = ACTIONS(259),
    [anon_sym_POUND_LBRACK] = ACTIONS(259),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [anon_sym_POUND_SQUOTE] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(239),
    [anon_sym_BQUOTE] = ACTIONS(239),
    [anon_sym_COMMA_AT] = ACTIONS(239),
    [anon_sym_COMMA] = ACTIONS(241),
    [aux_sym_float_token1] = ACTIONS(241),
    [aux_sym_float_token2] = ACTIONS(241),
    [aux_sym_float_token3] = ACTIONS(241),
    [aux_sym_float_token4] = ACTIONS(241),
    [aux_sym_float_token5] = ACTIONS(241),
    [aux_sym_integer_token1] = ACTIONS(241),
    [aux_sym_integer_token2] = ACTIONS(239),
    [sym_char] = ACTIONS(241),
    [sym_string] = ACTIONS(239),
    [sym_byte_compiled_file_name] = ACTIONS(239),
    [sym_symbol] = ACTIONS(241),
    [sym_dot] = ACTIONS(241),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(239),
    [anon_sym_POUND_LBRACK] = ACTIONS(239),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [anon_sym_POUND_SQUOTE] = ACTIONS(219),
    [anon_sym_SQUOTE] = ACTIONS(219),
    [anon_sym_BQUOTE] = ACTIONS(219),
    [anon_sym_COMMA_AT] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(221),
    [aux_sym_float_token1] = ACTIONS(221),
    [aux_sym_float_token2] = ACTIONS(221),
    [aux_sym_float_token3] = ACTIONS(221),
    [aux_sym_float_token4] = ACTIONS(221),
    [aux_sym_float_token5] = ACTIONS(221),
    [aux_sym_integer_token1] = ACTIONS(221),
    [aux_sym_integer_token2] = ACTIONS(219),
    [sym_char] = ACTIONS(221),
    [sym_string] = ACTIONS(219),
    [sym_byte_compiled_file_name] = ACTIONS(219),
    [sym_symbol] = ACTIONS(221),
    [sym_dot] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_RPAREN] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_POUND_LBRACK] = ACTIONS(219),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [anon_sym_POUND_SQUOTE] = ACTIONS(247),
    [anon_sym_SQUOTE] = ACTIONS(247),
    [anon_sym_BQUOTE] = ACTIONS(247),
    [anon_sym_COMMA_AT] = ACTIONS(247),
    [anon_sym_COMMA] = ACTIONS(249),
    [aux_sym_float_token1] = ACTIONS(249),
    [aux_sym_float_token2] = ACTIONS(249),
    [aux_sym_float_token3] = ACTIONS(249),
    [aux_sym_float_token4] = ACTIONS(249),
    [aux_sym_float_token5] = ACTIONS(249),
    [aux_sym_integer_token1] = ACTIONS(249),
    [aux_sym_integer_token2] = ACTIONS(247),
    [sym_char] = ACTIONS(249),
    [sym_string] = ACTIONS(247),
    [sym_byte_compiled_file_name] = ACTIONS(247),
    [sym_symbol] = ACTIONS(249),
    [sym_dot] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_POUND_LBRACK] = ACTIONS(247),
    [sym_comment] = ACTIONS(3),
  },
  [40] = {
    [anon_sym_POUND_SQUOTE] = ACTIONS(215),
    [anon_sym_SQUOTE] = ACTIONS(215),
    [anon_sym_BQUOTE] = ACTIONS(215),
    [anon_sym_COMMA_AT] = ACTIONS(215),
    [anon_sym_COMMA] = ACTIONS(217),
    [aux_sym_float_token1] = ACTIONS(217),
    [aux_sym_float_token2] = ACTIONS(217),
    [aux_sym_float_token3] = ACTIONS(217),
    [aux_sym_float_token4] = ACTIONS(217),
    [aux_sym_float_token5] = ACTIONS(217),
    [aux_sym_integer_token1] = ACTIONS(217),
    [aux_sym_integer_token2] = ACTIONS(215),
    [sym_char] = ACTIONS(217),
    [sym_string] = ACTIONS(215),
    [sym_byte_compiled_file_name] = ACTIONS(215),
    [sym_symbol] = ACTIONS(217),
    [sym_dot] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(215),
    [anon_sym_RPAREN] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(215),
    [anon_sym_POUND_LBRACK] = ACTIONS(215),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [anon_sym_POUND_SQUOTE] = ACTIONS(227),
    [anon_sym_SQUOTE] = ACTIONS(227),
    [anon_sym_BQUOTE] = ACTIONS(227),
    [anon_sym_COMMA_AT] = ACTIONS(227),
    [anon_sym_COMMA] = ACTIONS(229),
    [aux_sym_float_token1] = ACTIONS(229),
    [aux_sym_float_token2] = ACTIONS(229),
    [aux_sym_float_token3] = ACTIONS(229),
    [aux_sym_float_token4] = ACTIONS(229),
    [aux_sym_float_token5] = ACTIONS(229),
    [aux_sym_integer_token1] = ACTIONS(229),
    [aux_sym_integer_token2] = ACTIONS(227),
    [sym_char] = ACTIONS(229),
    [sym_string] = ACTIONS(227),
    [sym_byte_compiled_file_name] = ACTIONS(227),
    [sym_symbol] = ACTIONS(229),
    [sym_dot] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(227),
    [anon_sym_RPAREN] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(227),
    [anon_sym_POUND_LBRACK] = ACTIONS(227),
    [sym_comment] = ACTIONS(3),
  },
  [42] = {
    [anon_sym_POUND_SQUOTE] = ACTIONS(255),
    [anon_sym_SQUOTE] = ACTIONS(255),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [anon_sym_COMMA_AT] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(257),
    [aux_sym_float_token1] = ACTIONS(257),
    [aux_sym_float_token2] = ACTIONS(257),
    [aux_sym_float_token3] = ACTIONS(257),
    [aux_sym_float_token4] = ACTIONS(257),
    [aux_sym_float_token5] = ACTIONS(257),
    [aux_sym_integer_token1] = ACTIONS(257),
    [aux_sym_integer_token2] = ACTIONS(255),
    [sym_char] = ACTIONS(257),
    [sym_string] = ACTIONS(255),
    [sym_byte_compiled_file_name] = ACTIONS(255),
    [sym_symbol] = ACTIONS(257),
    [sym_dot] = ACTIONS(257),
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_RPAREN] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(255),
    [anon_sym_POUND_LBRACK] = ACTIONS(255),
    [sym_comment] = ACTIONS(3),
  },
  [43] = {
    [anon_sym_POUND_SQUOTE] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(251),
    [anon_sym_BQUOTE] = ACTIONS(251),
    [anon_sym_COMMA_AT] = ACTIONS(251),
    [anon_sym_COMMA] = ACTIONS(253),
    [aux_sym_float_token1] = ACTIONS(253),
    [aux_sym_float_token2] = ACTIONS(253),
    [aux_sym_float_token3] = ACTIONS(253),
    [aux_sym_float_token4] = ACTIONS(253),
    [aux_sym_float_token5] = ACTIONS(253),
    [aux_sym_integer_token1] = ACTIONS(253),
    [aux_sym_integer_token2] = ACTIONS(251),
    [sym_char] = ACTIONS(253),
    [sym_string] = ACTIONS(251),
    [sym_byte_compiled_file_name] = ACTIONS(251),
    [sym_symbol] = ACTIONS(253),
    [sym_dot] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_LBRACK] = ACTIONS(251),
    [anon_sym_POUND_LBRACK] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [anon_sym_POUND_SQUOTE] = ACTIONS(243),
    [anon_sym_SQUOTE] = ACTIONS(243),
    [anon_sym_BQUOTE] = ACTIONS(243),
    [anon_sym_COMMA_AT] = ACTIONS(243),
    [anon_sym_COMMA] = ACTIONS(245),
    [aux_sym_float_token1] = ACTIONS(245),
    [aux_sym_float_token2] = ACTIONS(245),
    [aux_sym_float_token3] = ACTIONS(245),
    [aux_sym_float_token4] = ACTIONS(245),
    [aux_sym_float_token5] = ACTIONS(245),
    [aux_sym_integer_token1] = ACTIONS(245),
    [aux_sym_integer_token2] = ACTIONS(243),
    [sym_char] = ACTIONS(245),
    [sym_string] = ACTIONS(243),
    [sym_byte_compiled_file_name] = ACTIONS(243),
    [sym_symbol] = ACTIONS(245),
    [sym_dot] = ACTIONS(245),
    [anon_sym_LPAREN] = ACTIONS(243),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(243),
    [anon_sym_POUND_LBRACK] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
  },
  [45] = {
    [anon_sym_POUND_SQUOTE] = ACTIONS(235),
    [anon_sym_SQUOTE] = ACTIONS(235),
    [anon_sym_BQUOTE] = ACTIONS(235),
    [anon_sym_COMMA_AT] = ACTIONS(235),
    [anon_sym_COMMA] = ACTIONS(237),
    [aux_sym_float_token1] = ACTIONS(237),
    [aux_sym_float_token2] = ACTIONS(237),
    [aux_sym_float_token3] = ACTIONS(237),
    [aux_sym_float_token4] = ACTIONS(237),
    [aux_sym_float_token5] = ACTIONS(237),
    [aux_sym_integer_token1] = ACTIONS(237),
    [aux_sym_integer_token2] = ACTIONS(235),
    [sym_char] = ACTIONS(237),
    [sym_string] = ACTIONS(235),
    [sym_byte_compiled_file_name] = ACTIONS(235),
    [sym_symbol] = ACTIONS(237),
    [sym_dot] = ACTIONS(237),
    [anon_sym_LPAREN] = ACTIONS(235),
    [anon_sym_RPAREN] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(235),
    [anon_sym_POUND_LBRACK] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [anon_sym_POUND_SQUOTE] = ACTIONS(231),
    [anon_sym_SQUOTE] = ACTIONS(231),
    [anon_sym_BQUOTE] = ACTIONS(231),
    [anon_sym_COMMA_AT] = ACTIONS(231),
    [anon_sym_COMMA] = ACTIONS(233),
    [aux_sym_float_token1] = ACTIONS(233),
    [aux_sym_float_token2] = ACTIONS(233),
    [aux_sym_float_token3] = ACTIONS(233),
    [aux_sym_float_token4] = ACTIONS(233),
    [aux_sym_float_token5] = ACTIONS(233),
    [aux_sym_integer_token1] = ACTIONS(233),
    [aux_sym_integer_token2] = ACTIONS(231),
    [sym_char] = ACTIONS(233),
    [sym_string] = ACTIONS(231),
    [sym_byte_compiled_file_name] = ACTIONS(231),
    [sym_symbol] = ACTIONS(233),
    [sym_dot] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_RPAREN] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_POUND_LBRACK] = ACTIONS(231),
    [sym_comment] = ACTIONS(3),
  },
  [47] = {
    [anon_sym_POUND_SQUOTE] = ACTIONS(223),
    [anon_sym_SQUOTE] = ACTIONS(223),
    [anon_sym_BQUOTE] = ACTIONS(223),
    [anon_sym_COMMA_AT] = ACTIONS(223),
    [anon_sym_COMMA] = ACTIONS(225),
    [aux_sym_float_token1] = ACTIONS(225),
    [aux_sym_float_token2] = ACTIONS(225),
    [aux_sym_float_token3] = ACTIONS(225),
    [aux_sym_float_token4] = ACTIONS(225),
    [aux_sym_float_token5] = ACTIONS(225),
    [aux_sym_integer_token1] = ACTIONS(225),
    [aux_sym_integer_token2] = ACTIONS(223),
    [sym_char] = ACTIONS(225),
    [sym_string] = ACTIONS(223),
    [sym_byte_compiled_file_name] = ACTIONS(223),
    [sym_symbol] = ACTIONS(225),
    [sym_dot] = ACTIONS(225),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_RPAREN] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_POUND_LBRACK] = ACTIONS(223),
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [anon_sym_POUND_SQUOTE] = ACTIONS(259),
    [anon_sym_SQUOTE] = ACTIONS(259),
    [anon_sym_BQUOTE] = ACTIONS(259),
    [anon_sym_COMMA_AT] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(261),
    [aux_sym_float_token1] = ACTIONS(261),
    [aux_sym_float_token2] = ACTIONS(261),
    [aux_sym_float_token3] = ACTIONS(261),
    [aux_sym_float_token4] = ACTIONS(261),
    [aux_sym_float_token5] = ACTIONS(261),
    [aux_sym_integer_token1] = ACTIONS(261),
    [aux_sym_integer_token2] = ACTIONS(259),
    [sym_char] = ACTIONS(261),
    [sym_string] = ACTIONS(259),
    [sym_byte_compiled_file_name] = ACTIONS(259),
    [sym_symbol] = ACTIONS(261),
    [sym_dot] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_RPAREN] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_POUND_LBRACK] = ACTIONS(259),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
  [7] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
  [14] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
  [21] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
  [28] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(49)] = 0,
  [SMALL_STATE(50)] = 7,
  [SMALL_STATE(51)] = 14,
  [SMALL_STATE(52)] = 21,
  [SMALL_STATE(53)] = 28,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytecode, 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytecode, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytecode, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytecode, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [271] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
