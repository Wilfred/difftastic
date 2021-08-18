#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 39
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LPAREN = 1,
  anon_sym_defun = 2,
  anon_sym_defsubst = 3,
  anon_sym_RPAREN = 4,
  aux_sym_float_token1 = 5,
  aux_sym_float_token2 = 6,
  aux_sym_float_token3 = 7,
  aux_sym_float_token4 = 8,
  aux_sym_float_token5 = 9,
  aux_sym_integer_token1 = 10,
  aux_sym_integer_token2 = 11,
  aux_sym_char_token1 = 12,
  aux_sym_char_token2 = 13,
  aux_sym_char_token3 = 14,
  aux_sym_char_token4 = 15,
  aux_sym_char_token5 = 16,
  aux_sym_char_token6 = 17,
  aux_sym_char_token7 = 18,
  aux_sym_char_token8 = 19,
  sym_string = 20,
  sym_byte_compiled_file_name = 21,
  aux_sym_symbol_token1 = 22,
  aux_sym_symbol_token2 = 23,
  anon_sym_POUND_POUND = 24,
  anon_sym_POUND_SQUOTE = 25,
  anon_sym_SQUOTE = 26,
  anon_sym_BQUOTE = 27,
  anon_sym_COMMA_AT = 28,
  anon_sym_COMMA = 29,
  sym_dot = 30,
  anon_sym_LBRACK = 31,
  anon_sym_RBRACK = 32,
  anon_sym_POUND_LBRACK = 33,
  anon_sym_POUND_LPAREN = 34,
  anon_sym_POUNDs_LPARENhash_DASHtable = 35,
  sym_comment = 36,
  sym_source_file = 37,
  sym__sexp = 38,
  sym_function_definition = 39,
  sym__atom = 40,
  sym_float = 41,
  sym_integer = 42,
  sym_char = 43,
  sym_symbol = 44,
  sym_quote = 45,
  sym_unquote_splice = 46,
  sym_unquote = 47,
  sym_list = 48,
  sym_vector = 49,
  sym_bytecode = 50,
  sym_string_text_properties = 51,
  sym_hash_table = 52,
  aux_sym_source_file_repeat1 = 53,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_defun] = "defun",
  [anon_sym_defsubst] = "defsubst",
  [anon_sym_RPAREN] = ")",
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_POUND_LBRACK] = "#[",
  [anon_sym_POUND_LPAREN] = "#(",
  [anon_sym_POUNDs_LPARENhash_DASHtable] = "#s(hash-table",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__sexp] = "_sexp",
  [sym_function_definition] = "function_definition",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_defun] = anon_sym_defun,
  [anon_sym_defsubst] = anon_sym_defsubst,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_POUND_LBRACK] = anon_sym_POUND_LBRACK,
  [anon_sym_POUND_LPAREN] = anon_sym_POUND_LPAREN,
  [anon_sym_POUNDs_LPARENhash_DASHtable] = anon_sym_POUNDs_LPARENhash_DASHtable,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__sexp] = sym__sexp,
  [sym_function_definition] = sym_function_definition,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defsubst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [sym_function_definition] = {
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
      if (eof) ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(140);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == ',') ADVANCE(143);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '0') ADVANCE(70);
      if (lookahead == '1') ADVANCE(76);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == '[') ADVANCE(145);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == ']') ADVANCE(146);
      if (lookahead == '`') ADVANCE(141);
      if (lookahead == 'd') ADVANCE(125);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(52);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(138);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '\'') ADVANCE(139);
      if (lookahead == '(') ADVANCE(148);
      if (lookahead == '[') ADVANCE(147);
      if (lookahead == 's') ADVANCE(4);
      if (lookahead == 'b' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == '+') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == '+') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == 'F') ADVANCE(66);
      END_STATE();
    case 14:
      if (lookahead == 'I') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'N') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'N') ADVANCE(68);
      END_STATE();
    case 17:
      if (lookahead == 'N') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 19:
      if (lookahead == '\\') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 20:
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 26:
      if (lookahead == 'h') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(7);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 33:
      if (lookahead == '}') ADVANCE(91);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 35:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 36:
      if (lookahead == '\'' ||
          lookahead == ',' ||
          lookahead == '`') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(140);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == ',') ADVANCE(143);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '.') ADVANCE(134);
      if (lookahead == '0') ADVANCE(70);
      if (lookahead == '1') ADVANCE(76);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == '[') ADVANCE(145);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '`') ADVANCE(141);
      if (lookahead == 'd') ADVANCE(125);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(137);
      END_STATE();
    case 38:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '?' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`') ADVANCE(137);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 50:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 51:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(33);
      END_STATE();
    case 52:
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 53:
      if (eof) ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(140);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == ',') ADVANCE(143);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '.') ADVANCE(134);
      if (lookahead == '0') ADVANCE(70);
      if (lookahead == '1') ADVANCE(76);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == '[') ADVANCE(145);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == ']') ADVANCE(146);
      if (lookahead == '`') ADVANCE(141);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_defun);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_defsubst);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_float_token3);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_float_token4);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_float_token4);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_float_token5);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_float_token5);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (aux_sym_float_token5_character_set_1(lookahead)) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(114);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '0') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '0') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (aux_sym_float_token5_character_set_1(lookahead)) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(116);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '0') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(50);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(50);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == 'M') ADVANCE(82);
      if (lookahead == 'N') ADVANCE(86);
      if (lookahead == 'U') ADVANCE(88);
      if (lookahead == '^') ADVANCE(85);
      if (lookahead == 'u') ADVANCE(90);
      if (lookahead == 'x') ADVANCE(89);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'H' ||
          lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '\\') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '{') ADVANCE(51);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(96);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_char_token2);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_char_token3);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_char_token4);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_char_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_char_token6);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_char_token6);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(95);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_char_token7);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_char_token7);
      if (lookahead == ';') ADVANCE(97);
      if (lookahead == '^') ADVANCE(19);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'H' ||
          lookahead == 'M' ||
          lookahead == 'S' ||
          lookahead == 's') ADVANCE(8);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_char_token7);
      if (lookahead == ';') ADVANCE(97);
      if (lookahead == '^') ADVANCE(19);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'H' ||
          lookahead == 'M' ||
          lookahead == 'S' ||
          lookahead == 's') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_char_token8);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_char_token8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_char_token8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_byte_compiled_file_name);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '.') ADVANCE(134);
      if (lookahead == '0') ADVANCE(70);
      if (lookahead == '1') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(50);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '.') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '0') ADVANCE(132);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(50);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '0') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(50);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'F') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'I') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'N') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'N') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'N') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(122);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'b') ADVANCE(129);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(126);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(128);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(56);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == 'u') ADVANCE(127);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 's') ADVANCE(130);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(57);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(124);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(142);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_dot);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACK);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_POUNDs_LPARENhash_DASHtable);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead != 0) ADVANCE(151);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 53},
  [2] = {.lex_state = 37},
  [3] = {.lex_state = 53},
  [4] = {.lex_state = 53},
  [5] = {.lex_state = 53},
  [6] = {.lex_state = 53},
  [7] = {.lex_state = 53},
  [8] = {.lex_state = 53},
  [9] = {.lex_state = 53},
  [10] = {.lex_state = 53},
  [11] = {.lex_state = 53},
  [12] = {.lex_state = 53},
  [13] = {.lex_state = 53},
  [14] = {.lex_state = 53},
  [15] = {.lex_state = 53},
  [16] = {.lex_state = 53},
  [17] = {.lex_state = 53},
  [18] = {.lex_state = 53},
  [19] = {.lex_state = 53},
  [20] = {.lex_state = 53},
  [21] = {.lex_state = 53},
  [22] = {.lex_state = 53},
  [23] = {.lex_state = 53},
  [24] = {.lex_state = 53},
  [25] = {.lex_state = 53},
  [26] = {.lex_state = 53},
  [27] = {.lex_state = 53},
  [28] = {.lex_state = 53},
  [29] = {.lex_state = 53},
  [30] = {.lex_state = 53},
  [31] = {.lex_state = 53},
  [32] = {.lex_state = 53},
  [33] = {.lex_state = 53},
  [34] = {.lex_state = 53},
  [35] = {.lex_state = 53},
  [36] = {.lex_state = 53},
  [37] = {.lex_state = 53},
  [38] = {.lex_state = 53},
  [39] = {.lex_state = 38},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_defun] = ACTIONS(1),
    [anon_sym_defsubst] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_POUND_LBRACK] = ACTIONS(1),
    [anon_sym_POUND_LPAREN] = ACTIONS(1),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(42),
    [sym__sexp] = STATE(12),
    [sym_function_definition] = STATE(12),
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
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [sym_byte_compiled_file_name] = ACTIONS(19),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__sexp] = STATE(15),
    [sym_function_definition] = STATE(15),
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
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_defun] = ACTIONS(39),
    [anon_sym_defsubst] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(41),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(43),
    [sym_byte_compiled_file_name] = ACTIONS(43),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__sexp] = STATE(3),
    [sym_function_definition] = STATE(3),
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
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(45),
    [aux_sym_float_token1] = ACTIONS(50),
    [aux_sym_float_token2] = ACTIONS(50),
    [aux_sym_float_token3] = ACTIONS(50),
    [aux_sym_float_token4] = ACTIONS(50),
    [aux_sym_float_token5] = ACTIONS(50),
    [aux_sym_integer_token1] = ACTIONS(53),
    [aux_sym_integer_token2] = ACTIONS(56),
    [aux_sym_char_token1] = ACTIONS(59),
    [aux_sym_char_token2] = ACTIONS(62),
    [aux_sym_char_token3] = ACTIONS(62),
    [aux_sym_char_token4] = ACTIONS(62),
    [aux_sym_char_token5] = ACTIONS(62),
    [aux_sym_char_token6] = ACTIONS(59),
    [aux_sym_char_token7] = ACTIONS(59),
    [aux_sym_char_token8] = ACTIONS(62),
    [sym_string] = ACTIONS(65),
    [sym_byte_compiled_file_name] = ACTIONS(65),
    [aux_sym_symbol_token1] = ACTIONS(68),
    [aux_sym_symbol_token2] = ACTIONS(68),
    [anon_sym_POUND_POUND] = ACTIONS(71),
    [anon_sym_POUND_SQUOTE] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(74),
    [anon_sym_BQUOTE] = ACTIONS(74),
    [anon_sym_COMMA_AT] = ACTIONS(77),
    [anon_sym_COMMA] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_RBRACK] = ACTIONS(45),
    [anon_sym_POUND_LBRACK] = ACTIONS(86),
    [anon_sym_POUND_LPAREN] = ACTIONS(89),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(92),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__sexp] = STATE(3),
    [sym_function_definition] = STATE(3),
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
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(95),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(97),
    [sym_byte_compiled_file_name] = ACTIONS(97),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__sexp] = STATE(4),
    [sym_function_definition] = STATE(4),
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
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(99),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(101),
    [sym_byte_compiled_file_name] = ACTIONS(101),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__sexp] = STATE(15),
    [sym_function_definition] = STATE(15),
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
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(41),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(43),
    [sym_byte_compiled_file_name] = ACTIONS(43),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__sexp] = STATE(3),
    [sym_function_definition] = STATE(3),
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
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(103),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(97),
    [sym_byte_compiled_file_name] = ACTIONS(97),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__sexp] = STATE(16),
    [sym_function_definition] = STATE(16),
    [sym__atom] = STATE(16),
    [sym_float] = STATE(16),
    [sym_integer] = STATE(16),
    [sym_char] = STATE(16),
    [sym_symbol] = STATE(16),
    [sym_quote] = STATE(16),
    [sym_unquote_splice] = STATE(16),
    [sym_unquote] = STATE(16),
    [sym_list] = STATE(16),
    [sym_vector] = STATE(16),
    [sym_bytecode] = STATE(16),
    [sym_string_text_properties] = STATE(16),
    [sym_hash_table] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(105),
    [sym_byte_compiled_file_name] = ACTIONS(105),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__sexp] = STATE(14),
    [sym_function_definition] = STATE(14),
    [sym__atom] = STATE(14),
    [sym_float] = STATE(14),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_symbol] = STATE(14),
    [sym_quote] = STATE(14),
    [sym_unquote_splice] = STATE(14),
    [sym_unquote] = STATE(14),
    [sym_list] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_bytecode] = STATE(14),
    [sym_string_text_properties] = STATE(14),
    [sym_hash_table] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(109),
    [sym_byte_compiled_file_name] = ACTIONS(109),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__sexp] = STATE(11),
    [sym_function_definition] = STATE(11),
    [sym__atom] = STATE(11),
    [sym_float] = STATE(11),
    [sym_integer] = STATE(11),
    [sym_char] = STATE(11),
    [sym_symbol] = STATE(11),
    [sym_quote] = STATE(11),
    [sym_unquote_splice] = STATE(11),
    [sym_unquote] = STATE(11),
    [sym_list] = STATE(11),
    [sym_vector] = STATE(11),
    [sym_bytecode] = STATE(11),
    [sym_string_text_properties] = STATE(11),
    [sym_hash_table] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(113),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(115),
    [sym_byte_compiled_file_name] = ACTIONS(115),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__sexp] = STATE(3),
    [sym_function_definition] = STATE(3),
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
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(117),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(97),
    [sym_byte_compiled_file_name] = ACTIONS(97),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym__sexp] = STATE(3),
    [sym_function_definition] = STATE(3),
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
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(97),
    [sym_byte_compiled_file_name] = ACTIONS(97),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym__sexp] = STATE(7),
    [sym_function_definition] = STATE(7),
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
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(121),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(123),
    [sym_byte_compiled_file_name] = ACTIONS(123),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym__sexp] = STATE(3),
    [sym_function_definition] = STATE(3),
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
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(97),
    [sym_byte_compiled_file_name] = ACTIONS(97),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(125),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym__sexp] = STATE(3),
    [sym_function_definition] = STATE(3),
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
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(127),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(97),
    [sym_byte_compiled_file_name] = ACTIONS(97),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym__sexp] = STATE(3),
    [sym_function_definition] = STATE(3),
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
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(97),
    [sym_byte_compiled_file_name] = ACTIONS(97),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(129),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym__sexp] = STATE(25),
    [sym_function_definition] = STATE(25),
    [sym__atom] = STATE(25),
    [sym_float] = STATE(25),
    [sym_integer] = STATE(25),
    [sym_char] = STATE(25),
    [sym_symbol] = STATE(25),
    [sym_quote] = STATE(25),
    [sym_unquote_splice] = STATE(25),
    [sym_unquote] = STATE(25),
    [sym_list] = STATE(25),
    [sym_vector] = STATE(25),
    [sym_bytecode] = STATE(25),
    [sym_string_text_properties] = STATE(25),
    [sym_hash_table] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(131),
    [sym_byte_compiled_file_name] = ACTIONS(131),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym__sexp] = STATE(20),
    [sym_function_definition] = STATE(20),
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
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(133),
    [sym_byte_compiled_file_name] = ACTIONS(133),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym__sexp] = STATE(31),
    [sym_function_definition] = STATE(31),
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
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(135),
    [sym_byte_compiled_file_name] = ACTIONS(135),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(137),
    [aux_sym_float_token1] = ACTIONS(139),
    [aux_sym_float_token2] = ACTIONS(139),
    [aux_sym_float_token3] = ACTIONS(139),
    [aux_sym_float_token4] = ACTIONS(139),
    [aux_sym_float_token5] = ACTIONS(139),
    [aux_sym_integer_token1] = ACTIONS(139),
    [aux_sym_integer_token2] = ACTIONS(137),
    [aux_sym_char_token1] = ACTIONS(139),
    [aux_sym_char_token2] = ACTIONS(137),
    [aux_sym_char_token3] = ACTIONS(137),
    [aux_sym_char_token4] = ACTIONS(137),
    [aux_sym_char_token5] = ACTIONS(137),
    [aux_sym_char_token6] = ACTIONS(139),
    [aux_sym_char_token7] = ACTIONS(139),
    [aux_sym_char_token8] = ACTIONS(137),
    [sym_string] = ACTIONS(137),
    [sym_byte_compiled_file_name] = ACTIONS(137),
    [aux_sym_symbol_token1] = ACTIONS(139),
    [aux_sym_symbol_token2] = ACTIONS(139),
    [anon_sym_POUND_POUND] = ACTIONS(137),
    [anon_sym_POUND_SQUOTE] = ACTIONS(137),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_BQUOTE] = ACTIONS(137),
    [anon_sym_COMMA_AT] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(137),
    [anon_sym_POUND_LBRACK] = ACTIONS(137),
    [anon_sym_POUND_LPAREN] = ACTIONS(137),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(141),
    [aux_sym_float_token1] = ACTIONS(143),
    [aux_sym_float_token2] = ACTIONS(143),
    [aux_sym_float_token3] = ACTIONS(143),
    [aux_sym_float_token4] = ACTIONS(143),
    [aux_sym_float_token5] = ACTIONS(143),
    [aux_sym_integer_token1] = ACTIONS(143),
    [aux_sym_integer_token2] = ACTIONS(141),
    [aux_sym_char_token1] = ACTIONS(143),
    [aux_sym_char_token2] = ACTIONS(141),
    [aux_sym_char_token3] = ACTIONS(141),
    [aux_sym_char_token4] = ACTIONS(141),
    [aux_sym_char_token5] = ACTIONS(141),
    [aux_sym_char_token6] = ACTIONS(143),
    [aux_sym_char_token7] = ACTIONS(143),
    [aux_sym_char_token8] = ACTIONS(141),
    [sym_string] = ACTIONS(141),
    [sym_byte_compiled_file_name] = ACTIONS(141),
    [aux_sym_symbol_token1] = ACTIONS(143),
    [aux_sym_symbol_token2] = ACTIONS(143),
    [anon_sym_POUND_POUND] = ACTIONS(141),
    [anon_sym_POUND_SQUOTE] = ACTIONS(141),
    [anon_sym_SQUOTE] = ACTIONS(141),
    [anon_sym_BQUOTE] = ACTIONS(141),
    [anon_sym_COMMA_AT] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(141),
    [anon_sym_POUND_LBRACK] = ACTIONS(141),
    [anon_sym_POUND_LPAREN] = ACTIONS(141),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_RPAREN] = ACTIONS(145),
    [aux_sym_float_token1] = ACTIONS(147),
    [aux_sym_float_token2] = ACTIONS(147),
    [aux_sym_float_token3] = ACTIONS(147),
    [aux_sym_float_token4] = ACTIONS(147),
    [aux_sym_float_token5] = ACTIONS(147),
    [aux_sym_integer_token1] = ACTIONS(147),
    [aux_sym_integer_token2] = ACTIONS(145),
    [aux_sym_char_token1] = ACTIONS(147),
    [aux_sym_char_token2] = ACTIONS(145),
    [aux_sym_char_token3] = ACTIONS(145),
    [aux_sym_char_token4] = ACTIONS(145),
    [aux_sym_char_token5] = ACTIONS(145),
    [aux_sym_char_token6] = ACTIONS(147),
    [aux_sym_char_token7] = ACTIONS(147),
    [aux_sym_char_token8] = ACTIONS(145),
    [sym_string] = ACTIONS(145),
    [sym_byte_compiled_file_name] = ACTIONS(145),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [aux_sym_symbol_token2] = ACTIONS(147),
    [anon_sym_POUND_POUND] = ACTIONS(145),
    [anon_sym_POUND_SQUOTE] = ACTIONS(145),
    [anon_sym_SQUOTE] = ACTIONS(145),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_COMMA_AT] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym_RBRACK] = ACTIONS(145),
    [anon_sym_POUND_LBRACK] = ACTIONS(145),
    [anon_sym_POUND_LPAREN] = ACTIONS(145),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(149),
    [aux_sym_float_token1] = ACTIONS(151),
    [aux_sym_float_token2] = ACTIONS(151),
    [aux_sym_float_token3] = ACTIONS(151),
    [aux_sym_float_token4] = ACTIONS(151),
    [aux_sym_float_token5] = ACTIONS(151),
    [aux_sym_integer_token1] = ACTIONS(151),
    [aux_sym_integer_token2] = ACTIONS(149),
    [aux_sym_char_token1] = ACTIONS(151),
    [aux_sym_char_token2] = ACTIONS(149),
    [aux_sym_char_token3] = ACTIONS(149),
    [aux_sym_char_token4] = ACTIONS(149),
    [aux_sym_char_token5] = ACTIONS(149),
    [aux_sym_char_token6] = ACTIONS(151),
    [aux_sym_char_token7] = ACTIONS(151),
    [aux_sym_char_token8] = ACTIONS(149),
    [sym_string] = ACTIONS(149),
    [sym_byte_compiled_file_name] = ACTIONS(149),
    [aux_sym_symbol_token1] = ACTIONS(151),
    [aux_sym_symbol_token2] = ACTIONS(151),
    [anon_sym_POUND_POUND] = ACTIONS(149),
    [anon_sym_POUND_SQUOTE] = ACTIONS(149),
    [anon_sym_SQUOTE] = ACTIONS(149),
    [anon_sym_BQUOTE] = ACTIONS(149),
    [anon_sym_COMMA_AT] = ACTIONS(149),
    [anon_sym_COMMA] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_RBRACK] = ACTIONS(149),
    [anon_sym_POUND_LBRACK] = ACTIONS(149),
    [anon_sym_POUND_LPAREN] = ACTIONS(149),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_RPAREN] = ACTIONS(153),
    [aux_sym_float_token1] = ACTIONS(155),
    [aux_sym_float_token2] = ACTIONS(155),
    [aux_sym_float_token3] = ACTIONS(155),
    [aux_sym_float_token4] = ACTIONS(155),
    [aux_sym_float_token5] = ACTIONS(155),
    [aux_sym_integer_token1] = ACTIONS(155),
    [aux_sym_integer_token2] = ACTIONS(153),
    [aux_sym_char_token1] = ACTIONS(155),
    [aux_sym_char_token2] = ACTIONS(153),
    [aux_sym_char_token3] = ACTIONS(153),
    [aux_sym_char_token4] = ACTIONS(153),
    [aux_sym_char_token5] = ACTIONS(153),
    [aux_sym_char_token6] = ACTIONS(155),
    [aux_sym_char_token7] = ACTIONS(155),
    [aux_sym_char_token8] = ACTIONS(153),
    [sym_string] = ACTIONS(153),
    [sym_byte_compiled_file_name] = ACTIONS(153),
    [aux_sym_symbol_token1] = ACTIONS(155),
    [aux_sym_symbol_token2] = ACTIONS(155),
    [anon_sym_POUND_POUND] = ACTIONS(153),
    [anon_sym_POUND_SQUOTE] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(153),
    [anon_sym_COMMA_AT] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(153),
    [anon_sym_POUND_LBRACK] = ACTIONS(153),
    [anon_sym_POUND_LPAREN] = ACTIONS(153),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(157),
    [anon_sym_RPAREN] = ACTIONS(157),
    [aux_sym_float_token1] = ACTIONS(159),
    [aux_sym_float_token2] = ACTIONS(159),
    [aux_sym_float_token3] = ACTIONS(159),
    [aux_sym_float_token4] = ACTIONS(159),
    [aux_sym_float_token5] = ACTIONS(159),
    [aux_sym_integer_token1] = ACTIONS(159),
    [aux_sym_integer_token2] = ACTIONS(157),
    [aux_sym_char_token1] = ACTIONS(159),
    [aux_sym_char_token2] = ACTIONS(157),
    [aux_sym_char_token3] = ACTIONS(157),
    [aux_sym_char_token4] = ACTIONS(157),
    [aux_sym_char_token5] = ACTIONS(157),
    [aux_sym_char_token6] = ACTIONS(159),
    [aux_sym_char_token7] = ACTIONS(159),
    [aux_sym_char_token8] = ACTIONS(157),
    [sym_string] = ACTIONS(157),
    [sym_byte_compiled_file_name] = ACTIONS(157),
    [aux_sym_symbol_token1] = ACTIONS(159),
    [aux_sym_symbol_token2] = ACTIONS(159),
    [anon_sym_POUND_POUND] = ACTIONS(157),
    [anon_sym_POUND_SQUOTE] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [anon_sym_BQUOTE] = ACTIONS(157),
    [anon_sym_COMMA_AT] = ACTIONS(157),
    [anon_sym_COMMA] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(157),
    [anon_sym_POUND_LBRACK] = ACTIONS(157),
    [anon_sym_POUND_LPAREN] = ACTIONS(157),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(157),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_RPAREN] = ACTIONS(161),
    [aux_sym_float_token1] = ACTIONS(163),
    [aux_sym_float_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(163),
    [aux_sym_float_token4] = ACTIONS(163),
    [aux_sym_float_token5] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(163),
    [aux_sym_integer_token2] = ACTIONS(161),
    [aux_sym_char_token1] = ACTIONS(163),
    [aux_sym_char_token2] = ACTIONS(161),
    [aux_sym_char_token3] = ACTIONS(161),
    [aux_sym_char_token4] = ACTIONS(161),
    [aux_sym_char_token5] = ACTIONS(161),
    [aux_sym_char_token6] = ACTIONS(163),
    [aux_sym_char_token7] = ACTIONS(163),
    [aux_sym_char_token8] = ACTIONS(161),
    [sym_string] = ACTIONS(161),
    [sym_byte_compiled_file_name] = ACTIONS(161),
    [aux_sym_symbol_token1] = ACTIONS(163),
    [aux_sym_symbol_token2] = ACTIONS(163),
    [anon_sym_POUND_POUND] = ACTIONS(161),
    [anon_sym_POUND_SQUOTE] = ACTIONS(161),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_BQUOTE] = ACTIONS(161),
    [anon_sym_COMMA_AT] = ACTIONS(161),
    [anon_sym_COMMA] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_RBRACK] = ACTIONS(161),
    [anon_sym_POUND_LBRACK] = ACTIONS(161),
    [anon_sym_POUND_LPAREN] = ACTIONS(161),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(165),
    [aux_sym_float_token1] = ACTIONS(167),
    [aux_sym_float_token2] = ACTIONS(167),
    [aux_sym_float_token3] = ACTIONS(167),
    [aux_sym_float_token4] = ACTIONS(167),
    [aux_sym_float_token5] = ACTIONS(167),
    [aux_sym_integer_token1] = ACTIONS(167),
    [aux_sym_integer_token2] = ACTIONS(165),
    [aux_sym_char_token1] = ACTIONS(167),
    [aux_sym_char_token2] = ACTIONS(165),
    [aux_sym_char_token3] = ACTIONS(165),
    [aux_sym_char_token4] = ACTIONS(165),
    [aux_sym_char_token5] = ACTIONS(165),
    [aux_sym_char_token6] = ACTIONS(167),
    [aux_sym_char_token7] = ACTIONS(167),
    [aux_sym_char_token8] = ACTIONS(165),
    [sym_string] = ACTIONS(165),
    [sym_byte_compiled_file_name] = ACTIONS(165),
    [aux_sym_symbol_token1] = ACTIONS(167),
    [aux_sym_symbol_token2] = ACTIONS(167),
    [anon_sym_POUND_POUND] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA_AT] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_RBRACK] = ACTIONS(165),
    [anon_sym_POUND_LBRACK] = ACTIONS(165),
    [anon_sym_POUND_LPAREN] = ACTIONS(165),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(169),
    [aux_sym_float_token1] = ACTIONS(171),
    [aux_sym_float_token2] = ACTIONS(171),
    [aux_sym_float_token3] = ACTIONS(171),
    [aux_sym_float_token4] = ACTIONS(171),
    [aux_sym_float_token5] = ACTIONS(171),
    [aux_sym_integer_token1] = ACTIONS(171),
    [aux_sym_integer_token2] = ACTIONS(169),
    [aux_sym_char_token1] = ACTIONS(171),
    [aux_sym_char_token2] = ACTIONS(169),
    [aux_sym_char_token3] = ACTIONS(169),
    [aux_sym_char_token4] = ACTIONS(169),
    [aux_sym_char_token5] = ACTIONS(169),
    [aux_sym_char_token6] = ACTIONS(171),
    [aux_sym_char_token7] = ACTIONS(171),
    [aux_sym_char_token8] = ACTIONS(169),
    [sym_string] = ACTIONS(169),
    [sym_byte_compiled_file_name] = ACTIONS(169),
    [aux_sym_symbol_token1] = ACTIONS(171),
    [aux_sym_symbol_token2] = ACTIONS(171),
    [anon_sym_POUND_POUND] = ACTIONS(169),
    [anon_sym_POUND_SQUOTE] = ACTIONS(169),
    [anon_sym_SQUOTE] = ACTIONS(169),
    [anon_sym_BQUOTE] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(169),
    [anon_sym_POUND_LBRACK] = ACTIONS(169),
    [anon_sym_POUND_LPAREN] = ACTIONS(169),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(169),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [aux_sym_float_token1] = ACTIONS(175),
    [aux_sym_float_token2] = ACTIONS(175),
    [aux_sym_float_token3] = ACTIONS(175),
    [aux_sym_float_token4] = ACTIONS(175),
    [aux_sym_float_token5] = ACTIONS(175),
    [aux_sym_integer_token1] = ACTIONS(175),
    [aux_sym_integer_token2] = ACTIONS(173),
    [aux_sym_char_token1] = ACTIONS(175),
    [aux_sym_char_token2] = ACTIONS(173),
    [aux_sym_char_token3] = ACTIONS(173),
    [aux_sym_char_token4] = ACTIONS(173),
    [aux_sym_char_token5] = ACTIONS(173),
    [aux_sym_char_token6] = ACTIONS(175),
    [aux_sym_char_token7] = ACTIONS(175),
    [aux_sym_char_token8] = ACTIONS(173),
    [sym_string] = ACTIONS(173),
    [sym_byte_compiled_file_name] = ACTIONS(173),
    [aux_sym_symbol_token1] = ACTIONS(175),
    [aux_sym_symbol_token2] = ACTIONS(175),
    [anon_sym_POUND_POUND] = ACTIONS(173),
    [anon_sym_POUND_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_COMMA_AT] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_RBRACK] = ACTIONS(173),
    [anon_sym_POUND_LBRACK] = ACTIONS(173),
    [anon_sym_POUND_LPAREN] = ACTIONS(173),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(173),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [aux_sym_float_token1] = ACTIONS(179),
    [aux_sym_float_token2] = ACTIONS(179),
    [aux_sym_float_token3] = ACTIONS(179),
    [aux_sym_float_token4] = ACTIONS(179),
    [aux_sym_float_token5] = ACTIONS(179),
    [aux_sym_integer_token1] = ACTIONS(179),
    [aux_sym_integer_token2] = ACTIONS(177),
    [aux_sym_char_token1] = ACTIONS(179),
    [aux_sym_char_token2] = ACTIONS(177),
    [aux_sym_char_token3] = ACTIONS(177),
    [aux_sym_char_token4] = ACTIONS(177),
    [aux_sym_char_token5] = ACTIONS(177),
    [aux_sym_char_token6] = ACTIONS(179),
    [aux_sym_char_token7] = ACTIONS(179),
    [aux_sym_char_token8] = ACTIONS(177),
    [sym_string] = ACTIONS(177),
    [sym_byte_compiled_file_name] = ACTIONS(177),
    [aux_sym_symbol_token1] = ACTIONS(179),
    [aux_sym_symbol_token2] = ACTIONS(179),
    [anon_sym_POUND_POUND] = ACTIONS(177),
    [anon_sym_POUND_SQUOTE] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [anon_sym_COMMA_AT] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(177),
    [anon_sym_POUND_LBRACK] = ACTIONS(177),
    [anon_sym_POUND_LPAREN] = ACTIONS(177),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(181),
    [aux_sym_float_token1] = ACTIONS(183),
    [aux_sym_float_token2] = ACTIONS(183),
    [aux_sym_float_token3] = ACTIONS(183),
    [aux_sym_float_token4] = ACTIONS(183),
    [aux_sym_float_token5] = ACTIONS(183),
    [aux_sym_integer_token1] = ACTIONS(183),
    [aux_sym_integer_token2] = ACTIONS(181),
    [aux_sym_char_token1] = ACTIONS(183),
    [aux_sym_char_token2] = ACTIONS(181),
    [aux_sym_char_token3] = ACTIONS(181),
    [aux_sym_char_token4] = ACTIONS(181),
    [aux_sym_char_token5] = ACTIONS(181),
    [aux_sym_char_token6] = ACTIONS(183),
    [aux_sym_char_token7] = ACTIONS(183),
    [aux_sym_char_token8] = ACTIONS(181),
    [sym_string] = ACTIONS(181),
    [sym_byte_compiled_file_name] = ACTIONS(181),
    [aux_sym_symbol_token1] = ACTIONS(183),
    [aux_sym_symbol_token2] = ACTIONS(183),
    [anon_sym_POUND_POUND] = ACTIONS(181),
    [anon_sym_POUND_SQUOTE] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(181),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [anon_sym_COMMA_AT] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_RBRACK] = ACTIONS(181),
    [anon_sym_POUND_LBRACK] = ACTIONS(181),
    [anon_sym_POUND_LPAREN] = ACTIONS(181),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
    [aux_sym_float_token1] = ACTIONS(187),
    [aux_sym_float_token2] = ACTIONS(187),
    [aux_sym_float_token3] = ACTIONS(187),
    [aux_sym_float_token4] = ACTIONS(187),
    [aux_sym_float_token5] = ACTIONS(187),
    [aux_sym_integer_token1] = ACTIONS(187),
    [aux_sym_integer_token2] = ACTIONS(185),
    [aux_sym_char_token1] = ACTIONS(187),
    [aux_sym_char_token2] = ACTIONS(185),
    [aux_sym_char_token3] = ACTIONS(185),
    [aux_sym_char_token4] = ACTIONS(185),
    [aux_sym_char_token5] = ACTIONS(185),
    [aux_sym_char_token6] = ACTIONS(187),
    [aux_sym_char_token7] = ACTIONS(187),
    [aux_sym_char_token8] = ACTIONS(185),
    [sym_string] = ACTIONS(185),
    [sym_byte_compiled_file_name] = ACTIONS(185),
    [aux_sym_symbol_token1] = ACTIONS(187),
    [aux_sym_symbol_token2] = ACTIONS(187),
    [anon_sym_POUND_POUND] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(185),
    [anon_sym_SQUOTE] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_COMMA_AT] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_RBRACK] = ACTIONS(185),
    [anon_sym_POUND_LBRACK] = ACTIONS(185),
    [anon_sym_POUND_LPAREN] = ACTIONS(185),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(185),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(189),
    [aux_sym_float_token1] = ACTIONS(191),
    [aux_sym_float_token2] = ACTIONS(191),
    [aux_sym_float_token3] = ACTIONS(191),
    [aux_sym_float_token4] = ACTIONS(191),
    [aux_sym_float_token5] = ACTIONS(191),
    [aux_sym_integer_token1] = ACTIONS(191),
    [aux_sym_integer_token2] = ACTIONS(189),
    [aux_sym_char_token1] = ACTIONS(191),
    [aux_sym_char_token2] = ACTIONS(189),
    [aux_sym_char_token3] = ACTIONS(189),
    [aux_sym_char_token4] = ACTIONS(189),
    [aux_sym_char_token5] = ACTIONS(189),
    [aux_sym_char_token6] = ACTIONS(191),
    [aux_sym_char_token7] = ACTIONS(191),
    [aux_sym_char_token8] = ACTIONS(189),
    [sym_string] = ACTIONS(189),
    [sym_byte_compiled_file_name] = ACTIONS(189),
    [aux_sym_symbol_token1] = ACTIONS(191),
    [aux_sym_symbol_token2] = ACTIONS(191),
    [anon_sym_POUND_POUND] = ACTIONS(189),
    [anon_sym_POUND_SQUOTE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(189),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA_AT] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(189),
    [anon_sym_RBRACK] = ACTIONS(189),
    [anon_sym_POUND_LBRACK] = ACTIONS(189),
    [anon_sym_POUND_LPAREN] = ACTIONS(189),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(193),
    [aux_sym_float_token1] = ACTIONS(195),
    [aux_sym_float_token2] = ACTIONS(195),
    [aux_sym_float_token3] = ACTIONS(195),
    [aux_sym_float_token4] = ACTIONS(195),
    [aux_sym_float_token5] = ACTIONS(195),
    [aux_sym_integer_token1] = ACTIONS(195),
    [aux_sym_integer_token2] = ACTIONS(193),
    [aux_sym_char_token1] = ACTIONS(195),
    [aux_sym_char_token2] = ACTIONS(193),
    [aux_sym_char_token3] = ACTIONS(193),
    [aux_sym_char_token4] = ACTIONS(193),
    [aux_sym_char_token5] = ACTIONS(193),
    [aux_sym_char_token6] = ACTIONS(195),
    [aux_sym_char_token7] = ACTIONS(195),
    [aux_sym_char_token8] = ACTIONS(193),
    [sym_string] = ACTIONS(193),
    [sym_byte_compiled_file_name] = ACTIONS(193),
    [aux_sym_symbol_token1] = ACTIONS(195),
    [aux_sym_symbol_token2] = ACTIONS(195),
    [anon_sym_POUND_POUND] = ACTIONS(193),
    [anon_sym_POUND_SQUOTE] = ACTIONS(193),
    [anon_sym_SQUOTE] = ACTIONS(193),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(193),
    [anon_sym_RBRACK] = ACTIONS(193),
    [anon_sym_POUND_LBRACK] = ACTIONS(193),
    [anon_sym_POUND_LPAREN] = ACTIONS(193),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(193),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(197),
    [aux_sym_float_token1] = ACTIONS(199),
    [aux_sym_float_token2] = ACTIONS(199),
    [aux_sym_float_token3] = ACTIONS(199),
    [aux_sym_float_token4] = ACTIONS(199),
    [aux_sym_float_token5] = ACTIONS(199),
    [aux_sym_integer_token1] = ACTIONS(199),
    [aux_sym_integer_token2] = ACTIONS(197),
    [aux_sym_char_token1] = ACTIONS(199),
    [aux_sym_char_token2] = ACTIONS(197),
    [aux_sym_char_token3] = ACTIONS(197),
    [aux_sym_char_token4] = ACTIONS(197),
    [aux_sym_char_token5] = ACTIONS(197),
    [aux_sym_char_token6] = ACTIONS(199),
    [aux_sym_char_token7] = ACTIONS(199),
    [aux_sym_char_token8] = ACTIONS(197),
    [sym_string] = ACTIONS(197),
    [sym_byte_compiled_file_name] = ACTIONS(197),
    [aux_sym_symbol_token1] = ACTIONS(199),
    [aux_sym_symbol_token2] = ACTIONS(199),
    [anon_sym_POUND_POUND] = ACTIONS(197),
    [anon_sym_POUND_SQUOTE] = ACTIONS(197),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(197),
    [anon_sym_COMMA_AT] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_RBRACK] = ACTIONS(197),
    [anon_sym_POUND_LBRACK] = ACTIONS(197),
    [anon_sym_POUND_LPAREN] = ACTIONS(197),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [anon_sym_LPAREN] = ACTIONS(201),
    [anon_sym_RPAREN] = ACTIONS(201),
    [aux_sym_float_token1] = ACTIONS(203),
    [aux_sym_float_token2] = ACTIONS(203),
    [aux_sym_float_token3] = ACTIONS(203),
    [aux_sym_float_token4] = ACTIONS(203),
    [aux_sym_float_token5] = ACTIONS(203),
    [aux_sym_integer_token1] = ACTIONS(203),
    [aux_sym_integer_token2] = ACTIONS(201),
    [aux_sym_char_token1] = ACTIONS(203),
    [aux_sym_char_token2] = ACTIONS(201),
    [aux_sym_char_token3] = ACTIONS(201),
    [aux_sym_char_token4] = ACTIONS(201),
    [aux_sym_char_token5] = ACTIONS(201),
    [aux_sym_char_token6] = ACTIONS(203),
    [aux_sym_char_token7] = ACTIONS(203),
    [aux_sym_char_token8] = ACTIONS(201),
    [sym_string] = ACTIONS(201),
    [sym_byte_compiled_file_name] = ACTIONS(201),
    [aux_sym_symbol_token1] = ACTIONS(203),
    [aux_sym_symbol_token2] = ACTIONS(203),
    [anon_sym_POUND_POUND] = ACTIONS(201),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [anon_sym_BQUOTE] = ACTIONS(201),
    [anon_sym_COMMA_AT] = ACTIONS(201),
    [anon_sym_COMMA] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(201),
    [anon_sym_RBRACK] = ACTIONS(201),
    [anon_sym_POUND_LBRACK] = ACTIONS(201),
    [anon_sym_POUND_LPAREN] = ACTIONS(201),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_RPAREN] = ACTIONS(205),
    [aux_sym_float_token1] = ACTIONS(207),
    [aux_sym_float_token2] = ACTIONS(207),
    [aux_sym_float_token3] = ACTIONS(207),
    [aux_sym_float_token4] = ACTIONS(207),
    [aux_sym_float_token5] = ACTIONS(207),
    [aux_sym_integer_token1] = ACTIONS(207),
    [aux_sym_integer_token2] = ACTIONS(205),
    [aux_sym_char_token1] = ACTIONS(207),
    [aux_sym_char_token2] = ACTIONS(205),
    [aux_sym_char_token3] = ACTIONS(205),
    [aux_sym_char_token4] = ACTIONS(205),
    [aux_sym_char_token5] = ACTIONS(205),
    [aux_sym_char_token6] = ACTIONS(207),
    [aux_sym_char_token7] = ACTIONS(207),
    [aux_sym_char_token8] = ACTIONS(205),
    [sym_string] = ACTIONS(205),
    [sym_byte_compiled_file_name] = ACTIONS(205),
    [aux_sym_symbol_token1] = ACTIONS(207),
    [aux_sym_symbol_token2] = ACTIONS(207),
    [anon_sym_POUND_POUND] = ACTIONS(205),
    [anon_sym_POUND_SQUOTE] = ACTIONS(205),
    [anon_sym_SQUOTE] = ACTIONS(205),
    [anon_sym_BQUOTE] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(205),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_RBRACK] = ACTIONS(205),
    [anon_sym_POUND_LBRACK] = ACTIONS(205),
    [anon_sym_POUND_LPAREN] = ACTIONS(205),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
    [aux_sym_float_token1] = ACTIONS(211),
    [aux_sym_float_token2] = ACTIONS(211),
    [aux_sym_float_token3] = ACTIONS(211),
    [aux_sym_float_token4] = ACTIONS(211),
    [aux_sym_float_token5] = ACTIONS(211),
    [aux_sym_integer_token1] = ACTIONS(211),
    [aux_sym_integer_token2] = ACTIONS(209),
    [aux_sym_char_token1] = ACTIONS(211),
    [aux_sym_char_token2] = ACTIONS(209),
    [aux_sym_char_token3] = ACTIONS(209),
    [aux_sym_char_token4] = ACTIONS(209),
    [aux_sym_char_token5] = ACTIONS(209),
    [aux_sym_char_token6] = ACTIONS(211),
    [aux_sym_char_token7] = ACTIONS(211),
    [aux_sym_char_token8] = ACTIONS(209),
    [sym_string] = ACTIONS(209),
    [sym_byte_compiled_file_name] = ACTIONS(209),
    [aux_sym_symbol_token1] = ACTIONS(211),
    [aux_sym_symbol_token2] = ACTIONS(211),
    [anon_sym_POUND_POUND] = ACTIONS(209),
    [anon_sym_POUND_SQUOTE] = ACTIONS(209),
    [anon_sym_SQUOTE] = ACTIONS(209),
    [anon_sym_BQUOTE] = ACTIONS(209),
    [anon_sym_COMMA_AT] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(209),
    [anon_sym_RBRACK] = ACTIONS(209),
    [anon_sym_POUND_LBRACK] = ACTIONS(209),
    [anon_sym_POUND_LPAREN] = ACTIONS(209),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_POUND_POUND,
    STATE(40), 1,
      sym_symbol,
    ACTIONS(21), 2,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
  [14] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_list,
  [24] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      sym_string,
  [31] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(39)] = 0,
  [SMALL_STATE(40)] = 14,
  [SMALL_STATE(41)] = 24,
  [SMALL_STATE(42)] = 31,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splice, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splice, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytecode, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytecode, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_table, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash_table, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytecode, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytecode, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_text_properties, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_text_properties, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_text_properties, 4),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_text_properties, 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_table, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash_table, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [217] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
