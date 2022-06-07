#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 85
#define LARGE_STATE_COUNT 51
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym__token_token1 = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_POUND_SEMI = 3,
  anon_sym_POUND_BANG = 4,
  anon_sym_POUND_PIPE = 5,
  aux_sym_block_comment_token1 = 6,
  anon_sym_PIPE_POUND = 7,
  sym_boolean = 8,
  sym_number = 9,
  sym_character = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_string_token1 = 12,
  sym_escape_sequence = 13,
  aux_sym_symbol_token1 = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_LBRACK = 17,
  anon_sym_RBRACK = 18,
  anon_sym_LBRACE = 19,
  anon_sym_RBRACE = 20,
  anon_sym_SQUOTE = 21,
  anon_sym_BQUOTE = 22,
  anon_sym_COMMA = 23,
  anon_sym_COMMA_AT = 24,
  anon_sym_POUND_SQUOTE = 25,
  anon_sym_POUND_BQUOTE = 26,
  anon_sym_POUND_COMMA = 27,
  anon_sym_POUND_COMMA_AT = 28,
  anon_sym_POUND_LPAREN = 29,
  anon_sym_POUNDvu8_LPAREN = 30,
  sym_program = 31,
  sym__token = 32,
  sym__skip = 33,
  sym__all_comment = 34,
  sym_comment = 35,
  sym_directive = 36,
  sym_block_comment = 37,
  sym__datum = 38,
  sym__simple_datum = 39,
  sym_string = 40,
  sym_symbol = 41,
  sym__compound_datum = 42,
  sym_list = 43,
  sym_abbreviation = 44,
  sym__abbreviation_prefix = 45,
  sym__special_form = 46,
  sym_vector = 47,
  sym_byte_vector = 48,
  aux_sym_program_repeat1 = 49,
  aux_sym_comment_repeat1 = 50,
  aux_sym_block_comment_repeat1 = 51,
  aux_sym_string_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__token_token1] = "_token_token1",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_POUND_SEMI] = "#;",
  [anon_sym_POUND_BANG] = "#!",
  [anon_sym_POUND_PIPE] = "#|",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_PIPE_POUND] = "|#",
  [sym_boolean] = "boolean",
  [sym_number] = "number",
  [sym_character] = "character",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym_symbol_token1] = "symbol_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_COMMA] = ",",
  [anon_sym_COMMA_AT] = ",@",
  [anon_sym_POUND_SQUOTE] = "#'",
  [anon_sym_POUND_BQUOTE] = "#`",
  [anon_sym_POUND_COMMA] = "#,",
  [anon_sym_POUND_COMMA_AT] = "#,@",
  [anon_sym_POUND_LPAREN] = "#(",
  [anon_sym_POUNDvu8_LPAREN] = "#vu8(",
  [sym_program] = "program",
  [sym__token] = "_token",
  [sym__skip] = "_skip",
  [sym__all_comment] = "_all_comment",
  [sym_comment] = "comment",
  [sym_directive] = "directive",
  [sym_block_comment] = "block_comment",
  [sym__datum] = "_datum",
  [sym__simple_datum] = "_simple_datum",
  [sym_string] = "string",
  [sym_symbol] = "symbol",
  [sym__compound_datum] = "_compound_datum",
  [sym_list] = "list",
  [sym_abbreviation] = "abbreviation",
  [sym__abbreviation_prefix] = "_abbreviation_prefix",
  [sym__special_form] = "_special_form",
  [sym_vector] = "vector",
  [sym_byte_vector] = "byte_vector",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__token_token1] = aux_sym__token_token1,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_POUND_SEMI] = anon_sym_POUND_SEMI,
  [anon_sym_POUND_BANG] = anon_sym_POUND_BANG,
  [anon_sym_POUND_PIPE] = anon_sym_POUND_PIPE,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_PIPE_POUND] = anon_sym_PIPE_POUND,
  [sym_boolean] = sym_boolean,
  [sym_number] = sym_number,
  [sym_character] = sym_character,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym_symbol_token1] = aux_sym_symbol_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COMMA_AT] = anon_sym_COMMA_AT,
  [anon_sym_POUND_SQUOTE] = anon_sym_POUND_SQUOTE,
  [anon_sym_POUND_BQUOTE] = anon_sym_POUND_BQUOTE,
  [anon_sym_POUND_COMMA] = anon_sym_POUND_COMMA,
  [anon_sym_POUND_COMMA_AT] = anon_sym_POUND_COMMA_AT,
  [anon_sym_POUND_LPAREN] = anon_sym_POUND_LPAREN,
  [anon_sym_POUNDvu8_LPAREN] = anon_sym_POUNDvu8_LPAREN,
  [sym_program] = sym_program,
  [sym__token] = sym__token,
  [sym__skip] = sym__skip,
  [sym__all_comment] = sym__all_comment,
  [sym_comment] = sym_comment,
  [sym_directive] = sym_directive,
  [sym_block_comment] = sym_block_comment,
  [sym__datum] = sym__datum,
  [sym__simple_datum] = sym__simple_datum,
  [sym_string] = sym_string,
  [sym_symbol] = sym_symbol,
  [sym__compound_datum] = sym__compound_datum,
  [sym_list] = sym_list,
  [sym_abbreviation] = sym_abbreviation,
  [sym__abbreviation_prefix] = sym__abbreviation_prefix,
  [sym__special_form] = sym__special_form,
  [sym_vector] = sym_vector,
  [sym_byte_vector] = sym_byte_vector,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__token_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_symbol_token1] = {
    .visible = false,
    .named = false,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_COMMA_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDvu8_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [sym__skip] = {
    .visible = false,
    .named = true,
  },
  [sym__all_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__datum] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_datum] = {
    .visible = false,
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
  [sym__compound_datum] = {
    .visible = false,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_abbreviation] = {
    .visible = true,
    .named = true,
  },
  [sym__abbreviation_prefix] = {
    .visible = false,
    .named = true,
  },
  [sym__special_form] = {
    .visible = false,
    .named = true,
  },
  [sym_vector] = {
    .visible = true,
    .named = true,
  },
  [sym_byte_vector] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
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

static inline bool aux_sym__token_token1_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < 160
      ? (c < ' '
        ? (c >= '\t' && c <= '\r')
        : c <= ' ')
      : (c <= 160 || c == 5760))
    : (c <= 8202 || (c < 8287
      ? (c < 8239
        ? (c >= 8232 && c <= 8233)
        : c <= 8239)
      : (c <= 8287 || c == 12288))));
}

static inline bool aux_sym_symbol_token1_character_set_1(int32_t c) {
  return (c < '`'
    ? (c < '\''
      ? (c < ' '
        ? (c < '\t'
          ? c == 0
          : c <= '\r')
        : (c <= ' ' || c == '"'))
      : (c <= ')' || (c < ';'
        ? c == ','
        : (c <= ';' || (c >= '[' && c <= ']')))))
    : (c <= '`' || (c < 8232
      ? (c < 5760
        ? (c < 160
          ? (c >= '{' && c <= '}')
          : c <= 160)
        : (c <= 5760 || (c >= 8192 && c <= 8202)))
      : (c <= 8233 || (c < 8287
        ? c == 8239
        : (c <= 8287 || c == 12288))))));
}

static inline bool aux_sym_symbol_token1_character_set_2(int32_t c) {
  return (c < '`'
    ? (c < '\''
      ? (c < ' '
        ? (c < '\t'
          ? c == 0
          : c <= '\r')
        : (c <= ' ' || (c >= '"' && c <= '#')))
      : (c <= ')' || (c < ';'
        ? c == ','
        : (c <= ';' || (c >= '[' && c <= ']')))))
    : (c <= '`' || (c < 8232
      ? (c < 5760
        ? (c < 160
          ? (c >= '{' && c <= '}')
          : c <= 160)
        : (c <= 5760 || (c >= 8192 && c <= 8202)))
      : (c <= 8233 || (c < 8287
        ? c == 8239
        : (c <= 8287 || c == 12288))))));
}

