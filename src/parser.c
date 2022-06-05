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
#define STATE_COUNT 176
#define LARGE_STATE_COUNT 79
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym__token_token1 = 1,
  sym_dot = 2,
  aux_sym_comment_token1 = 3,
  anon_sym_POUND_PIPE = 4,
  aux_sym_block_comment_token1 = 5,
  anon_sym_PIPE_POUND = 6,
  anon_sym_POUND_SEMI = 7,
  sym__line_comment = 8,
  sym_boolean = 9,
  anon_sym_POUND = 10,
  anon_sym_POUND_LT_LT = 11,
  aux_sym_regex_token1 = 12,
  anon_sym_DQUOTE = 13,
  aux_sym__real_string_token1 = 14,
  sym_escape_sequence = 15,
  sym_number = 16,
  sym_decimal = 17,
  sym_character = 18,
  aux_sym_symbol_token1 = 19,
  sym_keyword = 20,
  anon_sym_POUND_AMP = 21,
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  anon_sym_LBRACK = 24,
  anon_sym_RBRACK = 25,
  anon_sym_LBRACE = 26,
  anon_sym_RBRACE = 27,
  anon_sym_POUNDfl = 28,
  anon_sym_POUNDfx = 29,
  anon_sym_POUNDs = 30,
  anon_sym_POUNDhash = 31,
  anon_sym_POUNDhasheq = 32,
  anon_sym_POUNDhasheqv = 33,
  anon_sym_EQ = 34,
  anon_sym_SQUOTE = 35,
  anon_sym_BQUOTE = 36,
  anon_sym_COMMA = 37,
  anon_sym_COMMA_AT = 38,
  anon_sym_POUND_SQUOTE = 39,
  anon_sym_POUND_BQUOTE = 40,
  anon_sym_POUND_COMMA = 41,
  anon_sym_POUND_COMMA_AT = 42,
  anon_sym_POUNDreader = 43,
  anon_sym_POUNDlang = 44,
  anon_sym_POUND_BANG = 45,
  sym_lang_name = 46,
  sym__here_string_body = 47,
  sym_program = 48,
  sym__token = 49,
  sym__skip = 50,
  sym__all_comment = 51,
  sym_comment = 52,
  sym_block_comment = 53,
  sym_sexp_comment = 54,
  sym__datum = 55,
  sym_string = 56,
  sym_byte_string = 57,
  sym_here_string = 58,
  sym_regex = 59,
  sym__real_string = 60,
  sym_symbol = 61,
  sym_box = 62,
  sym_list = 63,
  sym_vector = 64,
  sym_structure = 65,
  sym_hash = 66,
  sym_graph = 67,
  sym_quote = 68,
  sym_extension = 69,
  aux_sym_program_repeat1 = 70,
  aux_sym_block_comment_repeat1 = 71,
  aux_sym_sexp_comment_repeat1 = 72,
  aux_sym__real_string_repeat1 = 73,
  aux_sym_list_repeat1 = 74,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__token_token1] = "_token_token1",
  [sym_dot] = "dot",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_POUND_PIPE] = "#|",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_PIPE_POUND] = "|#",
  [anon_sym_POUND_SEMI] = "#;",
  [sym__line_comment] = "_line_comment",
  [sym_boolean] = "boolean",
  [anon_sym_POUND] = "#",
  [anon_sym_POUND_LT_LT] = "#<<",
  [aux_sym_regex_token1] = "regex_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__real_string_token1] = "_real_string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_decimal] = "decimal",
  [sym_character] = "character",
  [aux_sym_symbol_token1] = "symbol_token1",
  [sym_keyword] = "keyword",
  [anon_sym_POUND_AMP] = "#&",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_POUNDfl] = "#fl",
  [anon_sym_POUNDfx] = "#fx",
  [anon_sym_POUNDs] = "#s",
  [anon_sym_POUNDhash] = "#hash",
  [anon_sym_POUNDhasheq] = "#hasheq",
  [anon_sym_POUNDhasheqv] = "#hasheqv",
  [anon_sym_EQ] = "=",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_COMMA] = ",",
  [anon_sym_COMMA_AT] = ",@",
  [anon_sym_POUND_SQUOTE] = "#'",
  [anon_sym_POUND_BQUOTE] = "#`",
  [anon_sym_POUND_COMMA] = "#,",
  [anon_sym_POUND_COMMA_AT] = "#,@",
  [anon_sym_POUNDreader] = "#reader",
  [anon_sym_POUNDlang] = "#lang ",
  [anon_sym_POUND_BANG] = "#!",
  [sym_lang_name] = "lang_name",
  [sym__here_string_body] = "_here_string_body",
  [sym_program] = "program",
  [sym__token] = "_token",
  [sym__skip] = "_skip",
  [sym__all_comment] = "_all_comment",
  [sym_comment] = "comment",
  [sym_block_comment] = "block_comment",
  [sym_sexp_comment] = "sexp_comment",
  [sym__datum] = "_datum",
  [sym_string] = "string",
  [sym_byte_string] = "byte_string",
  [sym_here_string] = "here_string",
  [sym_regex] = "regex",
  [sym__real_string] = "_real_string",
  [sym_symbol] = "symbol",
  [sym_box] = "box",
  [sym_list] = "list",
  [sym_vector] = "vector",
  [sym_structure] = "structure",
  [sym_hash] = "hash",
  [sym_graph] = "graph",
  [sym_quote] = "quote",
  [sym_extension] = "extension",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
  [aux_sym_sexp_comment_repeat1] = "sexp_comment_repeat1",
  [aux_sym__real_string_repeat1] = "_real_string_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__token_token1] = aux_sym__token_token1,
  [sym_dot] = sym_dot,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_POUND_PIPE] = anon_sym_POUND_PIPE,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_PIPE_POUND] = anon_sym_PIPE_POUND,
  [anon_sym_POUND_SEMI] = anon_sym_POUND_SEMI,
  [sym__line_comment] = sym__line_comment,
  [sym_boolean] = sym_boolean,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_POUND_LT_LT] = anon_sym_POUND_LT_LT,
  [aux_sym_regex_token1] = aux_sym_regex_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__real_string_token1] = aux_sym__real_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_decimal] = sym_decimal,
  [sym_character] = sym_character,
  [aux_sym_symbol_token1] = aux_sym_symbol_token1,
  [sym_keyword] = sym_keyword,
  [anon_sym_POUND_AMP] = anon_sym_POUND_AMP,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_POUNDfl] = anon_sym_POUNDfl,
  [anon_sym_POUNDfx] = anon_sym_POUNDfx,
  [anon_sym_POUNDs] = anon_sym_POUNDs,
  [anon_sym_POUNDhash] = anon_sym_POUNDhash,
  [anon_sym_POUNDhasheq] = anon_sym_POUNDhasheq,
  [anon_sym_POUNDhasheqv] = anon_sym_POUNDhasheqv,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COMMA_AT] = anon_sym_COMMA_AT,
  [anon_sym_POUND_SQUOTE] = anon_sym_POUND_SQUOTE,
  [anon_sym_POUND_BQUOTE] = anon_sym_POUND_BQUOTE,
  [anon_sym_POUND_COMMA] = anon_sym_POUND_COMMA,
  [anon_sym_POUND_COMMA_AT] = anon_sym_POUND_COMMA_AT,
  [anon_sym_POUNDreader] = anon_sym_POUNDreader,
  [anon_sym_POUNDlang] = anon_sym_POUNDlang,
  [anon_sym_POUND_BANG] = anon_sym_POUND_BANG,
  [sym_lang_name] = sym_lang_name,
  [sym__here_string_body] = sym__here_string_body,
  [sym_program] = sym_program,
  [sym__token] = sym__token,
  [sym__skip] = sym__skip,
  [sym__all_comment] = sym__all_comment,
  [sym_comment] = sym_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_sexp_comment] = sym_sexp_comment,
  [sym__datum] = sym__datum,
  [sym_string] = sym_string,
  [sym_byte_string] = sym_byte_string,
  [sym_here_string] = sym_here_string,
  [sym_regex] = sym_regex,
  [sym__real_string] = sym__real_string,
  [sym_symbol] = sym_symbol,
  [sym_box] = sym_box,
  [sym_list] = sym_list,
  [sym_vector] = sym_vector,
  [sym_structure] = sym_structure,
  [sym_hash] = sym_hash,
  [sym_graph] = sym_graph,
  [sym_quote] = sym_quote,
  [sym_extension] = sym_extension,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
  [aux_sym_sexp_comment_repeat1] = aux_sym_sexp_comment_repeat1,
  [aux_sym__real_string_repeat1] = aux_sym__real_string_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
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
  [sym_dot] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
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
  [anon_sym_POUND_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym__line_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_regex_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__real_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_symbol_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND_AMP] = {
    .visible = true,
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
  [anon_sym_POUNDfl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDfx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDhash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDhasheq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDhasheqv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_POUNDreader] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDlang] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym_lang_name] = {
    .visible = true,
    .named = true,
  },
  [sym__here_string_body] = {
    .visible = false,
    .named = true,
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
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_sexp_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__datum] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_byte_string] = {
    .visible = true,
    .named = true,
  },
  [sym_here_string] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym__real_string] = {
    .visible = false,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_box] = {
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
  [sym_structure] = {
    .visible = true,
    .named = true,
  },
  [sym_hash] = {
    .visible = true,
    .named = true,
  },
  [sym_graph] = {
    .visible = true,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_extension] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sexp_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__real_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
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
    ? (c < 133
      ? (c < ' '
        ? (c >= '\t' && c <= '\r')
        : c <= ' ')
      : (c <= 133 || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8202 || (c < 8287
      ? (c < 8239
        ? (c >= 8232 && c <= 8233)
        : c <= 8239)
      : (c <= 8287 || c == 12288))));
}

static inline bool sym_escape_sequence_character_set_1(int32_t c) {
  return (c < 'e'
    ? (c < '\''
      ? (c < '\r'
        ? c == '\n'
        : (c <= '\r' || c == '"'))
      : (c <= '\'' || (c < 'a'
        ? c == '\\'
        : c <= 'b')))
    : (c <= 'f' || (c < 'v'
      ? (c < 'r'
        ? c == 'n'
        : (c <= 'r' || c == 't'))
      : (c <= 'v' || (c < 8232
        ? c == 133
        : c <= 8233)))));
}

static inline bool sym_keyword_character_set_1(int32_t c) {
  return (c < '{'
    ? (c < '\''
      ? (c < ' '
        ? (c < '\t'
          ? c == 0
          : c <= '\r')
        : (c <= ' ' || c == '"'))
      : (c <= ')' || (c < '['
        ? (c < ';'
          ? c == ','
          : c <= ';')
        : (c <= ']' || c == '`'))))
    : (c <= '}' || (c < 8232
      ? (c < 5760
        ? (c < 160
          ? c == 133
          : c <= 160)
        : (c <= 5760 || (c >= 8192 && c <= 8202)))
      : (c <= 8233 || (c < 12288
        ? (c < 8287
          ? c == 8239
          : c <= 8287)
        : (c <= 12288 || c == 65279))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(207);
      if (aux_sym__token_token1_character_set_1(lookahead)) ADVANCE(208);
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == '(') ADVANCE(395);
      if (lookahead == ')') ADVANCE(396);
      if (lookahead == ',') ADVANCE(410);
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == ';') ADVANCE(211);
      if (lookahead == '=') ADVANCE(407);
      if (lookahead == '[') ADVANCE(397);
      if (lookahead == ']') ADVANCE(398);
      if (lookahead == '`') ADVANCE(409);
      if (lookahead == '{') ADVANCE(399);
      if (lookahead == '|') ADVANCE(214);
      if (lookahead == '}') ADVANCE(400);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(418);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '#') ADVANCE(224);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == '(') ADVANCE(395);
      if (lookahead == ')') ADVANCE(396);
      if (lookahead == ',') ADVANCE(411);
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == ';') ADVANCE(211);
      if (lookahead == '[') ADVANCE(397);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == ']') ADVANCE(398);
      if (lookahead == '`') ADVANCE(409);
      if (lookahead == '{') ADVANCE(399);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '}') ADVANCE(400);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      if (aux_sym__token_token1_character_set_1(lookahead)) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != 65279) ADVANCE(389);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == '(') ADVANCE(395);
      if (lookahead == ',') ADVANCE(411);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ';') ADVANCE(211);
      if (lookahead == '[') ADVANCE(397);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '`') ADVANCE(409);
      if (lookahead == '{') ADVANCE(399);
      if (lookahead == '|') ADVANCE(105);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      if (aux_sym__token_token1_character_set_1(lookahead)) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ']' &&
          lookahead != '}' &&
          lookahead != 65279) ADVANCE(389);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '(') ADVANCE(395);
      if (lookahead == '=') ADVANCE(407);
      if (lookahead == '[') ADVANCE(397);
      if (lookahead == '{') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(190);
      if (lookahead != 0) ADVANCE(231);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(267);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(119);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(119);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(119);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(119);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(13);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(15);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(164);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(279);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(18);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(20);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(291);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(198);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(122);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(122);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(198);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(122);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(122);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(267);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(279);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(291);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(168);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(142);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(151);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(271);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(192);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(153);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(297);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(169);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(148);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(275);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(148);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(275);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(152);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(283);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(195);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(195);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(148);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(167);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(13);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(178);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(287);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(178);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(148);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(287);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(306);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(179);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(18);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(170);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(171);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(172);
      END_STATE();
    case 56:
      if (lookahead == '<') ADVANCE(227);
      END_STATE();
    case 57:
      if (lookahead == 'U') ADVANCE(350);
      if (lookahead == 'b') ADVANCE(333);
      if (lookahead == 'l') ADVANCE(338);
      if (lookahead == 'n') ADVANCE(336);
      if (lookahead == 'p') ADVANCE(334);
      if (lookahead == 'r') ADVANCE(337);
      if (lookahead == 's') ADVANCE(340);
      if (lookahead == 't') ADVANCE(335);
      if (lookahead == 'u') ADVANCE(346);
      if (lookahead == 'v') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(332);
      END_STATE();
    case 58:
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '|') ADVANCE(106);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'b') ADVANCE(332);
      END_STATE();
    case 65:
      if (lookahead == 'b') ADVANCE(90);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(332);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'x') ADVANCE(229);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 77:
      if (lookahead == 'f') ADVANCE(76);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(1);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(71);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(404);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 82:
      if (lookahead == 'k') ADVANCE(97);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(339);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 91:
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 92:
      if (lookahead == 'q') ADVANCE(405);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 97:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 100:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 101:
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 102:
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 103:
      if (lookahead == 'w') ADVANCE(84);
      END_STATE();
    case 104:
      if (lookahead == 'x') ADVANCE(229);
      END_STATE();
    case 105:
      if (lookahead == '|') ADVANCE(389);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 106:
      if (lookahead == '|') ADVANCE(393);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 107:
      if (lookahead == ' ' ||
          lookahead == '/') ADVANCE(219);
      END_STATE();
    case 108:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 109:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(156);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(315);
      END_STATE();
    case 110:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(324);
      END_STATE();
    case 111:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 112:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(157);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(314);
      END_STATE();
    case 113:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(321);
      END_STATE();
    case 114:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 115:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 116:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(160);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(327);
      END_STATE();
    case 117:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(320);
      END_STATE();
    case 118:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(330);
      END_STATE();
    case 119:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 120:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(161);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(138);
      END_STATE();
    case 121:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(328);
      END_STATE();
    case 122:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 123:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(139);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 125:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 130:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(30);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(29);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(31);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 131:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 132:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 133:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(45);
      END_STATE();
    case 134:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(53);
      END_STATE();
    case 135:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(54);
      END_STATE();
    case 136:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 137:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 138:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(138);
      END_STATE();
    case 139:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(139);
      END_STATE();
    case 140:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 141:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 142:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 143:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 144:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 145:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 146:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 147:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 148:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 149:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 150:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 151:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 152:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 153:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 154:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(269);
      END_STATE();
    case 155:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(273);
      END_STATE();
    case 156:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(315);
      END_STATE();
    case 157:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(314);
      END_STATE();
    case 158:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(277);
      END_STATE();
    case 159:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(15);
      END_STATE();
    case 160:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(327);
      END_STATE();
    case 161:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(138);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 166:
      if (lookahead == 'I' ||
          lookahead == 'S' ||
          lookahead == 'i' ||
          lookahead == 's') ADVANCE(351);
      END_STATE();
    case 167:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(242);
      END_STATE();
    case 168:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(316);
      END_STATE();
    case 169:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(137);
      END_STATE();
    case 170:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(313);
      END_STATE();
    case 171:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(319);
      END_STATE();
    case 172:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(322);
      END_STATE();
    case 173:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(332);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(281);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(285);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(321);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(320);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(289);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(20);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(328);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(139);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 190:
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(232);
      if (lookahead == 'U') ADVANCE(199);
      if (lookahead == 'u') ADVANCE(201);
      if (lookahead == 'x') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(234);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(300);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(324);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      END_STATE();
    case 196:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 197:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(330);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 202:
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 203:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '|') ADVANCE(213);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '|') ADVANCE(214);
      END_STATE();
    case 204:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(389);
      END_STATE();
    case 205:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(393);
      END_STATE();
    case 206:
      if (eof) ADVANCE(207);
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '#') ADVANCE(224);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == '(') ADVANCE(395);
      if (lookahead == ',') ADVANCE(411);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ';') ADVANCE(211);
      if (lookahead == '[') ADVANCE(397);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '`') ADVANCE(409);
      if (lookahead == '{') ADVANCE(399);
      if (lookahead == '|') ADVANCE(105);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      if (aux_sym__token_token1_character_set_1(lookahead)) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ']' &&
          lookahead != '}' &&
          lookahead != 65279) ADVANCE(389);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__token_token1);
      if (aux_sym__token_token1_character_set_1(lookahead)) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_dot);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '#') ADVANCE(216);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '|') ADVANCE(212);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__line_comment);
      if (lookahead == '\n') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(218);
      if (lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(219);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__line_comment);
      if (lookahead == '\\') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'l') ADVANCE(401);
      if (lookahead == 'x') ADVANCE(402);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(419);
      if (lookahead == '%') ADVANCE(389);
      if (lookahead == '&') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(413);
      if (lookahead == ',') ADVANCE(415);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == ';') ADVANCE(217);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(6);
      if (lookahead == 'F' ||
          lookahead == 'T') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead == '`') ADVANCE(414);
      if (lookahead == 'f') ADVANCE(221);
      if (lookahead == 'h') ADVANCE(59);
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead == 'p') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == 's') ADVANCE(403);
      if (lookahead == 't') ADVANCE(222);
      if (lookahead == '|') ADVANCE(212);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(7);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(166);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(12);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(17);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(107);
      if (lookahead == '%') ADVANCE(389);
      if (lookahead == '&') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(413);
      if (lookahead == ',') ADVANCE(415);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == ';') ADVANCE(217);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(6);
      if (lookahead == 'F' ||
          lookahead == 'T') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead == '`') ADVANCE(414);
      if (lookahead == 'f') ADVANCE(221);
      if (lookahead == 'h') ADVANCE(59);
      if (lookahead == 'p') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead == 's') ADVANCE(403);
      if (lookahead == 't') ADVANCE(222);
      if (lookahead == '|') ADVANCE(212);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(7);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(166);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(12);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(17);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '|') ADVANCE(212);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_POUND_LT_LT);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '#') ADVANCE(228);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__real_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(232);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(233);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(363);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(362);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(363);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(363);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(362);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(363);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '.') ADVANCE(251);
      if (lookahead == '/') ADVANCE(382);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(362);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(364);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '.') ADVANCE(252);
      if (lookahead == '/') ADVANCE(382);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(362);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(364);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '.') ADVANCE(256);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(252);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(362);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(364);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(252);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(362);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(364);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '.') ADVANCE(259);
      if (lookahead == '/') ADVANCE(385);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(365);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '.') ADVANCE(260);
      if (lookahead == '/') ADVANCE(385);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(365);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '.') ADVANCE(261);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(365);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(365);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '.') ADVANCE(265);
      if (lookahead == '/') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '.') ADVANCE(266);
      if (lookahead == '/') ADVANCE(186);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(266);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '.') ADVANCE(269);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '.') ADVANCE(270);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == '.') ADVANCE(273);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(271);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(273);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '.') ADVANCE(277);
      if (lookahead == '/') ADVANCE(158);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(275);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '.') ADVANCE(278);
      if (lookahead == '/') ADVANCE(158);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(277);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(278);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(279);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '.') ADVANCE(282);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(282);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(281);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(282);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '.') ADVANCE(285);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(283);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '.') ADVANCE(286);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(285);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '/') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(287);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == '/') ADVANCE(178);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(289);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(290);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '.') ADVANCE(294);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '.') ADVANCE(294);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(291);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(295);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(295);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(295);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(294);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(299);
      if (lookahead == '.') ADVANCE(300);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(299);
      if (lookahead == '.') ADVANCE(300);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(297);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(299);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(300);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(305);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(197);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(118);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(305);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(118);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(305);
      if (lookahead == '.') ADVANCE(309);
      if (lookahead == '/') ADVANCE(195);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(122);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(197);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(118);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(308);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(118);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(309);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(362);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(362);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(332);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(173);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(332);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(343);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(344);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(345);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(346);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(347);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(348);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(349);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(353);
      if (lookahead == '.') ADVANCE(354);
      if (lookahead == '/') ADVANCE(386);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(366);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(353);
      if (lookahead == '.') ADVANCE(355);
      if (lookahead == '/') ADVANCE(386);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(366);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(355);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(366);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(355);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(366);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(382);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(375);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(392);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(385);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(385);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(376);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(377);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(378);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(356);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(358);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(361);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(370);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(356);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(358);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(361);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(371);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(372);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(326);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(311);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(374);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '|') ADVANCE(106);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_POUND_AMP);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_POUNDfl);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_POUNDfx);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_POUNDs);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_POUNDhash);
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_POUNDhasheq);
      if (lookahead == 'v') ADVANCE(406);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_POUNDhasheqv);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(412);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_POUND_BQUOTE);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA);
      if (lookahead == '@') ADVANCE(416);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA_AT);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_POUNDreader);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_POUNDlang);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      if (lookahead == ' ' ||
          lookahead == '/') ADVANCE(219);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_lang_name);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 206},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 206},
  [22] = {.lex_state = 206},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 206},
  [80] = {.lex_state = 206},
  [81] = {.lex_state = 206},
  [82] = {.lex_state = 206},
  [83] = {.lex_state = 206},
  [84] = {.lex_state = 206},
  [85] = {.lex_state = 206},
  [86] = {.lex_state = 206},
  [87] = {.lex_state = 206},
  [88] = {.lex_state = 206},
  [89] = {.lex_state = 206},
  [90] = {.lex_state = 206},
  [91] = {.lex_state = 206},
  [92] = {.lex_state = 206},
  [93] = {.lex_state = 206},
  [94] = {.lex_state = 206},
  [95] = {.lex_state = 206},
  [96] = {.lex_state = 206},
  [97] = {.lex_state = 206},
  [98] = {.lex_state = 206},
  [99] = {.lex_state = 206},
  [100] = {.lex_state = 206},
  [101] = {.lex_state = 206},
  [102] = {.lex_state = 206},
  [103] = {.lex_state = 206},
  [104] = {.lex_state = 206},
  [105] = {.lex_state = 206},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 203},
  [138] = {.lex_state = 203},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 203},
  [141] = {.lex_state = 203},
  [142] = {.lex_state = 203},
  [143] = {.lex_state = 203},
  [144] = {.lex_state = 203},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 203},
  [147] = {.lex_state = 203},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 206},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 206},
  [153] = {.lex_state = 206},
  [154] = {.lex_state = 206},
  [155] = {.lex_state = 206},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 206},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 206},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 206},
  [164] = {.lex_state = 206},
  [165] = {.lex_state = 203},
  [166] = {.lex_state = 203},
  [167] = {.lex_state = 206},
  [168] = {.lex_state = 206},
  [169] = {.lex_state = 206},
  [170] = {.lex_state = 202},
  [171] = {.lex_state = 0, .external_lex_state = 1},
  [172] = {.lex_state = 0, .external_lex_state = 1},
  [173] = {.lex_state = 0, .external_lex_state = 1},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 202},
};

