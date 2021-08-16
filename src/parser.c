#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 82
#define LARGE_STATE_COUNT 75
#define SYMBOL_COUNT 37
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
  sym_unquote = 32,
  sym_list = 33,
  sym_vector = 34,
  sym_bytecode = 35,
  aux_sym_source_file_repeat1 = 36,
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

static inline bool sym_char_character_set_1(int32_t c) {
  return (c < '_'
    ? (c < '*'
      ? (c < '$'
        ? c == '!'
        : c <= '%')
      : (c <= '+' || (c < '<'
        ? (c >= '-' && c <= ':')
        : c <= 'Z')))
    : (c <= '_' || (c < '~'
      ? (c < '|'
        ? (c >= 'a' && c <= 'z')
        : c <= '|')
      : (c <= '~' || c == 955))));
}

static inline bool aux_sym_symbol_token2_character_set_1(int32_t c) {
  return (c < '\\'
    ? (c < '*'
      ? (c < '$'
        ? c == '!'
        : c <= '%')
      : (c <= '+' || (c < '<'
        ? (c >= '-' && c <= ':')
        : c <= 'Z')))
    : (c <= '\\' || (c < '|'
      ? (c < 'a'
        ? c == '_'
        : c <= 'z')
      : (c <= '|' || (c < 955
        ? c == '~'
        : c <= 955)))));
}

static inline bool aux_sym_symbol_token2_character_set_2(int32_t c) {
  return (c < '\\'
    ? (c < '*'
      ? (c < '$'
        ? c == '!'
        : c <= '%')
      : (c <= '*' || (c < '<'
        ? (c >= '-' && c <= ':')
        : c <= 'Z')))
    : (c <= '\\' || (c < '|'
      ? (c < 'a'
        ? c == '_'
        : c <= 'z')
      : (c <= '|' || (c < 955
        ? c == '~'
        : c <= 955)))));
}

static inline bool aux_sym_symbol_token2_character_set_3(int32_t c) {
  return (c < '\\'
    ? (c < '*'
      ? (c < '$'
        ? c == '!'
        : c <= '%')
      : (c <= '+' || (c < '<'
        ? (c >= '-' && c <= ':')
        : c <= 'Z')))
    : (c <= '\\' || (c < '|'
      ? (c < 'b'
        ? c == '_'
        : c <= 'z')
      : (c <= '|' || (c < 955
        ? c == '~'
        : c <= 955)))));
}

