#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 68
#define LARGE_STATE_COUNT 65
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_float_token1 = 1,
  aux_sym_float_token2 = 2,
  aux_sym_float_token3 = 3,
  aux_sym_float_token4 = 4,
  aux_sym_float_token5 = 5,
  aux_sym_integer_token1 = 6,
  aux_sym_integer_token2 = 7,
  aux_sym_char_token1 = 8,
  aux_sym_char_token2 = 9,
  aux_sym_char_token3 = 10,
  aux_sym_char_token4 = 11,
  aux_sym_char_token5 = 12,
  aux_sym_char_token6 = 13,
  aux_sym_char_token7 = 14,
  aux_sym_char_token8 = 15,
  sym_string = 16,
  sym_byte_compiled_file_name = 17,
  aux_sym_symbol_token1 = 18,
  aux_sym_symbol_token2 = 19,
  anon_sym_POUND_POUND = 20,
  anon_sym_POUND_SQUOTE = 21,
  anon_sym_SQUOTE = 22,
  anon_sym_BQUOTE = 23,
  anon_sym_COMMA_AT = 24,
  anon_sym_COMMA = 25,
  sym_dot = 26,
  anon_sym_LPAREN = 27,
  anon_sym_RPAREN = 28,
  anon_sym_LBRACK = 29,
  anon_sym_RBRACK = 30,
  anon_sym_POUND_LBRACK = 31,
  anon_sym_POUND_LPAREN = 32,
  anon_sym_POUNDs_LPARENhash_DASHtable = 33,
  sym_comment = 34,
  sym_source_file = 35,
  sym__sexp = 36,
  sym__atom = 37,
  sym_float = 38,
  sym_integer = 39,
  sym_char = 40,
  sym_symbol = 41,
  sym_quote = 42,
  sym_unquote_splice = 43,
  sym_unquote = 44,
  sym_list = 45,
  sym_vector = 46,
  sym_bytecode = 47,
  sym_string_text_properties = 48,
  sym_hash_table = 49,
  aux_sym_source_file_repeat1 = 50,
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
  [aux_sym_char_token1] = "char_token1",
  [aux_sym_char_token2] = "char_token2",
  [aux_sym_char_token3] = "char_token3",
  [aux_sym_char_token4] = "char_token4",
  [aux_sym_char_token5] = "char_token5",
  [aux_sym_char_token6] = "char_token6",
  [aux_sym_char_token7] = "char_token7",
  [aux_sym_char_token8] = "char_token8",
  [sym_string] = "string",
  [sym_byte_compiled_file_name] = "byte_compiled_file_name",
  [aux_sym_symbol_token1] = "symbol_token1",
  [aux_sym_symbol_token2] = "symbol_token2",
  [anon_sym_POUND_POUND] = "##",
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
  [anon_sym_POUND_LPAREN] = "#(",
  [anon_sym_POUNDs_LPARENhash_DASHtable] = "#s(hash-table",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__sexp] = "_sexp",
  [sym__atom] = "_atom",
  [sym_float] = "float",
  [sym_integer] = "integer",
  [sym_char] = "char",
  [sym_symbol] = "symbol",
  [sym_quote] = "quote",
  [sym_unquote_splice] = "unquote_splice",
  [sym_unquote] = "unquote",
  [sym_list] = "list",
  [sym_vector] = "vector",
  [sym_bytecode] = "bytecode",
  [sym_string_text_properties] = "string_text_properties",
  [sym_hash_table] = "hash_table",
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
  [aux_sym_char_token1] = aux_sym_char_token1,
  [aux_sym_char_token2] = aux_sym_char_token2,
  [aux_sym_char_token3] = aux_sym_char_token3,
  [aux_sym_char_token4] = aux_sym_char_token4,
  [aux_sym_char_token5] = aux_sym_char_token5,
  [aux_sym_char_token6] = aux_sym_char_token6,
  [aux_sym_char_token7] = aux_sym_char_token7,
  [aux_sym_char_token8] = aux_sym_char_token8,
  [sym_string] = sym_string,
  [sym_byte_compiled_file_name] = sym_byte_compiled_file_name,
  [aux_sym_symbol_token1] = aux_sym_symbol_token1,
  [aux_sym_symbol_token2] = aux_sym_symbol_token2,
  [anon_sym_POUND_POUND] = anon_sym_POUND_POUND,
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
  [anon_sym_POUND_LPAREN] = anon_sym_POUND_LPAREN,
  [anon_sym_POUNDs_LPARENhash_DASHtable] = anon_sym_POUNDs_LPARENhash_DASHtable,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__sexp] = sym__sexp,
  [sym__atom] = sym__atom,
  [sym_float] = sym_float,
  [sym_integer] = sym_integer,
  [sym_char] = sym_char,
  [sym_symbol] = sym_symbol,
  [sym_quote] = sym_quote,
  [sym_unquote_splice] = sym_unquote_splice,
  [sym_unquote] = sym_unquote,
  [sym_list] = sym_list,
  [sym_vector] = sym_vector,
  [sym_bytecode] = sym_bytecode,
  [sym_string_text_properties] = sym_string_text_properties,
  [sym_hash_table] = sym_hash_table,
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
  [aux_sym_char_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token8] = {
    .visible = false,
    .named = false,
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
  [anon_sym_POUND_POUND] = {
    .visible = true,
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
  [anon_sym_POUND_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDs_LPARENhash_DASHtable] = {
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
  [sym_char] = {
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
  [sym_string_text_properties] = {
    .visible = true,
    .named = true,
  },
  [sym_hash_table] = {
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

static inline bool aux_sym_float_token5_character_set_1(int32_t c) {
  return (c < '\''
    ? (c < ' '
      ? (c < '\f'
        ? c == '\t'
        : c <= '\r')
      : (c <= ' ' || (c >= '"' && c <= '#')))
    : (c <= ')' || (c < '['
      ? (c < ';'
        ? c == ','
        : c <= ';')
      : (c <= ']' || c == '`'))));
}

static inline bool aux_sym_symbol_token2_character_set_1(int32_t c) {
  return (c < '\''
    ? (c < '\f'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '"'
        ? c == ' '
        : c <= '#')))
    : (c <= ')' || (c < '['
      ? (c < ';'
        ? c == ','
        : c <= ';')
      : (c <= ']' || c == '`'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead == '(') ADVANCE(130);
      if (lookahead == ')') ADVANCE(131);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == '1') ADVANCE(69);
      if (lookahead == ';') ADVANCE(138);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == '[') ADVANCE(132);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == ']') ADVANCE(133);
      if (lookahead == '`') ADVANCE(126);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (lookahead != 0) ADVANCE(122);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(124);
      if (lookahead == '(') ADVANCE(135);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == 's') ADVANCE(3);
      if (lookahead == 'b' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == '+') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == '+') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(31);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == 'F') ADVANCE(59);
      END_STATE();
    case 13:
      if (lookahead == 'I') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'N') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'N') ADVANCE(61);
      END_STATE();
    case 16:
      if (lookahead == 'N') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 18:
      if (lookahead == '\\') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 19:
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 25:
      if (lookahead == 'h') ADVANCE(20);
      END_STATE();
    case 26:
      if (lookahead == 'h') ADVANCE(6);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == '}') ADVANCE(84);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 34:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 35:
      if (lookahead == '\'' ||
          lookahead == ',' ||
          lookahead == '`') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 47:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 48:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(32);
      END_STATE();
    case 49:
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 50:
      if (eof) ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead == '(') ADVANCE(130);
      if (lookahead == ')') ADVANCE(131);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == '1') ADVANCE(69);
      if (lookahead == ';') ADVANCE(138);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == '[') ADVANCE(132);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == ']') ADVANCE(133);
      if (lookahead == '`') ADVANCE(126);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (lookahead != 0) ADVANCE(122);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_float_token3);
      if (lookahead == '\\') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_float_token4);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_float_token4);
      if (lookahead == '\\') ADVANCE(47);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_float_token5);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_float_token5);
      if (lookahead == '\\') ADVANCE(47);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (aux_sym_float_token5_character_set_1(lookahead)) ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '0') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '0') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (aux_sym_float_token5_character_set_1(lookahead)) ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '0') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(47);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '0') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(47);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '\\') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == 'M') ADVANCE(75);
      if (lookahead == 'N') ADVANCE(79);
      if (lookahead == 'U') ADVANCE(81);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(83);
      if (lookahead == 'x') ADVANCE(82);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'H' ||
          lookahead == 'S' ||
          lookahead == 's') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '\\') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '{') ADVANCE(48);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(89);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_char_token2);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_char_token3);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_char_token4);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_char_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_char_token6);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_char_token6);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(88);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_char_token7);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_char_token7);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '^') ADVANCE(18);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'H' ||
          lookahead == 'M' ||
          lookahead == 'S' ||
          lookahead == 's') ADVANCE(7);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_char_token7);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '^') ADVANCE(18);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'H' ||
          lookahead == 'M' ||
          lookahead == 'S' ||
          lookahead == 's') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_char_token8);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_char_token8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_char_token8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_byte_compiled_file_name);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(47);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(47);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(47);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == '1') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(47);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '0') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(47);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '0') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(47);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(47);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '0') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(47);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'F') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(47);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'I') ADVANCE(114);
      if (lookahead == '\\') ADVANCE(47);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'N') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(47);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'N') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(47);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'N') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(47);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'a') ADVANCE(115);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(127);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_dot);
      if (lookahead == '\\') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACK);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_POUNDs_LPARENhash_DASHtable);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead != 0) ADVANCE(138);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 50},
  [2] = {.lex_state = 50},
  [3] = {.lex_state = 50},
  [4] = {.lex_state = 50},
  [5] = {.lex_state = 50},
  [6] = {.lex_state = 50},
  [7] = {.lex_state = 50},
  [8] = {.lex_state = 50},
  [9] = {.lex_state = 50},
  [10] = {.lex_state = 50},
  [11] = {.lex_state = 50},
  [12] = {.lex_state = 50},
  [13] = {.lex_state = 50},
  [14] = {.lex_state = 50},
  [15] = {.lex_state = 50},
  [16] = {.lex_state = 50},
  [17] = {.lex_state = 50},
  [18] = {.lex_state = 50},
  [19] = {.lex_state = 50},
  [20] = {.lex_state = 50},
  [21] = {.lex_state = 50},
  [22] = {.lex_state = 50},
  [23] = {.lex_state = 50},
  [24] = {.lex_state = 50},
  [25] = {.lex_state = 50},
  [26] = {.lex_state = 50},
  [27] = {.lex_state = 50},
  [28] = {.lex_state = 50},
  [29] = {.lex_state = 50},
  [30] = {.lex_state = 50},
  [31] = {.lex_state = 50},
  [32] = {.lex_state = 50},
  [33] = {.lex_state = 50},
  [34] = {.lex_state = 50},
  [35] = {.lex_state = 50},
  [36] = {.lex_state = 50},
  [37] = {.lex_state = 50},
  [38] = {.lex_state = 50},
  [39] = {.lex_state = 50},
  [40] = {.lex_state = 50},
  [41] = {.lex_state = 50},
  [42] = {.lex_state = 50},
  [43] = {.lex_state = 50},
  [44] = {.lex_state = 50},
  [45] = {.lex_state = 50},
  [46] = {.lex_state = 50},
  [47] = {.lex_state = 50},
  [48] = {.lex_state = 50},
  [49] = {.lex_state = 50},
  [50] = {.lex_state = 50},
  [51] = {.lex_state = 50},
  [52] = {.lex_state = 50},
  [53] = {.lex_state = 50},
  [54] = {.lex_state = 50},
  [55] = {.lex_state = 50},
  [56] = {.lex_state = 50},
  [57] = {.lex_state = 50},
  [58] = {.lex_state = 50},
  [59] = {.lex_state = 50},
  [60] = {.lex_state = 50},
  [61] = {.lex_state = 50},
  [62] = {.lex_state = 50},
  [63] = {.lex_state = 50},
  [64] = {.lex_state = 50},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
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
    [aux_sym_char_token1] = ACTIONS(1),
    [aux_sym_char_token2] = ACTIONS(1),
    [aux_sym_char_token3] = ACTIONS(1),
    [aux_sym_char_token4] = ACTIONS(1),
    [aux_sym_char_token5] = ACTIONS(1),
    [aux_sym_char_token6] = ACTIONS(1),
    [aux_sym_char_token7] = ACTIONS(1),
    [aux_sym_char_token8] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_byte_compiled_file_name] = ACTIONS(1),
    [aux_sym_symbol_token1] = ACTIONS(1),
    [aux_sym_symbol_token2] = ACTIONS(1),
    [anon_sym_POUND_POUND] = ACTIONS(1),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(1),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(65),
    [sym__sexp] = STATE(15),
    [sym__atom] = STATE(15),
    [sym_float] = STATE(15),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_symbol] = STATE(15),
    [sym_quote] = STATE(15),
    [sym_unquote_splice] = STATE(15),
    [sym_unquote] = STATE(15),
    [sym_list] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_bytecode] = STATE(15),
    [sym_string_text_properties] = STATE(15),
    [sym_hash_table] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(7),
    [aux_sym_float_token4] = ACTIONS(7),
    [aux_sym_float_token5] = ACTIONS(7),
    [aux_sym_integer_token1] = ACTIONS(9),
    [aux_sym_integer_token2] = ACTIONS(11),
    [aux_sym_char_token1] = ACTIONS(13),
    [aux_sym_char_token2] = ACTIONS(15),
    [aux_sym_char_token3] = ACTIONS(15),
    [aux_sym_char_token4] = ACTIONS(15),
    [aux_sym_char_token5] = ACTIONS(15),
    [aux_sym_char_token6] = ACTIONS(13),
    [aux_sym_char_token7] = ACTIONS(13),
    [aux_sym_char_token8] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [sym_byte_compiled_file_name] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [aux_sym_symbol_token2] = ACTIONS(19),
    [anon_sym_POUND_POUND] = ACTIONS(21),
    [anon_sym_POUND_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA_AT] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__sexp] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_float] = STATE(2),
    [sym_integer] = STATE(2),
    [sym_char] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote_splice] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_bytecode] = STATE(2),
    [sym_string_text_properties] = STATE(2),
    [sym_hash_table] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_float_token1] = ACTIONS(39),
    [aux_sym_float_token2] = ACTIONS(39),
    [aux_sym_float_token3] = ACTIONS(39),
    [aux_sym_float_token4] = ACTIONS(39),
    [aux_sym_float_token5] = ACTIONS(39),
    [aux_sym_integer_token1] = ACTIONS(42),
    [aux_sym_integer_token2] = ACTIONS(45),
    [aux_sym_char_token1] = ACTIONS(48),
    [aux_sym_char_token2] = ACTIONS(51),
    [aux_sym_char_token3] = ACTIONS(51),
    [aux_sym_char_token4] = ACTIONS(51),
    [aux_sym_char_token5] = ACTIONS(51),
    [aux_sym_char_token6] = ACTIONS(48),
    [aux_sym_char_token7] = ACTIONS(48),
    [aux_sym_char_token8] = ACTIONS(51),
    [sym_string] = ACTIONS(54),
    [sym_byte_compiled_file_name] = ACTIONS(54),
    [aux_sym_symbol_token1] = ACTIONS(57),
    [aux_sym_symbol_token2] = ACTIONS(57),
    [anon_sym_POUND_POUND] = ACTIONS(60),
    [anon_sym_POUND_SQUOTE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(63),
    [anon_sym_COMMA_AT] = ACTIONS(66),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_RPAREN] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(75),
    [anon_sym_POUND_LBRACK] = ACTIONS(80),
    [anon_sym_POUND_LPAREN] = ACTIONS(83),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(86),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__sexp] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_float] = STATE(2),
    [sym_integer] = STATE(2),
    [sym_char] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote_splice] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_bytecode] = STATE(2),
    [sym_string_text_properties] = STATE(2),
    [sym_hash_table] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_float_token1] = ACTIONS(89),
    [aux_sym_float_token2] = ACTIONS(89),
    [aux_sym_float_token3] = ACTIONS(89),
    [aux_sym_float_token4] = ACTIONS(89),
    [aux_sym_float_token5] = ACTIONS(89),
    [aux_sym_integer_token1] = ACTIONS(91),
    [aux_sym_integer_token2] = ACTIONS(93),
    [aux_sym_char_token1] = ACTIONS(95),
    [aux_sym_char_token2] = ACTIONS(97),
    [aux_sym_char_token3] = ACTIONS(97),
    [aux_sym_char_token4] = ACTIONS(97),
    [aux_sym_char_token5] = ACTIONS(97),
    [aux_sym_char_token6] = ACTIONS(95),
    [aux_sym_char_token7] = ACTIONS(95),
    [aux_sym_char_token8] = ACTIONS(97),
    [sym_string] = ACTIONS(99),
    [sym_byte_compiled_file_name] = ACTIONS(99),
    [aux_sym_symbol_token1] = ACTIONS(101),
    [aux_sym_symbol_token2] = ACTIONS(101),
    [anon_sym_POUND_POUND] = ACTIONS(103),
    [anon_sym_POUND_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COMMA_AT] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_RBRACK] = ACTIONS(115),
    [anon_sym_POUND_LBRACK] = ACTIONS(117),
    [anon_sym_POUND_LPAREN] = ACTIONS(119),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__sexp] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_float] = STATE(2),
    [sym_integer] = STATE(2),
    [sym_char] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote_splice] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_bytecode] = STATE(2),
    [sym_string_text_properties] = STATE(2),
    [sym_hash_table] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_float_token1] = ACTIONS(89),
    [aux_sym_float_token2] = ACTIONS(89),
    [aux_sym_float_token3] = ACTIONS(89),
    [aux_sym_float_token4] = ACTIONS(89),
    [aux_sym_float_token5] = ACTIONS(89),
    [aux_sym_integer_token1] = ACTIONS(91),
    [aux_sym_integer_token2] = ACTIONS(93),
    [aux_sym_char_token1] = ACTIONS(95),
    [aux_sym_char_token2] = ACTIONS(97),
    [aux_sym_char_token3] = ACTIONS(97),
    [aux_sym_char_token4] = ACTIONS(97),
    [aux_sym_char_token5] = ACTIONS(97),
    [aux_sym_char_token6] = ACTIONS(95),
    [aux_sym_char_token7] = ACTIONS(95),
    [aux_sym_char_token8] = ACTIONS(97),
    [sym_string] = ACTIONS(99),
    [sym_byte_compiled_file_name] = ACTIONS(99),
    [aux_sym_symbol_token1] = ACTIONS(101),
    [aux_sym_symbol_token2] = ACTIONS(101),
    [anon_sym_POUND_POUND] = ACTIONS(103),
    [anon_sym_POUND_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COMMA_AT] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_POUND_LBRACK] = ACTIONS(117),
    [anon_sym_POUND_LPAREN] = ACTIONS(119),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__sexp] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_float] = STATE(2),
    [sym_integer] = STATE(2),
    [sym_char] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote_splice] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_bytecode] = STATE(2),
    [sym_string_text_properties] = STATE(2),
    [sym_hash_table] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_float_token1] = ACTIONS(89),
    [aux_sym_float_token2] = ACTIONS(89),
    [aux_sym_float_token3] = ACTIONS(89),
    [aux_sym_float_token4] = ACTIONS(89),
    [aux_sym_float_token5] = ACTIONS(89),
    [aux_sym_integer_token1] = ACTIONS(91),
    [aux_sym_integer_token2] = ACTIONS(93),
    [aux_sym_char_token1] = ACTIONS(95),
    [aux_sym_char_token2] = ACTIONS(97),
    [aux_sym_char_token3] = ACTIONS(97),
    [aux_sym_char_token4] = ACTIONS(97),
    [aux_sym_char_token5] = ACTIONS(97),
    [aux_sym_char_token6] = ACTIONS(95),
    [aux_sym_char_token7] = ACTIONS(95),
    [aux_sym_char_token8] = ACTIONS(97),
    [sym_string] = ACTIONS(99),
    [sym_byte_compiled_file_name] = ACTIONS(99),
    [aux_sym_symbol_token1] = ACTIONS(101),
    [aux_sym_symbol_token2] = ACTIONS(101),
    [anon_sym_POUND_POUND] = ACTIONS(103),
    [anon_sym_POUND_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COMMA_AT] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_RBRACK] = ACTIONS(125),
    [anon_sym_POUND_LBRACK] = ACTIONS(117),
    [anon_sym_POUND_LPAREN] = ACTIONS(119),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__sexp] = STATE(7),
    [sym__atom] = STATE(7),
    [sym_float] = STATE(7),
    [sym_integer] = STATE(7),
    [sym_char] = STATE(7),
    [sym_symbol] = STATE(7),
    [sym_quote] = STATE(7),
    [sym_unquote_splice] = STATE(7),
    [sym_unquote] = STATE(7),
    [sym_list] = STATE(7),
    [sym_vector] = STATE(7),
    [sym_bytecode] = STATE(7),
    [sym_string_text_properties] = STATE(7),
    [sym_hash_table] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym_float_token1] = ACTIONS(89),
    [aux_sym_float_token2] = ACTIONS(89),
    [aux_sym_float_token3] = ACTIONS(89),
    [aux_sym_float_token4] = ACTIONS(89),
    [aux_sym_float_token5] = ACTIONS(89),
    [aux_sym_integer_token1] = ACTIONS(91),
    [aux_sym_integer_token2] = ACTIONS(93),
    [aux_sym_char_token1] = ACTIONS(95),
    [aux_sym_char_token2] = ACTIONS(97),
    [aux_sym_char_token3] = ACTIONS(97),
    [aux_sym_char_token4] = ACTIONS(97),
    [aux_sym_char_token5] = ACTIONS(97),
    [aux_sym_char_token6] = ACTIONS(95),
    [aux_sym_char_token7] = ACTIONS(95),
    [aux_sym_char_token8] = ACTIONS(97),
    [sym_string] = ACTIONS(127),
    [sym_byte_compiled_file_name] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(101),
    [aux_sym_symbol_token2] = ACTIONS(101),
    [anon_sym_POUND_POUND] = ACTIONS(103),
    [anon_sym_POUND_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COMMA_AT] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_POUND_LBRACK] = ACTIONS(117),
    [anon_sym_POUND_LPAREN] = ACTIONS(119),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__sexp] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_float] = STATE(2),
    [sym_integer] = STATE(2),
    [sym_char] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote_splice] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_bytecode] = STATE(2),
    [sym_string_text_properties] = STATE(2),
    [sym_hash_table] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_float_token1] = ACTIONS(89),
    [aux_sym_float_token2] = ACTIONS(89),
    [aux_sym_float_token3] = ACTIONS(89),
    [aux_sym_float_token4] = ACTIONS(89),
    [aux_sym_float_token5] = ACTIONS(89),
    [aux_sym_integer_token1] = ACTIONS(91),
    [aux_sym_integer_token2] = ACTIONS(93),
    [aux_sym_char_token1] = ACTIONS(95),
    [aux_sym_char_token2] = ACTIONS(97),
    [aux_sym_char_token3] = ACTIONS(97),
    [aux_sym_char_token4] = ACTIONS(97),
    [aux_sym_char_token5] = ACTIONS(97),
    [aux_sym_char_token6] = ACTIONS(95),
    [aux_sym_char_token7] = ACTIONS(95),
    [aux_sym_char_token8] = ACTIONS(97),
    [sym_string] = ACTIONS(99),
    [sym_byte_compiled_file_name] = ACTIONS(99),
    [aux_sym_symbol_token1] = ACTIONS(101),
    [aux_sym_symbol_token2] = ACTIONS(101),
    [anon_sym_POUND_POUND] = ACTIONS(103),
    [anon_sym_POUND_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COMMA_AT] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_POUND_LBRACK] = ACTIONS(117),
    [anon_sym_POUND_LPAREN] = ACTIONS(119),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__sexp] = STATE(8),
    [sym__atom] = STATE(8),
    [sym_float] = STATE(8),
    [sym_integer] = STATE(8),
    [sym_char] = STATE(8),
    [sym_symbol] = STATE(8),
    [sym_quote] = STATE(8),
    [sym_unquote_splice] = STATE(8),
    [sym_unquote] = STATE(8),
    [sym_list] = STATE(8),
    [sym_vector] = STATE(8),
    [sym_bytecode] = STATE(8),
    [sym_string_text_properties] = STATE(8),
    [sym_hash_table] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(75),
    [aux_sym_float_token1] = ACTIONS(133),
    [aux_sym_float_token2] = ACTIONS(133),
    [aux_sym_float_token3] = ACTIONS(133),
    [aux_sym_float_token4] = ACTIONS(133),
    [aux_sym_float_token5] = ACTIONS(133),
    [aux_sym_integer_token1] = ACTIONS(136),
    [aux_sym_integer_token2] = ACTIONS(139),
    [aux_sym_char_token1] = ACTIONS(142),
    [aux_sym_char_token2] = ACTIONS(145),
    [aux_sym_char_token3] = ACTIONS(145),
    [aux_sym_char_token4] = ACTIONS(145),
    [aux_sym_char_token5] = ACTIONS(145),
    [aux_sym_char_token6] = ACTIONS(142),
    [aux_sym_char_token7] = ACTIONS(142),
    [aux_sym_char_token8] = ACTIONS(145),
    [sym_string] = ACTIONS(148),
    [sym_byte_compiled_file_name] = ACTIONS(148),
    [aux_sym_symbol_token1] = ACTIONS(151),
    [aux_sym_symbol_token2] = ACTIONS(151),
    [anon_sym_POUND_POUND] = ACTIONS(154),
    [anon_sym_POUND_SQUOTE] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [anon_sym_BQUOTE] = ACTIONS(157),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(163),
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_LBRACK] = ACTIONS(169),
    [anon_sym_POUND_LBRACK] = ACTIONS(172),
    [anon_sym_POUND_LPAREN] = ACTIONS(175),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(178),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__sexp] = STATE(20),
    [sym__atom] = STATE(20),
    [sym_float] = STATE(20),
    [sym_integer] = STATE(20),
    [sym_char] = STATE(20),
    [sym_symbol] = STATE(20),
    [sym_quote] = STATE(20),
    [sym_unquote_splice] = STATE(20),
    [sym_unquote] = STATE(20),
    [sym_list] = STATE(20),
    [sym_vector] = STATE(20),
    [sym_bytecode] = STATE(20),
    [sym_string_text_properties] = STATE(20),
    [sym_hash_table] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(20),
    [aux_sym_float_token1] = ACTIONS(89),
    [aux_sym_float_token2] = ACTIONS(89),
    [aux_sym_float_token3] = ACTIONS(89),
    [aux_sym_float_token4] = ACTIONS(89),
    [aux_sym_float_token5] = ACTIONS(89),
    [aux_sym_integer_token1] = ACTIONS(91),
    [aux_sym_integer_token2] = ACTIONS(93),
    [aux_sym_char_token1] = ACTIONS(95),
    [aux_sym_char_token2] = ACTIONS(97),
    [aux_sym_char_token3] = ACTIONS(97),
    [aux_sym_char_token4] = ACTIONS(97),
    [aux_sym_char_token5] = ACTIONS(97),
    [aux_sym_char_token6] = ACTIONS(95),
    [aux_sym_char_token7] = ACTIONS(95),
    [aux_sym_char_token8] = ACTIONS(97),
    [sym_string] = ACTIONS(181),
    [sym_byte_compiled_file_name] = ACTIONS(181),
    [aux_sym_symbol_token1] = ACTIONS(101),
    [aux_sym_symbol_token2] = ACTIONS(101),
    [anon_sym_POUND_POUND] = ACTIONS(103),
    [anon_sym_POUND_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COMMA_AT] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_POUND_LBRACK] = ACTIONS(117),
    [anon_sym_POUND_LPAREN] = ACTIONS(119),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__sexp] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_float] = STATE(2),
    [sym_integer] = STATE(2),
    [sym_char] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote_splice] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_bytecode] = STATE(2),
    [sym_string_text_properties] = STATE(2),
    [sym_hash_table] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_float_token1] = ACTIONS(89),
    [aux_sym_float_token2] = ACTIONS(89),
    [aux_sym_float_token3] = ACTIONS(89),
    [aux_sym_float_token4] = ACTIONS(89),
    [aux_sym_float_token5] = ACTIONS(89),
    [aux_sym_integer_token1] = ACTIONS(91),
    [aux_sym_integer_token2] = ACTIONS(93),
    [aux_sym_char_token1] = ACTIONS(95),
    [aux_sym_char_token2] = ACTIONS(97),
    [aux_sym_char_token3] = ACTIONS(97),
    [aux_sym_char_token4] = ACTIONS(97),
    [aux_sym_char_token5] = ACTIONS(97),
    [aux_sym_char_token6] = ACTIONS(95),
    [aux_sym_char_token7] = ACTIONS(95),
    [aux_sym_char_token8] = ACTIONS(97),
    [sym_string] = ACTIONS(99),
    [sym_byte_compiled_file_name] = ACTIONS(99),
    [aux_sym_symbol_token1] = ACTIONS(101),
    [aux_sym_symbol_token2] = ACTIONS(101),
    [anon_sym_POUND_POUND] = ACTIONS(103),
    [anon_sym_POUND_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COMMA_AT] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_POUND_LBRACK] = ACTIONS(117),
    [anon_sym_POUND_LPAREN] = ACTIONS(119),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__sexp] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_bytecode] = STATE(3),
    [sym_string_text_properties] = STATE(3),
    [sym_hash_table] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_float_token1] = ACTIONS(89),
    [aux_sym_float_token2] = ACTIONS(89),
    [aux_sym_float_token3] = ACTIONS(89),
    [aux_sym_float_token4] = ACTIONS(89),
    [aux_sym_float_token5] = ACTIONS(89),
    [aux_sym_integer_token1] = ACTIONS(91),
    [aux_sym_integer_token2] = ACTIONS(93),
    [aux_sym_char_token1] = ACTIONS(95),
    [aux_sym_char_token2] = ACTIONS(97),
    [aux_sym_char_token3] = ACTIONS(97),
    [aux_sym_char_token4] = ACTIONS(97),
    [aux_sym_char_token5] = ACTIONS(97),
    [aux_sym_char_token6] = ACTIONS(95),
    [aux_sym_char_token7] = ACTIONS(95),
    [aux_sym_char_token8] = ACTIONS(97),
    [sym_string] = ACTIONS(187),
    [sym_byte_compiled_file_name] = ACTIONS(187),
    [aux_sym_symbol_token1] = ACTIONS(101),
    [aux_sym_symbol_token2] = ACTIONS(101),
    [anon_sym_POUND_POUND] = ACTIONS(103),
    [anon_sym_POUND_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COMMA_AT] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_RBRACK] = ACTIONS(189),
    [anon_sym_POUND_LBRACK] = ACTIONS(117),
    [anon_sym_POUND_LPAREN] = ACTIONS(119),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym__sexp] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_float] = STATE(2),
    [sym_integer] = STATE(2),
    [sym_char] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote_splice] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_bytecode] = STATE(2),
    [sym_string_text_properties] = STATE(2),
    [sym_hash_table] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_float_token1] = ACTIONS(89),
    [aux_sym_float_token2] = ACTIONS(89),
    [aux_sym_float_token3] = ACTIONS(89),
    [aux_sym_float_token4] = ACTIONS(89),
    [aux_sym_float_token5] = ACTIONS(89),
    [aux_sym_integer_token1] = ACTIONS(91),
    [aux_sym_integer_token2] = ACTIONS(93),
    [aux_sym_char_token1] = ACTIONS(95),
    [aux_sym_char_token2] = ACTIONS(97),
    [aux_sym_char_token3] = ACTIONS(97),
    [aux_sym_char_token4] = ACTIONS(97),
    [aux_sym_char_token5] = ACTIONS(97),
    [aux_sym_char_token6] = ACTIONS(95),
    [aux_sym_char_token7] = ACTIONS(95),
    [aux_sym_char_token8] = ACTIONS(97),
    [sym_string] = ACTIONS(99),
    [sym_byte_compiled_file_name] = ACTIONS(99),
    [aux_sym_symbol_token1] = ACTIONS(101),
    [aux_sym_symbol_token2] = ACTIONS(101),
    [anon_sym_POUND_POUND] = ACTIONS(103),
    [anon_sym_POUND_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COMMA_AT] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_RBRACK] = ACTIONS(191),
    [anon_sym_POUND_LBRACK] = ACTIONS(117),
    [anon_sym_POUND_LPAREN] = ACTIONS(119),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym__sexp] = STATE(10),
    [sym__atom] = STATE(10),
    [sym_float] = STATE(10),
    [sym_integer] = STATE(10),
    [sym_char] = STATE(10),
    [sym_symbol] = STATE(10),
    [sym_quote] = STATE(10),
    [sym_unquote_splice] = STATE(10),
    [sym_unquote] = STATE(10),
    [sym_list] = STATE(10),
    [sym_vector] = STATE(10),
    [sym_bytecode] = STATE(10),
    [sym_string_text_properties] = STATE(10),
    [sym_hash_table] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [aux_sym_float_token1] = ACTIONS(89),
    [aux_sym_float_token2] = ACTIONS(89),
    [aux_sym_float_token3] = ACTIONS(89),
    [aux_sym_float_token4] = ACTIONS(89),
    [aux_sym_float_token5] = ACTIONS(89),
    [aux_sym_integer_token1] = ACTIONS(91),
    [aux_sym_integer_token2] = ACTIONS(93),
    [aux_sym_char_token1] = ACTIONS(95),
    [aux_sym_char_token2] = ACTIONS(97),
    [aux_sym_char_token3] = ACTIONS(97),
    [aux_sym_char_token4] = ACTIONS(97),
    [aux_sym_char_token5] = ACTIONS(97),
    [aux_sym_char_token6] = ACTIONS(95),
    [aux_sym_char_token7] = ACTIONS(95),
    [aux_sym_char_token8] = ACTIONS(97),
    [sym_string] = ACTIONS(193),
    [sym_byte_compiled_file_name] = ACTIONS(193),
    [aux_sym_symbol_token1] = ACTIONS(101),
    [aux_sym_symbol_token2] = ACTIONS(101),
    [anon_sym_POUND_POUND] = ACTIONS(103),
    [anon_sym_POUND_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COMMA_AT] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_POUND_LBRACK] = ACTIONS(117),
    [anon_sym_POUND_LPAREN] = ACTIONS(119),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym__sexp] = STATE(22),
    [sym__atom] = STATE(22),
    [sym_float] = STATE(22),
    [sym_integer] = STATE(22),
    [sym_char] = STATE(22),
    [sym_symbol] = STATE(22),
    [sym_quote] = STATE(22),
    [sym_unquote_splice] = STATE(22),
    [sym_unquote] = STATE(22),
    [sym_list] = STATE(22),
    [sym_vector] = STATE(22),
    [sym_bytecode] = STATE(22),
    [sym_string_text_properties] = STATE(22),
    [sym_hash_table] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(22),
    [aux_sym_float_token1] = ACTIONS(89),
    [aux_sym_float_token2] = ACTIONS(89),
    [aux_sym_float_token3] = ACTIONS(89),
    [aux_sym_float_token4] = ACTIONS(89),
    [aux_sym_float_token5] = ACTIONS(89),
    [aux_sym_integer_token1] = ACTIONS(91),
    [aux_sym_integer_token2] = ACTIONS(93),
    [aux_sym_char_token1] = ACTIONS(95),
    [aux_sym_char_token2] = ACTIONS(97),
    [aux_sym_char_token3] = ACTIONS(97),
    [aux_sym_char_token4] = ACTIONS(97),
    [aux_sym_char_token5] = ACTIONS(97),
    [aux_sym_char_token6] = ACTIONS(95),
    [aux_sym_char_token7] = ACTIONS(95),
    [aux_sym_char_token8] = ACTIONS(97),
    [sym_string] = ACTIONS(197),
    [sym_byte_compiled_file_name] = ACTIONS(197),
    [aux_sym_symbol_token1] = ACTIONS(101),
    [aux_sym_symbol_token2] = ACTIONS(101),
    [anon_sym_POUND_POUND] = ACTIONS(103),
    [anon_sym_POUND_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COMMA_AT] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_RBRACK] = ACTIONS(199),
    [anon_sym_POUND_LBRACK] = ACTIONS(117),
    [anon_sym_POUND_LPAREN] = ACTIONS(119),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym__sexp] = STATE(8),
    [sym__atom] = STATE(8),
    [sym_float] = STATE(8),
    [sym_integer] = STATE(8),
    [sym_char] = STATE(8),
    [sym_symbol] = STATE(8),
    [sym_quote] = STATE(8),
    [sym_unquote_splice] = STATE(8),
    [sym_unquote] = STATE(8),
    [sym_list] = STATE(8),
    [sym_vector] = STATE(8),
    [sym_bytecode] = STATE(8),
    [sym_string_text_properties] = STATE(8),
    [sym_hash_table] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(201),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(7),
    [aux_sym_float_token4] = ACTIONS(7),
    [aux_sym_float_token5] = ACTIONS(7),
    [aux_sym_integer_token1] = ACTIONS(9),
    [aux_sym_integer_token2] = ACTIONS(11),
    [aux_sym_char_token1] = ACTIONS(13),
    [aux_sym_char_token2] = ACTIONS(15),
    [aux_sym_char_token3] = ACTIONS(15),
    [aux_sym_char_token4] = ACTIONS(15),
    [aux_sym_char_token5] = ACTIONS(15),
    [aux_sym_char_token6] = ACTIONS(13),
    [aux_sym_char_token7] = ACTIONS(13),
    [aux_sym_char_token8] = ACTIONS(15),
    [sym_string] = ACTIONS(203),
    [sym_byte_compiled_file_name] = ACTIONS(203),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [aux_sym_symbol_token2] = ACTIONS(19),
    [anon_sym_POUND_POUND] = ACTIONS(21),
    [anon_sym_POUND_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA_AT] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym__sexp] = STATE(24),
    [sym__atom] = STATE(24),
    [sym_float] = STATE(24),
    [sym_integer] = STATE(24),
    [sym_char] = STATE(24),
    [sym_symbol] = STATE(24),
    [sym_quote] = STATE(24),
    [sym_unquote_splice] = STATE(24),
    [sym_unquote] = STATE(24),
    [sym_list] = STATE(24),
    [sym_vector] = STATE(24),
    [sym_bytecode] = STATE(24),
    [sym_string_text_properties] = STATE(24),
    [sym_hash_table] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(24),
    [aux_sym_float_token1] = ACTIONS(89),
    [aux_sym_float_token2] = ACTIONS(89),
    [aux_sym_float_token3] = ACTIONS(89),
    [aux_sym_float_token4] = ACTIONS(89),
    [aux_sym_float_token5] = ACTIONS(89),
    [aux_sym_integer_token1] = ACTIONS(91),
    [aux_sym_integer_token2] = ACTIONS(93),
    [aux_sym_char_token1] = ACTIONS(95),
    [aux_sym_char_token2] = ACTIONS(97),
    [aux_sym_char_token3] = ACTIONS(97),
    [aux_sym_char_token4] = ACTIONS(97),
    [aux_sym_char_token5] = ACTIONS(97),
    [aux_sym_char_token6] = ACTIONS(95),
    [aux_sym_char_token7] = ACTIONS(95),
    [aux_sym_char_token8] = ACTIONS(97),
    [sym_string] = ACTIONS(205),
    [sym_byte_compiled_file_name] = ACTIONS(205),
    [aux_sym_symbol_token1] = ACTIONS(101),
    [aux_sym_symbol_token2] = ACTIONS(101),
    [anon_sym_POUND_POUND] = ACTIONS(103),
    [anon_sym_POUND_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COMMA_AT] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_POUND_LBRACK] = ACTIONS(117),
    [anon_sym_POUND_LPAREN] = ACTIONS(119),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym__sexp] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_float] = STATE(2),
    [sym_integer] = STATE(2),
    [sym_char] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote_splice] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_bytecode] = STATE(2),
    [sym_string_text_properties] = STATE(2),
    [sym_hash_table] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_float_token1] = ACTIONS(89),
    [aux_sym_float_token2] = ACTIONS(89),
    [aux_sym_float_token3] = ACTIONS(89),
    [aux_sym_float_token4] = ACTIONS(89),
    [aux_sym_float_token5] = ACTIONS(89),
    [aux_sym_integer_token1] = ACTIONS(91),
    [aux_sym_integer_token2] = ACTIONS(93),
    [aux_sym_char_token1] = ACTIONS(95),
    [aux_sym_char_token2] = ACTIONS(97),
    [aux_sym_char_token3] = ACTIONS(97),
    [aux_sym_char_token4] = ACTIONS(97),
    [aux_sym_char_token5] = ACTIONS(97),
    [aux_sym_char_token6] = ACTIONS(95),
    [aux_sym_char_token7] = ACTIONS(95),
    [aux_sym_char_token8] = ACTIONS(97),
    [sym_string] = ACTIONS(99),
    [sym_byte_compiled_file_name] = ACTIONS(99),
    [aux_sym_symbol_token1] = ACTIONS(101),
    [aux_sym_symbol_token2] = ACTIONS(101),
    [anon_sym_POUND_POUND] = ACTIONS(103),
    [anon_sym_POUND_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COMMA_AT] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_POUND_LBRACK] = ACTIONS(117),
    [anon_sym_POUND_LPAREN] = ACTIONS(119),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym__sexp] = STATE(5),
    [sym__atom] = STATE(5),
    [sym_float] = STATE(5),
    [sym_integer] = STATE(5),
    [sym_char] = STATE(5),
    [sym_symbol] = STATE(5),
    [sym_quote] = STATE(5),
    [sym_unquote_splice] = STATE(5),
    [sym_unquote] = STATE(5),
    [sym_list] = STATE(5),
    [sym_vector] = STATE(5),
    [sym_bytecode] = STATE(5),
    [sym_string_text_properties] = STATE(5),
    [sym_hash_table] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_float_token1] = ACTIONS(89),
    [aux_sym_float_token2] = ACTIONS(89),
    [aux_sym_float_token3] = ACTIONS(89),
    [aux_sym_float_token4] = ACTIONS(89),
    [aux_sym_float_token5] = ACTIONS(89),
    [aux_sym_integer_token1] = ACTIONS(91),
    [aux_sym_integer_token2] = ACTIONS(93),
    [aux_sym_char_token1] = ACTIONS(95),
    [aux_sym_char_token2] = ACTIONS(97),
    [aux_sym_char_token3] = ACTIONS(97),
    [aux_sym_char_token4] = ACTIONS(97),
    [aux_sym_char_token5] = ACTIONS(97),
    [aux_sym_char_token6] = ACTIONS(95),
    [aux_sym_char_token7] = ACTIONS(95),
    [aux_sym_char_token8] = ACTIONS(97),
    [sym_string] = ACTIONS(211),
    [sym_byte_compiled_file_name] = ACTIONS(211),
    [aux_sym_symbol_token1] = ACTIONS(101),
    [aux_sym_symbol_token2] = ACTIONS(101),
    [anon_sym_POUND_POUND] = ACTIONS(103),
    [anon_sym_POUND_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COMMA_AT] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_RBRACK] = ACTIONS(213),
    [anon_sym_POUND_LBRACK] = ACTIONS(117),
    [anon_sym_POUND_LPAREN] = ACTIONS(119),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym__sexp] = STATE(12),
    [sym__atom] = STATE(12),
    [sym_float] = STATE(12),
    [sym_integer] = STATE(12),
    [sym_char] = STATE(12),
    [sym_symbol] = STATE(12),
    [sym_quote] = STATE(12),
    [sym_unquote_splice] = STATE(12),
    [sym_unquote] = STATE(12),
    [sym_list] = STATE(12),
    [sym_vector] = STATE(12),
    [sym_bytecode] = STATE(12),
    [sym_string_text_properties] = STATE(12),
    [sym_hash_table] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [aux_sym_float_token1] = ACTIONS(89),
    [aux_sym_float_token2] = ACTIONS(89),
    [aux_sym_float_token3] = ACTIONS(89),
    [aux_sym_float_token4] = ACTIONS(89),
    [aux_sym_float_token5] = ACTIONS(89),
    [aux_sym_integer_token1] = ACTIONS(91),
    [aux_sym_integer_token2] = ACTIONS(93),
    [aux_sym_char_token1] = ACTIONS(95),
    [aux_sym_char_token2] = ACTIONS(97),
    [aux_sym_char_token3] = ACTIONS(97),
    [aux_sym_char_token4] = ACTIONS(97),
    [aux_sym_char_token5] = ACTIONS(97),
    [aux_sym_char_token6] = ACTIONS(95),
    [aux_sym_char_token7] = ACTIONS(95),
    [aux_sym_char_token8] = ACTIONS(97),
    [sym_string] = ACTIONS(215),
    [sym_byte_compiled_file_name] = ACTIONS(215),
    [aux_sym_symbol_token1] = ACTIONS(101),
    [aux_sym_symbol_token2] = ACTIONS(101),
    [anon_sym_POUND_POUND] = ACTIONS(103),
    [anon_sym_POUND_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COMMA_AT] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_RBRACK] = ACTIONS(217),
    [anon_sym_POUND_LBRACK] = ACTIONS(117),
    [anon_sym_POUND_LPAREN] = ACTIONS(119),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym__sexp] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_float] = STATE(2),
    [sym_integer] = STATE(2),
    [sym_char] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote_splice] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_bytecode] = STATE(2),
    [sym_string_text_properties] = STATE(2),
    [sym_hash_table] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_float_token1] = ACTIONS(89),
    [aux_sym_float_token2] = ACTIONS(89),
    [aux_sym_float_token3] = ACTIONS(89),
    [aux_sym_float_token4] = ACTIONS(89),
    [aux_sym_float_token5] = ACTIONS(89),
    [aux_sym_integer_token1] = ACTIONS(91),
    [aux_sym_integer_token2] = ACTIONS(93),
    [aux_sym_char_token1] = ACTIONS(95),
    [aux_sym_char_token2] = ACTIONS(97),
    [aux_sym_char_token3] = ACTIONS(97),
    [aux_sym_char_token4] = ACTIONS(97),
    [aux_sym_char_token5] = ACTIONS(97),
    [aux_sym_char_token6] = ACTIONS(95),
    [aux_sym_char_token7] = ACTIONS(95),
    [aux_sym_char_token8] = ACTIONS(97),
    [sym_string] = ACTIONS(99),
    [sym_byte_compiled_file_name] = ACTIONS(99),
    [aux_sym_symbol_token1] = ACTIONS(101),
    [aux_sym_symbol_token2] = ACTIONS(101),
    [anon_sym_POUND_POUND] = ACTIONS(103),
    [anon_sym_POUND_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COMMA_AT] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_POUND_LBRACK] = ACTIONS(117),
    [anon_sym_POUND_LPAREN] = ACTIONS(119),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym__sexp] = STATE(4),
    [sym__atom] = STATE(4),
    [sym_float] = STATE(4),
    [sym_integer] = STATE(4),
    [sym_char] = STATE(4),
    [sym_symbol] = STATE(4),
    [sym_quote] = STATE(4),
    [sym_unquote_splice] = STATE(4),
    [sym_unquote] = STATE(4),
    [sym_list] = STATE(4),
    [sym_vector] = STATE(4),
    [sym_bytecode] = STATE(4),
    [sym_string_text_properties] = STATE(4),
    [sym_hash_table] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [aux_sym_float_token1] = ACTIONS(89),
    [aux_sym_float_token2] = ACTIONS(89),
    [aux_sym_float_token3] = ACTIONS(89),
    [aux_sym_float_token4] = ACTIONS(89),
    [aux_sym_float_token5] = ACTIONS(89),
    [aux_sym_integer_token1] = ACTIONS(91),
    [aux_sym_integer_token2] = ACTIONS(93),
    [aux_sym_char_token1] = ACTIONS(95),
    [aux_sym_char_token2] = ACTIONS(97),
    [aux_sym_char_token3] = ACTIONS(97),
    [aux_sym_char_token4] = ACTIONS(97),
    [aux_sym_char_token5] = ACTIONS(97),
    [aux_sym_char_token6] = ACTIONS(95),
    [aux_sym_char_token7] = ACTIONS(95),
    [aux_sym_char_token8] = ACTIONS(97),
    [sym_string] = ACTIONS(221),
    [sym_byte_compiled_file_name] = ACTIONS(221),
    [aux_sym_symbol_token1] = ACTIONS(101),
    [aux_sym_symbol_token2] = ACTIONS(101),
    [anon_sym_POUND_POUND] = ACTIONS(103),
    [anon_sym_POUND_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COMMA_AT] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_POUND_LBRACK] = ACTIONS(117),
    [anon_sym_POUND_LPAREN] = ACTIONS(119),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym__sexp] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_float] = STATE(2),
    [sym_integer] = STATE(2),
    [sym_char] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote_splice] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_bytecode] = STATE(2),
    [sym_string_text_properties] = STATE(2),
    [sym_hash_table] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_float_token1] = ACTIONS(89),
    [aux_sym_float_token2] = ACTIONS(89),
    [aux_sym_float_token3] = ACTIONS(89),
    [aux_sym_float_token4] = ACTIONS(89),
    [aux_sym_float_token5] = ACTIONS(89),
    [aux_sym_integer_token1] = ACTIONS(91),
    [aux_sym_integer_token2] = ACTIONS(93),
    [aux_sym_char_token1] = ACTIONS(95),
    [aux_sym_char_token2] = ACTIONS(97),
    [aux_sym_char_token3] = ACTIONS(97),
    [aux_sym_char_token4] = ACTIONS(97),
    [aux_sym_char_token5] = ACTIONS(97),
    [aux_sym_char_token6] = ACTIONS(95),
    [aux_sym_char_token7] = ACTIONS(95),
    [aux_sym_char_token8] = ACTIONS(97),
    [sym_string] = ACTIONS(99),
    [sym_byte_compiled_file_name] = ACTIONS(99),
    [aux_sym_symbol_token1] = ACTIONS(101),
    [aux_sym_symbol_token2] = ACTIONS(101),
    [anon_sym_POUND_POUND] = ACTIONS(103),
    [anon_sym_POUND_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COMMA_AT] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_RBRACK] = ACTIONS(225),
    [anon_sym_POUND_LBRACK] = ACTIONS(117),
    [anon_sym_POUND_LPAREN] = ACTIONS(119),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym__sexp] = STATE(17),
    [sym__atom] = STATE(17),
    [sym_float] = STATE(17),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_symbol] = STATE(17),
    [sym_quote] = STATE(17),
    [sym_unquote_splice] = STATE(17),
    [sym_unquote] = STATE(17),
    [sym_list] = STATE(17),
    [sym_vector] = STATE(17),
    [sym_bytecode] = STATE(17),
    [sym_string_text_properties] = STATE(17),
    [sym_hash_table] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(17),
    [aux_sym_float_token1] = ACTIONS(89),
    [aux_sym_float_token2] = ACTIONS(89),
    [aux_sym_float_token3] = ACTIONS(89),
    [aux_sym_float_token4] = ACTIONS(89),
    [aux_sym_float_token5] = ACTIONS(89),
    [aux_sym_integer_token1] = ACTIONS(91),
    [aux_sym_integer_token2] = ACTIONS(93),
    [aux_sym_char_token1] = ACTIONS(95),
    [aux_sym_char_token2] = ACTIONS(97),
    [aux_sym_char_token3] = ACTIONS(97),
    [aux_sym_char_token4] = ACTIONS(97),
    [aux_sym_char_token5] = ACTIONS(97),
    [aux_sym_char_token6] = ACTIONS(95),
    [aux_sym_char_token7] = ACTIONS(95),
    [aux_sym_char_token8] = ACTIONS(97),
    [sym_string] = ACTIONS(227),
    [sym_byte_compiled_file_name] = ACTIONS(227),
    [aux_sym_symbol_token1] = ACTIONS(101),
    [aux_sym_symbol_token2] = ACTIONS(101),
    [anon_sym_POUND_POUND] = ACTIONS(103),
    [anon_sym_POUND_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COMMA_AT] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_POUND_LBRACK] = ACTIONS(117),
    [anon_sym_POUND_LPAREN] = ACTIONS(119),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym__sexp] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_float] = STATE(2),
    [sym_integer] = STATE(2),
    [sym_char] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote_splice] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_bytecode] = STATE(2),
    [sym_string_text_properties] = STATE(2),
    [sym_hash_table] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_float_token1] = ACTIONS(89),
    [aux_sym_float_token2] = ACTIONS(89),
    [aux_sym_float_token3] = ACTIONS(89),
    [aux_sym_float_token4] = ACTIONS(89),
    [aux_sym_float_token5] = ACTIONS(89),
    [aux_sym_integer_token1] = ACTIONS(91),
    [aux_sym_integer_token2] = ACTIONS(93),
    [aux_sym_char_token1] = ACTIONS(95),
    [aux_sym_char_token2] = ACTIONS(97),
    [aux_sym_char_token3] = ACTIONS(97),
    [aux_sym_char_token4] = ACTIONS(97),
    [aux_sym_char_token5] = ACTIONS(97),
    [aux_sym_char_token6] = ACTIONS(95),
    [aux_sym_char_token7] = ACTIONS(95),
    [aux_sym_char_token8] = ACTIONS(97),
    [sym_string] = ACTIONS(99),
    [sym_byte_compiled_file_name] = ACTIONS(99),
    [aux_sym_symbol_token1] = ACTIONS(101),
    [aux_sym_symbol_token2] = ACTIONS(101),
    [anon_sym_POUND_POUND] = ACTIONS(103),
    [anon_sym_POUND_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COMMA_AT] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_POUND_LBRACK] = ACTIONS(117),
    [anon_sym_POUND_LPAREN] = ACTIONS(119),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym__sexp] = STATE(43),
    [sym__atom] = STATE(43),
    [sym_float] = STATE(43),
    [sym_integer] = STATE(43),
    [sym_char] = STATE(43),
    [sym_symbol] = STATE(43),
    [sym_quote] = STATE(43),
    [sym_unquote_splice] = STATE(43),
    [sym_unquote] = STATE(43),
    [sym_list] = STATE(43),
    [sym_vector] = STATE(43),
    [sym_bytecode] = STATE(43),
    [sym_string_text_properties] = STATE(43),
    [sym_hash_table] = STATE(43),
    [aux_sym_float_token1] = ACTIONS(89),
    [aux_sym_float_token2] = ACTIONS(89),
    [aux_sym_float_token3] = ACTIONS(89),
    [aux_sym_float_token4] = ACTIONS(89),
    [aux_sym_float_token5] = ACTIONS(89),
    [aux_sym_integer_token1] = ACTIONS(91),
    [aux_sym_integer_token2] = ACTIONS(93),
    [aux_sym_char_token1] = ACTIONS(95),
    [aux_sym_char_token2] = ACTIONS(97),
    [aux_sym_char_token3] = ACTIONS(97),
    [aux_sym_char_token4] = ACTIONS(97),
    [aux_sym_char_token5] = ACTIONS(97),
    [aux_sym_char_token6] = ACTIONS(95),
    [aux_sym_char_token7] = ACTIONS(95),
    [aux_sym_char_token8] = ACTIONS(97),
    [sym_string] = ACTIONS(233),
    [sym_byte_compiled_file_name] = ACTIONS(233),
    [aux_sym_symbol_token1] = ACTIONS(101),
    [aux_sym_symbol_token2] = ACTIONS(101),
    [anon_sym_POUND_POUND] = ACTIONS(103),
    [anon_sym_POUND_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COMMA_AT] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_POUND_LBRACK] = ACTIONS(117),
    [anon_sym_POUND_LPAREN] = ACTIONS(119),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [sym__sexp] = STATE(42),
    [sym__atom] = STATE(42),
    [sym_float] = STATE(42),
    [sym_integer] = STATE(42),
    [sym_char] = STATE(42),
    [sym_symbol] = STATE(42),
    [sym_quote] = STATE(42),
    [sym_unquote_splice] = STATE(42),
    [sym_unquote] = STATE(42),
    [sym_list] = STATE(42),
    [sym_vector] = STATE(42),
    [sym_bytecode] = STATE(42),
    [sym_string_text_properties] = STATE(42),
    [sym_hash_table] = STATE(42),
    [aux_sym_float_token1] = ACTIONS(89),
    [aux_sym_float_token2] = ACTIONS(89),
    [aux_sym_float_token3] = ACTIONS(89),
    [aux_sym_float_token4] = ACTIONS(89),
    [aux_sym_float_token5] = ACTIONS(89),
    [aux_sym_integer_token1] = ACTIONS(91),
    [aux_sym_integer_token2] = ACTIONS(93),
    [aux_sym_char_token1] = ACTIONS(95),
    [aux_sym_char_token2] = ACTIONS(97),
    [aux_sym_char_token3] = ACTIONS(97),
    [aux_sym_char_token4] = ACTIONS(97),
    [aux_sym_char_token5] = ACTIONS(97),
    [aux_sym_char_token6] = ACTIONS(95),
    [aux_sym_char_token7] = ACTIONS(95),
    [aux_sym_char_token8] = ACTIONS(97),
    [sym_string] = ACTIONS(235),
    [sym_byte_compiled_file_name] = ACTIONS(235),
    [aux_sym_symbol_token1] = ACTIONS(101),
    [aux_sym_symbol_token2] = ACTIONS(101),
    [anon_sym_POUND_POUND] = ACTIONS(103),
    [anon_sym_POUND_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COMMA_AT] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_POUND_LBRACK] = ACTIONS(117),
    [anon_sym_POUND_LPAREN] = ACTIONS(119),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym__sexp] = STATE(48),
    [sym__atom] = STATE(48),
    [sym_float] = STATE(48),
    [sym_integer] = STATE(48),
    [sym_char] = STATE(48),
    [sym_symbol] = STATE(48),
    [sym_quote] = STATE(48),
    [sym_unquote_splice] = STATE(48),
    [sym_unquote] = STATE(48),
    [sym_list] = STATE(48),
    [sym_vector] = STATE(48),
    [sym_bytecode] = STATE(48),
    [sym_string_text_properties] = STATE(48),
    [sym_hash_table] = STATE(48),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(7),
    [aux_sym_float_token4] = ACTIONS(7),
    [aux_sym_float_token5] = ACTIONS(7),
    [aux_sym_integer_token1] = ACTIONS(9),
    [aux_sym_integer_token2] = ACTIONS(11),
    [aux_sym_char_token1] = ACTIONS(13),
    [aux_sym_char_token2] = ACTIONS(15),
    [aux_sym_char_token3] = ACTIONS(15),
    [aux_sym_char_token4] = ACTIONS(15),
    [aux_sym_char_token5] = ACTIONS(15),
    [aux_sym_char_token6] = ACTIONS(13),
    [aux_sym_char_token7] = ACTIONS(13),
    [aux_sym_char_token8] = ACTIONS(15),
    [sym_string] = ACTIONS(237),
    [sym_byte_compiled_file_name] = ACTIONS(237),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [aux_sym_symbol_token2] = ACTIONS(19),
    [anon_sym_POUND_POUND] = ACTIONS(21),
    [anon_sym_POUND_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA_AT] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym__sexp] = STATE(60),
    [sym__atom] = STATE(60),
    [sym_float] = STATE(60),
    [sym_integer] = STATE(60),
    [sym_char] = STATE(60),
    [sym_symbol] = STATE(60),
    [sym_quote] = STATE(60),
    [sym_unquote_splice] = STATE(60),
    [sym_unquote] = STATE(60),
    [sym_list] = STATE(60),
    [sym_vector] = STATE(60),
    [sym_bytecode] = STATE(60),
    [sym_string_text_properties] = STATE(60),
    [sym_hash_table] = STATE(60),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(7),
    [aux_sym_float_token4] = ACTIONS(7),
    [aux_sym_float_token5] = ACTIONS(7),
    [aux_sym_integer_token1] = ACTIONS(9),
    [aux_sym_integer_token2] = ACTIONS(11),
    [aux_sym_char_token1] = ACTIONS(13),
    [aux_sym_char_token2] = ACTIONS(15),
    [aux_sym_char_token3] = ACTIONS(15),
    [aux_sym_char_token4] = ACTIONS(15),
    [aux_sym_char_token5] = ACTIONS(15),
    [aux_sym_char_token6] = ACTIONS(13),
    [aux_sym_char_token7] = ACTIONS(13),
    [aux_sym_char_token8] = ACTIONS(15),
    [sym_string] = ACTIONS(239),
    [sym_byte_compiled_file_name] = ACTIONS(239),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [aux_sym_symbol_token2] = ACTIONS(19),
    [anon_sym_POUND_POUND] = ACTIONS(21),
    [anon_sym_POUND_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA_AT] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [sym__sexp] = STATE(61),
    [sym__atom] = STATE(61),
    [sym_float] = STATE(61),
    [sym_integer] = STATE(61),
    [sym_char] = STATE(61),
    [sym_symbol] = STATE(61),
    [sym_quote] = STATE(61),
    [sym_unquote_splice] = STATE(61),
    [sym_unquote] = STATE(61),
    [sym_list] = STATE(61),
    [sym_vector] = STATE(61),
    [sym_bytecode] = STATE(61),
    [sym_string_text_properties] = STATE(61),
    [sym_hash_table] = STATE(61),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(7),
    [aux_sym_float_token4] = ACTIONS(7),
    [aux_sym_float_token5] = ACTIONS(7),
    [aux_sym_integer_token1] = ACTIONS(9),
    [aux_sym_integer_token2] = ACTIONS(11),
    [aux_sym_char_token1] = ACTIONS(13),
    [aux_sym_char_token2] = ACTIONS(15),
    [aux_sym_char_token3] = ACTIONS(15),
    [aux_sym_char_token4] = ACTIONS(15),
    [aux_sym_char_token5] = ACTIONS(15),
    [aux_sym_char_token6] = ACTIONS(13),
    [aux_sym_char_token7] = ACTIONS(13),
    [aux_sym_char_token8] = ACTIONS(15),
    [sym_string] = ACTIONS(241),
    [sym_byte_compiled_file_name] = ACTIONS(241),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [aux_sym_symbol_token2] = ACTIONS(19),
    [anon_sym_POUND_POUND] = ACTIONS(21),
    [anon_sym_POUND_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA_AT] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [sym__sexp] = STATE(31),
    [sym__atom] = STATE(31),
    [sym_float] = STATE(31),
    [sym_integer] = STATE(31),
    [sym_char] = STATE(31),
    [sym_symbol] = STATE(31),
    [sym_quote] = STATE(31),
    [sym_unquote_splice] = STATE(31),
    [sym_unquote] = STATE(31),
    [sym_list] = STATE(31),
    [sym_vector] = STATE(31),
    [sym_bytecode] = STATE(31),
    [sym_string_text_properties] = STATE(31),
    [sym_hash_table] = STATE(31),
    [aux_sym_float_token1] = ACTIONS(89),
    [aux_sym_float_token2] = ACTIONS(89),
    [aux_sym_float_token3] = ACTIONS(89),
    [aux_sym_float_token4] = ACTIONS(89),
    [aux_sym_float_token5] = ACTIONS(89),
    [aux_sym_integer_token1] = ACTIONS(91),
    [aux_sym_integer_token2] = ACTIONS(93),
    [aux_sym_char_token1] = ACTIONS(95),
    [aux_sym_char_token2] = ACTIONS(97),
    [aux_sym_char_token3] = ACTIONS(97),
    [aux_sym_char_token4] = ACTIONS(97),
    [aux_sym_char_token5] = ACTIONS(97),
    [aux_sym_char_token6] = ACTIONS(95),
    [aux_sym_char_token7] = ACTIONS(95),
    [aux_sym_char_token8] = ACTIONS(97),
    [sym_string] = ACTIONS(243),
    [sym_byte_compiled_file_name] = ACTIONS(243),
    [aux_sym_symbol_token1] = ACTIONS(101),
    [aux_sym_symbol_token2] = ACTIONS(101),
    [anon_sym_POUND_POUND] = ACTIONS(103),
    [anon_sym_POUND_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COMMA_AT] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_POUND_LBRACK] = ACTIONS(117),
    [anon_sym_POUND_LPAREN] = ACTIONS(119),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [aux_sym_float_token1] = ACTIONS(245),
    [aux_sym_float_token2] = ACTIONS(245),
    [aux_sym_float_token3] = ACTIONS(245),
    [aux_sym_float_token4] = ACTIONS(245),
    [aux_sym_float_token5] = ACTIONS(245),
    [aux_sym_integer_token1] = ACTIONS(245),
    [aux_sym_integer_token2] = ACTIONS(247),
    [aux_sym_char_token1] = ACTIONS(245),
    [aux_sym_char_token2] = ACTIONS(247),
    [aux_sym_char_token3] = ACTIONS(247),
    [aux_sym_char_token4] = ACTIONS(247),
    [aux_sym_char_token5] = ACTIONS(247),
    [aux_sym_char_token6] = ACTIONS(245),
    [aux_sym_char_token7] = ACTIONS(245),
    [aux_sym_char_token8] = ACTIONS(247),
    [sym_string] = ACTIONS(247),
    [sym_byte_compiled_file_name] = ACTIONS(247),
    [aux_sym_symbol_token1] = ACTIONS(245),
    [aux_sym_symbol_token2] = ACTIONS(245),
    [anon_sym_POUND_POUND] = ACTIONS(247),
    [anon_sym_POUND_SQUOTE] = ACTIONS(247),
    [anon_sym_SQUOTE] = ACTIONS(247),
    [anon_sym_BQUOTE] = ACTIONS(247),
    [anon_sym_COMMA_AT] = ACTIONS(247),
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_RBRACK] = ACTIONS(247),
    [anon_sym_POUND_LBRACK] = ACTIONS(247),
    [anon_sym_POUND_LPAREN] = ACTIONS(247),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(247),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [aux_sym_float_token1] = ACTIONS(249),
    [aux_sym_float_token2] = ACTIONS(249),
    [aux_sym_float_token3] = ACTIONS(249),
    [aux_sym_float_token4] = ACTIONS(249),
    [aux_sym_float_token5] = ACTIONS(249),
    [aux_sym_integer_token1] = ACTIONS(249),
    [aux_sym_integer_token2] = ACTIONS(251),
    [aux_sym_char_token1] = ACTIONS(249),
    [aux_sym_char_token2] = ACTIONS(251),
    [aux_sym_char_token3] = ACTIONS(251),
    [aux_sym_char_token4] = ACTIONS(251),
    [aux_sym_char_token5] = ACTIONS(251),
    [aux_sym_char_token6] = ACTIONS(249),
    [aux_sym_char_token7] = ACTIONS(249),
    [aux_sym_char_token8] = ACTIONS(251),
    [sym_string] = ACTIONS(251),
    [sym_byte_compiled_file_name] = ACTIONS(251),
    [aux_sym_symbol_token1] = ACTIONS(249),
    [aux_sym_symbol_token2] = ACTIONS(249),
    [anon_sym_POUND_POUND] = ACTIONS(251),
    [anon_sym_POUND_SQUOTE] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(251),
    [anon_sym_BQUOTE] = ACTIONS(251),
    [anon_sym_COMMA_AT] = ACTIONS(251),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_LBRACK] = ACTIONS(251),
    [anon_sym_RBRACK] = ACTIONS(251),
    [anon_sym_POUND_LBRACK] = ACTIONS(251),
    [anon_sym_POUND_LPAREN] = ACTIONS(251),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [aux_sym_float_token1] = ACTIONS(253),
    [aux_sym_float_token2] = ACTIONS(253),
    [aux_sym_float_token3] = ACTIONS(253),
    [aux_sym_float_token4] = ACTIONS(253),
    [aux_sym_float_token5] = ACTIONS(253),
    [aux_sym_integer_token1] = ACTIONS(253),
    [aux_sym_integer_token2] = ACTIONS(255),
    [aux_sym_char_token1] = ACTIONS(253),
    [aux_sym_char_token2] = ACTIONS(255),
    [aux_sym_char_token3] = ACTIONS(255),
    [aux_sym_char_token4] = ACTIONS(255),
    [aux_sym_char_token5] = ACTIONS(255),
    [aux_sym_char_token6] = ACTIONS(253),
    [aux_sym_char_token7] = ACTIONS(253),
    [aux_sym_char_token8] = ACTIONS(255),
    [sym_string] = ACTIONS(255),
    [sym_byte_compiled_file_name] = ACTIONS(255),
    [aux_sym_symbol_token1] = ACTIONS(253),
    [aux_sym_symbol_token2] = ACTIONS(253),
    [anon_sym_POUND_POUND] = ACTIONS(255),
    [anon_sym_POUND_SQUOTE] = ACTIONS(255),
    [anon_sym_SQUOTE] = ACTIONS(255),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [anon_sym_COMMA_AT] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_RPAREN] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(255),
    [anon_sym_RBRACK] = ACTIONS(255),
    [anon_sym_POUND_LBRACK] = ACTIONS(255),
    [anon_sym_POUND_LPAREN] = ACTIONS(255),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(255),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [aux_sym_float_token1] = ACTIONS(257),
    [aux_sym_float_token2] = ACTIONS(257),
    [aux_sym_float_token3] = ACTIONS(257),
    [aux_sym_float_token4] = ACTIONS(257),
    [aux_sym_float_token5] = ACTIONS(257),
    [aux_sym_integer_token1] = ACTIONS(257),
    [aux_sym_integer_token2] = ACTIONS(259),
    [aux_sym_char_token1] = ACTIONS(257),
    [aux_sym_char_token2] = ACTIONS(259),
    [aux_sym_char_token3] = ACTIONS(259),
    [aux_sym_char_token4] = ACTIONS(259),
    [aux_sym_char_token5] = ACTIONS(259),
    [aux_sym_char_token6] = ACTIONS(257),
    [aux_sym_char_token7] = ACTIONS(257),
    [aux_sym_char_token8] = ACTIONS(259),
    [sym_string] = ACTIONS(259),
    [sym_byte_compiled_file_name] = ACTIONS(259),
    [aux_sym_symbol_token1] = ACTIONS(257),
    [aux_sym_symbol_token2] = ACTIONS(257),
    [anon_sym_POUND_POUND] = ACTIONS(259),
    [anon_sym_POUND_SQUOTE] = ACTIONS(259),
    [anon_sym_SQUOTE] = ACTIONS(259),
    [anon_sym_BQUOTE] = ACTIONS(259),
    [anon_sym_COMMA_AT] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(257),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_RPAREN] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_RBRACK] = ACTIONS(259),
    [anon_sym_POUND_LBRACK] = ACTIONS(259),
    [anon_sym_POUND_LPAREN] = ACTIONS(259),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(259),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [aux_sym_float_token1] = ACTIONS(261),
    [aux_sym_float_token2] = ACTIONS(261),
    [aux_sym_float_token3] = ACTIONS(261),
    [aux_sym_float_token4] = ACTIONS(261),
    [aux_sym_float_token5] = ACTIONS(261),
    [aux_sym_integer_token1] = ACTIONS(261),
    [aux_sym_integer_token2] = ACTIONS(263),
    [aux_sym_char_token1] = ACTIONS(261),
    [aux_sym_char_token2] = ACTIONS(263),
    [aux_sym_char_token3] = ACTIONS(263),
    [aux_sym_char_token4] = ACTIONS(263),
    [aux_sym_char_token5] = ACTIONS(263),
    [aux_sym_char_token6] = ACTIONS(261),
    [aux_sym_char_token7] = ACTIONS(261),
    [aux_sym_char_token8] = ACTIONS(263),
    [sym_string] = ACTIONS(263),
    [sym_byte_compiled_file_name] = ACTIONS(263),
    [aux_sym_symbol_token1] = ACTIONS(261),
    [aux_sym_symbol_token2] = ACTIONS(261),
    [anon_sym_POUND_POUND] = ACTIONS(263),
    [anon_sym_POUND_SQUOTE] = ACTIONS(263),
    [anon_sym_SQUOTE] = ACTIONS(263),
    [anon_sym_BQUOTE] = ACTIONS(263),
    [anon_sym_COMMA_AT] = ACTIONS(263),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_RPAREN] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(263),
    [anon_sym_RBRACK] = ACTIONS(263),
    [anon_sym_POUND_LBRACK] = ACTIONS(263),
    [anon_sym_POUND_LPAREN] = ACTIONS(263),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [aux_sym_float_token1] = ACTIONS(265),
    [aux_sym_float_token2] = ACTIONS(265),
    [aux_sym_float_token3] = ACTIONS(265),
    [aux_sym_float_token4] = ACTIONS(265),
    [aux_sym_float_token5] = ACTIONS(265),
    [aux_sym_integer_token1] = ACTIONS(265),
    [aux_sym_integer_token2] = ACTIONS(267),
    [aux_sym_char_token1] = ACTIONS(265),
    [aux_sym_char_token2] = ACTIONS(267),
    [aux_sym_char_token3] = ACTIONS(267),
    [aux_sym_char_token4] = ACTIONS(267),
    [aux_sym_char_token5] = ACTIONS(267),
    [aux_sym_char_token6] = ACTIONS(265),
    [aux_sym_char_token7] = ACTIONS(265),
    [aux_sym_char_token8] = ACTIONS(267),
    [sym_string] = ACTIONS(267),
    [sym_byte_compiled_file_name] = ACTIONS(267),
    [aux_sym_symbol_token1] = ACTIONS(265),
    [aux_sym_symbol_token2] = ACTIONS(265),
    [anon_sym_POUND_POUND] = ACTIONS(267),
    [anon_sym_POUND_SQUOTE] = ACTIONS(267),
    [anon_sym_SQUOTE] = ACTIONS(267),
    [anon_sym_BQUOTE] = ACTIONS(267),
    [anon_sym_COMMA_AT] = ACTIONS(267),
    [anon_sym_COMMA] = ACTIONS(265),
    [anon_sym_LPAREN] = ACTIONS(267),
    [anon_sym_RPAREN] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(267),
    [anon_sym_RBRACK] = ACTIONS(267),
    [anon_sym_POUND_LBRACK] = ACTIONS(267),
    [anon_sym_POUND_LPAREN] = ACTIONS(267),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(267),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [aux_sym_float_token1] = ACTIONS(269),
    [aux_sym_float_token2] = ACTIONS(269),
    [aux_sym_float_token3] = ACTIONS(269),
    [aux_sym_float_token4] = ACTIONS(269),
    [aux_sym_float_token5] = ACTIONS(269),
    [aux_sym_integer_token1] = ACTIONS(269),
    [aux_sym_integer_token2] = ACTIONS(271),
    [aux_sym_char_token1] = ACTIONS(269),
    [aux_sym_char_token2] = ACTIONS(271),
    [aux_sym_char_token3] = ACTIONS(271),
    [aux_sym_char_token4] = ACTIONS(271),
    [aux_sym_char_token5] = ACTIONS(271),
    [aux_sym_char_token6] = ACTIONS(269),
    [aux_sym_char_token7] = ACTIONS(269),
    [aux_sym_char_token8] = ACTIONS(271),
    [sym_string] = ACTIONS(271),
    [sym_byte_compiled_file_name] = ACTIONS(271),
    [aux_sym_symbol_token1] = ACTIONS(269),
    [aux_sym_symbol_token2] = ACTIONS(269),
    [anon_sym_POUND_POUND] = ACTIONS(271),
    [anon_sym_POUND_SQUOTE] = ACTIONS(271),
    [anon_sym_SQUOTE] = ACTIONS(271),
    [anon_sym_BQUOTE] = ACTIONS(271),
    [anon_sym_COMMA_AT] = ACTIONS(271),
    [anon_sym_COMMA] = ACTIONS(269),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_RPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(271),
    [anon_sym_RBRACK] = ACTIONS(271),
    [anon_sym_POUND_LBRACK] = ACTIONS(271),
    [anon_sym_POUND_LPAREN] = ACTIONS(271),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(271),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [aux_sym_float_token1] = ACTIONS(273),
    [aux_sym_float_token2] = ACTIONS(273),
    [aux_sym_float_token3] = ACTIONS(273),
    [aux_sym_float_token4] = ACTIONS(273),
    [aux_sym_float_token5] = ACTIONS(273),
    [aux_sym_integer_token1] = ACTIONS(273),
    [aux_sym_integer_token2] = ACTIONS(275),
    [aux_sym_char_token1] = ACTIONS(273),
    [aux_sym_char_token2] = ACTIONS(275),
    [aux_sym_char_token3] = ACTIONS(275),
    [aux_sym_char_token4] = ACTIONS(275),
    [aux_sym_char_token5] = ACTIONS(275),
    [aux_sym_char_token6] = ACTIONS(273),
    [aux_sym_char_token7] = ACTIONS(273),
    [aux_sym_char_token8] = ACTIONS(275),
    [sym_string] = ACTIONS(275),
    [sym_byte_compiled_file_name] = ACTIONS(275),
    [aux_sym_symbol_token1] = ACTIONS(273),
    [aux_sym_symbol_token2] = ACTIONS(273),
    [anon_sym_POUND_POUND] = ACTIONS(275),
    [anon_sym_POUND_SQUOTE] = ACTIONS(275),
    [anon_sym_SQUOTE] = ACTIONS(275),
    [anon_sym_BQUOTE] = ACTIONS(275),
    [anon_sym_COMMA_AT] = ACTIONS(275),
    [anon_sym_COMMA] = ACTIONS(273),
    [anon_sym_LPAREN] = ACTIONS(275),
    [anon_sym_RPAREN] = ACTIONS(275),
    [anon_sym_LBRACK] = ACTIONS(275),
    [anon_sym_RBRACK] = ACTIONS(275),
    [anon_sym_POUND_LBRACK] = ACTIONS(275),
    [anon_sym_POUND_LPAREN] = ACTIONS(275),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [aux_sym_float_token1] = ACTIONS(277),
    [aux_sym_float_token2] = ACTIONS(277),
    [aux_sym_float_token3] = ACTIONS(277),
    [aux_sym_float_token4] = ACTIONS(277),
    [aux_sym_float_token5] = ACTIONS(277),
    [aux_sym_integer_token1] = ACTIONS(277),
    [aux_sym_integer_token2] = ACTIONS(279),
    [aux_sym_char_token1] = ACTIONS(277),
    [aux_sym_char_token2] = ACTIONS(279),
    [aux_sym_char_token3] = ACTIONS(279),
    [aux_sym_char_token4] = ACTIONS(279),
    [aux_sym_char_token5] = ACTIONS(279),
    [aux_sym_char_token6] = ACTIONS(277),
    [aux_sym_char_token7] = ACTIONS(277),
    [aux_sym_char_token8] = ACTIONS(279),
    [sym_string] = ACTIONS(279),
    [sym_byte_compiled_file_name] = ACTIONS(279),
    [aux_sym_symbol_token1] = ACTIONS(277),
    [aux_sym_symbol_token2] = ACTIONS(277),
    [anon_sym_POUND_POUND] = ACTIONS(279),
    [anon_sym_POUND_SQUOTE] = ACTIONS(279),
    [anon_sym_SQUOTE] = ACTIONS(279),
    [anon_sym_BQUOTE] = ACTIONS(279),
    [anon_sym_COMMA_AT] = ACTIONS(279),
    [anon_sym_COMMA] = ACTIONS(277),
    [anon_sym_LPAREN] = ACTIONS(279),
    [anon_sym_RPAREN] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(279),
    [anon_sym_RBRACK] = ACTIONS(279),
    [anon_sym_POUND_LBRACK] = ACTIONS(279),
    [anon_sym_POUND_LPAREN] = ACTIONS(279),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(279),
    [sym_comment] = ACTIONS(3),
  },
  [40] = {
    [aux_sym_float_token1] = ACTIONS(281),
    [aux_sym_float_token2] = ACTIONS(281),
    [aux_sym_float_token3] = ACTIONS(281),
    [aux_sym_float_token4] = ACTIONS(281),
    [aux_sym_float_token5] = ACTIONS(281),
    [aux_sym_integer_token1] = ACTIONS(281),
    [aux_sym_integer_token2] = ACTIONS(283),
    [aux_sym_char_token1] = ACTIONS(281),
    [aux_sym_char_token2] = ACTIONS(283),
    [aux_sym_char_token3] = ACTIONS(283),
    [aux_sym_char_token4] = ACTIONS(283),
    [aux_sym_char_token5] = ACTIONS(283),
    [aux_sym_char_token6] = ACTIONS(281),
    [aux_sym_char_token7] = ACTIONS(281),
    [aux_sym_char_token8] = ACTIONS(283),
    [sym_string] = ACTIONS(283),
    [sym_byte_compiled_file_name] = ACTIONS(283),
    [aux_sym_symbol_token1] = ACTIONS(281),
    [aux_sym_symbol_token2] = ACTIONS(281),
    [anon_sym_POUND_POUND] = ACTIONS(283),
    [anon_sym_POUND_SQUOTE] = ACTIONS(283),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_BQUOTE] = ACTIONS(283),
    [anon_sym_COMMA_AT] = ACTIONS(283),
    [anon_sym_COMMA] = ACTIONS(281),
    [anon_sym_LPAREN] = ACTIONS(283),
    [anon_sym_RPAREN] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(283),
    [anon_sym_RBRACK] = ACTIONS(283),
    [anon_sym_POUND_LBRACK] = ACTIONS(283),
    [anon_sym_POUND_LPAREN] = ACTIONS(283),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(283),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [aux_sym_float_token1] = ACTIONS(285),
    [aux_sym_float_token2] = ACTIONS(285),
    [aux_sym_float_token3] = ACTIONS(285),
    [aux_sym_float_token4] = ACTIONS(285),
    [aux_sym_float_token5] = ACTIONS(285),
    [aux_sym_integer_token1] = ACTIONS(285),
    [aux_sym_integer_token2] = ACTIONS(287),
    [aux_sym_char_token1] = ACTIONS(285),
    [aux_sym_char_token2] = ACTIONS(287),
    [aux_sym_char_token3] = ACTIONS(287),
    [aux_sym_char_token4] = ACTIONS(287),
    [aux_sym_char_token5] = ACTIONS(287),
    [aux_sym_char_token6] = ACTIONS(285),
    [aux_sym_char_token7] = ACTIONS(285),
    [aux_sym_char_token8] = ACTIONS(287),
    [sym_string] = ACTIONS(287),
    [sym_byte_compiled_file_name] = ACTIONS(287),
    [aux_sym_symbol_token1] = ACTIONS(285),
    [aux_sym_symbol_token2] = ACTIONS(285),
    [anon_sym_POUND_POUND] = ACTIONS(287),
    [anon_sym_POUND_SQUOTE] = ACTIONS(287),
    [anon_sym_SQUOTE] = ACTIONS(287),
    [anon_sym_BQUOTE] = ACTIONS(287),
    [anon_sym_COMMA_AT] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(285),
    [anon_sym_LPAREN] = ACTIONS(287),
    [anon_sym_RPAREN] = ACTIONS(287),
    [anon_sym_LBRACK] = ACTIONS(287),
    [anon_sym_RBRACK] = ACTIONS(287),
    [anon_sym_POUND_LBRACK] = ACTIONS(287),
    [anon_sym_POUND_LPAREN] = ACTIONS(287),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(287),
    [sym_comment] = ACTIONS(3),
  },
  [42] = {
    [aux_sym_float_token1] = ACTIONS(289),
    [aux_sym_float_token2] = ACTIONS(289),
    [aux_sym_float_token3] = ACTIONS(289),
    [aux_sym_float_token4] = ACTIONS(289),
    [aux_sym_float_token5] = ACTIONS(289),
    [aux_sym_integer_token1] = ACTIONS(289),
    [aux_sym_integer_token2] = ACTIONS(291),
    [aux_sym_char_token1] = ACTIONS(289),
    [aux_sym_char_token2] = ACTIONS(291),
    [aux_sym_char_token3] = ACTIONS(291),
    [aux_sym_char_token4] = ACTIONS(291),
    [aux_sym_char_token5] = ACTIONS(291),
    [aux_sym_char_token6] = ACTIONS(289),
    [aux_sym_char_token7] = ACTIONS(289),
    [aux_sym_char_token8] = ACTIONS(291),
    [sym_string] = ACTIONS(291),
    [sym_byte_compiled_file_name] = ACTIONS(291),
    [aux_sym_symbol_token1] = ACTIONS(289),
    [aux_sym_symbol_token2] = ACTIONS(289),
    [anon_sym_POUND_POUND] = ACTIONS(291),
    [anon_sym_POUND_SQUOTE] = ACTIONS(291),
    [anon_sym_SQUOTE] = ACTIONS(291),
    [anon_sym_BQUOTE] = ACTIONS(291),
    [anon_sym_COMMA_AT] = ACTIONS(291),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_LPAREN] = ACTIONS(291),
    [anon_sym_RPAREN] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(291),
    [anon_sym_RBRACK] = ACTIONS(291),
    [anon_sym_POUND_LBRACK] = ACTIONS(291),
    [anon_sym_POUND_LPAREN] = ACTIONS(291),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(291),
    [sym_comment] = ACTIONS(3),
  },
  [43] = {
    [aux_sym_float_token1] = ACTIONS(293),
    [aux_sym_float_token2] = ACTIONS(293),
    [aux_sym_float_token3] = ACTIONS(293),
    [aux_sym_float_token4] = ACTIONS(293),
    [aux_sym_float_token5] = ACTIONS(293),
    [aux_sym_integer_token1] = ACTIONS(293),
    [aux_sym_integer_token2] = ACTIONS(295),
    [aux_sym_char_token1] = ACTIONS(293),
    [aux_sym_char_token2] = ACTIONS(295),
    [aux_sym_char_token3] = ACTIONS(295),
    [aux_sym_char_token4] = ACTIONS(295),
    [aux_sym_char_token5] = ACTIONS(295),
    [aux_sym_char_token6] = ACTIONS(293),
    [aux_sym_char_token7] = ACTIONS(293),
    [aux_sym_char_token8] = ACTIONS(295),
    [sym_string] = ACTIONS(295),
    [sym_byte_compiled_file_name] = ACTIONS(295),
    [aux_sym_symbol_token1] = ACTIONS(293),
    [aux_sym_symbol_token2] = ACTIONS(293),
    [anon_sym_POUND_POUND] = ACTIONS(295),
    [anon_sym_POUND_SQUOTE] = ACTIONS(295),
    [anon_sym_SQUOTE] = ACTIONS(295),
    [anon_sym_BQUOTE] = ACTIONS(295),
    [anon_sym_COMMA_AT] = ACTIONS(295),
    [anon_sym_COMMA] = ACTIONS(293),
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_RPAREN] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(295),
    [anon_sym_RBRACK] = ACTIONS(295),
    [anon_sym_POUND_LBRACK] = ACTIONS(295),
    [anon_sym_POUND_LPAREN] = ACTIONS(295),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(295),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [aux_sym_float_token1] = ACTIONS(297),
    [aux_sym_float_token2] = ACTIONS(297),
    [aux_sym_float_token3] = ACTIONS(297),
    [aux_sym_float_token4] = ACTIONS(297),
    [aux_sym_float_token5] = ACTIONS(297),
    [aux_sym_integer_token1] = ACTIONS(297),
    [aux_sym_integer_token2] = ACTIONS(299),
    [aux_sym_char_token1] = ACTIONS(297),
    [aux_sym_char_token2] = ACTIONS(299),
    [aux_sym_char_token3] = ACTIONS(299),
    [aux_sym_char_token4] = ACTIONS(299),
    [aux_sym_char_token5] = ACTIONS(299),
    [aux_sym_char_token6] = ACTIONS(297),
    [aux_sym_char_token7] = ACTIONS(297),
    [aux_sym_char_token8] = ACTIONS(299),
    [sym_string] = ACTIONS(299),
    [sym_byte_compiled_file_name] = ACTIONS(299),
    [aux_sym_symbol_token1] = ACTIONS(297),
    [aux_sym_symbol_token2] = ACTIONS(297),
    [anon_sym_POUND_POUND] = ACTIONS(299),
    [anon_sym_POUND_SQUOTE] = ACTIONS(299),
    [anon_sym_SQUOTE] = ACTIONS(299),
    [anon_sym_BQUOTE] = ACTIONS(299),
    [anon_sym_COMMA_AT] = ACTIONS(299),
    [anon_sym_COMMA] = ACTIONS(297),
    [anon_sym_LPAREN] = ACTIONS(299),
    [anon_sym_RPAREN] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(299),
    [anon_sym_RBRACK] = ACTIONS(299),
    [anon_sym_POUND_LBRACK] = ACTIONS(299),
    [anon_sym_POUND_LPAREN] = ACTIONS(299),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(299),
    [sym_comment] = ACTIONS(3),
  },
  [45] = {
    [aux_sym_float_token1] = ACTIONS(301),
    [aux_sym_float_token2] = ACTIONS(301),
    [aux_sym_float_token3] = ACTIONS(301),
    [aux_sym_float_token4] = ACTIONS(301),
    [aux_sym_float_token5] = ACTIONS(301),
    [aux_sym_integer_token1] = ACTIONS(301),
    [aux_sym_integer_token2] = ACTIONS(303),
    [aux_sym_char_token1] = ACTIONS(301),
    [aux_sym_char_token2] = ACTIONS(303),
    [aux_sym_char_token3] = ACTIONS(303),
    [aux_sym_char_token4] = ACTIONS(303),
    [aux_sym_char_token5] = ACTIONS(303),
    [aux_sym_char_token6] = ACTIONS(301),
    [aux_sym_char_token7] = ACTIONS(301),
    [aux_sym_char_token8] = ACTIONS(303),
    [sym_string] = ACTIONS(303),
    [sym_byte_compiled_file_name] = ACTIONS(303),
    [aux_sym_symbol_token1] = ACTIONS(301),
    [aux_sym_symbol_token2] = ACTIONS(301),
    [anon_sym_POUND_POUND] = ACTIONS(303),
    [anon_sym_POUND_SQUOTE] = ACTIONS(303),
    [anon_sym_SQUOTE] = ACTIONS(303),
    [anon_sym_BQUOTE] = ACTIONS(303),
    [anon_sym_COMMA_AT] = ACTIONS(303),
    [anon_sym_COMMA] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(303),
    [anon_sym_RPAREN] = ACTIONS(303),
    [anon_sym_LBRACK] = ACTIONS(303),
    [anon_sym_RBRACK] = ACTIONS(303),
    [anon_sym_POUND_LBRACK] = ACTIONS(303),
    [anon_sym_POUND_LPAREN] = ACTIONS(303),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(303),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [aux_sym_float_token1] = ACTIONS(305),
    [aux_sym_float_token2] = ACTIONS(305),
    [aux_sym_float_token3] = ACTIONS(305),
    [aux_sym_float_token4] = ACTIONS(305),
    [aux_sym_float_token5] = ACTIONS(305),
    [aux_sym_integer_token1] = ACTIONS(305),
    [aux_sym_integer_token2] = ACTIONS(307),
    [aux_sym_char_token1] = ACTIONS(305),
    [aux_sym_char_token2] = ACTIONS(307),
    [aux_sym_char_token3] = ACTIONS(307),
    [aux_sym_char_token4] = ACTIONS(307),
    [aux_sym_char_token5] = ACTIONS(307),
    [aux_sym_char_token6] = ACTIONS(305),
    [aux_sym_char_token7] = ACTIONS(305),
    [aux_sym_char_token8] = ACTIONS(307),
    [sym_string] = ACTIONS(307),
    [sym_byte_compiled_file_name] = ACTIONS(307),
    [aux_sym_symbol_token1] = ACTIONS(305),
    [aux_sym_symbol_token2] = ACTIONS(305),
    [anon_sym_POUND_POUND] = ACTIONS(307),
    [anon_sym_POUND_SQUOTE] = ACTIONS(307),
    [anon_sym_SQUOTE] = ACTIONS(307),
    [anon_sym_BQUOTE] = ACTIONS(307),
    [anon_sym_COMMA_AT] = ACTIONS(307),
    [anon_sym_COMMA] = ACTIONS(305),
    [anon_sym_LPAREN] = ACTIONS(307),
    [anon_sym_RPAREN] = ACTIONS(307),
    [anon_sym_LBRACK] = ACTIONS(307),
    [anon_sym_RBRACK] = ACTIONS(307),
    [anon_sym_POUND_LBRACK] = ACTIONS(307),
    [anon_sym_POUND_LPAREN] = ACTIONS(307),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(307),
    [sym_comment] = ACTIONS(3),
  },
  [47] = {
    [aux_sym_float_token1] = ACTIONS(309),
    [aux_sym_float_token2] = ACTIONS(309),
    [aux_sym_float_token3] = ACTIONS(309),
    [aux_sym_float_token4] = ACTIONS(309),
    [aux_sym_float_token5] = ACTIONS(309),
    [aux_sym_integer_token1] = ACTIONS(309),
    [aux_sym_integer_token2] = ACTIONS(311),
    [aux_sym_char_token1] = ACTIONS(309),
    [aux_sym_char_token2] = ACTIONS(311),
    [aux_sym_char_token3] = ACTIONS(311),
    [aux_sym_char_token4] = ACTIONS(311),
    [aux_sym_char_token5] = ACTIONS(311),
    [aux_sym_char_token6] = ACTIONS(309),
    [aux_sym_char_token7] = ACTIONS(309),
    [aux_sym_char_token8] = ACTIONS(311),
    [sym_string] = ACTIONS(311),
    [sym_byte_compiled_file_name] = ACTIONS(311),
    [aux_sym_symbol_token1] = ACTIONS(309),
    [aux_sym_symbol_token2] = ACTIONS(309),
    [anon_sym_POUND_POUND] = ACTIONS(311),
    [anon_sym_POUND_SQUOTE] = ACTIONS(311),
    [anon_sym_SQUOTE] = ACTIONS(311),
    [anon_sym_BQUOTE] = ACTIONS(311),
    [anon_sym_COMMA_AT] = ACTIONS(311),
    [anon_sym_COMMA] = ACTIONS(309),
    [anon_sym_LPAREN] = ACTIONS(311),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(311),
    [anon_sym_RBRACK] = ACTIONS(311),
    [anon_sym_POUND_LBRACK] = ACTIONS(311),
    [anon_sym_POUND_LPAREN] = ACTIONS(311),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(311),
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(247),
    [aux_sym_float_token1] = ACTIONS(245),
    [aux_sym_float_token2] = ACTIONS(245),
    [aux_sym_float_token3] = ACTIONS(245),
    [aux_sym_float_token4] = ACTIONS(245),
    [aux_sym_float_token5] = ACTIONS(245),
    [aux_sym_integer_token1] = ACTIONS(245),
    [aux_sym_integer_token2] = ACTIONS(247),
    [aux_sym_char_token1] = ACTIONS(245),
    [aux_sym_char_token2] = ACTIONS(247),
    [aux_sym_char_token3] = ACTIONS(247),
    [aux_sym_char_token4] = ACTIONS(247),
    [aux_sym_char_token5] = ACTIONS(247),
    [aux_sym_char_token6] = ACTIONS(245),
    [aux_sym_char_token7] = ACTIONS(245),
    [aux_sym_char_token8] = ACTIONS(247),
    [sym_string] = ACTIONS(247),
    [sym_byte_compiled_file_name] = ACTIONS(247),
    [aux_sym_symbol_token1] = ACTIONS(245),
    [aux_sym_symbol_token2] = ACTIONS(245),
    [anon_sym_POUND_POUND] = ACTIONS(247),
    [anon_sym_POUND_SQUOTE] = ACTIONS(247),
    [anon_sym_SQUOTE] = ACTIONS(247),
    [anon_sym_BQUOTE] = ACTIONS(247),
    [anon_sym_COMMA_AT] = ACTIONS(247),
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_POUND_LBRACK] = ACTIONS(247),
    [anon_sym_POUND_LPAREN] = ACTIONS(247),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(247),
    [sym_comment] = ACTIONS(3),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(271),
    [aux_sym_float_token1] = ACTIONS(269),
    [aux_sym_float_token2] = ACTIONS(269),
    [aux_sym_float_token3] = ACTIONS(269),
    [aux_sym_float_token4] = ACTIONS(269),
    [aux_sym_float_token5] = ACTIONS(269),
    [aux_sym_integer_token1] = ACTIONS(269),
    [aux_sym_integer_token2] = ACTIONS(271),
    [aux_sym_char_token1] = ACTIONS(269),
    [aux_sym_char_token2] = ACTIONS(271),
    [aux_sym_char_token3] = ACTIONS(271),
    [aux_sym_char_token4] = ACTIONS(271),
    [aux_sym_char_token5] = ACTIONS(271),
    [aux_sym_char_token6] = ACTIONS(269),
    [aux_sym_char_token7] = ACTIONS(269),
    [aux_sym_char_token8] = ACTIONS(271),
    [sym_string] = ACTIONS(271),
    [sym_byte_compiled_file_name] = ACTIONS(271),
    [aux_sym_symbol_token1] = ACTIONS(269),
    [aux_sym_symbol_token2] = ACTIONS(269),
    [anon_sym_POUND_POUND] = ACTIONS(271),
    [anon_sym_POUND_SQUOTE] = ACTIONS(271),
    [anon_sym_SQUOTE] = ACTIONS(271),
    [anon_sym_BQUOTE] = ACTIONS(271),
    [anon_sym_COMMA_AT] = ACTIONS(271),
    [anon_sym_COMMA] = ACTIONS(269),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(271),
    [anon_sym_POUND_LBRACK] = ACTIONS(271),
    [anon_sym_POUND_LPAREN] = ACTIONS(271),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(271),
    [sym_comment] = ACTIONS(3),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(275),
    [aux_sym_float_token1] = ACTIONS(273),
    [aux_sym_float_token2] = ACTIONS(273),
    [aux_sym_float_token3] = ACTIONS(273),
    [aux_sym_float_token4] = ACTIONS(273),
    [aux_sym_float_token5] = ACTIONS(273),
    [aux_sym_integer_token1] = ACTIONS(273),
    [aux_sym_integer_token2] = ACTIONS(275),
    [aux_sym_char_token1] = ACTIONS(273),
    [aux_sym_char_token2] = ACTIONS(275),
    [aux_sym_char_token3] = ACTIONS(275),
    [aux_sym_char_token4] = ACTIONS(275),
    [aux_sym_char_token5] = ACTIONS(275),
    [aux_sym_char_token6] = ACTIONS(273),
    [aux_sym_char_token7] = ACTIONS(273),
    [aux_sym_char_token8] = ACTIONS(275),
    [sym_string] = ACTIONS(275),
    [sym_byte_compiled_file_name] = ACTIONS(275),
    [aux_sym_symbol_token1] = ACTIONS(273),
    [aux_sym_symbol_token2] = ACTIONS(273),
    [anon_sym_POUND_POUND] = ACTIONS(275),
    [anon_sym_POUND_SQUOTE] = ACTIONS(275),
    [anon_sym_SQUOTE] = ACTIONS(275),
    [anon_sym_BQUOTE] = ACTIONS(275),
    [anon_sym_COMMA_AT] = ACTIONS(275),
    [anon_sym_COMMA] = ACTIONS(273),
    [anon_sym_LPAREN] = ACTIONS(275),
    [anon_sym_LBRACK] = ACTIONS(275),
    [anon_sym_POUND_LBRACK] = ACTIONS(275),
    [anon_sym_POUND_LPAREN] = ACTIONS(275),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(303),
    [aux_sym_float_token1] = ACTIONS(301),
    [aux_sym_float_token2] = ACTIONS(301),
    [aux_sym_float_token3] = ACTIONS(301),
    [aux_sym_float_token4] = ACTIONS(301),
    [aux_sym_float_token5] = ACTIONS(301),
    [aux_sym_integer_token1] = ACTIONS(301),
    [aux_sym_integer_token2] = ACTIONS(303),
    [aux_sym_char_token1] = ACTIONS(301),
    [aux_sym_char_token2] = ACTIONS(303),
    [aux_sym_char_token3] = ACTIONS(303),
    [aux_sym_char_token4] = ACTIONS(303),
    [aux_sym_char_token5] = ACTIONS(303),
    [aux_sym_char_token6] = ACTIONS(301),
    [aux_sym_char_token7] = ACTIONS(301),
    [aux_sym_char_token8] = ACTIONS(303),
    [sym_string] = ACTIONS(303),
    [sym_byte_compiled_file_name] = ACTIONS(303),
    [aux_sym_symbol_token1] = ACTIONS(301),
    [aux_sym_symbol_token2] = ACTIONS(301),
    [anon_sym_POUND_POUND] = ACTIONS(303),
    [anon_sym_POUND_SQUOTE] = ACTIONS(303),
    [anon_sym_SQUOTE] = ACTIONS(303),
    [anon_sym_BQUOTE] = ACTIONS(303),
    [anon_sym_COMMA_AT] = ACTIONS(303),
    [anon_sym_COMMA] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(303),
    [anon_sym_LBRACK] = ACTIONS(303),
    [anon_sym_POUND_LBRACK] = ACTIONS(303),
    [anon_sym_POUND_LPAREN] = ACTIONS(303),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(303),
    [sym_comment] = ACTIONS(3),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(311),
    [aux_sym_float_token1] = ACTIONS(309),
    [aux_sym_float_token2] = ACTIONS(309),
    [aux_sym_float_token3] = ACTIONS(309),
    [aux_sym_float_token4] = ACTIONS(309),
    [aux_sym_float_token5] = ACTIONS(309),
    [aux_sym_integer_token1] = ACTIONS(309),
    [aux_sym_integer_token2] = ACTIONS(311),
    [aux_sym_char_token1] = ACTIONS(309),
    [aux_sym_char_token2] = ACTIONS(311),
    [aux_sym_char_token3] = ACTIONS(311),
    [aux_sym_char_token4] = ACTIONS(311),
    [aux_sym_char_token5] = ACTIONS(311),
    [aux_sym_char_token6] = ACTIONS(309),
    [aux_sym_char_token7] = ACTIONS(309),
    [aux_sym_char_token8] = ACTIONS(311),
    [sym_string] = ACTIONS(311),
    [sym_byte_compiled_file_name] = ACTIONS(311),
    [aux_sym_symbol_token1] = ACTIONS(309),
    [aux_sym_symbol_token2] = ACTIONS(309),
    [anon_sym_POUND_POUND] = ACTIONS(311),
    [anon_sym_POUND_SQUOTE] = ACTIONS(311),
    [anon_sym_SQUOTE] = ACTIONS(311),
    [anon_sym_BQUOTE] = ACTIONS(311),
    [anon_sym_COMMA_AT] = ACTIONS(311),
    [anon_sym_COMMA] = ACTIONS(309),
    [anon_sym_LPAREN] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(311),
    [anon_sym_POUND_LBRACK] = ACTIONS(311),
    [anon_sym_POUND_LPAREN] = ACTIONS(311),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(311),
    [sym_comment] = ACTIONS(3),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(307),
    [aux_sym_float_token1] = ACTIONS(305),
    [aux_sym_float_token2] = ACTIONS(305),
    [aux_sym_float_token3] = ACTIONS(305),
    [aux_sym_float_token4] = ACTIONS(305),
    [aux_sym_float_token5] = ACTIONS(305),
    [aux_sym_integer_token1] = ACTIONS(305),
    [aux_sym_integer_token2] = ACTIONS(307),
    [aux_sym_char_token1] = ACTIONS(305),
    [aux_sym_char_token2] = ACTIONS(307),
    [aux_sym_char_token3] = ACTIONS(307),
    [aux_sym_char_token4] = ACTIONS(307),
    [aux_sym_char_token5] = ACTIONS(307),
    [aux_sym_char_token6] = ACTIONS(305),
    [aux_sym_char_token7] = ACTIONS(305),
    [aux_sym_char_token8] = ACTIONS(307),
    [sym_string] = ACTIONS(307),
    [sym_byte_compiled_file_name] = ACTIONS(307),
    [aux_sym_symbol_token1] = ACTIONS(305),
    [aux_sym_symbol_token2] = ACTIONS(305),
    [anon_sym_POUND_POUND] = ACTIONS(307),
    [anon_sym_POUND_SQUOTE] = ACTIONS(307),
    [anon_sym_SQUOTE] = ACTIONS(307),
    [anon_sym_BQUOTE] = ACTIONS(307),
    [anon_sym_COMMA_AT] = ACTIONS(307),
    [anon_sym_COMMA] = ACTIONS(305),
    [anon_sym_LPAREN] = ACTIONS(307),
    [anon_sym_LBRACK] = ACTIONS(307),
    [anon_sym_POUND_LBRACK] = ACTIONS(307),
    [anon_sym_POUND_LPAREN] = ACTIONS(307),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(307),
    [sym_comment] = ACTIONS(3),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [aux_sym_float_token1] = ACTIONS(277),
    [aux_sym_float_token2] = ACTIONS(277),
    [aux_sym_float_token3] = ACTIONS(277),
    [aux_sym_float_token4] = ACTIONS(277),
    [aux_sym_float_token5] = ACTIONS(277),
    [aux_sym_integer_token1] = ACTIONS(277),
    [aux_sym_integer_token2] = ACTIONS(279),
    [aux_sym_char_token1] = ACTIONS(277),
    [aux_sym_char_token2] = ACTIONS(279),
    [aux_sym_char_token3] = ACTIONS(279),
    [aux_sym_char_token4] = ACTIONS(279),
    [aux_sym_char_token5] = ACTIONS(279),
    [aux_sym_char_token6] = ACTIONS(277),
    [aux_sym_char_token7] = ACTIONS(277),
    [aux_sym_char_token8] = ACTIONS(279),
    [sym_string] = ACTIONS(279),
    [sym_byte_compiled_file_name] = ACTIONS(279),
    [aux_sym_symbol_token1] = ACTIONS(277),
    [aux_sym_symbol_token2] = ACTIONS(277),
    [anon_sym_POUND_POUND] = ACTIONS(279),
    [anon_sym_POUND_SQUOTE] = ACTIONS(279),
    [anon_sym_SQUOTE] = ACTIONS(279),
    [anon_sym_BQUOTE] = ACTIONS(279),
    [anon_sym_COMMA_AT] = ACTIONS(279),
    [anon_sym_COMMA] = ACTIONS(277),
    [anon_sym_LPAREN] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(279),
    [anon_sym_POUND_LBRACK] = ACTIONS(279),
    [anon_sym_POUND_LPAREN] = ACTIONS(279),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(279),
    [sym_comment] = ACTIONS(3),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [aux_sym_float_token1] = ACTIONS(249),
    [aux_sym_float_token2] = ACTIONS(249),
    [aux_sym_float_token3] = ACTIONS(249),
    [aux_sym_float_token4] = ACTIONS(249),
    [aux_sym_float_token5] = ACTIONS(249),
    [aux_sym_integer_token1] = ACTIONS(249),
    [aux_sym_integer_token2] = ACTIONS(251),
    [aux_sym_char_token1] = ACTIONS(249),
    [aux_sym_char_token2] = ACTIONS(251),
    [aux_sym_char_token3] = ACTIONS(251),
    [aux_sym_char_token4] = ACTIONS(251),
    [aux_sym_char_token5] = ACTIONS(251),
    [aux_sym_char_token6] = ACTIONS(249),
    [aux_sym_char_token7] = ACTIONS(249),
    [aux_sym_char_token8] = ACTIONS(251),
    [sym_string] = ACTIONS(251),
    [sym_byte_compiled_file_name] = ACTIONS(251),
    [aux_sym_symbol_token1] = ACTIONS(249),
    [aux_sym_symbol_token2] = ACTIONS(249),
    [anon_sym_POUND_POUND] = ACTIONS(251),
    [anon_sym_POUND_SQUOTE] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(251),
    [anon_sym_BQUOTE] = ACTIONS(251),
    [anon_sym_COMMA_AT] = ACTIONS(251),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_LBRACK] = ACTIONS(251),
    [anon_sym_POUND_LBRACK] = ACTIONS(251),
    [anon_sym_POUND_LPAREN] = ACTIONS(251),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(263),
    [aux_sym_float_token1] = ACTIONS(261),
    [aux_sym_float_token2] = ACTIONS(261),
    [aux_sym_float_token3] = ACTIONS(261),
    [aux_sym_float_token4] = ACTIONS(261),
    [aux_sym_float_token5] = ACTIONS(261),
    [aux_sym_integer_token1] = ACTIONS(261),
    [aux_sym_integer_token2] = ACTIONS(263),
    [aux_sym_char_token1] = ACTIONS(261),
    [aux_sym_char_token2] = ACTIONS(263),
    [aux_sym_char_token3] = ACTIONS(263),
    [aux_sym_char_token4] = ACTIONS(263),
    [aux_sym_char_token5] = ACTIONS(263),
    [aux_sym_char_token6] = ACTIONS(261),
    [aux_sym_char_token7] = ACTIONS(261),
    [aux_sym_char_token8] = ACTIONS(263),
    [sym_string] = ACTIONS(263),
    [sym_byte_compiled_file_name] = ACTIONS(263),
    [aux_sym_symbol_token1] = ACTIONS(261),
    [aux_sym_symbol_token2] = ACTIONS(261),
    [anon_sym_POUND_POUND] = ACTIONS(263),
    [anon_sym_POUND_SQUOTE] = ACTIONS(263),
    [anon_sym_SQUOTE] = ACTIONS(263),
    [anon_sym_BQUOTE] = ACTIONS(263),
    [anon_sym_COMMA_AT] = ACTIONS(263),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(263),
    [anon_sym_POUND_LBRACK] = ACTIONS(263),
    [anon_sym_POUND_LPAREN] = ACTIONS(263),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(283),
    [aux_sym_float_token1] = ACTIONS(281),
    [aux_sym_float_token2] = ACTIONS(281),
    [aux_sym_float_token3] = ACTIONS(281),
    [aux_sym_float_token4] = ACTIONS(281),
    [aux_sym_float_token5] = ACTIONS(281),
    [aux_sym_integer_token1] = ACTIONS(281),
    [aux_sym_integer_token2] = ACTIONS(283),
    [aux_sym_char_token1] = ACTIONS(281),
    [aux_sym_char_token2] = ACTIONS(283),
    [aux_sym_char_token3] = ACTIONS(283),
    [aux_sym_char_token4] = ACTIONS(283),
    [aux_sym_char_token5] = ACTIONS(283),
    [aux_sym_char_token6] = ACTIONS(281),
    [aux_sym_char_token7] = ACTIONS(281),
    [aux_sym_char_token8] = ACTIONS(283),
    [sym_string] = ACTIONS(283),
    [sym_byte_compiled_file_name] = ACTIONS(283),
    [aux_sym_symbol_token1] = ACTIONS(281),
    [aux_sym_symbol_token2] = ACTIONS(281),
    [anon_sym_POUND_POUND] = ACTIONS(283),
    [anon_sym_POUND_SQUOTE] = ACTIONS(283),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_BQUOTE] = ACTIONS(283),
    [anon_sym_COMMA_AT] = ACTIONS(283),
    [anon_sym_COMMA] = ACTIONS(281),
    [anon_sym_LPAREN] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(283),
    [anon_sym_POUND_LBRACK] = ACTIONS(283),
    [anon_sym_POUND_LPAREN] = ACTIONS(283),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(283),
    [sym_comment] = ACTIONS(3),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [aux_sym_float_token1] = ACTIONS(257),
    [aux_sym_float_token2] = ACTIONS(257),
    [aux_sym_float_token3] = ACTIONS(257),
    [aux_sym_float_token4] = ACTIONS(257),
    [aux_sym_float_token5] = ACTIONS(257),
    [aux_sym_integer_token1] = ACTIONS(257),
    [aux_sym_integer_token2] = ACTIONS(259),
    [aux_sym_char_token1] = ACTIONS(257),
    [aux_sym_char_token2] = ACTIONS(259),
    [aux_sym_char_token3] = ACTIONS(259),
    [aux_sym_char_token4] = ACTIONS(259),
    [aux_sym_char_token5] = ACTIONS(259),
    [aux_sym_char_token6] = ACTIONS(257),
    [aux_sym_char_token7] = ACTIONS(257),
    [aux_sym_char_token8] = ACTIONS(259),
    [sym_string] = ACTIONS(259),
    [sym_byte_compiled_file_name] = ACTIONS(259),
    [aux_sym_symbol_token1] = ACTIONS(257),
    [aux_sym_symbol_token2] = ACTIONS(257),
    [anon_sym_POUND_POUND] = ACTIONS(259),
    [anon_sym_POUND_SQUOTE] = ACTIONS(259),
    [anon_sym_SQUOTE] = ACTIONS(259),
    [anon_sym_BQUOTE] = ACTIONS(259),
    [anon_sym_COMMA_AT] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(257),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_POUND_LBRACK] = ACTIONS(259),
    [anon_sym_POUND_LPAREN] = ACTIONS(259),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(259),
    [sym_comment] = ACTIONS(3),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(299),
    [aux_sym_float_token1] = ACTIONS(297),
    [aux_sym_float_token2] = ACTIONS(297),
    [aux_sym_float_token3] = ACTIONS(297),
    [aux_sym_float_token4] = ACTIONS(297),
    [aux_sym_float_token5] = ACTIONS(297),
    [aux_sym_integer_token1] = ACTIONS(297),
    [aux_sym_integer_token2] = ACTIONS(299),
    [aux_sym_char_token1] = ACTIONS(297),
    [aux_sym_char_token2] = ACTIONS(299),
    [aux_sym_char_token3] = ACTIONS(299),
    [aux_sym_char_token4] = ACTIONS(299),
    [aux_sym_char_token5] = ACTIONS(299),
    [aux_sym_char_token6] = ACTIONS(297),
    [aux_sym_char_token7] = ACTIONS(297),
    [aux_sym_char_token8] = ACTIONS(299),
    [sym_string] = ACTIONS(299),
    [sym_byte_compiled_file_name] = ACTIONS(299),
    [aux_sym_symbol_token1] = ACTIONS(297),
    [aux_sym_symbol_token2] = ACTIONS(297),
    [anon_sym_POUND_POUND] = ACTIONS(299),
    [anon_sym_POUND_SQUOTE] = ACTIONS(299),
    [anon_sym_SQUOTE] = ACTIONS(299),
    [anon_sym_BQUOTE] = ACTIONS(299),
    [anon_sym_COMMA_AT] = ACTIONS(299),
    [anon_sym_COMMA] = ACTIONS(297),
    [anon_sym_LPAREN] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(299),
    [anon_sym_POUND_LBRACK] = ACTIONS(299),
    [anon_sym_POUND_LPAREN] = ACTIONS(299),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(299),
    [sym_comment] = ACTIONS(3),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(295),
    [aux_sym_float_token1] = ACTIONS(293),
    [aux_sym_float_token2] = ACTIONS(293),
    [aux_sym_float_token3] = ACTIONS(293),
    [aux_sym_float_token4] = ACTIONS(293),
    [aux_sym_float_token5] = ACTIONS(293),
    [aux_sym_integer_token1] = ACTIONS(293),
    [aux_sym_integer_token2] = ACTIONS(295),
    [aux_sym_char_token1] = ACTIONS(293),
    [aux_sym_char_token2] = ACTIONS(295),
    [aux_sym_char_token3] = ACTIONS(295),
    [aux_sym_char_token4] = ACTIONS(295),
    [aux_sym_char_token5] = ACTIONS(295),
    [aux_sym_char_token6] = ACTIONS(293),
    [aux_sym_char_token7] = ACTIONS(293),
    [aux_sym_char_token8] = ACTIONS(295),
    [sym_string] = ACTIONS(295),
    [sym_byte_compiled_file_name] = ACTIONS(295),
    [aux_sym_symbol_token1] = ACTIONS(293),
    [aux_sym_symbol_token2] = ACTIONS(293),
    [anon_sym_POUND_POUND] = ACTIONS(295),
    [anon_sym_POUND_SQUOTE] = ACTIONS(295),
    [anon_sym_SQUOTE] = ACTIONS(295),
    [anon_sym_BQUOTE] = ACTIONS(295),
    [anon_sym_COMMA_AT] = ACTIONS(295),
    [anon_sym_COMMA] = ACTIONS(293),
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(295),
    [anon_sym_POUND_LBRACK] = ACTIONS(295),
    [anon_sym_POUND_LPAREN] = ACTIONS(295),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(295),
    [sym_comment] = ACTIONS(3),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(291),
    [aux_sym_float_token1] = ACTIONS(289),
    [aux_sym_float_token2] = ACTIONS(289),
    [aux_sym_float_token3] = ACTIONS(289),
    [aux_sym_float_token4] = ACTIONS(289),
    [aux_sym_float_token5] = ACTIONS(289),
    [aux_sym_integer_token1] = ACTIONS(289),
    [aux_sym_integer_token2] = ACTIONS(291),
    [aux_sym_char_token1] = ACTIONS(289),
    [aux_sym_char_token2] = ACTIONS(291),
    [aux_sym_char_token3] = ACTIONS(291),
    [aux_sym_char_token4] = ACTIONS(291),
    [aux_sym_char_token5] = ACTIONS(291),
    [aux_sym_char_token6] = ACTIONS(289),
    [aux_sym_char_token7] = ACTIONS(289),
    [aux_sym_char_token8] = ACTIONS(291),
    [sym_string] = ACTIONS(291),
    [sym_byte_compiled_file_name] = ACTIONS(291),
    [aux_sym_symbol_token1] = ACTIONS(289),
    [aux_sym_symbol_token2] = ACTIONS(289),
    [anon_sym_POUND_POUND] = ACTIONS(291),
    [anon_sym_POUND_SQUOTE] = ACTIONS(291),
    [anon_sym_SQUOTE] = ACTIONS(291),
    [anon_sym_BQUOTE] = ACTIONS(291),
    [anon_sym_COMMA_AT] = ACTIONS(291),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_LPAREN] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(291),
    [anon_sym_POUND_LBRACK] = ACTIONS(291),
    [anon_sym_POUND_LPAREN] = ACTIONS(291),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(291),
    [sym_comment] = ACTIONS(3),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(267),
    [aux_sym_float_token1] = ACTIONS(265),
    [aux_sym_float_token2] = ACTIONS(265),
    [aux_sym_float_token3] = ACTIONS(265),
    [aux_sym_float_token4] = ACTIONS(265),
    [aux_sym_float_token5] = ACTIONS(265),
    [aux_sym_integer_token1] = ACTIONS(265),
    [aux_sym_integer_token2] = ACTIONS(267),
    [aux_sym_char_token1] = ACTIONS(265),
    [aux_sym_char_token2] = ACTIONS(267),
    [aux_sym_char_token3] = ACTIONS(267),
    [aux_sym_char_token4] = ACTIONS(267),
    [aux_sym_char_token5] = ACTIONS(267),
    [aux_sym_char_token6] = ACTIONS(265),
    [aux_sym_char_token7] = ACTIONS(265),
    [aux_sym_char_token8] = ACTIONS(267),
    [sym_string] = ACTIONS(267),
    [sym_byte_compiled_file_name] = ACTIONS(267),
    [aux_sym_symbol_token1] = ACTIONS(265),
    [aux_sym_symbol_token2] = ACTIONS(265),
    [anon_sym_POUND_POUND] = ACTIONS(267),
    [anon_sym_POUND_SQUOTE] = ACTIONS(267),
    [anon_sym_SQUOTE] = ACTIONS(267),
    [anon_sym_BQUOTE] = ACTIONS(267),
    [anon_sym_COMMA_AT] = ACTIONS(267),
    [anon_sym_COMMA] = ACTIONS(265),
    [anon_sym_LPAREN] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(267),
    [anon_sym_POUND_LBRACK] = ACTIONS(267),
    [anon_sym_POUND_LPAREN] = ACTIONS(267),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(267),
    [sym_comment] = ACTIONS(3),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(287),
    [aux_sym_float_token1] = ACTIONS(285),
    [aux_sym_float_token2] = ACTIONS(285),
    [aux_sym_float_token3] = ACTIONS(285),
    [aux_sym_float_token4] = ACTIONS(285),
    [aux_sym_float_token5] = ACTIONS(285),
    [aux_sym_integer_token1] = ACTIONS(285),
    [aux_sym_integer_token2] = ACTIONS(287),
    [aux_sym_char_token1] = ACTIONS(285),
    [aux_sym_char_token2] = ACTIONS(287),
    [aux_sym_char_token3] = ACTIONS(287),
    [aux_sym_char_token4] = ACTIONS(287),
    [aux_sym_char_token5] = ACTIONS(287),
    [aux_sym_char_token6] = ACTIONS(285),
    [aux_sym_char_token7] = ACTIONS(285),
    [aux_sym_char_token8] = ACTIONS(287),
    [sym_string] = ACTIONS(287),
    [sym_byte_compiled_file_name] = ACTIONS(287),
    [aux_sym_symbol_token1] = ACTIONS(285),
    [aux_sym_symbol_token2] = ACTIONS(285),
    [anon_sym_POUND_POUND] = ACTIONS(287),
    [anon_sym_POUND_SQUOTE] = ACTIONS(287),
    [anon_sym_SQUOTE] = ACTIONS(287),
    [anon_sym_BQUOTE] = ACTIONS(287),
    [anon_sym_COMMA_AT] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(285),
    [anon_sym_LPAREN] = ACTIONS(287),
    [anon_sym_LBRACK] = ACTIONS(287),
    [anon_sym_POUND_LBRACK] = ACTIONS(287),
    [anon_sym_POUND_LPAREN] = ACTIONS(287),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(287),
    [sym_comment] = ACTIONS(3),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(255),
    [aux_sym_float_token1] = ACTIONS(253),
    [aux_sym_float_token2] = ACTIONS(253),
    [aux_sym_float_token3] = ACTIONS(253),
    [aux_sym_float_token4] = ACTIONS(253),
    [aux_sym_float_token5] = ACTIONS(253),
    [aux_sym_integer_token1] = ACTIONS(253),
    [aux_sym_integer_token2] = ACTIONS(255),
    [aux_sym_char_token1] = ACTIONS(253),
    [aux_sym_char_token2] = ACTIONS(255),
    [aux_sym_char_token3] = ACTIONS(255),
    [aux_sym_char_token4] = ACTIONS(255),
    [aux_sym_char_token5] = ACTIONS(255),
    [aux_sym_char_token6] = ACTIONS(253),
    [aux_sym_char_token7] = ACTIONS(253),
    [aux_sym_char_token8] = ACTIONS(255),
    [sym_string] = ACTIONS(255),
    [sym_byte_compiled_file_name] = ACTIONS(255),
    [aux_sym_symbol_token1] = ACTIONS(253),
    [aux_sym_symbol_token2] = ACTIONS(253),
    [anon_sym_POUND_POUND] = ACTIONS(255),
    [anon_sym_POUND_SQUOTE] = ACTIONS(255),
    [anon_sym_SQUOTE] = ACTIONS(255),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [anon_sym_COMMA_AT] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(255),
    [anon_sym_POUND_LBRACK] = ACTIONS(255),
    [anon_sym_POUND_LPAREN] = ACTIONS(255),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(255),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
  [7] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      sym_string,
  [14] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym_string,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(65)] = 0,
  [SMALL_STATE(66)] = 7,
  [SMALL_STATE(67)] = 14,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splice, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splice, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash_table, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_table, 2),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_text_properties, 4),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_text_properties, 4),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash_table, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_table, 3),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytecode, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytecode, 2),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytecode, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytecode, 3),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_text_properties, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_text_properties, 3),
  [313] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
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