enum {
  ts_external_token__here_string_body = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__here_string_body] = sym__here_string_body,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__here_string_body] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__token_token1] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_POUND_PIPE] = ACTIONS(1),
    [aux_sym_block_comment_token1] = ACTIONS(1),
    [anon_sym_PIPE_POUND] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym__here_string_body] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(174),
    [sym__token] = STATE(22),
    [sym__all_comment] = STATE(22),
    [sym_comment] = STATE(22),
    [sym_block_comment] = STATE(22),
    [sym_sexp_comment] = STATE(22),
    [sym__datum] = STATE(22),
    [sym_string] = STATE(22),
    [sym_byte_string] = STATE(22),
    [sym_here_string] = STATE(22),
    [sym_regex] = STATE(22),
    [sym__real_string] = STATE(85),
    [sym_symbol] = STATE(22),
    [sym_box] = STATE(22),
    [sym_list] = STATE(22),
    [sym_vector] = STATE(22),
    [sym_structure] = STATE(22),
    [sym_hash] = STATE(22),
    [sym_graph] = STATE(22),
    [sym_quote] = STATE(22),
    [sym_extension] = STATE(22),
    [aux_sym_program_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__token_token1] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(13),
    [sym_character] = ACTIONS(5),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(5),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUNDreader] = ACTIONS(45),
    [anon_sym_POUNDlang] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
  },
  [2] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(70),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(51),
    [sym_dot] = ACTIONS(54),
    [aux_sym_comment_token1] = ACTIONS(57),
    [anon_sym_POUND_PIPE] = ACTIONS(60),
    [anon_sym_POUND_SEMI] = ACTIONS(63),
    [sym__line_comment] = ACTIONS(57),
    [sym_boolean] = ACTIONS(54),
    [anon_sym_POUND] = ACTIONS(66),
    [anon_sym_POUND_LT_LT] = ACTIONS(69),
    [aux_sym_regex_token1] = ACTIONS(72),
    [anon_sym_DQUOTE] = ACTIONS(75),
    [sym_number] = ACTIONS(54),
    [sym_character] = ACTIONS(51),
    [aux_sym_symbol_token1] = ACTIONS(78),
    [sym_keyword] = ACTIONS(51),
    [anon_sym_POUND_AMP] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(92),
    [anon_sym_RBRACE] = ACTIONS(87),
    [anon_sym_POUNDfl] = ACTIONS(95),
    [anon_sym_POUNDfx] = ACTIONS(95),
    [anon_sym_POUNDs] = ACTIONS(98),
    [anon_sym_POUNDhash] = ACTIONS(101),
    [anon_sym_POUNDhasheq] = ACTIONS(101),
    [anon_sym_POUNDhasheqv] = ACTIONS(104),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(110),
    [anon_sym_COMMA_AT] = ACTIONS(107),
    [anon_sym_POUND_SQUOTE] = ACTIONS(107),
    [anon_sym_POUND_BQUOTE] = ACTIONS(107),
    [anon_sym_POUND_COMMA] = ACTIONS(110),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(107),
    [anon_sym_POUNDreader] = ACTIONS(113),
    [anon_sym_POUNDlang] = ACTIONS(116),
    [anon_sym_POUND_BANG] = ACTIONS(119),
  },
  [3] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(70),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(122),
    [sym_dot] = ACTIONS(124),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_PIPE] = ACTIONS(128),
    [anon_sym_POUND_SEMI] = ACTIONS(130),
    [sym__line_comment] = ACTIONS(126),
    [sym_boolean] = ACTIONS(124),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_POUND_LT_LT] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(124),
    [sym_character] = ACTIONS(122),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(122),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG] = ACTIONS(168),
  },
  [4] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(70),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(122),
    [sym_dot] = ACTIONS(124),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_PIPE] = ACTIONS(128),
    [anon_sym_POUND_SEMI] = ACTIONS(130),
    [sym__line_comment] = ACTIONS(126),
    [sym_boolean] = ACTIONS(124),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_POUND_LT_LT] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(124),
    [sym_character] = ACTIONS(122),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(122),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(148),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG] = ACTIONS(168),
  },
  [5] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(70),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(122),
    [sym_dot] = ACTIONS(124),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_PIPE] = ACTIONS(128),
    [anon_sym_POUND_SEMI] = ACTIONS(130),
    [sym__line_comment] = ACTIONS(126),
    [sym_boolean] = ACTIONS(124),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_POUND_LT_LT] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(124),
    [sym_character] = ACTIONS(122),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(122),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG] = ACTIONS(168),
  },
  [6] = {
    [sym__token] = STATE(17),
    [sym__all_comment] = STATE(17),
    [sym_comment] = STATE(17),
    [sym_block_comment] = STATE(17),
    [sym_sexp_comment] = STATE(17),
    [sym__datum] = STATE(17),
    [sym_string] = STATE(17),
    [sym_byte_string] = STATE(17),
    [sym_here_string] = STATE(17),
    [sym_regex] = STATE(17),
    [sym__real_string] = STATE(70),
    [sym_symbol] = STATE(17),
    [sym_box] = STATE(17),
    [sym_list] = STATE(17),
    [sym_vector] = STATE(17),
    [sym_structure] = STATE(17),
    [sym_hash] = STATE(17),
    [sym_graph] = STATE(17),
    [sym_quote] = STATE(17),
    [sym_extension] = STATE(17),
    [aux_sym_list_repeat1] = STATE(17),
    [aux_sym__token_token1] = ACTIONS(172),
    [sym_dot] = ACTIONS(174),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_PIPE] = ACTIONS(128),
    [anon_sym_POUND_SEMI] = ACTIONS(130),
    [sym__line_comment] = ACTIONS(126),
    [sym_boolean] = ACTIONS(174),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_POUND_LT_LT] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(174),
    [sym_character] = ACTIONS(172),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(172),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_RBRACE] = ACTIONS(176),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG] = ACTIONS(168),
  },
  [7] = {
    [sym__token] = STATE(10),
    [sym__all_comment] = STATE(10),
    [sym_comment] = STATE(10),
    [sym_block_comment] = STATE(10),
    [sym_sexp_comment] = STATE(10),
    [sym__datum] = STATE(10),
    [sym_string] = STATE(10),
    [sym_byte_string] = STATE(10),
    [sym_here_string] = STATE(10),
    [sym_regex] = STATE(10),
    [sym__real_string] = STATE(70),
    [sym_symbol] = STATE(10),
    [sym_box] = STATE(10),
    [sym_list] = STATE(10),
    [sym_vector] = STATE(10),
    [sym_structure] = STATE(10),
    [sym_hash] = STATE(10),
    [sym_graph] = STATE(10),
    [sym_quote] = STATE(10),
    [sym_extension] = STATE(10),
    [aux_sym_list_repeat1] = STATE(10),
    [aux_sym__token_token1] = ACTIONS(178),
    [sym_dot] = ACTIONS(180),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_PIPE] = ACTIONS(128),
    [anon_sym_POUND_SEMI] = ACTIONS(130),
    [sym__line_comment] = ACTIONS(126),
    [sym_boolean] = ACTIONS(180),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_POUND_LT_LT] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(180),
    [sym_character] = ACTIONS(178),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(178),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG] = ACTIONS(168),
  },
  [8] = {
    [sym__token] = STATE(5),
    [sym__all_comment] = STATE(5),
    [sym_comment] = STATE(5),
    [sym_block_comment] = STATE(5),
    [sym_sexp_comment] = STATE(5),
    [sym__datum] = STATE(5),
    [sym_string] = STATE(5),
    [sym_byte_string] = STATE(5),
    [sym_here_string] = STATE(5),
    [sym_regex] = STATE(5),
    [sym__real_string] = STATE(70),
    [sym_symbol] = STATE(5),
    [sym_box] = STATE(5),
    [sym_list] = STATE(5),
    [sym_vector] = STATE(5),
    [sym_structure] = STATE(5),
    [sym_hash] = STATE(5),
    [sym_graph] = STATE(5),
    [sym_quote] = STATE(5),
    [sym_extension] = STATE(5),
    [aux_sym_list_repeat1] = STATE(5),
    [aux_sym__token_token1] = ACTIONS(182),
    [sym_dot] = ACTIONS(184),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_PIPE] = ACTIONS(128),
    [anon_sym_POUND_SEMI] = ACTIONS(130),
    [sym__line_comment] = ACTIONS(126),
    [sym_boolean] = ACTIONS(184),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_POUND_LT_LT] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(184),
    [sym_character] = ACTIONS(182),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(182),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(176),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG] = ACTIONS(168),
  },
  [9] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(70),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(122),
    [sym_dot] = ACTIONS(124),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_PIPE] = ACTIONS(128),
    [anon_sym_POUND_SEMI] = ACTIONS(130),
    [sym__line_comment] = ACTIONS(126),
    [sym_boolean] = ACTIONS(124),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_POUND_LT_LT] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(124),
    [sym_character] = ACTIONS(122),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(122),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_RBRACE] = ACTIONS(148),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG] = ACTIONS(168),
  },
  [10] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(70),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(122),
    [sym_dot] = ACTIONS(124),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_PIPE] = ACTIONS(128),
    [anon_sym_POUND_SEMI] = ACTIONS(130),
    [sym__line_comment] = ACTIONS(126),
    [sym_boolean] = ACTIONS(124),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_POUND_LT_LT] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(124),
    [sym_character] = ACTIONS(122),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(122),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG] = ACTIONS(168),
  },
  [11] = {
    [sym__token] = STATE(4),
    [sym__all_comment] = STATE(4),
    [sym_comment] = STATE(4),
    [sym_block_comment] = STATE(4),
    [sym_sexp_comment] = STATE(4),
    [sym__datum] = STATE(4),
    [sym_string] = STATE(4),
    [sym_byte_string] = STATE(4),
    [sym_here_string] = STATE(4),
    [sym_regex] = STATE(4),
    [sym__real_string] = STATE(70),
    [sym_symbol] = STATE(4),
    [sym_box] = STATE(4),
    [sym_list] = STATE(4),
    [sym_vector] = STATE(4),
    [sym_structure] = STATE(4),
    [sym_hash] = STATE(4),
    [sym_graph] = STATE(4),
    [sym_quote] = STATE(4),
    [sym_extension] = STATE(4),
    [aux_sym_list_repeat1] = STATE(4),
    [aux_sym__token_token1] = ACTIONS(186),
    [sym_dot] = ACTIONS(188),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_PIPE] = ACTIONS(128),
    [anon_sym_POUND_SEMI] = ACTIONS(130),
    [sym__line_comment] = ACTIONS(126),
    [sym_boolean] = ACTIONS(188),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_POUND_LT_LT] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(188),
    [sym_character] = ACTIONS(186),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(186),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(190),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG] = ACTIONS(168),
  },
  [12] = {
    [sym__token] = STATE(3),
    [sym__all_comment] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_block_comment] = STATE(3),
    [sym_sexp_comment] = STATE(3),
    [sym__datum] = STATE(3),
    [sym_string] = STATE(3),
    [sym_byte_string] = STATE(3),
    [sym_here_string] = STATE(3),
    [sym_regex] = STATE(3),
    [sym__real_string] = STATE(70),
    [sym_symbol] = STATE(3),
    [sym_box] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_structure] = STATE(3),
    [sym_hash] = STATE(3),
    [sym_graph] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_extension] = STATE(3),
    [aux_sym_list_repeat1] = STATE(3),
    [aux_sym__token_token1] = ACTIONS(192),
    [sym_dot] = ACTIONS(194),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_PIPE] = ACTIONS(128),
    [anon_sym_POUND_SEMI] = ACTIONS(130),
    [sym__line_comment] = ACTIONS(126),
    [sym_boolean] = ACTIONS(194),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_POUND_LT_LT] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(194),
    [sym_character] = ACTIONS(192),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(192),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(190),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG] = ACTIONS(168),
  },
  [13] = {
    [sym__token] = STATE(9),
    [sym__all_comment] = STATE(9),
    [sym_comment] = STATE(9),
    [sym_block_comment] = STATE(9),
    [sym_sexp_comment] = STATE(9),
    [sym__datum] = STATE(9),
    [sym_string] = STATE(9),
    [sym_byte_string] = STATE(9),
    [sym_here_string] = STATE(9),
    [sym_regex] = STATE(9),
    [sym__real_string] = STATE(70),
    [sym_symbol] = STATE(9),
    [sym_box] = STATE(9),
    [sym_list] = STATE(9),
    [sym_vector] = STATE(9),
    [sym_structure] = STATE(9),
    [sym_hash] = STATE(9),
    [sym_graph] = STATE(9),
    [sym_quote] = STATE(9),
    [sym_extension] = STATE(9),
    [aux_sym_list_repeat1] = STATE(9),
    [aux_sym__token_token1] = ACTIONS(196),
    [sym_dot] = ACTIONS(198),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_PIPE] = ACTIONS(128),
    [anon_sym_POUND_SEMI] = ACTIONS(130),
    [sym__line_comment] = ACTIONS(126),
    [sym_boolean] = ACTIONS(198),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_POUND_LT_LT] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(198),
    [sym_character] = ACTIONS(196),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(196),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_RBRACE] = ACTIONS(190),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG] = ACTIONS(168),
  },
  [14] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(70),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(122),
    [sym_dot] = ACTIONS(124),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_PIPE] = ACTIONS(128),
    [anon_sym_POUND_SEMI] = ACTIONS(130),
    [sym__line_comment] = ACTIONS(126),
    [sym_boolean] = ACTIONS(124),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_POUND_LT_LT] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(124),
    [sym_character] = ACTIONS(122),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(122),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_RBRACE] = ACTIONS(200),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG] = ACTIONS(168),
  },
  [15] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(70),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(122),
    [sym_dot] = ACTIONS(124),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_PIPE] = ACTIONS(128),
    [anon_sym_POUND_SEMI] = ACTIONS(130),
    [sym__line_comment] = ACTIONS(126),
    [sym_boolean] = ACTIONS(124),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_POUND_LT_LT] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(124),
    [sym_character] = ACTIONS(122),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(122),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(200),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG] = ACTIONS(168),
  },
  [16] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(70),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(122),
    [sym_dot] = ACTIONS(124),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_PIPE] = ACTIONS(128),
    [anon_sym_POUND_SEMI] = ACTIONS(130),
    [sym__line_comment] = ACTIONS(126),
    [sym_boolean] = ACTIONS(124),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_POUND_LT_LT] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(124),
    [sym_character] = ACTIONS(122),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(122),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(200),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG] = ACTIONS(168),
  },
  [17] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(70),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(122),
    [sym_dot] = ACTIONS(124),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_PIPE] = ACTIONS(128),
    [anon_sym_POUND_SEMI] = ACTIONS(130),
    [sym__line_comment] = ACTIONS(126),
    [sym_boolean] = ACTIONS(124),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_POUND_LT_LT] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(124),
    [sym_character] = ACTIONS(122),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(122),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_RBRACE] = ACTIONS(170),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG] = ACTIONS(168),
  },
  [18] = {
    [sym__token] = STATE(14),
    [sym__all_comment] = STATE(14),
    [sym_comment] = STATE(14),
    [sym_block_comment] = STATE(14),
    [sym_sexp_comment] = STATE(14),
    [sym__datum] = STATE(14),
    [sym_string] = STATE(14),
    [sym_byte_string] = STATE(14),
    [sym_here_string] = STATE(14),
    [sym_regex] = STATE(14),
    [sym__real_string] = STATE(70),
    [sym_symbol] = STATE(14),
    [sym_box] = STATE(14),
    [sym_list] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_structure] = STATE(14),
    [sym_hash] = STATE(14),
    [sym_graph] = STATE(14),
    [sym_quote] = STATE(14),
    [sym_extension] = STATE(14),
    [aux_sym_list_repeat1] = STATE(14),
    [aux_sym__token_token1] = ACTIONS(202),
    [sym_dot] = ACTIONS(204),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_PIPE] = ACTIONS(128),
    [anon_sym_POUND_SEMI] = ACTIONS(130),
    [sym__line_comment] = ACTIONS(126),
    [sym_boolean] = ACTIONS(204),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_POUND_LT_LT] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(204),
    [sym_character] = ACTIONS(202),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(202),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_RBRACE] = ACTIONS(206),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG] = ACTIONS(168),
  },
  [19] = {
    [sym__token] = STATE(15),
    [sym__all_comment] = STATE(15),
    [sym_comment] = STATE(15),
    [sym_block_comment] = STATE(15),
    [sym_sexp_comment] = STATE(15),
    [sym__datum] = STATE(15),
    [sym_string] = STATE(15),
    [sym_byte_string] = STATE(15),
    [sym_here_string] = STATE(15),
    [sym_regex] = STATE(15),
    [sym__real_string] = STATE(70),
    [sym_symbol] = STATE(15),
    [sym_box] = STATE(15),
    [sym_list] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_structure] = STATE(15),
    [sym_hash] = STATE(15),
    [sym_graph] = STATE(15),
    [sym_quote] = STATE(15),
    [sym_extension] = STATE(15),
    [aux_sym_list_repeat1] = STATE(15),
    [aux_sym__token_token1] = ACTIONS(208),
    [sym_dot] = ACTIONS(210),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_PIPE] = ACTIONS(128),
    [anon_sym_POUND_SEMI] = ACTIONS(130),
    [sym__line_comment] = ACTIONS(126),
    [sym_boolean] = ACTIONS(210),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_POUND_LT_LT] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(210),
    [sym_character] = ACTIONS(208),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(208),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(206),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG] = ACTIONS(168),
  },
  [20] = {
    [sym__token] = STATE(16),
    [sym__all_comment] = STATE(16),
    [sym_comment] = STATE(16),
    [sym_block_comment] = STATE(16),
    [sym_sexp_comment] = STATE(16),
    [sym__datum] = STATE(16),
    [sym_string] = STATE(16),
    [sym_byte_string] = STATE(16),
    [sym_here_string] = STATE(16),
    [sym_regex] = STATE(16),
    [sym__real_string] = STATE(70),
    [sym_symbol] = STATE(16),
    [sym_box] = STATE(16),
    [sym_list] = STATE(16),
    [sym_vector] = STATE(16),
    [sym_structure] = STATE(16),
    [sym_hash] = STATE(16),
    [sym_graph] = STATE(16),
    [sym_quote] = STATE(16),
    [sym_extension] = STATE(16),
    [aux_sym_list_repeat1] = STATE(16),
    [aux_sym__token_token1] = ACTIONS(212),
    [sym_dot] = ACTIONS(214),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_PIPE] = ACTIONS(128),
    [anon_sym_POUND_SEMI] = ACTIONS(130),
    [sym__line_comment] = ACTIONS(126),
    [sym_boolean] = ACTIONS(214),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_POUND_LT_LT] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(214),
    [sym_character] = ACTIONS(212),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(212),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(206),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG] = ACTIONS(168),
  },
  [21] = {
    [sym__token] = STATE(21),
    [sym__all_comment] = STATE(21),
    [sym_comment] = STATE(21),
    [sym_block_comment] = STATE(21),
    [sym_sexp_comment] = STATE(21),
    [sym__datum] = STATE(21),
    [sym_string] = STATE(21),
    [sym_byte_string] = STATE(21),
    [sym_here_string] = STATE(21),
    [sym_regex] = STATE(21),
    [sym__real_string] = STATE(85),
    [sym_symbol] = STATE(21),
    [sym_box] = STATE(21),
    [sym_list] = STATE(21),
    [sym_vector] = STATE(21),
    [sym_structure] = STATE(21),
    [sym_hash] = STATE(21),
    [sym_graph] = STATE(21),
    [sym_quote] = STATE(21),
    [sym_extension] = STATE(21),
    [aux_sym_program_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(216),
    [aux_sym__token_token1] = ACTIONS(218),
    [aux_sym_comment_token1] = ACTIONS(221),
    [anon_sym_POUND_PIPE] = ACTIONS(224),
    [anon_sym_POUND_SEMI] = ACTIONS(227),
    [sym__line_comment] = ACTIONS(221),
    [sym_boolean] = ACTIONS(230),
    [anon_sym_POUND] = ACTIONS(233),
    [anon_sym_POUND_LT_LT] = ACTIONS(236),
    [aux_sym_regex_token1] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(242),
    [sym_number] = ACTIONS(230),
    [sym_character] = ACTIONS(218),
    [aux_sym_symbol_token1] = ACTIONS(245),
    [sym_keyword] = ACTIONS(218),
    [anon_sym_POUND_AMP] = ACTIONS(248),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_LBRACK] = ACTIONS(254),
    [anon_sym_LBRACE] = ACTIONS(257),
    [anon_sym_POUNDfl] = ACTIONS(260),
    [anon_sym_POUNDfx] = ACTIONS(260),
    [anon_sym_POUNDs] = ACTIONS(263),
    [anon_sym_POUNDhash] = ACTIONS(266),
    [anon_sym_POUNDhasheq] = ACTIONS(266),
    [anon_sym_POUNDhasheqv] = ACTIONS(269),
    [anon_sym_SQUOTE] = ACTIONS(272),
    [anon_sym_BQUOTE] = ACTIONS(272),
    [anon_sym_COMMA] = ACTIONS(275),
    [anon_sym_COMMA_AT] = ACTIONS(272),
    [anon_sym_POUND_SQUOTE] = ACTIONS(272),
    [anon_sym_POUND_BQUOTE] = ACTIONS(272),
    [anon_sym_POUND_COMMA] = ACTIONS(275),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(272),
    [anon_sym_POUNDreader] = ACTIONS(278),
    [anon_sym_POUNDlang] = ACTIONS(281),
    [anon_sym_POUND_BANG] = ACTIONS(284),
  },
  [22] = {
    [sym__token] = STATE(21),
    [sym__all_comment] = STATE(21),
    [sym_comment] = STATE(21),
    [sym_block_comment] = STATE(21),
    [sym_sexp_comment] = STATE(21),
    [sym__datum] = STATE(21),
    [sym_string] = STATE(21),
    [sym_byte_string] = STATE(21),
    [sym_here_string] = STATE(21),
    [sym_regex] = STATE(21),
    [sym__real_string] = STATE(85),
    [sym_symbol] = STATE(21),
    [sym_box] = STATE(21),
    [sym_list] = STATE(21),
    [sym_vector] = STATE(21),
    [sym_structure] = STATE(21),
    [sym_hash] = STATE(21),
    [sym_graph] = STATE(21),
    [sym_quote] = STATE(21),
    [sym_extension] = STATE(21),
    [aux_sym_program_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(287),
    [aux_sym__token_token1] = ACTIONS(289),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(291),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(291),
    [sym_character] = ACTIONS(289),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(289),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUNDreader] = ACTIONS(45),
    [anon_sym_POUNDlang] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
  },
  [23] = {
    [sym__skip] = STATE(78),
    [sym__all_comment] = STATE(78),
    [sym_comment] = STATE(78),
    [sym_block_comment] = STATE(78),
    [sym_sexp_comment] = STATE(78),
    [sym__datum] = STATE(59),
    [sym_string] = STATE(59),
    [sym_byte_string] = STATE(59),
    [sym_here_string] = STATE(59),
    [sym_regex] = STATE(59),
    [sym__real_string] = STATE(70),
    [sym_symbol] = STATE(59),
    [sym_box] = STATE(59),
    [sym_list] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_structure] = STATE(59),
    [sym_hash] = STATE(59),
    [sym_graph] = STATE(59),
    [sym_quote] = STATE(59),
    [aux_sym_sexp_comment_repeat1] = STATE(78),
    [aux_sym__token_token1] = ACTIONS(293),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_PIPE] = ACTIONS(297),
    [anon_sym_POUND_SEMI] = ACTIONS(299),
    [sym__line_comment] = ACTIONS(295),
    [sym_boolean] = ACTIONS(301),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_POUND_LT_LT] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(301),
    [sym_character] = ACTIONS(303),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(303),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
  },
  [24] = {
    [sym__skip] = STATE(78),
    [sym__all_comment] = STATE(78),
    [sym_comment] = STATE(78),
    [sym_block_comment] = STATE(78),
    [sym_sexp_comment] = STATE(78),
    [sym__datum] = STATE(91),
    [sym_string] = STATE(91),
    [sym_byte_string] = STATE(91),
    [sym_here_string] = STATE(91),
    [sym_regex] = STATE(91),
    [sym__real_string] = STATE(85),
    [sym_symbol] = STATE(91),
    [sym_box] = STATE(91),
    [sym_list] = STATE(91),
    [sym_vector] = STATE(91),
    [sym_structure] = STATE(91),
    [sym_hash] = STATE(91),
    [sym_graph] = STATE(91),
    [sym_quote] = STATE(91),
    [aux_sym_sexp_comment_repeat1] = STATE(78),
    [aux_sym__token_token1] = ACTIONS(293),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_PIPE] = ACTIONS(297),
    [anon_sym_POUND_SEMI] = ACTIONS(299),
    [sym__line_comment] = ACTIONS(295),
    [sym_boolean] = ACTIONS(305),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(305),
    [sym_character] = ACTIONS(307),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(307),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
  },
  [25] = {
    [sym__skip] = STATE(24),
    [sym__all_comment] = STATE(24),
    [sym_comment] = STATE(24),
    [sym_block_comment] = STATE(24),
    [sym_sexp_comment] = STATE(24),
    [sym__datum] = STATE(102),
    [sym_string] = STATE(102),
    [sym_byte_string] = STATE(102),
    [sym_here_string] = STATE(102),
    [sym_regex] = STATE(102),
    [sym__real_string] = STATE(85),
    [sym_symbol] = STATE(102),
    [sym_box] = STATE(102),
    [sym_list] = STATE(102),
    [sym_vector] = STATE(102),
    [sym_structure] = STATE(102),
    [sym_hash] = STATE(102),
    [sym_graph] = STATE(102),
    [sym_quote] = STATE(102),
    [aux_sym_sexp_comment_repeat1] = STATE(24),
    [aux_sym__token_token1] = ACTIONS(309),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_PIPE] = ACTIONS(297),
    [anon_sym_POUND_SEMI] = ACTIONS(299),
    [sym__line_comment] = ACTIONS(295),
    [sym_boolean] = ACTIONS(311),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(311),
    [sym_character] = ACTIONS(313),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(313),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
  },
  [26] = {
    [sym__skip] = STATE(78),
    [sym__all_comment] = STATE(78),
    [sym_comment] = STATE(78),
    [sym_block_comment] = STATE(78),
    [sym_sexp_comment] = STATE(78),
    [sym__datum] = STATE(127),
    [sym_string] = STATE(127),
    [sym_byte_string] = STATE(127),
    [sym_here_string] = STATE(127),
    [sym_regex] = STATE(127),
    [sym__real_string] = STATE(109),
    [sym_symbol] = STATE(127),
    [sym_box] = STATE(127),
    [sym_list] = STATE(127),
    [sym_vector] = STATE(127),
    [sym_structure] = STATE(127),
    [sym_hash] = STATE(127),
    [sym_graph] = STATE(127),
    [sym_quote] = STATE(127),
    [aux_sym_sexp_comment_repeat1] = STATE(78),
    [aux_sym__token_token1] = ACTIONS(293),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_PIPE] = ACTIONS(297),
    [anon_sym_POUND_SEMI] = ACTIONS(299),
    [sym__line_comment] = ACTIONS(295),
    [sym_boolean] = ACTIONS(315),
    [anon_sym_POUND] = ACTIONS(317),
    [anon_sym_POUND_LT_LT] = ACTIONS(319),
    [aux_sym_regex_token1] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(323),
    [sym_number] = ACTIONS(315),
    [sym_character] = ACTIONS(325),
    [aux_sym_symbol_token1] = ACTIONS(327),
    [sym_keyword] = ACTIONS(325),
    [anon_sym_POUND_AMP] = ACTIONS(329),
    [anon_sym_LPAREN] = ACTIONS(331),
    [anon_sym_LBRACK] = ACTIONS(333),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_POUNDfl] = ACTIONS(337),
    [anon_sym_POUNDfx] = ACTIONS(337),
    [anon_sym_POUNDs] = ACTIONS(339),
    [anon_sym_POUNDhash] = ACTIONS(341),
    [anon_sym_POUNDhasheq] = ACTIONS(341),
    [anon_sym_POUNDhasheqv] = ACTIONS(343),
    [anon_sym_SQUOTE] = ACTIONS(345),
    [anon_sym_BQUOTE] = ACTIONS(345),
    [anon_sym_COMMA] = ACTIONS(347),
    [anon_sym_COMMA_AT] = ACTIONS(345),
    [anon_sym_POUND_SQUOTE] = ACTIONS(345),
    [anon_sym_POUND_BQUOTE] = ACTIONS(345),
    [anon_sym_POUND_COMMA] = ACTIONS(347),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(345),
  },
  [27] = {
    [sym__skip] = STATE(78),
    [sym__all_comment] = STATE(78),
    [sym_comment] = STATE(78),
    [sym_block_comment] = STATE(78),
    [sym_sexp_comment] = STATE(78),
    [sym__datum] = STATE(96),
    [sym_string] = STATE(96),
    [sym_byte_string] = STATE(96),
    [sym_here_string] = STATE(96),
    [sym_regex] = STATE(96),
    [sym__real_string] = STATE(85),
    [sym_symbol] = STATE(96),
    [sym_box] = STATE(96),
    [sym_list] = STATE(96),
    [sym_vector] = STATE(96),
    [sym_structure] = STATE(96),
    [sym_hash] = STATE(96),
    [sym_graph] = STATE(96),
    [sym_quote] = STATE(96),
    [aux_sym_sexp_comment_repeat1] = STATE(78),
    [aux_sym__token_token1] = ACTIONS(293),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_PIPE] = ACTIONS(297),
    [anon_sym_POUND_SEMI] = ACTIONS(299),
    [sym__line_comment] = ACTIONS(295),
    [sym_boolean] = ACTIONS(349),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(349),
    [sym_character] = ACTIONS(351),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(351),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
  },
  [28] = {
    [sym__skip] = STATE(78),
    [sym__all_comment] = STATE(78),
    [sym_comment] = STATE(78),
    [sym_block_comment] = STATE(78),
    [sym_sexp_comment] = STATE(78),
    [sym__datum] = STATE(128),
    [sym_string] = STATE(128),
    [sym_byte_string] = STATE(128),
    [sym_here_string] = STATE(128),
    [sym_regex] = STATE(128),
    [sym__real_string] = STATE(109),
    [sym_symbol] = STATE(128),
    [sym_box] = STATE(128),
    [sym_list] = STATE(128),
    [sym_vector] = STATE(128),
    [sym_structure] = STATE(128),
    [sym_hash] = STATE(128),
    [sym_graph] = STATE(128),
    [sym_quote] = STATE(128),
    [aux_sym_sexp_comment_repeat1] = STATE(78),
    [aux_sym__token_token1] = ACTIONS(293),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_PIPE] = ACTIONS(297),
    [anon_sym_POUND_SEMI] = ACTIONS(299),
    [sym__line_comment] = ACTIONS(295),
    [sym_boolean] = ACTIONS(353),
    [anon_sym_POUND] = ACTIONS(317),
    [anon_sym_POUND_LT_LT] = ACTIONS(319),
    [aux_sym_regex_token1] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(323),
    [sym_number] = ACTIONS(353),
    [sym_character] = ACTIONS(355),
    [aux_sym_symbol_token1] = ACTIONS(327),
    [sym_keyword] = ACTIONS(355),
    [anon_sym_POUND_AMP] = ACTIONS(329),
    [anon_sym_LPAREN] = ACTIONS(331),
    [anon_sym_LBRACK] = ACTIONS(333),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_POUNDfl] = ACTIONS(337),
    [anon_sym_POUNDfx] = ACTIONS(337),
    [anon_sym_POUNDs] = ACTIONS(339),
    [anon_sym_POUNDhash] = ACTIONS(341),
    [anon_sym_POUNDhasheq] = ACTIONS(341),
    [anon_sym_POUNDhasheqv] = ACTIONS(343),
    [anon_sym_SQUOTE] = ACTIONS(345),
    [anon_sym_BQUOTE] = ACTIONS(345),
    [anon_sym_COMMA] = ACTIONS(347),
    [anon_sym_COMMA_AT] = ACTIONS(345),
    [anon_sym_POUND_SQUOTE] = ACTIONS(345),
    [anon_sym_POUND_BQUOTE] = ACTIONS(345),
    [anon_sym_POUND_COMMA] = ACTIONS(347),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(345),
  },
  [29] = {
    [sym__skip] = STATE(28),
    [sym__all_comment] = STATE(28),
    [sym_comment] = STATE(28),
    [sym_block_comment] = STATE(28),
    [sym_sexp_comment] = STATE(28),
    [sym__datum] = STATE(130),
    [sym_string] = STATE(130),
    [sym_byte_string] = STATE(130),
    [sym_here_string] = STATE(130),
    [sym_regex] = STATE(130),
    [sym__real_string] = STATE(109),
    [sym_symbol] = STATE(130),
    [sym_box] = STATE(130),
    [sym_list] = STATE(130),
    [sym_vector] = STATE(130),
    [sym_structure] = STATE(130),
    [sym_hash] = STATE(130),
    [sym_graph] = STATE(130),
    [sym_quote] = STATE(130),
    [aux_sym_sexp_comment_repeat1] = STATE(28),
    [aux_sym__token_token1] = ACTIONS(357),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_PIPE] = ACTIONS(297),
    [anon_sym_POUND_SEMI] = ACTIONS(299),
    [sym__line_comment] = ACTIONS(295),
    [sym_boolean] = ACTIONS(359),
    [anon_sym_POUND] = ACTIONS(317),
    [anon_sym_POUND_LT_LT] = ACTIONS(319),
    [aux_sym_regex_token1] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(323),
    [sym_number] = ACTIONS(359),
    [sym_character] = ACTIONS(361),
    [aux_sym_symbol_token1] = ACTIONS(327),
    [sym_keyword] = ACTIONS(361),
    [anon_sym_POUND_AMP] = ACTIONS(329),
    [anon_sym_LPAREN] = ACTIONS(331),
    [anon_sym_LBRACK] = ACTIONS(333),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_POUNDfl] = ACTIONS(337),
    [anon_sym_POUNDfx] = ACTIONS(337),
    [anon_sym_POUNDs] = ACTIONS(339),
    [anon_sym_POUNDhash] = ACTIONS(341),
    [anon_sym_POUNDhasheq] = ACTIONS(341),
    [anon_sym_POUNDhasheqv] = ACTIONS(343),
    [anon_sym_SQUOTE] = ACTIONS(345),
    [anon_sym_BQUOTE] = ACTIONS(345),
    [anon_sym_COMMA] = ACTIONS(347),
    [anon_sym_COMMA_AT] = ACTIONS(345),
    [anon_sym_POUND_SQUOTE] = ACTIONS(345),
    [anon_sym_POUND_BQUOTE] = ACTIONS(345),
    [anon_sym_POUND_COMMA] = ACTIONS(347),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(345),
  },
  [30] = {
    [sym__skip] = STATE(78),
    [sym__all_comment] = STATE(78),
    [sym_comment] = STATE(78),
    [sym_block_comment] = STATE(78),
    [sym_sexp_comment] = STATE(78),
    [sym__datum] = STATE(58),
    [sym_string] = STATE(58),
    [sym_byte_string] = STATE(58),
    [sym_here_string] = STATE(58),
    [sym_regex] = STATE(58),
    [sym__real_string] = STATE(70),
    [sym_symbol] = STATE(58),
    [sym_box] = STATE(58),
    [sym_list] = STATE(58),
    [sym_vector] = STATE(58),
    [sym_structure] = STATE(58),
    [sym_hash] = STATE(58),
    [sym_graph] = STATE(58),
    [sym_quote] = STATE(58),
    [aux_sym_sexp_comment_repeat1] = STATE(78),
    [aux_sym__token_token1] = ACTIONS(293),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_PIPE] = ACTIONS(297),
    [anon_sym_POUND_SEMI] = ACTIONS(299),
    [sym__line_comment] = ACTIONS(295),
    [sym_boolean] = ACTIONS(363),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_POUND_LT_LT] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(363),
    [sym_character] = ACTIONS(365),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(365),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
  },
  [31] = {
    [sym__skip] = STATE(78),
    [sym__all_comment] = STATE(78),
    [sym_comment] = STATE(78),
    [sym_block_comment] = STATE(78),
    [sym_sexp_comment] = STATE(78),
    [sym__datum] = STATE(129),
    [sym_string] = STATE(129),
    [sym_byte_string] = STATE(129),
    [sym_here_string] = STATE(129),
    [sym_regex] = STATE(129),
    [sym__real_string] = STATE(109),
    [sym_symbol] = STATE(129),
    [sym_box] = STATE(129),
    [sym_list] = STATE(129),
    [sym_vector] = STATE(129),
    [sym_structure] = STATE(129),
    [sym_hash] = STATE(129),
    [sym_graph] = STATE(129),
    [sym_quote] = STATE(129),
    [aux_sym_sexp_comment_repeat1] = STATE(78),
    [aux_sym__token_token1] = ACTIONS(293),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_PIPE] = ACTIONS(297),
    [anon_sym_POUND_SEMI] = ACTIONS(299),
    [sym__line_comment] = ACTIONS(295),
    [sym_boolean] = ACTIONS(367),
    [anon_sym_POUND] = ACTIONS(317),
    [anon_sym_POUND_LT_LT] = ACTIONS(319),
    [aux_sym_regex_token1] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(323),
    [sym_number] = ACTIONS(367),
    [sym_character] = ACTIONS(369),
    [aux_sym_symbol_token1] = ACTIONS(327),
    [sym_keyword] = ACTIONS(369),
    [anon_sym_POUND_AMP] = ACTIONS(329),
    [anon_sym_LPAREN] = ACTIONS(331),
    [anon_sym_LBRACK] = ACTIONS(333),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_POUNDfl] = ACTIONS(337),
    [anon_sym_POUNDfx] = ACTIONS(337),
    [anon_sym_POUNDs] = ACTIONS(339),
    [anon_sym_POUNDhash] = ACTIONS(341),
    [anon_sym_POUNDhasheq] = ACTIONS(341),
    [anon_sym_POUNDhasheqv] = ACTIONS(343),
    [anon_sym_SQUOTE] = ACTIONS(345),
    [anon_sym_BQUOTE] = ACTIONS(345),
    [anon_sym_COMMA] = ACTIONS(347),
    [anon_sym_COMMA_AT] = ACTIONS(345),
    [anon_sym_POUND_SQUOTE] = ACTIONS(345),
    [anon_sym_POUND_BQUOTE] = ACTIONS(345),
    [anon_sym_POUND_COMMA] = ACTIONS(347),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(345),
  },
  [32] = {
    [sym__skip] = STATE(78),
    [sym__all_comment] = STATE(78),
    [sym_comment] = STATE(78),
    [sym_block_comment] = STATE(78),
    [sym_sexp_comment] = STATE(78),
    [sym__datum] = STATE(107),
    [sym_string] = STATE(107),
    [sym_byte_string] = STATE(107),
    [sym_here_string] = STATE(107),
    [sym_regex] = STATE(107),
    [sym__real_string] = STATE(109),
    [sym_symbol] = STATE(107),
    [sym_box] = STATE(107),
    [sym_list] = STATE(107),
    [sym_vector] = STATE(107),
    [sym_structure] = STATE(107),
    [sym_hash] = STATE(107),
    [sym_graph] = STATE(107),
    [sym_quote] = STATE(107),
    [aux_sym_sexp_comment_repeat1] = STATE(78),
    [aux_sym__token_token1] = ACTIONS(293),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_PIPE] = ACTIONS(297),
    [anon_sym_POUND_SEMI] = ACTIONS(299),
    [sym__line_comment] = ACTIONS(295),
    [sym_boolean] = ACTIONS(371),
    [anon_sym_POUND] = ACTIONS(317),
    [anon_sym_POUND_LT_LT] = ACTIONS(319),
    [aux_sym_regex_token1] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(323),
    [sym_number] = ACTIONS(371),
    [sym_character] = ACTIONS(373),
    [aux_sym_symbol_token1] = ACTIONS(327),
    [sym_keyword] = ACTIONS(373),
    [anon_sym_POUND_AMP] = ACTIONS(329),
    [anon_sym_LPAREN] = ACTIONS(331),
    [anon_sym_LBRACK] = ACTIONS(333),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_POUNDfl] = ACTIONS(337),
    [anon_sym_POUNDfx] = ACTIONS(337),
    [anon_sym_POUNDs] = ACTIONS(339),
    [anon_sym_POUNDhash] = ACTIONS(341),
    [anon_sym_POUNDhasheq] = ACTIONS(341),
    [anon_sym_POUNDhasheqv] = ACTIONS(343),
    [anon_sym_SQUOTE] = ACTIONS(345),
    [anon_sym_BQUOTE] = ACTIONS(345),
    [anon_sym_COMMA] = ACTIONS(347),
    [anon_sym_COMMA_AT] = ACTIONS(345),
    [anon_sym_POUND_SQUOTE] = ACTIONS(345),
    [anon_sym_POUND_BQUOTE] = ACTIONS(345),
    [anon_sym_POUND_COMMA] = ACTIONS(347),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(345),
  },
  [33] = {
    [sym__skip] = STATE(78),
    [sym__all_comment] = STATE(78),
    [sym_comment] = STATE(78),
    [sym_block_comment] = STATE(78),
    [sym_sexp_comment] = STATE(78),
    [sym__datum] = STATE(73),
    [sym_string] = STATE(73),
    [sym_byte_string] = STATE(73),
    [sym_here_string] = STATE(73),
    [sym_regex] = STATE(73),
    [sym__real_string] = STATE(70),
    [sym_symbol] = STATE(73),
    [sym_box] = STATE(73),
    [sym_list] = STATE(73),
    [sym_vector] = STATE(73),
    [sym_structure] = STATE(73),
    [sym_hash] = STATE(73),
    [sym_graph] = STATE(73),
    [sym_quote] = STATE(73),
    [aux_sym_sexp_comment_repeat1] = STATE(78),
    [aux_sym__token_token1] = ACTIONS(293),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_PIPE] = ACTIONS(297),
    [anon_sym_POUND_SEMI] = ACTIONS(299),
    [sym__line_comment] = ACTIONS(295),
    [sym_boolean] = ACTIONS(375),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_POUND_LT_LT] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(375),
    [sym_character] = ACTIONS(377),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(377),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
  },
  [34] = {
    [sym__skip] = STATE(23),
    [sym__all_comment] = STATE(23),
    [sym_comment] = STATE(23),
    [sym_block_comment] = STATE(23),
    [sym_sexp_comment] = STATE(23),
    [sym__datum] = STATE(72),
    [sym_string] = STATE(72),
    [sym_byte_string] = STATE(72),
    [sym_here_string] = STATE(72),
    [sym_regex] = STATE(72),
    [sym__real_string] = STATE(70),
    [sym_symbol] = STATE(72),
    [sym_box] = STATE(72),
    [sym_list] = STATE(72),
    [sym_vector] = STATE(72),
    [sym_structure] = STATE(72),
    [sym_hash] = STATE(72),
    [sym_graph] = STATE(72),
    [sym_quote] = STATE(72),
    [aux_sym_sexp_comment_repeat1] = STATE(23),
    [aux_sym__token_token1] = ACTIONS(379),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_PIPE] = ACTIONS(297),
    [anon_sym_POUND_SEMI] = ACTIONS(299),
    [sym__line_comment] = ACTIONS(295),
    [sym_boolean] = ACTIONS(381),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_POUND_LT_LT] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(381),
    [sym_character] = ACTIONS(383),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(383),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
  },
  [35] = {
    [sym__skip] = STATE(31),
    [sym__all_comment] = STATE(31),
    [sym_comment] = STATE(31),
    [sym_block_comment] = STATE(31),
    [sym_sexp_comment] = STATE(31),
    [sym__datum] = STATE(121),
    [sym_string] = STATE(121),
    [sym_byte_string] = STATE(121),
    [sym_here_string] = STATE(121),
    [sym_regex] = STATE(121),
    [sym__real_string] = STATE(109),
    [sym_symbol] = STATE(121),
    [sym_box] = STATE(121),
    [sym_list] = STATE(121),
    [sym_vector] = STATE(121),
    [sym_structure] = STATE(121),
    [sym_hash] = STATE(121),
    [sym_graph] = STATE(121),
    [sym_quote] = STATE(121),
    [aux_sym_sexp_comment_repeat1] = STATE(31),
    [aux_sym__token_token1] = ACTIONS(385),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_PIPE] = ACTIONS(297),
    [anon_sym_POUND_SEMI] = ACTIONS(299),
    [sym__line_comment] = ACTIONS(295),
    [sym_boolean] = ACTIONS(387),
    [anon_sym_POUND] = ACTIONS(317),
    [anon_sym_POUND_LT_LT] = ACTIONS(319),
    [aux_sym_regex_token1] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(323),
    [sym_number] = ACTIONS(387),
    [sym_character] = ACTIONS(389),
    [aux_sym_symbol_token1] = ACTIONS(327),
    [sym_keyword] = ACTIONS(389),
    [anon_sym_POUND_AMP] = ACTIONS(329),
    [anon_sym_LPAREN] = ACTIONS(331),
    [anon_sym_LBRACK] = ACTIONS(333),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_POUNDfl] = ACTIONS(337),
    [anon_sym_POUNDfx] = ACTIONS(337),
    [anon_sym_POUNDs] = ACTIONS(339),
    [anon_sym_POUNDhash] = ACTIONS(341),
    [anon_sym_POUNDhasheq] = ACTIONS(341),
    [anon_sym_POUNDhasheqv] = ACTIONS(343),
    [anon_sym_SQUOTE] = ACTIONS(345),
    [anon_sym_BQUOTE] = ACTIONS(345),
    [anon_sym_COMMA] = ACTIONS(347),
    [anon_sym_COMMA_AT] = ACTIONS(345),
    [anon_sym_POUND_SQUOTE] = ACTIONS(345),
    [anon_sym_POUND_BQUOTE] = ACTIONS(345),
    [anon_sym_POUND_COMMA] = ACTIONS(347),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(345),
  },
  [36] = {
    [sym__skip] = STATE(41),
    [sym__all_comment] = STATE(41),
    [sym_comment] = STATE(41),
    [sym_block_comment] = STATE(41),
    [sym_sexp_comment] = STATE(41),
    [sym__datum] = STATE(82),
    [sym_string] = STATE(82),
    [sym_byte_string] = STATE(82),
    [sym_here_string] = STATE(82),
    [sym_regex] = STATE(82),
    [sym__real_string] = STATE(85),
    [sym_symbol] = STATE(82),
    [sym_box] = STATE(82),
    [sym_list] = STATE(82),
    [sym_vector] = STATE(82),
    [sym_structure] = STATE(82),
    [sym_hash] = STATE(82),
    [sym_graph] = STATE(82),
    [sym_quote] = STATE(82),
    [aux_sym_sexp_comment_repeat1] = STATE(41),
    [aux_sym__token_token1] = ACTIONS(391),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_PIPE] = ACTIONS(297),
    [anon_sym_POUND_SEMI] = ACTIONS(299),
    [sym__line_comment] = ACTIONS(295),
    [sym_boolean] = ACTIONS(393),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(393),
    [sym_character] = ACTIONS(395),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(395),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
  },
  [37] = {
    [sym__skip] = STATE(32),
    [sym__all_comment] = STATE(32),
    [sym_comment] = STATE(32),
    [sym_block_comment] = STATE(32),
    [sym_sexp_comment] = STATE(32),
    [sym__datum] = STATE(117),
    [sym_string] = STATE(117),
    [sym_byte_string] = STATE(117),
    [sym_here_string] = STATE(117),
    [sym_regex] = STATE(117),
    [sym__real_string] = STATE(109),
    [sym_symbol] = STATE(117),
    [sym_box] = STATE(117),
    [sym_list] = STATE(117),
    [sym_vector] = STATE(117),
    [sym_structure] = STATE(117),
    [sym_hash] = STATE(117),
    [sym_graph] = STATE(117),
    [sym_quote] = STATE(117),
    [aux_sym_sexp_comment_repeat1] = STATE(32),
    [aux_sym__token_token1] = ACTIONS(397),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_PIPE] = ACTIONS(297),
    [anon_sym_POUND_SEMI] = ACTIONS(299),
    [sym__line_comment] = ACTIONS(295),
    [sym_boolean] = ACTIONS(399),
    [anon_sym_POUND] = ACTIONS(317),
    [anon_sym_POUND_LT_LT] = ACTIONS(319),
    [aux_sym_regex_token1] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(323),
    [sym_number] = ACTIONS(399),
    [sym_character] = ACTIONS(401),
    [aux_sym_symbol_token1] = ACTIONS(327),
    [sym_keyword] = ACTIONS(401),
    [anon_sym_POUND_AMP] = ACTIONS(329),
    [anon_sym_LPAREN] = ACTIONS(331),
    [anon_sym_LBRACK] = ACTIONS(333),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_POUNDfl] = ACTIONS(337),
    [anon_sym_POUNDfx] = ACTIONS(337),
    [anon_sym_POUNDs] = ACTIONS(339),
    [anon_sym_POUNDhash] = ACTIONS(341),
    [anon_sym_POUNDhasheq] = ACTIONS(341),
    [anon_sym_POUNDhasheqv] = ACTIONS(343),
    [anon_sym_SQUOTE] = ACTIONS(345),
    [anon_sym_BQUOTE] = ACTIONS(345),
    [anon_sym_COMMA] = ACTIONS(347),
    [anon_sym_COMMA_AT] = ACTIONS(345),
    [anon_sym_POUND_SQUOTE] = ACTIONS(345),
    [anon_sym_POUND_BQUOTE] = ACTIONS(345),
    [anon_sym_POUND_COMMA] = ACTIONS(347),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(345),
  },
  [38] = {
    [sym__skip] = STATE(30),
    [sym__all_comment] = STATE(30),
    [sym_comment] = STATE(30),
    [sym_block_comment] = STATE(30),
    [sym_sexp_comment] = STATE(30),
    [sym__datum] = STATE(65),
    [sym_string] = STATE(65),
    [sym_byte_string] = STATE(65),
    [sym_here_string] = STATE(65),
    [sym_regex] = STATE(65),
    [sym__real_string] = STATE(70),
    [sym_symbol] = STATE(65),
    [sym_box] = STATE(65),
    [sym_list] = STATE(65),
    [sym_vector] = STATE(65),
    [sym_structure] = STATE(65),
    [sym_hash] = STATE(65),
    [sym_graph] = STATE(65),
    [sym_quote] = STATE(65),
    [aux_sym_sexp_comment_repeat1] = STATE(30),
    [aux_sym__token_token1] = ACTIONS(403),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_PIPE] = ACTIONS(297),
    [anon_sym_POUND_SEMI] = ACTIONS(299),
    [sym__line_comment] = ACTIONS(295),
    [sym_boolean] = ACTIONS(405),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_POUND_LT_LT] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(405),
    [sym_character] = ACTIONS(407),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(407),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
  },
  [39] = {
    [sym__skip] = STATE(40),
    [sym__all_comment] = STATE(40),
    [sym_comment] = STATE(40),
    [sym_block_comment] = STATE(40),
    [sym_sexp_comment] = STATE(40),
    [sym__datum] = STATE(69),
    [sym_string] = STATE(69),
    [sym_byte_string] = STATE(69),
    [sym_here_string] = STATE(69),
    [sym_regex] = STATE(69),
    [sym__real_string] = STATE(70),
    [sym_symbol] = STATE(69),
    [sym_box] = STATE(69),
    [sym_list] = STATE(69),
    [sym_vector] = STATE(69),
    [sym_structure] = STATE(69),
    [sym_hash] = STATE(69),
    [sym_graph] = STATE(69),
    [sym_quote] = STATE(69),
    [aux_sym_sexp_comment_repeat1] = STATE(40),
    [aux_sym__token_token1] = ACTIONS(409),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_PIPE] = ACTIONS(297),
    [anon_sym_POUND_SEMI] = ACTIONS(299),
    [sym__line_comment] = ACTIONS(295),
    [sym_boolean] = ACTIONS(411),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_POUND_LT_LT] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(411),
    [sym_character] = ACTIONS(413),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(413),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
  },
  [40] = {
    [sym__skip] = STATE(78),
    [sym__all_comment] = STATE(78),
    [sym_comment] = STATE(78),
    [sym_block_comment] = STATE(78),
    [sym_sexp_comment] = STATE(78),
    [sym__datum] = STATE(64),
    [sym_string] = STATE(64),
    [sym_byte_string] = STATE(64),
    [sym_here_string] = STATE(64),
    [sym_regex] = STATE(64),
    [sym__real_string] = STATE(70),
    [sym_symbol] = STATE(64),
    [sym_box] = STATE(64),
    [sym_list] = STATE(64),
    [sym_vector] = STATE(64),
    [sym_structure] = STATE(64),
    [sym_hash] = STATE(64),
    [sym_graph] = STATE(64),
    [sym_quote] = STATE(64),
    [aux_sym_sexp_comment_repeat1] = STATE(78),
    [aux_sym__token_token1] = ACTIONS(293),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_PIPE] = ACTIONS(297),
    [anon_sym_POUND_SEMI] = ACTIONS(299),
    [sym__line_comment] = ACTIONS(295),
    [sym_boolean] = ACTIONS(415),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_POUND_LT_LT] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(415),
    [sym_character] = ACTIONS(417),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(417),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
  },
  [41] = {
    [sym__skip] = STATE(78),
    [sym__all_comment] = STATE(78),
    [sym_comment] = STATE(78),
    [sym_block_comment] = STATE(78),
    [sym_sexp_comment] = STATE(78),
    [sym__datum] = STATE(83),
    [sym_string] = STATE(83),
    [sym_byte_string] = STATE(83),
    [sym_here_string] = STATE(83),
    [sym_regex] = STATE(83),
    [sym__real_string] = STATE(85),
    [sym_symbol] = STATE(83),
    [sym_box] = STATE(83),
    [sym_list] = STATE(83),
    [sym_vector] = STATE(83),
    [sym_structure] = STATE(83),
    [sym_hash] = STATE(83),
    [sym_graph] = STATE(83),
    [sym_quote] = STATE(83),
    [aux_sym_sexp_comment_repeat1] = STATE(78),
    [aux_sym__token_token1] = ACTIONS(293),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_PIPE] = ACTIONS(297),
    [anon_sym_POUND_SEMI] = ACTIONS(299),
    [sym__line_comment] = ACTIONS(295),
    [sym_boolean] = ACTIONS(419),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(419),
    [sym_character] = ACTIONS(421),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(421),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
  },
  [42] = {
    [sym__skip] = STATE(78),
    [sym__all_comment] = STATE(78),
    [sym_comment] = STATE(78),
    [sym_block_comment] = STATE(78),
    [sym_sexp_comment] = STATE(78),
    [sym__datum] = STATE(63),
    [sym_string] = STATE(63),
    [sym_byte_string] = STATE(63),
    [sym_here_string] = STATE(63),
    [sym_regex] = STATE(63),
    [sym__real_string] = STATE(70),
    [sym_symbol] = STATE(63),
    [sym_box] = STATE(63),
    [sym_list] = STATE(63),
    [sym_vector] = STATE(63),
    [sym_structure] = STATE(63),
    [sym_hash] = STATE(63),
    [sym_graph] = STATE(63),
    [sym_quote] = STATE(63),
    [aux_sym_sexp_comment_repeat1] = STATE(78),
    [aux_sym__token_token1] = ACTIONS(293),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_PIPE] = ACTIONS(297),
    [anon_sym_POUND_SEMI] = ACTIONS(299),
    [sym__line_comment] = ACTIONS(295),
    [sym_boolean] = ACTIONS(423),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_POUND_LT_LT] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(423),
    [sym_character] = ACTIONS(425),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(425),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
  },
  [43] = {
    [sym__skip] = STATE(33),
    [sym__all_comment] = STATE(33),
    [sym_comment] = STATE(33),
    [sym_block_comment] = STATE(33),
    [sym_sexp_comment] = STATE(33),
    [sym__datum] = STATE(71),
    [sym_string] = STATE(71),
    [sym_byte_string] = STATE(71),
    [sym_here_string] = STATE(71),
    [sym_regex] = STATE(71),
    [sym__real_string] = STATE(70),
    [sym_symbol] = STATE(71),
    [sym_box] = STATE(71),
    [sym_list] = STATE(71),
    [sym_vector] = STATE(71),
    [sym_structure] = STATE(71),
    [sym_hash] = STATE(71),
    [sym_graph] = STATE(71),
    [sym_quote] = STATE(71),
    [aux_sym_sexp_comment_repeat1] = STATE(33),
    [aux_sym__token_token1] = ACTIONS(427),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_PIPE] = ACTIONS(297),
    [anon_sym_POUND_SEMI] = ACTIONS(299),
    [sym__line_comment] = ACTIONS(295),
    [sym_boolean] = ACTIONS(429),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_POUND_LT_LT] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(429),
    [sym_character] = ACTIONS(431),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(431),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
  },
  [44] = {
    [sym__skip] = STATE(78),
    [sym__all_comment] = STATE(78),
    [sym_comment] = STATE(78),
    [sym_block_comment] = STATE(78),
    [sym_sexp_comment] = STATE(78),
    [sym__datum] = STATE(92),
    [sym_string] = STATE(92),
    [sym_byte_string] = STATE(92),
    [sym_here_string] = STATE(92),
    [sym_regex] = STATE(92),
    [sym__real_string] = STATE(85),
    [sym_symbol] = STATE(92),
    [sym_box] = STATE(92),
    [sym_list] = STATE(92),
    [sym_vector] = STATE(92),
    [sym_structure] = STATE(92),
    [sym_hash] = STATE(92),
    [sym_graph] = STATE(92),
    [sym_quote] = STATE(92),
    [aux_sym_sexp_comment_repeat1] = STATE(78),
    [aux_sym__token_token1] = ACTIONS(293),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_PIPE] = ACTIONS(297),
    [anon_sym_POUND_SEMI] = ACTIONS(299),
    [sym__line_comment] = ACTIONS(295),
    [sym_boolean] = ACTIONS(433),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(433),
    [sym_character] = ACTIONS(435),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(435),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
  },
  [45] = {
    [sym__skip] = STATE(44),
    [sym__all_comment] = STATE(44),
    [sym_comment] = STATE(44),
    [sym_block_comment] = STATE(44),
    [sym_sexp_comment] = STATE(44),
    [sym__datum] = STATE(79),
    [sym_string] = STATE(79),
    [sym_byte_string] = STATE(79),
    [sym_here_string] = STATE(79),
    [sym_regex] = STATE(79),
    [sym__real_string] = STATE(85),
    [sym_symbol] = STATE(79),
    [sym_box] = STATE(79),
    [sym_list] = STATE(79),
    [sym_vector] = STATE(79),
    [sym_structure] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_graph] = STATE(79),
    [sym_quote] = STATE(79),
    [aux_sym_sexp_comment_repeat1] = STATE(44),
    [aux_sym__token_token1] = ACTIONS(437),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_PIPE] = ACTIONS(297),
    [anon_sym_POUND_SEMI] = ACTIONS(299),
    [sym__line_comment] = ACTIONS(295),
    [sym_boolean] = ACTIONS(439),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(439),
    [sym_character] = ACTIONS(441),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(441),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
  },
  [46] = {
    [sym__skip] = STATE(78),
    [sym__all_comment] = STATE(78),
    [sym_comment] = STATE(78),
    [sym_block_comment] = STATE(78),
    [sym_sexp_comment] = STATE(78),
    [sym__datum] = STATE(81),
    [sym_string] = STATE(81),
    [sym_byte_string] = STATE(81),
    [sym_here_string] = STATE(81),
    [sym_regex] = STATE(81),
    [sym__real_string] = STATE(85),
    [sym_symbol] = STATE(81),
    [sym_box] = STATE(81),
    [sym_list] = STATE(81),
    [sym_vector] = STATE(81),
    [sym_structure] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_graph] = STATE(81),
    [sym_quote] = STATE(81),
    [aux_sym_sexp_comment_repeat1] = STATE(78),
    [aux_sym__token_token1] = ACTIONS(293),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_PIPE] = ACTIONS(297),
    [anon_sym_POUND_SEMI] = ACTIONS(299),
    [sym__line_comment] = ACTIONS(295),
    [sym_boolean] = ACTIONS(443),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(443),
    [sym_character] = ACTIONS(445),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(445),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
  },
  [47] = {
    [sym__skip] = STATE(46),
    [sym__all_comment] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_block_comment] = STATE(46),
    [sym_sexp_comment] = STATE(46),
    [sym__datum] = STATE(99),
    [sym_string] = STATE(99),
    [sym_byte_string] = STATE(99),
    [sym_here_string] = STATE(99),
    [sym_regex] = STATE(99),
    [sym__real_string] = STATE(85),
    [sym_symbol] = STATE(99),
    [sym_box] = STATE(99),
    [sym_list] = STATE(99),
    [sym_vector] = STATE(99),
    [sym_structure] = STATE(99),
    [sym_hash] = STATE(99),
    [sym_graph] = STATE(99),
    [sym_quote] = STATE(99),
    [aux_sym_sexp_comment_repeat1] = STATE(46),
    [aux_sym__token_token1] = ACTIONS(447),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_PIPE] = ACTIONS(297),
    [anon_sym_POUND_SEMI] = ACTIONS(299),
    [sym__line_comment] = ACTIONS(295),
    [sym_boolean] = ACTIONS(449),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(449),
    [sym_character] = ACTIONS(451),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(451),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
  },
  [48] = {
    [sym__skip] = STATE(27),
    [sym__all_comment] = STATE(27),
    [sym_comment] = STATE(27),
    [sym_block_comment] = STATE(27),
    [sym_sexp_comment] = STATE(27),
    [sym__datum] = STATE(88),
    [sym_string] = STATE(88),
    [sym_byte_string] = STATE(88),
    [sym_here_string] = STATE(88),
    [sym_regex] = STATE(88),
    [sym__real_string] = STATE(85),
    [sym_symbol] = STATE(88),
    [sym_box] = STATE(88),
    [sym_list] = STATE(88),
    [sym_vector] = STATE(88),
    [sym_structure] = STATE(88),
    [sym_hash] = STATE(88),
    [sym_graph] = STATE(88),
    [sym_quote] = STATE(88),
    [aux_sym_sexp_comment_repeat1] = STATE(27),
    [aux_sym__token_token1] = ACTIONS(453),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_PIPE] = ACTIONS(297),
    [anon_sym_POUND_SEMI] = ACTIONS(299),
    [sym__line_comment] = ACTIONS(295),
    [sym_boolean] = ACTIONS(455),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(455),
    [sym_character] = ACTIONS(457),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(457),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
  },
  [49] = {
    [sym__skip] = STATE(42),
    [sym__all_comment] = STATE(42),
    [sym_comment] = STATE(42),
    [sym_block_comment] = STATE(42),
    [sym_sexp_comment] = STATE(42),
    [sym__datum] = STATE(60),
    [sym_string] = STATE(60),
    [sym_byte_string] = STATE(60),
    [sym_here_string] = STATE(60),
    [sym_regex] = STATE(60),
    [sym__real_string] = STATE(70),
    [sym_symbol] = STATE(60),
    [sym_box] = STATE(60),
    [sym_list] = STATE(60),
    [sym_vector] = STATE(60),
    [sym_structure] = STATE(60),
    [sym_hash] = STATE(60),
    [sym_graph] = STATE(60),
    [sym_quote] = STATE(60),
    [aux_sym_sexp_comment_repeat1] = STATE(42),
    [aux_sym__token_token1] = ACTIONS(459),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_PIPE] = ACTIONS(297),
    [anon_sym_POUND_SEMI] = ACTIONS(299),
    [sym__line_comment] = ACTIONS(295),
    [sym_boolean] = ACTIONS(461),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_POUND_LT_LT] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(461),
    [sym_character] = ACTIONS(463),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(463),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
  },
  [50] = {
    [sym__skip] = STATE(26),
    [sym__all_comment] = STATE(26),
    [sym_comment] = STATE(26),
    [sym_block_comment] = STATE(26),
    [sym_sexp_comment] = STATE(26),
    [sym__datum] = STATE(108),
    [sym_string] = STATE(108),
    [sym_byte_string] = STATE(108),
    [sym_here_string] = STATE(108),
    [sym_regex] = STATE(108),
    [sym__real_string] = STATE(109),
    [sym_symbol] = STATE(108),
    [sym_box] = STATE(108),
    [sym_list] = STATE(108),
    [sym_vector] = STATE(108),
    [sym_structure] = STATE(108),
    [sym_hash] = STATE(108),
    [sym_graph] = STATE(108),
    [sym_quote] = STATE(108),
    [aux_sym_sexp_comment_repeat1] = STATE(26),
    [aux_sym__token_token1] = ACTIONS(465),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_PIPE] = ACTIONS(297),
    [anon_sym_POUND_SEMI] = ACTIONS(299),
    [sym__line_comment] = ACTIONS(295),
    [sym_boolean] = ACTIONS(467),
    [anon_sym_POUND] = ACTIONS(317),
    [anon_sym_POUND_LT_LT] = ACTIONS(319),
    [aux_sym_regex_token1] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(323),
    [sym_number] = ACTIONS(467),
    [sym_character] = ACTIONS(469),
    [aux_sym_symbol_token1] = ACTIONS(327),
    [sym_keyword] = ACTIONS(469),
    [anon_sym_POUND_AMP] = ACTIONS(329),
    [anon_sym_LPAREN] = ACTIONS(331),
    [anon_sym_LBRACK] = ACTIONS(333),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_POUNDfl] = ACTIONS(337),
    [anon_sym_POUNDfx] = ACTIONS(337),
    [anon_sym_POUNDs] = ACTIONS(339),
    [anon_sym_POUNDhash] = ACTIONS(341),
    [anon_sym_POUNDhasheq] = ACTIONS(341),
    [anon_sym_POUNDhasheqv] = ACTIONS(343),
    [anon_sym_SQUOTE] = ACTIONS(345),
    [anon_sym_BQUOTE] = ACTIONS(345),
    [anon_sym_COMMA] = ACTIONS(347),
    [anon_sym_COMMA_AT] = ACTIONS(345),
    [anon_sym_POUND_SQUOTE] = ACTIONS(345),
    [anon_sym_POUND_BQUOTE] = ACTIONS(345),
    [anon_sym_POUND_COMMA] = ACTIONS(347),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(345),
  },
  [51] = {
    [aux_sym__token_token1] = ACTIONS(471),
    [sym_dot] = ACTIONS(473),
    [aux_sym_comment_token1] = ACTIONS(471),
    [anon_sym_POUND_PIPE] = ACTIONS(471),
    [anon_sym_POUND_SEMI] = ACTIONS(471),
    [sym__line_comment] = ACTIONS(471),
    [sym_boolean] = ACTIONS(473),
    [anon_sym_POUND] = ACTIONS(473),
    [anon_sym_POUND_LT_LT] = ACTIONS(471),
    [aux_sym_regex_token1] = ACTIONS(471),
    [anon_sym_DQUOTE] = ACTIONS(471),
    [sym_number] = ACTIONS(473),
    [sym_character] = ACTIONS(471),
    [aux_sym_symbol_token1] = ACTIONS(473),
    [sym_keyword] = ACTIONS(471),
    [anon_sym_POUND_AMP] = ACTIONS(471),
    [anon_sym_LPAREN] = ACTIONS(471),
    [anon_sym_RPAREN] = ACTIONS(471),
    [anon_sym_LBRACK] = ACTIONS(471),
    [anon_sym_RBRACK] = ACTIONS(471),
    [anon_sym_LBRACE] = ACTIONS(471),
    [anon_sym_RBRACE] = ACTIONS(471),
    [anon_sym_POUNDfl] = ACTIONS(471),
    [anon_sym_POUNDfx] = ACTIONS(471),
    [anon_sym_POUNDs] = ACTIONS(471),
    [anon_sym_POUNDhash] = ACTIONS(473),
    [anon_sym_POUNDhasheq] = ACTIONS(473),
    [anon_sym_POUNDhasheqv] = ACTIONS(471),
    [anon_sym_SQUOTE] = ACTIONS(471),
    [anon_sym_BQUOTE] = ACTIONS(471),
    [anon_sym_COMMA] = ACTIONS(473),
    [anon_sym_COMMA_AT] = ACTIONS(471),
    [anon_sym_POUND_SQUOTE] = ACTIONS(471),
    [anon_sym_POUND_BQUOTE] = ACTIONS(471),
    [anon_sym_POUND_COMMA] = ACTIONS(473),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(471),
    [anon_sym_POUNDreader] = ACTIONS(471),
    [anon_sym_POUNDlang] = ACTIONS(471),
    [anon_sym_POUND_BANG] = ACTIONS(473),
  },
  [52] = {
    [aux_sym__token_token1] = ACTIONS(475),
    [sym_dot] = ACTIONS(477),
    [aux_sym_comment_token1] = ACTIONS(475),
    [anon_sym_POUND_PIPE] = ACTIONS(475),
    [anon_sym_POUND_SEMI] = ACTIONS(475),
    [sym__line_comment] = ACTIONS(475),
    [sym_boolean] = ACTIONS(477),
    [anon_sym_POUND] = ACTIONS(477),
    [anon_sym_POUND_LT_LT] = ACTIONS(475),
    [aux_sym_regex_token1] = ACTIONS(475),
    [anon_sym_DQUOTE] = ACTIONS(475),
    [sym_number] = ACTIONS(477),
    [sym_character] = ACTIONS(475),
    [aux_sym_symbol_token1] = ACTIONS(477),
    [sym_keyword] = ACTIONS(475),
    [anon_sym_POUND_AMP] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(475),
    [anon_sym_RPAREN] = ACTIONS(475),
    [anon_sym_LBRACK] = ACTIONS(475),
    [anon_sym_RBRACK] = ACTIONS(475),
    [anon_sym_LBRACE] = ACTIONS(475),
    [anon_sym_RBRACE] = ACTIONS(475),
    [anon_sym_POUNDfl] = ACTIONS(475),
    [anon_sym_POUNDfx] = ACTIONS(475),
    [anon_sym_POUNDs] = ACTIONS(475),
    [anon_sym_POUNDhash] = ACTIONS(477),
    [anon_sym_POUNDhasheq] = ACTIONS(477),
    [anon_sym_POUNDhasheqv] = ACTIONS(475),
    [anon_sym_SQUOTE] = ACTIONS(475),
    [anon_sym_BQUOTE] = ACTIONS(475),
    [anon_sym_COMMA] = ACTIONS(477),
    [anon_sym_COMMA_AT] = ACTIONS(475),
    [anon_sym_POUND_SQUOTE] = ACTIONS(475),
    [anon_sym_POUND_BQUOTE] = ACTIONS(475),
    [anon_sym_POUND_COMMA] = ACTIONS(477),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(475),
    [anon_sym_POUNDreader] = ACTIONS(475),
    [anon_sym_POUNDlang] = ACTIONS(475),
    [anon_sym_POUND_BANG] = ACTIONS(477),
  },
  [53] = {
    [aux_sym__token_token1] = ACTIONS(479),
    [sym_dot] = ACTIONS(481),
    [aux_sym_comment_token1] = ACTIONS(479),
    [anon_sym_POUND_PIPE] = ACTIONS(479),
    [anon_sym_POUND_SEMI] = ACTIONS(479),
    [sym__line_comment] = ACTIONS(479),
    [sym_boolean] = ACTIONS(481),
    [anon_sym_POUND] = ACTIONS(481),
    [anon_sym_POUND_LT_LT] = ACTIONS(479),
    [aux_sym_regex_token1] = ACTIONS(479),
    [anon_sym_DQUOTE] = ACTIONS(479),
    [sym_number] = ACTIONS(481),
    [sym_character] = ACTIONS(479),
    [aux_sym_symbol_token1] = ACTIONS(481),
    [sym_keyword] = ACTIONS(479),
    [anon_sym_POUND_AMP] = ACTIONS(479),
    [anon_sym_LPAREN] = ACTIONS(479),
    [anon_sym_RPAREN] = ACTIONS(479),
    [anon_sym_LBRACK] = ACTIONS(479),
    [anon_sym_RBRACK] = ACTIONS(479),
    [anon_sym_LBRACE] = ACTIONS(479),
    [anon_sym_RBRACE] = ACTIONS(479),
    [anon_sym_POUNDfl] = ACTIONS(479),
    [anon_sym_POUNDfx] = ACTIONS(479),
    [anon_sym_POUNDs] = ACTIONS(479),
    [anon_sym_POUNDhash] = ACTIONS(481),
    [anon_sym_POUNDhasheq] = ACTIONS(481),
    [anon_sym_POUNDhasheqv] = ACTIONS(479),
    [anon_sym_SQUOTE] = ACTIONS(479),
    [anon_sym_BQUOTE] = ACTIONS(479),
    [anon_sym_COMMA] = ACTIONS(481),
    [anon_sym_COMMA_AT] = ACTIONS(479),
    [anon_sym_POUND_SQUOTE] = ACTIONS(479),
    [anon_sym_POUND_BQUOTE] = ACTIONS(479),
    [anon_sym_POUND_COMMA] = ACTIONS(481),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(479),
    [anon_sym_POUNDreader] = ACTIONS(479),
    [anon_sym_POUNDlang] = ACTIONS(479),
    [anon_sym_POUND_BANG] = ACTIONS(481),
  },
  [54] = {
    [aux_sym__token_token1] = ACTIONS(483),
    [sym_dot] = ACTIONS(485),
    [aux_sym_comment_token1] = ACTIONS(483),
    [anon_sym_POUND_PIPE] = ACTIONS(483),
    [anon_sym_POUND_SEMI] = ACTIONS(483),
    [sym__line_comment] = ACTIONS(483),
    [sym_boolean] = ACTIONS(485),
    [anon_sym_POUND] = ACTIONS(485),
    [anon_sym_POUND_LT_LT] = ACTIONS(483),
    [aux_sym_regex_token1] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(483),
    [sym_number] = ACTIONS(485),
    [sym_character] = ACTIONS(483),
    [aux_sym_symbol_token1] = ACTIONS(485),
    [sym_keyword] = ACTIONS(483),
    [anon_sym_POUND_AMP] = ACTIONS(483),
    [anon_sym_LPAREN] = ACTIONS(483),
    [anon_sym_RPAREN] = ACTIONS(483),
    [anon_sym_LBRACK] = ACTIONS(483),
    [anon_sym_RBRACK] = ACTIONS(483),
    [anon_sym_LBRACE] = ACTIONS(483),
    [anon_sym_RBRACE] = ACTIONS(483),
    [anon_sym_POUNDfl] = ACTIONS(483),
    [anon_sym_POUNDfx] = ACTIONS(483),
    [anon_sym_POUNDs] = ACTIONS(483),
    [anon_sym_POUNDhash] = ACTIONS(485),
    [anon_sym_POUNDhasheq] = ACTIONS(485),
    [anon_sym_POUNDhasheqv] = ACTIONS(483),
    [anon_sym_SQUOTE] = ACTIONS(483),
    [anon_sym_BQUOTE] = ACTIONS(483),
    [anon_sym_COMMA] = ACTIONS(485),
    [anon_sym_COMMA_AT] = ACTIONS(483),
    [anon_sym_POUND_SQUOTE] = ACTIONS(483),
    [anon_sym_POUND_BQUOTE] = ACTIONS(483),
    [anon_sym_POUND_COMMA] = ACTIONS(485),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(483),
    [anon_sym_POUNDreader] = ACTIONS(483),
    [anon_sym_POUNDlang] = ACTIONS(483),
    [anon_sym_POUND_BANG] = ACTIONS(485),
  },
  [55] = {
    [aux_sym__token_token1] = ACTIONS(487),
    [sym_dot] = ACTIONS(489),
    [aux_sym_comment_token1] = ACTIONS(487),
    [anon_sym_POUND_PIPE] = ACTIONS(487),
    [anon_sym_POUND_SEMI] = ACTIONS(487),
    [sym__line_comment] = ACTIONS(487),
    [sym_boolean] = ACTIONS(489),
    [anon_sym_POUND] = ACTIONS(489),
    [anon_sym_POUND_LT_LT] = ACTIONS(487),
    [aux_sym_regex_token1] = ACTIONS(487),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [sym_number] = ACTIONS(489),
    [sym_character] = ACTIONS(487),
    [aux_sym_symbol_token1] = ACTIONS(489),
    [sym_keyword] = ACTIONS(487),
    [anon_sym_POUND_AMP] = ACTIONS(487),
    [anon_sym_LPAREN] = ACTIONS(487),
    [anon_sym_RPAREN] = ACTIONS(487),
    [anon_sym_LBRACK] = ACTIONS(487),
    [anon_sym_RBRACK] = ACTIONS(487),
    [anon_sym_LBRACE] = ACTIONS(487),
    [anon_sym_RBRACE] = ACTIONS(487),
    [anon_sym_POUNDfl] = ACTIONS(487),
    [anon_sym_POUNDfx] = ACTIONS(487),
    [anon_sym_POUNDs] = ACTIONS(487),
    [anon_sym_POUNDhash] = ACTIONS(489),
    [anon_sym_POUNDhasheq] = ACTIONS(489),
    [anon_sym_POUNDhasheqv] = ACTIONS(487),
    [anon_sym_SQUOTE] = ACTIONS(487),
    [anon_sym_BQUOTE] = ACTIONS(487),
    [anon_sym_COMMA] = ACTIONS(489),
    [anon_sym_COMMA_AT] = ACTIONS(487),
    [anon_sym_POUND_SQUOTE] = ACTIONS(487),
    [anon_sym_POUND_BQUOTE] = ACTIONS(487),
    [anon_sym_POUND_COMMA] = ACTIONS(489),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(487),
    [anon_sym_POUNDreader] = ACTIONS(487),
    [anon_sym_POUNDlang] = ACTIONS(487),
    [anon_sym_POUND_BANG] = ACTIONS(489),
  },
  [56] = {
    [aux_sym__token_token1] = ACTIONS(491),
    [sym_dot] = ACTIONS(493),
    [aux_sym_comment_token1] = ACTIONS(491),
    [anon_sym_POUND_PIPE] = ACTIONS(491),
    [anon_sym_POUND_SEMI] = ACTIONS(491),
    [sym__line_comment] = ACTIONS(491),
    [sym_boolean] = ACTIONS(493),
    [anon_sym_POUND] = ACTIONS(493),
    [anon_sym_POUND_LT_LT] = ACTIONS(491),
    [aux_sym_regex_token1] = ACTIONS(491),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [sym_number] = ACTIONS(493),
    [sym_character] = ACTIONS(491),
    [aux_sym_symbol_token1] = ACTIONS(493),
    [sym_keyword] = ACTIONS(491),
    [anon_sym_POUND_AMP] = ACTIONS(491),
    [anon_sym_LPAREN] = ACTIONS(491),
    [anon_sym_RPAREN] = ACTIONS(491),
    [anon_sym_LBRACK] = ACTIONS(491),
    [anon_sym_RBRACK] = ACTIONS(491),
    [anon_sym_LBRACE] = ACTIONS(491),
    [anon_sym_RBRACE] = ACTIONS(491),
    [anon_sym_POUNDfl] = ACTIONS(491),
    [anon_sym_POUNDfx] = ACTIONS(491),
    [anon_sym_POUNDs] = ACTIONS(491),
    [anon_sym_POUNDhash] = ACTIONS(493),
    [anon_sym_POUNDhasheq] = ACTIONS(493),
    [anon_sym_POUNDhasheqv] = ACTIONS(491),
    [anon_sym_SQUOTE] = ACTIONS(491),
    [anon_sym_BQUOTE] = ACTIONS(491),
    [anon_sym_COMMA] = ACTIONS(493),
    [anon_sym_COMMA_AT] = ACTIONS(491),
    [anon_sym_POUND_SQUOTE] = ACTIONS(491),
    [anon_sym_POUND_BQUOTE] = ACTIONS(491),
    [anon_sym_POUND_COMMA] = ACTIONS(493),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(491),
    [anon_sym_POUNDreader] = ACTIONS(491),
    [anon_sym_POUNDlang] = ACTIONS(491),
    [anon_sym_POUND_BANG] = ACTIONS(493),
  },
  [57] = {
    [aux_sym__token_token1] = ACTIONS(495),
    [sym_dot] = ACTIONS(497),
    [aux_sym_comment_token1] = ACTIONS(495),
    [anon_sym_POUND_PIPE] = ACTIONS(495),
    [anon_sym_POUND_SEMI] = ACTIONS(495),
    [sym__line_comment] = ACTIONS(495),
    [sym_boolean] = ACTIONS(497),
    [anon_sym_POUND] = ACTIONS(497),
    [anon_sym_POUND_LT_LT] = ACTIONS(495),
    [aux_sym_regex_token1] = ACTIONS(495),
    [anon_sym_DQUOTE] = ACTIONS(495),
    [sym_number] = ACTIONS(497),
    [sym_character] = ACTIONS(495),
    [aux_sym_symbol_token1] = ACTIONS(497),
    [sym_keyword] = ACTIONS(495),
    [anon_sym_POUND_AMP] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(495),
    [anon_sym_RPAREN] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(495),
    [anon_sym_RBRACK] = ACTIONS(495),
    [anon_sym_LBRACE] = ACTIONS(495),
    [anon_sym_RBRACE] = ACTIONS(495),
    [anon_sym_POUNDfl] = ACTIONS(495),
    [anon_sym_POUNDfx] = ACTIONS(495),
    [anon_sym_POUNDs] = ACTIONS(495),
    [anon_sym_POUNDhash] = ACTIONS(497),
    [anon_sym_POUNDhasheq] = ACTIONS(497),
    [anon_sym_POUNDhasheqv] = ACTIONS(495),
    [anon_sym_SQUOTE] = ACTIONS(495),
    [anon_sym_BQUOTE] = ACTIONS(495),
    [anon_sym_COMMA] = ACTIONS(497),
    [anon_sym_COMMA_AT] = ACTIONS(495),
    [anon_sym_POUND_SQUOTE] = ACTIONS(495),
    [anon_sym_POUND_BQUOTE] = ACTIONS(495),
    [anon_sym_POUND_COMMA] = ACTIONS(497),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(495),
    [anon_sym_POUNDreader] = ACTIONS(495),
    [anon_sym_POUNDlang] = ACTIONS(495),
    [anon_sym_POUND_BANG] = ACTIONS(497),
  },
  [58] = {
    [aux_sym__token_token1] = ACTIONS(499),
    [sym_dot] = ACTIONS(501),
    [aux_sym_comment_token1] = ACTIONS(499),
    [anon_sym_POUND_PIPE] = ACTIONS(499),
    [anon_sym_POUND_SEMI] = ACTIONS(499),
    [sym__line_comment] = ACTIONS(499),
    [sym_boolean] = ACTIONS(501),
    [anon_sym_POUND] = ACTIONS(501),
    [anon_sym_POUND_LT_LT] = ACTIONS(499),
    [aux_sym_regex_token1] = ACTIONS(499),
    [anon_sym_DQUOTE] = ACTIONS(499),
    [sym_number] = ACTIONS(501),
    [sym_character] = ACTIONS(499),
    [aux_sym_symbol_token1] = ACTIONS(501),
    [sym_keyword] = ACTIONS(499),
    [anon_sym_POUND_AMP] = ACTIONS(499),
    [anon_sym_LPAREN] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(499),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_RBRACK] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(499),
    [anon_sym_RBRACE] = ACTIONS(499),
    [anon_sym_POUNDfl] = ACTIONS(499),
    [anon_sym_POUNDfx] = ACTIONS(499),
    [anon_sym_POUNDs] = ACTIONS(499),
    [anon_sym_POUNDhash] = ACTIONS(501),
    [anon_sym_POUNDhasheq] = ACTIONS(501),
    [anon_sym_POUNDhasheqv] = ACTIONS(499),
    [anon_sym_SQUOTE] = ACTIONS(499),
    [anon_sym_BQUOTE] = ACTIONS(499),
    [anon_sym_COMMA] = ACTIONS(501),
    [anon_sym_COMMA_AT] = ACTIONS(499),
    [anon_sym_POUND_SQUOTE] = ACTIONS(499),
    [anon_sym_POUND_BQUOTE] = ACTIONS(499),
    [anon_sym_POUND_COMMA] = ACTIONS(501),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(499),
    [anon_sym_POUNDreader] = ACTIONS(499),
    [anon_sym_POUNDlang] = ACTIONS(499),
    [anon_sym_POUND_BANG] = ACTIONS(501),
  },
  [59] = {
    [aux_sym__token_token1] = ACTIONS(503),
    [sym_dot] = ACTIONS(505),
    [aux_sym_comment_token1] = ACTIONS(503),
    [anon_sym_POUND_PIPE] = ACTIONS(503),
    [anon_sym_POUND_SEMI] = ACTIONS(503),
    [sym__line_comment] = ACTIONS(503),
    [sym_boolean] = ACTIONS(505),
    [anon_sym_POUND] = ACTIONS(505),
    [anon_sym_POUND_LT_LT] = ACTIONS(503),
    [aux_sym_regex_token1] = ACTIONS(503),
    [anon_sym_DQUOTE] = ACTIONS(503),
    [sym_number] = ACTIONS(505),
    [sym_character] = ACTIONS(503),
    [aux_sym_symbol_token1] = ACTIONS(505),
    [sym_keyword] = ACTIONS(503),
    [anon_sym_POUND_AMP] = ACTIONS(503),
    [anon_sym_LPAREN] = ACTIONS(503),
    [anon_sym_RPAREN] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(503),
    [anon_sym_RBRACK] = ACTIONS(503),
    [anon_sym_LBRACE] = ACTIONS(503),
    [anon_sym_RBRACE] = ACTIONS(503),
    [anon_sym_POUNDfl] = ACTIONS(503),
    [anon_sym_POUNDfx] = ACTIONS(503),
    [anon_sym_POUNDs] = ACTIONS(503),
    [anon_sym_POUNDhash] = ACTIONS(505),
    [anon_sym_POUNDhasheq] = ACTIONS(505),
    [anon_sym_POUNDhasheqv] = ACTIONS(503),
    [anon_sym_SQUOTE] = ACTIONS(503),
    [anon_sym_BQUOTE] = ACTIONS(503),
    [anon_sym_COMMA] = ACTIONS(505),
    [anon_sym_COMMA_AT] = ACTIONS(503),
    [anon_sym_POUND_SQUOTE] = ACTIONS(503),
    [anon_sym_POUND_BQUOTE] = ACTIONS(503),
    [anon_sym_POUND_COMMA] = ACTIONS(505),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(503),
    [anon_sym_POUNDreader] = ACTIONS(503),
    [anon_sym_POUNDlang] = ACTIONS(503),
    [anon_sym_POUND_BANG] = ACTIONS(505),
  },
  [60] = {
    [aux_sym__token_token1] = ACTIONS(507),
    [sym_dot] = ACTIONS(509),
    [aux_sym_comment_token1] = ACTIONS(507),
    [anon_sym_POUND_PIPE] = ACTIONS(507),
    [anon_sym_POUND_SEMI] = ACTIONS(507),
    [sym__line_comment] = ACTIONS(507),
    [sym_boolean] = ACTIONS(509),
    [anon_sym_POUND] = ACTIONS(509),
    [anon_sym_POUND_LT_LT] = ACTIONS(507),
    [aux_sym_regex_token1] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(507),
    [sym_number] = ACTIONS(509),
    [sym_character] = ACTIONS(507),
    [aux_sym_symbol_token1] = ACTIONS(509),
    [sym_keyword] = ACTIONS(507),
    [anon_sym_POUND_AMP] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(507),
    [anon_sym_RPAREN] = ACTIONS(507),
    [anon_sym_LBRACK] = ACTIONS(507),
    [anon_sym_RBRACK] = ACTIONS(507),
    [anon_sym_LBRACE] = ACTIONS(507),
    [anon_sym_RBRACE] = ACTIONS(507),
    [anon_sym_POUNDfl] = ACTIONS(507),
    [anon_sym_POUNDfx] = ACTIONS(507),
    [anon_sym_POUNDs] = ACTIONS(507),
    [anon_sym_POUNDhash] = ACTIONS(509),
    [anon_sym_POUNDhasheq] = ACTIONS(509),
    [anon_sym_POUNDhasheqv] = ACTIONS(507),
    [anon_sym_SQUOTE] = ACTIONS(507),
    [anon_sym_BQUOTE] = ACTIONS(507),
    [anon_sym_COMMA] = ACTIONS(509),
    [anon_sym_COMMA_AT] = ACTIONS(507),
    [anon_sym_POUND_SQUOTE] = ACTIONS(507),
    [anon_sym_POUND_BQUOTE] = ACTIONS(507),
    [anon_sym_POUND_COMMA] = ACTIONS(509),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(507),
    [anon_sym_POUNDreader] = ACTIONS(507),
    [anon_sym_POUNDlang] = ACTIONS(507),
    [anon_sym_POUND_BANG] = ACTIONS(509),
  },
  [61] = {
    [aux_sym__token_token1] = ACTIONS(511),
    [sym_dot] = ACTIONS(513),
    [aux_sym_comment_token1] = ACTIONS(511),
    [anon_sym_POUND_PIPE] = ACTIONS(511),
    [anon_sym_POUND_SEMI] = ACTIONS(511),
    [sym__line_comment] = ACTIONS(511),
    [sym_boolean] = ACTIONS(513),
    [anon_sym_POUND] = ACTIONS(513),
    [anon_sym_POUND_LT_LT] = ACTIONS(511),
    [aux_sym_regex_token1] = ACTIONS(511),
    [anon_sym_DQUOTE] = ACTIONS(511),
    [sym_number] = ACTIONS(513),
    [sym_character] = ACTIONS(511),
    [aux_sym_symbol_token1] = ACTIONS(513),
    [sym_keyword] = ACTIONS(511),
    [anon_sym_POUND_AMP] = ACTIONS(511),
    [anon_sym_LPAREN] = ACTIONS(511),
    [anon_sym_RPAREN] = ACTIONS(511),
    [anon_sym_LBRACK] = ACTIONS(511),
    [anon_sym_RBRACK] = ACTIONS(511),
    [anon_sym_LBRACE] = ACTIONS(511),
    [anon_sym_RBRACE] = ACTIONS(511),
    [anon_sym_POUNDfl] = ACTIONS(511),
    [anon_sym_POUNDfx] = ACTIONS(511),
    [anon_sym_POUNDs] = ACTIONS(511),
    [anon_sym_POUNDhash] = ACTIONS(513),
    [anon_sym_POUNDhasheq] = ACTIONS(513),
    [anon_sym_POUNDhasheqv] = ACTIONS(511),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_BQUOTE] = ACTIONS(511),
    [anon_sym_COMMA] = ACTIONS(513),
    [anon_sym_COMMA_AT] = ACTIONS(511),
    [anon_sym_POUND_SQUOTE] = ACTIONS(511),
    [anon_sym_POUND_BQUOTE] = ACTIONS(511),
    [anon_sym_POUND_COMMA] = ACTIONS(513),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(511),
    [anon_sym_POUNDreader] = ACTIONS(511),
    [anon_sym_POUNDlang] = ACTIONS(511),
    [anon_sym_POUND_BANG] = ACTIONS(513),
  },
  [62] = {
    [aux_sym__token_token1] = ACTIONS(515),
    [sym_dot] = ACTIONS(517),
    [aux_sym_comment_token1] = ACTIONS(515),
    [anon_sym_POUND_PIPE] = ACTIONS(515),
    [anon_sym_POUND_SEMI] = ACTIONS(515),
    [sym__line_comment] = ACTIONS(515),
    [sym_boolean] = ACTIONS(517),
    [anon_sym_POUND] = ACTIONS(517),
    [anon_sym_POUND_LT_LT] = ACTIONS(515),
    [aux_sym_regex_token1] = ACTIONS(515),
    [anon_sym_DQUOTE] = ACTIONS(515),
    [sym_number] = ACTIONS(517),
    [sym_character] = ACTIONS(515),
    [aux_sym_symbol_token1] = ACTIONS(517),
    [sym_keyword] = ACTIONS(515),
    [anon_sym_POUND_AMP] = ACTIONS(515),
    [anon_sym_LPAREN] = ACTIONS(515),
    [anon_sym_RPAREN] = ACTIONS(515),
    [anon_sym_LBRACK] = ACTIONS(515),
    [anon_sym_RBRACK] = ACTIONS(515),
    [anon_sym_LBRACE] = ACTIONS(515),
    [anon_sym_RBRACE] = ACTIONS(515),
    [anon_sym_POUNDfl] = ACTIONS(515),
    [anon_sym_POUNDfx] = ACTIONS(515),
    [anon_sym_POUNDs] = ACTIONS(515),
    [anon_sym_POUNDhash] = ACTIONS(517),
    [anon_sym_POUNDhasheq] = ACTIONS(517),
    [anon_sym_POUNDhasheqv] = ACTIONS(515),
    [anon_sym_SQUOTE] = ACTIONS(515),
    [anon_sym_BQUOTE] = ACTIONS(515),
    [anon_sym_COMMA] = ACTIONS(517),
    [anon_sym_COMMA_AT] = ACTIONS(515),
    [anon_sym_POUND_SQUOTE] = ACTIONS(515),
    [anon_sym_POUND_BQUOTE] = ACTIONS(515),
    [anon_sym_POUND_COMMA] = ACTIONS(517),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(515),
    [anon_sym_POUNDreader] = ACTIONS(515),
    [anon_sym_POUNDlang] = ACTIONS(515),
    [anon_sym_POUND_BANG] = ACTIONS(517),
  },
  [63] = {
    [aux_sym__token_token1] = ACTIONS(519),
    [sym_dot] = ACTIONS(521),
    [aux_sym_comment_token1] = ACTIONS(519),
    [anon_sym_POUND_PIPE] = ACTIONS(519),
    [anon_sym_POUND_SEMI] = ACTIONS(519),
    [sym__line_comment] = ACTIONS(519),
    [sym_boolean] = ACTIONS(521),
    [anon_sym_POUND] = ACTIONS(521),
    [anon_sym_POUND_LT_LT] = ACTIONS(519),
    [aux_sym_regex_token1] = ACTIONS(519),
    [anon_sym_DQUOTE] = ACTIONS(519),
    [sym_number] = ACTIONS(521),
    [sym_character] = ACTIONS(519),
    [aux_sym_symbol_token1] = ACTIONS(521),
    [sym_keyword] = ACTIONS(519),
    [anon_sym_POUND_AMP] = ACTIONS(519),
    [anon_sym_LPAREN] = ACTIONS(519),
    [anon_sym_RPAREN] = ACTIONS(519),
    [anon_sym_LBRACK] = ACTIONS(519),
    [anon_sym_RBRACK] = ACTIONS(519),
    [anon_sym_LBRACE] = ACTIONS(519),
    [anon_sym_RBRACE] = ACTIONS(519),
    [anon_sym_POUNDfl] = ACTIONS(519),
    [anon_sym_POUNDfx] = ACTIONS(519),
    [anon_sym_POUNDs] = ACTIONS(519),
    [anon_sym_POUNDhash] = ACTIONS(521),
    [anon_sym_POUNDhasheq] = ACTIONS(521),
    [anon_sym_POUNDhasheqv] = ACTIONS(519),
    [anon_sym_SQUOTE] = ACTIONS(519),
    [anon_sym_BQUOTE] = ACTIONS(519),
    [anon_sym_COMMA] = ACTIONS(521),
    [anon_sym_COMMA_AT] = ACTIONS(519),
    [anon_sym_POUND_SQUOTE] = ACTIONS(519),
    [anon_sym_POUND_BQUOTE] = ACTIONS(519),
    [anon_sym_POUND_COMMA] = ACTIONS(521),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(519),
    [anon_sym_POUNDreader] = ACTIONS(519),
    [anon_sym_POUNDlang] = ACTIONS(519),
    [anon_sym_POUND_BANG] = ACTIONS(521),
  },
  [64] = {
    [aux_sym__token_token1] = ACTIONS(523),
    [sym_dot] = ACTIONS(525),
    [aux_sym_comment_token1] = ACTIONS(523),
    [anon_sym_POUND_PIPE] = ACTIONS(523),
    [anon_sym_POUND_SEMI] = ACTIONS(523),
    [sym__line_comment] = ACTIONS(523),
    [sym_boolean] = ACTIONS(525),
    [anon_sym_POUND] = ACTIONS(525),
    [anon_sym_POUND_LT_LT] = ACTIONS(523),
    [aux_sym_regex_token1] = ACTIONS(523),
    [anon_sym_DQUOTE] = ACTIONS(523),
    [sym_number] = ACTIONS(525),
    [sym_character] = ACTIONS(523),
    [aux_sym_symbol_token1] = ACTIONS(525),
    [sym_keyword] = ACTIONS(523),
    [anon_sym_POUND_AMP] = ACTIONS(523),
    [anon_sym_LPAREN] = ACTIONS(523),
    [anon_sym_RPAREN] = ACTIONS(523),
    [anon_sym_LBRACK] = ACTIONS(523),
    [anon_sym_RBRACK] = ACTIONS(523),
    [anon_sym_LBRACE] = ACTIONS(523),
    [anon_sym_RBRACE] = ACTIONS(523),
    [anon_sym_POUNDfl] = ACTIONS(523),
    [anon_sym_POUNDfx] = ACTIONS(523),
    [anon_sym_POUNDs] = ACTIONS(523),
    [anon_sym_POUNDhash] = ACTIONS(525),
    [anon_sym_POUNDhasheq] = ACTIONS(525),
    [anon_sym_POUNDhasheqv] = ACTIONS(523),
    [anon_sym_SQUOTE] = ACTIONS(523),
    [anon_sym_BQUOTE] = ACTIONS(523),
    [anon_sym_COMMA] = ACTIONS(525),
    [anon_sym_COMMA_AT] = ACTIONS(523),
    [anon_sym_POUND_SQUOTE] = ACTIONS(523),
    [anon_sym_POUND_BQUOTE] = ACTIONS(523),
    [anon_sym_POUND_COMMA] = ACTIONS(525),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(523),
    [anon_sym_POUNDreader] = ACTIONS(523),
    [anon_sym_POUNDlang] = ACTIONS(523),
    [anon_sym_POUND_BANG] = ACTIONS(525),
  },
  [65] = {
    [aux_sym__token_token1] = ACTIONS(527),
    [sym_dot] = ACTIONS(529),
    [aux_sym_comment_token1] = ACTIONS(527),
    [anon_sym_POUND_PIPE] = ACTIONS(527),
    [anon_sym_POUND_SEMI] = ACTIONS(527),
    [sym__line_comment] = ACTIONS(527),
    [sym_boolean] = ACTIONS(529),
    [anon_sym_POUND] = ACTIONS(529),
    [anon_sym_POUND_LT_LT] = ACTIONS(527),
    [aux_sym_regex_token1] = ACTIONS(527),
    [anon_sym_DQUOTE] = ACTIONS(527),
    [sym_number] = ACTIONS(529),
    [sym_character] = ACTIONS(527),
    [aux_sym_symbol_token1] = ACTIONS(529),
    [sym_keyword] = ACTIONS(527),
    [anon_sym_POUND_AMP] = ACTIONS(527),
    [anon_sym_LPAREN] = ACTIONS(527),
    [anon_sym_RPAREN] = ACTIONS(527),
    [anon_sym_LBRACK] = ACTIONS(527),
    [anon_sym_RBRACK] = ACTIONS(527),
    [anon_sym_LBRACE] = ACTIONS(527),
    [anon_sym_RBRACE] = ACTIONS(527),
    [anon_sym_POUNDfl] = ACTIONS(527),
    [anon_sym_POUNDfx] = ACTIONS(527),
    [anon_sym_POUNDs] = ACTIONS(527),
    [anon_sym_POUNDhash] = ACTIONS(529),
    [anon_sym_POUNDhasheq] = ACTIONS(529),
    [anon_sym_POUNDhasheqv] = ACTIONS(527),
    [anon_sym_SQUOTE] = ACTIONS(527),
    [anon_sym_BQUOTE] = ACTIONS(527),
    [anon_sym_COMMA] = ACTIONS(529),
    [anon_sym_COMMA_AT] = ACTIONS(527),
    [anon_sym_POUND_SQUOTE] = ACTIONS(527),
    [anon_sym_POUND_BQUOTE] = ACTIONS(527),
    [anon_sym_POUND_COMMA] = ACTIONS(529),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(527),
    [anon_sym_POUNDreader] = ACTIONS(527),
    [anon_sym_POUNDlang] = ACTIONS(527),
    [anon_sym_POUND_BANG] = ACTIONS(529),
  },
  [66] = {
    [aux_sym__token_token1] = ACTIONS(531),
    [sym_dot] = ACTIONS(533),
    [aux_sym_comment_token1] = ACTIONS(531),
    [anon_sym_POUND_PIPE] = ACTIONS(531),
    [anon_sym_POUND_SEMI] = ACTIONS(531),
    [sym__line_comment] = ACTIONS(531),
    [sym_boolean] = ACTIONS(533),
    [anon_sym_POUND] = ACTIONS(533),
    [anon_sym_POUND_LT_LT] = ACTIONS(531),
    [aux_sym_regex_token1] = ACTIONS(531),
    [anon_sym_DQUOTE] = ACTIONS(531),
    [sym_number] = ACTIONS(533),
    [sym_character] = ACTIONS(531),
    [aux_sym_symbol_token1] = ACTIONS(533),
    [sym_keyword] = ACTIONS(531),
    [anon_sym_POUND_AMP] = ACTIONS(531),
    [anon_sym_LPAREN] = ACTIONS(531),
    [anon_sym_RPAREN] = ACTIONS(531),
    [anon_sym_LBRACK] = ACTIONS(531),
    [anon_sym_RBRACK] = ACTIONS(531),
    [anon_sym_LBRACE] = ACTIONS(531),
    [anon_sym_RBRACE] = ACTIONS(531),
    [anon_sym_POUNDfl] = ACTIONS(531),
    [anon_sym_POUNDfx] = ACTIONS(531),
    [anon_sym_POUNDs] = ACTIONS(531),
    [anon_sym_POUNDhash] = ACTIONS(533),
    [anon_sym_POUNDhasheq] = ACTIONS(533),
    [anon_sym_POUNDhasheqv] = ACTIONS(531),
    [anon_sym_SQUOTE] = ACTIONS(531),
    [anon_sym_BQUOTE] = ACTIONS(531),
    [anon_sym_COMMA] = ACTIONS(533),
    [anon_sym_COMMA_AT] = ACTIONS(531),
    [anon_sym_POUND_SQUOTE] = ACTIONS(531),
    [anon_sym_POUND_BQUOTE] = ACTIONS(531),
    [anon_sym_POUND_COMMA] = ACTIONS(533),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(531),
    [anon_sym_POUNDreader] = ACTIONS(531),
    [anon_sym_POUNDlang] = ACTIONS(531),
    [anon_sym_POUND_BANG] = ACTIONS(533),
  },
  [67] = {
    [aux_sym__token_token1] = ACTIONS(535),
    [sym_dot] = ACTIONS(537),
    [aux_sym_comment_token1] = ACTIONS(535),
    [anon_sym_POUND_PIPE] = ACTIONS(535),
    [anon_sym_POUND_SEMI] = ACTIONS(535),
    [sym__line_comment] = ACTIONS(535),
    [sym_boolean] = ACTIONS(537),
    [anon_sym_POUND] = ACTIONS(537),
    [anon_sym_POUND_LT_LT] = ACTIONS(535),
    [aux_sym_regex_token1] = ACTIONS(535),
    [anon_sym_DQUOTE] = ACTIONS(535),
    [sym_number] = ACTIONS(537),
    [sym_character] = ACTIONS(535),
    [aux_sym_symbol_token1] = ACTIONS(537),
    [sym_keyword] = ACTIONS(535),
    [anon_sym_POUND_AMP] = ACTIONS(535),
    [anon_sym_LPAREN] = ACTIONS(535),
    [anon_sym_RPAREN] = ACTIONS(535),
    [anon_sym_LBRACK] = ACTIONS(535),
    [anon_sym_RBRACK] = ACTIONS(535),
    [anon_sym_LBRACE] = ACTIONS(535),
    [anon_sym_RBRACE] = ACTIONS(535),
    [anon_sym_POUNDfl] = ACTIONS(535),
    [anon_sym_POUNDfx] = ACTIONS(535),
    [anon_sym_POUNDs] = ACTIONS(535),
    [anon_sym_POUNDhash] = ACTIONS(537),
    [anon_sym_POUNDhasheq] = ACTIONS(537),
    [anon_sym_POUNDhasheqv] = ACTIONS(535),
    [anon_sym_SQUOTE] = ACTIONS(535),
    [anon_sym_BQUOTE] = ACTIONS(535),
    [anon_sym_COMMA] = ACTIONS(537),
    [anon_sym_COMMA_AT] = ACTIONS(535),
    [anon_sym_POUND_SQUOTE] = ACTIONS(535),
    [anon_sym_POUND_BQUOTE] = ACTIONS(535),
    [anon_sym_POUND_COMMA] = ACTIONS(537),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(535),
    [anon_sym_POUNDreader] = ACTIONS(535),
    [anon_sym_POUNDlang] = ACTIONS(535),
    [anon_sym_POUND_BANG] = ACTIONS(537),
  },
  [68] = {
    [aux_sym__token_token1] = ACTIONS(539),
    [sym_dot] = ACTIONS(541),
    [aux_sym_comment_token1] = ACTIONS(539),
    [anon_sym_POUND_PIPE] = ACTIONS(539),
    [anon_sym_POUND_SEMI] = ACTIONS(539),
    [sym__line_comment] = ACTIONS(539),
    [sym_boolean] = ACTIONS(541),
    [anon_sym_POUND] = ACTIONS(541),
    [anon_sym_POUND_LT_LT] = ACTIONS(539),
    [aux_sym_regex_token1] = ACTIONS(539),
    [anon_sym_DQUOTE] = ACTIONS(539),
    [sym_number] = ACTIONS(541),
    [sym_character] = ACTIONS(539),
    [aux_sym_symbol_token1] = ACTIONS(541),
    [sym_keyword] = ACTIONS(539),
    [anon_sym_POUND_AMP] = ACTIONS(539),
    [anon_sym_LPAREN] = ACTIONS(539),
    [anon_sym_RPAREN] = ACTIONS(539),
    [anon_sym_LBRACK] = ACTIONS(539),
    [anon_sym_RBRACK] = ACTIONS(539),
    [anon_sym_LBRACE] = ACTIONS(539),
    [anon_sym_RBRACE] = ACTIONS(539),
    [anon_sym_POUNDfl] = ACTIONS(539),
    [anon_sym_POUNDfx] = ACTIONS(539),
    [anon_sym_POUNDs] = ACTIONS(539),
    [anon_sym_POUNDhash] = ACTIONS(541),
    [anon_sym_POUNDhasheq] = ACTIONS(541),
    [anon_sym_POUNDhasheqv] = ACTIONS(539),
    [anon_sym_SQUOTE] = ACTIONS(539),
    [anon_sym_BQUOTE] = ACTIONS(539),
    [anon_sym_COMMA] = ACTIONS(541),
    [anon_sym_COMMA_AT] = ACTIONS(539),
    [anon_sym_POUND_SQUOTE] = ACTIONS(539),
    [anon_sym_POUND_BQUOTE] = ACTIONS(539),
    [anon_sym_POUND_COMMA] = ACTIONS(541),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(539),
    [anon_sym_POUNDreader] = ACTIONS(539),
    [anon_sym_POUNDlang] = ACTIONS(539),
    [anon_sym_POUND_BANG] = ACTIONS(541),
  },
  [69] = {
    [aux_sym__token_token1] = ACTIONS(543),
    [sym_dot] = ACTIONS(545),
    [aux_sym_comment_token1] = ACTIONS(543),
    [anon_sym_POUND_PIPE] = ACTIONS(543),
    [anon_sym_POUND_SEMI] = ACTIONS(543),
    [sym__line_comment] = ACTIONS(543),
    [sym_boolean] = ACTIONS(545),
    [anon_sym_POUND] = ACTIONS(545),
    [anon_sym_POUND_LT_LT] = ACTIONS(543),
    [aux_sym_regex_token1] = ACTIONS(543),
    [anon_sym_DQUOTE] = ACTIONS(543),
    [sym_number] = ACTIONS(545),
    [sym_character] = ACTIONS(543),
    [aux_sym_symbol_token1] = ACTIONS(545),
    [sym_keyword] = ACTIONS(543),
    [anon_sym_POUND_AMP] = ACTIONS(543),
    [anon_sym_LPAREN] = ACTIONS(543),
    [anon_sym_RPAREN] = ACTIONS(543),
    [anon_sym_LBRACK] = ACTIONS(543),
    [anon_sym_RBRACK] = ACTIONS(543),
    [anon_sym_LBRACE] = ACTIONS(543),
    [anon_sym_RBRACE] = ACTIONS(543),
    [anon_sym_POUNDfl] = ACTIONS(543),
    [anon_sym_POUNDfx] = ACTIONS(543),
    [anon_sym_POUNDs] = ACTIONS(543),
    [anon_sym_POUNDhash] = ACTIONS(545),
    [anon_sym_POUNDhasheq] = ACTIONS(545),
    [anon_sym_POUNDhasheqv] = ACTIONS(543),
    [anon_sym_SQUOTE] = ACTIONS(543),
    [anon_sym_BQUOTE] = ACTIONS(543),
    [anon_sym_COMMA] = ACTIONS(545),
    [anon_sym_COMMA_AT] = ACTIONS(543),
    [anon_sym_POUND_SQUOTE] = ACTIONS(543),
    [anon_sym_POUND_BQUOTE] = ACTIONS(543),
    [anon_sym_POUND_COMMA] = ACTIONS(545),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(543),
    [anon_sym_POUNDreader] = ACTIONS(543),
    [anon_sym_POUNDlang] = ACTIONS(543),
    [anon_sym_POUND_BANG] = ACTIONS(545),
  },
  [70] = {
    [aux_sym__token_token1] = ACTIONS(547),
    [sym_dot] = ACTIONS(549),
    [aux_sym_comment_token1] = ACTIONS(547),
    [anon_sym_POUND_PIPE] = ACTIONS(547),
    [anon_sym_POUND_SEMI] = ACTIONS(547),
    [sym__line_comment] = ACTIONS(547),
    [sym_boolean] = ACTIONS(549),
    [anon_sym_POUND] = ACTIONS(549),
    [anon_sym_POUND_LT_LT] = ACTIONS(547),
    [aux_sym_regex_token1] = ACTIONS(547),
    [anon_sym_DQUOTE] = ACTIONS(547),
    [sym_number] = ACTIONS(549),
    [sym_character] = ACTIONS(547),
    [aux_sym_symbol_token1] = ACTIONS(549),
    [sym_keyword] = ACTIONS(547),
    [anon_sym_POUND_AMP] = ACTIONS(547),
    [anon_sym_LPAREN] = ACTIONS(547),
    [anon_sym_RPAREN] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(547),
    [anon_sym_RBRACK] = ACTIONS(547),
    [anon_sym_LBRACE] = ACTIONS(547),
    [anon_sym_RBRACE] = ACTIONS(547),
    [anon_sym_POUNDfl] = ACTIONS(547),
    [anon_sym_POUNDfx] = ACTIONS(547),
    [anon_sym_POUNDs] = ACTIONS(547),
    [anon_sym_POUNDhash] = ACTIONS(549),
    [anon_sym_POUNDhasheq] = ACTIONS(549),
    [anon_sym_POUNDhasheqv] = ACTIONS(547),
    [anon_sym_SQUOTE] = ACTIONS(547),
    [anon_sym_BQUOTE] = ACTIONS(547),
    [anon_sym_COMMA] = ACTIONS(549),
    [anon_sym_COMMA_AT] = ACTIONS(547),
    [anon_sym_POUND_SQUOTE] = ACTIONS(547),
    [anon_sym_POUND_BQUOTE] = ACTIONS(547),
    [anon_sym_POUND_COMMA] = ACTIONS(549),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(547),
    [anon_sym_POUNDreader] = ACTIONS(547),
    [anon_sym_POUNDlang] = ACTIONS(547),
    [anon_sym_POUND_BANG] = ACTIONS(549),
  },
  [71] = {
    [aux_sym__token_token1] = ACTIONS(551),
    [sym_dot] = ACTIONS(553),
    [aux_sym_comment_token1] = ACTIONS(551),
    [anon_sym_POUND_PIPE] = ACTIONS(551),
    [anon_sym_POUND_SEMI] = ACTIONS(551),
    [sym__line_comment] = ACTIONS(551),
    [sym_boolean] = ACTIONS(553),
    [anon_sym_POUND] = ACTIONS(553),
    [anon_sym_POUND_LT_LT] = ACTIONS(551),
    [aux_sym_regex_token1] = ACTIONS(551),
    [anon_sym_DQUOTE] = ACTIONS(551),
    [sym_number] = ACTIONS(553),
    [sym_character] = ACTIONS(551),
    [aux_sym_symbol_token1] = ACTIONS(553),
    [sym_keyword] = ACTIONS(551),
    [anon_sym_POUND_AMP] = ACTIONS(551),
    [anon_sym_LPAREN] = ACTIONS(551),
    [anon_sym_RPAREN] = ACTIONS(551),
    [anon_sym_LBRACK] = ACTIONS(551),
    [anon_sym_RBRACK] = ACTIONS(551),
    [anon_sym_LBRACE] = ACTIONS(551),
    [anon_sym_RBRACE] = ACTIONS(551),
    [anon_sym_POUNDfl] = ACTIONS(551),
    [anon_sym_POUNDfx] = ACTIONS(551),
    [anon_sym_POUNDs] = ACTIONS(551),
    [anon_sym_POUNDhash] = ACTIONS(553),
    [anon_sym_POUNDhasheq] = ACTIONS(553),
    [anon_sym_POUNDhasheqv] = ACTIONS(551),
    [anon_sym_SQUOTE] = ACTIONS(551),
    [anon_sym_BQUOTE] = ACTIONS(551),
    [anon_sym_COMMA] = ACTIONS(553),
    [anon_sym_COMMA_AT] = ACTIONS(551),
    [anon_sym_POUND_SQUOTE] = ACTIONS(551),
    [anon_sym_POUND_BQUOTE] = ACTIONS(551),
    [anon_sym_POUND_COMMA] = ACTIONS(553),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(551),
    [anon_sym_POUNDreader] = ACTIONS(551),
    [anon_sym_POUNDlang] = ACTIONS(551),
    [anon_sym_POUND_BANG] = ACTIONS(553),
  },
  [72] = {
    [aux_sym__token_token1] = ACTIONS(555),
    [sym_dot] = ACTIONS(557),
    [aux_sym_comment_token1] = ACTIONS(555),
    [anon_sym_POUND_PIPE] = ACTIONS(555),
    [anon_sym_POUND_SEMI] = ACTIONS(555),
    [sym__line_comment] = ACTIONS(555),
    [sym_boolean] = ACTIONS(557),
    [anon_sym_POUND] = ACTIONS(557),
    [anon_sym_POUND_LT_LT] = ACTIONS(555),
    [aux_sym_regex_token1] = ACTIONS(555),
    [anon_sym_DQUOTE] = ACTIONS(555),
    [sym_number] = ACTIONS(557),
    [sym_character] = ACTIONS(555),
    [aux_sym_symbol_token1] = ACTIONS(557),
    [sym_keyword] = ACTIONS(555),
    [anon_sym_POUND_AMP] = ACTIONS(555),
    [anon_sym_LPAREN] = ACTIONS(555),
    [anon_sym_RPAREN] = ACTIONS(555),
    [anon_sym_LBRACK] = ACTIONS(555),
    [anon_sym_RBRACK] = ACTIONS(555),
    [anon_sym_LBRACE] = ACTIONS(555),
    [anon_sym_RBRACE] = ACTIONS(555),
    [anon_sym_POUNDfl] = ACTIONS(555),
    [anon_sym_POUNDfx] = ACTIONS(555),
    [anon_sym_POUNDs] = ACTIONS(555),
    [anon_sym_POUNDhash] = ACTIONS(557),
    [anon_sym_POUNDhasheq] = ACTIONS(557),
    [anon_sym_POUNDhasheqv] = ACTIONS(555),
    [anon_sym_SQUOTE] = ACTIONS(555),
    [anon_sym_BQUOTE] = ACTIONS(555),
    [anon_sym_COMMA] = ACTIONS(557),
    [anon_sym_COMMA_AT] = ACTIONS(555),
    [anon_sym_POUND_SQUOTE] = ACTIONS(555),
    [anon_sym_POUND_BQUOTE] = ACTIONS(555),
    [anon_sym_POUND_COMMA] = ACTIONS(557),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(555),
    [anon_sym_POUNDreader] = ACTIONS(555),
    [anon_sym_POUNDlang] = ACTIONS(555),
    [anon_sym_POUND_BANG] = ACTIONS(557),
  },
  [73] = {
    [aux_sym__token_token1] = ACTIONS(559),
    [sym_dot] = ACTIONS(561),
    [aux_sym_comment_token1] = ACTIONS(559),
    [anon_sym_POUND_PIPE] = ACTIONS(559),
    [anon_sym_POUND_SEMI] = ACTIONS(559),
    [sym__line_comment] = ACTIONS(559),
    [sym_boolean] = ACTIONS(561),
    [anon_sym_POUND] = ACTIONS(561),
    [anon_sym_POUND_LT_LT] = ACTIONS(559),
    [aux_sym_regex_token1] = ACTIONS(559),
    [anon_sym_DQUOTE] = ACTIONS(559),
    [sym_number] = ACTIONS(561),
    [sym_character] = ACTIONS(559),
    [aux_sym_symbol_token1] = ACTIONS(561),
    [sym_keyword] = ACTIONS(559),
    [anon_sym_POUND_AMP] = ACTIONS(559),
    [anon_sym_LPAREN] = ACTIONS(559),
    [anon_sym_RPAREN] = ACTIONS(559),
    [anon_sym_LBRACK] = ACTIONS(559),
    [anon_sym_RBRACK] = ACTIONS(559),
    [anon_sym_LBRACE] = ACTIONS(559),
    [anon_sym_RBRACE] = ACTIONS(559),
    [anon_sym_POUNDfl] = ACTIONS(559),
    [anon_sym_POUNDfx] = ACTIONS(559),
    [anon_sym_POUNDs] = ACTIONS(559),
    [anon_sym_POUNDhash] = ACTIONS(561),
    [anon_sym_POUNDhasheq] = ACTIONS(561),
    [anon_sym_POUNDhasheqv] = ACTIONS(559),
    [anon_sym_SQUOTE] = ACTIONS(559),
    [anon_sym_BQUOTE] = ACTIONS(559),
    [anon_sym_COMMA] = ACTIONS(561),
    [anon_sym_COMMA_AT] = ACTIONS(559),
    [anon_sym_POUND_SQUOTE] = ACTIONS(559),
    [anon_sym_POUND_BQUOTE] = ACTIONS(559),
    [anon_sym_POUND_COMMA] = ACTIONS(561),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(559),
    [anon_sym_POUNDreader] = ACTIONS(559),
    [anon_sym_POUNDlang] = ACTIONS(559),
    [anon_sym_POUND_BANG] = ACTIONS(561),
  },
  [74] = {
    [aux_sym__token_token1] = ACTIONS(563),
    [sym_dot] = ACTIONS(565),
    [aux_sym_comment_token1] = ACTIONS(563),
    [anon_sym_POUND_PIPE] = ACTIONS(563),
    [anon_sym_POUND_SEMI] = ACTIONS(563),
    [sym__line_comment] = ACTIONS(563),
    [sym_boolean] = ACTIONS(565),
    [anon_sym_POUND] = ACTIONS(565),
    [anon_sym_POUND_LT_LT] = ACTIONS(563),
    [aux_sym_regex_token1] = ACTIONS(563),
    [anon_sym_DQUOTE] = ACTIONS(563),
    [sym_number] = ACTIONS(565),
    [sym_character] = ACTIONS(563),
    [aux_sym_symbol_token1] = ACTIONS(565),
    [sym_keyword] = ACTIONS(563),
    [anon_sym_POUND_AMP] = ACTIONS(563),
    [anon_sym_LPAREN] = ACTIONS(563),
    [anon_sym_RPAREN] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(563),
    [anon_sym_RBRACK] = ACTIONS(563),
    [anon_sym_LBRACE] = ACTIONS(563),
    [anon_sym_RBRACE] = ACTIONS(563),
    [anon_sym_POUNDfl] = ACTIONS(563),
    [anon_sym_POUNDfx] = ACTIONS(563),
    [anon_sym_POUNDs] = ACTIONS(563),
    [anon_sym_POUNDhash] = ACTIONS(565),
    [anon_sym_POUNDhasheq] = ACTIONS(565),
    [anon_sym_POUNDhasheqv] = ACTIONS(563),
    [anon_sym_SQUOTE] = ACTIONS(563),
    [anon_sym_BQUOTE] = ACTIONS(563),
    [anon_sym_COMMA] = ACTIONS(565),
    [anon_sym_COMMA_AT] = ACTIONS(563),
    [anon_sym_POUND_SQUOTE] = ACTIONS(563),
    [anon_sym_POUND_BQUOTE] = ACTIONS(563),
    [anon_sym_POUND_COMMA] = ACTIONS(565),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(563),
    [anon_sym_POUNDreader] = ACTIONS(563),
    [anon_sym_POUNDlang] = ACTIONS(563),
    [anon_sym_POUND_BANG] = ACTIONS(565),
  },
  [75] = {
    [aux_sym__token_token1] = ACTIONS(567),
    [sym_dot] = ACTIONS(569),
    [aux_sym_comment_token1] = ACTIONS(567),
    [anon_sym_POUND_PIPE] = ACTIONS(567),
    [anon_sym_POUND_SEMI] = ACTIONS(567),
    [sym__line_comment] = ACTIONS(567),
    [sym_boolean] = ACTIONS(569),
    [anon_sym_POUND] = ACTIONS(569),
    [anon_sym_POUND_LT_LT] = ACTIONS(567),
    [aux_sym_regex_token1] = ACTIONS(567),
    [anon_sym_DQUOTE] = ACTIONS(567),
    [sym_number] = ACTIONS(569),
    [sym_character] = ACTIONS(567),
    [aux_sym_symbol_token1] = ACTIONS(569),
    [sym_keyword] = ACTIONS(567),
    [anon_sym_POUND_AMP] = ACTIONS(567),
    [anon_sym_LPAREN] = ACTIONS(567),
    [anon_sym_RPAREN] = ACTIONS(567),
    [anon_sym_LBRACK] = ACTIONS(567),
    [anon_sym_RBRACK] = ACTIONS(567),
    [anon_sym_LBRACE] = ACTIONS(567),
    [anon_sym_RBRACE] = ACTIONS(567),
    [anon_sym_POUNDfl] = ACTIONS(567),
    [anon_sym_POUNDfx] = ACTIONS(567),
    [anon_sym_POUNDs] = ACTIONS(567),
    [anon_sym_POUNDhash] = ACTIONS(569),
    [anon_sym_POUNDhasheq] = ACTIONS(569),
    [anon_sym_POUNDhasheqv] = ACTIONS(567),
    [anon_sym_SQUOTE] = ACTIONS(567),
    [anon_sym_BQUOTE] = ACTIONS(567),
    [anon_sym_COMMA] = ACTIONS(569),
    [anon_sym_COMMA_AT] = ACTIONS(567),
    [anon_sym_POUND_SQUOTE] = ACTIONS(567),
    [anon_sym_POUND_BQUOTE] = ACTIONS(567),
    [anon_sym_POUND_COMMA] = ACTIONS(569),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(567),
    [anon_sym_POUNDreader] = ACTIONS(567),
    [anon_sym_POUNDlang] = ACTIONS(567),
    [anon_sym_POUND_BANG] = ACTIONS(569),
  },
  [76] = {
    [aux_sym__token_token1] = ACTIONS(571),
    [sym_dot] = ACTIONS(573),
    [aux_sym_comment_token1] = ACTIONS(571),
    [anon_sym_POUND_PIPE] = ACTIONS(571),
    [anon_sym_POUND_SEMI] = ACTIONS(571),
    [sym__line_comment] = ACTIONS(571),
    [sym_boolean] = ACTIONS(573),
    [anon_sym_POUND] = ACTIONS(573),
    [anon_sym_POUND_LT_LT] = ACTIONS(571),
    [aux_sym_regex_token1] = ACTIONS(571),
    [anon_sym_DQUOTE] = ACTIONS(571),
    [sym_number] = ACTIONS(573),
    [sym_character] = ACTIONS(571),
    [aux_sym_symbol_token1] = ACTIONS(573),
    [sym_keyword] = ACTIONS(571),
    [anon_sym_POUND_AMP] = ACTIONS(571),
    [anon_sym_LPAREN] = ACTIONS(571),
    [anon_sym_RPAREN] = ACTIONS(571),
    [anon_sym_LBRACK] = ACTIONS(571),
    [anon_sym_RBRACK] = ACTIONS(571),
    [anon_sym_LBRACE] = ACTIONS(571),
    [anon_sym_RBRACE] = ACTIONS(571),
    [anon_sym_POUNDfl] = ACTIONS(571),
    [anon_sym_POUNDfx] = ACTIONS(571),
    [anon_sym_POUNDs] = ACTIONS(571),
    [anon_sym_POUNDhash] = ACTIONS(573),
    [anon_sym_POUNDhasheq] = ACTIONS(573),
    [anon_sym_POUNDhasheqv] = ACTIONS(571),
    [anon_sym_SQUOTE] = ACTIONS(571),
    [anon_sym_BQUOTE] = ACTIONS(571),
    [anon_sym_COMMA] = ACTIONS(573),
    [anon_sym_COMMA_AT] = ACTIONS(571),
    [anon_sym_POUND_SQUOTE] = ACTIONS(571),
    [anon_sym_POUND_BQUOTE] = ACTIONS(571),
    [anon_sym_POUND_COMMA] = ACTIONS(573),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(571),
    [anon_sym_POUNDreader] = ACTIONS(571),
    [anon_sym_POUNDlang] = ACTIONS(571),
    [anon_sym_POUND_BANG] = ACTIONS(573),
  },
  [77] = {
    [aux_sym__token_token1] = ACTIONS(575),
    [sym_dot] = ACTIONS(577),
    [aux_sym_comment_token1] = ACTIONS(575),
    [anon_sym_POUND_PIPE] = ACTIONS(575),
    [anon_sym_POUND_SEMI] = ACTIONS(575),
    [sym__line_comment] = ACTIONS(575),
    [sym_boolean] = ACTIONS(577),
    [anon_sym_POUND] = ACTIONS(577),
    [anon_sym_POUND_LT_LT] = ACTIONS(575),
    [aux_sym_regex_token1] = ACTIONS(575),
    [anon_sym_DQUOTE] = ACTIONS(575),
    [sym_number] = ACTIONS(577),
    [sym_character] = ACTIONS(575),
    [aux_sym_symbol_token1] = ACTIONS(577),
    [sym_keyword] = ACTIONS(575),
    [anon_sym_POUND_AMP] = ACTIONS(575),
    [anon_sym_LPAREN] = ACTIONS(575),
    [anon_sym_RPAREN] = ACTIONS(575),
    [anon_sym_LBRACK] = ACTIONS(575),
    [anon_sym_RBRACK] = ACTIONS(575),
    [anon_sym_LBRACE] = ACTIONS(575),
    [anon_sym_RBRACE] = ACTIONS(575),
    [anon_sym_POUNDfl] = ACTIONS(575),
    [anon_sym_POUNDfx] = ACTIONS(575),
    [anon_sym_POUNDs] = ACTIONS(575),
    [anon_sym_POUNDhash] = ACTIONS(577),
    [anon_sym_POUNDhasheq] = ACTIONS(577),
    [anon_sym_POUNDhasheqv] = ACTIONS(575),
    [anon_sym_SQUOTE] = ACTIONS(575),
    [anon_sym_BQUOTE] = ACTIONS(575),
    [anon_sym_COMMA] = ACTIONS(577),
    [anon_sym_COMMA_AT] = ACTIONS(575),
    [anon_sym_POUND_SQUOTE] = ACTIONS(575),
    [anon_sym_POUND_BQUOTE] = ACTIONS(575),
    [anon_sym_POUND_COMMA] = ACTIONS(577),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(575),
    [anon_sym_POUNDreader] = ACTIONS(575),
    [anon_sym_POUNDlang] = ACTIONS(575),
    [anon_sym_POUND_BANG] = ACTIONS(577),
  },
  [78] = {
    [sym__skip] = STATE(78),
    [sym__all_comment] = STATE(78),
    [sym_comment] = STATE(78),
    [sym_block_comment] = STATE(78),
    [sym_sexp_comment] = STATE(78),
    [aux_sym_sexp_comment_repeat1] = STATE(78),
    [aux_sym__token_token1] = ACTIONS(579),
    [aux_sym_comment_token1] = ACTIONS(582),
    [anon_sym_POUND_PIPE] = ACTIONS(585),
    [anon_sym_POUND_SEMI] = ACTIONS(588),
    [sym__line_comment] = ACTIONS(582),
    [sym_boolean] = ACTIONS(591),
    [anon_sym_POUND] = ACTIONS(591),
    [anon_sym_POUND_LT_LT] = ACTIONS(593),
    [aux_sym_regex_token1] = ACTIONS(593),
    [anon_sym_DQUOTE] = ACTIONS(593),
    [sym_number] = ACTIONS(591),
    [sym_character] = ACTIONS(593),
    [aux_sym_symbol_token1] = ACTIONS(591),
    [sym_keyword] = ACTIONS(593),
    [anon_sym_POUND_AMP] = ACTIONS(593),
    [anon_sym_LPAREN] = ACTIONS(593),
    [anon_sym_LBRACK] = ACTIONS(593),
    [anon_sym_LBRACE] = ACTIONS(593),
    [anon_sym_POUNDfl] = ACTIONS(593),
    [anon_sym_POUNDfx] = ACTIONS(593),
    [anon_sym_POUNDs] = ACTIONS(593),
    [anon_sym_POUNDhash] = ACTIONS(591),
    [anon_sym_POUNDhasheq] = ACTIONS(591),
    [anon_sym_POUNDhasheqv] = ACTIONS(593),
    [anon_sym_SQUOTE] = ACTIONS(593),
    [anon_sym_BQUOTE] = ACTIONS(593),
    [anon_sym_COMMA] = ACTIONS(591),
    [anon_sym_COMMA_AT] = ACTIONS(593),
    [anon_sym_POUND_SQUOTE] = ACTIONS(593),
    [anon_sym_POUND_BQUOTE] = ACTIONS(593),
    [anon_sym_POUND_COMMA] = ACTIONS(591),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(593),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(529), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(527), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [41] = 2,
    ACTIONS(577), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(575), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [82] = 2,
    ACTIONS(505), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(503), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [123] = 2,
    ACTIONS(509), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(507), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [164] = 2,
    ACTIONS(521), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(519), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [205] = 2,
    ACTIONS(533), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(531), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [246] = 2,
    ACTIONS(549), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(547), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [287] = 2,
    ACTIONS(569), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(567), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [328] = 2,
    ACTIONS(481), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(479), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [369] = 2,
    ACTIONS(553), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(551), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [410] = 2,
    ACTIONS(565), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(563), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [451] = 2,
    ACTIONS(473), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(471), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [492] = 2,
    ACTIONS(525), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(523), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [533] = 2,
    ACTIONS(501), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(499), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [574] = 2,
    ACTIONS(485), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(483), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [615] = 2,
    ACTIONS(489), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(487), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [656] = 2,
    ACTIONS(497), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(495), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [697] = 2,
    ACTIONS(561), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(559), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [738] = 2,
    ACTIONS(541), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(539), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [779] = 2,
    ACTIONS(493), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(491), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [820] = 2,
    ACTIONS(557), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(555), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [861] = 2,
    ACTIONS(477), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(475), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [902] = 2,
    ACTIONS(517), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(515), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [943] = 2,
    ACTIONS(545), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(543), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [984] = 2,
    ACTIONS(573), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(571), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1025] = 2,
    ACTIONS(513), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(511), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1066] = 2,
    ACTIONS(537), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(535), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1107] = 2,
    ACTIONS(473), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(471), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
  [1144] = 2,
    ACTIONS(525), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(523), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
  [1181] = 2,
    ACTIONS(553), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(551), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
  [1218] = 2,
    ACTIONS(549), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(547), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
  [1255] = 2,
    ACTIONS(569), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(567), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
  [1292] = 2,
    ACTIONS(533), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(531), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
  [1329] = 2,
    ACTIONS(565), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(563), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
  [1366] = 2,
    ACTIONS(541), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(539), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
  [1403] = 2,
    ACTIONS(573), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(571), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
  [1440] = 2,
    ACTIONS(577), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(575), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
  [1477] = 2,
    ACTIONS(537), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(535), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
  [1514] = 2,
    ACTIONS(545), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(543), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
  [1551] = 2,
    ACTIONS(513), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(511), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
  [1588] = 2,
    ACTIONS(517), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(515), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
  [1625] = 2,
    ACTIONS(477), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(475), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
  [1662] = 2,
    ACTIONS(529), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(527), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
  [1699] = 2,
    ACTIONS(493), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(491), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
  [1736] = 2,
    ACTIONS(497), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(495), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
  [1773] = 2,
    ACTIONS(481), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(479), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
  [1810] = 2,
    ACTIONS(489), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(487), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
  [1847] = 2,
    ACTIONS(485), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(483), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
  [1884] = 2,
    ACTIONS(561), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(559), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
  [1921] = 2,
    ACTIONS(521), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(519), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
  [1958] = 2,
    ACTIONS(501), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(499), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
  [1995] = 2,
    ACTIONS(509), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(507), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
  [2032] = 7,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    ACTIONS(595), 1,
      sym_decimal,
    STATE(68), 1,
      sym_list,
    STATE(74), 1,
      sym__real_string,
  [2054] = 7,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(597), 1,
      sym_decimal,
    STATE(89), 1,
      sym__real_string,
    STATE(97), 1,
      sym_list,
  [2076] = 7,
    ACTIONS(323), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(333), 1,
      anon_sym_LBRACK,
    ACTIONS(335), 1,
      anon_sym_LBRACE,
    ACTIONS(599), 1,
      sym_decimal,
    STATE(112), 1,
      sym__real_string,
    STATE(113), 1,
      sym_list,
  [2098] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(601), 1,
      anon_sym_POUND,
    ACTIONS(603), 1,
      anon_sym_EQ,
    STATE(94), 1,
      sym_list,
  [2117] = 6,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(333), 1,
      anon_sym_LBRACK,
    ACTIONS(335), 1,
      anon_sym_LBRACE,
    ACTIONS(605), 1,
      anon_sym_POUND,
    ACTIONS(607), 1,
      anon_sym_EQ,
    STATE(125), 1,
      sym_list,
  [2136] = 6,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    ACTIONS(609), 1,
      anon_sym_POUND,
    ACTIONS(611), 1,
      anon_sym_EQ,
    STATE(55), 1,
      sym_list,
  [2155] = 4,
    ACTIONS(613), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(615), 1,
      aux_sym_block_comment_token1,
    ACTIONS(617), 1,
      anon_sym_PIPE_POUND,
    STATE(141), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2169] = 4,
    ACTIONS(619), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(622), 1,
      aux_sym_block_comment_token1,
    ACTIONS(625), 1,
      anon_sym_PIPE_POUND,
    STATE(138), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2183] = 5,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(333), 1,
      anon_sym_LBRACK,
    ACTIONS(335), 1,
      anon_sym_LBRACE,
    ACTIONS(627), 1,
      sym_decimal,
    STATE(113), 1,
      sym_list,
  [2199] = 4,
    ACTIONS(613), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(629), 1,
      aux_sym_block_comment_token1,
    ACTIONS(631), 1,
      anon_sym_PIPE_POUND,
    STATE(146), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2213] = 4,
    ACTIONS(613), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(633), 1,
      aux_sym_block_comment_token1,
    ACTIONS(635), 1,
      anon_sym_PIPE_POUND,
    STATE(138), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2227] = 4,
    ACTIONS(613), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(637), 1,
      aux_sym_block_comment_token1,
    ACTIONS(639), 1,
      anon_sym_PIPE_POUND,
    STATE(144), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2241] = 4,
    ACTIONS(613), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(633), 1,
      aux_sym_block_comment_token1,
    ACTIONS(641), 1,
      anon_sym_PIPE_POUND,
    STATE(138), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2255] = 4,
    ACTIONS(613), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(633), 1,
      aux_sym_block_comment_token1,
    ACTIONS(643), 1,
      anon_sym_PIPE_POUND,
    STATE(138), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2269] = 5,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    ACTIONS(645), 1,
      sym_decimal,
    STATE(68), 1,
      sym_list,
  [2285] = 4,
    ACTIONS(613), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(633), 1,
      aux_sym_block_comment_token1,
    ACTIONS(647), 1,
      anon_sym_PIPE_POUND,
    STATE(138), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2299] = 4,
    ACTIONS(613), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(649), 1,
      aux_sym_block_comment_token1,
    ACTIONS(651), 1,
      anon_sym_PIPE_POUND,
    STATE(143), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2313] = 5,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(653), 1,
      sym_decimal,
    STATE(97), 1,
      sym_list,
  [2329] = 3,
    ACTIONS(655), 1,
      anon_sym_DQUOTE,
    STATE(159), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(657), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2340] = 4,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(333), 1,
      anon_sym_LBRACK,
    ACTIONS(335), 1,
      anon_sym_LBRACE,
    STATE(120), 1,
      sym_list,
  [2353] = 3,
    ACTIONS(659), 1,
      anon_sym_DQUOTE,
    STATE(156), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(661), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2364] = 4,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    STATE(100), 1,
      sym_list,
  [2377] = 4,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
      sym_list,
  [2390] = 4,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_list,
  [2403] = 4,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_list,
  [2416] = 3,
    ACTIONS(663), 1,
      anon_sym_DQUOTE,
    STATE(156), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(665), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2427] = 4,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(333), 1,
      anon_sym_LBRACK,
    ACTIONS(335), 1,
      anon_sym_LBRACE,
    STATE(125), 1,
      sym_list,
  [2440] = 3,
    ACTIONS(668), 1,
      anon_sym_DQUOTE,
    STATE(156), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(661), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2451] = 3,
    ACTIONS(670), 1,
      anon_sym_DQUOTE,
    STATE(156), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(661), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2462] = 3,
    ACTIONS(672), 1,
      anon_sym_DQUOTE,
    STATE(158), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(674), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2473] = 4,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    STATE(94), 1,
      sym_list,
  [2486] = 3,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    STATE(151), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(678), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2497] = 4,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    STATE(62), 1,
      sym_list,
  [2510] = 4,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(333), 1,
      anon_sym_LBRACK,
    ACTIONS(335), 1,
      anon_sym_LBRACE,
    STATE(119), 1,
      sym_list,
  [2523] = 2,
    ACTIONS(493), 1,
      aux_sym_block_comment_token1,
    ACTIONS(491), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [2531] = 2,
    ACTIONS(569), 1,
      aux_sym_block_comment_token1,
    ACTIONS(567), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [2539] = 2,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      sym__real_string,
  [2546] = 2,
    ACTIONS(323), 1,
      anon_sym_DQUOTE,
    STATE(115), 1,
      sym__real_string,
  [2553] = 2,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym__real_string,
  [2560] = 1,
    ACTIONS(451), 1,
      sym_lang_name,
  [2564] = 1,
    ACTIONS(680), 1,
      sym__here_string_body,
  [2568] = 1,
    ACTIONS(682), 1,
      sym__here_string_body,
  [2572] = 1,
    ACTIONS(684), 1,
      sym__here_string_body,
  [2576] = 1,
    ACTIONS(686), 1,
      ts_builtin_sym_end,
  [2580] = 1,
    ACTIONS(383), 1,
      sym_lang_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(79)] = 0,
  [SMALL_STATE(80)] = 41,
  [SMALL_STATE(81)] = 82,
  [SMALL_STATE(82)] = 123,
  [SMALL_STATE(83)] = 164,
  [SMALL_STATE(84)] = 205,
  [SMALL_STATE(85)] = 246,
  [SMALL_STATE(86)] = 287,
  [SMALL_STATE(87)] = 328,
  [SMALL_STATE(88)] = 369,
  [SMALL_STATE(89)] = 410,
  [SMALL_STATE(90)] = 451,
  [SMALL_STATE(91)] = 492,
  [SMALL_STATE(92)] = 533,
  [SMALL_STATE(93)] = 574,
  [SMALL_STATE(94)] = 615,
  [SMALL_STATE(95)] = 656,
  [SMALL_STATE(96)] = 697,
  [SMALL_STATE(97)] = 738,
  [SMALL_STATE(98)] = 779,
  [SMALL_STATE(99)] = 820,
  [SMALL_STATE(100)] = 861,
  [SMALL_STATE(101)] = 902,
  [SMALL_STATE(102)] = 943,
  [SMALL_STATE(103)] = 984,
  [SMALL_STATE(104)] = 1025,
  [SMALL_STATE(105)] = 1066,
  [SMALL_STATE(106)] = 1107,
  [SMALL_STATE(107)] = 1144,
  [SMALL_STATE(108)] = 1181,
  [SMALL_STATE(109)] = 1218,
  [SMALL_STATE(110)] = 1255,
  [SMALL_STATE(111)] = 1292,
  [SMALL_STATE(112)] = 1329,
  [SMALL_STATE(113)] = 1366,
  [SMALL_STATE(114)] = 1403,
  [SMALL_STATE(115)] = 1440,
  [SMALL_STATE(116)] = 1477,
  [SMALL_STATE(117)] = 1514,
  [SMALL_STATE(118)] = 1551,
  [SMALL_STATE(119)] = 1588,
  [SMALL_STATE(120)] = 1625,
  [SMALL_STATE(121)] = 1662,
  [SMALL_STATE(122)] = 1699,
  [SMALL_STATE(123)] = 1736,
  [SMALL_STATE(124)] = 1773,
  [SMALL_STATE(125)] = 1810,
  [SMALL_STATE(126)] = 1847,
  [SMALL_STATE(127)] = 1884,
  [SMALL_STATE(128)] = 1921,
  [SMALL_STATE(129)] = 1958,
  [SMALL_STATE(130)] = 1995,
  [SMALL_STATE(131)] = 2032,
  [SMALL_STATE(132)] = 2054,
  [SMALL_STATE(133)] = 2076,
  [SMALL_STATE(134)] = 2098,
  [SMALL_STATE(135)] = 2117,
  [SMALL_STATE(136)] = 2136,
  [SMALL_STATE(137)] = 2155,
  [SMALL_STATE(138)] = 2169,
  [SMALL_STATE(139)] = 2183,
  [SMALL_STATE(140)] = 2199,
  [SMALL_STATE(141)] = 2213,
  [SMALL_STATE(142)] = 2227,
  [SMALL_STATE(143)] = 2241,
  [SMALL_STATE(144)] = 2255,
  [SMALL_STATE(145)] = 2269,
  [SMALL_STATE(146)] = 2285,
  [SMALL_STATE(147)] = 2299,
  [SMALL_STATE(148)] = 2313,
  [SMALL_STATE(149)] = 2329,
  [SMALL_STATE(150)] = 2340,
  [SMALL_STATE(151)] = 2353,
  [SMALL_STATE(152)] = 2364,
  [SMALL_STATE(153)] = 2377,
  [SMALL_STATE(154)] = 2390,
  [SMALL_STATE(155)] = 2403,
  [SMALL_STATE(156)] = 2416,
  [SMALL_STATE(157)] = 2427,
  [SMALL_STATE(158)] = 2440,
  [SMALL_STATE(159)] = 2451,
  [SMALL_STATE(160)] = 2462,
  [SMALL_STATE(161)] = 2473,
  [SMALL_STATE(162)] = 2486,
  [SMALL_STATE(163)] = 2497,
  [SMALL_STATE(164)] = 2510,
  [SMALL_STATE(165)] = 2523,
  [SMALL_STATE(166)] = 2531,
  [SMALL_STATE(167)] = 2539,
  [SMALL_STATE(168)] = 2546,
  [SMALL_STATE(169)] = 2553,
  [SMALL_STATE(170)] = 2560,
  [SMALL_STATE(171)] = 2564,
  [SMALL_STATE(172)] = 2568,
  [SMALL_STATE(173)] = 2572,
  [SMALL_STATE(174)] = 2576,
  [SMALL_STATE(175)] = 2580,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(53),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(142),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(43),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(131),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(172),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(169),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(149),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(66),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(39),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(20),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(19),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(18),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(145),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(163),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(155),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(155),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(38),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(38),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(34),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(175),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(175),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(87),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(137),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(48),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(132),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(171),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(167),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(162),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(84),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(25),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(148),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(153),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(152),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(152),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(45),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(45),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(47),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(170),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(170),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 2),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 2),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 3),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 3),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 3),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 3),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 4),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 4),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 2),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 5),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 5),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 3),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 3),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 2),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 2),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 2),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 2),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexp_comment, 2),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexp_comment, 2),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 2),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexp_comment, 3),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexp_comment, 3),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string, 2),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_string, 2),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_here_string, 2),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_here_string, 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2), SHIFT_REPEAT(78),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2), SHIFT_REPEAT(124),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2), SHIFT_REPEAT(147),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2), SHIFT_REPEAT(50),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sexp_comment_repeat1, 2),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(140),
  [622] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(138),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(156),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [686] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_racket_external_scanner_create(void);
void tree_sitter_racket_external_scanner_destroy(void *);
bool tree_sitter_racket_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_racket_external_scanner_serialize(void *, char *);
void tree_sitter_racket_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_racket(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_racket_external_scanner_create,
      tree_sitter_racket_external_scanner_destroy,
      tree_sitter_racket_external_scanner_scan,
      tree_sitter_racket_external_scanner_serialize,
      tree_sitter_racket_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
