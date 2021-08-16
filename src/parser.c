#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 88
#define LARGE_STATE_COUNT 81
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_float_token1 = 1,
  aux_sym_float_token2 = 2,
  aux_sym_float_token3 = 3,
  aux_sym_float_token4 = 4,
  aux_sym_float_token5 = 5,
  aux_sym_integer_token1 = 6,
  aux_sym_integer_token2 = 7,
  sym_char = 8,
  sym_string = 9,
  sym_byte_compiled_file_name = 10,
  aux_sym_symbol_token1 = 11,
  aux_sym_symbol_token2 = 12,
  anon_sym_POUND_SQUOTE = 13,
  anon_sym_SQUOTE = 14,
  anon_sym_BQUOTE = 15,
  anon_sym_COMMA_AT = 16,
  anon_sym_COMMA = 17,
  sym_dot = 18,
  anon_sym_LPAREN = 19,
  anon_sym_RPAREN = 20,
  anon_sym_LBRACK = 21,
  anon_sym_RBRACK = 22,
  anon_sym_POUND_LBRACK = 23,
  sym_comment = 24,
  sym_source_file = 25,
  sym__sexp = 26,
  sym__atom = 27,
  sym_float = 28,
  sym_integer = 29,
  sym_symbol = 30,
  sym_quote = 31,
  sym_unquote_splice = 32,
  sym_unquote = 33,
  sym_list = 34,
  sym_vector = 35,
  sym_bytecode = 36,
  aux_sym_source_file_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [aux_sym_symbol_token1] = "symbol_token1",
  [aux_sym_symbol_token2] = "symbol_token2",
  [anon_sym_POUND_SQUOTE] = "#'",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_COMMA_AT] = ",@",
  [anon_sym_COMMA] = ",",
  [sym_dot] = "dot",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_POUND_LBRACK] = "#[",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__sexp] = "_sexp",
  [sym__atom] = "_atom",
  [sym_float] = "float",
  [sym_integer] = "integer",
  [sym_symbol] = "symbol",
  [sym_quote] = "quote",
  [sym_unquote_splice] = "unquote_splice",
  [sym_unquote] = "unquote",
  [sym_list] = "list",
  [sym_vector] = "vector",
  [sym_bytecode] = "bytecode",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [aux_sym_symbol_token1] = aux_sym_symbol_token1,
  [aux_sym_symbol_token2] = aux_sym_symbol_token2,
  [anon_sym_POUND_SQUOTE] = anon_sym_POUND_SQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_COMMA_AT] = anon_sym_COMMA_AT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_dot] = sym_dot,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_POUND_LBRACK] = anon_sym_POUND_LBRACK,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__sexp] = sym__sexp,
  [sym__atom] = sym__atom,
  [sym_float] = sym_float,
  [sym_integer] = sym_integer,
  [sym_symbol] = sym_symbol,
  [sym_quote] = sym_quote,
  [sym_unquote_splice] = sym_unquote_splice,
  [sym_unquote] = sym_unquote,
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
  [aux_sym_symbol_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbol_token2] = {
    .visible = false,
    .named = false,
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
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote_splice] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote] = {
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

static inline bool aux_sym_symbol_token2_character_set_1(int32_t c) {
  return (c < '<'
    ? (c < '*'
      ? (c < '$'
        ? c == '!'
        : c <= '%')
      : (c <= '+' || (c >= '-' && c <= ':')))
    : (c <= 'Z' || (c < 'a'
      ? (c < '_'
        ? c == '\\'
        : c <= '_')
      : (c <= '~' || c == 955))));
}

static inline bool aux_sym_symbol_token2_character_set_2(int32_t c) {
  return (c < '<'
    ? (c < '*'
      ? (c < '$'
        ? c == '!'
        : c <= '%')
      : (c <= '*' || (c >= '-' && c <= ':')))
    : (c <= 'Z' || (c < 'a'
      ? (c < '_'
        ? c == '\\'
        : c <= '_')
      : (c <= '~' || c == 955))));
}

static inline bool aux_sym_symbol_token2_character_set_3(int32_t c) {
  return (c < '<'
    ? (c < '*'
      ? (c < '$'
        ? c == '!'
        : c <= '%')
      : (c <= '+' || (c >= '-' && c <= ':')))
    : (c <= 'Z' || (c < 'b'
      ? (c < '_'
        ? c == '\\'
        : c <= '_')
      : (c <= '~' || c == 955))));
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
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '0') ADVANCE(33);
      if (lookahead == '1') ADVANCE(39);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '?') ADVANCE(67);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead == ']') ADVANCE(85);
      if (lookahead == '`') ADVANCE(78);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('!' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '~') ||
          lookahead == 955) ADVANCE(75);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(48);
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead == '[') ADVANCE(86);
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
      if (lookahead == 'F') ADVANCE(29);
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
      if (lookahead == 'N') ADVANCE(31);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 18:
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
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
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '0') ADVANCE(33);
      if (lookahead == '1') ADVANCE(39);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '?') ADVANCE(67);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead == ']') ADVANCE(85);
      if (lookahead == '`') ADVANCE(78);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('!' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '~') ||
          lookahead == 955) ADVANCE(75);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_float_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_float_token4);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_float_token4);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_float_token5);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_float_token5);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '0') ADVANCE(38);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '0') ADVANCE(22);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '0') ADVANCE(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_char);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_char);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_byte_compiled_file_name);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (aux_sym_symbol_token2_character_set_2(lookahead)) ADVANCE(75);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (aux_sym_symbol_token2_character_set_2(lookahead)) ADVANCE(75);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(64);
      if (aux_sym_symbol_token2_character_set_2(lookahead)) ADVANCE(75);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (aux_sym_symbol_token2_character_set_2(lookahead)) ADVANCE(75);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (aux_sym_symbol_token2_character_set_2(lookahead)) ADVANCE(75);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(63);
      if (aux_sym_symbol_token2_character_set_2(lookahead)) ADVANCE(75);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '0') ADVANCE(33);
      if (lookahead == '1') ADVANCE(39);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '.') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '0') ADVANCE(25);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '0') ADVANCE(70);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '0') ADVANCE(26);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '0') ADVANCE(71);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'F') ADVANCE(30);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'I') ADVANCE(65);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'N') ADVANCE(68);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'N') ADVANCE(62);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'N') ADVANCE(32);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '~') ||
          lookahead == 955) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'a') ADVANCE(66);
      if (aux_sym_symbol_token2_character_set_3(lookahead)) ADVANCE(75);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(49);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('_' <= lookahead && lookahead <= '~') ||
          lookahead == 955) ADVANCE(75);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(79);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_dot);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACK);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead != 0) ADVANCE(88);
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
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
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
  [37] = {.lex_state = 20},
  [38] = {.lex_state = 20},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 20},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 20},
  [51] = {.lex_state = 20},
  [52] = {.lex_state = 20},
  [53] = {.lex_state = 20},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 20},
  [57] = {.lex_state = 20},
  [58] = {.lex_state = 20},
  [59] = {.lex_state = 20},
  [60] = {.lex_state = 20},
  [61] = {.lex_state = 20},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 20},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 20},
  [66] = {.lex_state = 20},
  [67] = {.lex_state = 20},
  [68] = {.lex_state = 20},
  [69] = {.lex_state = 20},
  [70] = {.lex_state = 20},
  [71] = {.lex_state = 20},
  [72] = {.lex_state = 20},
  [73] = {.lex_state = 20},
  [74] = {.lex_state = 20},
  [75] = {.lex_state = 20},
  [76] = {.lex_state = 20},
  [77] = {.lex_state = 20},
  [78] = {.lex_state = 20},
  [79] = {.lex_state = 20},
  [80] = {.lex_state = 20},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [aux_sym_symbol_token1] = ACTIONS(1),
    [aux_sym_symbol_token2] = ACTIONS(1),
    [anon_sym_POUND_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_COMMA_AT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_POUND_LBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(87),
    [sym__sexp] = STATE(12),
    [sym__atom] = STATE(12),
    [sym_float] = STATE(12),
    [sym_integer] = STATE(12),
    [sym_symbol] = STATE(12),
    [sym_quote] = STATE(12),
    [sym_unquote_splice] = STATE(12),
    [sym_unquote] = STATE(12),
    [sym_list] = STATE(12),
    [sym_vector] = STATE(12),
    [sym_bytecode] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(7),
    [aux_sym_float_token4] = ACTIONS(7),
    [aux_sym_float_token5] = ACTIONS(7),
    [aux_sym_integer_token1] = ACTIONS(9),
    [aux_sym_integer_token2] = ACTIONS(11),
    [sym_char] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
    [sym_byte_compiled_file_name] = ACTIONS(15),
    [aux_sym_symbol_token1] = ACTIONS(17),
    [aux_sym_symbol_token2] = ACTIONS(19),
    [anon_sym_POUND_SQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_COMMA_AT] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_POUND_LBRACK] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__sexp] = STATE(4),
    [sym__atom] = STATE(4),
    [sym_float] = STATE(4),
    [sym_integer] = STATE(4),
    [sym_symbol] = STATE(4),
    [sym_quote] = STATE(4),
    [sym_unquote_splice] = STATE(4),
    [sym_unquote] = STATE(4),
    [sym_list] = STATE(4),
    [sym_vector] = STATE(4),
    [sym_bytecode] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [aux_sym_float_token1] = ACTIONS(33),
    [aux_sym_float_token2] = ACTIONS(33),
    [aux_sym_float_token3] = ACTIONS(33),
    [aux_sym_float_token4] = ACTIONS(33),
    [aux_sym_float_token5] = ACTIONS(33),
    [aux_sym_integer_token1] = ACTIONS(35),
    [aux_sym_integer_token2] = ACTIONS(37),
    [sym_char] = ACTIONS(39),
    [sym_string] = ACTIONS(41),
    [sym_byte_compiled_file_name] = ACTIONS(41),
    [aux_sym_symbol_token1] = ACTIONS(43),
    [aux_sym_symbol_token2] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [sym_dot] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_POUND_LBRACK] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__sexp] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_float] = STATE(2),
    [sym_integer] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote_splice] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_bytecode] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_float_token1] = ACTIONS(33),
    [aux_sym_float_token2] = ACTIONS(33),
    [aux_sym_float_token3] = ACTIONS(33),
    [aux_sym_float_token4] = ACTIONS(33),
    [aux_sym_float_token5] = ACTIONS(33),
    [aux_sym_integer_token1] = ACTIONS(35),
    [aux_sym_integer_token2] = ACTIONS(37),
    [sym_char] = ACTIONS(63),
    [sym_string] = ACTIONS(65),
    [sym_byte_compiled_file_name] = ACTIONS(65),
    [aux_sym_symbol_token1] = ACTIONS(43),
    [aux_sym_symbol_token2] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [sym_dot] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_POUND_LBRACK] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__sexp] = STATE(4),
    [sym__atom] = STATE(4),
    [sym_float] = STATE(4),
    [sym_integer] = STATE(4),
    [sym_symbol] = STATE(4),
    [sym_quote] = STATE(4),
    [sym_unquote_splice] = STATE(4),
    [sym_unquote] = STATE(4),
    [sym_list] = STATE(4),
    [sym_vector] = STATE(4),
    [sym_bytecode] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [aux_sym_float_token1] = ACTIONS(71),
    [aux_sym_float_token2] = ACTIONS(71),
    [aux_sym_float_token3] = ACTIONS(71),
    [aux_sym_float_token4] = ACTIONS(71),
    [aux_sym_float_token5] = ACTIONS(71),
    [aux_sym_integer_token1] = ACTIONS(74),
    [aux_sym_integer_token2] = ACTIONS(77),
    [sym_char] = ACTIONS(80),
    [sym_string] = ACTIONS(83),
    [sym_byte_compiled_file_name] = ACTIONS(83),
    [aux_sym_symbol_token1] = ACTIONS(86),
    [aux_sym_symbol_token2] = ACTIONS(89),
    [anon_sym_POUND_SQUOTE] = ACTIONS(92),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_BQUOTE] = ACTIONS(92),
    [anon_sym_COMMA_AT] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(98),
    [sym_dot] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_POUND_LBRACK] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__sexp] = STATE(4),
    [sym__atom] = STATE(4),
    [sym_float] = STATE(4),
    [sym_integer] = STATE(4),
    [sym_symbol] = STATE(4),
    [sym_quote] = STATE(4),
    [sym_unquote_splice] = STATE(4),
    [sym_unquote] = STATE(4),
    [sym_list] = STATE(4),
    [sym_vector] = STATE(4),
    [sym_bytecode] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [aux_sym_float_token1] = ACTIONS(33),
    [aux_sym_float_token2] = ACTIONS(33),
    [aux_sym_float_token3] = ACTIONS(33),
    [aux_sym_float_token4] = ACTIONS(33),
    [aux_sym_float_token5] = ACTIONS(33),
    [aux_sym_integer_token1] = ACTIONS(35),
    [aux_sym_integer_token2] = ACTIONS(37),
    [sym_char] = ACTIONS(39),
    [sym_string] = ACTIONS(41),
    [sym_byte_compiled_file_name] = ACTIONS(41),
    [aux_sym_symbol_token1] = ACTIONS(43),
    [aux_sym_symbol_token2] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [sym_dot] = ACTIONS(114),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_POUND_LBRACK] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__sexp] = STATE(4),
    [sym__atom] = STATE(4),
    [sym_float] = STATE(4),
    [sym_integer] = STATE(4),
    [sym_symbol] = STATE(4),
    [sym_quote] = STATE(4),
    [sym_unquote_splice] = STATE(4),
    [sym_unquote] = STATE(4),
    [sym_list] = STATE(4),
    [sym_vector] = STATE(4),
    [sym_bytecode] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [aux_sym_float_token1] = ACTIONS(33),
    [aux_sym_float_token2] = ACTIONS(33),
    [aux_sym_float_token3] = ACTIONS(33),
    [aux_sym_float_token4] = ACTIONS(33),
    [aux_sym_float_token5] = ACTIONS(33),
    [aux_sym_integer_token1] = ACTIONS(35),
    [aux_sym_integer_token2] = ACTIONS(37),
    [sym_char] = ACTIONS(39),
    [sym_string] = ACTIONS(41),
    [sym_byte_compiled_file_name] = ACTIONS(41),
    [aux_sym_symbol_token1] = ACTIONS(43),
    [aux_sym_symbol_token2] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [sym_dot] = ACTIONS(118),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_POUND_LBRACK] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__sexp] = STATE(5),
    [sym__atom] = STATE(5),
    [sym_float] = STATE(5),
    [sym_integer] = STATE(5),
    [sym_symbol] = STATE(5),
    [sym_quote] = STATE(5),
    [sym_unquote_splice] = STATE(5),
    [sym_unquote] = STATE(5),
    [sym_list] = STATE(5),
    [sym_vector] = STATE(5),
    [sym_bytecode] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_float_token1] = ACTIONS(33),
    [aux_sym_float_token2] = ACTIONS(33),
    [aux_sym_float_token3] = ACTIONS(33),
    [aux_sym_float_token4] = ACTIONS(33),
    [aux_sym_float_token5] = ACTIONS(33),
    [aux_sym_integer_token1] = ACTIONS(35),
    [aux_sym_integer_token2] = ACTIONS(37),
    [sym_char] = ACTIONS(122),
    [sym_string] = ACTIONS(124),
    [sym_byte_compiled_file_name] = ACTIONS(124),
    [aux_sym_symbol_token1] = ACTIONS(43),
    [aux_sym_symbol_token2] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [sym_dot] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_POUND_LBRACK] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__sexp] = STATE(6),
    [sym__atom] = STATE(6),
    [sym_float] = STATE(6),
    [sym_integer] = STATE(6),
    [sym_symbol] = STATE(6),
    [sym_quote] = STATE(6),
    [sym_unquote_splice] = STATE(6),
    [sym_unquote] = STATE(6),
    [sym_list] = STATE(6),
    [sym_vector] = STATE(6),
    [sym_bytecode] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_float_token1] = ACTIONS(33),
    [aux_sym_float_token2] = ACTIONS(33),
    [aux_sym_float_token3] = ACTIONS(33),
    [aux_sym_float_token4] = ACTIONS(33),
    [aux_sym_float_token5] = ACTIONS(33),
    [aux_sym_integer_token1] = ACTIONS(35),
    [aux_sym_integer_token2] = ACTIONS(37),
    [sym_char] = ACTIONS(130),
    [sym_string] = ACTIONS(132),
    [sym_byte_compiled_file_name] = ACTIONS(132),
    [aux_sym_symbol_token1] = ACTIONS(43),
    [aux_sym_symbol_token2] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [sym_dot] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_POUND_LBRACK] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__sexp] = STATE(18),
    [sym__atom] = STATE(18),
    [sym_float] = STATE(18),
    [sym_integer] = STATE(18),
    [sym_symbol] = STATE(18),
    [sym_quote] = STATE(18),
    [sym_unquote_splice] = STATE(18),
    [sym_unquote] = STATE(18),
    [sym_list] = STATE(18),
    [sym_vector] = STATE(18),
    [sym_bytecode] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(18),
    [aux_sym_float_token1] = ACTIONS(138),
    [aux_sym_float_token2] = ACTIONS(138),
    [aux_sym_float_token3] = ACTIONS(138),
    [aux_sym_float_token4] = ACTIONS(138),
    [aux_sym_float_token5] = ACTIONS(138),
    [aux_sym_integer_token1] = ACTIONS(140),
    [aux_sym_integer_token2] = ACTIONS(142),
    [sym_char] = ACTIONS(144),
    [sym_string] = ACTIONS(146),
    [sym_byte_compiled_file_name] = ACTIONS(146),
    [aux_sym_symbol_token1] = ACTIONS(148),
    [aux_sym_symbol_token2] = ACTIONS(150),
    [anon_sym_POUND_SQUOTE] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [anon_sym_COMMA_AT] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_RBRACK] = ACTIONS(162),
    [anon_sym_POUND_LBRACK] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__sexp] = STATE(20),
    [sym__atom] = STATE(20),
    [sym_float] = STATE(20),
    [sym_integer] = STATE(20),
    [sym_symbol] = STATE(20),
    [sym_quote] = STATE(20),
    [sym_unquote_splice] = STATE(20),
    [sym_unquote] = STATE(20),
    [sym_list] = STATE(20),
    [sym_vector] = STATE(20),
    [sym_bytecode] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(20),
    [aux_sym_float_token1] = ACTIONS(138),
    [aux_sym_float_token2] = ACTIONS(138),
    [aux_sym_float_token3] = ACTIONS(138),
    [aux_sym_float_token4] = ACTIONS(138),
    [aux_sym_float_token5] = ACTIONS(138),
    [aux_sym_integer_token1] = ACTIONS(140),
    [aux_sym_integer_token2] = ACTIONS(142),
    [sym_char] = ACTIONS(166),
    [sym_string] = ACTIONS(168),
    [sym_byte_compiled_file_name] = ACTIONS(168),
    [aux_sym_symbol_token1] = ACTIONS(148),
    [aux_sym_symbol_token2] = ACTIONS(150),
    [anon_sym_POUND_SQUOTE] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [anon_sym_COMMA_AT] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_RBRACK] = ACTIONS(170),
    [anon_sym_POUND_LBRACK] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__sexp] = STATE(9),
    [sym__atom] = STATE(9),
    [sym_float] = STATE(9),
    [sym_integer] = STATE(9),
    [sym_symbol] = STATE(9),
    [sym_quote] = STATE(9),
    [sym_unquote_splice] = STATE(9),
    [sym_unquote] = STATE(9),
    [sym_list] = STATE(9),
    [sym_vector] = STATE(9),
    [sym_bytecode] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_float_token1] = ACTIONS(138),
    [aux_sym_float_token2] = ACTIONS(138),
    [aux_sym_float_token3] = ACTIONS(138),
    [aux_sym_float_token4] = ACTIONS(138),
    [aux_sym_float_token5] = ACTIONS(138),
    [aux_sym_integer_token1] = ACTIONS(140),
    [aux_sym_integer_token2] = ACTIONS(142),
    [sym_char] = ACTIONS(172),
    [sym_string] = ACTIONS(174),
    [sym_byte_compiled_file_name] = ACTIONS(174),
    [aux_sym_symbol_token1] = ACTIONS(148),
    [aux_sym_symbol_token2] = ACTIONS(150),
    [anon_sym_POUND_SQUOTE] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [anon_sym_COMMA_AT] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_RBRACK] = ACTIONS(176),
    [anon_sym_POUND_LBRACK] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym__sexp] = STATE(19),
    [sym__atom] = STATE(19),
    [sym_float] = STATE(19),
    [sym_integer] = STATE(19),
    [sym_symbol] = STATE(19),
    [sym_quote] = STATE(19),
    [sym_unquote_splice] = STATE(19),
    [sym_unquote] = STATE(19),
    [sym_list] = STATE(19),
    [sym_vector] = STATE(19),
    [sym_bytecode] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(178),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(7),
    [aux_sym_float_token4] = ACTIONS(7),
    [aux_sym_float_token5] = ACTIONS(7),
    [aux_sym_integer_token1] = ACTIONS(9),
    [aux_sym_integer_token2] = ACTIONS(11),
    [sym_char] = ACTIONS(180),
    [sym_string] = ACTIONS(182),
    [sym_byte_compiled_file_name] = ACTIONS(182),
    [aux_sym_symbol_token1] = ACTIONS(17),
    [aux_sym_symbol_token2] = ACTIONS(19),
    [anon_sym_POUND_SQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_COMMA_AT] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_POUND_LBRACK] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym__sexp] = STATE(18),
    [sym__atom] = STATE(18),
    [sym_float] = STATE(18),
    [sym_integer] = STATE(18),
    [sym_symbol] = STATE(18),
    [sym_quote] = STATE(18),
    [sym_unquote_splice] = STATE(18),
    [sym_unquote] = STATE(18),
    [sym_list] = STATE(18),
    [sym_vector] = STATE(18),
    [sym_bytecode] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(18),
    [aux_sym_float_token1] = ACTIONS(138),
    [aux_sym_float_token2] = ACTIONS(138),
    [aux_sym_float_token3] = ACTIONS(138),
    [aux_sym_float_token4] = ACTIONS(138),
    [aux_sym_float_token5] = ACTIONS(138),
    [aux_sym_integer_token1] = ACTIONS(140),
    [aux_sym_integer_token2] = ACTIONS(142),
    [sym_char] = ACTIONS(144),
    [sym_string] = ACTIONS(146),
    [sym_byte_compiled_file_name] = ACTIONS(146),
    [aux_sym_symbol_token1] = ACTIONS(148),
    [aux_sym_symbol_token2] = ACTIONS(150),
    [anon_sym_POUND_SQUOTE] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [anon_sym_COMMA_AT] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_RBRACK] = ACTIONS(184),
    [anon_sym_POUND_LBRACK] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym__sexp] = STATE(18),
    [sym__atom] = STATE(18),
    [sym_float] = STATE(18),
    [sym_integer] = STATE(18),
    [sym_symbol] = STATE(18),
    [sym_quote] = STATE(18),
    [sym_unquote_splice] = STATE(18),
    [sym_unquote] = STATE(18),
    [sym_list] = STATE(18),
    [sym_vector] = STATE(18),
    [sym_bytecode] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(18),
    [aux_sym_float_token1] = ACTIONS(138),
    [aux_sym_float_token2] = ACTIONS(138),
    [aux_sym_float_token3] = ACTIONS(138),
    [aux_sym_float_token4] = ACTIONS(138),
    [aux_sym_float_token5] = ACTIONS(138),
    [aux_sym_integer_token1] = ACTIONS(140),
    [aux_sym_integer_token2] = ACTIONS(142),
    [sym_char] = ACTIONS(144),
    [sym_string] = ACTIONS(146),
    [sym_byte_compiled_file_name] = ACTIONS(146),
    [aux_sym_symbol_token1] = ACTIONS(148),
    [aux_sym_symbol_token2] = ACTIONS(150),
    [anon_sym_POUND_SQUOTE] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [anon_sym_COMMA_AT] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_RBRACK] = ACTIONS(186),
    [anon_sym_POUND_LBRACK] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym__sexp] = STATE(18),
    [sym__atom] = STATE(18),
    [sym_float] = STATE(18),
    [sym_integer] = STATE(18),
    [sym_symbol] = STATE(18),
    [sym_quote] = STATE(18),
    [sym_unquote_splice] = STATE(18),
    [sym_unquote] = STATE(18),
    [sym_list] = STATE(18),
    [sym_vector] = STATE(18),
    [sym_bytecode] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(18),
    [aux_sym_float_token1] = ACTIONS(138),
    [aux_sym_float_token2] = ACTIONS(138),
    [aux_sym_float_token3] = ACTIONS(138),
    [aux_sym_float_token4] = ACTIONS(138),
    [aux_sym_float_token5] = ACTIONS(138),
    [aux_sym_integer_token1] = ACTIONS(140),
    [aux_sym_integer_token2] = ACTIONS(142),
    [sym_char] = ACTIONS(144),
    [sym_string] = ACTIONS(146),
    [sym_byte_compiled_file_name] = ACTIONS(146),
    [aux_sym_symbol_token1] = ACTIONS(148),
    [aux_sym_symbol_token2] = ACTIONS(150),
    [anon_sym_POUND_SQUOTE] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [anon_sym_COMMA_AT] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_RBRACK] = ACTIONS(188),
    [anon_sym_POUND_LBRACK] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym__sexp] = STATE(15),
    [sym__atom] = STATE(15),
    [sym_float] = STATE(15),
    [sym_integer] = STATE(15),
    [sym_symbol] = STATE(15),
    [sym_quote] = STATE(15),
    [sym_unquote_splice] = STATE(15),
    [sym_unquote] = STATE(15),
    [sym_list] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_bytecode] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [aux_sym_float_token1] = ACTIONS(138),
    [aux_sym_float_token2] = ACTIONS(138),
    [aux_sym_float_token3] = ACTIONS(138),
    [aux_sym_float_token4] = ACTIONS(138),
    [aux_sym_float_token5] = ACTIONS(138),
    [aux_sym_integer_token1] = ACTIONS(140),
    [aux_sym_integer_token2] = ACTIONS(142),
    [sym_char] = ACTIONS(190),
    [sym_string] = ACTIONS(192),
    [sym_byte_compiled_file_name] = ACTIONS(192),
    [aux_sym_symbol_token1] = ACTIONS(148),
    [aux_sym_symbol_token2] = ACTIONS(150),
    [anon_sym_POUND_SQUOTE] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [anon_sym_COMMA_AT] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_RBRACK] = ACTIONS(194),
    [anon_sym_POUND_LBRACK] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym__sexp] = STATE(13),
    [sym__atom] = STATE(13),
    [sym_float] = STATE(13),
    [sym_integer] = STATE(13),
    [sym_symbol] = STATE(13),
    [sym_quote] = STATE(13),
    [sym_unquote_splice] = STATE(13),
    [sym_unquote] = STATE(13),
    [sym_list] = STATE(13),
    [sym_vector] = STATE(13),
    [sym_bytecode] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [aux_sym_float_token1] = ACTIONS(138),
    [aux_sym_float_token2] = ACTIONS(138),
    [aux_sym_float_token3] = ACTIONS(138),
    [aux_sym_float_token4] = ACTIONS(138),
    [aux_sym_float_token5] = ACTIONS(138),
    [aux_sym_integer_token1] = ACTIONS(140),
    [aux_sym_integer_token2] = ACTIONS(142),
    [sym_char] = ACTIONS(196),
    [sym_string] = ACTIONS(198),
    [sym_byte_compiled_file_name] = ACTIONS(198),
    [aux_sym_symbol_token1] = ACTIONS(148),
    [aux_sym_symbol_token2] = ACTIONS(150),
    [anon_sym_POUND_SQUOTE] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [anon_sym_COMMA_AT] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_RBRACK] = ACTIONS(200),
    [anon_sym_POUND_LBRACK] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym__sexp] = STATE(18),
    [sym__atom] = STATE(18),
    [sym_float] = STATE(18),
    [sym_integer] = STATE(18),
    [sym_symbol] = STATE(18),
    [sym_quote] = STATE(18),
    [sym_unquote_splice] = STATE(18),
    [sym_unquote] = STATE(18),
    [sym_list] = STATE(18),
    [sym_vector] = STATE(18),
    [sym_bytecode] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(18),
    [aux_sym_float_token1] = ACTIONS(202),
    [aux_sym_float_token2] = ACTIONS(202),
    [aux_sym_float_token3] = ACTIONS(202),
    [aux_sym_float_token4] = ACTIONS(202),
    [aux_sym_float_token5] = ACTIONS(202),
    [aux_sym_integer_token1] = ACTIONS(205),
    [aux_sym_integer_token2] = ACTIONS(208),
    [sym_char] = ACTIONS(211),
    [sym_string] = ACTIONS(214),
    [sym_byte_compiled_file_name] = ACTIONS(214),
    [aux_sym_symbol_token1] = ACTIONS(217),
    [aux_sym_symbol_token2] = ACTIONS(220),
    [anon_sym_POUND_SQUOTE] = ACTIONS(223),
    [anon_sym_SQUOTE] = ACTIONS(223),
    [anon_sym_BQUOTE] = ACTIONS(223),
    [anon_sym_COMMA_AT] = ACTIONS(226),
    [anon_sym_COMMA] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(232),
    [anon_sym_LBRACK] = ACTIONS(235),
    [anon_sym_RBRACK] = ACTIONS(106),
    [anon_sym_POUND_LBRACK] = ACTIONS(238),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym__sexp] = STATE(19),
    [sym__atom] = STATE(19),
    [sym_float] = STATE(19),
    [sym_integer] = STATE(19),
    [sym_symbol] = STATE(19),
    [sym_quote] = STATE(19),
    [sym_unquote_splice] = STATE(19),
    [sym_unquote] = STATE(19),
    [sym_list] = STATE(19),
    [sym_vector] = STATE(19),
    [sym_bytecode] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(106),
    [aux_sym_float_token1] = ACTIONS(241),
    [aux_sym_float_token2] = ACTIONS(241),
    [aux_sym_float_token3] = ACTIONS(241),
    [aux_sym_float_token4] = ACTIONS(241),
    [aux_sym_float_token5] = ACTIONS(241),
    [aux_sym_integer_token1] = ACTIONS(244),
    [aux_sym_integer_token2] = ACTIONS(247),
    [sym_char] = ACTIONS(250),
    [sym_string] = ACTIONS(253),
    [sym_byte_compiled_file_name] = ACTIONS(253),
    [aux_sym_symbol_token1] = ACTIONS(256),
    [aux_sym_symbol_token2] = ACTIONS(259),
    [anon_sym_POUND_SQUOTE] = ACTIONS(262),
    [anon_sym_SQUOTE] = ACTIONS(262),
    [anon_sym_BQUOTE] = ACTIONS(262),
    [anon_sym_COMMA_AT] = ACTIONS(265),
    [anon_sym_COMMA] = ACTIONS(268),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(274),
    [anon_sym_POUND_LBRACK] = ACTIONS(277),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym__sexp] = STATE(18),
    [sym__atom] = STATE(18),
    [sym_float] = STATE(18),
    [sym_integer] = STATE(18),
    [sym_symbol] = STATE(18),
    [sym_quote] = STATE(18),
    [sym_unquote_splice] = STATE(18),
    [sym_unquote] = STATE(18),
    [sym_list] = STATE(18),
    [sym_vector] = STATE(18),
    [sym_bytecode] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(18),
    [aux_sym_float_token1] = ACTIONS(138),
    [aux_sym_float_token2] = ACTIONS(138),
    [aux_sym_float_token3] = ACTIONS(138),
    [aux_sym_float_token4] = ACTIONS(138),
    [aux_sym_float_token5] = ACTIONS(138),
    [aux_sym_integer_token1] = ACTIONS(140),
    [aux_sym_integer_token2] = ACTIONS(142),
    [sym_char] = ACTIONS(144),
    [sym_string] = ACTIONS(146),
    [sym_byte_compiled_file_name] = ACTIONS(146),
    [aux_sym_symbol_token1] = ACTIONS(148),
    [aux_sym_symbol_token2] = ACTIONS(150),
    [anon_sym_POUND_SQUOTE] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [anon_sym_COMMA_AT] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_RBRACK] = ACTIONS(280),
    [anon_sym_POUND_LBRACK] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym__sexp] = STATE(18),
    [sym__atom] = STATE(18),
    [sym_float] = STATE(18),
    [sym_integer] = STATE(18),
    [sym_symbol] = STATE(18),
    [sym_quote] = STATE(18),
    [sym_unquote_splice] = STATE(18),
    [sym_unquote] = STATE(18),
    [sym_list] = STATE(18),
    [sym_vector] = STATE(18),
    [sym_bytecode] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(18),
    [aux_sym_float_token1] = ACTIONS(138),
    [aux_sym_float_token2] = ACTIONS(138),
    [aux_sym_float_token3] = ACTIONS(138),
    [aux_sym_float_token4] = ACTIONS(138),
    [aux_sym_float_token5] = ACTIONS(138),
    [aux_sym_integer_token1] = ACTIONS(140),
    [aux_sym_integer_token2] = ACTIONS(142),
    [sym_char] = ACTIONS(144),
    [sym_string] = ACTIONS(146),
    [sym_byte_compiled_file_name] = ACTIONS(146),
    [aux_sym_symbol_token1] = ACTIONS(148),
    [aux_sym_symbol_token2] = ACTIONS(150),
    [anon_sym_POUND_SQUOTE] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [anon_sym_COMMA_AT] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_RBRACK] = ACTIONS(282),
    [anon_sym_POUND_LBRACK] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym__sexp] = STATE(21),
    [sym__atom] = STATE(21),
    [sym_float] = STATE(21),
    [sym_integer] = STATE(21),
    [sym_symbol] = STATE(21),
    [sym_quote] = STATE(21),
    [sym_unquote_splice] = STATE(21),
    [sym_unquote] = STATE(21),
    [sym_list] = STATE(21),
    [sym_vector] = STATE(21),
    [sym_bytecode] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(21),
    [aux_sym_float_token1] = ACTIONS(138),
    [aux_sym_float_token2] = ACTIONS(138),
    [aux_sym_float_token3] = ACTIONS(138),
    [aux_sym_float_token4] = ACTIONS(138),
    [aux_sym_float_token5] = ACTIONS(138),
    [aux_sym_integer_token1] = ACTIONS(140),
    [aux_sym_integer_token2] = ACTIONS(142),
    [sym_char] = ACTIONS(284),
    [sym_string] = ACTIONS(286),
    [sym_byte_compiled_file_name] = ACTIONS(286),
    [aux_sym_symbol_token1] = ACTIONS(148),
    [aux_sym_symbol_token2] = ACTIONS(150),
    [anon_sym_POUND_SQUOTE] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [anon_sym_COMMA_AT] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_RBRACK] = ACTIONS(288),
    [anon_sym_POUND_LBRACK] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym__sexp] = STATE(14),
    [sym__atom] = STATE(14),
    [sym_float] = STATE(14),
    [sym_integer] = STATE(14),
    [sym_symbol] = STATE(14),
    [sym_quote] = STATE(14),
    [sym_unquote_splice] = STATE(14),
    [sym_unquote] = STATE(14),
    [sym_list] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_bytecode] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [aux_sym_float_token1] = ACTIONS(138),
    [aux_sym_float_token2] = ACTIONS(138),
    [aux_sym_float_token3] = ACTIONS(138),
    [aux_sym_float_token4] = ACTIONS(138),
    [aux_sym_float_token5] = ACTIONS(138),
    [aux_sym_integer_token1] = ACTIONS(140),
    [aux_sym_integer_token2] = ACTIONS(142),
    [sym_char] = ACTIONS(290),
    [sym_string] = ACTIONS(292),
    [sym_byte_compiled_file_name] = ACTIONS(292),
    [aux_sym_symbol_token1] = ACTIONS(148),
    [aux_sym_symbol_token2] = ACTIONS(150),
    [anon_sym_POUND_SQUOTE] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [anon_sym_COMMA_AT] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_RBRACK] = ACTIONS(294),
    [anon_sym_POUND_LBRACK] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym__sexp] = STATE(84),
    [sym__atom] = STATE(84),
    [sym_float] = STATE(84),
    [sym_integer] = STATE(84),
    [sym_symbol] = STATE(84),
    [sym_quote] = STATE(84),
    [sym_unquote_splice] = STATE(84),
    [sym_unquote] = STATE(84),
    [sym_list] = STATE(84),
    [sym_vector] = STATE(84),
    [sym_bytecode] = STATE(84),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(7),
    [aux_sym_float_token4] = ACTIONS(7),
    [aux_sym_float_token5] = ACTIONS(7),
    [aux_sym_integer_token1] = ACTIONS(9),
    [aux_sym_integer_token2] = ACTIONS(11),
    [sym_char] = ACTIONS(296),
    [sym_string] = ACTIONS(298),
    [sym_byte_compiled_file_name] = ACTIONS(298),
    [aux_sym_symbol_token1] = ACTIONS(17),
    [aux_sym_symbol_token2] = ACTIONS(19),
    [anon_sym_POUND_SQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_COMMA_AT] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_POUND_LBRACK] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym__sexp] = STATE(81),
    [sym__atom] = STATE(81),
    [sym_float] = STATE(81),
    [sym_integer] = STATE(81),
    [sym_symbol] = STATE(81),
    [sym_quote] = STATE(81),
    [sym_unquote_splice] = STATE(81),
    [sym_unquote] = STATE(81),
    [sym_list] = STATE(81),
    [sym_vector] = STATE(81),
    [sym_bytecode] = STATE(81),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(7),
    [aux_sym_float_token4] = ACTIONS(7),
    [aux_sym_float_token5] = ACTIONS(7),
    [aux_sym_integer_token1] = ACTIONS(9),
    [aux_sym_integer_token2] = ACTIONS(11),
    [sym_char] = ACTIONS(300),
    [sym_string] = ACTIONS(302),
    [sym_byte_compiled_file_name] = ACTIONS(302),
    [aux_sym_symbol_token1] = ACTIONS(17),
    [aux_sym_symbol_token2] = ACTIONS(19),
    [anon_sym_POUND_SQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_COMMA_AT] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_POUND_LBRACK] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [sym__sexp] = STATE(82),
    [sym__atom] = STATE(82),
    [sym_float] = STATE(82),
    [sym_integer] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_quote] = STATE(82),
    [sym_unquote_splice] = STATE(82),
    [sym_unquote] = STATE(82),
    [sym_list] = STATE(82),
    [sym_vector] = STATE(82),
    [sym_bytecode] = STATE(82),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(7),
    [aux_sym_float_token4] = ACTIONS(7),
    [aux_sym_float_token5] = ACTIONS(7),
    [aux_sym_integer_token1] = ACTIONS(9),
    [aux_sym_integer_token2] = ACTIONS(11),
    [sym_char] = ACTIONS(304),
    [sym_string] = ACTIONS(306),
    [sym_byte_compiled_file_name] = ACTIONS(306),
    [aux_sym_symbol_token1] = ACTIONS(17),
    [aux_sym_symbol_token2] = ACTIONS(19),
    [anon_sym_POUND_SQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_COMMA_AT] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_POUND_LBRACK] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym__sexp] = STATE(86),
    [sym__atom] = STATE(86),
    [sym_float] = STATE(86),
    [sym_integer] = STATE(86),
    [sym_symbol] = STATE(86),
    [sym_quote] = STATE(86),
    [sym_unquote_splice] = STATE(86),
    [sym_unquote] = STATE(86),
    [sym_list] = STATE(86),
    [sym_vector] = STATE(86),
    [sym_bytecode] = STATE(86),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(7),
    [aux_sym_float_token4] = ACTIONS(7),
    [aux_sym_float_token5] = ACTIONS(7),
    [aux_sym_integer_token1] = ACTIONS(9),
    [aux_sym_integer_token2] = ACTIONS(11),
    [sym_char] = ACTIONS(308),
    [sym_string] = ACTIONS(310),
    [sym_byte_compiled_file_name] = ACTIONS(310),
    [aux_sym_symbol_token1] = ACTIONS(17),
    [aux_sym_symbol_token2] = ACTIONS(19),
    [anon_sym_POUND_SQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_COMMA_AT] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_POUND_LBRACK] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym__sexp] = STATE(40),
    [sym__atom] = STATE(40),
    [sym_float] = STATE(40),
    [sym_integer] = STATE(40),
    [sym_symbol] = STATE(40),
    [sym_quote] = STATE(40),
    [sym_unquote_splice] = STATE(40),
    [sym_unquote] = STATE(40),
    [sym_list] = STATE(40),
    [sym_vector] = STATE(40),
    [sym_bytecode] = STATE(40),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(7),
    [aux_sym_float_token4] = ACTIONS(7),
    [aux_sym_float_token5] = ACTIONS(7),
    [aux_sym_integer_token1] = ACTIONS(9),
    [aux_sym_integer_token2] = ACTIONS(11),
    [sym_char] = ACTIONS(312),
    [sym_string] = ACTIONS(314),
    [sym_byte_compiled_file_name] = ACTIONS(314),
    [aux_sym_symbol_token1] = ACTIONS(17),
    [aux_sym_symbol_token2] = ACTIONS(19),
    [anon_sym_POUND_SQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_COMMA_AT] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_POUND_LBRACK] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [sym__sexp] = STATE(83),
    [sym__atom] = STATE(83),
    [sym_float] = STATE(83),
    [sym_integer] = STATE(83),
    [sym_symbol] = STATE(83),
    [sym_quote] = STATE(83),
    [sym_unquote_splice] = STATE(83),
    [sym_unquote] = STATE(83),
    [sym_list] = STATE(83),
    [sym_vector] = STATE(83),
    [sym_bytecode] = STATE(83),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(7),
    [aux_sym_float_token4] = ACTIONS(7),
    [aux_sym_float_token5] = ACTIONS(7),
    [aux_sym_integer_token1] = ACTIONS(9),
    [aux_sym_integer_token2] = ACTIONS(11),
    [sym_char] = ACTIONS(316),
    [sym_string] = ACTIONS(318),
    [sym_byte_compiled_file_name] = ACTIONS(318),
    [aux_sym_symbol_token1] = ACTIONS(17),
    [aux_sym_symbol_token2] = ACTIONS(19),
    [anon_sym_POUND_SQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_COMMA_AT] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_POUND_LBRACK] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [sym__sexp] = STATE(85),
    [sym__atom] = STATE(85),
    [sym_float] = STATE(85),
    [sym_integer] = STATE(85),
    [sym_symbol] = STATE(85),
    [sym_quote] = STATE(85),
    [sym_unquote_splice] = STATE(85),
    [sym_unquote] = STATE(85),
    [sym_list] = STATE(85),
    [sym_vector] = STATE(85),
    [sym_bytecode] = STATE(85),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(7),
    [aux_sym_float_token4] = ACTIONS(7),
    [aux_sym_float_token5] = ACTIONS(7),
    [aux_sym_integer_token1] = ACTIONS(9),
    [aux_sym_integer_token2] = ACTIONS(11),
    [sym_char] = ACTIONS(320),
    [sym_string] = ACTIONS(322),
    [sym_byte_compiled_file_name] = ACTIONS(322),
    [aux_sym_symbol_token1] = ACTIONS(17),
    [aux_sym_symbol_token2] = ACTIONS(19),
    [anon_sym_POUND_SQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_COMMA_AT] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_POUND_LBRACK] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [sym__sexp] = STATE(42),
    [sym__atom] = STATE(42),
    [sym_float] = STATE(42),
    [sym_integer] = STATE(42),
    [sym_symbol] = STATE(42),
    [sym_quote] = STATE(42),
    [sym_unquote_splice] = STATE(42),
    [sym_unquote] = STATE(42),
    [sym_list] = STATE(42),
    [sym_vector] = STATE(42),
    [sym_bytecode] = STATE(42),
    [aux_sym_float_token1] = ACTIONS(33),
    [aux_sym_float_token2] = ACTIONS(33),
    [aux_sym_float_token3] = ACTIONS(33),
    [aux_sym_float_token4] = ACTIONS(33),
    [aux_sym_float_token5] = ACTIONS(33),
    [aux_sym_integer_token1] = ACTIONS(35),
    [aux_sym_integer_token2] = ACTIONS(37),
    [sym_char] = ACTIONS(324),
    [sym_string] = ACTIONS(326),
    [sym_byte_compiled_file_name] = ACTIONS(326),
    [aux_sym_symbol_token1] = ACTIONS(43),
    [aux_sym_symbol_token2] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_POUND_LBRACK] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [sym__sexp] = STATE(76),
    [sym__atom] = STATE(76),
    [sym_float] = STATE(76),
    [sym_integer] = STATE(76),
    [sym_symbol] = STATE(76),
    [sym_quote] = STATE(76),
    [sym_unquote_splice] = STATE(76),
    [sym_unquote] = STATE(76),
    [sym_list] = STATE(76),
    [sym_vector] = STATE(76),
    [sym_bytecode] = STATE(76),
    [aux_sym_float_token1] = ACTIONS(138),
    [aux_sym_float_token2] = ACTIONS(138),
    [aux_sym_float_token3] = ACTIONS(138),
    [aux_sym_float_token4] = ACTIONS(138),
    [aux_sym_float_token5] = ACTIONS(138),
    [aux_sym_integer_token1] = ACTIONS(140),
    [aux_sym_integer_token2] = ACTIONS(142),
    [sym_char] = ACTIONS(328),
    [sym_string] = ACTIONS(330),
    [sym_byte_compiled_file_name] = ACTIONS(330),
    [aux_sym_symbol_token1] = ACTIONS(148),
    [aux_sym_symbol_token2] = ACTIONS(150),
    [anon_sym_POUND_SQUOTE] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [anon_sym_COMMA_AT] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_POUND_LBRACK] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [sym__sexp] = STATE(77),
    [sym__atom] = STATE(77),
    [sym_float] = STATE(77),
    [sym_integer] = STATE(77),
    [sym_symbol] = STATE(77),
    [sym_quote] = STATE(77),
    [sym_unquote_splice] = STATE(77),
    [sym_unquote] = STATE(77),
    [sym_list] = STATE(77),
    [sym_vector] = STATE(77),
    [sym_bytecode] = STATE(77),
    [aux_sym_float_token1] = ACTIONS(138),
    [aux_sym_float_token2] = ACTIONS(138),
    [aux_sym_float_token3] = ACTIONS(138),
    [aux_sym_float_token4] = ACTIONS(138),
    [aux_sym_float_token5] = ACTIONS(138),
    [aux_sym_integer_token1] = ACTIONS(140),
    [aux_sym_integer_token2] = ACTIONS(142),
    [sym_char] = ACTIONS(332),
    [sym_string] = ACTIONS(334),
    [sym_byte_compiled_file_name] = ACTIONS(334),
    [aux_sym_symbol_token1] = ACTIONS(148),
    [aux_sym_symbol_token2] = ACTIONS(150),
    [anon_sym_POUND_SQUOTE] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [anon_sym_COMMA_AT] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_POUND_LBRACK] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [sym__sexp] = STATE(78),
    [sym__atom] = STATE(78),
    [sym_float] = STATE(78),
    [sym_integer] = STATE(78),
    [sym_symbol] = STATE(78),
    [sym_quote] = STATE(78),
    [sym_unquote_splice] = STATE(78),
    [sym_unquote] = STATE(78),
    [sym_list] = STATE(78),
    [sym_vector] = STATE(78),
    [sym_bytecode] = STATE(78),
    [aux_sym_float_token1] = ACTIONS(138),
    [aux_sym_float_token2] = ACTIONS(138),
    [aux_sym_float_token3] = ACTIONS(138),
    [aux_sym_float_token4] = ACTIONS(138),
    [aux_sym_float_token5] = ACTIONS(138),
    [aux_sym_integer_token1] = ACTIONS(140),
    [aux_sym_integer_token2] = ACTIONS(142),
    [sym_char] = ACTIONS(336),
    [sym_string] = ACTIONS(338),
    [sym_byte_compiled_file_name] = ACTIONS(338),
    [aux_sym_symbol_token1] = ACTIONS(148),
    [aux_sym_symbol_token2] = ACTIONS(150),
    [anon_sym_POUND_SQUOTE] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [anon_sym_COMMA_AT] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_POUND_LBRACK] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [sym__sexp] = STATE(64),
    [sym__atom] = STATE(64),
    [sym_float] = STATE(64),
    [sym_integer] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_quote] = STATE(64),
    [sym_unquote_splice] = STATE(64),
    [sym_unquote] = STATE(64),
    [sym_list] = STATE(64),
    [sym_vector] = STATE(64),
    [sym_bytecode] = STATE(64),
    [aux_sym_float_token1] = ACTIONS(33),
    [aux_sym_float_token2] = ACTIONS(33),
    [aux_sym_float_token3] = ACTIONS(33),
    [aux_sym_float_token4] = ACTIONS(33),
    [aux_sym_float_token5] = ACTIONS(33),
    [aux_sym_integer_token1] = ACTIONS(35),
    [aux_sym_integer_token2] = ACTIONS(37),
    [sym_char] = ACTIONS(340),
    [sym_string] = ACTIONS(342),
    [sym_byte_compiled_file_name] = ACTIONS(342),
    [aux_sym_symbol_token1] = ACTIONS(43),
    [aux_sym_symbol_token2] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_POUND_LBRACK] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [sym__sexp] = STATE(41),
    [sym__atom] = STATE(41),
    [sym_float] = STATE(41),
    [sym_integer] = STATE(41),
    [sym_symbol] = STATE(41),
    [sym_quote] = STATE(41),
    [sym_unquote_splice] = STATE(41),
    [sym_unquote] = STATE(41),
    [sym_list] = STATE(41),
    [sym_vector] = STATE(41),
    [sym_bytecode] = STATE(41),
    [aux_sym_float_token1] = ACTIONS(33),
    [aux_sym_float_token2] = ACTIONS(33),
    [aux_sym_float_token3] = ACTIONS(33),
    [aux_sym_float_token4] = ACTIONS(33),
    [aux_sym_float_token5] = ACTIONS(33),
    [aux_sym_integer_token1] = ACTIONS(35),
    [aux_sym_integer_token2] = ACTIONS(37),
    [sym_char] = ACTIONS(344),
    [sym_string] = ACTIONS(346),
    [sym_byte_compiled_file_name] = ACTIONS(346),
    [aux_sym_symbol_token1] = ACTIONS(43),
    [aux_sym_symbol_token2] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_POUND_LBRACK] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [sym__sexp] = STATE(56),
    [sym__atom] = STATE(56),
    [sym_float] = STATE(56),
    [sym_integer] = STATE(56),
    [sym_symbol] = STATE(56),
    [sym_quote] = STATE(56),
    [sym_unquote_splice] = STATE(56),
    [sym_unquote] = STATE(56),
    [sym_list] = STATE(56),
    [sym_vector] = STATE(56),
    [sym_bytecode] = STATE(56),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(7),
    [aux_sym_float_token4] = ACTIONS(7),
    [aux_sym_float_token5] = ACTIONS(7),
    [aux_sym_integer_token1] = ACTIONS(9),
    [aux_sym_integer_token2] = ACTIONS(11),
    [sym_char] = ACTIONS(348),
    [sym_string] = ACTIONS(350),
    [sym_byte_compiled_file_name] = ACTIONS(350),
    [aux_sym_symbol_token1] = ACTIONS(17),
    [aux_sym_symbol_token2] = ACTIONS(19),
    [anon_sym_POUND_SQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_COMMA_AT] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_POUND_LBRACK] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [sym__sexp] = STATE(57),
    [sym__atom] = STATE(57),
    [sym_float] = STATE(57),
    [sym_integer] = STATE(57),
    [sym_symbol] = STATE(57),
    [sym_quote] = STATE(57),
    [sym_unquote_splice] = STATE(57),
    [sym_unquote] = STATE(57),
    [sym_list] = STATE(57),
    [sym_vector] = STATE(57),
    [sym_bytecode] = STATE(57),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(7),
    [aux_sym_float_token4] = ACTIONS(7),
    [aux_sym_float_token5] = ACTIONS(7),
    [aux_sym_integer_token1] = ACTIONS(9),
    [aux_sym_integer_token2] = ACTIONS(11),
    [sym_char] = ACTIONS(352),
    [sym_string] = ACTIONS(354),
    [sym_byte_compiled_file_name] = ACTIONS(354),
    [aux_sym_symbol_token1] = ACTIONS(17),
    [aux_sym_symbol_token2] = ACTIONS(19),
    [anon_sym_POUND_SQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_COMMA_AT] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_POUND_LBRACK] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [aux_sym_float_token1] = ACTIONS(356),
    [aux_sym_float_token2] = ACTIONS(356),
    [aux_sym_float_token3] = ACTIONS(356),
    [aux_sym_float_token4] = ACTIONS(356),
    [aux_sym_float_token5] = ACTIONS(356),
    [aux_sym_integer_token1] = ACTIONS(356),
    [aux_sym_integer_token2] = ACTIONS(358),
    [sym_char] = ACTIONS(356),
    [sym_string] = ACTIONS(358),
    [sym_byte_compiled_file_name] = ACTIONS(358),
    [aux_sym_symbol_token1] = ACTIONS(358),
    [aux_sym_symbol_token2] = ACTIONS(356),
    [anon_sym_POUND_SQUOTE] = ACTIONS(358),
    [anon_sym_SQUOTE] = ACTIONS(358),
    [anon_sym_BQUOTE] = ACTIONS(358),
    [anon_sym_COMMA_AT] = ACTIONS(358),
    [anon_sym_COMMA] = ACTIONS(356),
    [sym_dot] = ACTIONS(356),
    [anon_sym_LPAREN] = ACTIONS(358),
    [anon_sym_RPAREN] = ACTIONS(358),
    [anon_sym_LBRACK] = ACTIONS(358),
    [anon_sym_POUND_LBRACK] = ACTIONS(358),
    [sym_comment] = ACTIONS(3),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(360),
    [aux_sym_float_token1] = ACTIONS(362),
    [aux_sym_float_token2] = ACTIONS(362),
    [aux_sym_float_token3] = ACTIONS(362),
    [aux_sym_float_token4] = ACTIONS(362),
    [aux_sym_float_token5] = ACTIONS(362),
    [aux_sym_integer_token1] = ACTIONS(362),
    [aux_sym_integer_token2] = ACTIONS(360),
    [sym_char] = ACTIONS(362),
    [sym_string] = ACTIONS(360),
    [sym_byte_compiled_file_name] = ACTIONS(360),
    [aux_sym_symbol_token1] = ACTIONS(360),
    [aux_sym_symbol_token2] = ACTIONS(362),
    [anon_sym_POUND_SQUOTE] = ACTIONS(360),
    [anon_sym_SQUOTE] = ACTIONS(360),
    [anon_sym_BQUOTE] = ACTIONS(360),
    [anon_sym_COMMA_AT] = ACTIONS(360),
    [anon_sym_COMMA] = ACTIONS(362),
    [anon_sym_LPAREN] = ACTIONS(360),
    [anon_sym_RPAREN] = ACTIONS(360),
    [anon_sym_LBRACK] = ACTIONS(360),
    [anon_sym_POUND_LBRACK] = ACTIONS(360),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [aux_sym_float_token1] = ACTIONS(364),
    [aux_sym_float_token2] = ACTIONS(364),
    [aux_sym_float_token3] = ACTIONS(364),
    [aux_sym_float_token4] = ACTIONS(364),
    [aux_sym_float_token5] = ACTIONS(364),
    [aux_sym_integer_token1] = ACTIONS(364),
    [aux_sym_integer_token2] = ACTIONS(366),
    [sym_char] = ACTIONS(364),
    [sym_string] = ACTIONS(366),
    [sym_byte_compiled_file_name] = ACTIONS(366),
    [aux_sym_symbol_token1] = ACTIONS(366),
    [aux_sym_symbol_token2] = ACTIONS(364),
    [anon_sym_POUND_SQUOTE] = ACTIONS(366),
    [anon_sym_SQUOTE] = ACTIONS(366),
    [anon_sym_BQUOTE] = ACTIONS(366),
    [anon_sym_COMMA_AT] = ACTIONS(366),
    [anon_sym_COMMA] = ACTIONS(364),
    [sym_dot] = ACTIONS(364),
    [anon_sym_LPAREN] = ACTIONS(366),
    [anon_sym_RPAREN] = ACTIONS(366),
    [anon_sym_LBRACK] = ACTIONS(366),
    [anon_sym_POUND_LBRACK] = ACTIONS(366),
    [sym_comment] = ACTIONS(3),
  },
  [42] = {
    [aux_sym_float_token1] = ACTIONS(368),
    [aux_sym_float_token2] = ACTIONS(368),
    [aux_sym_float_token3] = ACTIONS(368),
    [aux_sym_float_token4] = ACTIONS(368),
    [aux_sym_float_token5] = ACTIONS(368),
    [aux_sym_integer_token1] = ACTIONS(368),
    [aux_sym_integer_token2] = ACTIONS(370),
    [sym_char] = ACTIONS(368),
    [sym_string] = ACTIONS(370),
    [sym_byte_compiled_file_name] = ACTIONS(370),
    [aux_sym_symbol_token1] = ACTIONS(370),
    [aux_sym_symbol_token2] = ACTIONS(368),
    [anon_sym_POUND_SQUOTE] = ACTIONS(370),
    [anon_sym_SQUOTE] = ACTIONS(370),
    [anon_sym_BQUOTE] = ACTIONS(370),
    [anon_sym_COMMA_AT] = ACTIONS(370),
    [anon_sym_COMMA] = ACTIONS(368),
    [sym_dot] = ACTIONS(368),
    [anon_sym_LPAREN] = ACTIONS(370),
    [anon_sym_RPAREN] = ACTIONS(370),
    [anon_sym_LBRACK] = ACTIONS(370),
    [anon_sym_POUND_LBRACK] = ACTIONS(370),
    [sym_comment] = ACTIONS(3),
  },
  [43] = {
    [aux_sym_float_token1] = ACTIONS(372),
    [aux_sym_float_token2] = ACTIONS(372),
    [aux_sym_float_token3] = ACTIONS(372),
    [aux_sym_float_token4] = ACTIONS(372),
    [aux_sym_float_token5] = ACTIONS(372),
    [aux_sym_integer_token1] = ACTIONS(372),
    [aux_sym_integer_token2] = ACTIONS(374),
    [sym_char] = ACTIONS(372),
    [sym_string] = ACTIONS(374),
    [sym_byte_compiled_file_name] = ACTIONS(374),
    [aux_sym_symbol_token1] = ACTIONS(374),
    [aux_sym_symbol_token2] = ACTIONS(372),
    [anon_sym_POUND_SQUOTE] = ACTIONS(374),
    [anon_sym_SQUOTE] = ACTIONS(374),
    [anon_sym_BQUOTE] = ACTIONS(374),
    [anon_sym_COMMA_AT] = ACTIONS(374),
    [anon_sym_COMMA] = ACTIONS(372),
    [sym_dot] = ACTIONS(372),
    [anon_sym_LPAREN] = ACTIONS(374),
    [anon_sym_RPAREN] = ACTIONS(374),
    [anon_sym_LBRACK] = ACTIONS(374),
    [anon_sym_POUND_LBRACK] = ACTIONS(374),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [aux_sym_float_token1] = ACTIONS(376),
    [aux_sym_float_token2] = ACTIONS(376),
    [aux_sym_float_token3] = ACTIONS(376),
    [aux_sym_float_token4] = ACTIONS(376),
    [aux_sym_float_token5] = ACTIONS(376),
    [aux_sym_integer_token1] = ACTIONS(376),
    [aux_sym_integer_token2] = ACTIONS(378),
    [sym_char] = ACTIONS(376),
    [sym_string] = ACTIONS(378),
    [sym_byte_compiled_file_name] = ACTIONS(378),
    [aux_sym_symbol_token1] = ACTIONS(378),
    [aux_sym_symbol_token2] = ACTIONS(376),
    [anon_sym_POUND_SQUOTE] = ACTIONS(378),
    [anon_sym_SQUOTE] = ACTIONS(378),
    [anon_sym_BQUOTE] = ACTIONS(378),
    [anon_sym_COMMA_AT] = ACTIONS(378),
    [anon_sym_COMMA] = ACTIONS(376),
    [sym_dot] = ACTIONS(376),
    [anon_sym_LPAREN] = ACTIONS(378),
    [anon_sym_RPAREN] = ACTIONS(378),
    [anon_sym_LBRACK] = ACTIONS(378),
    [anon_sym_POUND_LBRACK] = ACTIONS(378),
    [sym_comment] = ACTIONS(3),
  },
  [45] = {
    [aux_sym_float_token1] = ACTIONS(380),
    [aux_sym_float_token2] = ACTIONS(380),
    [aux_sym_float_token3] = ACTIONS(380),
    [aux_sym_float_token4] = ACTIONS(380),
    [aux_sym_float_token5] = ACTIONS(380),
    [aux_sym_integer_token1] = ACTIONS(380),
    [aux_sym_integer_token2] = ACTIONS(382),
    [sym_char] = ACTIONS(380),
    [sym_string] = ACTIONS(382),
    [sym_byte_compiled_file_name] = ACTIONS(382),
    [aux_sym_symbol_token1] = ACTIONS(382),
    [aux_sym_symbol_token2] = ACTIONS(380),
    [anon_sym_POUND_SQUOTE] = ACTIONS(382),
    [anon_sym_SQUOTE] = ACTIONS(382),
    [anon_sym_BQUOTE] = ACTIONS(382),
    [anon_sym_COMMA_AT] = ACTIONS(382),
    [anon_sym_COMMA] = ACTIONS(380),
    [sym_dot] = ACTIONS(380),
    [anon_sym_LPAREN] = ACTIONS(382),
    [anon_sym_RPAREN] = ACTIONS(382),
    [anon_sym_LBRACK] = ACTIONS(382),
    [anon_sym_POUND_LBRACK] = ACTIONS(382),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [aux_sym_float_token1] = ACTIONS(384),
    [aux_sym_float_token2] = ACTIONS(384),
    [aux_sym_float_token3] = ACTIONS(384),
    [aux_sym_float_token4] = ACTIONS(384),
    [aux_sym_float_token5] = ACTIONS(384),
    [aux_sym_integer_token1] = ACTIONS(384),
    [aux_sym_integer_token2] = ACTIONS(386),
    [sym_char] = ACTIONS(384),
    [sym_string] = ACTIONS(386),
    [sym_byte_compiled_file_name] = ACTIONS(386),
    [aux_sym_symbol_token1] = ACTIONS(386),
    [aux_sym_symbol_token2] = ACTIONS(384),
    [anon_sym_POUND_SQUOTE] = ACTIONS(386),
    [anon_sym_SQUOTE] = ACTIONS(386),
    [anon_sym_BQUOTE] = ACTIONS(386),
    [anon_sym_COMMA_AT] = ACTIONS(386),
    [anon_sym_COMMA] = ACTIONS(384),
    [sym_dot] = ACTIONS(384),
    [anon_sym_LPAREN] = ACTIONS(386),
    [anon_sym_RPAREN] = ACTIONS(386),
    [anon_sym_LBRACK] = ACTIONS(386),
    [anon_sym_POUND_LBRACK] = ACTIONS(386),
    [sym_comment] = ACTIONS(3),
  },
  [47] = {
    [aux_sym_float_token1] = ACTIONS(388),
    [aux_sym_float_token2] = ACTIONS(388),
    [aux_sym_float_token3] = ACTIONS(388),
    [aux_sym_float_token4] = ACTIONS(388),
    [aux_sym_float_token5] = ACTIONS(388),
    [aux_sym_integer_token1] = ACTIONS(388),
    [aux_sym_integer_token2] = ACTIONS(390),
    [sym_char] = ACTIONS(388),
    [sym_string] = ACTIONS(390),
    [sym_byte_compiled_file_name] = ACTIONS(390),
    [aux_sym_symbol_token1] = ACTIONS(390),
    [aux_sym_symbol_token2] = ACTIONS(388),
    [anon_sym_POUND_SQUOTE] = ACTIONS(390),
    [anon_sym_SQUOTE] = ACTIONS(390),
    [anon_sym_BQUOTE] = ACTIONS(390),
    [anon_sym_COMMA_AT] = ACTIONS(390),
    [anon_sym_COMMA] = ACTIONS(388),
    [sym_dot] = ACTIONS(388),
    [anon_sym_LPAREN] = ACTIONS(390),
    [anon_sym_RPAREN] = ACTIONS(390),
    [anon_sym_LBRACK] = ACTIONS(390),
    [anon_sym_POUND_LBRACK] = ACTIONS(390),
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [aux_sym_float_token1] = ACTIONS(392),
    [aux_sym_float_token2] = ACTIONS(392),
    [aux_sym_float_token3] = ACTIONS(392),
    [aux_sym_float_token4] = ACTIONS(392),
    [aux_sym_float_token5] = ACTIONS(392),
    [aux_sym_integer_token1] = ACTIONS(392),
    [aux_sym_integer_token2] = ACTIONS(394),
    [sym_char] = ACTIONS(392),
    [sym_string] = ACTIONS(394),
    [sym_byte_compiled_file_name] = ACTIONS(394),
    [aux_sym_symbol_token1] = ACTIONS(394),
    [aux_sym_symbol_token2] = ACTIONS(392),
    [anon_sym_POUND_SQUOTE] = ACTIONS(394),
    [anon_sym_SQUOTE] = ACTIONS(394),
    [anon_sym_BQUOTE] = ACTIONS(394),
    [anon_sym_COMMA_AT] = ACTIONS(394),
    [anon_sym_COMMA] = ACTIONS(392),
    [sym_dot] = ACTIONS(392),
    [anon_sym_LPAREN] = ACTIONS(394),
    [anon_sym_RPAREN] = ACTIONS(394),
    [anon_sym_LBRACK] = ACTIONS(394),
    [anon_sym_POUND_LBRACK] = ACTIONS(394),
    [sym_comment] = ACTIONS(3),
  },
  [49] = {
    [aux_sym_float_token1] = ACTIONS(396),
    [aux_sym_float_token2] = ACTIONS(396),
    [aux_sym_float_token3] = ACTIONS(396),
    [aux_sym_float_token4] = ACTIONS(396),
    [aux_sym_float_token5] = ACTIONS(396),
    [aux_sym_integer_token1] = ACTIONS(396),
    [aux_sym_integer_token2] = ACTIONS(398),
    [sym_char] = ACTIONS(396),
    [sym_string] = ACTIONS(398),
    [sym_byte_compiled_file_name] = ACTIONS(398),
    [aux_sym_symbol_token1] = ACTIONS(398),
    [aux_sym_symbol_token2] = ACTIONS(396),
    [anon_sym_POUND_SQUOTE] = ACTIONS(398),
    [anon_sym_SQUOTE] = ACTIONS(398),
    [anon_sym_BQUOTE] = ACTIONS(398),
    [anon_sym_COMMA_AT] = ACTIONS(398),
    [anon_sym_COMMA] = ACTIONS(396),
    [sym_dot] = ACTIONS(396),
    [anon_sym_LPAREN] = ACTIONS(398),
    [anon_sym_RPAREN] = ACTIONS(398),
    [anon_sym_LBRACK] = ACTIONS(398),
    [anon_sym_POUND_LBRACK] = ACTIONS(398),
    [sym_comment] = ACTIONS(3),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(400),
    [aux_sym_float_token1] = ACTIONS(402),
    [aux_sym_float_token2] = ACTIONS(402),
    [aux_sym_float_token3] = ACTIONS(402),
    [aux_sym_float_token4] = ACTIONS(402),
    [aux_sym_float_token5] = ACTIONS(402),
    [aux_sym_integer_token1] = ACTIONS(402),
    [aux_sym_integer_token2] = ACTIONS(400),
    [sym_char] = ACTIONS(402),
    [sym_string] = ACTIONS(400),
    [sym_byte_compiled_file_name] = ACTIONS(400),
    [aux_sym_symbol_token1] = ACTIONS(400),
    [aux_sym_symbol_token2] = ACTIONS(402),
    [anon_sym_POUND_SQUOTE] = ACTIONS(400),
    [anon_sym_SQUOTE] = ACTIONS(400),
    [anon_sym_BQUOTE] = ACTIONS(400),
    [anon_sym_COMMA_AT] = ACTIONS(400),
    [anon_sym_COMMA] = ACTIONS(402),
    [anon_sym_LPAREN] = ACTIONS(400),
    [anon_sym_RPAREN] = ACTIONS(400),
    [anon_sym_LBRACK] = ACTIONS(400),
    [anon_sym_POUND_LBRACK] = ACTIONS(400),
    [sym_comment] = ACTIONS(3),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(404),
    [aux_sym_float_token1] = ACTIONS(406),
    [aux_sym_float_token2] = ACTIONS(406),
    [aux_sym_float_token3] = ACTIONS(406),
    [aux_sym_float_token4] = ACTIONS(406),
    [aux_sym_float_token5] = ACTIONS(406),
    [aux_sym_integer_token1] = ACTIONS(406),
    [aux_sym_integer_token2] = ACTIONS(404),
    [sym_char] = ACTIONS(406),
    [sym_string] = ACTIONS(404),
    [sym_byte_compiled_file_name] = ACTIONS(404),
    [aux_sym_symbol_token1] = ACTIONS(404),
    [aux_sym_symbol_token2] = ACTIONS(406),
    [anon_sym_POUND_SQUOTE] = ACTIONS(404),
    [anon_sym_SQUOTE] = ACTIONS(404),
    [anon_sym_BQUOTE] = ACTIONS(404),
    [anon_sym_COMMA_AT] = ACTIONS(404),
    [anon_sym_COMMA] = ACTIONS(406),
    [anon_sym_LPAREN] = ACTIONS(404),
    [anon_sym_RPAREN] = ACTIONS(404),
    [anon_sym_LBRACK] = ACTIONS(404),
    [anon_sym_POUND_LBRACK] = ACTIONS(404),
    [sym_comment] = ACTIONS(3),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(398),
    [aux_sym_float_token1] = ACTIONS(396),
    [aux_sym_float_token2] = ACTIONS(396),
    [aux_sym_float_token3] = ACTIONS(396),
    [aux_sym_float_token4] = ACTIONS(396),
    [aux_sym_float_token5] = ACTIONS(396),
    [aux_sym_integer_token1] = ACTIONS(396),
    [aux_sym_integer_token2] = ACTIONS(398),
    [sym_char] = ACTIONS(396),
    [sym_string] = ACTIONS(398),
    [sym_byte_compiled_file_name] = ACTIONS(398),
    [aux_sym_symbol_token1] = ACTIONS(398),
    [aux_sym_symbol_token2] = ACTIONS(396),
    [anon_sym_POUND_SQUOTE] = ACTIONS(398),
    [anon_sym_SQUOTE] = ACTIONS(398),
    [anon_sym_BQUOTE] = ACTIONS(398),
    [anon_sym_COMMA_AT] = ACTIONS(398),
    [anon_sym_COMMA] = ACTIONS(396),
    [anon_sym_LPAREN] = ACTIONS(398),
    [anon_sym_RPAREN] = ACTIONS(398),
    [anon_sym_LBRACK] = ACTIONS(398),
    [anon_sym_POUND_LBRACK] = ACTIONS(398),
    [sym_comment] = ACTIONS(3),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(408),
    [aux_sym_float_token1] = ACTIONS(410),
    [aux_sym_float_token2] = ACTIONS(410),
    [aux_sym_float_token3] = ACTIONS(410),
    [aux_sym_float_token4] = ACTIONS(410),
    [aux_sym_float_token5] = ACTIONS(410),
    [aux_sym_integer_token1] = ACTIONS(410),
    [aux_sym_integer_token2] = ACTIONS(408),
    [sym_char] = ACTIONS(410),
    [sym_string] = ACTIONS(408),
    [sym_byte_compiled_file_name] = ACTIONS(408),
    [aux_sym_symbol_token1] = ACTIONS(408),
    [aux_sym_symbol_token2] = ACTIONS(410),
    [anon_sym_POUND_SQUOTE] = ACTIONS(408),
    [anon_sym_SQUOTE] = ACTIONS(408),
    [anon_sym_BQUOTE] = ACTIONS(408),
    [anon_sym_COMMA_AT] = ACTIONS(408),
    [anon_sym_COMMA] = ACTIONS(410),
    [anon_sym_LPAREN] = ACTIONS(408),
    [anon_sym_RPAREN] = ACTIONS(408),
    [anon_sym_LBRACK] = ACTIONS(408),
    [anon_sym_POUND_LBRACK] = ACTIONS(408),
    [sym_comment] = ACTIONS(3),
  },
  [54] = {
    [aux_sym_float_token1] = ACTIONS(406),
    [aux_sym_float_token2] = ACTIONS(406),
    [aux_sym_float_token3] = ACTIONS(406),
    [aux_sym_float_token4] = ACTIONS(406),
    [aux_sym_float_token5] = ACTIONS(406),
    [aux_sym_integer_token1] = ACTIONS(406),
    [aux_sym_integer_token2] = ACTIONS(404),
    [sym_char] = ACTIONS(406),
    [sym_string] = ACTIONS(404),
    [sym_byte_compiled_file_name] = ACTIONS(404),
    [aux_sym_symbol_token1] = ACTIONS(404),
    [aux_sym_symbol_token2] = ACTIONS(406),
    [anon_sym_POUND_SQUOTE] = ACTIONS(404),
    [anon_sym_SQUOTE] = ACTIONS(404),
    [anon_sym_BQUOTE] = ACTIONS(404),
    [anon_sym_COMMA_AT] = ACTIONS(404),
    [anon_sym_COMMA] = ACTIONS(406),
    [sym_dot] = ACTIONS(406),
    [anon_sym_LPAREN] = ACTIONS(404),
    [anon_sym_RPAREN] = ACTIONS(404),
    [anon_sym_LBRACK] = ACTIONS(404),
    [anon_sym_POUND_LBRACK] = ACTIONS(404),
    [sym_comment] = ACTIONS(3),
  },
  [55] = {
    [aux_sym_float_token1] = ACTIONS(402),
    [aux_sym_float_token2] = ACTIONS(402),
    [aux_sym_float_token3] = ACTIONS(402),
    [aux_sym_float_token4] = ACTIONS(402),
    [aux_sym_float_token5] = ACTIONS(402),
    [aux_sym_integer_token1] = ACTIONS(402),
    [aux_sym_integer_token2] = ACTIONS(400),
    [sym_char] = ACTIONS(402),
    [sym_string] = ACTIONS(400),
    [sym_byte_compiled_file_name] = ACTIONS(400),
    [aux_sym_symbol_token1] = ACTIONS(400),
    [aux_sym_symbol_token2] = ACTIONS(402),
    [anon_sym_POUND_SQUOTE] = ACTIONS(400),
    [anon_sym_SQUOTE] = ACTIONS(400),
    [anon_sym_BQUOTE] = ACTIONS(400),
    [anon_sym_COMMA_AT] = ACTIONS(400),
    [anon_sym_COMMA] = ACTIONS(402),
    [sym_dot] = ACTIONS(402),
    [anon_sym_LPAREN] = ACTIONS(400),
    [anon_sym_RPAREN] = ACTIONS(400),
    [anon_sym_LBRACK] = ACTIONS(400),
    [anon_sym_POUND_LBRACK] = ACTIONS(400),
    [sym_comment] = ACTIONS(3),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(366),
    [aux_sym_float_token1] = ACTIONS(364),
    [aux_sym_float_token2] = ACTIONS(364),
    [aux_sym_float_token3] = ACTIONS(364),
    [aux_sym_float_token4] = ACTIONS(364),
    [aux_sym_float_token5] = ACTIONS(364),
    [aux_sym_integer_token1] = ACTIONS(364),
    [aux_sym_integer_token2] = ACTIONS(366),
    [sym_char] = ACTIONS(364),
    [sym_string] = ACTIONS(366),
    [sym_byte_compiled_file_name] = ACTIONS(366),
    [aux_sym_symbol_token1] = ACTIONS(366),
    [aux_sym_symbol_token2] = ACTIONS(364),
    [anon_sym_POUND_SQUOTE] = ACTIONS(366),
    [anon_sym_SQUOTE] = ACTIONS(366),
    [anon_sym_BQUOTE] = ACTIONS(366),
    [anon_sym_COMMA_AT] = ACTIONS(366),
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_LPAREN] = ACTIONS(366),
    [anon_sym_RPAREN] = ACTIONS(366),
    [anon_sym_LBRACK] = ACTIONS(366),
    [anon_sym_POUND_LBRACK] = ACTIONS(366),
    [sym_comment] = ACTIONS(3),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(370),
    [aux_sym_float_token1] = ACTIONS(368),
    [aux_sym_float_token2] = ACTIONS(368),
    [aux_sym_float_token3] = ACTIONS(368),
    [aux_sym_float_token4] = ACTIONS(368),
    [aux_sym_float_token5] = ACTIONS(368),
    [aux_sym_integer_token1] = ACTIONS(368),
    [aux_sym_integer_token2] = ACTIONS(370),
    [sym_char] = ACTIONS(368),
    [sym_string] = ACTIONS(370),
    [sym_byte_compiled_file_name] = ACTIONS(370),
    [aux_sym_symbol_token1] = ACTIONS(370),
    [aux_sym_symbol_token2] = ACTIONS(368),
    [anon_sym_POUND_SQUOTE] = ACTIONS(370),
    [anon_sym_SQUOTE] = ACTIONS(370),
    [anon_sym_BQUOTE] = ACTIONS(370),
    [anon_sym_COMMA_AT] = ACTIONS(370),
    [anon_sym_COMMA] = ACTIONS(368),
    [anon_sym_LPAREN] = ACTIONS(370),
    [anon_sym_RPAREN] = ACTIONS(370),
    [anon_sym_LBRACK] = ACTIONS(370),
    [anon_sym_POUND_LBRACK] = ACTIONS(370),
    [sym_comment] = ACTIONS(3),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(374),
    [aux_sym_float_token1] = ACTIONS(372),
    [aux_sym_float_token2] = ACTIONS(372),
    [aux_sym_float_token3] = ACTIONS(372),
    [aux_sym_float_token4] = ACTIONS(372),
    [aux_sym_float_token5] = ACTIONS(372),
    [aux_sym_integer_token1] = ACTIONS(372),
    [aux_sym_integer_token2] = ACTIONS(374),
    [sym_char] = ACTIONS(372),
    [sym_string] = ACTIONS(374),
    [sym_byte_compiled_file_name] = ACTIONS(374),
    [aux_sym_symbol_token1] = ACTIONS(374),
    [aux_sym_symbol_token2] = ACTIONS(372),
    [anon_sym_POUND_SQUOTE] = ACTIONS(374),
    [anon_sym_SQUOTE] = ACTIONS(374),
    [anon_sym_BQUOTE] = ACTIONS(374),
    [anon_sym_COMMA_AT] = ACTIONS(374),
    [anon_sym_COMMA] = ACTIONS(372),
    [anon_sym_LPAREN] = ACTIONS(374),
    [anon_sym_RPAREN] = ACTIONS(374),
    [anon_sym_LBRACK] = ACTIONS(374),
    [anon_sym_POUND_LBRACK] = ACTIONS(374),
    [sym_comment] = ACTIONS(3),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(378),
    [aux_sym_float_token1] = ACTIONS(376),
    [aux_sym_float_token2] = ACTIONS(376),
    [aux_sym_float_token3] = ACTIONS(376),
    [aux_sym_float_token4] = ACTIONS(376),
    [aux_sym_float_token5] = ACTIONS(376),
    [aux_sym_integer_token1] = ACTIONS(376),
    [aux_sym_integer_token2] = ACTIONS(378),
    [sym_char] = ACTIONS(376),
    [sym_string] = ACTIONS(378),
    [sym_byte_compiled_file_name] = ACTIONS(378),
    [aux_sym_symbol_token1] = ACTIONS(378),
    [aux_sym_symbol_token2] = ACTIONS(376),
    [anon_sym_POUND_SQUOTE] = ACTIONS(378),
    [anon_sym_SQUOTE] = ACTIONS(378),
    [anon_sym_BQUOTE] = ACTIONS(378),
    [anon_sym_COMMA_AT] = ACTIONS(378),
    [anon_sym_COMMA] = ACTIONS(376),
    [anon_sym_LPAREN] = ACTIONS(378),
    [anon_sym_RPAREN] = ACTIONS(378),
    [anon_sym_LBRACK] = ACTIONS(378),
    [anon_sym_POUND_LBRACK] = ACTIONS(378),
    [sym_comment] = ACTIONS(3),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(358),
    [aux_sym_float_token1] = ACTIONS(356),
    [aux_sym_float_token2] = ACTIONS(356),
    [aux_sym_float_token3] = ACTIONS(356),
    [aux_sym_float_token4] = ACTIONS(356),
    [aux_sym_float_token5] = ACTIONS(356),
    [aux_sym_integer_token1] = ACTIONS(356),
    [aux_sym_integer_token2] = ACTIONS(358),
    [sym_char] = ACTIONS(356),
    [sym_string] = ACTIONS(358),
    [sym_byte_compiled_file_name] = ACTIONS(358),
    [aux_sym_symbol_token1] = ACTIONS(358),
    [aux_sym_symbol_token2] = ACTIONS(356),
    [anon_sym_POUND_SQUOTE] = ACTIONS(358),
    [anon_sym_SQUOTE] = ACTIONS(358),
    [anon_sym_BQUOTE] = ACTIONS(358),
    [anon_sym_COMMA_AT] = ACTIONS(358),
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_LPAREN] = ACTIONS(358),
    [anon_sym_RPAREN] = ACTIONS(358),
    [anon_sym_LBRACK] = ACTIONS(358),
    [anon_sym_POUND_LBRACK] = ACTIONS(358),
    [sym_comment] = ACTIONS(3),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(382),
    [aux_sym_float_token1] = ACTIONS(380),
    [aux_sym_float_token2] = ACTIONS(380),
    [aux_sym_float_token3] = ACTIONS(380),
    [aux_sym_float_token4] = ACTIONS(380),
    [aux_sym_float_token5] = ACTIONS(380),
    [aux_sym_integer_token1] = ACTIONS(380),
    [aux_sym_integer_token2] = ACTIONS(382),
    [sym_char] = ACTIONS(380),
    [sym_string] = ACTIONS(382),
    [sym_byte_compiled_file_name] = ACTIONS(382),
    [aux_sym_symbol_token1] = ACTIONS(382),
    [aux_sym_symbol_token2] = ACTIONS(380),
    [anon_sym_POUND_SQUOTE] = ACTIONS(382),
    [anon_sym_SQUOTE] = ACTIONS(382),
    [anon_sym_BQUOTE] = ACTIONS(382),
    [anon_sym_COMMA_AT] = ACTIONS(382),
    [anon_sym_COMMA] = ACTIONS(380),
    [anon_sym_LPAREN] = ACTIONS(382),
    [anon_sym_RPAREN] = ACTIONS(382),
    [anon_sym_LBRACK] = ACTIONS(382),
    [anon_sym_POUND_LBRACK] = ACTIONS(382),
    [sym_comment] = ACTIONS(3),
  },
  [62] = {
    [aux_sym_float_token1] = ACTIONS(410),
    [aux_sym_float_token2] = ACTIONS(410),
    [aux_sym_float_token3] = ACTIONS(410),
    [aux_sym_float_token4] = ACTIONS(410),
    [aux_sym_float_token5] = ACTIONS(410),
    [aux_sym_integer_token1] = ACTIONS(410),
    [aux_sym_integer_token2] = ACTIONS(408),
    [sym_char] = ACTIONS(410),
    [sym_string] = ACTIONS(408),
    [sym_byte_compiled_file_name] = ACTIONS(408),
    [aux_sym_symbol_token1] = ACTIONS(408),
    [aux_sym_symbol_token2] = ACTIONS(410),
    [anon_sym_POUND_SQUOTE] = ACTIONS(408),
    [anon_sym_SQUOTE] = ACTIONS(408),
    [anon_sym_BQUOTE] = ACTIONS(408),
    [anon_sym_COMMA_AT] = ACTIONS(408),
    [anon_sym_COMMA] = ACTIONS(410),
    [sym_dot] = ACTIONS(410),
    [anon_sym_LPAREN] = ACTIONS(408),
    [anon_sym_RPAREN] = ACTIONS(408),
    [anon_sym_LBRACK] = ACTIONS(408),
    [anon_sym_POUND_LBRACK] = ACTIONS(408),
    [sym_comment] = ACTIONS(3),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(386),
    [aux_sym_float_token1] = ACTIONS(384),
    [aux_sym_float_token2] = ACTIONS(384),
    [aux_sym_float_token3] = ACTIONS(384),
    [aux_sym_float_token4] = ACTIONS(384),
    [aux_sym_float_token5] = ACTIONS(384),
    [aux_sym_integer_token1] = ACTIONS(384),
    [aux_sym_integer_token2] = ACTIONS(386),
    [sym_char] = ACTIONS(384),
    [sym_string] = ACTIONS(386),
    [sym_byte_compiled_file_name] = ACTIONS(386),
    [aux_sym_symbol_token1] = ACTIONS(386),
    [aux_sym_symbol_token2] = ACTIONS(384),
    [anon_sym_POUND_SQUOTE] = ACTIONS(386),
    [anon_sym_SQUOTE] = ACTIONS(386),
    [anon_sym_BQUOTE] = ACTIONS(386),
    [anon_sym_COMMA_AT] = ACTIONS(386),
    [anon_sym_COMMA] = ACTIONS(384),
    [anon_sym_LPAREN] = ACTIONS(386),
    [anon_sym_RPAREN] = ACTIONS(386),
    [anon_sym_LBRACK] = ACTIONS(386),
    [anon_sym_POUND_LBRACK] = ACTIONS(386),
    [sym_comment] = ACTIONS(3),
  },
  [64] = {
    [aux_sym_float_token1] = ACTIONS(362),
    [aux_sym_float_token2] = ACTIONS(362),
    [aux_sym_float_token3] = ACTIONS(362),
    [aux_sym_float_token4] = ACTIONS(362),
    [aux_sym_float_token5] = ACTIONS(362),
    [aux_sym_integer_token1] = ACTIONS(362),
    [aux_sym_integer_token2] = ACTIONS(360),
    [sym_char] = ACTIONS(362),
    [sym_string] = ACTIONS(360),
    [sym_byte_compiled_file_name] = ACTIONS(360),
    [aux_sym_symbol_token1] = ACTIONS(360),
    [aux_sym_symbol_token2] = ACTIONS(362),
    [anon_sym_POUND_SQUOTE] = ACTIONS(360),
    [anon_sym_SQUOTE] = ACTIONS(360),
    [anon_sym_BQUOTE] = ACTIONS(360),
    [anon_sym_COMMA_AT] = ACTIONS(360),
    [anon_sym_COMMA] = ACTIONS(362),
    [sym_dot] = ACTIONS(362),
    [anon_sym_LPAREN] = ACTIONS(360),
    [anon_sym_RPAREN] = ACTIONS(360),
    [anon_sym_LBRACK] = ACTIONS(360),
    [anon_sym_POUND_LBRACK] = ACTIONS(360),
    [sym_comment] = ACTIONS(3),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(390),
    [aux_sym_float_token1] = ACTIONS(388),
    [aux_sym_float_token2] = ACTIONS(388),
    [aux_sym_float_token3] = ACTIONS(388),
    [aux_sym_float_token4] = ACTIONS(388),
    [aux_sym_float_token5] = ACTIONS(388),
    [aux_sym_integer_token1] = ACTIONS(388),
    [aux_sym_integer_token2] = ACTIONS(390),
    [sym_char] = ACTIONS(388),
    [sym_string] = ACTIONS(390),
    [sym_byte_compiled_file_name] = ACTIONS(390),
    [aux_sym_symbol_token1] = ACTIONS(390),
    [aux_sym_symbol_token2] = ACTIONS(388),
    [anon_sym_POUND_SQUOTE] = ACTIONS(390),
    [anon_sym_SQUOTE] = ACTIONS(390),
    [anon_sym_BQUOTE] = ACTIONS(390),
    [anon_sym_COMMA_AT] = ACTIONS(390),
    [anon_sym_COMMA] = ACTIONS(388),
    [anon_sym_LPAREN] = ACTIONS(390),
    [anon_sym_RPAREN] = ACTIONS(390),
    [anon_sym_LBRACK] = ACTIONS(390),
    [anon_sym_POUND_LBRACK] = ACTIONS(390),
    [sym_comment] = ACTIONS(3),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(394),
    [aux_sym_float_token1] = ACTIONS(392),
    [aux_sym_float_token2] = ACTIONS(392),
    [aux_sym_float_token3] = ACTIONS(392),
    [aux_sym_float_token4] = ACTIONS(392),
    [aux_sym_float_token5] = ACTIONS(392),
    [aux_sym_integer_token1] = ACTIONS(392),
    [aux_sym_integer_token2] = ACTIONS(394),
    [sym_char] = ACTIONS(392),
    [sym_string] = ACTIONS(394),
    [sym_byte_compiled_file_name] = ACTIONS(394),
    [aux_sym_symbol_token1] = ACTIONS(394),
    [aux_sym_symbol_token2] = ACTIONS(392),
    [anon_sym_POUND_SQUOTE] = ACTIONS(394),
    [anon_sym_SQUOTE] = ACTIONS(394),
    [anon_sym_BQUOTE] = ACTIONS(394),
    [anon_sym_COMMA_AT] = ACTIONS(394),
    [anon_sym_COMMA] = ACTIONS(392),
    [anon_sym_LPAREN] = ACTIONS(394),
    [anon_sym_RPAREN] = ACTIONS(394),
    [anon_sym_LBRACK] = ACTIONS(394),
    [anon_sym_POUND_LBRACK] = ACTIONS(394),
    [sym_comment] = ACTIONS(3),
  },
  [67] = {
    [aux_sym_float_token1] = ACTIONS(384),
    [aux_sym_float_token2] = ACTIONS(384),
    [aux_sym_float_token3] = ACTIONS(384),
    [aux_sym_float_token4] = ACTIONS(384),
    [aux_sym_float_token5] = ACTIONS(384),
    [aux_sym_integer_token1] = ACTIONS(384),
    [aux_sym_integer_token2] = ACTIONS(386),
    [sym_char] = ACTIONS(384),
    [sym_string] = ACTIONS(386),
    [sym_byte_compiled_file_name] = ACTIONS(386),
    [aux_sym_symbol_token1] = ACTIONS(386),
    [aux_sym_symbol_token2] = ACTIONS(384),
    [anon_sym_POUND_SQUOTE] = ACTIONS(386),
    [anon_sym_SQUOTE] = ACTIONS(386),
    [anon_sym_BQUOTE] = ACTIONS(386),
    [anon_sym_COMMA_AT] = ACTIONS(386),
    [anon_sym_COMMA] = ACTIONS(384),
    [anon_sym_LPAREN] = ACTIONS(386),
    [anon_sym_LBRACK] = ACTIONS(386),
    [anon_sym_RBRACK] = ACTIONS(386),
    [anon_sym_POUND_LBRACK] = ACTIONS(386),
    [sym_comment] = ACTIONS(3),
  },
  [68] = {
    [aux_sym_float_token1] = ACTIONS(396),
    [aux_sym_float_token2] = ACTIONS(396),
    [aux_sym_float_token3] = ACTIONS(396),
    [aux_sym_float_token4] = ACTIONS(396),
    [aux_sym_float_token5] = ACTIONS(396),
    [aux_sym_integer_token1] = ACTIONS(396),
    [aux_sym_integer_token2] = ACTIONS(398),
    [sym_char] = ACTIONS(396),
    [sym_string] = ACTIONS(398),
    [sym_byte_compiled_file_name] = ACTIONS(398),
    [aux_sym_symbol_token1] = ACTIONS(398),
    [aux_sym_symbol_token2] = ACTIONS(396),
    [anon_sym_POUND_SQUOTE] = ACTIONS(398),
    [anon_sym_SQUOTE] = ACTIONS(398),
    [anon_sym_BQUOTE] = ACTIONS(398),
    [anon_sym_COMMA_AT] = ACTIONS(398),
    [anon_sym_COMMA] = ACTIONS(396),
    [anon_sym_LPAREN] = ACTIONS(398),
    [anon_sym_LBRACK] = ACTIONS(398),
    [anon_sym_RBRACK] = ACTIONS(398),
    [anon_sym_POUND_LBRACK] = ACTIONS(398),
    [sym_comment] = ACTIONS(3),
  },
  [69] = {
    [aux_sym_float_token1] = ACTIONS(410),
    [aux_sym_float_token2] = ACTIONS(410),
    [aux_sym_float_token3] = ACTIONS(410),
    [aux_sym_float_token4] = ACTIONS(410),
    [aux_sym_float_token5] = ACTIONS(410),
    [aux_sym_integer_token1] = ACTIONS(410),
    [aux_sym_integer_token2] = ACTIONS(408),
    [sym_char] = ACTIONS(410),
    [sym_string] = ACTIONS(408),
    [sym_byte_compiled_file_name] = ACTIONS(408),
    [aux_sym_symbol_token1] = ACTIONS(408),
    [aux_sym_symbol_token2] = ACTIONS(410),
    [anon_sym_POUND_SQUOTE] = ACTIONS(408),
    [anon_sym_SQUOTE] = ACTIONS(408),
    [anon_sym_BQUOTE] = ACTIONS(408),
    [anon_sym_COMMA_AT] = ACTIONS(408),
    [anon_sym_COMMA] = ACTIONS(410),
    [anon_sym_LPAREN] = ACTIONS(408),
    [anon_sym_LBRACK] = ACTIONS(408),
    [anon_sym_RBRACK] = ACTIONS(408),
    [anon_sym_POUND_LBRACK] = ACTIONS(408),
    [sym_comment] = ACTIONS(3),
  },
  [70] = {
    [aux_sym_float_token1] = ACTIONS(392),
    [aux_sym_float_token2] = ACTIONS(392),
    [aux_sym_float_token3] = ACTIONS(392),
    [aux_sym_float_token4] = ACTIONS(392),
    [aux_sym_float_token5] = ACTIONS(392),
    [aux_sym_integer_token1] = ACTIONS(392),
    [aux_sym_integer_token2] = ACTIONS(394),
    [sym_char] = ACTIONS(392),
    [sym_string] = ACTIONS(394),
    [sym_byte_compiled_file_name] = ACTIONS(394),
    [aux_sym_symbol_token1] = ACTIONS(394),
    [aux_sym_symbol_token2] = ACTIONS(392),
    [anon_sym_POUND_SQUOTE] = ACTIONS(394),
    [anon_sym_SQUOTE] = ACTIONS(394),
    [anon_sym_BQUOTE] = ACTIONS(394),
    [anon_sym_COMMA_AT] = ACTIONS(394),
    [anon_sym_COMMA] = ACTIONS(392),
    [anon_sym_LPAREN] = ACTIONS(394),
    [anon_sym_LBRACK] = ACTIONS(394),
    [anon_sym_RBRACK] = ACTIONS(394),
    [anon_sym_POUND_LBRACK] = ACTIONS(394),
    [sym_comment] = ACTIONS(3),
  },
  [71] = {
    [aux_sym_float_token1] = ACTIONS(388),
    [aux_sym_float_token2] = ACTIONS(388),
    [aux_sym_float_token3] = ACTIONS(388),
    [aux_sym_float_token4] = ACTIONS(388),
    [aux_sym_float_token5] = ACTIONS(388),
    [aux_sym_integer_token1] = ACTIONS(388),
    [aux_sym_integer_token2] = ACTIONS(390),
    [sym_char] = ACTIONS(388),
    [sym_string] = ACTIONS(390),
    [sym_byte_compiled_file_name] = ACTIONS(390),
    [aux_sym_symbol_token1] = ACTIONS(390),
    [aux_sym_symbol_token2] = ACTIONS(388),
    [anon_sym_POUND_SQUOTE] = ACTIONS(390),
    [anon_sym_SQUOTE] = ACTIONS(390),
    [anon_sym_BQUOTE] = ACTIONS(390),
    [anon_sym_COMMA_AT] = ACTIONS(390),
    [anon_sym_COMMA] = ACTIONS(388),
    [anon_sym_LPAREN] = ACTIONS(390),
    [anon_sym_LBRACK] = ACTIONS(390),
    [anon_sym_RBRACK] = ACTIONS(390),
    [anon_sym_POUND_LBRACK] = ACTIONS(390),
    [sym_comment] = ACTIONS(3),
  },
  [72] = {
    [aux_sym_float_token1] = ACTIONS(380),
    [aux_sym_float_token2] = ACTIONS(380),
    [aux_sym_float_token3] = ACTIONS(380),
    [aux_sym_float_token4] = ACTIONS(380),
    [aux_sym_float_token5] = ACTIONS(380),
    [aux_sym_integer_token1] = ACTIONS(380),
    [aux_sym_integer_token2] = ACTIONS(382),
    [sym_char] = ACTIONS(380),
    [sym_string] = ACTIONS(382),
    [sym_byte_compiled_file_name] = ACTIONS(382),
    [aux_sym_symbol_token1] = ACTIONS(382),
    [aux_sym_symbol_token2] = ACTIONS(380),
    [anon_sym_POUND_SQUOTE] = ACTIONS(382),
    [anon_sym_SQUOTE] = ACTIONS(382),
    [anon_sym_BQUOTE] = ACTIONS(382),
    [anon_sym_COMMA_AT] = ACTIONS(382),
    [anon_sym_COMMA] = ACTIONS(380),
    [anon_sym_LPAREN] = ACTIONS(382),
    [anon_sym_LBRACK] = ACTIONS(382),
    [anon_sym_RBRACK] = ACTIONS(382),
    [anon_sym_POUND_LBRACK] = ACTIONS(382),
    [sym_comment] = ACTIONS(3),
  },
  [73] = {
    [aux_sym_float_token1] = ACTIONS(356),
    [aux_sym_float_token2] = ACTIONS(356),
    [aux_sym_float_token3] = ACTIONS(356),
    [aux_sym_float_token4] = ACTIONS(356),
    [aux_sym_float_token5] = ACTIONS(356),
    [aux_sym_integer_token1] = ACTIONS(356),
    [aux_sym_integer_token2] = ACTIONS(358),
    [sym_char] = ACTIONS(356),
    [sym_string] = ACTIONS(358),
    [sym_byte_compiled_file_name] = ACTIONS(358),
    [aux_sym_symbol_token1] = ACTIONS(358),
    [aux_sym_symbol_token2] = ACTIONS(356),
    [anon_sym_POUND_SQUOTE] = ACTIONS(358),
    [anon_sym_SQUOTE] = ACTIONS(358),
    [anon_sym_BQUOTE] = ACTIONS(358),
    [anon_sym_COMMA_AT] = ACTIONS(358),
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_LPAREN] = ACTIONS(358),
    [anon_sym_LBRACK] = ACTIONS(358),
    [anon_sym_RBRACK] = ACTIONS(358),
    [anon_sym_POUND_LBRACK] = ACTIONS(358),
    [sym_comment] = ACTIONS(3),
  },
  [74] = {
    [aux_sym_float_token1] = ACTIONS(376),
    [aux_sym_float_token2] = ACTIONS(376),
    [aux_sym_float_token3] = ACTIONS(376),
    [aux_sym_float_token4] = ACTIONS(376),
    [aux_sym_float_token5] = ACTIONS(376),
    [aux_sym_integer_token1] = ACTIONS(376),
    [aux_sym_integer_token2] = ACTIONS(378),
    [sym_char] = ACTIONS(376),
    [sym_string] = ACTIONS(378),
    [sym_byte_compiled_file_name] = ACTIONS(378),
    [aux_sym_symbol_token1] = ACTIONS(378),
    [aux_sym_symbol_token2] = ACTIONS(376),
    [anon_sym_POUND_SQUOTE] = ACTIONS(378),
    [anon_sym_SQUOTE] = ACTIONS(378),
    [anon_sym_BQUOTE] = ACTIONS(378),
    [anon_sym_COMMA_AT] = ACTIONS(378),
    [anon_sym_COMMA] = ACTIONS(376),
    [anon_sym_LPAREN] = ACTIONS(378),
    [anon_sym_LBRACK] = ACTIONS(378),
    [anon_sym_RBRACK] = ACTIONS(378),
    [anon_sym_POUND_LBRACK] = ACTIONS(378),
    [sym_comment] = ACTIONS(3),
  },
  [75] = {
    [aux_sym_float_token1] = ACTIONS(372),
    [aux_sym_float_token2] = ACTIONS(372),
    [aux_sym_float_token3] = ACTIONS(372),
    [aux_sym_float_token4] = ACTIONS(372),
    [aux_sym_float_token5] = ACTIONS(372),
    [aux_sym_integer_token1] = ACTIONS(372),
    [aux_sym_integer_token2] = ACTIONS(374),
    [sym_char] = ACTIONS(372),
    [sym_string] = ACTIONS(374),
    [sym_byte_compiled_file_name] = ACTIONS(374),
    [aux_sym_symbol_token1] = ACTIONS(374),
    [aux_sym_symbol_token2] = ACTIONS(372),
    [anon_sym_POUND_SQUOTE] = ACTIONS(374),
    [anon_sym_SQUOTE] = ACTIONS(374),
    [anon_sym_BQUOTE] = ACTIONS(374),
    [anon_sym_COMMA_AT] = ACTIONS(374),
    [anon_sym_COMMA] = ACTIONS(372),
    [anon_sym_LPAREN] = ACTIONS(374),
    [anon_sym_LBRACK] = ACTIONS(374),
    [anon_sym_RBRACK] = ACTIONS(374),
    [anon_sym_POUND_LBRACK] = ACTIONS(374),
    [sym_comment] = ACTIONS(3),
  },
  [76] = {
    [aux_sym_float_token1] = ACTIONS(368),
    [aux_sym_float_token2] = ACTIONS(368),
    [aux_sym_float_token3] = ACTIONS(368),
    [aux_sym_float_token4] = ACTIONS(368),
    [aux_sym_float_token5] = ACTIONS(368),
    [aux_sym_integer_token1] = ACTIONS(368),
    [aux_sym_integer_token2] = ACTIONS(370),
    [sym_char] = ACTIONS(368),
    [sym_string] = ACTIONS(370),
    [sym_byte_compiled_file_name] = ACTIONS(370),
    [aux_sym_symbol_token1] = ACTIONS(370),
    [aux_sym_symbol_token2] = ACTIONS(368),
    [anon_sym_POUND_SQUOTE] = ACTIONS(370),
    [anon_sym_SQUOTE] = ACTIONS(370),
    [anon_sym_BQUOTE] = ACTIONS(370),
    [anon_sym_COMMA_AT] = ACTIONS(370),
    [anon_sym_COMMA] = ACTIONS(368),
    [anon_sym_LPAREN] = ACTIONS(370),
    [anon_sym_LBRACK] = ACTIONS(370),
    [anon_sym_RBRACK] = ACTIONS(370),
    [anon_sym_POUND_LBRACK] = ACTIONS(370),
    [sym_comment] = ACTIONS(3),
  },
  [77] = {
    [aux_sym_float_token1] = ACTIONS(364),
    [aux_sym_float_token2] = ACTIONS(364),
    [aux_sym_float_token3] = ACTIONS(364),
    [aux_sym_float_token4] = ACTIONS(364),
    [aux_sym_float_token5] = ACTIONS(364),
    [aux_sym_integer_token1] = ACTIONS(364),
    [aux_sym_integer_token2] = ACTIONS(366),
    [sym_char] = ACTIONS(364),
    [sym_string] = ACTIONS(366),
    [sym_byte_compiled_file_name] = ACTIONS(366),
    [aux_sym_symbol_token1] = ACTIONS(366),
    [aux_sym_symbol_token2] = ACTIONS(364),
    [anon_sym_POUND_SQUOTE] = ACTIONS(366),
    [anon_sym_SQUOTE] = ACTIONS(366),
    [anon_sym_BQUOTE] = ACTIONS(366),
    [anon_sym_COMMA_AT] = ACTIONS(366),
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_LPAREN] = ACTIONS(366),
    [anon_sym_LBRACK] = ACTIONS(366),
    [anon_sym_RBRACK] = ACTIONS(366),
    [anon_sym_POUND_LBRACK] = ACTIONS(366),
    [sym_comment] = ACTIONS(3),
  },
  [78] = {
    [aux_sym_float_token1] = ACTIONS(362),
    [aux_sym_float_token2] = ACTIONS(362),
    [aux_sym_float_token3] = ACTIONS(362),
    [aux_sym_float_token4] = ACTIONS(362),
    [aux_sym_float_token5] = ACTIONS(362),
    [aux_sym_integer_token1] = ACTIONS(362),
    [aux_sym_integer_token2] = ACTIONS(360),
    [sym_char] = ACTIONS(362),
    [sym_string] = ACTIONS(360),
    [sym_byte_compiled_file_name] = ACTIONS(360),
    [aux_sym_symbol_token1] = ACTIONS(360),
    [aux_sym_symbol_token2] = ACTIONS(362),
    [anon_sym_POUND_SQUOTE] = ACTIONS(360),
    [anon_sym_SQUOTE] = ACTIONS(360),
    [anon_sym_BQUOTE] = ACTIONS(360),
    [anon_sym_COMMA_AT] = ACTIONS(360),
    [anon_sym_COMMA] = ACTIONS(362),
    [anon_sym_LPAREN] = ACTIONS(360),
    [anon_sym_LBRACK] = ACTIONS(360),
    [anon_sym_RBRACK] = ACTIONS(360),
    [anon_sym_POUND_LBRACK] = ACTIONS(360),
    [sym_comment] = ACTIONS(3),
  },
  [79] = {
    [aux_sym_float_token1] = ACTIONS(406),
    [aux_sym_float_token2] = ACTIONS(406),
    [aux_sym_float_token3] = ACTIONS(406),
    [aux_sym_float_token4] = ACTIONS(406),
    [aux_sym_float_token5] = ACTIONS(406),
    [aux_sym_integer_token1] = ACTIONS(406),
    [aux_sym_integer_token2] = ACTIONS(404),
    [sym_char] = ACTIONS(406),
    [sym_string] = ACTIONS(404),
    [sym_byte_compiled_file_name] = ACTIONS(404),
    [aux_sym_symbol_token1] = ACTIONS(404),
    [aux_sym_symbol_token2] = ACTIONS(406),
    [anon_sym_POUND_SQUOTE] = ACTIONS(404),
    [anon_sym_SQUOTE] = ACTIONS(404),
    [anon_sym_BQUOTE] = ACTIONS(404),
    [anon_sym_COMMA_AT] = ACTIONS(404),
    [anon_sym_COMMA] = ACTIONS(406),
    [anon_sym_LPAREN] = ACTIONS(404),
    [anon_sym_LBRACK] = ACTIONS(404),
    [anon_sym_RBRACK] = ACTIONS(404),
    [anon_sym_POUND_LBRACK] = ACTIONS(404),
    [sym_comment] = ACTIONS(3),
  },
  [80] = {
    [aux_sym_float_token1] = ACTIONS(402),
    [aux_sym_float_token2] = ACTIONS(402),
    [aux_sym_float_token3] = ACTIONS(402),
    [aux_sym_float_token4] = ACTIONS(402),
    [aux_sym_float_token5] = ACTIONS(402),
    [aux_sym_integer_token1] = ACTIONS(402),
    [aux_sym_integer_token2] = ACTIONS(400),
    [sym_char] = ACTIONS(402),
    [sym_string] = ACTIONS(400),
    [sym_byte_compiled_file_name] = ACTIONS(400),
    [aux_sym_symbol_token1] = ACTIONS(400),
    [aux_sym_symbol_token2] = ACTIONS(402),
    [anon_sym_POUND_SQUOTE] = ACTIONS(400),
    [anon_sym_SQUOTE] = ACTIONS(400),
    [anon_sym_BQUOTE] = ACTIONS(400),
    [anon_sym_COMMA_AT] = ACTIONS(400),
    [anon_sym_COMMA] = ACTIONS(402),
    [anon_sym_LPAREN] = ACTIONS(400),
    [anon_sym_LBRACK] = ACTIONS(400),
    [anon_sym_RBRACK] = ACTIONS(400),
    [anon_sym_POUND_LBRACK] = ACTIONS(400),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
  [7] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
  [14] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
  [21] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
  [28] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
  [35] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
  [42] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(81)] = 0,
  [SMALL_STATE(82)] = 7,
  [SMALL_STATE(83)] = 14,
  [SMALL_STATE(84)] = 21,
  [SMALL_STATE(85)] = 28,
  [SMALL_STATE(86)] = 35,
  [SMALL_STATE(87)] = 42,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytecode, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytecode, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splice, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splice, 2),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytecode, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytecode, 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [424] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