static inline bool aux_sym_symbol_token2_character_set_4(int32_t c) {
  return (c < '\\'
    ? (c < '*'
      ? (c < '$'
        ? c == '!'
        : c <= '%')
      : (c <= '+' || (c < '<'
        ? (c >= '-' && c <= ':')
        : c <= 'Z')))
    : (c <= '\\' || (c < '~'
      ? (c < '|'
        ? (c >= '_' && c <= 'z')
        : c <= '|')
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
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
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
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
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
      if (sym_char_character_set_1(lookahead)) ADVANCE(45);
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
      if (aux_sym_symbol_token2_character_set_4(lookahead)) ADVANCE(75);
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
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 20},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 20},
  [47] = {.lex_state = 20},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 20},
  [52] = {.lex_state = 20},
  [53] = {.lex_state = 20},
  [54] = {.lex_state = 20},
  [55] = {.lex_state = 20},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 20},
  [58] = {.lex_state = 20},
  [59] = {.lex_state = 20},
  [60] = {.lex_state = 20},
  [61] = {.lex_state = 20},
  [62] = {.lex_state = 20},
  [63] = {.lex_state = 20},
  [64] = {.lex_state = 20},
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
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
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
    [sym_source_file] = STATE(81),
    [sym__sexp] = STATE(14),
    [sym__atom] = STATE(14),
    [sym_float] = STATE(14),
    [sym_integer] = STATE(14),
    [sym_symbol] = STATE(14),
    [sym_quote] = STATE(14),
    [sym_unquote] = STATE(14),
    [sym_list] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_bytecode] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
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
    [sym__sexp] = STATE(8),
    [sym__atom] = STATE(8),
    [sym_float] = STATE(8),
    [sym_integer] = STATE(8),
    [sym_symbol] = STATE(8),
    [sym_quote] = STATE(8),
    [sym_unquote] = STATE(8),
    [sym_list] = STATE(8),
    [sym_vector] = STATE(8),
    [sym_bytecode] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
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
    [sym__sexp] = STATE(4),
    [sym__atom] = STATE(4),
    [sym_float] = STATE(4),
    [sym_integer] = STATE(4),
    [sym_symbol] = STATE(4),
    [sym_quote] = STATE(4),
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
    [sym__sexp] = STATE(8),
    [sym__atom] = STATE(8),
    [sym_float] = STATE(8),
    [sym_integer] = STATE(8),
    [sym_symbol] = STATE(8),
    [sym_quote] = STATE(8),
    [sym_unquote] = STATE(8),
    [sym_list] = STATE(8),
    [sym_vector] = STATE(8),
    [sym_bytecode] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
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
    [sym_dot] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_POUND_LBRACK] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__sexp] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_float] = STATE(2),
    [sym_integer] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_quote] = STATE(2),
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
    [sym_char] = ACTIONS(75),
    [sym_string] = ACTIONS(77),
    [sym_byte_compiled_file_name] = ACTIONS(77),
    [aux_sym_symbol_token1] = ACTIONS(43),
    [aux_sym_symbol_token2] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [sym_dot] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_POUND_LBRACK] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__sexp] = STATE(8),
    [sym__atom] = STATE(8),
    [sym_float] = STATE(8),
    [sym_integer] = STATE(8),
    [sym_symbol] = STATE(8),
    [sym_quote] = STATE(8),
    [sym_unquote] = STATE(8),
    [sym_list] = STATE(8),
    [sym_vector] = STATE(8),
    [sym_bytecode] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
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
    [sym_dot] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_POUND_LBRACK] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__sexp] = STATE(6),
    [sym__atom] = STATE(6),
    [sym_float] = STATE(6),
    [sym_integer] = STATE(6),
    [sym_symbol] = STATE(6),
    [sym_quote] = STATE(6),
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
    [sym_char] = ACTIONS(87),
    [sym_string] = ACTIONS(89),
    [sym_byte_compiled_file_name] = ACTIONS(89),
    [aux_sym_symbol_token1] = ACTIONS(43),
    [aux_sym_symbol_token2] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [sym_dot] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_POUND_LBRACK] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__sexp] = STATE(8),
    [sym__atom] = STATE(8),
    [sym_float] = STATE(8),
    [sym_integer] = STATE(8),
    [sym_symbol] = STATE(8),
    [sym_quote] = STATE(8),
    [sym_unquote] = STATE(8),
    [sym_list] = STATE(8),
    [sym_vector] = STATE(8),
    [sym_bytecode] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_float_token1] = ACTIONS(95),
    [aux_sym_float_token2] = ACTIONS(95),
    [aux_sym_float_token3] = ACTIONS(95),
    [aux_sym_float_token4] = ACTIONS(95),
    [aux_sym_float_token5] = ACTIONS(95),
    [aux_sym_integer_token1] = ACTIONS(98),
    [aux_sym_integer_token2] = ACTIONS(101),
    [sym_char] = ACTIONS(104),
    [sym_string] = ACTIONS(107),
    [sym_byte_compiled_file_name] = ACTIONS(107),
    [aux_sym_symbol_token1] = ACTIONS(110),
    [aux_sym_symbol_token2] = ACTIONS(113),
    [anon_sym_POUND_SQUOTE] = ACTIONS(116),
    [anon_sym_SQUOTE] = ACTIONS(116),
    [anon_sym_BQUOTE] = ACTIONS(116),
    [anon_sym_COMMA_AT] = ACTIONS(119),
    [anon_sym_COMMA] = ACTIONS(122),
    [sym_dot] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(130),
    [anon_sym_LBRACK] = ACTIONS(132),
    [anon_sym_POUND_LBRACK] = ACTIONS(135),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__sexp] = STATE(13),
    [sym__atom] = STATE(13),
    [sym_float] = STATE(13),
    [sym_integer] = STATE(13),
    [sym_symbol] = STATE(13),
    [sym_quote] = STATE(13),
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
    [sym__sexp] = STATE(22),
    [sym__atom] = STATE(22),
    [sym_float] = STATE(22),
    [sym_integer] = STATE(22),
    [sym_symbol] = STATE(22),
    [sym_quote] = STATE(22),
    [sym_unquote] = STATE(22),
    [sym_list] = STATE(22),
    [sym_vector] = STATE(22),
    [sym_bytecode] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(22),
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
    [sym__sexp] = STATE(20),
    [sym__atom] = STATE(20),
    [sym_float] = STATE(20),
    [sym_integer] = STATE(20),
    [sym_symbol] = STATE(20),
    [sym_quote] = STATE(20),
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
    [sym_char] = ACTIONS(178),
    [sym_string] = ACTIONS(180),
    [sym_byte_compiled_file_name] = ACTIONS(180),
    [aux_sym_symbol_token1] = ACTIONS(148),
    [aux_sym_symbol_token2] = ACTIONS(150),
    [anon_sym_POUND_SQUOTE] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [anon_sym_COMMA_AT] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_RBRACK] = ACTIONS(182),
    [anon_sym_POUND_LBRACK] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym__sexp] = STATE(13),
    [sym__atom] = STATE(13),
    [sym_float] = STATE(13),
    [sym_integer] = STATE(13),
    [sym_symbol] = STATE(13),
    [sym_quote] = STATE(13),
    [sym_unquote] = STATE(13),
    [sym_list] = STATE(13),
    [sym_vector] = STATE(13),
    [sym_bytecode] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [aux_sym_float_token1] = ACTIONS(184),
    [aux_sym_float_token2] = ACTIONS(184),
    [aux_sym_float_token3] = ACTIONS(184),
    [aux_sym_float_token4] = ACTIONS(184),
    [aux_sym_float_token5] = ACTIONS(184),
    [aux_sym_integer_token1] = ACTIONS(187),
    [aux_sym_integer_token2] = ACTIONS(190),
    [sym_char] = ACTIONS(193),
    [sym_string] = ACTIONS(196),
    [sym_byte_compiled_file_name] = ACTIONS(196),
    [aux_sym_symbol_token1] = ACTIONS(199),
    [aux_sym_symbol_token2] = ACTIONS(202),
    [anon_sym_POUND_SQUOTE] = ACTIONS(205),
    [anon_sym_SQUOTE] = ACTIONS(205),
    [anon_sym_BQUOTE] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(208),
    [anon_sym_COMMA] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(214),
    [anon_sym_LBRACK] = ACTIONS(217),
    [anon_sym_RBRACK] = ACTIONS(130),
    [anon_sym_POUND_LBRACK] = ACTIONS(220),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym__sexp] = STATE(21),
    [sym__atom] = STATE(21),
    [sym_float] = STATE(21),
    [sym_integer] = STATE(21),
    [sym_symbol] = STATE(21),
    [sym_quote] = STATE(21),
    [sym_unquote] = STATE(21),
    [sym_list] = STATE(21),
    [sym_vector] = STATE(21),
    [sym_bytecode] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(223),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(7),
    [aux_sym_float_token4] = ACTIONS(7),
    [aux_sym_float_token5] = ACTIONS(7),
    [aux_sym_integer_token1] = ACTIONS(9),
    [aux_sym_integer_token2] = ACTIONS(11),
    [sym_char] = ACTIONS(225),
    [sym_string] = ACTIONS(227),
    [sym_byte_compiled_file_name] = ACTIONS(227),
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
  [15] = {
    [sym__sexp] = STATE(13),
    [sym__atom] = STATE(13),
    [sym_float] = STATE(13),
    [sym_integer] = STATE(13),
    [sym_symbol] = STATE(13),
    [sym_quote] = STATE(13),
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
    [anon_sym_RBRACK] = ACTIONS(229),
    [anon_sym_POUND_LBRACK] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym__sexp] = STATE(13),
    [sym__atom] = STATE(13),
    [sym_float] = STATE(13),
    [sym_integer] = STATE(13),
    [sym_symbol] = STATE(13),
    [sym_quote] = STATE(13),
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
    [anon_sym_RBRACK] = ACTIONS(231),
    [anon_sym_POUND_LBRACK] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym__sexp] = STATE(23),
    [sym__atom] = STATE(23),
    [sym_float] = STATE(23),
    [sym_integer] = STATE(23),
    [sym_symbol] = STATE(23),
    [sym_quote] = STATE(23),
    [sym_unquote] = STATE(23),
    [sym_list] = STATE(23),
    [sym_vector] = STATE(23),
    [sym_bytecode] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(23),
    [aux_sym_float_token1] = ACTIONS(138),
    [aux_sym_float_token2] = ACTIONS(138),
    [aux_sym_float_token3] = ACTIONS(138),
    [aux_sym_float_token4] = ACTIONS(138),
    [aux_sym_float_token5] = ACTIONS(138),
    [aux_sym_integer_token1] = ACTIONS(140),
    [aux_sym_integer_token2] = ACTIONS(142),
    [sym_char] = ACTIONS(233),
    [sym_string] = ACTIONS(235),
    [sym_byte_compiled_file_name] = ACTIONS(235),
    [aux_sym_symbol_token1] = ACTIONS(148),
    [aux_sym_symbol_token2] = ACTIONS(150),
    [anon_sym_POUND_SQUOTE] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [anon_sym_COMMA_AT] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_RBRACK] = ACTIONS(237),
    [anon_sym_POUND_LBRACK] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym__sexp] = STATE(15),
    [sym__atom] = STATE(15),
    [sym_float] = STATE(15),
    [sym_integer] = STATE(15),
    [sym_symbol] = STATE(15),
    [sym_quote] = STATE(15),
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
    [sym_char] = ACTIONS(239),
    [sym_string] = ACTIONS(241),
    [sym_byte_compiled_file_name] = ACTIONS(241),
    [aux_sym_symbol_token1] = ACTIONS(148),
    [aux_sym_symbol_token2] = ACTIONS(150),
    [anon_sym_POUND_SQUOTE] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [anon_sym_COMMA_AT] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_RBRACK] = ACTIONS(243),
    [anon_sym_POUND_LBRACK] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym__sexp] = STATE(16),
    [sym__atom] = STATE(16),
    [sym_float] = STATE(16),
    [sym_integer] = STATE(16),
    [sym_symbol] = STATE(16),
    [sym_quote] = STATE(16),
    [sym_unquote] = STATE(16),
    [sym_list] = STATE(16),
    [sym_vector] = STATE(16),
    [sym_bytecode] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
    [aux_sym_float_token1] = ACTIONS(138),
    [aux_sym_float_token2] = ACTIONS(138),
    [aux_sym_float_token3] = ACTIONS(138),
    [aux_sym_float_token4] = ACTIONS(138),
    [aux_sym_float_token5] = ACTIONS(138),
    [aux_sym_integer_token1] = ACTIONS(140),
    [aux_sym_integer_token2] = ACTIONS(142),
    [sym_char] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_byte_compiled_file_name] = ACTIONS(247),
    [aux_sym_symbol_token1] = ACTIONS(148),
    [aux_sym_symbol_token2] = ACTIONS(150),
    [anon_sym_POUND_SQUOTE] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [anon_sym_COMMA_AT] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_RBRACK] = ACTIONS(249),
    [anon_sym_POUND_LBRACK] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym__sexp] = STATE(13),
    [sym__atom] = STATE(13),
    [sym_float] = STATE(13),
    [sym_integer] = STATE(13),
    [sym_symbol] = STATE(13),
    [sym_quote] = STATE(13),
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
    [anon_sym_RBRACK] = ACTIONS(251),
    [anon_sym_POUND_LBRACK] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym__sexp] = STATE(21),
    [sym__atom] = STATE(21),
    [sym_float] = STATE(21),
    [sym_integer] = STATE(21),
    [sym_symbol] = STATE(21),
    [sym_quote] = STATE(21),
    [sym_unquote] = STATE(21),
    [sym_list] = STATE(21),
    [sym_vector] = STATE(21),
    [sym_bytecode] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(130),
    [aux_sym_float_token1] = ACTIONS(253),
    [aux_sym_float_token2] = ACTIONS(253),
    [aux_sym_float_token3] = ACTIONS(253),
    [aux_sym_float_token4] = ACTIONS(253),
    [aux_sym_float_token5] = ACTIONS(253),
    [aux_sym_integer_token1] = ACTIONS(256),
    [aux_sym_integer_token2] = ACTIONS(259),
    [sym_char] = ACTIONS(262),
    [sym_string] = ACTIONS(265),
    [sym_byte_compiled_file_name] = ACTIONS(265),
    [aux_sym_symbol_token1] = ACTIONS(268),
    [aux_sym_symbol_token2] = ACTIONS(271),
    [anon_sym_POUND_SQUOTE] = ACTIONS(274),
    [anon_sym_SQUOTE] = ACTIONS(274),
    [anon_sym_BQUOTE] = ACTIONS(274),
    [anon_sym_COMMA_AT] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(280),
    [anon_sym_LPAREN] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(286),
    [anon_sym_POUND_LBRACK] = ACTIONS(289),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym__sexp] = STATE(13),
    [sym__atom] = STATE(13),
    [sym_float] = STATE(13),
    [sym_integer] = STATE(13),
    [sym_symbol] = STATE(13),
    [sym_quote] = STATE(13),
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
    [anon_sym_RBRACK] = ACTIONS(292),
    [anon_sym_POUND_LBRACK] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym__sexp] = STATE(13),
    [sym__atom] = STATE(13),
    [sym_float] = STATE(13),
    [sym_integer] = STATE(13),
    [sym_symbol] = STATE(13),
    [sym_quote] = STATE(13),
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
    [anon_sym_RBRACK] = ACTIONS(294),
    [anon_sym_POUND_LBRACK] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym__sexp] = STATE(75),
    [sym__atom] = STATE(75),
    [sym_float] = STATE(75),
    [sym_integer] = STATE(75),
    [sym_symbol] = STATE(75),
    [sym_quote] = STATE(75),
    [sym_unquote] = STATE(75),
    [sym_list] = STATE(75),
    [sym_vector] = STATE(75),
    [sym_bytecode] = STATE(75),
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
    [sym__sexp] = STATE(80),
    [sym__atom] = STATE(80),
    [sym_float] = STATE(80),
    [sym_integer] = STATE(80),
    [sym_symbol] = STATE(80),
    [sym_quote] = STATE(80),
    [sym_unquote] = STATE(80),
    [sym_list] = STATE(80),
    [sym_vector] = STATE(80),
    [sym_bytecode] = STATE(80),
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
    [sym__sexp] = STATE(51),
    [sym__atom] = STATE(51),
    [sym_float] = STATE(51),
    [sym_integer] = STATE(51),
    [sym_symbol] = STATE(51),
    [sym_quote] = STATE(51),
    [sym_unquote] = STATE(51),
    [sym_list] = STATE(51),
    [sym_vector] = STATE(51),
    [sym_bytecode] = STATE(51),
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
    [sym__sexp] = STATE(78),
    [sym__atom] = STATE(78),
    [sym_float] = STATE(78),
    [sym_integer] = STATE(78),
    [sym_symbol] = STATE(78),
    [sym_quote] = STATE(78),
    [sym_unquote] = STATE(78),
    [sym_list] = STATE(78),
    [sym_vector] = STATE(78),
    [sym_bytecode] = STATE(78),
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
    [sym__sexp] = STATE(52),
    [sym__atom] = STATE(52),
    [sym_float] = STATE(52),
    [sym_integer] = STATE(52),
    [sym_symbol] = STATE(52),
    [sym_quote] = STATE(52),
    [sym_unquote] = STATE(52),
    [sym_list] = STATE(52),
    [sym_vector] = STATE(52),
    [sym_bytecode] = STATE(52),
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
    [sym__sexp] = STATE(77),
    [sym__atom] = STATE(77),
    [sym_float] = STATE(77),
    [sym_integer] = STATE(77),
    [sym_symbol] = STATE(77),
    [sym_quote] = STATE(77),
    [sym_unquote] = STATE(77),
    [sym_list] = STATE(77),
    [sym_vector] = STATE(77),
    [sym_bytecode] = STATE(77),
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
    [sym__sexp] = STATE(76),
    [sym__atom] = STATE(76),
    [sym_float] = STATE(76),
    [sym_integer] = STATE(76),
    [sym_symbol] = STATE(76),
    [sym_quote] = STATE(76),
    [sym_unquote] = STATE(76),
    [sym_list] = STATE(76),
    [sym_vector] = STATE(76),
    [sym_bytecode] = STATE(76),
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
    [sym__sexp] = STATE(72),
    [sym__atom] = STATE(72),
    [sym_float] = STATE(72),
    [sym_integer] = STATE(72),
    [sym_symbol] = STATE(72),
    [sym_quote] = STATE(72),
    [sym_unquote] = STATE(72),
    [sym_list] = STATE(72),
    [sym_vector] = STATE(72),
    [sym_bytecode] = STATE(72),
    [aux_sym_float_token1] = ACTIONS(138),
    [aux_sym_float_token2] = ACTIONS(138),
    [aux_sym_float_token3] = ACTIONS(138),
    [aux_sym_float_token4] = ACTIONS(138),
    [aux_sym_float_token5] = ACTIONS(138),
    [aux_sym_integer_token1] = ACTIONS(140),
    [aux_sym_integer_token2] = ACTIONS(142),
    [sym_char] = ACTIONS(324),
    [sym_string] = ACTIONS(326),
    [sym_byte_compiled_file_name] = ACTIONS(326),
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
  [32] = {
    [sym__sexp] = STATE(73),
    [sym__atom] = STATE(73),
    [sym_float] = STATE(73),
    [sym_integer] = STATE(73),
    [sym_symbol] = STATE(73),
    [sym_quote] = STATE(73),
    [sym_unquote] = STATE(73),
    [sym_list] = STATE(73),
    [sym_vector] = STATE(73),
    [sym_bytecode] = STATE(73),
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
    [sym__sexp] = STATE(48),
    [sym__atom] = STATE(48),
    [sym_float] = STATE(48),
    [sym_integer] = STATE(48),
    [sym_symbol] = STATE(48),
    [sym_quote] = STATE(48),
    [sym_unquote] = STATE(48),
    [sym_list] = STATE(48),
    [sym_vector] = STATE(48),
    [sym_bytecode] = STATE(48),
    [aux_sym_float_token1] = ACTIONS(33),
    [aux_sym_float_token2] = ACTIONS(33),
    [aux_sym_float_token3] = ACTIONS(33),
    [aux_sym_float_token4] = ACTIONS(33),
    [aux_sym_float_token5] = ACTIONS(33),
    [aux_sym_integer_token1] = ACTIONS(35),
    [aux_sym_integer_token2] = ACTIONS(37),
    [sym_char] = ACTIONS(332),
    [sym_string] = ACTIONS(334),
    [sym_byte_compiled_file_name] = ACTIONS(334),
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
  [34] = {
    [sym__sexp] = STATE(38),
    [sym__atom] = STATE(38),
    [sym_float] = STATE(38),
    [sym_integer] = STATE(38),
    [sym_symbol] = STATE(38),
    [sym_quote] = STATE(38),
    [sym_unquote] = STATE(38),
    [sym_list] = STATE(38),
    [sym_vector] = STATE(38),
    [sym_bytecode] = STATE(38),
    [aux_sym_float_token1] = ACTIONS(33),
    [aux_sym_float_token2] = ACTIONS(33),
    [aux_sym_float_token3] = ACTIONS(33),
    [aux_sym_float_token4] = ACTIONS(33),
    [aux_sym_float_token5] = ACTIONS(33),
    [aux_sym_integer_token1] = ACTIONS(35),
    [aux_sym_integer_token2] = ACTIONS(37),
    [sym_char] = ACTIONS(336),
    [sym_string] = ACTIONS(338),
    [sym_byte_compiled_file_name] = ACTIONS(338),
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
  [35] = {
    [sym__sexp] = STATE(79),
    [sym__atom] = STATE(79),
    [sym_float] = STATE(79),
    [sym_integer] = STATE(79),
    [sym_symbol] = STATE(79),
    [sym_quote] = STATE(79),
    [sym_unquote] = STATE(79),
    [sym_list] = STATE(79),
    [sym_vector] = STATE(79),
    [sym_bytecode] = STATE(79),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(7),
    [aux_sym_float_token4] = ACTIONS(7),
    [aux_sym_float_token5] = ACTIONS(7),
    [aux_sym_integer_token1] = ACTIONS(9),
    [aux_sym_integer_token2] = ACTIONS(11),
    [sym_char] = ACTIONS(340),
    [sym_string] = ACTIONS(342),
    [sym_byte_compiled_file_name] = ACTIONS(342),
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
  [36] = {
    [aux_sym_float_token1] = ACTIONS(344),
    [aux_sym_float_token2] = ACTIONS(344),
    [aux_sym_float_token3] = ACTIONS(344),
    [aux_sym_float_token4] = ACTIONS(344),
    [aux_sym_float_token5] = ACTIONS(344),
    [aux_sym_integer_token1] = ACTIONS(344),
    [aux_sym_integer_token2] = ACTIONS(346),
    [sym_char] = ACTIONS(344),
    [sym_string] = ACTIONS(346),
    [sym_byte_compiled_file_name] = ACTIONS(346),
    [aux_sym_symbol_token1] = ACTIONS(346),
    [aux_sym_symbol_token2] = ACTIONS(344),
    [anon_sym_POUND_SQUOTE] = ACTIONS(346),
    [anon_sym_SQUOTE] = ACTIONS(346),
    [anon_sym_BQUOTE] = ACTIONS(346),
    [anon_sym_COMMA_AT] = ACTIONS(346),
    [anon_sym_COMMA] = ACTIONS(344),
    [sym_dot] = ACTIONS(344),
    [anon_sym_LPAREN] = ACTIONS(346),
    [anon_sym_RPAREN] = ACTIONS(346),
    [anon_sym_LBRACK] = ACTIONS(346),
    [anon_sym_POUND_LBRACK] = ACTIONS(346),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(348),
    [aux_sym_float_token1] = ACTIONS(350),
    [aux_sym_float_token2] = ACTIONS(350),
    [aux_sym_float_token3] = ACTIONS(350),
    [aux_sym_float_token4] = ACTIONS(350),
    [aux_sym_float_token5] = ACTIONS(350),
    [aux_sym_integer_token1] = ACTIONS(350),
    [aux_sym_integer_token2] = ACTIONS(348),
    [sym_char] = ACTIONS(350),
    [sym_string] = ACTIONS(348),
    [sym_byte_compiled_file_name] = ACTIONS(348),
    [aux_sym_symbol_token1] = ACTIONS(348),
    [aux_sym_symbol_token2] = ACTIONS(350),
    [anon_sym_POUND_SQUOTE] = ACTIONS(348),
    [anon_sym_SQUOTE] = ACTIONS(348),
    [anon_sym_BQUOTE] = ACTIONS(348),
    [anon_sym_COMMA_AT] = ACTIONS(348),
    [anon_sym_COMMA] = ACTIONS(350),
    [anon_sym_LPAREN] = ACTIONS(348),
    [anon_sym_RPAREN] = ACTIONS(348),
    [anon_sym_LBRACK] = ACTIONS(348),
    [anon_sym_POUND_LBRACK] = ACTIONS(348),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [aux_sym_float_token1] = ACTIONS(352),
    [aux_sym_float_token2] = ACTIONS(352),
    [aux_sym_float_token3] = ACTIONS(352),
    [aux_sym_float_token4] = ACTIONS(352),
    [aux_sym_float_token5] = ACTIONS(352),
    [aux_sym_integer_token1] = ACTIONS(352),
    [aux_sym_integer_token2] = ACTIONS(354),
    [sym_char] = ACTIONS(352),
    [sym_string] = ACTIONS(354),
    [sym_byte_compiled_file_name] = ACTIONS(354),
    [aux_sym_symbol_token1] = ACTIONS(354),
    [aux_sym_symbol_token2] = ACTIONS(352),
    [anon_sym_POUND_SQUOTE] = ACTIONS(354),
    [anon_sym_SQUOTE] = ACTIONS(354),
    [anon_sym_BQUOTE] = ACTIONS(354),
    [anon_sym_COMMA_AT] = ACTIONS(354),
    [anon_sym_COMMA] = ACTIONS(352),
    [sym_dot] = ACTIONS(352),
    [anon_sym_LPAREN] = ACTIONS(354),
    [anon_sym_RPAREN] = ACTIONS(354),
    [anon_sym_LBRACK] = ACTIONS(354),
    [anon_sym_POUND_LBRACK] = ACTIONS(354),
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
    [aux_sym_float_token1] = ACTIONS(360),
    [aux_sym_float_token2] = ACTIONS(360),
    [aux_sym_float_token3] = ACTIONS(360),
    [aux_sym_float_token4] = ACTIONS(360),
    [aux_sym_float_token5] = ACTIONS(360),
    [aux_sym_integer_token1] = ACTIONS(360),
    [aux_sym_integer_token2] = ACTIONS(362),
    [sym_char] = ACTIONS(360),
    [sym_string] = ACTIONS(362),
    [sym_byte_compiled_file_name] = ACTIONS(362),
    [aux_sym_symbol_token1] = ACTIONS(362),
    [aux_sym_symbol_token2] = ACTIONS(360),
    [anon_sym_POUND_SQUOTE] = ACTIONS(362),
    [anon_sym_SQUOTE] = ACTIONS(362),
    [anon_sym_BQUOTE] = ACTIONS(362),
    [anon_sym_COMMA_AT] = ACTIONS(362),
    [anon_sym_COMMA] = ACTIONS(360),
    [sym_dot] = ACTIONS(360),
    [anon_sym_LPAREN] = ACTIONS(362),
    [anon_sym_RPAREN] = ACTIONS(362),
    [anon_sym_LBRACK] = ACTIONS(362),
    [anon_sym_POUND_LBRACK] = ACTIONS(362),
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
    [ts_builtin_sym_end] = ACTIONS(384),
    [aux_sym_float_token1] = ACTIONS(386),
    [aux_sym_float_token2] = ACTIONS(386),
    [aux_sym_float_token3] = ACTIONS(386),
    [aux_sym_float_token4] = ACTIONS(386),
    [aux_sym_float_token5] = ACTIONS(386),
    [aux_sym_integer_token1] = ACTIONS(386),
    [aux_sym_integer_token2] = ACTIONS(384),
    [sym_char] = ACTIONS(386),
    [sym_string] = ACTIONS(384),
    [sym_byte_compiled_file_name] = ACTIONS(384),
    [aux_sym_symbol_token1] = ACTIONS(384),
    [aux_sym_symbol_token2] = ACTIONS(386),
    [anon_sym_POUND_SQUOTE] = ACTIONS(384),
    [anon_sym_SQUOTE] = ACTIONS(384),
    [anon_sym_BQUOTE] = ACTIONS(384),
    [anon_sym_COMMA_AT] = ACTIONS(384),
    [anon_sym_COMMA] = ACTIONS(386),
    [anon_sym_LPAREN] = ACTIONS(384),
    [anon_sym_RPAREN] = ACTIONS(384),
    [anon_sym_LBRACK] = ACTIONS(384),
    [anon_sym_POUND_LBRACK] = ACTIONS(384),
    [sym_comment] = ACTIONS(3),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(388),
    [aux_sym_float_token1] = ACTIONS(390),
    [aux_sym_float_token2] = ACTIONS(390),
    [aux_sym_float_token3] = ACTIONS(390),
    [aux_sym_float_token4] = ACTIONS(390),
    [aux_sym_float_token5] = ACTIONS(390),
    [aux_sym_integer_token1] = ACTIONS(390),
    [aux_sym_integer_token2] = ACTIONS(388),
    [sym_char] = ACTIONS(390),
    [sym_string] = ACTIONS(388),
    [sym_byte_compiled_file_name] = ACTIONS(388),
    [aux_sym_symbol_token1] = ACTIONS(388),
    [aux_sym_symbol_token2] = ACTIONS(390),
    [anon_sym_POUND_SQUOTE] = ACTIONS(388),
    [anon_sym_SQUOTE] = ACTIONS(388),
    [anon_sym_BQUOTE] = ACTIONS(388),
    [anon_sym_COMMA_AT] = ACTIONS(388),
    [anon_sym_COMMA] = ACTIONS(390),
    [anon_sym_LPAREN] = ACTIONS(388),
    [anon_sym_RPAREN] = ACTIONS(388),
    [anon_sym_LBRACK] = ACTIONS(388),
    [anon_sym_POUND_LBRACK] = ACTIONS(388),
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
    [aux_sym_float_token1] = ACTIONS(350),
    [aux_sym_float_token2] = ACTIONS(350),
    [aux_sym_float_token3] = ACTIONS(350),
    [aux_sym_float_token4] = ACTIONS(350),
    [aux_sym_float_token5] = ACTIONS(350),
    [aux_sym_integer_token1] = ACTIONS(350),
    [aux_sym_integer_token2] = ACTIONS(348),
    [sym_char] = ACTIONS(350),
    [sym_string] = ACTIONS(348),
    [sym_byte_compiled_file_name] = ACTIONS(348),
    [aux_sym_symbol_token1] = ACTIONS(348),
    [aux_sym_symbol_token2] = ACTIONS(350),
    [anon_sym_POUND_SQUOTE] = ACTIONS(348),
    [anon_sym_SQUOTE] = ACTIONS(348),
    [anon_sym_BQUOTE] = ACTIONS(348),
    [anon_sym_COMMA_AT] = ACTIONS(348),
    [anon_sym_COMMA] = ACTIONS(350),
    [sym_dot] = ACTIONS(350),
    [anon_sym_LPAREN] = ACTIONS(348),
    [anon_sym_RPAREN] = ACTIONS(348),
    [anon_sym_LBRACK] = ACTIONS(348),
    [anon_sym_POUND_LBRACK] = ACTIONS(348),
    [sym_comment] = ACTIONS(3),
  },
  [50] = {
    [aux_sym_float_token1] = ACTIONS(390),
    [aux_sym_float_token2] = ACTIONS(390),
    [aux_sym_float_token3] = ACTIONS(390),
    [aux_sym_float_token4] = ACTIONS(390),
    [aux_sym_float_token5] = ACTIONS(390),
    [aux_sym_integer_token1] = ACTIONS(390),
    [aux_sym_integer_token2] = ACTIONS(388),
    [sym_char] = ACTIONS(390),
    [sym_string] = ACTIONS(388),
    [sym_byte_compiled_file_name] = ACTIONS(388),
    [aux_sym_symbol_token1] = ACTIONS(388),
    [aux_sym_symbol_token2] = ACTIONS(390),
    [anon_sym_POUND_SQUOTE] = ACTIONS(388),
    [anon_sym_SQUOTE] = ACTIONS(388),
    [anon_sym_BQUOTE] = ACTIONS(388),
    [anon_sym_COMMA_AT] = ACTIONS(388),
    [anon_sym_COMMA] = ACTIONS(390),
    [sym_dot] = ACTIONS(390),
    [anon_sym_LPAREN] = ACTIONS(388),
    [anon_sym_RPAREN] = ACTIONS(388),
    [anon_sym_LBRACK] = ACTIONS(388),
    [anon_sym_POUND_LBRACK] = ACTIONS(388),
    [sym_comment] = ACTIONS(3),
  },
  [51] = {
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
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(354),
    [aux_sym_float_token1] = ACTIONS(352),
    [aux_sym_float_token2] = ACTIONS(352),
    [aux_sym_float_token3] = ACTIONS(352),
    [aux_sym_float_token4] = ACTIONS(352),
    [aux_sym_float_token5] = ACTIONS(352),
    [aux_sym_integer_token1] = ACTIONS(352),
    [aux_sym_integer_token2] = ACTIONS(354),
    [sym_char] = ACTIONS(352),
    [sym_string] = ACTIONS(354),
    [sym_byte_compiled_file_name] = ACTIONS(354),
    [aux_sym_symbol_token1] = ACTIONS(354),
    [aux_sym_symbol_token2] = ACTIONS(352),
    [anon_sym_POUND_SQUOTE] = ACTIONS(354),
    [anon_sym_SQUOTE] = ACTIONS(354),
    [anon_sym_BQUOTE] = ACTIONS(354),
    [anon_sym_COMMA_AT] = ACTIONS(354),
    [anon_sym_COMMA] = ACTIONS(352),
    [anon_sym_LPAREN] = ACTIONS(354),
    [anon_sym_RPAREN] = ACTIONS(354),
    [anon_sym_LBRACK] = ACTIONS(354),
    [anon_sym_POUND_LBRACK] = ACTIONS(354),
    [sym_comment] = ACTIONS(3),
  },
  [53] = {
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
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(362),
    [aux_sym_float_token1] = ACTIONS(360),
    [aux_sym_float_token2] = ACTIONS(360),
    [aux_sym_float_token3] = ACTIONS(360),
    [aux_sym_float_token4] = ACTIONS(360),
    [aux_sym_float_token5] = ACTIONS(360),
    [aux_sym_integer_token1] = ACTIONS(360),
    [aux_sym_integer_token2] = ACTIONS(362),
    [sym_char] = ACTIONS(360),
    [sym_string] = ACTIONS(362),
    [sym_byte_compiled_file_name] = ACTIONS(362),
    [aux_sym_symbol_token1] = ACTIONS(362),
    [aux_sym_symbol_token2] = ACTIONS(360),
    [anon_sym_POUND_SQUOTE] = ACTIONS(362),
    [anon_sym_SQUOTE] = ACTIONS(362),
    [anon_sym_BQUOTE] = ACTIONS(362),
    [anon_sym_COMMA_AT] = ACTIONS(362),
    [anon_sym_COMMA] = ACTIONS(360),
    [anon_sym_LPAREN] = ACTIONS(362),
    [anon_sym_RPAREN] = ACTIONS(362),
    [anon_sym_LBRACK] = ACTIONS(362),
    [anon_sym_POUND_LBRACK] = ACTIONS(362),
    [sym_comment] = ACTIONS(3),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(346),
    [aux_sym_float_token1] = ACTIONS(344),
    [aux_sym_float_token2] = ACTIONS(344),
    [aux_sym_float_token3] = ACTIONS(344),
    [aux_sym_float_token4] = ACTIONS(344),
    [aux_sym_float_token5] = ACTIONS(344),
    [aux_sym_integer_token1] = ACTIONS(344),
    [aux_sym_integer_token2] = ACTIONS(346),
    [sym_char] = ACTIONS(344),
    [sym_string] = ACTIONS(346),
    [sym_byte_compiled_file_name] = ACTIONS(346),
    [aux_sym_symbol_token1] = ACTIONS(346),
    [aux_sym_symbol_token2] = ACTIONS(344),
    [anon_sym_POUND_SQUOTE] = ACTIONS(346),
    [anon_sym_SQUOTE] = ACTIONS(346),
    [anon_sym_BQUOTE] = ACTIONS(346),
    [anon_sym_COMMA_AT] = ACTIONS(346),
    [anon_sym_COMMA] = ACTIONS(344),
    [anon_sym_LPAREN] = ACTIONS(346),
    [anon_sym_RPAREN] = ACTIONS(346),
    [anon_sym_LBRACK] = ACTIONS(346),
    [anon_sym_POUND_LBRACK] = ACTIONS(346),
    [sym_comment] = ACTIONS(3),
  },
  [56] = {
    [aux_sym_float_token1] = ACTIONS(386),
    [aux_sym_float_token2] = ACTIONS(386),
    [aux_sym_float_token3] = ACTIONS(386),
    [aux_sym_float_token4] = ACTIONS(386),
    [aux_sym_float_token5] = ACTIONS(386),
    [aux_sym_integer_token1] = ACTIONS(386),
    [aux_sym_integer_token2] = ACTIONS(384),
    [sym_char] = ACTIONS(386),
    [sym_string] = ACTIONS(384),
    [sym_byte_compiled_file_name] = ACTIONS(384),
    [aux_sym_symbol_token1] = ACTIONS(384),
    [aux_sym_symbol_token2] = ACTIONS(386),
    [anon_sym_POUND_SQUOTE] = ACTIONS(384),
    [anon_sym_SQUOTE] = ACTIONS(384),
    [anon_sym_BQUOTE] = ACTIONS(384),
    [anon_sym_COMMA_AT] = ACTIONS(384),
    [anon_sym_COMMA] = ACTIONS(386),
    [sym_dot] = ACTIONS(386),
    [anon_sym_LPAREN] = ACTIONS(384),
    [anon_sym_RPAREN] = ACTIONS(384),
    [anon_sym_LBRACK] = ACTIONS(384),
    [anon_sym_POUND_LBRACK] = ACTIONS(384),
    [sym_comment] = ACTIONS(3),
  },
  [57] = {
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
  [58] = {
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
  [59] = {
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
  [60] = {
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
    [aux_sym_float_token1] = ACTIONS(390),
    [aux_sym_float_token2] = ACTIONS(390),
    [aux_sym_float_token3] = ACTIONS(390),
    [aux_sym_float_token4] = ACTIONS(390),
    [aux_sym_float_token5] = ACTIONS(390),
    [aux_sym_integer_token1] = ACTIONS(390),
    [aux_sym_integer_token2] = ACTIONS(388),
    [sym_char] = ACTIONS(390),
    [sym_string] = ACTIONS(388),
    [sym_byte_compiled_file_name] = ACTIONS(388),
    [aux_sym_symbol_token1] = ACTIONS(388),
    [aux_sym_symbol_token2] = ACTIONS(390),
    [anon_sym_POUND_SQUOTE] = ACTIONS(388),
    [anon_sym_SQUOTE] = ACTIONS(388),
    [anon_sym_BQUOTE] = ACTIONS(388),
    [anon_sym_COMMA_AT] = ACTIONS(388),
    [anon_sym_COMMA] = ACTIONS(390),
    [anon_sym_LPAREN] = ACTIONS(388),
    [anon_sym_LBRACK] = ACTIONS(388),
    [anon_sym_RBRACK] = ACTIONS(388),
    [anon_sym_POUND_LBRACK] = ACTIONS(388),
    [sym_comment] = ACTIONS(3),
  },
  [63] = {
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
  [64] = {
    [aux_sym_float_token1] = ACTIONS(350),
    [aux_sym_float_token2] = ACTIONS(350),
    [aux_sym_float_token3] = ACTIONS(350),
    [aux_sym_float_token4] = ACTIONS(350),
    [aux_sym_float_token5] = ACTIONS(350),
    [aux_sym_integer_token1] = ACTIONS(350),
    [aux_sym_integer_token2] = ACTIONS(348),
    [sym_char] = ACTIONS(350),
    [sym_string] = ACTIONS(348),
    [sym_byte_compiled_file_name] = ACTIONS(348),
    [aux_sym_symbol_token1] = ACTIONS(348),
    [aux_sym_symbol_token2] = ACTIONS(350),
    [anon_sym_POUND_SQUOTE] = ACTIONS(348),
    [anon_sym_SQUOTE] = ACTIONS(348),
    [anon_sym_BQUOTE] = ACTIONS(348),
    [anon_sym_COMMA_AT] = ACTIONS(348),
    [anon_sym_COMMA] = ACTIONS(350),
    [anon_sym_LPAREN] = ACTIONS(348),
    [anon_sym_LBRACK] = ACTIONS(348),
    [anon_sym_RBRACK] = ACTIONS(348),
    [anon_sym_POUND_LBRACK] = ACTIONS(348),
    [sym_comment] = ACTIONS(3),
  },
  [65] = {
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
  [66] = {
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
  [67] = {
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
  [68] = {
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
  [69] = {
    [aux_sym_float_token1] = ACTIONS(344),
    [aux_sym_float_token2] = ACTIONS(344),
    [aux_sym_float_token3] = ACTIONS(344),
    [aux_sym_float_token4] = ACTIONS(344),
    [aux_sym_float_token5] = ACTIONS(344),
    [aux_sym_integer_token1] = ACTIONS(344),
    [aux_sym_integer_token2] = ACTIONS(346),
    [sym_char] = ACTIONS(344),
    [sym_string] = ACTIONS(346),
    [sym_byte_compiled_file_name] = ACTIONS(346),
    [aux_sym_symbol_token1] = ACTIONS(346),
    [aux_sym_symbol_token2] = ACTIONS(344),
    [anon_sym_POUND_SQUOTE] = ACTIONS(346),
    [anon_sym_SQUOTE] = ACTIONS(346),
    [anon_sym_BQUOTE] = ACTIONS(346),
    [anon_sym_COMMA_AT] = ACTIONS(346),
    [anon_sym_COMMA] = ACTIONS(344),
    [anon_sym_LPAREN] = ACTIONS(346),
    [anon_sym_LBRACK] = ACTIONS(346),
    [anon_sym_RBRACK] = ACTIONS(346),
    [anon_sym_POUND_LBRACK] = ACTIONS(346),
    [sym_comment] = ACTIONS(3),
  },
  [70] = {
    [aux_sym_float_token1] = ACTIONS(360),
    [aux_sym_float_token2] = ACTIONS(360),
    [aux_sym_float_token3] = ACTIONS(360),
    [aux_sym_float_token4] = ACTIONS(360),
    [aux_sym_float_token5] = ACTIONS(360),
    [aux_sym_integer_token1] = ACTIONS(360),
    [aux_sym_integer_token2] = ACTIONS(362),
    [sym_char] = ACTIONS(360),
    [sym_string] = ACTIONS(362),
    [sym_byte_compiled_file_name] = ACTIONS(362),
    [aux_sym_symbol_token1] = ACTIONS(362),
    [aux_sym_symbol_token2] = ACTIONS(360),
    [anon_sym_POUND_SQUOTE] = ACTIONS(362),
    [anon_sym_SQUOTE] = ACTIONS(362),
    [anon_sym_BQUOTE] = ACTIONS(362),
    [anon_sym_COMMA_AT] = ACTIONS(362),
    [anon_sym_COMMA] = ACTIONS(360),
    [anon_sym_LPAREN] = ACTIONS(362),
    [anon_sym_LBRACK] = ACTIONS(362),
    [anon_sym_RBRACK] = ACTIONS(362),
    [anon_sym_POUND_LBRACK] = ACTIONS(362),
    [sym_comment] = ACTIONS(3),
  },
  [71] = {
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
  [72] = {
    [aux_sym_float_token1] = ACTIONS(352),
    [aux_sym_float_token2] = ACTIONS(352),
    [aux_sym_float_token3] = ACTIONS(352),
    [aux_sym_float_token4] = ACTIONS(352),
    [aux_sym_float_token5] = ACTIONS(352),
    [aux_sym_integer_token1] = ACTIONS(352),
    [aux_sym_integer_token2] = ACTIONS(354),
    [sym_char] = ACTIONS(352),
    [sym_string] = ACTIONS(354),
    [sym_byte_compiled_file_name] = ACTIONS(354),
    [aux_sym_symbol_token1] = ACTIONS(354),
    [aux_sym_symbol_token2] = ACTIONS(352),
    [anon_sym_POUND_SQUOTE] = ACTIONS(354),
    [anon_sym_SQUOTE] = ACTIONS(354),
    [anon_sym_BQUOTE] = ACTIONS(354),
    [anon_sym_COMMA_AT] = ACTIONS(354),
    [anon_sym_COMMA] = ACTIONS(352),
    [anon_sym_LPAREN] = ACTIONS(354),
    [anon_sym_LBRACK] = ACTIONS(354),
    [anon_sym_RBRACK] = ACTIONS(354),
    [anon_sym_POUND_LBRACK] = ACTIONS(354),
    [sym_comment] = ACTIONS(3),
  },
  [73] = {
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
  [74] = {
    [aux_sym_float_token1] = ACTIONS(386),
    [aux_sym_float_token2] = ACTIONS(386),
    [aux_sym_float_token3] = ACTIONS(386),
    [aux_sym_float_token4] = ACTIONS(386),
    [aux_sym_float_token5] = ACTIONS(386),
    [aux_sym_integer_token1] = ACTIONS(386),
    [aux_sym_integer_token2] = ACTIONS(384),
    [sym_char] = ACTIONS(386),
    [sym_string] = ACTIONS(384),
    [sym_byte_compiled_file_name] = ACTIONS(384),
    [aux_sym_symbol_token1] = ACTIONS(384),
    [aux_sym_symbol_token2] = ACTIONS(386),
    [anon_sym_POUND_SQUOTE] = ACTIONS(384),
    [anon_sym_SQUOTE] = ACTIONS(384),
    [anon_sym_BQUOTE] = ACTIONS(384),
    [anon_sym_COMMA_AT] = ACTIONS(384),
    [anon_sym_COMMA] = ACTIONS(386),
    [anon_sym_LPAREN] = ACTIONS(384),
    [anon_sym_LBRACK] = ACTIONS(384),
    [anon_sym_RBRACK] = ACTIONS(384),
    [anon_sym_POUND_LBRACK] = ACTIONS(384),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
  [7] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
  [14] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
  [21] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
  [28] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
  [35] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
  [42] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(75)] = 0,
  [SMALL_STATE(76)] = 7,
  [SMALL_STATE(77)] = 14,
  [SMALL_STATE(78)] = 21,
  [SMALL_STATE(79)] = 28,
  [SMALL_STATE(80)] = 35,
  [SMALL_STATE(81)] = 42,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytecode, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytecode, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytecode, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytecode, 3),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [408] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