static inline bool aux_sym_symbol_token1_character_set_3(int32_t c) {
  return (c < '{'
    ? (c < '\''
      ? (c < ' '
        ? (c < '\t'
          ? c == 0
          : c <= '\r')
        : (c <= ' ' || (c >= '"' && c <= '#')))
      : (c <= ')' || (c < '['
        ? (c < ';'
          ? c == ','
          : c <= ';')
        : (c <= ']' || c == '`'))))
    : (c <= '{' || (c < 8232
      ? (c < 5760
        ? (c < 160
          ? c == '}'
          : c <= 160)
        : (c <= 5760 || (c >= 8192 && c <= 8202)))
      : (c <= 8233 || (c < 8287
        ? c == 8239
        : (c <= 8287 || c == 12288))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(164);
      if (aux_sym__token_token1_character_set_1(lookahead)) ADVANCE(165);
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '#') ADVANCE(172);
      if (lookahead == '\'') ADVANCE(371);
      if (lookahead == '(') ADVANCE(365);
      if (lookahead == ')') ADVANCE(366);
      if (lookahead == ',') ADVANCE(373);
      if (lookahead == ';') ADVANCE(166);
      if (lookahead == '[') ADVANCE(367);
      if (lookahead == ']') ADVANCE(368);
      if (lookahead == '`') ADVANCE(372);
      if (lookahead == '{') ADVANCE(369);
      if (lookahead == '|') ADVANCE(171);
      if (lookahead == '}') ADVANCE(370);
      if (lookahead != 0) ADVANCE(170);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(311);
      if (lookahead == '\r') ADVANCE(312);
      if (lookahead == 'x') ADVANCE(161);
      if (lookahead == 133 ||
          lookahead == 8232) ADVANCE(313);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(311);
      if (lookahead == '\r') ADVANCE(312);
      if (lookahead == 133 ||
          lookahead == 8232) ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(168);
      if (lookahead == '\'') ADVANCE(376);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == ',') ADVANCE(378);
      if (lookahead == ';') ADVANCE(167);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(179);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(13);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(5);
      if (lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(174);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(212);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == '`') ADVANCE(377);
      if (lookahead == 'v') ADVANCE(105);
      if (lookahead == '|') ADVANCE(169);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(309);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(146);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(146);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(146);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(146);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(10);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == ';') ADVANCE(166);
      if (aux_sym__token_token1_character_set_1(lookahead)) ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(364);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(14);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(18);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(18);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(23);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(21);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(23);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(24);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '(') ADVANCE(381);
      END_STATE();
    case 28:
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 29:
      if (lookahead == '+') ADVANCE(34);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '.') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == 'n') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == '0') ADVANCE(175);
      END_STATE();
    case 40:
      if (lookahead == '0') ADVANCE(264);
      END_STATE();
    case 41:
      if (lookahead == '0') ADVANCE(76);
      END_STATE();
    case 42:
      if (lookahead == '0') ADVANCE(276);
      END_STATE();
    case 43:
      if (lookahead == '0') ADVANCE(267);
      END_STATE();
    case 44:
      if (lookahead == '0') ADVANCE(271);
      END_STATE();
    case 45:
      if (lookahead == '8') ADVANCE(27);
      END_STATE();
    case 46:
      if (lookahead == ';') ADVANCE(167);
      if (lookahead == '|') ADVANCE(169);
      END_STATE();
    case 47:
      if (lookahead == ';') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'b') ADVANCE(296);
      if (lookahead == 'd') ADVANCE(299);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead == 'l') ADVANCE(302);
      if (lookahead == 'n') ADVANCE(300);
      if (lookahead == 'p') ADVANCE(297);
      if (lookahead == 'r') ADVANCE(301);
      if (lookahead == 's') ADVANCE(304);
      if (lookahead == 't') ADVANCE(298);
      if (lookahead == 'v') ADVANCE(306);
      if (lookahead == 'x') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(295);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(295);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(295);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(67);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(31);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(38);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == '|') ADVANCE(144);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(10);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == '|') ADVANCE(144);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(18);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == '|') ADVANCE(144);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(18);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == '|') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(14);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 84:
      if (lookahead == 'k') ADVANCE(102);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(295);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(295);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(295);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 99:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 105:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 106:
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 107:
      if (lookahead == 'w') ADVANCE(87);
      END_STATE();
    case 108:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 109:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 110:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 111:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 112:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 113:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 114:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 115:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 116:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 117:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 118:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 119:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 120:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 121:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 122:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(252);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(28);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(253);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(254);
      END_STATE();
    case 123:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(213);
      END_STATE();
    case 124:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(206);
      END_STATE();
    case 125:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(245);
      END_STATE();
    case 126:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(21);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(252);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 131:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(231);
      END_STATE();
    case 132:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(219);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(248);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(24);
      END_STATE();
    case 135:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 136:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 137:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 162:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '|') ADVANCE(170);
      if (lookahead == '#') ADVANCE(172);
      if (lookahead == '|') ADVANCE(171);
      END_STATE();
    case 163:
      if (eof) ADVANCE(164);
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(371);
      if (lookahead == '(') ADVANCE(365);
      if (lookahead == ')') ADVANCE(366);
      if (lookahead == '+') ADVANCE(319);
      if (lookahead == ',') ADVANCE(374);
      if (lookahead == '-') ADVANCE(319);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == ';') ADVANCE(166);
      if (lookahead == '[') ADVANCE(367);
      if (lookahead == ']') ADVANCE(368);
      if (lookahead == '`') ADVANCE(372);
      if (lookahead == '{') ADVANCE(369);
      if (lookahead == '}') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (aux_sym__token_token1_character_set_1(lookahead)) ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(364);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__token_token1);
      if (aux_sym__token_token1_character_set_1(lookahead)) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '#') ADVANCE(173);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '|') ADVANCE(169);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == '/') ADVANCE(360);
      if (lookahead == '@') ADVANCE(317);
      if (lookahead == '|') ADVANCE(350);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(323);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(364);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '.') ADVANCE(184);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == '|') ADVANCE(137);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(109);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == '|') ADVANCE(137);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '+') ADVANCE(263);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '@') ADVANCE(255);
      if (lookahead == '|') ADVANCE(135);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(186);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(108);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == '/') ADVANCE(361);
      if (lookahead == '@') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '|') ADVANCE(351);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(323);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(364);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(114);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '.') ADVANCE(190);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(184);
      if (lookahead == '@') ADVANCE(317);
      if (lookahead == '|') ADVANCE(350);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(323);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(364);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(184);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == '|') ADVANCE(137);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(109);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(184);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == '|') ADVANCE(137);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '/') ADVANCE(123);
      if (lookahead == '@') ADVANCE(255);
      if (lookahead == '|') ADVANCE(135);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(186);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(108);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '/') ADVANCE(123);
      if (lookahead == '@') ADVANCE(255);
      if (lookahead == '|') ADVANCE(135);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(108);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '@') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '|') ADVANCE(351);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(323);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(364);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(114);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '/') ADVANCE(362);
      if (lookahead == '|') ADVANCE(355);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(364);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '|') ADVANCE(145);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '|') ADVANCE(145);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(116);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(195);
      if (lookahead == '/') ADVANCE(124);
      if (lookahead == '@') ADVANCE(255);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(138);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(194);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(110);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(195);
      if (lookahead == '/') ADVANCE(124);
      if (lookahead == '@') ADVANCE(255);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(138);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(110);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(197);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '|') ADVANCE(139);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(196);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(197);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '|') ADVANCE(139);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '|') ADVANCE(355);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(364);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '|') ADVANCE(145);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(116);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '|') ADVANCE(145);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(202);
      if (lookahead == '@') ADVANCE(317);
      if (lookahead == '|') ADVANCE(354);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(323);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(364);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(202);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == '|') ADVANCE(152);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(202);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == '|') ADVANCE(152);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == '|') ADVANCE(147);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(204);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == '|') ADVANCE(147);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '@') ADVANCE(255);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(138);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(206);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(110);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '@') ADVANCE(255);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(138);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(110);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(149);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(208);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(112);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(149);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(112);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == '|') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(210);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == '|') ADVANCE(139);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == '|') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(204);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '@') ADVANCE(255);
      if (lookahead == '|') ADVANCE(135);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(213);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(108);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '@') ADVANCE(255);
      if (lookahead == '|') ADVANCE(135);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(108);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == '|') ADVANCE(150);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(216);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == '|') ADVANCE(150);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == '|') ADVANCE(150);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == '|') ADVANCE(150);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(81);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(216);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(149);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(219);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(112);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(149);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(112);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '/') ADVANCE(158);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(151);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(222);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '/') ADVANCE(158);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(151);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(113);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '/') ADVANCE(158);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(151);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(113);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '/') ADVANCE(158);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(151);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(81);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(222);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == '|') ADVANCE(139);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(139);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(227);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == '|') ADVANCE(139);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(227);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == '|') ADVANCE(139);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == '|') ADVANCE(139);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(144);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(18);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '+') ADVANCE(273);
      if (lookahead == '-') ADVANCE(273);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == '|') ADVANCE(150);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(216);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == '|') ADVANCE(147);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(231);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == '|') ADVANCE(147);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(151);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(234);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(151);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(113);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(151);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(113);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(151);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(81);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(234);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == '|') ADVANCE(150);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(238);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == '|') ADVANCE(150);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == '|') ADVANCE(150);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == '|') ADVANCE(150);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(81);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(238);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '@') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '|') ADVANCE(357);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(323);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(364);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(153);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(153);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '|') ADVANCE(139);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(139);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(247);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '|') ADVANCE(139);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(245);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '|') ADVANCE(139);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(247);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '|') ADVANCE(139);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '|') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(248);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '|') ADVANCE(139);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '|') ADVANCE(139);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '|') ADVANCE(358);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(364);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(263);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '@') ADVANCE(255);
      if (lookahead == '|') ADVANCE(135);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(186);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(108);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == '|') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(204);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(273);
      if (lookahead == '-') ADVANCE(273);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == '|') ADVANCE(150);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(216);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '|') ADVANCE(139);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(196);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(282);
      if (lookahead == '-') ADVANCE(282);
      if (lookahead == '|') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(210);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(281);
      if (lookahead == '-') ADVANCE(281);
      if (lookahead == '|') ADVANCE(139);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(227);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '|') ADVANCE(357);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(323);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (!aux_sym_symbol_token1_character_set_2(lookahead)) ADVANCE(364);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(323);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(317);
      if (lookahead == '|') ADVANCE(354);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(323);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (!aux_sym_symbol_token1_character_set_2(lookahead)) ADVANCE(364);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(317);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(255);
      if (lookahead == 'i') ADVANCE(284);
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == '|') ADVANCE(138);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(194);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(110);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(255);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(255);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(255);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(288);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == '|') ADVANCE(149);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(208);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(112);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(289);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == '|') ADVANCE(151);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(113);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(222);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '|') ADVANCE(153);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == '|') ADVANCE(152);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == '|') ADVANCE(139);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(196);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == '|') ADVANCE(139);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(227);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == '|') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(210);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(330);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(331);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(139);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(358);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (!aux_sym_symbol_token1_character_set_2(lookahead)) ADVANCE(364);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_number);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(311);
      if (lookahead == '\r') ADVANCE(312);
      if (lookahead == 133 ||
          lookahead == 8232) ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(313);
      if (lookahead == 133) ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == '/') ADVANCE(363);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '|') ADVANCE(356);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(364);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '|') ADVANCE(356);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(364);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '|') ADVANCE(359);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(364);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+') ADVANCE(322);
      if (lookahead == '-') ADVANCE(322);
      if (lookahead == '.') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(325);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'i') ADVANCE(283);
      if (lookahead == 'n') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(326);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(324);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(352);
      if (lookahead == 'i') ADVANCE(339);
      if (lookahead == 'n') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(353);
      if (lookahead == 'i') ADVANCE(285);
      if (lookahead == 'n') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0') ADVANCE(294);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0') ADVANCE(260);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0') ADVANCE(335);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'a') ADVANCE(336);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'a') ADVANCE(337);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'a') ADVANCE(338);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'f') ADVANCE(318);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'f') ADVANCE(320);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'f') ADVANCE(321);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '|') ADVANCE(359);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (!aux_sym_symbol_token1_character_set_2(lookahead)) ADVANCE(364);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'i') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'i') ADVANCE(294);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(318);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(320);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(321);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(332);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(375);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_POUND_BQUOTE);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA);
      if (lookahead == '@') ADVANCE(379);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA_AT);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_POUNDvu8_LPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 163},
  [2] = {.lex_state = 163},
  [3] = {.lex_state = 163},
  [4] = {.lex_state = 163},
  [5] = {.lex_state = 163},
  [6] = {.lex_state = 163},
  [7] = {.lex_state = 163},
  [8] = {.lex_state = 163},
  [9] = {.lex_state = 163},
  [10] = {.lex_state = 163},
  [11] = {.lex_state = 163},
  [12] = {.lex_state = 163},
  [13] = {.lex_state = 163},
  [14] = {.lex_state = 163},
  [15] = {.lex_state = 163},
  [16] = {.lex_state = 163},
  [17] = {.lex_state = 163},
  [18] = {.lex_state = 163},
  [19] = {.lex_state = 163},
  [20] = {.lex_state = 163},
  [21] = {.lex_state = 163},
  [22] = {.lex_state = 163},
  [23] = {.lex_state = 163},
  [24] = {.lex_state = 163},
  [25] = {.lex_state = 163},
  [26] = {.lex_state = 163},
  [27] = {.lex_state = 163},
  [28] = {.lex_state = 163},
  [29] = {.lex_state = 163},
  [30] = {.lex_state = 163},
  [31] = {.lex_state = 163},
  [32] = {.lex_state = 163},
  [33] = {.lex_state = 163},
  [34] = {.lex_state = 163},
  [35] = {.lex_state = 163},
  [36] = {.lex_state = 163},
  [37] = {.lex_state = 163},
  [38] = {.lex_state = 163},
  [39] = {.lex_state = 163},
  [40] = {.lex_state = 163},
  [41] = {.lex_state = 163},
  [42] = {.lex_state = 163},
  [43] = {.lex_state = 163},
  [44] = {.lex_state = 163},
  [45] = {.lex_state = 163},
  [46] = {.lex_state = 163},
  [47] = {.lex_state = 163},
  [48] = {.lex_state = 163},
  [49] = {.lex_state = 163},
  [50] = {.lex_state = 163},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 162},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 162},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 12},
  [64] = {.lex_state = 12},
  [65] = {.lex_state = 12},
  [66] = {.lex_state = 162},
  [67] = {.lex_state = 162},
  [68] = {.lex_state = 162},
  [69] = {.lex_state = 12},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 162},
  [72] = {.lex_state = 12},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 162},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 162},
  [83] = {.lex_state = 162},
  [84] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__token_token1] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_POUND_PIPE] = ACTIONS(1),
    [aux_sym_block_comment_token1] = ACTIONS(1),
    [anon_sym_PIPE_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(84),
    [sym__token] = STATE(15),
    [sym__all_comment] = STATE(15),
    [sym_comment] = STATE(15),
    [sym_directive] = STATE(15),
    [sym_block_comment] = STATE(15),
    [sym__datum] = STATE(15),
    [sym__simple_datum] = STATE(15),
    [sym_string] = STATE(15),
    [sym_symbol] = STATE(15),
    [sym__compound_datum] = STATE(15),
    [sym_list] = STATE(15),
    [sym_abbreviation] = STATE(15),
    [sym__abbreviation_prefix] = STATE(29),
    [sym__special_form] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_byte_vector] = STATE(15),
    [aux_sym_program_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__token_token1] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(5),
    [sym_number] = ACTIONS(15),
    [sym_character] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [2] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym__simple_datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__compound_datum] = STATE(2),
    [sym_list] = STATE(2),
    [sym_abbreviation] = STATE(2),
    [sym__abbreviation_prefix] = STATE(29),
    [sym__special_form] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(35),
    [aux_sym__token_token1] = ACTIONS(37),
    [aux_sym_comment_token1] = ACTIONS(40),
    [anon_sym_POUND_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(46),
    [anon_sym_POUND_PIPE] = ACTIONS(49),
    [sym_boolean] = ACTIONS(37),
    [sym_number] = ACTIONS(52),
    [sym_character] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [aux_sym_symbol_token1] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(64),
    [anon_sym_RBRACK] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(70),
    [anon_sym_BQUOTE] = ACTIONS(70),
    [anon_sym_COMMA] = ACTIONS(73),
    [anon_sym_COMMA_AT] = ACTIONS(70),
    [anon_sym_POUND_SQUOTE] = ACTIONS(70),
    [anon_sym_POUND_BQUOTE] = ACTIONS(70),
    [anon_sym_POUND_COMMA] = ACTIONS(73),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(70),
    [anon_sym_POUND_LPAREN] = ACTIONS(76),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(79),
  },
  [3] = {
    [sym__token] = STATE(18),
    [sym__all_comment] = STATE(18),
    [sym_comment] = STATE(18),
    [sym_directive] = STATE(18),
    [sym_block_comment] = STATE(18),
    [sym__datum] = STATE(18),
    [sym__simple_datum] = STATE(18),
    [sym_string] = STATE(18),
    [sym_symbol] = STATE(18),
    [sym__compound_datum] = STATE(18),
    [sym_list] = STATE(18),
    [sym_abbreviation] = STATE(18),
    [sym__abbreviation_prefix] = STATE(29),
    [sym__special_form] = STATE(18),
    [sym_vector] = STATE(18),
    [sym_byte_vector] = STATE(18),
    [aux_sym_program_repeat1] = STATE(18),
    [aux_sym__token_token1] = ACTIONS(82),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(82),
    [sym_number] = ACTIONS(84),
    [sym_character] = ACTIONS(82),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [4] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym__simple_datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__compound_datum] = STATE(2),
    [sym_list] = STATE(2),
    [sym_abbreviation] = STATE(2),
    [sym__abbreviation_prefix] = STATE(29),
    [sym__special_form] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(88),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(88),
    [sym_number] = ACTIONS(90),
    [sym_character] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [5] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym__simple_datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__compound_datum] = STATE(2),
    [sym_list] = STATE(2),
    [sym_abbreviation] = STATE(2),
    [sym__abbreviation_prefix] = STATE(29),
    [sym__special_form] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(88),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(88),
    [sym_number] = ACTIONS(90),
    [sym_character] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(94),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [6] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym__simple_datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__compound_datum] = STATE(2),
    [sym_list] = STATE(2),
    [sym_abbreviation] = STATE(2),
    [sym__abbreviation_prefix] = STATE(29),
    [sym__special_form] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(88),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(88),
    [sym_number] = ACTIONS(90),
    [sym_character] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(94),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [7] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym__simple_datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__compound_datum] = STATE(2),
    [sym_list] = STATE(2),
    [sym_abbreviation] = STATE(2),
    [sym__abbreviation_prefix] = STATE(29),
    [sym__special_form] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(88),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(88),
    [sym_number] = ACTIONS(90),
    [sym_character] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [8] = {
    [sym__token] = STATE(23),
    [sym__all_comment] = STATE(23),
    [sym_comment] = STATE(23),
    [sym_directive] = STATE(23),
    [sym_block_comment] = STATE(23),
    [sym__datum] = STATE(23),
    [sym__simple_datum] = STATE(23),
    [sym_string] = STATE(23),
    [sym_symbol] = STATE(23),
    [sym__compound_datum] = STATE(23),
    [sym_list] = STATE(23),
    [sym_abbreviation] = STATE(23),
    [sym__abbreviation_prefix] = STATE(29),
    [sym__special_form] = STATE(23),
    [sym_vector] = STATE(23),
    [sym_byte_vector] = STATE(23),
    [aux_sym_program_repeat1] = STATE(23),
    [aux_sym__token_token1] = ACTIONS(98),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(98),
    [sym_number] = ACTIONS(100),
    [sym_character] = ACTIONS(98),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [9] = {
    [sym__token] = STATE(22),
    [sym__all_comment] = STATE(22),
    [sym_comment] = STATE(22),
    [sym_directive] = STATE(22),
    [sym_block_comment] = STATE(22),
    [sym__datum] = STATE(22),
    [sym__simple_datum] = STATE(22),
    [sym_string] = STATE(22),
    [sym_symbol] = STATE(22),
    [sym__compound_datum] = STATE(22),
    [sym_list] = STATE(22),
    [sym_abbreviation] = STATE(22),
    [sym__abbreviation_prefix] = STATE(29),
    [sym__special_form] = STATE(22),
    [sym_vector] = STATE(22),
    [sym_byte_vector] = STATE(22),
    [aux_sym_program_repeat1] = STATE(22),
    [aux_sym__token_token1] = ACTIONS(104),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(104),
    [sym_number] = ACTIONS(106),
    [sym_character] = ACTIONS(104),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(102),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [10] = {
    [sym__token] = STATE(21),
    [sym__all_comment] = STATE(21),
    [sym_comment] = STATE(21),
    [sym_directive] = STATE(21),
    [sym_block_comment] = STATE(21),
    [sym__datum] = STATE(21),
    [sym__simple_datum] = STATE(21),
    [sym_string] = STATE(21),
    [sym_symbol] = STATE(21),
    [sym__compound_datum] = STATE(21),
    [sym_list] = STATE(21),
    [sym_abbreviation] = STATE(21),
    [sym__abbreviation_prefix] = STATE(29),
    [sym__special_form] = STATE(21),
    [sym_vector] = STATE(21),
    [sym_byte_vector] = STATE(21),
    [aux_sym_program_repeat1] = STATE(21),
    [aux_sym__token_token1] = ACTIONS(108),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(108),
    [sym_number] = ACTIONS(110),
    [sym_character] = ACTIONS(108),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(102),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [11] = {
    [sym__token] = STATE(14),
    [sym__all_comment] = STATE(14),
    [sym_comment] = STATE(14),
    [sym_directive] = STATE(14),
    [sym_block_comment] = STATE(14),
    [sym__datum] = STATE(14),
    [sym__simple_datum] = STATE(14),
    [sym_string] = STATE(14),
    [sym_symbol] = STATE(14),
    [sym__compound_datum] = STATE(14),
    [sym_list] = STATE(14),
    [sym_abbreviation] = STATE(14),
    [sym__abbreviation_prefix] = STATE(29),
    [sym__special_form] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_byte_vector] = STATE(14),
    [aux_sym_program_repeat1] = STATE(14),
    [aux_sym__token_token1] = ACTIONS(112),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(112),
    [sym_number] = ACTIONS(114),
    [sym_character] = ACTIONS(112),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [12] = {
    [sym__token] = STATE(7),
    [sym__all_comment] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_directive] = STATE(7),
    [sym_block_comment] = STATE(7),
    [sym__datum] = STATE(7),
    [sym__simple_datum] = STATE(7),
    [sym_string] = STATE(7),
    [sym_symbol] = STATE(7),
    [sym__compound_datum] = STATE(7),
    [sym_list] = STATE(7),
    [sym_abbreviation] = STATE(7),
    [sym__abbreviation_prefix] = STATE(29),
    [sym__special_form] = STATE(7),
    [sym_vector] = STATE(7),
    [sym_byte_vector] = STATE(7),
    [aux_sym_program_repeat1] = STATE(7),
    [aux_sym__token_token1] = ACTIONS(118),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(118),
    [sym_number] = ACTIONS(120),
    [sym_character] = ACTIONS(118),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(122),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [13] = {
    [sym__token] = STATE(4),
    [sym__all_comment] = STATE(4),
    [sym_comment] = STATE(4),
    [sym_directive] = STATE(4),
    [sym_block_comment] = STATE(4),
    [sym__datum] = STATE(4),
    [sym__simple_datum] = STATE(4),
    [sym_string] = STATE(4),
    [sym_symbol] = STATE(4),
    [sym__compound_datum] = STATE(4),
    [sym_list] = STATE(4),
    [sym_abbreviation] = STATE(4),
    [sym__abbreviation_prefix] = STATE(29),
    [sym__special_form] = STATE(4),
    [sym_vector] = STATE(4),
    [sym_byte_vector] = STATE(4),
    [aux_sym_program_repeat1] = STATE(4),
    [aux_sym__token_token1] = ACTIONS(124),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(124),
    [sym_number] = ACTIONS(126),
    [sym_character] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [14] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym__simple_datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__compound_datum] = STATE(2),
    [sym_list] = STATE(2),
    [sym_abbreviation] = STATE(2),
    [sym__abbreviation_prefix] = STATE(29),
    [sym__special_form] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(88),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(88),
    [sym_number] = ACTIONS(90),
    [sym_character] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(130),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [15] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym__simple_datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__compound_datum] = STATE(2),
    [sym_list] = STATE(2),
    [sym_abbreviation] = STATE(2),
    [sym__abbreviation_prefix] = STATE(29),
    [sym__special_form] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(132),
    [aux_sym__token_token1] = ACTIONS(88),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(88),
    [sym_number] = ACTIONS(90),
    [sym_character] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [16] = {
    [sym__token] = STATE(5),
    [sym__all_comment] = STATE(5),
    [sym_comment] = STATE(5),
    [sym_directive] = STATE(5),
    [sym_block_comment] = STATE(5),
    [sym__datum] = STATE(5),
    [sym__simple_datum] = STATE(5),
    [sym_string] = STATE(5),
    [sym_symbol] = STATE(5),
    [sym__compound_datum] = STATE(5),
    [sym_list] = STATE(5),
    [sym_abbreviation] = STATE(5),
    [sym__abbreviation_prefix] = STATE(29),
    [sym__special_form] = STATE(5),
    [sym_vector] = STATE(5),
    [sym_byte_vector] = STATE(5),
    [aux_sym_program_repeat1] = STATE(5),
    [aux_sym__token_token1] = ACTIONS(134),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(134),
    [sym_number] = ACTIONS(136),
    [sym_character] = ACTIONS(134),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(138),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [17] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym__simple_datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__compound_datum] = STATE(2),
    [sym_list] = STATE(2),
    [sym_abbreviation] = STATE(2),
    [sym__abbreviation_prefix] = STATE(29),
    [sym__special_form] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(88),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(88),
    [sym_number] = ACTIONS(90),
    [sym_character] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [18] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym__simple_datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__compound_datum] = STATE(2),
    [sym_list] = STATE(2),
    [sym_abbreviation] = STATE(2),
    [sym__abbreviation_prefix] = STATE(29),
    [sym__special_form] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(88),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(88),
    [sym_number] = ACTIONS(90),
    [sym_character] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(140),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [19] = {
    [sym__token] = STATE(6),
    [sym__all_comment] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_directive] = STATE(6),
    [sym_block_comment] = STATE(6),
    [sym__datum] = STATE(6),
    [sym__simple_datum] = STATE(6),
    [sym_string] = STATE(6),
    [sym_symbol] = STATE(6),
    [sym__compound_datum] = STATE(6),
    [sym_list] = STATE(6),
    [sym_abbreviation] = STATE(6),
    [sym__abbreviation_prefix] = STATE(29),
    [sym__special_form] = STATE(6),
    [sym_vector] = STATE(6),
    [sym_byte_vector] = STATE(6),
    [aux_sym_program_repeat1] = STATE(6),
    [aux_sym__token_token1] = ACTIONS(142),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(142),
    [sym_number] = ACTIONS(144),
    [sym_character] = ACTIONS(142),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(138),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [20] = {
    [sym__token] = STATE(17),
    [sym__all_comment] = STATE(17),
    [sym_comment] = STATE(17),
    [sym_directive] = STATE(17),
    [sym_block_comment] = STATE(17),
    [sym__datum] = STATE(17),
    [sym__simple_datum] = STATE(17),
    [sym_string] = STATE(17),
    [sym_symbol] = STATE(17),
    [sym__compound_datum] = STATE(17),
    [sym_list] = STATE(17),
    [sym_abbreviation] = STATE(17),
    [sym__abbreviation_prefix] = STATE(29),
    [sym__special_form] = STATE(17),
    [sym_vector] = STATE(17),
    [sym_byte_vector] = STATE(17),
    [aux_sym_program_repeat1] = STATE(17),
    [aux_sym__token_token1] = ACTIONS(146),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(146),
    [sym_number] = ACTIONS(148),
    [sym_character] = ACTIONS(146),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(138),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [21] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym__simple_datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__compound_datum] = STATE(2),
    [sym_list] = STATE(2),
    [sym_abbreviation] = STATE(2),
    [sym__abbreviation_prefix] = STATE(29),
    [sym__special_form] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(88),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(88),
    [sym_number] = ACTIONS(90),
    [sym_character] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(150),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [22] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym__simple_datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__compound_datum] = STATE(2),
    [sym_list] = STATE(2),
    [sym_abbreviation] = STATE(2),
    [sym__abbreviation_prefix] = STATE(29),
    [sym__special_form] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(88),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(88),
    [sym_number] = ACTIONS(90),
    [sym_character] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [23] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym__simple_datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__compound_datum] = STATE(2),
    [sym_list] = STATE(2),
    [sym_abbreviation] = STATE(2),
    [sym__abbreviation_prefix] = STATE(29),
    [sym__special_form] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(88),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(88),
    [sym_number] = ACTIONS(90),
    [sym_character] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(150),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [24] = {
    [sym__skip] = STATE(26),
    [sym__all_comment] = STATE(26),
    [sym_comment] = STATE(26),
    [sym_block_comment] = STATE(26),
    [sym__datum] = STATE(57),
    [sym__simple_datum] = STATE(57),
    [sym_string] = STATE(57),
    [sym_symbol] = STATE(57),
    [sym__compound_datum] = STATE(57),
    [sym_list] = STATE(57),
    [sym_abbreviation] = STATE(57),
    [sym__abbreviation_prefix] = STATE(24),
    [sym__special_form] = STATE(57),
    [sym_vector] = STATE(57),
    [sym_byte_vector] = STATE(57),
    [aux_sym_comment_repeat1] = STATE(26),
    [aux_sym__token_token1] = ACTIONS(152),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(154),
    [sym_number] = ACTIONS(156),
    [sym_character] = ACTIONS(154),
    [anon_sym_DQUOTE] = ACTIONS(158),
    [aux_sym_symbol_token1] = ACTIONS(160),
    [anon_sym_LPAREN] = ACTIONS(162),
    [anon_sym_LBRACK] = ACTIONS(164),
    [anon_sym_LBRACE] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(168),
    [anon_sym_BQUOTE] = ACTIONS(168),
    [anon_sym_COMMA] = ACTIONS(170),
    [anon_sym_COMMA_AT] = ACTIONS(168),
    [anon_sym_POUND_SQUOTE] = ACTIONS(168),
    [anon_sym_POUND_BQUOTE] = ACTIONS(168),
    [anon_sym_POUND_COMMA] = ACTIONS(170),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(168),
    [anon_sym_POUND_LPAREN] = ACTIONS(172),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(174),
  },
  [25] = {
    [sym__skip] = STATE(36),
    [sym__all_comment] = STATE(36),
    [sym_comment] = STATE(36),
    [sym_block_comment] = STATE(36),
    [sym__datum] = STATE(59),
    [sym__simple_datum] = STATE(59),
    [sym_string] = STATE(59),
    [sym_symbol] = STATE(59),
    [sym__compound_datum] = STATE(59),
    [sym_list] = STATE(59),
    [sym_abbreviation] = STATE(59),
    [sym__abbreviation_prefix] = STATE(24),
    [sym__special_form] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [aux_sym_comment_repeat1] = STATE(36),
    [aux_sym__token_token1] = ACTIONS(176),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(178),
    [sym_number] = ACTIONS(180),
    [sym_character] = ACTIONS(178),
    [anon_sym_DQUOTE] = ACTIONS(158),
    [aux_sym_symbol_token1] = ACTIONS(160),
    [anon_sym_LPAREN] = ACTIONS(162),
    [anon_sym_LBRACK] = ACTIONS(164),
    [anon_sym_LBRACE] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(168),
    [anon_sym_BQUOTE] = ACTIONS(168),
    [anon_sym_COMMA] = ACTIONS(170),
    [anon_sym_COMMA_AT] = ACTIONS(168),
    [anon_sym_POUND_SQUOTE] = ACTIONS(168),
    [anon_sym_POUND_BQUOTE] = ACTIONS(168),
    [anon_sym_POUND_COMMA] = ACTIONS(170),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(168),
    [anon_sym_POUND_LPAREN] = ACTIONS(172),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(174),
  },
  [26] = {
    [sym__skip] = STATE(36),
    [sym__all_comment] = STATE(36),
    [sym_comment] = STATE(36),
    [sym_block_comment] = STATE(36),
    [sym__datum] = STATE(65),
    [sym__simple_datum] = STATE(65),
    [sym_string] = STATE(65),
    [sym_symbol] = STATE(65),
    [sym__compound_datum] = STATE(65),
    [sym_list] = STATE(65),
    [sym_abbreviation] = STATE(65),
    [sym__abbreviation_prefix] = STATE(24),
    [sym__special_form] = STATE(65),
    [sym_vector] = STATE(65),
    [sym_byte_vector] = STATE(65),
    [aux_sym_comment_repeat1] = STATE(36),
    [aux_sym__token_token1] = ACTIONS(176),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(182),
    [sym_number] = ACTIONS(184),
    [sym_character] = ACTIONS(182),
    [anon_sym_DQUOTE] = ACTIONS(158),
    [aux_sym_symbol_token1] = ACTIONS(160),
    [anon_sym_LPAREN] = ACTIONS(162),
    [anon_sym_LBRACK] = ACTIONS(164),
    [anon_sym_LBRACE] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(168),
    [anon_sym_BQUOTE] = ACTIONS(168),
    [anon_sym_COMMA] = ACTIONS(170),
    [anon_sym_COMMA_AT] = ACTIONS(168),
    [anon_sym_POUND_SQUOTE] = ACTIONS(168),
    [anon_sym_POUND_BQUOTE] = ACTIONS(168),
    [anon_sym_POUND_COMMA] = ACTIONS(170),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(168),
    [anon_sym_POUND_LPAREN] = ACTIONS(172),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(174),
  },
  [27] = {
    [sym__skip] = STATE(25),
    [sym__all_comment] = STATE(25),
    [sym_comment] = STATE(25),
    [sym_block_comment] = STATE(25),
    [sym__datum] = STATE(75),
    [sym__simple_datum] = STATE(75),
    [sym_string] = STATE(75),
    [sym_symbol] = STATE(75),
    [sym__compound_datum] = STATE(75),
    [sym_list] = STATE(75),
    [sym_abbreviation] = STATE(75),
    [sym__abbreviation_prefix] = STATE(24),
    [sym__special_form] = STATE(75),
    [sym_vector] = STATE(75),
    [sym_byte_vector] = STATE(75),
    [aux_sym_comment_repeat1] = STATE(25),
    [aux_sym__token_token1] = ACTIONS(186),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(188),
    [sym_number] = ACTIONS(190),
    [sym_character] = ACTIONS(188),
    [anon_sym_DQUOTE] = ACTIONS(158),
    [aux_sym_symbol_token1] = ACTIONS(160),
    [anon_sym_LPAREN] = ACTIONS(162),
    [anon_sym_LBRACK] = ACTIONS(164),
    [anon_sym_LBRACE] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(168),
    [anon_sym_BQUOTE] = ACTIONS(168),
    [anon_sym_COMMA] = ACTIONS(170),
    [anon_sym_COMMA_AT] = ACTIONS(168),
    [anon_sym_POUND_SQUOTE] = ACTIONS(168),
    [anon_sym_POUND_BQUOTE] = ACTIONS(168),
    [anon_sym_POUND_COMMA] = ACTIONS(170),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(168),
    [anon_sym_POUND_LPAREN] = ACTIONS(172),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(174),
  },
  [28] = {
    [sym__skip] = STATE(31),
    [sym__all_comment] = STATE(31),
    [sym_comment] = STATE(31),
    [sym_block_comment] = STATE(31),
    [sym__datum] = STATE(47),
    [sym__simple_datum] = STATE(47),
    [sym_string] = STATE(47),
    [sym_symbol] = STATE(47),
    [sym__compound_datum] = STATE(47),
    [sym_list] = STATE(47),
    [sym_abbreviation] = STATE(47),
    [sym__abbreviation_prefix] = STATE(29),
    [sym__special_form] = STATE(47),
    [sym_vector] = STATE(47),
    [sym_byte_vector] = STATE(47),
    [aux_sym_comment_repeat1] = STATE(31),
    [aux_sym__token_token1] = ACTIONS(192),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(194),
    [sym_number] = ACTIONS(196),
    [sym_character] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [29] = {
    [sym__skip] = STATE(30),
    [sym__all_comment] = STATE(30),
    [sym_comment] = STATE(30),
    [sym_block_comment] = STATE(30),
    [sym__datum] = STATE(34),
    [sym__simple_datum] = STATE(34),
    [sym_string] = STATE(34),
    [sym_symbol] = STATE(34),
    [sym__compound_datum] = STATE(34),
    [sym_list] = STATE(34),
    [sym_abbreviation] = STATE(34),
    [sym__abbreviation_prefix] = STATE(29),
    [sym__special_form] = STATE(34),
    [sym_vector] = STATE(34),
    [sym_byte_vector] = STATE(34),
    [aux_sym_comment_repeat1] = STATE(30),
    [aux_sym__token_token1] = ACTIONS(198),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(200),
    [sym_number] = ACTIONS(202),
    [sym_character] = ACTIONS(200),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [30] = {
    [sym__skip] = STATE(36),
    [sym__all_comment] = STATE(36),
    [sym_comment] = STATE(36),
    [sym_block_comment] = STATE(36),
    [sym__datum] = STATE(45),
    [sym__simple_datum] = STATE(45),
    [sym_string] = STATE(45),
    [sym_symbol] = STATE(45),
    [sym__compound_datum] = STATE(45),
    [sym_list] = STATE(45),
    [sym_abbreviation] = STATE(45),
    [sym__abbreviation_prefix] = STATE(29),
    [sym__special_form] = STATE(45),
    [sym_vector] = STATE(45),
    [sym_byte_vector] = STATE(45),
    [aux_sym_comment_repeat1] = STATE(36),
    [aux_sym__token_token1] = ACTIONS(176),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(204),
    [sym_number] = ACTIONS(206),
    [sym_character] = ACTIONS(204),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [31] = {
    [sym__skip] = STATE(36),
    [sym__all_comment] = STATE(36),
    [sym_comment] = STATE(36),
    [sym_block_comment] = STATE(36),
    [sym__datum] = STATE(35),
    [sym__simple_datum] = STATE(35),
    [sym_string] = STATE(35),
    [sym_symbol] = STATE(35),
    [sym__compound_datum] = STATE(35),
    [sym_list] = STATE(35),
    [sym_abbreviation] = STATE(35),
    [sym__abbreviation_prefix] = STATE(29),
    [sym__special_form] = STATE(35),
    [sym_vector] = STATE(35),
    [sym_byte_vector] = STATE(35),
    [aux_sym_comment_repeat1] = STATE(36),
    [aux_sym__token_token1] = ACTIONS(176),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(208),
    [sym_number] = ACTIONS(210),
    [sym_character] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbol_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(212),
    [aux_sym__token_token1] = ACTIONS(212),
    [aux_sym_comment_token1] = ACTIONS(212),
    [anon_sym_POUND_SEMI] = ACTIONS(212),
    [anon_sym_POUND_BANG] = ACTIONS(212),
    [anon_sym_POUND_PIPE] = ACTIONS(212),
    [sym_boolean] = ACTIONS(212),
    [sym_number] = ACTIONS(214),
    [sym_character] = ACTIONS(212),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [aux_sym_symbol_token1] = ACTIONS(214),
    [anon_sym_LPAREN] = ACTIONS(212),
    [anon_sym_RPAREN] = ACTIONS(212),
    [anon_sym_LBRACK] = ACTIONS(212),
    [anon_sym_RBRACK] = ACTIONS(212),
    [anon_sym_LBRACE] = ACTIONS(212),
    [anon_sym_RBRACE] = ACTIONS(212),
    [anon_sym_SQUOTE] = ACTIONS(212),
    [anon_sym_BQUOTE] = ACTIONS(212),
    [anon_sym_COMMA] = ACTIONS(214),
    [anon_sym_COMMA_AT] = ACTIONS(212),
    [anon_sym_POUND_SQUOTE] = ACTIONS(212),
    [anon_sym_POUND_BQUOTE] = ACTIONS(212),
    [anon_sym_POUND_COMMA] = ACTIONS(214),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(212),
    [anon_sym_POUND_LPAREN] = ACTIONS(212),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(212),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(216),
    [aux_sym__token_token1] = ACTIONS(216),
    [aux_sym_comment_token1] = ACTIONS(216),
    [anon_sym_POUND_SEMI] = ACTIONS(216),
    [anon_sym_POUND_BANG] = ACTIONS(216),
    [anon_sym_POUND_PIPE] = ACTIONS(216),
    [sym_boolean] = ACTIONS(216),
    [sym_number] = ACTIONS(218),
    [sym_character] = ACTIONS(216),
    [anon_sym_DQUOTE] = ACTIONS(216),
    [aux_sym_symbol_token1] = ACTIONS(218),
    [anon_sym_LPAREN] = ACTIONS(216),
    [anon_sym_RPAREN] = ACTIONS(216),
    [anon_sym_LBRACK] = ACTIONS(216),
    [anon_sym_RBRACK] = ACTIONS(216),
    [anon_sym_LBRACE] = ACTIONS(216),
    [anon_sym_RBRACE] = ACTIONS(216),
    [anon_sym_SQUOTE] = ACTIONS(216),
    [anon_sym_BQUOTE] = ACTIONS(216),
    [anon_sym_COMMA] = ACTIONS(218),
    [anon_sym_COMMA_AT] = ACTIONS(216),
    [anon_sym_POUND_SQUOTE] = ACTIONS(216),
    [anon_sym_POUND_BQUOTE] = ACTIONS(216),
    [anon_sym_POUND_COMMA] = ACTIONS(218),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(216),
    [anon_sym_POUND_LPAREN] = ACTIONS(216),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(216),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(220),
    [aux_sym__token_token1] = ACTIONS(220),
    [aux_sym_comment_token1] = ACTIONS(220),
    [anon_sym_POUND_SEMI] = ACTIONS(220),
    [anon_sym_POUND_BANG] = ACTIONS(220),
    [anon_sym_POUND_PIPE] = ACTIONS(220),
    [sym_boolean] = ACTIONS(220),
    [sym_number] = ACTIONS(222),
    [sym_character] = ACTIONS(220),
    [anon_sym_DQUOTE] = ACTIONS(220),
    [aux_sym_symbol_token1] = ACTIONS(222),
    [anon_sym_LPAREN] = ACTIONS(220),
    [anon_sym_RPAREN] = ACTIONS(220),
    [anon_sym_LBRACK] = ACTIONS(220),
    [anon_sym_RBRACK] = ACTIONS(220),
    [anon_sym_LBRACE] = ACTIONS(220),
    [anon_sym_RBRACE] = ACTIONS(220),
    [anon_sym_SQUOTE] = ACTIONS(220),
    [anon_sym_BQUOTE] = ACTIONS(220),
    [anon_sym_COMMA] = ACTIONS(222),
    [anon_sym_COMMA_AT] = ACTIONS(220),
    [anon_sym_POUND_SQUOTE] = ACTIONS(220),
    [anon_sym_POUND_BQUOTE] = ACTIONS(220),
    [anon_sym_POUND_COMMA] = ACTIONS(222),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(220),
    [anon_sym_POUND_LPAREN] = ACTIONS(220),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(220),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(224),
    [aux_sym__token_token1] = ACTIONS(224),
    [aux_sym_comment_token1] = ACTIONS(224),
    [anon_sym_POUND_SEMI] = ACTIONS(224),
    [anon_sym_POUND_BANG] = ACTIONS(224),
    [anon_sym_POUND_PIPE] = ACTIONS(224),
    [sym_boolean] = ACTIONS(224),
    [sym_number] = ACTIONS(226),
    [sym_character] = ACTIONS(224),
    [anon_sym_DQUOTE] = ACTIONS(224),
    [aux_sym_symbol_token1] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(224),
    [anon_sym_RPAREN] = ACTIONS(224),
    [anon_sym_LBRACK] = ACTIONS(224),
    [anon_sym_RBRACK] = ACTIONS(224),
    [anon_sym_LBRACE] = ACTIONS(224),
    [anon_sym_RBRACE] = ACTIONS(224),
    [anon_sym_SQUOTE] = ACTIONS(224),
    [anon_sym_BQUOTE] = ACTIONS(224),
    [anon_sym_COMMA] = ACTIONS(226),
    [anon_sym_COMMA_AT] = ACTIONS(224),
    [anon_sym_POUND_SQUOTE] = ACTIONS(224),
    [anon_sym_POUND_BQUOTE] = ACTIONS(224),
    [anon_sym_POUND_COMMA] = ACTIONS(226),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(224),
    [anon_sym_POUND_LPAREN] = ACTIONS(224),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(224),
  },
  [36] = {
    [sym__skip] = STATE(36),
    [sym__all_comment] = STATE(36),
    [sym_comment] = STATE(36),
    [sym_block_comment] = STATE(36),
    [aux_sym_comment_repeat1] = STATE(36),
    [aux_sym__token_token1] = ACTIONS(228),
    [aux_sym_comment_token1] = ACTIONS(231),
    [anon_sym_POUND_SEMI] = ACTIONS(234),
    [anon_sym_POUND_PIPE] = ACTIONS(237),
    [sym_boolean] = ACTIONS(240),
    [sym_number] = ACTIONS(242),
    [sym_character] = ACTIONS(240),
    [anon_sym_DQUOTE] = ACTIONS(240),
    [aux_sym_symbol_token1] = ACTIONS(242),
    [anon_sym_LPAREN] = ACTIONS(240),
    [anon_sym_LBRACK] = ACTIONS(240),
    [anon_sym_LBRACE] = ACTIONS(240),
    [anon_sym_SQUOTE] = ACTIONS(240),
    [anon_sym_BQUOTE] = ACTIONS(240),
    [anon_sym_COMMA] = ACTIONS(242),
    [anon_sym_COMMA_AT] = ACTIONS(240),
    [anon_sym_POUND_SQUOTE] = ACTIONS(240),
    [anon_sym_POUND_BQUOTE] = ACTIONS(240),
    [anon_sym_POUND_COMMA] = ACTIONS(242),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(240),
    [anon_sym_POUND_LPAREN] = ACTIONS(240),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(240),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(244),
    [aux_sym__token_token1] = ACTIONS(244),
    [aux_sym_comment_token1] = ACTIONS(244),
    [anon_sym_POUND_SEMI] = ACTIONS(244),
    [anon_sym_POUND_BANG] = ACTIONS(244),
    [anon_sym_POUND_PIPE] = ACTIONS(244),
    [sym_boolean] = ACTIONS(244),
    [sym_number] = ACTIONS(246),
    [sym_character] = ACTIONS(244),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [aux_sym_symbol_token1] = ACTIONS(246),
    [anon_sym_LPAREN] = ACTIONS(244),
    [anon_sym_RPAREN] = ACTIONS(244),
    [anon_sym_LBRACK] = ACTIONS(244),
    [anon_sym_RBRACK] = ACTIONS(244),
    [anon_sym_LBRACE] = ACTIONS(244),
    [anon_sym_RBRACE] = ACTIONS(244),
    [anon_sym_SQUOTE] = ACTIONS(244),
    [anon_sym_BQUOTE] = ACTIONS(244),
    [anon_sym_COMMA] = ACTIONS(246),
    [anon_sym_COMMA_AT] = ACTIONS(244),
    [anon_sym_POUND_SQUOTE] = ACTIONS(244),
    [anon_sym_POUND_BQUOTE] = ACTIONS(244),
    [anon_sym_POUND_COMMA] = ACTIONS(246),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(244),
    [anon_sym_POUND_LPAREN] = ACTIONS(244),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(244),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(248),
    [aux_sym__token_token1] = ACTIONS(248),
    [aux_sym_comment_token1] = ACTIONS(248),
    [anon_sym_POUND_SEMI] = ACTIONS(248),
    [anon_sym_POUND_BANG] = ACTIONS(248),
    [anon_sym_POUND_PIPE] = ACTIONS(248),
    [sym_boolean] = ACTIONS(248),
    [sym_number] = ACTIONS(250),
    [sym_character] = ACTIONS(248),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [aux_sym_symbol_token1] = ACTIONS(250),
    [anon_sym_LPAREN] = ACTIONS(248),
    [anon_sym_RPAREN] = ACTIONS(248),
    [anon_sym_LBRACK] = ACTIONS(248),
    [anon_sym_RBRACK] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(248),
    [anon_sym_RBRACE] = ACTIONS(248),
    [anon_sym_SQUOTE] = ACTIONS(248),
    [anon_sym_BQUOTE] = ACTIONS(248),
    [anon_sym_COMMA] = ACTIONS(250),
    [anon_sym_COMMA_AT] = ACTIONS(248),
    [anon_sym_POUND_SQUOTE] = ACTIONS(248),
    [anon_sym_POUND_BQUOTE] = ACTIONS(248),
    [anon_sym_POUND_COMMA] = ACTIONS(250),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(248),
    [anon_sym_POUND_LPAREN] = ACTIONS(248),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(248),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(252),
    [aux_sym__token_token1] = ACTIONS(252),
    [aux_sym_comment_token1] = ACTIONS(252),
    [anon_sym_POUND_SEMI] = ACTIONS(252),
    [anon_sym_POUND_BANG] = ACTIONS(252),
    [anon_sym_POUND_PIPE] = ACTIONS(252),
    [sym_boolean] = ACTIONS(252),
    [sym_number] = ACTIONS(254),
    [sym_character] = ACTIONS(252),
    [anon_sym_DQUOTE] = ACTIONS(252),
    [aux_sym_symbol_token1] = ACTIONS(254),
    [anon_sym_LPAREN] = ACTIONS(252),
    [anon_sym_RPAREN] = ACTIONS(252),
    [anon_sym_LBRACK] = ACTIONS(252),
    [anon_sym_RBRACK] = ACTIONS(252),
    [anon_sym_LBRACE] = ACTIONS(252),
    [anon_sym_RBRACE] = ACTIONS(252),
    [anon_sym_SQUOTE] = ACTIONS(252),
    [anon_sym_BQUOTE] = ACTIONS(252),
    [anon_sym_COMMA] = ACTIONS(254),
    [anon_sym_COMMA_AT] = ACTIONS(252),
    [anon_sym_POUND_SQUOTE] = ACTIONS(252),
    [anon_sym_POUND_BQUOTE] = ACTIONS(252),
    [anon_sym_POUND_COMMA] = ACTIONS(254),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(252),
    [anon_sym_POUND_LPAREN] = ACTIONS(252),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(252),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(256),
    [aux_sym__token_token1] = ACTIONS(256),
    [aux_sym_comment_token1] = ACTIONS(256),
    [anon_sym_POUND_SEMI] = ACTIONS(256),
    [anon_sym_POUND_BANG] = ACTIONS(256),
    [anon_sym_POUND_PIPE] = ACTIONS(256),
    [sym_boolean] = ACTIONS(256),
    [sym_number] = ACTIONS(258),
    [sym_character] = ACTIONS(256),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [aux_sym_symbol_token1] = ACTIONS(258),
    [anon_sym_LPAREN] = ACTIONS(256),
    [anon_sym_RPAREN] = ACTIONS(256),
    [anon_sym_LBRACK] = ACTIONS(256),
    [anon_sym_RBRACK] = ACTIONS(256),
    [anon_sym_LBRACE] = ACTIONS(256),
    [anon_sym_RBRACE] = ACTIONS(256),
    [anon_sym_SQUOTE] = ACTIONS(256),
    [anon_sym_BQUOTE] = ACTIONS(256),
    [anon_sym_COMMA] = ACTIONS(258),
    [anon_sym_COMMA_AT] = ACTIONS(256),
    [anon_sym_POUND_SQUOTE] = ACTIONS(256),
    [anon_sym_POUND_BQUOTE] = ACTIONS(256),
    [anon_sym_POUND_COMMA] = ACTIONS(258),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(256),
    [anon_sym_POUND_LPAREN] = ACTIONS(256),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(256),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(260),
    [aux_sym__token_token1] = ACTIONS(260),
    [aux_sym_comment_token1] = ACTIONS(260),
    [anon_sym_POUND_SEMI] = ACTIONS(260),
    [anon_sym_POUND_BANG] = ACTIONS(260),
    [anon_sym_POUND_PIPE] = ACTIONS(260),
    [sym_boolean] = ACTIONS(260),
    [sym_number] = ACTIONS(262),
    [sym_character] = ACTIONS(260),
    [anon_sym_DQUOTE] = ACTIONS(260),
    [aux_sym_symbol_token1] = ACTIONS(262),
    [anon_sym_LPAREN] = ACTIONS(260),
    [anon_sym_RPAREN] = ACTIONS(260),
    [anon_sym_LBRACK] = ACTIONS(260),
    [anon_sym_RBRACK] = ACTIONS(260),
    [anon_sym_LBRACE] = ACTIONS(260),
    [anon_sym_RBRACE] = ACTIONS(260),
    [anon_sym_SQUOTE] = ACTIONS(260),
    [anon_sym_BQUOTE] = ACTIONS(260),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_COMMA_AT] = ACTIONS(260),
    [anon_sym_POUND_SQUOTE] = ACTIONS(260),
    [anon_sym_POUND_BQUOTE] = ACTIONS(260),
    [anon_sym_POUND_COMMA] = ACTIONS(262),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(260),
    [anon_sym_POUND_LPAREN] = ACTIONS(260),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(260),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(264),
    [aux_sym__token_token1] = ACTIONS(264),
    [aux_sym_comment_token1] = ACTIONS(264),
    [anon_sym_POUND_SEMI] = ACTIONS(264),
    [anon_sym_POUND_BANG] = ACTIONS(264),
    [anon_sym_POUND_PIPE] = ACTIONS(264),
    [sym_boolean] = ACTIONS(264),
    [sym_number] = ACTIONS(266),
    [sym_character] = ACTIONS(264),
    [anon_sym_DQUOTE] = ACTIONS(264),
    [aux_sym_symbol_token1] = ACTIONS(266),
    [anon_sym_LPAREN] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(264),
    [anon_sym_LBRACK] = ACTIONS(264),
    [anon_sym_RBRACK] = ACTIONS(264),
    [anon_sym_LBRACE] = ACTIONS(264),
    [anon_sym_RBRACE] = ACTIONS(264),
    [anon_sym_SQUOTE] = ACTIONS(264),
    [anon_sym_BQUOTE] = ACTIONS(264),
    [anon_sym_COMMA] = ACTIONS(266),
    [anon_sym_COMMA_AT] = ACTIONS(264),
    [anon_sym_POUND_SQUOTE] = ACTIONS(264),
    [anon_sym_POUND_BQUOTE] = ACTIONS(264),
    [anon_sym_POUND_COMMA] = ACTIONS(266),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(264),
    [anon_sym_POUND_LPAREN] = ACTIONS(264),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(264),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(268),
    [aux_sym__token_token1] = ACTIONS(268),
    [aux_sym_comment_token1] = ACTIONS(268),
    [anon_sym_POUND_SEMI] = ACTIONS(268),
    [anon_sym_POUND_BANG] = ACTIONS(268),
    [anon_sym_POUND_PIPE] = ACTIONS(268),
    [sym_boolean] = ACTIONS(268),
    [sym_number] = ACTIONS(270),
    [sym_character] = ACTIONS(268),
    [anon_sym_DQUOTE] = ACTIONS(268),
    [aux_sym_symbol_token1] = ACTIONS(270),
    [anon_sym_LPAREN] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(268),
    [anon_sym_LBRACK] = ACTIONS(268),
    [anon_sym_RBRACK] = ACTIONS(268),
    [anon_sym_LBRACE] = ACTIONS(268),
    [anon_sym_RBRACE] = ACTIONS(268),
    [anon_sym_SQUOTE] = ACTIONS(268),
    [anon_sym_BQUOTE] = ACTIONS(268),
    [anon_sym_COMMA] = ACTIONS(270),
    [anon_sym_COMMA_AT] = ACTIONS(268),
    [anon_sym_POUND_SQUOTE] = ACTIONS(268),
    [anon_sym_POUND_BQUOTE] = ACTIONS(268),
    [anon_sym_POUND_COMMA] = ACTIONS(270),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(268),
    [anon_sym_POUND_LPAREN] = ACTIONS(268),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(268),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(272),
    [aux_sym__token_token1] = ACTIONS(272),
    [aux_sym_comment_token1] = ACTIONS(272),
    [anon_sym_POUND_SEMI] = ACTIONS(272),
    [anon_sym_POUND_BANG] = ACTIONS(272),
    [anon_sym_POUND_PIPE] = ACTIONS(272),
    [sym_boolean] = ACTIONS(272),
    [sym_number] = ACTIONS(274),
    [sym_character] = ACTIONS(272),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [aux_sym_symbol_token1] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_RPAREN] = ACTIONS(272),
    [anon_sym_LBRACK] = ACTIONS(272),
    [anon_sym_RBRACK] = ACTIONS(272),
    [anon_sym_LBRACE] = ACTIONS(272),
    [anon_sym_RBRACE] = ACTIONS(272),
    [anon_sym_SQUOTE] = ACTIONS(272),
    [anon_sym_BQUOTE] = ACTIONS(272),
    [anon_sym_COMMA] = ACTIONS(274),
    [anon_sym_COMMA_AT] = ACTIONS(272),
    [anon_sym_POUND_SQUOTE] = ACTIONS(272),
    [anon_sym_POUND_BQUOTE] = ACTIONS(272),
    [anon_sym_POUND_COMMA] = ACTIONS(274),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(272),
    [anon_sym_POUND_LPAREN] = ACTIONS(272),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(272),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(276),
    [aux_sym__token_token1] = ACTIONS(276),
    [aux_sym_comment_token1] = ACTIONS(276),
    [anon_sym_POUND_SEMI] = ACTIONS(276),
    [anon_sym_POUND_BANG] = ACTIONS(276),
    [anon_sym_POUND_PIPE] = ACTIONS(276),
    [sym_boolean] = ACTIONS(276),
    [sym_number] = ACTIONS(278),
    [sym_character] = ACTIONS(276),
    [anon_sym_DQUOTE] = ACTIONS(276),
    [aux_sym_symbol_token1] = ACTIONS(278),
    [anon_sym_LPAREN] = ACTIONS(276),
    [anon_sym_RPAREN] = ACTIONS(276),
    [anon_sym_LBRACK] = ACTIONS(276),
    [anon_sym_RBRACK] = ACTIONS(276),
    [anon_sym_LBRACE] = ACTIONS(276),
    [anon_sym_RBRACE] = ACTIONS(276),
    [anon_sym_SQUOTE] = ACTIONS(276),
    [anon_sym_BQUOTE] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(278),
    [anon_sym_COMMA_AT] = ACTIONS(276),
    [anon_sym_POUND_SQUOTE] = ACTIONS(276),
    [anon_sym_POUND_BQUOTE] = ACTIONS(276),
    [anon_sym_POUND_COMMA] = ACTIONS(278),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(276),
    [anon_sym_POUND_LPAREN] = ACTIONS(276),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(276),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(280),
    [aux_sym__token_token1] = ACTIONS(280),
    [aux_sym_comment_token1] = ACTIONS(280),
    [anon_sym_POUND_SEMI] = ACTIONS(280),
    [anon_sym_POUND_BANG] = ACTIONS(280),
    [anon_sym_POUND_PIPE] = ACTIONS(280),
    [sym_boolean] = ACTIONS(280),
    [sym_number] = ACTIONS(282),
    [sym_character] = ACTIONS(280),
    [anon_sym_DQUOTE] = ACTIONS(280),
    [aux_sym_symbol_token1] = ACTIONS(282),
    [anon_sym_LPAREN] = ACTIONS(280),
    [anon_sym_RPAREN] = ACTIONS(280),
    [anon_sym_LBRACK] = ACTIONS(280),
    [anon_sym_RBRACK] = ACTIONS(280),
    [anon_sym_LBRACE] = ACTIONS(280),
    [anon_sym_RBRACE] = ACTIONS(280),
    [anon_sym_SQUOTE] = ACTIONS(280),
    [anon_sym_BQUOTE] = ACTIONS(280),
    [anon_sym_COMMA] = ACTIONS(282),
    [anon_sym_COMMA_AT] = ACTIONS(280),
    [anon_sym_POUND_SQUOTE] = ACTIONS(280),
    [anon_sym_POUND_BQUOTE] = ACTIONS(280),
    [anon_sym_POUND_COMMA] = ACTIONS(282),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(280),
    [anon_sym_POUND_LPAREN] = ACTIONS(280),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(280),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(284),
    [aux_sym__token_token1] = ACTIONS(284),
    [aux_sym_comment_token1] = ACTIONS(284),
    [anon_sym_POUND_SEMI] = ACTIONS(284),
    [anon_sym_POUND_BANG] = ACTIONS(284),
    [anon_sym_POUND_PIPE] = ACTIONS(284),
    [sym_boolean] = ACTIONS(284),
    [sym_number] = ACTIONS(286),
    [sym_character] = ACTIONS(284),
    [anon_sym_DQUOTE] = ACTIONS(284),
    [aux_sym_symbol_token1] = ACTIONS(286),
    [anon_sym_LPAREN] = ACTIONS(284),
    [anon_sym_RPAREN] = ACTIONS(284),
    [anon_sym_LBRACK] = ACTIONS(284),
    [anon_sym_RBRACK] = ACTIONS(284),
    [anon_sym_LBRACE] = ACTIONS(284),
    [anon_sym_RBRACE] = ACTIONS(284),
    [anon_sym_SQUOTE] = ACTIONS(284),
    [anon_sym_BQUOTE] = ACTIONS(284),
    [anon_sym_COMMA] = ACTIONS(286),
    [anon_sym_COMMA_AT] = ACTIONS(284),
    [anon_sym_POUND_SQUOTE] = ACTIONS(284),
    [anon_sym_POUND_BQUOTE] = ACTIONS(284),
    [anon_sym_POUND_COMMA] = ACTIONS(286),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(284),
    [anon_sym_POUND_LPAREN] = ACTIONS(284),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(284),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(288),
    [aux_sym__token_token1] = ACTIONS(288),
    [aux_sym_comment_token1] = ACTIONS(288),
    [anon_sym_POUND_SEMI] = ACTIONS(288),
    [anon_sym_POUND_BANG] = ACTIONS(288),
    [anon_sym_POUND_PIPE] = ACTIONS(288),
    [sym_boolean] = ACTIONS(288),
    [sym_number] = ACTIONS(290),
    [sym_character] = ACTIONS(288),
    [anon_sym_DQUOTE] = ACTIONS(288),
    [aux_sym_symbol_token1] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(288),
    [anon_sym_RPAREN] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(288),
    [anon_sym_RBRACK] = ACTIONS(288),
    [anon_sym_LBRACE] = ACTIONS(288),
    [anon_sym_RBRACE] = ACTIONS(288),
    [anon_sym_SQUOTE] = ACTIONS(288),
    [anon_sym_BQUOTE] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(290),
    [anon_sym_COMMA_AT] = ACTIONS(288),
    [anon_sym_POUND_SQUOTE] = ACTIONS(288),
    [anon_sym_POUND_BQUOTE] = ACTIONS(288),
    [anon_sym_POUND_COMMA] = ACTIONS(290),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(288),
    [anon_sym_POUND_LPAREN] = ACTIONS(288),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(288),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(292),
    [aux_sym__token_token1] = ACTIONS(292),
    [aux_sym_comment_token1] = ACTIONS(292),
    [anon_sym_POUND_SEMI] = ACTIONS(292),
    [anon_sym_POUND_BANG] = ACTIONS(292),
    [anon_sym_POUND_PIPE] = ACTIONS(292),
    [sym_boolean] = ACTIONS(292),
    [sym_number] = ACTIONS(294),
    [sym_character] = ACTIONS(292),
    [anon_sym_DQUOTE] = ACTIONS(292),
    [aux_sym_symbol_token1] = ACTIONS(294),
    [anon_sym_LPAREN] = ACTIONS(292),
    [anon_sym_RPAREN] = ACTIONS(292),
    [anon_sym_LBRACK] = ACTIONS(292),
    [anon_sym_RBRACK] = ACTIONS(292),
    [anon_sym_LBRACE] = ACTIONS(292),
    [anon_sym_RBRACE] = ACTIONS(292),
    [anon_sym_SQUOTE] = ACTIONS(292),
    [anon_sym_BQUOTE] = ACTIONS(292),
    [anon_sym_COMMA] = ACTIONS(294),
    [anon_sym_COMMA_AT] = ACTIONS(292),
    [anon_sym_POUND_SQUOTE] = ACTIONS(292),
    [anon_sym_POUND_BQUOTE] = ACTIONS(292),
    [anon_sym_POUND_COMMA] = ACTIONS(294),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(292),
    [anon_sym_POUND_LPAREN] = ACTIONS(292),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(292),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(296),
    [aux_sym__token_token1] = ACTIONS(296),
    [aux_sym_comment_token1] = ACTIONS(296),
    [anon_sym_POUND_SEMI] = ACTIONS(296),
    [anon_sym_POUND_BANG] = ACTIONS(296),
    [anon_sym_POUND_PIPE] = ACTIONS(296),
    [sym_boolean] = ACTIONS(296),
    [sym_number] = ACTIONS(298),
    [sym_character] = ACTIONS(296),
    [anon_sym_DQUOTE] = ACTIONS(296),
    [aux_sym_symbol_token1] = ACTIONS(298),
    [anon_sym_LPAREN] = ACTIONS(296),
    [anon_sym_RPAREN] = ACTIONS(296),
    [anon_sym_LBRACK] = ACTIONS(296),
    [anon_sym_RBRACK] = ACTIONS(296),
    [anon_sym_LBRACE] = ACTIONS(296),
    [anon_sym_RBRACE] = ACTIONS(296),
    [anon_sym_SQUOTE] = ACTIONS(296),
    [anon_sym_BQUOTE] = ACTIONS(296),
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_COMMA_AT] = ACTIONS(296),
    [anon_sym_POUND_SQUOTE] = ACTIONS(296),
    [anon_sym_POUND_BQUOTE] = ACTIONS(296),
    [anon_sym_POUND_COMMA] = ACTIONS(298),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(296),
    [anon_sym_POUND_LPAREN] = ACTIONS(296),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(296),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(300), 1,
      aux_sym__token_token1,
    ACTIONS(302), 1,
      aux_sym_comment_token1,
    ACTIONS(304), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(306), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(308), 1,
      aux_sym_symbol_token1,
    STATE(37), 1,
      sym_symbol,
    STATE(53), 5,
      sym__skip,
      sym__all_comment,
      sym_comment,
      sym_block_comment,
      aux_sym_comment_repeat1,
  [26] = 7,
    ACTIONS(302), 1,
      aux_sym_comment_token1,
    ACTIONS(304), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(306), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(308), 1,
      aux_sym_symbol_token1,
    ACTIONS(310), 1,
      aux_sym__token_token1,
    STATE(49), 1,
      sym_symbol,
    STATE(51), 5,
      sym__skip,
      sym__all_comment,
      sym_comment,
      sym_block_comment,
      aux_sym_comment_repeat1,
  [52] = 6,
    ACTIONS(240), 1,
      aux_sym_symbol_token1,
    ACTIONS(312), 1,
      aux_sym__token_token1,
    ACTIONS(315), 1,
      aux_sym_comment_token1,
    ACTIONS(318), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(321), 1,
      anon_sym_POUND_PIPE,
    STATE(53), 5,
      sym__skip,
      sym__all_comment,
      sym_comment,
      sym_block_comment,
      aux_sym_comment_repeat1,
  [75] = 1,
    ACTIONS(216), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [83] = 4,
    ACTIONS(324), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(326), 1,
      aux_sym_block_comment_token1,
    ACTIONS(328), 1,
      anon_sym_PIPE_POUND,
    STATE(76), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [97] = 1,
    ACTIONS(280), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [105] = 1,
    ACTIONS(220), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [113] = 4,
    ACTIONS(324), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(330), 1,
      aux_sym_block_comment_token1,
    ACTIONS(332), 1,
      anon_sym_PIPE_POUND,
    STATE(68), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [127] = 1,
    ACTIONS(224), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [135] = 1,
    ACTIONS(248), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [143] = 1,
    ACTIONS(256), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [151] = 1,
    ACTIONS(264), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [159] = 1,
    ACTIONS(212), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [167] = 1,
    ACTIONS(272), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [175] = 1,
    ACTIONS(276), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [183] = 4,
    ACTIONS(324), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(334), 1,
      aux_sym_block_comment_token1,
    ACTIONS(336), 1,
      anon_sym_PIPE_POUND,
    STATE(58), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [197] = 4,
    ACTIONS(324), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(338), 1,
      aux_sym_block_comment_token1,
    ACTIONS(340), 1,
      anon_sym_PIPE_POUND,
    STATE(71), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [211] = 4,
    ACTIONS(342), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(345), 1,
      aux_sym_block_comment_token1,
    ACTIONS(348), 1,
      anon_sym_PIPE_POUND,
    STATE(68), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [225] = 1,
    ACTIONS(288), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [233] = 1,
    ACTIONS(260), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [241] = 4,
    ACTIONS(324), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(330), 1,
      aux_sym_block_comment_token1,
    ACTIONS(350), 1,
      anon_sym_PIPE_POUND,
    STATE(68), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [255] = 1,
    ACTIONS(296), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [263] = 1,
    ACTIONS(252), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [271] = 1,
    ACTIONS(268), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [279] = 1,
    ACTIONS(284), 5,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_PIPE,
      aux_sym_symbol_token1,
  [287] = 4,
    ACTIONS(324), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(330), 1,
      aux_sym_block_comment_token1,
    ACTIONS(352), 1,
      anon_sym_PIPE_POUND,
    STATE(68), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [301] = 3,
    ACTIONS(354), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      aux_sym_string_repeat1,
    ACTIONS(356), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [312] = 3,
    ACTIONS(358), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      aux_sym_string_repeat1,
    ACTIONS(360), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [323] = 3,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    STATE(81), 1,
      aux_sym_string_repeat1,
    ACTIONS(364), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [334] = 3,
    ACTIONS(366), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      aux_sym_string_repeat1,
    ACTIONS(368), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [345] = 3,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      aux_sym_string_repeat1,
    ACTIONS(356), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [356] = 2,
    ACTIONS(250), 1,
      aux_sym_block_comment_token1,
    ACTIONS(248), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [364] = 2,
    ACTIONS(270), 1,
      aux_sym_block_comment_token1,
    ACTIONS(268), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [372] = 1,
    ACTIONS(373), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(51)] = 0,
  [SMALL_STATE(52)] = 26,
  [SMALL_STATE(53)] = 52,
  [SMALL_STATE(54)] = 75,
  [SMALL_STATE(55)] = 83,
  [SMALL_STATE(56)] = 97,
  [SMALL_STATE(57)] = 105,
  [SMALL_STATE(58)] = 113,
  [SMALL_STATE(59)] = 127,
  [SMALL_STATE(60)] = 135,
  [SMALL_STATE(61)] = 143,
  [SMALL_STATE(62)] = 151,
  [SMALL_STATE(63)] = 159,
  [SMALL_STATE(64)] = 167,
  [SMALL_STATE(65)] = 175,
  [SMALL_STATE(66)] = 183,
  [SMALL_STATE(67)] = 197,
  [SMALL_STATE(68)] = 211,
  [SMALL_STATE(69)] = 225,
  [SMALL_STATE(70)] = 233,
  [SMALL_STATE(71)] = 241,
  [SMALL_STATE(72)] = 255,
  [SMALL_STATE(73)] = 263,
  [SMALL_STATE(74)] = 271,
  [SMALL_STATE(75)] = 279,
  [SMALL_STATE(76)] = 287,
  [SMALL_STATE(77)] = 301,
  [SMALL_STATE(78)] = 312,
  [SMALL_STATE(79)] = 323,
  [SMALL_STATE(80)] = 334,
  [SMALL_STATE(81)] = 345,
  [SMALL_STATE(82)] = 356,
  [SMALL_STATE(83)] = 364,
  [SMALL_STATE(84)] = 372,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(33),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(52),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(67),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(79),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(41),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abbreviation, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abbreviation, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(36),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(33),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(28),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(67),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_vector, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_vector, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abbreviation, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abbreviation, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_vector, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_vector, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(53),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(54),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(27),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(55),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(66),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(68),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(80),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [373] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_scheme(void) {
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
