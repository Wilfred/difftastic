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
#define STATE_COUNT 193
#define LARGE_STATE_COUNT 80
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 0
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym__token_token1 = 1,
  sym_dot = 2,
  aux_sym_comment_token1 = 3,
  anon_sym_POUND_SEMI = 4,
  aux_sym_comment_token2 = 5,
  anon_sym_POUND_BANG = 6,
  anon_sym_POUND_BANG_SLASH = 7,
  aux_sym_comment_token3 = 8,
  anon_sym_BSLASH = 9,
  aux_sym_comment_token4 = 10,
  anon_sym_POUND_PIPE = 11,
  aux_sym__block_comment_token1 = 12,
  anon_sym_PIPE_POUND = 13,
  sym_boolean = 14,
  anon_sym_POUND = 15,
  anon_sym_POUND_LT_LT = 16,
  aux_sym_regex_token1 = 17,
  anon_sym_DQUOTE = 18,
  aux_sym__real_string_token1 = 19,
  sym_escape_sequence = 20,
  sym_number = 21,
  sym_character = 22,
  aux_sym_symbol_token1 = 23,
  sym_keyword = 24,
  anon_sym_POUND_AMP = 25,
  anon_sym_LPAREN = 26,
  anon_sym_RPAREN = 27,
  anon_sym_LBRACK = 28,
  anon_sym_RBRACK = 29,
  anon_sym_LBRACE = 30,
  anon_sym_RBRACE = 31,
  anon_sym_POUNDfl = 32,
  anon_sym_POUNDfx = 33,
  aux_sym_vector_token1 = 34,
  anon_sym_POUNDs = 35,
  anon_sym_POUNDhash = 36,
  anon_sym_POUNDhasheq = 37,
  anon_sym_POUNDhasheqv = 38,
  anon_sym_EQ = 39,
  anon_sym_SQUOTE = 40,
  anon_sym_BQUOTE = 41,
  anon_sym_COMMA = 42,
  anon_sym_COMMA_AT = 43,
  anon_sym_POUND_SQUOTE = 44,
  anon_sym_POUND_BQUOTE = 45,
  anon_sym_POUND_COMMA = 46,
  anon_sym_POUND_COMMA_AT = 47,
  anon_sym_POUNDreader = 48,
  anon_sym_POUNDlang = 49,
  anon_sym_POUND_BANG2 = 50,
  aux_sym_extension_token1 = 51,
  sym__here_string_body = 52,
  sym_program = 53,
  sym__token = 54,
  sym__skip = 55,
  sym_comment = 56,
  sym__block_comment = 57,
  sym__datum = 58,
  sym_string = 59,
  sym_byte_string = 60,
  sym_here_string = 61,
  sym_regex = 62,
  sym__real_string = 63,
  sym_symbol = 64,
  sym_box = 65,
  sym_list = 66,
  sym_vector = 67,
  sym_structure = 68,
  sym_hash = 69,
  sym_graph = 70,
  sym_quote = 71,
  sym_extension = 72,
  aux_sym_program_repeat1 = 73,
  aux_sym_comment_repeat1 = 74,
  aux_sym_comment_repeat2 = 75,
  aux_sym__block_comment_repeat1 = 76,
  aux_sym__real_string_repeat1 = 77,
  aux_sym_list_repeat1 = 78,
  aux_sym_vector_repeat1 = 79,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__token_token1] = "_token_token1",
  [sym_dot] = "dot",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_POUND_SEMI] = "#;",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_POUND_BANG] = "#! ",
  [anon_sym_POUND_BANG_SLASH] = "#!/",
  [aux_sym_comment_token3] = "comment_token3",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_comment_token4] = "comment_token4",
  [anon_sym_POUND_PIPE] = "#|",
  [aux_sym__block_comment_token1] = "_block_comment_token1",
  [anon_sym_PIPE_POUND] = "|#",
  [sym_boolean] = "boolean",
  [anon_sym_POUND] = "#",
  [anon_sym_POUND_LT_LT] = "#<<",
  [aux_sym_regex_token1] = "regex_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__real_string_token1] = "_real_string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
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
  [aux_sym_vector_token1] = "vector_token1",
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
  [anon_sym_POUND_BANG2] = "#!",
  [aux_sym_extension_token1] = "extension_token1",
  [sym__here_string_body] = "_here_string_body",
  [sym_program] = "program",
  [sym__token] = "_token",
  [sym__skip] = "_skip",
  [sym_comment] = "comment",
  [sym__block_comment] = "_block_comment",
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
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_comment_repeat2] = "comment_repeat2",
  [aux_sym__block_comment_repeat1] = "_block_comment_repeat1",
  [aux_sym__real_string_repeat1] = "_real_string_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_vector_repeat1] = "vector_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__token_token1] = aux_sym__token_token1,
  [sym_dot] = sym_dot,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_POUND_SEMI] = anon_sym_POUND_SEMI,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_POUND_BANG] = anon_sym_POUND_BANG,
  [anon_sym_POUND_BANG_SLASH] = anon_sym_POUND_BANG_SLASH,
  [aux_sym_comment_token3] = aux_sym_comment_token3,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_comment_token4] = aux_sym_comment_token4,
  [anon_sym_POUND_PIPE] = anon_sym_POUND_PIPE,
  [aux_sym__block_comment_token1] = aux_sym__block_comment_token1,
  [anon_sym_PIPE_POUND] = anon_sym_PIPE_POUND,
  [sym_boolean] = sym_boolean,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_POUND_LT_LT] = anon_sym_POUND_LT_LT,
  [aux_sym_regex_token1] = aux_sym_regex_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__real_string_token1] = aux_sym__real_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
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
  [aux_sym_vector_token1] = aux_sym_vector_token1,
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
  [anon_sym_POUND_BANG2] = anon_sym_POUND_BANG2,
  [aux_sym_extension_token1] = aux_sym_extension_token1,
  [sym__here_string_body] = sym__here_string_body,
  [sym_program] = sym_program,
  [sym__token] = sym__token,
  [sym__skip] = sym__skip,
  [sym_comment] = sym_comment,
  [sym__block_comment] = sym__block_comment,
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
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym_comment_repeat2] = aux_sym_comment_repeat2,
  [aux_sym__block_comment_repeat1] = aux_sym__block_comment_repeat1,
  [aux_sym__real_string_repeat1] = aux_sym__real_string_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_vector_repeat1] = aux_sym_vector_repeat1,
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
  [anon_sym_POUND_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_BANG_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__block_comment_token1] = {
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
  [aux_sym_vector_token1] = {
    .visible = false,
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
  [anon_sym_POUND_BANG2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_extension_token1] = {
    .visible = false,
    .named = false,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__block_comment] = {
    .visible = false,
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
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__block_comment_repeat1] = {
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
  [aux_sym_vector_repeat1] = {
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
      if (eof) ADVANCE(208);
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '\'') ADVANCE(413);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == ')') ADVANCE(400);
      if (lookahead == ',') ADVANCE(415);
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == ';') ADVANCE(212);
      if (lookahead == '=') ADVANCE(412);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '\\') ADVANCE(218);
      if (lookahead == ']') ADVANCE(402);
      if (lookahead == '`') ADVANCE(414);
      if (lookahead == '{') ADVANCE(403);
      if (lookahead == '|') ADVANCE(6);
      if (lookahead == '}') ADVANCE(404);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(209);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(215);
      if (lookahead == '/') ADVANCE(216);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(422);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '\'') ADVANCE(413);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == ')') ADVANCE(400);
      if (lookahead == ',') ADVANCE(415);
      if (lookahead == '.') ADVANCE(211);
      if (lookahead == ';') ADVANCE(212);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '\\') ADVANCE(219);
      if (lookahead == ']') ADVANCE(402);
      if (lookahead == '`') ADVANCE(414);
      if (lookahead == '{') ADVANCE(403);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '}') ADVANCE(404);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      if (aux_sym__token_token1_character_set_1(lookahead)) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != 65279) ADVANCE(393);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '\'') ADVANCE(413);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == ',') ADVANCE(415);
      if (lookahead == '.') ADVANCE(385);
      if (lookahead == ';') ADVANCE(212);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '\\') ADVANCE(219);
      if (lookahead == '`') ADVANCE(414);
      if (lookahead == '{') ADVANCE(403);
      if (lookahead == '|') ADVANCE(108);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      if (aux_sym__token_token1_character_set_1(lookahead)) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ']' &&
          lookahead != '}' &&
          lookahead != 65279) ADVANCE(393);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(225);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(273);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == '=') ADVANCE(412);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '{') ADVANCE(403);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(164);
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(15);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(17);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(285);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(20);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(124);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(124);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(22);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(124);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(124);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(166);
      if (lookahead == '.') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(297);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(199);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(123);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(123);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(199);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(123);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(123);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(273);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(297);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(169);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(285);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(184);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(143);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(152);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(128);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(277);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(154);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(170);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(153);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(289);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(149);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(281);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(149);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(281);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(310);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(149);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(310);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(168);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(179);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(293);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(179);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(149);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(293);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(15);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(312);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(20);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(171);
      END_STATE();
    case 56:
      if (lookahead == '.') ADVANCE(172);
      END_STATE();
    case 57:
      if (lookahead == '.') ADVANCE(173);
      END_STATE();
    case 58:
      if (lookahead == '<') ADVANCE(233);
      END_STATE();
    case 59:
      if (lookahead == 'U') ADVANCE(355);
      if (lookahead == 'b') ADVANCE(338);
      if (lookahead == 'l') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(341);
      if (lookahead == 'p') ADVANCE(339);
      if (lookahead == 'r') ADVANCE(342);
      if (lookahead == 's') ADVANCE(345);
      if (lookahead == 't') ADVANCE(340);
      if (lookahead == 'u') ADVANCE(351);
      if (lookahead == 'v') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(337);
      END_STATE();
    case 60:
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '|') ADVANCE(107);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(397);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'b') ADVANCE(337);
      END_STATE();
    case 67:
      if (lookahead == 'b') ADVANCE(92);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(337);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 'x') ADVANCE(235);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 79:
      if (lookahead == 'f') ADVANCE(78);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(2);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(73);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(409);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 84:
      if (lookahead == 'k') ADVANCE(99);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(344);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(337);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 94:
      if (lookahead == 'q') ADVANCE(410);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 97:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 98:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 102:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 103:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 104:
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 105:
      if (lookahead == 'w') ADVANCE(86);
      END_STATE();
    case 106:
      if (lookahead == 'x') ADVANCE(235);
      END_STATE();
    case 107:
      if (lookahead == '|') ADVANCE(397);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 108:
      if (lookahead == '|') ADVANCE(393);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 109:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 110:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(157);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(321);
      END_STATE();
    case 111:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(330);
      END_STATE();
    case 112:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(327);
      END_STATE();
    case 113:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 114:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(158);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(320);
      END_STATE();
    case 115:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(329);
      END_STATE();
    case 116:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(326);
      END_STATE();
    case 117:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 118:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(161);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(333);
      END_STATE();
    case 119:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(336);
      END_STATE();
    case 120:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(334);
      END_STATE();
    case 121:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 122:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(162);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(139);
      END_STATE();
    case 123:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 124:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(140);
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
          lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 131:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(32);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(31);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(35);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(33);
      END_STATE();
    case 132:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(34);
      END_STATE();
    case 133:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 134:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(47);
      END_STATE();
    case 135:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 136:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(56);
      END_STATE();
    case 137:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(57);
      END_STATE();
    case 138:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 139:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(139);
      END_STATE();
    case 140:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(140);
      END_STATE();
    case 141:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 142:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 143:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 144:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 145:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 146:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 147:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 148:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 149:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 150:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 151:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(57);
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
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 155:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(275);
      END_STATE();
    case 156:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(279);
      END_STATE();
    case 157:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(321);
      END_STATE();
    case 158:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(320);
      END_STATE();
    case 159:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(283);
      END_STATE();
    case 160:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(17);
      END_STATE();
    case 161:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(333);
      END_STATE();
    case 162:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(139);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(32);
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
          lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 167:
      if (lookahead == 'I' ||
          lookahead == 'S' ||
          lookahead == 'i' ||
          lookahead == 's') ADVANCE(214);
      END_STATE();
    case 168:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(248);
      END_STATE();
    case 169:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(322);
      END_STATE();
    case 170:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(138);
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
          lookahead == 't') ADVANCE(325);
      END_STATE();
    case 173:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(328);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(337);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(287);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(291);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(327);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(326);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(295);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(22);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(334);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(140);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 191:
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(238);
      if (lookahead == 'U') ADVANCE(200);
      if (lookahead == 'u') ADVANCE(202);
      if (lookahead == 'x') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(240);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(300);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(306);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(330);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(329);
      END_STATE();
    case 196:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(314);
      END_STATE();
    case 197:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(336);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    case 202:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 203:
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 204:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '|') ADVANCE(222);
      if (lookahead == '#') ADVANCE(224);
      if (lookahead == '|') ADVANCE(223);
      END_STATE();
    case 205:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(397);
      END_STATE();
    case 206:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(393);
      END_STATE();
    case 207:
      if (eof) ADVANCE(208);
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '\'') ADVANCE(413);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == ',') ADVANCE(415);
      if (lookahead == '.') ADVANCE(385);
      if (lookahead == ';') ADVANCE(212);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '\\') ADVANCE(219);
      if (lookahead == '`') ADVANCE(414);
      if (lookahead == '{') ADVANCE(403);
      if (lookahead == '|') ADVANCE(108);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      if (aux_sym__token_token1_character_set_1(lookahead)) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ']' &&
          lookahead != '}' &&
          lookahead != 65279) ADVANCE(393);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__token_token1);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_dot);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_POUND_BANG_SLASH);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(393);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_comment_token4);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == '#') ADVANCE(225);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == '|') ADVANCE(221);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'l') ADVANCE(405);
      if (lookahead == 'x') ADVANCE(406);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(423);
      if (lookahead == '%') ADVANCE(393);
      if (lookahead == '&') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(417);
      if (lookahead == ',') ADVANCE(419);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == ';') ADVANCE(213);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(7);
      if (lookahead == 'F' ||
          lookahead == 'T') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '`') ADVANCE(418);
      if (lookahead == 'f') ADVANCE(227);
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(408);
      if (lookahead == 't') ADVANCE(228);
      if (lookahead == '|') ADVANCE(221);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(8);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(167);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(14);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(19);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(24);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(423);
      if (lookahead == '&') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(417);
      if (lookahead == ',') ADVANCE(419);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == ';') ADVANCE(213);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == 'F' ||
          lookahead == 'T') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '`') ADVANCE(418);
      if (lookahead == 'f') ADVANCE(227);
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(408);
      if (lookahead == 't') ADVANCE(228);
      if (lookahead == '|') ADVANCE(221);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(167);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '%') ADVANCE(393);
      if (lookahead == '&') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(417);
      if (lookahead == ',') ADVANCE(419);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == ';') ADVANCE(213);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(7);
      if (lookahead == 'F' ||
          lookahead == 'T') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '`') ADVANCE(418);
      if (lookahead == 'f') ADVANCE(227);
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead == 'p') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == 's') ADVANCE(408);
      if (lookahead == 't') ADVANCE(228);
      if (lookahead == '|') ADVANCE(221);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(8);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(167);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(14);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(19);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(24);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_POUND_LT_LT);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '#') ADVANCE(234);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__real_string_token1);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(238);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(239);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '.') ADVANCE(251);
      if (lookahead == '/') ADVANCE(385);
      if (lookahead == '@') ADVANCE(363);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(367);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '.') ADVANCE(252);
      if (lookahead == '/') ADVANCE(385);
      if (lookahead == '@') ADVANCE(363);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(366);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(367);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(252);
      if (lookahead == '@') ADVANCE(363);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(367);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(252);
      if (lookahead == '@') ADVANCE(363);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(366);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(367);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '.') ADVANCE(257);
      if (lookahead == '/') ADVANCE(386);
      if (lookahead == '@') ADVANCE(363);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(366);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(368);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '.') ADVANCE(258);
      if (lookahead == '/') ADVANCE(386);
      if (lookahead == '@') ADVANCE(363);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(366);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(332);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(368);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '.') ADVANCE(261);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '@') ADVANCE(363);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(366);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(368);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '@') ADVANCE(363);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(366);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(332);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(368);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '.') ADVANCE(265);
      if (lookahead == '/') ADVANCE(389);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(369);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '.') ADVANCE(266);
      if (lookahead == '/') ADVANCE(389);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(369);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(266);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(369);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(266);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(369);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '/') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '/') ADVANCE(187);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(272);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '.') ADVANCE(275);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(273);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(275);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(277);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(279);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(282);
      if (lookahead == '.') ADVANCE(283);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(281);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(282);
      if (lookahead == '.') ADVANCE(284);
      if (lookahead == '/') ADVANCE(159);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(283);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(284);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(285);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(287);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(290);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(289);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(290);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(292);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(291);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(292);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '/') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(293);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == '/') ADVANCE(179);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(295);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(296);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(299);
      if (lookahead == '.') ADVANCE(300);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
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
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
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
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(300);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(305);
      if (lookahead == '.') ADVANCE(306);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(305);
      if (lookahead == '.') ADVANCE(306);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(303);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(305);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(306);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(311);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(198);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(119);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(311);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(119);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(311);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == '/') ADVANCE(196);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(119);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(123);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(315);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(198);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(119);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(314);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(315);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(119);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(315);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(119);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(363);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(366);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(363);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(366);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(332);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(363);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(337);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(174);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(337);
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
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(350);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(351);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(352);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(354);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(357);
      if (lookahead == '.') ADVANCE(358);
      if (lookahead == '/') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(370);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(357);
      if (lookahead == '.') ADVANCE(359);
      if (lookahead == '/') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(332);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(370);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(370);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(332);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(370);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(395);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(389);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(389);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(384);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(394);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(380);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(381);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(382);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(360);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(362);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(365);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(332);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(374);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(360);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(362);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(365);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(375);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(376);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(317);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(378);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '|') ADVANCE(107);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_POUND_AMP);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_POUNDfl);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_POUNDfx);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_vector_token1);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_POUNDs);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_POUNDhash);
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_POUNDhasheq);
      if (lookahead == 'v') ADVANCE(411);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_POUNDhasheqv);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(416);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_POUND_BQUOTE);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA);
      if (lookahead == '@') ADVANCE(420);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA_AT);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_POUNDreader);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_POUNDlang);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_POUND_BANG2);
      if (lookahead == ' ') ADVANCE(215);
      if (lookahead == '/') ADVANCE(216);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_extension_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 207},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 207},
  [22] = {.lex_state = 207},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 207},
  [81] = {.lex_state = 207},
  [82] = {.lex_state = 207},
  [83] = {.lex_state = 207},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 207},
  [86] = {.lex_state = 207},
  [87] = {.lex_state = 207},
  [88] = {.lex_state = 207},
  [89] = {.lex_state = 207},
  [90] = {.lex_state = 207},
  [91] = {.lex_state = 207},
  [92] = {.lex_state = 207},
  [93] = {.lex_state = 207},
  [94] = {.lex_state = 207},
  [95] = {.lex_state = 207},
  [96] = {.lex_state = 207},
  [97] = {.lex_state = 207},
  [98] = {.lex_state = 207},
  [99] = {.lex_state = 207},
  [100] = {.lex_state = 207},
  [101] = {.lex_state = 207},
  [102] = {.lex_state = 207},
  [103] = {.lex_state = 207},
  [104] = {.lex_state = 207},
  [105] = {.lex_state = 207},
  [106] = {.lex_state = 207},
  [107] = {.lex_state = 207},
  [108] = {.lex_state = 207},
  [109] = {.lex_state = 207},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 13},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 13},
  [142] = {.lex_state = 13},
  [143] = {.lex_state = 13},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 204},
  [151] = {.lex_state = 204},
  [152] = {.lex_state = 204},
  [153] = {.lex_state = 204},
  [154] = {.lex_state = 204},
  [155] = {.lex_state = 204},
  [156] = {.lex_state = 204},
  [157] = {.lex_state = 204},
  [158] = {.lex_state = 204},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 204},
  [173] = {.lex_state = 204},
  [174] = {.lex_state = 217},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 217},
  [178] = {.lex_state = 217},
  [179] = {.lex_state = 217},
  [180] = {.lex_state = 217},
  [181] = {.lex_state = 217},
  [182] = {.lex_state = 217},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 217},
  [185] = {.lex_state = 0, .external_lex_state = 1},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 13},
  [188] = {.lex_state = 0, .external_lex_state = 1},
  [189] = {.lex_state = 0, .external_lex_state = 1},
  [190] = {.lex_state = 203},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 203},
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
    [anon_sym_POUND_SEMI] = ACTIONS(1),
    [aux_sym_comment_token2] = ACTIONS(1),
    [anon_sym_POUND_BANG] = ACTIONS(1),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym_comment_token4] = ACTIONS(1),
    [anon_sym_POUND_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_POUND] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_POUND_LT_LT] = ACTIONS(1),
    [aux_sym_regex_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_character] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [anon_sym_POUND_AMP] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_POUNDfl] = ACTIONS(1),
    [anon_sym_POUNDfx] = ACTIONS(1),
    [aux_sym_vector_token1] = ACTIONS(1),
    [anon_sym_POUNDs] = ACTIONS(1),
    [anon_sym_POUNDhash] = ACTIONS(1),
    [anon_sym_POUNDhasheq] = ACTIONS(1),
    [anon_sym_POUNDhasheqv] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COMMA_AT] = ACTIONS(1),
    [anon_sym_POUND_SQUOTE] = ACTIONS(1),
    [anon_sym_POUND_BQUOTE] = ACTIONS(1),
    [anon_sym_POUND_COMMA] = ACTIONS(1),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(1),
    [anon_sym_POUNDreader] = ACTIONS(1),
    [anon_sym_POUNDlang] = ACTIONS(1),
    [anon_sym_POUND_BANG2] = ACTIONS(1),
    [sym__here_string_body] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(191),
    [sym__token] = STATE(21),
    [sym_comment] = STATE(21),
    [sym__block_comment] = STATE(104),
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
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__token_token1] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [aux_sym_comment_token2] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_POUND_LT_LT] = ACTIONS(19),
    [aux_sym_regex_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_number] = ACTIONS(15),
    [sym_character] = ACTIONS(5),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(5),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_COMMA] = ACTIONS(45),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(43),
    [anon_sym_POUNDreader] = ACTIONS(47),
    [anon_sym_POUNDlang] = ACTIONS(49),
    [anon_sym_POUND_BANG2] = ACTIONS(51),
  },
  [2] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(61),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(73),
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
    [aux_sym__token_token1] = ACTIONS(53),
    [sym_dot] = ACTIONS(56),
    [aux_sym_comment_token1] = ACTIONS(59),
    [anon_sym_POUND_SEMI] = ACTIONS(62),
    [aux_sym_comment_token2] = ACTIONS(59),
    [anon_sym_POUND_BANG] = ACTIONS(65),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(65),
    [anon_sym_POUND_PIPE] = ACTIONS(68),
    [sym_boolean] = ACTIONS(56),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_POUND_LT_LT] = ACTIONS(74),
    [aux_sym_regex_token1] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(80),
    [sym_number] = ACTIONS(56),
    [sym_character] = ACTIONS(53),
    [aux_sym_symbol_token1] = ACTIONS(83),
    [sym_keyword] = ACTIONS(53),
    [anon_sym_POUND_AMP] = ACTIONS(86),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_LBRACK] = ACTIONS(94),
    [anon_sym_RBRACK] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(92),
    [anon_sym_POUNDfl] = ACTIONS(100),
    [anon_sym_POUNDfx] = ACTIONS(100),
    [anon_sym_POUNDs] = ACTIONS(103),
    [anon_sym_POUNDhash] = ACTIONS(106),
    [anon_sym_POUNDhasheq] = ACTIONS(106),
    [anon_sym_POUNDhasheqv] = ACTIONS(109),
    [anon_sym_SQUOTE] = ACTIONS(112),
    [anon_sym_BQUOTE] = ACTIONS(112),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_COMMA_AT] = ACTIONS(112),
    [anon_sym_POUND_SQUOTE] = ACTIONS(112),
    [anon_sym_POUND_BQUOTE] = ACTIONS(112),
    [anon_sym_POUND_COMMA] = ACTIONS(115),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(112),
    [anon_sym_POUNDreader] = ACTIONS(118),
    [anon_sym_POUNDlang] = ACTIONS(121),
    [anon_sym_POUND_BANG2] = ACTIONS(124),
  },
  [3] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(61),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(73),
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
    [aux_sym__token_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(129),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [4] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(61),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(73),
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
    [aux_sym__token_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(129),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [5] = {
    [sym__token] = STATE(16),
    [sym_comment] = STATE(16),
    [sym__block_comment] = STATE(61),
    [sym__datum] = STATE(16),
    [sym_string] = STATE(16),
    [sym_byte_string] = STATE(16),
    [sym_here_string] = STATE(16),
    [sym_regex] = STATE(16),
    [sym__real_string] = STATE(73),
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
    [aux_sym__token_token1] = ACTIONS(179),
    [sym_dot] = ACTIONS(181),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(181),
    [sym_character] = ACTIONS(179),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(179),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_RBRACE] = ACTIONS(183),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [6] = {
    [sym__token] = STATE(20),
    [sym_comment] = STATE(20),
    [sym__block_comment] = STATE(61),
    [sym__datum] = STATE(20),
    [sym_string] = STATE(20),
    [sym_byte_string] = STATE(20),
    [sym_here_string] = STATE(20),
    [sym_regex] = STATE(20),
    [sym__real_string] = STATE(73),
    [sym_symbol] = STATE(20),
    [sym_box] = STATE(20),
    [sym_list] = STATE(20),
    [sym_vector] = STATE(20),
    [sym_structure] = STATE(20),
    [sym_hash] = STATE(20),
    [sym_graph] = STATE(20),
    [sym_quote] = STATE(20),
    [sym_extension] = STATE(20),
    [aux_sym_list_repeat1] = STATE(20),
    [aux_sym__token_token1] = ACTIONS(185),
    [sym_dot] = ACTIONS(187),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(187),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(187),
    [sym_character] = ACTIONS(185),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(185),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_RBRACK] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [7] = {
    [sym__token] = STATE(4),
    [sym_comment] = STATE(4),
    [sym__block_comment] = STATE(61),
    [sym__datum] = STATE(4),
    [sym_string] = STATE(4),
    [sym_byte_string] = STATE(4),
    [sym_here_string] = STATE(4),
    [sym_regex] = STATE(4),
    [sym__real_string] = STATE(73),
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
    [aux_sym__token_token1] = ACTIONS(189),
    [sym_dot] = ACTIONS(191),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(191),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(191),
    [sym_character] = ACTIONS(189),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(189),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [8] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(61),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(73),
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
    [aux_sym__token_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(129),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [9] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(61),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(73),
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
    [aux_sym__token_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(129),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_RBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [10] = {
    [sym__token] = STATE(8),
    [sym_comment] = STATE(8),
    [sym__block_comment] = STATE(61),
    [sym__datum] = STATE(8),
    [sym_string] = STATE(8),
    [sym_byte_string] = STATE(8),
    [sym_here_string] = STATE(8),
    [sym_regex] = STATE(8),
    [sym__real_string] = STATE(73),
    [sym_symbol] = STATE(8),
    [sym_box] = STATE(8),
    [sym_list] = STATE(8),
    [sym_vector] = STATE(8),
    [sym_structure] = STATE(8),
    [sym_hash] = STATE(8),
    [sym_graph] = STATE(8),
    [sym_quote] = STATE(8),
    [sym_extension] = STATE(8),
    [aux_sym_list_repeat1] = STATE(8),
    [aux_sym__token_token1] = ACTIONS(193),
    [sym_dot] = ACTIONS(195),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(195),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(195),
    [sym_character] = ACTIONS(193),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(193),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_RBRACE] = ACTIONS(197),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [11] = {
    [sym__token] = STATE(17),
    [sym_comment] = STATE(17),
    [sym__block_comment] = STATE(61),
    [sym__datum] = STATE(17),
    [sym_string] = STATE(17),
    [sym_byte_string] = STATE(17),
    [sym_here_string] = STATE(17),
    [sym_regex] = STATE(17),
    [sym__real_string] = STATE(73),
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
    [aux_sym__token_token1] = ACTIONS(199),
    [sym_dot] = ACTIONS(201),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(201),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(201),
    [sym_character] = ACTIONS(199),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(199),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [12] = {
    [sym__token] = STATE(18),
    [sym_comment] = STATE(18),
    [sym__block_comment] = STATE(61),
    [sym__datum] = STATE(18),
    [sym_string] = STATE(18),
    [sym_byte_string] = STATE(18),
    [sym_here_string] = STATE(18),
    [sym_regex] = STATE(18),
    [sym__real_string] = STATE(73),
    [sym_symbol] = STATE(18),
    [sym_box] = STATE(18),
    [sym_list] = STATE(18),
    [sym_vector] = STATE(18),
    [sym_structure] = STATE(18),
    [sym_hash] = STATE(18),
    [sym_graph] = STATE(18),
    [sym_quote] = STATE(18),
    [sym_extension] = STATE(18),
    [aux_sym_list_repeat1] = STATE(18),
    [aux_sym__token_token1] = ACTIONS(205),
    [sym_dot] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(207),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(207),
    [sym_character] = ACTIONS(205),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(205),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_RBRACK] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [13] = {
    [sym__token] = STATE(19),
    [sym_comment] = STATE(19),
    [sym__block_comment] = STATE(61),
    [sym__datum] = STATE(19),
    [sym_string] = STATE(19),
    [sym_byte_string] = STATE(19),
    [sym_here_string] = STATE(19),
    [sym_regex] = STATE(19),
    [sym__real_string] = STATE(73),
    [sym_symbol] = STATE(19),
    [sym_box] = STATE(19),
    [sym_list] = STATE(19),
    [sym_vector] = STATE(19),
    [sym_structure] = STATE(19),
    [sym_hash] = STATE(19),
    [sym_graph] = STATE(19),
    [sym_quote] = STATE(19),
    [sym_extension] = STATE(19),
    [aux_sym_list_repeat1] = STATE(19),
    [aux_sym__token_token1] = ACTIONS(209),
    [sym_dot] = ACTIONS(211),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(211),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(211),
    [sym_character] = ACTIONS(209),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(209),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_RBRACE] = ACTIONS(203),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [14] = {
    [sym__token] = STATE(9),
    [sym_comment] = STATE(9),
    [sym__block_comment] = STATE(61),
    [sym__datum] = STATE(9),
    [sym_string] = STATE(9),
    [sym_byte_string] = STATE(9),
    [sym_here_string] = STATE(9),
    [sym_regex] = STATE(9),
    [sym__real_string] = STATE(73),
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
    [aux_sym__token_token1] = ACTIONS(213),
    [sym_dot] = ACTIONS(215),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(215),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(215),
    [sym_character] = ACTIONS(213),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(213),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_RBRACK] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [15] = {
    [sym__token] = STATE(3),
    [sym_comment] = STATE(3),
    [sym__block_comment] = STATE(61),
    [sym__datum] = STATE(3),
    [sym_string] = STATE(3),
    [sym_byte_string] = STATE(3),
    [sym_here_string] = STATE(3),
    [sym_regex] = STATE(3),
    [sym__real_string] = STATE(73),
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
    [aux_sym__token_token1] = ACTIONS(217),
    [sym_dot] = ACTIONS(219),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(219),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(219),
    [sym_character] = ACTIONS(217),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(217),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [16] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(61),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(73),
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
    [aux_sym__token_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(129),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [17] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(61),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(73),
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
    [aux_sym__token_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(129),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [18] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(61),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(73),
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
    [aux_sym__token_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(129),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_RBRACK] = ACTIONS(221),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [19] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(61),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(73),
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
    [aux_sym__token_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(129),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_RBRACE] = ACTIONS(221),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [20] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(61),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(73),
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
    [aux_sym__token_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(129),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_RBRACK] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [21] = {
    [sym__token] = STATE(22),
    [sym_comment] = STATE(22),
    [sym__block_comment] = STATE(104),
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
    [ts_builtin_sym_end] = ACTIONS(223),
    [aux_sym__token_token1] = ACTIONS(225),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [aux_sym_comment_token2] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(227),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_POUND_LT_LT] = ACTIONS(19),
    [aux_sym_regex_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_number] = ACTIONS(227),
    [sym_character] = ACTIONS(225),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(225),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_COMMA] = ACTIONS(45),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(43),
    [anon_sym_POUNDreader] = ACTIONS(47),
    [anon_sym_POUNDlang] = ACTIONS(49),
    [anon_sym_POUND_BANG2] = ACTIONS(51),
  },
  [22] = {
    [sym__token] = STATE(22),
    [sym_comment] = STATE(22),
    [sym__block_comment] = STATE(104),
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
    [ts_builtin_sym_end] = ACTIONS(229),
    [aux_sym__token_token1] = ACTIONS(231),
    [aux_sym_comment_token1] = ACTIONS(234),
    [anon_sym_POUND_SEMI] = ACTIONS(237),
    [aux_sym_comment_token2] = ACTIONS(234),
    [anon_sym_POUND_BANG] = ACTIONS(240),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(240),
    [anon_sym_POUND_PIPE] = ACTIONS(243),
    [sym_boolean] = ACTIONS(246),
    [anon_sym_POUND] = ACTIONS(249),
    [anon_sym_POUND_LT_LT] = ACTIONS(252),
    [aux_sym_regex_token1] = ACTIONS(255),
    [anon_sym_DQUOTE] = ACTIONS(258),
    [sym_number] = ACTIONS(246),
    [sym_character] = ACTIONS(231),
    [aux_sym_symbol_token1] = ACTIONS(261),
    [sym_keyword] = ACTIONS(231),
    [anon_sym_POUND_AMP] = ACTIONS(264),
    [anon_sym_LPAREN] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(270),
    [anon_sym_LBRACE] = ACTIONS(273),
    [anon_sym_POUNDfl] = ACTIONS(276),
    [anon_sym_POUNDfx] = ACTIONS(276),
    [anon_sym_POUNDs] = ACTIONS(279),
    [anon_sym_POUNDhash] = ACTIONS(282),
    [anon_sym_POUNDhasheq] = ACTIONS(282),
    [anon_sym_POUNDhasheqv] = ACTIONS(285),
    [anon_sym_SQUOTE] = ACTIONS(288),
    [anon_sym_BQUOTE] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(291),
    [anon_sym_COMMA_AT] = ACTIONS(288),
    [anon_sym_POUND_SQUOTE] = ACTIONS(288),
    [anon_sym_POUND_BQUOTE] = ACTIONS(288),
    [anon_sym_POUND_COMMA] = ACTIONS(291),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(288),
    [anon_sym_POUNDreader] = ACTIONS(294),
    [anon_sym_POUNDlang] = ACTIONS(297),
    [anon_sym_POUND_BANG2] = ACTIONS(300),
  },
  [23] = {
    [sym__skip] = STATE(84),
    [sym_comment] = STATE(84),
    [sym__block_comment] = STATE(136),
    [sym__datum] = STATE(58),
    [sym_string] = STATE(58),
    [sym_byte_string] = STATE(58),
    [sym_here_string] = STATE(58),
    [sym_regex] = STATE(58),
    [sym__real_string] = STATE(73),
    [sym_symbol] = STATE(58),
    [sym_box] = STATE(58),
    [sym_list] = STATE(58),
    [sym_vector] = STATE(58),
    [sym_structure] = STATE(58),
    [sym_hash] = STATE(58),
    [sym_graph] = STATE(58),
    [sym_quote] = STATE(58),
    [aux_sym_comment_repeat1] = STATE(84),
    [aux_sym__token_token1] = ACTIONS(303),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(313),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(313),
    [sym_character] = ACTIONS(315),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(315),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
  },
  [24] = {
    [sym__skip] = STATE(84),
    [sym_comment] = STATE(84),
    [sym__block_comment] = STATE(136),
    [sym__datum] = STATE(79),
    [sym_string] = STATE(79),
    [sym_byte_string] = STATE(79),
    [sym_here_string] = STATE(79),
    [sym_regex] = STATE(79),
    [sym__real_string] = STATE(73),
    [sym_symbol] = STATE(79),
    [sym_box] = STATE(79),
    [sym_list] = STATE(79),
    [sym_vector] = STATE(79),
    [sym_structure] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_graph] = STATE(79),
    [sym_quote] = STATE(79),
    [aux_sym_comment_repeat1] = STATE(84),
    [aux_sym__token_token1] = ACTIONS(303),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(317),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(317),
    [sym_character] = ACTIONS(319),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(319),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
  },
  [25] = {
    [sym__skip] = STATE(50),
    [sym_comment] = STATE(50),
    [sym__block_comment] = STATE(136),
    [sym__datum] = STATE(106),
    [sym_string] = STATE(106),
    [sym_byte_string] = STATE(106),
    [sym_here_string] = STATE(106),
    [sym_regex] = STATE(106),
    [sym__real_string] = STATE(85),
    [sym_symbol] = STATE(106),
    [sym_box] = STATE(106),
    [sym_list] = STATE(106),
    [sym_vector] = STATE(106),
    [sym_structure] = STATE(106),
    [sym_hash] = STATE(106),
    [sym_graph] = STATE(106),
    [sym_quote] = STATE(106),
    [aux_sym_comment_repeat1] = STATE(50),
    [aux_sym__token_token1] = ACTIONS(321),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(323),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_POUND_LT_LT] = ACTIONS(19),
    [aux_sym_regex_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_number] = ACTIONS(323),
    [sym_character] = ACTIONS(325),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(325),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_COMMA] = ACTIONS(45),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(43),
  },
  [26] = {
    [sym__skip] = STATE(30),
    [sym_comment] = STATE(30),
    [sym__block_comment] = STATE(136),
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
    [aux_sym_comment_repeat1] = STATE(30),
    [aux_sym__token_token1] = ACTIONS(327),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(329),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_POUND_LT_LT] = ACTIONS(19),
    [aux_sym_regex_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_number] = ACTIONS(329),
    [sym_character] = ACTIONS(331),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(331),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_COMMA] = ACTIONS(45),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(43),
  },
  [27] = {
    [sym__skip] = STATE(41),
    [sym_comment] = STATE(41),
    [sym__block_comment] = STATE(136),
    [sym__datum] = STATE(54),
    [sym_string] = STATE(54),
    [sym_byte_string] = STATE(54),
    [sym_here_string] = STATE(54),
    [sym_regex] = STATE(54),
    [sym__real_string] = STATE(73),
    [sym_symbol] = STATE(54),
    [sym_box] = STATE(54),
    [sym_list] = STATE(54),
    [sym_vector] = STATE(54),
    [sym_structure] = STATE(54),
    [sym_hash] = STATE(54),
    [sym_graph] = STATE(54),
    [sym_quote] = STATE(54),
    [aux_sym_comment_repeat1] = STATE(41),
    [aux_sym__token_token1] = ACTIONS(333),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(335),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(335),
    [sym_character] = ACTIONS(337),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(337),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
  },
  [28] = {
    [sym__skip] = STATE(43),
    [sym_comment] = STATE(43),
    [sym__block_comment] = STATE(136),
    [sym__datum] = STATE(108),
    [sym_string] = STATE(108),
    [sym_byte_string] = STATE(108),
    [sym_here_string] = STATE(108),
    [sym_regex] = STATE(108),
    [sym__real_string] = STATE(85),
    [sym_symbol] = STATE(108),
    [sym_box] = STATE(108),
    [sym_list] = STATE(108),
    [sym_vector] = STATE(108),
    [sym_structure] = STATE(108),
    [sym_hash] = STATE(108),
    [sym_graph] = STATE(108),
    [sym_quote] = STATE(108),
    [aux_sym_comment_repeat1] = STATE(43),
    [aux_sym__token_token1] = ACTIONS(339),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(341),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_POUND_LT_LT] = ACTIONS(19),
    [aux_sym_regex_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_number] = ACTIONS(341),
    [sym_character] = ACTIONS(343),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(343),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_COMMA] = ACTIONS(45),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(43),
  },
  [29] = {
    [sym__skip] = STATE(31),
    [sym_comment] = STATE(31),
    [sym__block_comment] = STATE(136),
    [sym__datum] = STATE(133),
    [sym_string] = STATE(133),
    [sym_byte_string] = STATE(133),
    [sym_here_string] = STATE(133),
    [sym_regex] = STATE(133),
    [sym__real_string] = STATE(119),
    [sym_symbol] = STATE(133),
    [sym_box] = STATE(133),
    [sym_list] = STATE(133),
    [sym_vector] = STATE(133),
    [sym_structure] = STATE(133),
    [sym_hash] = STATE(133),
    [sym_graph] = STATE(133),
    [sym_quote] = STATE(133),
    [aux_sym_comment_repeat1] = STATE(31),
    [aux_sym__token_token1] = ACTIONS(345),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(347),
    [anon_sym_POUND] = ACTIONS(349),
    [anon_sym_POUND_LT_LT] = ACTIONS(351),
    [aux_sym_regex_token1] = ACTIONS(353),
    [anon_sym_DQUOTE] = ACTIONS(355),
    [sym_number] = ACTIONS(347),
    [sym_character] = ACTIONS(357),
    [aux_sym_symbol_token1] = ACTIONS(359),
    [sym_keyword] = ACTIONS(357),
    [anon_sym_POUND_AMP] = ACTIONS(361),
    [anon_sym_LPAREN] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_LBRACE] = ACTIONS(367),
    [anon_sym_POUNDfl] = ACTIONS(369),
    [anon_sym_POUNDfx] = ACTIONS(369),
    [anon_sym_POUNDs] = ACTIONS(371),
    [anon_sym_POUNDhash] = ACTIONS(373),
    [anon_sym_POUNDhasheq] = ACTIONS(373),
    [anon_sym_POUNDhasheqv] = ACTIONS(375),
    [anon_sym_SQUOTE] = ACTIONS(377),
    [anon_sym_BQUOTE] = ACTIONS(377),
    [anon_sym_COMMA] = ACTIONS(379),
    [anon_sym_COMMA_AT] = ACTIONS(377),
    [anon_sym_POUND_SQUOTE] = ACTIONS(377),
    [anon_sym_POUND_BQUOTE] = ACTIONS(377),
    [anon_sym_POUND_COMMA] = ACTIONS(379),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(377),
  },
  [30] = {
    [sym__skip] = STATE(84),
    [sym_comment] = STATE(84),
    [sym__block_comment] = STATE(136),
    [sym__datum] = STATE(98),
    [sym_string] = STATE(98),
    [sym_byte_string] = STATE(98),
    [sym_here_string] = STATE(98),
    [sym_regex] = STATE(98),
    [sym__real_string] = STATE(85),
    [sym_symbol] = STATE(98),
    [sym_box] = STATE(98),
    [sym_list] = STATE(98),
    [sym_vector] = STATE(98),
    [sym_structure] = STATE(98),
    [sym_hash] = STATE(98),
    [sym_graph] = STATE(98),
    [sym_quote] = STATE(98),
    [aux_sym_comment_repeat1] = STATE(84),
    [aux_sym__token_token1] = ACTIONS(303),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(381),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_POUND_LT_LT] = ACTIONS(19),
    [aux_sym_regex_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_number] = ACTIONS(381),
    [sym_character] = ACTIONS(383),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(383),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_COMMA] = ACTIONS(45),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(43),
  },
  [31] = {
    [sym__skip] = STATE(84),
    [sym_comment] = STATE(84),
    [sym__block_comment] = STATE(136),
    [sym__datum] = STATE(135),
    [sym_string] = STATE(135),
    [sym_byte_string] = STATE(135),
    [sym_here_string] = STATE(135),
    [sym_regex] = STATE(135),
    [sym__real_string] = STATE(119),
    [sym_symbol] = STATE(135),
    [sym_box] = STATE(135),
    [sym_list] = STATE(135),
    [sym_vector] = STATE(135),
    [sym_structure] = STATE(135),
    [sym_hash] = STATE(135),
    [sym_graph] = STATE(135),
    [sym_quote] = STATE(135),
    [aux_sym_comment_repeat1] = STATE(84),
    [aux_sym__token_token1] = ACTIONS(303),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(385),
    [anon_sym_POUND] = ACTIONS(349),
    [anon_sym_POUND_LT_LT] = ACTIONS(351),
    [aux_sym_regex_token1] = ACTIONS(353),
    [anon_sym_DQUOTE] = ACTIONS(355),
    [sym_number] = ACTIONS(385),
    [sym_character] = ACTIONS(387),
    [aux_sym_symbol_token1] = ACTIONS(359),
    [sym_keyword] = ACTIONS(387),
    [anon_sym_POUND_AMP] = ACTIONS(361),
    [anon_sym_LPAREN] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_LBRACE] = ACTIONS(367),
    [anon_sym_POUNDfl] = ACTIONS(369),
    [anon_sym_POUNDfx] = ACTIONS(369),
    [anon_sym_POUNDs] = ACTIONS(371),
    [anon_sym_POUNDhash] = ACTIONS(373),
    [anon_sym_POUNDhasheq] = ACTIONS(373),
    [anon_sym_POUNDhasheqv] = ACTIONS(375),
    [anon_sym_SQUOTE] = ACTIONS(377),
    [anon_sym_BQUOTE] = ACTIONS(377),
    [anon_sym_COMMA] = ACTIONS(379),
    [anon_sym_COMMA_AT] = ACTIONS(377),
    [anon_sym_POUND_SQUOTE] = ACTIONS(377),
    [anon_sym_POUND_BQUOTE] = ACTIONS(377),
    [anon_sym_POUND_COMMA] = ACTIONS(379),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(377),
  },
  [32] = {
    [sym__skip] = STATE(48),
    [sym_comment] = STATE(48),
    [sym__block_comment] = STATE(136),
    [sym__datum] = STATE(72),
    [sym_string] = STATE(72),
    [sym_byte_string] = STATE(72),
    [sym_here_string] = STATE(72),
    [sym_regex] = STATE(72),
    [sym__real_string] = STATE(73),
    [sym_symbol] = STATE(72),
    [sym_box] = STATE(72),
    [sym_list] = STATE(72),
    [sym_vector] = STATE(72),
    [sym_structure] = STATE(72),
    [sym_hash] = STATE(72),
    [sym_graph] = STATE(72),
    [sym_quote] = STATE(72),
    [aux_sym_comment_repeat1] = STATE(48),
    [aux_sym__token_token1] = ACTIONS(389),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(391),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(391),
    [sym_character] = ACTIONS(393),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(393),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
  },
  [33] = {
    [sym__skip] = STATE(23),
    [sym_comment] = STATE(23),
    [sym__block_comment] = STATE(136),
    [sym__datum] = STATE(66),
    [sym_string] = STATE(66),
    [sym_byte_string] = STATE(66),
    [sym_here_string] = STATE(66),
    [sym_regex] = STATE(66),
    [sym__real_string] = STATE(73),
    [sym_symbol] = STATE(66),
    [sym_box] = STATE(66),
    [sym_list] = STATE(66),
    [sym_vector] = STATE(66),
    [sym_structure] = STATE(66),
    [sym_hash] = STATE(66),
    [sym_graph] = STATE(66),
    [sym_quote] = STATE(66),
    [aux_sym_comment_repeat1] = STATE(23),
    [aux_sym__token_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(397),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(397),
    [sym_character] = ACTIONS(399),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(399),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
  },
  [34] = {
    [sym__skip] = STATE(84),
    [sym_comment] = STATE(84),
    [sym__block_comment] = STATE(136),
    [sym__datum] = STATE(115),
    [sym_string] = STATE(115),
    [sym_byte_string] = STATE(115),
    [sym_here_string] = STATE(115),
    [sym_regex] = STATE(115),
    [sym__real_string] = STATE(119),
    [sym_symbol] = STATE(115),
    [sym_box] = STATE(115),
    [sym_list] = STATE(115),
    [sym_vector] = STATE(115),
    [sym_structure] = STATE(115),
    [sym_hash] = STATE(115),
    [sym_graph] = STATE(115),
    [sym_quote] = STATE(115),
    [aux_sym_comment_repeat1] = STATE(84),
    [aux_sym__token_token1] = ACTIONS(303),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(401),
    [anon_sym_POUND] = ACTIONS(349),
    [anon_sym_POUND_LT_LT] = ACTIONS(351),
    [aux_sym_regex_token1] = ACTIONS(353),
    [anon_sym_DQUOTE] = ACTIONS(355),
    [sym_number] = ACTIONS(401),
    [sym_character] = ACTIONS(403),
    [aux_sym_symbol_token1] = ACTIONS(359),
    [sym_keyword] = ACTIONS(403),
    [anon_sym_POUND_AMP] = ACTIONS(361),
    [anon_sym_LPAREN] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_LBRACE] = ACTIONS(367),
    [anon_sym_POUNDfl] = ACTIONS(369),
    [anon_sym_POUNDfx] = ACTIONS(369),
    [anon_sym_POUNDs] = ACTIONS(371),
    [anon_sym_POUNDhash] = ACTIONS(373),
    [anon_sym_POUNDhasheq] = ACTIONS(373),
    [anon_sym_POUNDhasheqv] = ACTIONS(375),
    [anon_sym_SQUOTE] = ACTIONS(377),
    [anon_sym_BQUOTE] = ACTIONS(377),
    [anon_sym_COMMA] = ACTIONS(379),
    [anon_sym_COMMA_AT] = ACTIONS(377),
    [anon_sym_POUND_SQUOTE] = ACTIONS(377),
    [anon_sym_POUND_BQUOTE] = ACTIONS(377),
    [anon_sym_POUND_COMMA] = ACTIONS(379),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(377),
  },
  [35] = {
    [sym__skip] = STATE(34),
    [sym_comment] = STATE(34),
    [sym__block_comment] = STATE(136),
    [sym__datum] = STATE(118),
    [sym_string] = STATE(118),
    [sym_byte_string] = STATE(118),
    [sym_here_string] = STATE(118),
    [sym_regex] = STATE(118),
    [sym__real_string] = STATE(119),
    [sym_symbol] = STATE(118),
    [sym_box] = STATE(118),
    [sym_list] = STATE(118),
    [sym_vector] = STATE(118),
    [sym_structure] = STATE(118),
    [sym_hash] = STATE(118),
    [sym_graph] = STATE(118),
    [sym_quote] = STATE(118),
    [aux_sym_comment_repeat1] = STATE(34),
    [aux_sym__token_token1] = ACTIONS(405),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(407),
    [anon_sym_POUND] = ACTIONS(349),
    [anon_sym_POUND_LT_LT] = ACTIONS(351),
    [aux_sym_regex_token1] = ACTIONS(353),
    [anon_sym_DQUOTE] = ACTIONS(355),
    [sym_number] = ACTIONS(407),
    [sym_character] = ACTIONS(409),
    [aux_sym_symbol_token1] = ACTIONS(359),
    [sym_keyword] = ACTIONS(409),
    [anon_sym_POUND_AMP] = ACTIONS(361),
    [anon_sym_LPAREN] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_LBRACE] = ACTIONS(367),
    [anon_sym_POUNDfl] = ACTIONS(369),
    [anon_sym_POUNDfx] = ACTIONS(369),
    [anon_sym_POUNDs] = ACTIONS(371),
    [anon_sym_POUNDhash] = ACTIONS(373),
    [anon_sym_POUNDhasheq] = ACTIONS(373),
    [anon_sym_POUNDhasheqv] = ACTIONS(375),
    [anon_sym_SQUOTE] = ACTIONS(377),
    [anon_sym_BQUOTE] = ACTIONS(377),
    [anon_sym_COMMA] = ACTIONS(379),
    [anon_sym_COMMA_AT] = ACTIONS(377),
    [anon_sym_POUND_SQUOTE] = ACTIONS(377),
    [anon_sym_POUND_BQUOTE] = ACTIONS(377),
    [anon_sym_POUND_COMMA] = ACTIONS(379),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(377),
  },
  [36] = {
    [sym__skip] = STATE(24),
    [sym_comment] = STATE(24),
    [sym__block_comment] = STATE(136),
    [sym__datum] = STATE(65),
    [sym_string] = STATE(65),
    [sym_byte_string] = STATE(65),
    [sym_here_string] = STATE(65),
    [sym_regex] = STATE(65),
    [sym__real_string] = STATE(73),
    [sym_symbol] = STATE(65),
    [sym_box] = STATE(65),
    [sym_list] = STATE(65),
    [sym_vector] = STATE(65),
    [sym_structure] = STATE(65),
    [sym_hash] = STATE(65),
    [sym_graph] = STATE(65),
    [sym_quote] = STATE(65),
    [aux_sym_comment_repeat1] = STATE(24),
    [aux_sym__token_token1] = ACTIONS(411),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(413),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(413),
    [sym_character] = ACTIONS(415),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(415),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
  },
  [37] = {
    [sym__skip] = STATE(46),
    [sym_comment] = STATE(46),
    [sym__block_comment] = STATE(136),
    [sym__datum] = STATE(59),
    [sym_string] = STATE(59),
    [sym_byte_string] = STATE(59),
    [sym_here_string] = STATE(59),
    [sym_regex] = STATE(59),
    [sym__real_string] = STATE(73),
    [sym_symbol] = STATE(59),
    [sym_box] = STATE(59),
    [sym_list] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_structure] = STATE(59),
    [sym_hash] = STATE(59),
    [sym_graph] = STATE(59),
    [sym_quote] = STATE(59),
    [aux_sym_comment_repeat1] = STATE(46),
    [aux_sym__token_token1] = ACTIONS(417),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(419),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(419),
    [sym_character] = ACTIONS(421),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(421),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
  },
  [38] = {
    [sym__skip] = STATE(84),
    [sym_comment] = STATE(84),
    [sym__block_comment] = STATE(136),
    [sym__datum] = STATE(120),
    [sym_string] = STATE(120),
    [sym_byte_string] = STATE(120),
    [sym_here_string] = STATE(120),
    [sym_regex] = STATE(120),
    [sym__real_string] = STATE(119),
    [sym_symbol] = STATE(120),
    [sym_box] = STATE(120),
    [sym_list] = STATE(120),
    [sym_vector] = STATE(120),
    [sym_structure] = STATE(120),
    [sym_hash] = STATE(120),
    [sym_graph] = STATE(120),
    [sym_quote] = STATE(120),
    [aux_sym_comment_repeat1] = STATE(84),
    [aux_sym__token_token1] = ACTIONS(303),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(423),
    [anon_sym_POUND] = ACTIONS(349),
    [anon_sym_POUND_LT_LT] = ACTIONS(351),
    [aux_sym_regex_token1] = ACTIONS(353),
    [anon_sym_DQUOTE] = ACTIONS(355),
    [sym_number] = ACTIONS(423),
    [sym_character] = ACTIONS(425),
    [aux_sym_symbol_token1] = ACTIONS(359),
    [sym_keyword] = ACTIONS(425),
    [anon_sym_POUND_AMP] = ACTIONS(361),
    [anon_sym_LPAREN] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_LBRACE] = ACTIONS(367),
    [anon_sym_POUNDfl] = ACTIONS(369),
    [anon_sym_POUNDfx] = ACTIONS(369),
    [anon_sym_POUNDs] = ACTIONS(371),
    [anon_sym_POUNDhash] = ACTIONS(373),
    [anon_sym_POUNDhasheq] = ACTIONS(373),
    [anon_sym_POUNDhasheqv] = ACTIONS(375),
    [anon_sym_SQUOTE] = ACTIONS(377),
    [anon_sym_BQUOTE] = ACTIONS(377),
    [anon_sym_COMMA] = ACTIONS(379),
    [anon_sym_COMMA_AT] = ACTIONS(377),
    [anon_sym_POUND_SQUOTE] = ACTIONS(377),
    [anon_sym_POUND_BQUOTE] = ACTIONS(377),
    [anon_sym_POUND_COMMA] = ACTIONS(379),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(377),
  },
  [39] = {
    [sym__skip] = STATE(84),
    [sym_comment] = STATE(84),
    [sym__block_comment] = STATE(136),
    [sym__datum] = STATE(131),
    [sym_string] = STATE(131),
    [sym_byte_string] = STATE(131),
    [sym_here_string] = STATE(131),
    [sym_regex] = STATE(131),
    [sym__real_string] = STATE(119),
    [sym_symbol] = STATE(131),
    [sym_box] = STATE(131),
    [sym_list] = STATE(131),
    [sym_vector] = STATE(131),
    [sym_structure] = STATE(131),
    [sym_hash] = STATE(131),
    [sym_graph] = STATE(131),
    [sym_quote] = STATE(131),
    [aux_sym_comment_repeat1] = STATE(84),
    [aux_sym__token_token1] = ACTIONS(303),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(427),
    [anon_sym_POUND] = ACTIONS(349),
    [anon_sym_POUND_LT_LT] = ACTIONS(351),
    [aux_sym_regex_token1] = ACTIONS(353),
    [anon_sym_DQUOTE] = ACTIONS(355),
    [sym_number] = ACTIONS(427),
    [sym_character] = ACTIONS(429),
    [aux_sym_symbol_token1] = ACTIONS(359),
    [sym_keyword] = ACTIONS(429),
    [anon_sym_POUND_AMP] = ACTIONS(361),
    [anon_sym_LPAREN] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_LBRACE] = ACTIONS(367),
    [anon_sym_POUNDfl] = ACTIONS(369),
    [anon_sym_POUNDfx] = ACTIONS(369),
    [anon_sym_POUNDs] = ACTIONS(371),
    [anon_sym_POUNDhash] = ACTIONS(373),
    [anon_sym_POUNDhasheq] = ACTIONS(373),
    [anon_sym_POUNDhasheqv] = ACTIONS(375),
    [anon_sym_SQUOTE] = ACTIONS(377),
    [anon_sym_BQUOTE] = ACTIONS(377),
    [anon_sym_COMMA] = ACTIONS(379),
    [anon_sym_COMMA_AT] = ACTIONS(377),
    [anon_sym_POUND_SQUOTE] = ACTIONS(377),
    [anon_sym_POUND_BQUOTE] = ACTIONS(377),
    [anon_sym_POUND_COMMA] = ACTIONS(379),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(377),
  },
  [40] = {
    [sym__skip] = STATE(84),
    [sym_comment] = STATE(84),
    [sym__block_comment] = STATE(136),
    [sym__datum] = STATE(100),
    [sym_string] = STATE(100),
    [sym_byte_string] = STATE(100),
    [sym_here_string] = STATE(100),
    [sym_regex] = STATE(100),
    [sym__real_string] = STATE(85),
    [sym_symbol] = STATE(100),
    [sym_box] = STATE(100),
    [sym_list] = STATE(100),
    [sym_vector] = STATE(100),
    [sym_structure] = STATE(100),
    [sym_hash] = STATE(100),
    [sym_graph] = STATE(100),
    [sym_quote] = STATE(100),
    [aux_sym_comment_repeat1] = STATE(84),
    [aux_sym__token_token1] = ACTIONS(303),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(431),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_POUND_LT_LT] = ACTIONS(19),
    [aux_sym_regex_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_number] = ACTIONS(431),
    [sym_character] = ACTIONS(433),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(433),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_COMMA] = ACTIONS(45),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(43),
  },
  [41] = {
    [sym__skip] = STATE(84),
    [sym_comment] = STATE(84),
    [sym__block_comment] = STATE(136),
    [sym__datum] = STATE(76),
    [sym_string] = STATE(76),
    [sym_byte_string] = STATE(76),
    [sym_here_string] = STATE(76),
    [sym_regex] = STATE(76),
    [sym__real_string] = STATE(73),
    [sym_symbol] = STATE(76),
    [sym_box] = STATE(76),
    [sym_list] = STATE(76),
    [sym_vector] = STATE(76),
    [sym_structure] = STATE(76),
    [sym_hash] = STATE(76),
    [sym_graph] = STATE(76),
    [sym_quote] = STATE(76),
    [aux_sym_comment_repeat1] = STATE(84),
    [aux_sym__token_token1] = ACTIONS(303),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(435),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(435),
    [sym_character] = ACTIONS(437),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(437),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
  },
  [42] = {
    [sym__skip] = STATE(49),
    [sym_comment] = STATE(49),
    [sym__block_comment] = STATE(136),
    [sym__datum] = STATE(103),
    [sym_string] = STATE(103),
    [sym_byte_string] = STATE(103),
    [sym_here_string] = STATE(103),
    [sym_regex] = STATE(103),
    [sym__real_string] = STATE(85),
    [sym_symbol] = STATE(103),
    [sym_box] = STATE(103),
    [sym_list] = STATE(103),
    [sym_vector] = STATE(103),
    [sym_structure] = STATE(103),
    [sym_hash] = STATE(103),
    [sym_graph] = STATE(103),
    [sym_quote] = STATE(103),
    [aux_sym_comment_repeat1] = STATE(49),
    [aux_sym__token_token1] = ACTIONS(439),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(441),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_POUND_LT_LT] = ACTIONS(19),
    [aux_sym_regex_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_number] = ACTIONS(441),
    [sym_character] = ACTIONS(443),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(443),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_COMMA] = ACTIONS(45),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(43),
  },
  [43] = {
    [sym__skip] = STATE(84),
    [sym_comment] = STATE(84),
    [sym__block_comment] = STATE(136),
    [sym__datum] = STATE(94),
    [sym_string] = STATE(94),
    [sym_byte_string] = STATE(94),
    [sym_here_string] = STATE(94),
    [sym_regex] = STATE(94),
    [sym__real_string] = STATE(85),
    [sym_symbol] = STATE(94),
    [sym_box] = STATE(94),
    [sym_list] = STATE(94),
    [sym_vector] = STATE(94),
    [sym_structure] = STATE(94),
    [sym_hash] = STATE(94),
    [sym_graph] = STATE(94),
    [sym_quote] = STATE(94),
    [aux_sym_comment_repeat1] = STATE(84),
    [aux_sym__token_token1] = ACTIONS(303),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(445),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_POUND_LT_LT] = ACTIONS(19),
    [aux_sym_regex_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_number] = ACTIONS(445),
    [sym_character] = ACTIONS(447),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(447),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_COMMA] = ACTIONS(45),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(43),
  },
  [44] = {
    [sym__skip] = STATE(38),
    [sym_comment] = STATE(38),
    [sym__block_comment] = STATE(136),
    [sym__datum] = STATE(113),
    [sym_string] = STATE(113),
    [sym_byte_string] = STATE(113),
    [sym_here_string] = STATE(113),
    [sym_regex] = STATE(113),
    [sym__real_string] = STATE(119),
    [sym_symbol] = STATE(113),
    [sym_box] = STATE(113),
    [sym_list] = STATE(113),
    [sym_vector] = STATE(113),
    [sym_structure] = STATE(113),
    [sym_hash] = STATE(113),
    [sym_graph] = STATE(113),
    [sym_quote] = STATE(113),
    [aux_sym_comment_repeat1] = STATE(38),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(451),
    [anon_sym_POUND] = ACTIONS(349),
    [anon_sym_POUND_LT_LT] = ACTIONS(351),
    [aux_sym_regex_token1] = ACTIONS(353),
    [anon_sym_DQUOTE] = ACTIONS(355),
    [sym_number] = ACTIONS(451),
    [sym_character] = ACTIONS(453),
    [aux_sym_symbol_token1] = ACTIONS(359),
    [sym_keyword] = ACTIONS(453),
    [anon_sym_POUND_AMP] = ACTIONS(361),
    [anon_sym_LPAREN] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_LBRACE] = ACTIONS(367),
    [anon_sym_POUNDfl] = ACTIONS(369),
    [anon_sym_POUNDfx] = ACTIONS(369),
    [anon_sym_POUNDs] = ACTIONS(371),
    [anon_sym_POUNDhash] = ACTIONS(373),
    [anon_sym_POUNDhasheq] = ACTIONS(373),
    [anon_sym_POUNDhasheqv] = ACTIONS(375),
    [anon_sym_SQUOTE] = ACTIONS(377),
    [anon_sym_BQUOTE] = ACTIONS(377),
    [anon_sym_COMMA] = ACTIONS(379),
    [anon_sym_COMMA_AT] = ACTIONS(377),
    [anon_sym_POUND_SQUOTE] = ACTIONS(377),
    [anon_sym_POUND_BQUOTE] = ACTIONS(377),
    [anon_sym_POUND_COMMA] = ACTIONS(379),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(377),
  },
  [45] = {
    [sym__skip] = STATE(39),
    [sym_comment] = STATE(39),
    [sym__block_comment] = STATE(136),
    [sym__datum] = STATE(127),
    [sym_string] = STATE(127),
    [sym_byte_string] = STATE(127),
    [sym_here_string] = STATE(127),
    [sym_regex] = STATE(127),
    [sym__real_string] = STATE(119),
    [sym_symbol] = STATE(127),
    [sym_box] = STATE(127),
    [sym_list] = STATE(127),
    [sym_vector] = STATE(127),
    [sym_structure] = STATE(127),
    [sym_hash] = STATE(127),
    [sym_graph] = STATE(127),
    [sym_quote] = STATE(127),
    [aux_sym_comment_repeat1] = STATE(39),
    [aux_sym__token_token1] = ACTIONS(455),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(457),
    [anon_sym_POUND] = ACTIONS(349),
    [anon_sym_POUND_LT_LT] = ACTIONS(351),
    [aux_sym_regex_token1] = ACTIONS(353),
    [anon_sym_DQUOTE] = ACTIONS(355),
    [sym_number] = ACTIONS(457),
    [sym_character] = ACTIONS(459),
    [aux_sym_symbol_token1] = ACTIONS(359),
    [sym_keyword] = ACTIONS(459),
    [anon_sym_POUND_AMP] = ACTIONS(361),
    [anon_sym_LPAREN] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_LBRACE] = ACTIONS(367),
    [anon_sym_POUNDfl] = ACTIONS(369),
    [anon_sym_POUNDfx] = ACTIONS(369),
    [anon_sym_POUNDs] = ACTIONS(371),
    [anon_sym_POUNDhash] = ACTIONS(373),
    [anon_sym_POUNDhasheq] = ACTIONS(373),
    [anon_sym_POUNDhasheqv] = ACTIONS(375),
    [anon_sym_SQUOTE] = ACTIONS(377),
    [anon_sym_BQUOTE] = ACTIONS(377),
    [anon_sym_COMMA] = ACTIONS(379),
    [anon_sym_COMMA_AT] = ACTIONS(377),
    [anon_sym_POUND_SQUOTE] = ACTIONS(377),
    [anon_sym_POUND_BQUOTE] = ACTIONS(377),
    [anon_sym_POUND_COMMA] = ACTIONS(379),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(377),
  },
  [46] = {
    [sym__skip] = STATE(84),
    [sym_comment] = STATE(84),
    [sym__block_comment] = STATE(136),
    [sym__datum] = STATE(70),
    [sym_string] = STATE(70),
    [sym_byte_string] = STATE(70),
    [sym_here_string] = STATE(70),
    [sym_regex] = STATE(70),
    [sym__real_string] = STATE(73),
    [sym_symbol] = STATE(70),
    [sym_box] = STATE(70),
    [sym_list] = STATE(70),
    [sym_vector] = STATE(70),
    [sym_structure] = STATE(70),
    [sym_hash] = STATE(70),
    [sym_graph] = STATE(70),
    [sym_quote] = STATE(70),
    [aux_sym_comment_repeat1] = STATE(84),
    [aux_sym__token_token1] = ACTIONS(303),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(461),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(461),
    [sym_character] = ACTIONS(463),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(463),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
  },
  [47] = {
    [sym__skip] = STATE(40),
    [sym_comment] = STATE(40),
    [sym__block_comment] = STATE(136),
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
    [aux_sym_comment_repeat1] = STATE(40),
    [aux_sym__token_token1] = ACTIONS(465),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(467),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_POUND_LT_LT] = ACTIONS(19),
    [aux_sym_regex_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_number] = ACTIONS(467),
    [sym_character] = ACTIONS(469),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(469),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_COMMA] = ACTIONS(45),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(43),
  },
  [48] = {
    [sym__skip] = STATE(84),
    [sym_comment] = STATE(84),
    [sym__block_comment] = STATE(136),
    [sym__datum] = STATE(60),
    [sym_string] = STATE(60),
    [sym_byte_string] = STATE(60),
    [sym_here_string] = STATE(60),
    [sym_regex] = STATE(60),
    [sym__real_string] = STATE(73),
    [sym_symbol] = STATE(60),
    [sym_box] = STATE(60),
    [sym_list] = STATE(60),
    [sym_vector] = STATE(60),
    [sym_structure] = STATE(60),
    [sym_hash] = STATE(60),
    [sym_graph] = STATE(60),
    [sym_quote] = STATE(60),
    [aux_sym_comment_repeat1] = STATE(84),
    [aux_sym__token_token1] = ACTIONS(303),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(471),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(471),
    [sym_character] = ACTIONS(473),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(473),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
  },
  [49] = {
    [sym__skip] = STATE(84),
    [sym_comment] = STATE(84),
    [sym__block_comment] = STATE(136),
    [sym__datum] = STATE(95),
    [sym_string] = STATE(95),
    [sym_byte_string] = STATE(95),
    [sym_here_string] = STATE(95),
    [sym_regex] = STATE(95),
    [sym__real_string] = STATE(85),
    [sym_symbol] = STATE(95),
    [sym_box] = STATE(95),
    [sym_list] = STATE(95),
    [sym_vector] = STATE(95),
    [sym_structure] = STATE(95),
    [sym_hash] = STATE(95),
    [sym_graph] = STATE(95),
    [sym_quote] = STATE(95),
    [aux_sym_comment_repeat1] = STATE(84),
    [aux_sym__token_token1] = ACTIONS(303),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(475),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_POUND_LT_LT] = ACTIONS(19),
    [aux_sym_regex_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_number] = ACTIONS(475),
    [sym_character] = ACTIONS(477),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(477),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_COMMA] = ACTIONS(45),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(43),
  },
  [50] = {
    [sym__skip] = STATE(84),
    [sym_comment] = STATE(84),
    [sym__block_comment] = STATE(136),
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
    [aux_sym_comment_repeat1] = STATE(84),
    [aux_sym__token_token1] = ACTIONS(303),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(479),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_POUND_LT_LT] = ACTIONS(19),
    [aux_sym_regex_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_number] = ACTIONS(479),
    [sym_character] = ACTIONS(481),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(481),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_COMMA] = ACTIONS(45),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(43),
  },
  [51] = {
    [aux_sym__token_token1] = ACTIONS(483),
    [sym_dot] = ACTIONS(485),
    [aux_sym_comment_token1] = ACTIONS(483),
    [anon_sym_POUND_SEMI] = ACTIONS(483),
    [aux_sym_comment_token2] = ACTIONS(483),
    [anon_sym_POUND_BANG] = ACTIONS(483),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(483),
    [anon_sym_BSLASH] = ACTIONS(487),
    [anon_sym_POUND_PIPE] = ACTIONS(483),
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
    [anon_sym_POUND_BANG2] = ACTIONS(485),
  },
  [52] = {
    [aux_sym__token_token1] = ACTIONS(489),
    [sym_dot] = ACTIONS(491),
    [aux_sym_comment_token1] = ACTIONS(489),
    [anon_sym_POUND_SEMI] = ACTIONS(489),
    [aux_sym_comment_token2] = ACTIONS(489),
    [anon_sym_POUND_BANG] = ACTIONS(489),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(489),
    [anon_sym_BSLASH] = ACTIONS(487),
    [anon_sym_POUND_PIPE] = ACTIONS(489),
    [sym_boolean] = ACTIONS(491),
    [anon_sym_POUND] = ACTIONS(491),
    [anon_sym_POUND_LT_LT] = ACTIONS(489),
    [aux_sym_regex_token1] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(489),
    [sym_number] = ACTIONS(491),
    [sym_character] = ACTIONS(489),
    [aux_sym_symbol_token1] = ACTIONS(491),
    [sym_keyword] = ACTIONS(489),
    [anon_sym_POUND_AMP] = ACTIONS(489),
    [anon_sym_LPAREN] = ACTIONS(489),
    [anon_sym_RPAREN] = ACTIONS(489),
    [anon_sym_LBRACK] = ACTIONS(489),
    [anon_sym_RBRACK] = ACTIONS(489),
    [anon_sym_LBRACE] = ACTIONS(489),
    [anon_sym_RBRACE] = ACTIONS(489),
    [anon_sym_POUNDfl] = ACTIONS(489),
    [anon_sym_POUNDfx] = ACTIONS(489),
    [anon_sym_POUNDs] = ACTIONS(489),
    [anon_sym_POUNDhash] = ACTIONS(491),
    [anon_sym_POUNDhasheq] = ACTIONS(491),
    [anon_sym_POUNDhasheqv] = ACTIONS(489),
    [anon_sym_SQUOTE] = ACTIONS(489),
    [anon_sym_BQUOTE] = ACTIONS(489),
    [anon_sym_COMMA] = ACTIONS(491),
    [anon_sym_COMMA_AT] = ACTIONS(489),
    [anon_sym_POUND_SQUOTE] = ACTIONS(489),
    [anon_sym_POUND_BQUOTE] = ACTIONS(489),
    [anon_sym_POUND_COMMA] = ACTIONS(491),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(489),
    [anon_sym_POUNDreader] = ACTIONS(489),
    [anon_sym_POUNDlang] = ACTIONS(489),
    [anon_sym_POUND_BANG2] = ACTIONS(491),
  },
  [53] = {
    [aux_sym__token_token1] = ACTIONS(493),
    [sym_dot] = ACTIONS(495),
    [aux_sym_comment_token1] = ACTIONS(493),
    [anon_sym_POUND_SEMI] = ACTIONS(493),
    [aux_sym_comment_token2] = ACTIONS(493),
    [anon_sym_POUND_BANG] = ACTIONS(493),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(493),
    [anon_sym_POUND_PIPE] = ACTIONS(493),
    [sym_boolean] = ACTIONS(495),
    [anon_sym_POUND] = ACTIONS(495),
    [anon_sym_POUND_LT_LT] = ACTIONS(493),
    [aux_sym_regex_token1] = ACTIONS(493),
    [anon_sym_DQUOTE] = ACTIONS(493),
    [sym_number] = ACTIONS(495),
    [sym_character] = ACTIONS(493),
    [aux_sym_symbol_token1] = ACTIONS(495),
    [sym_keyword] = ACTIONS(493),
    [anon_sym_POUND_AMP] = ACTIONS(493),
    [anon_sym_LPAREN] = ACTIONS(493),
    [anon_sym_RPAREN] = ACTIONS(493),
    [anon_sym_LBRACK] = ACTIONS(493),
    [anon_sym_RBRACK] = ACTIONS(493),
    [anon_sym_LBRACE] = ACTIONS(493),
    [anon_sym_RBRACE] = ACTIONS(493),
    [anon_sym_POUNDfl] = ACTIONS(493),
    [anon_sym_POUNDfx] = ACTIONS(493),
    [anon_sym_POUNDs] = ACTIONS(493),
    [anon_sym_POUNDhash] = ACTIONS(495),
    [anon_sym_POUNDhasheq] = ACTIONS(495),
    [anon_sym_POUNDhasheqv] = ACTIONS(493),
    [anon_sym_SQUOTE] = ACTIONS(493),
    [anon_sym_BQUOTE] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(495),
    [anon_sym_COMMA_AT] = ACTIONS(493),
    [anon_sym_POUND_SQUOTE] = ACTIONS(493),
    [anon_sym_POUND_BQUOTE] = ACTIONS(493),
    [anon_sym_POUND_COMMA] = ACTIONS(495),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(493),
    [anon_sym_POUNDreader] = ACTIONS(493),
    [anon_sym_POUNDlang] = ACTIONS(493),
    [anon_sym_POUND_BANG2] = ACTIONS(495),
  },
  [54] = {
    [aux_sym__token_token1] = ACTIONS(483),
    [sym_dot] = ACTIONS(485),
    [aux_sym_comment_token1] = ACTIONS(483),
    [anon_sym_POUND_SEMI] = ACTIONS(483),
    [aux_sym_comment_token2] = ACTIONS(483),
    [anon_sym_POUND_BANG] = ACTIONS(483),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(483),
    [anon_sym_POUND_PIPE] = ACTIONS(483),
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
    [anon_sym_POUND_BANG2] = ACTIONS(485),
  },
  [55] = {
    [aux_sym__token_token1] = ACTIONS(497),
    [sym_dot] = ACTIONS(499),
    [aux_sym_comment_token1] = ACTIONS(497),
    [anon_sym_POUND_SEMI] = ACTIONS(497),
    [aux_sym_comment_token2] = ACTIONS(497),
    [anon_sym_POUND_BANG] = ACTIONS(497),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(497),
    [anon_sym_POUND_PIPE] = ACTIONS(497),
    [sym_boolean] = ACTIONS(499),
    [anon_sym_POUND] = ACTIONS(499),
    [anon_sym_POUND_LT_LT] = ACTIONS(497),
    [aux_sym_regex_token1] = ACTIONS(497),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [sym_number] = ACTIONS(499),
    [sym_character] = ACTIONS(497),
    [aux_sym_symbol_token1] = ACTIONS(499),
    [sym_keyword] = ACTIONS(497),
    [anon_sym_POUND_AMP] = ACTIONS(497),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_RPAREN] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(497),
    [anon_sym_RBRACK] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_RBRACE] = ACTIONS(497),
    [anon_sym_POUNDfl] = ACTIONS(497),
    [anon_sym_POUNDfx] = ACTIONS(497),
    [anon_sym_POUNDs] = ACTIONS(497),
    [anon_sym_POUNDhash] = ACTIONS(499),
    [anon_sym_POUNDhasheq] = ACTIONS(499),
    [anon_sym_POUNDhasheqv] = ACTIONS(497),
    [anon_sym_SQUOTE] = ACTIONS(497),
    [anon_sym_BQUOTE] = ACTIONS(497),
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_COMMA_AT] = ACTIONS(497),
    [anon_sym_POUND_SQUOTE] = ACTIONS(497),
    [anon_sym_POUND_BQUOTE] = ACTIONS(497),
    [anon_sym_POUND_COMMA] = ACTIONS(499),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(497),
    [anon_sym_POUNDreader] = ACTIONS(497),
    [anon_sym_POUNDlang] = ACTIONS(497),
    [anon_sym_POUND_BANG2] = ACTIONS(499),
  },
  [56] = {
    [aux_sym__token_token1] = ACTIONS(501),
    [sym_dot] = ACTIONS(503),
    [aux_sym_comment_token1] = ACTIONS(501),
    [anon_sym_POUND_SEMI] = ACTIONS(501),
    [aux_sym_comment_token2] = ACTIONS(501),
    [anon_sym_POUND_BANG] = ACTIONS(501),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(501),
    [anon_sym_POUND_PIPE] = ACTIONS(501),
    [sym_boolean] = ACTIONS(503),
    [anon_sym_POUND] = ACTIONS(503),
    [anon_sym_POUND_LT_LT] = ACTIONS(501),
    [aux_sym_regex_token1] = ACTIONS(501),
    [anon_sym_DQUOTE] = ACTIONS(501),
    [sym_number] = ACTIONS(503),
    [sym_character] = ACTIONS(501),
    [aux_sym_symbol_token1] = ACTIONS(503),
    [sym_keyword] = ACTIONS(501),
    [anon_sym_POUND_AMP] = ACTIONS(501),
    [anon_sym_LPAREN] = ACTIONS(501),
    [anon_sym_RPAREN] = ACTIONS(501),
    [anon_sym_LBRACK] = ACTIONS(501),
    [anon_sym_RBRACK] = ACTIONS(501),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_RBRACE] = ACTIONS(501),
    [anon_sym_POUNDfl] = ACTIONS(501),
    [anon_sym_POUNDfx] = ACTIONS(501),
    [anon_sym_POUNDs] = ACTIONS(501),
    [anon_sym_POUNDhash] = ACTIONS(503),
    [anon_sym_POUNDhasheq] = ACTIONS(503),
    [anon_sym_POUNDhasheqv] = ACTIONS(501),
    [anon_sym_SQUOTE] = ACTIONS(501),
    [anon_sym_BQUOTE] = ACTIONS(501),
    [anon_sym_COMMA] = ACTIONS(503),
    [anon_sym_COMMA_AT] = ACTIONS(501),
    [anon_sym_POUND_SQUOTE] = ACTIONS(501),
    [anon_sym_POUND_BQUOTE] = ACTIONS(501),
    [anon_sym_POUND_COMMA] = ACTIONS(503),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(501),
    [anon_sym_POUNDreader] = ACTIONS(501),
    [anon_sym_POUNDlang] = ACTIONS(501),
    [anon_sym_POUND_BANG2] = ACTIONS(503),
  },
  [57] = {
    [aux_sym__token_token1] = ACTIONS(505),
    [sym_dot] = ACTIONS(507),
    [aux_sym_comment_token1] = ACTIONS(505),
    [anon_sym_POUND_SEMI] = ACTIONS(505),
    [aux_sym_comment_token2] = ACTIONS(505),
    [anon_sym_POUND_BANG] = ACTIONS(505),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(505),
    [anon_sym_POUND_PIPE] = ACTIONS(505),
    [sym_boolean] = ACTIONS(507),
    [anon_sym_POUND] = ACTIONS(507),
    [anon_sym_POUND_LT_LT] = ACTIONS(505),
    [aux_sym_regex_token1] = ACTIONS(505),
    [anon_sym_DQUOTE] = ACTIONS(505),
    [sym_number] = ACTIONS(507),
    [sym_character] = ACTIONS(505),
    [aux_sym_symbol_token1] = ACTIONS(507),
    [sym_keyword] = ACTIONS(505),
    [anon_sym_POUND_AMP] = ACTIONS(505),
    [anon_sym_LPAREN] = ACTIONS(505),
    [anon_sym_RPAREN] = ACTIONS(505),
    [anon_sym_LBRACK] = ACTIONS(505),
    [anon_sym_RBRACK] = ACTIONS(505),
    [anon_sym_LBRACE] = ACTIONS(505),
    [anon_sym_RBRACE] = ACTIONS(505),
    [anon_sym_POUNDfl] = ACTIONS(505),
    [anon_sym_POUNDfx] = ACTIONS(505),
    [anon_sym_POUNDs] = ACTIONS(505),
    [anon_sym_POUNDhash] = ACTIONS(507),
    [anon_sym_POUNDhasheq] = ACTIONS(507),
    [anon_sym_POUNDhasheqv] = ACTIONS(505),
    [anon_sym_SQUOTE] = ACTIONS(505),
    [anon_sym_BQUOTE] = ACTIONS(505),
    [anon_sym_COMMA] = ACTIONS(507),
    [anon_sym_COMMA_AT] = ACTIONS(505),
    [anon_sym_POUND_SQUOTE] = ACTIONS(505),
    [anon_sym_POUND_BQUOTE] = ACTIONS(505),
    [anon_sym_POUND_COMMA] = ACTIONS(507),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(505),
    [anon_sym_POUNDreader] = ACTIONS(505),
    [anon_sym_POUNDlang] = ACTIONS(505),
    [anon_sym_POUND_BANG2] = ACTIONS(507),
  },
  [58] = {
    [aux_sym__token_token1] = ACTIONS(509),
    [sym_dot] = ACTIONS(511),
    [aux_sym_comment_token1] = ACTIONS(509),
    [anon_sym_POUND_SEMI] = ACTIONS(509),
    [aux_sym_comment_token2] = ACTIONS(509),
    [anon_sym_POUND_BANG] = ACTIONS(509),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(509),
    [anon_sym_POUND_PIPE] = ACTIONS(509),
    [sym_boolean] = ACTIONS(511),
    [anon_sym_POUND] = ACTIONS(511),
    [anon_sym_POUND_LT_LT] = ACTIONS(509),
    [aux_sym_regex_token1] = ACTIONS(509),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [sym_number] = ACTIONS(511),
    [sym_character] = ACTIONS(509),
    [aux_sym_symbol_token1] = ACTIONS(511),
    [sym_keyword] = ACTIONS(509),
    [anon_sym_POUND_AMP] = ACTIONS(509),
    [anon_sym_LPAREN] = ACTIONS(509),
    [anon_sym_RPAREN] = ACTIONS(509),
    [anon_sym_LBRACK] = ACTIONS(509),
    [anon_sym_RBRACK] = ACTIONS(509),
    [anon_sym_LBRACE] = ACTIONS(509),
    [anon_sym_RBRACE] = ACTIONS(509),
    [anon_sym_POUNDfl] = ACTIONS(509),
    [anon_sym_POUNDfx] = ACTIONS(509),
    [anon_sym_POUNDs] = ACTIONS(509),
    [anon_sym_POUNDhash] = ACTIONS(511),
    [anon_sym_POUNDhasheq] = ACTIONS(511),
    [anon_sym_POUNDhasheqv] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(509),
    [anon_sym_BQUOTE] = ACTIONS(509),
    [anon_sym_COMMA] = ACTIONS(511),
    [anon_sym_COMMA_AT] = ACTIONS(509),
    [anon_sym_POUND_SQUOTE] = ACTIONS(509),
    [anon_sym_POUND_BQUOTE] = ACTIONS(509),
    [anon_sym_POUND_COMMA] = ACTIONS(511),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(509),
    [anon_sym_POUNDreader] = ACTIONS(509),
    [anon_sym_POUNDlang] = ACTIONS(509),
    [anon_sym_POUND_BANG2] = ACTIONS(511),
  },
  [59] = {
    [aux_sym__token_token1] = ACTIONS(513),
    [sym_dot] = ACTIONS(515),
    [aux_sym_comment_token1] = ACTIONS(513),
    [anon_sym_POUND_SEMI] = ACTIONS(513),
    [aux_sym_comment_token2] = ACTIONS(513),
    [anon_sym_POUND_BANG] = ACTIONS(513),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(513),
    [anon_sym_POUND_PIPE] = ACTIONS(513),
    [sym_boolean] = ACTIONS(515),
    [anon_sym_POUND] = ACTIONS(515),
    [anon_sym_POUND_LT_LT] = ACTIONS(513),
    [aux_sym_regex_token1] = ACTIONS(513),
    [anon_sym_DQUOTE] = ACTIONS(513),
    [sym_number] = ACTIONS(515),
    [sym_character] = ACTIONS(513),
    [aux_sym_symbol_token1] = ACTIONS(515),
    [sym_keyword] = ACTIONS(513),
    [anon_sym_POUND_AMP] = ACTIONS(513),
    [anon_sym_LPAREN] = ACTIONS(513),
    [anon_sym_RPAREN] = ACTIONS(513),
    [anon_sym_LBRACK] = ACTIONS(513),
    [anon_sym_RBRACK] = ACTIONS(513),
    [anon_sym_LBRACE] = ACTIONS(513),
    [anon_sym_RBRACE] = ACTIONS(513),
    [anon_sym_POUNDfl] = ACTIONS(513),
    [anon_sym_POUNDfx] = ACTIONS(513),
    [anon_sym_POUNDs] = ACTIONS(513),
    [anon_sym_POUNDhash] = ACTIONS(515),
    [anon_sym_POUNDhasheq] = ACTIONS(515),
    [anon_sym_POUNDhasheqv] = ACTIONS(513),
    [anon_sym_SQUOTE] = ACTIONS(513),
    [anon_sym_BQUOTE] = ACTIONS(513),
    [anon_sym_COMMA] = ACTIONS(515),
    [anon_sym_COMMA_AT] = ACTIONS(513),
    [anon_sym_POUND_SQUOTE] = ACTIONS(513),
    [anon_sym_POUND_BQUOTE] = ACTIONS(513),
    [anon_sym_POUND_COMMA] = ACTIONS(515),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(513),
    [anon_sym_POUNDreader] = ACTIONS(513),
    [anon_sym_POUNDlang] = ACTIONS(513),
    [anon_sym_POUND_BANG2] = ACTIONS(515),
  },
  [60] = {
    [aux_sym__token_token1] = ACTIONS(517),
    [sym_dot] = ACTIONS(519),
    [aux_sym_comment_token1] = ACTIONS(517),
    [anon_sym_POUND_SEMI] = ACTIONS(517),
    [aux_sym_comment_token2] = ACTIONS(517),
    [anon_sym_POUND_BANG] = ACTIONS(517),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(517),
    [anon_sym_POUND_PIPE] = ACTIONS(517),
    [sym_boolean] = ACTIONS(519),
    [anon_sym_POUND] = ACTIONS(519),
    [anon_sym_POUND_LT_LT] = ACTIONS(517),
    [aux_sym_regex_token1] = ACTIONS(517),
    [anon_sym_DQUOTE] = ACTIONS(517),
    [sym_number] = ACTIONS(519),
    [sym_character] = ACTIONS(517),
    [aux_sym_symbol_token1] = ACTIONS(519),
    [sym_keyword] = ACTIONS(517),
    [anon_sym_POUND_AMP] = ACTIONS(517),
    [anon_sym_LPAREN] = ACTIONS(517),
    [anon_sym_RPAREN] = ACTIONS(517),
    [anon_sym_LBRACK] = ACTIONS(517),
    [anon_sym_RBRACK] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_RBRACE] = ACTIONS(517),
    [anon_sym_POUNDfl] = ACTIONS(517),
    [anon_sym_POUNDfx] = ACTIONS(517),
    [anon_sym_POUNDs] = ACTIONS(517),
    [anon_sym_POUNDhash] = ACTIONS(519),
    [anon_sym_POUNDhasheq] = ACTIONS(519),
    [anon_sym_POUNDhasheqv] = ACTIONS(517),
    [anon_sym_SQUOTE] = ACTIONS(517),
    [anon_sym_BQUOTE] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_COMMA_AT] = ACTIONS(517),
    [anon_sym_POUND_SQUOTE] = ACTIONS(517),
    [anon_sym_POUND_BQUOTE] = ACTIONS(517),
    [anon_sym_POUND_COMMA] = ACTIONS(519),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(517),
    [anon_sym_POUNDreader] = ACTIONS(517),
    [anon_sym_POUNDlang] = ACTIONS(517),
    [anon_sym_POUND_BANG2] = ACTIONS(519),
  },
  [61] = {
    [aux_sym__token_token1] = ACTIONS(521),
    [sym_dot] = ACTIONS(523),
    [aux_sym_comment_token1] = ACTIONS(521),
    [anon_sym_POUND_SEMI] = ACTIONS(521),
    [aux_sym_comment_token2] = ACTIONS(521),
    [anon_sym_POUND_BANG] = ACTIONS(521),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(521),
    [anon_sym_POUND_PIPE] = ACTIONS(521),
    [sym_boolean] = ACTIONS(523),
    [anon_sym_POUND] = ACTIONS(523),
    [anon_sym_POUND_LT_LT] = ACTIONS(521),
    [aux_sym_regex_token1] = ACTIONS(521),
    [anon_sym_DQUOTE] = ACTIONS(521),
    [sym_number] = ACTIONS(523),
    [sym_character] = ACTIONS(521),
    [aux_sym_symbol_token1] = ACTIONS(523),
    [sym_keyword] = ACTIONS(521),
    [anon_sym_POUND_AMP] = ACTIONS(521),
    [anon_sym_LPAREN] = ACTIONS(521),
    [anon_sym_RPAREN] = ACTIONS(521),
    [anon_sym_LBRACK] = ACTIONS(521),
    [anon_sym_RBRACK] = ACTIONS(521),
    [anon_sym_LBRACE] = ACTIONS(521),
    [anon_sym_RBRACE] = ACTIONS(521),
    [anon_sym_POUNDfl] = ACTIONS(521),
    [anon_sym_POUNDfx] = ACTIONS(521),
    [anon_sym_POUNDs] = ACTIONS(521),
    [anon_sym_POUNDhash] = ACTIONS(523),
    [anon_sym_POUNDhasheq] = ACTIONS(523),
    [anon_sym_POUNDhasheqv] = ACTIONS(521),
    [anon_sym_SQUOTE] = ACTIONS(521),
    [anon_sym_BQUOTE] = ACTIONS(521),
    [anon_sym_COMMA] = ACTIONS(523),
    [anon_sym_COMMA_AT] = ACTIONS(521),
    [anon_sym_POUND_SQUOTE] = ACTIONS(521),
    [anon_sym_POUND_BQUOTE] = ACTIONS(521),
    [anon_sym_POUND_COMMA] = ACTIONS(523),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(521),
    [anon_sym_POUNDreader] = ACTIONS(521),
    [anon_sym_POUNDlang] = ACTIONS(521),
    [anon_sym_POUND_BANG2] = ACTIONS(523),
  },
  [62] = {
    [aux_sym__token_token1] = ACTIONS(525),
    [sym_dot] = ACTIONS(527),
    [aux_sym_comment_token1] = ACTIONS(525),
    [anon_sym_POUND_SEMI] = ACTIONS(525),
    [aux_sym_comment_token2] = ACTIONS(525),
    [anon_sym_POUND_BANG] = ACTIONS(525),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(525),
    [anon_sym_POUND_PIPE] = ACTIONS(525),
    [sym_boolean] = ACTIONS(527),
    [anon_sym_POUND] = ACTIONS(527),
    [anon_sym_POUND_LT_LT] = ACTIONS(525),
    [aux_sym_regex_token1] = ACTIONS(525),
    [anon_sym_DQUOTE] = ACTIONS(525),
    [sym_number] = ACTIONS(527),
    [sym_character] = ACTIONS(525),
    [aux_sym_symbol_token1] = ACTIONS(527),
    [sym_keyword] = ACTIONS(525),
    [anon_sym_POUND_AMP] = ACTIONS(525),
    [anon_sym_LPAREN] = ACTIONS(525),
    [anon_sym_RPAREN] = ACTIONS(525),
    [anon_sym_LBRACK] = ACTIONS(525),
    [anon_sym_RBRACK] = ACTIONS(525),
    [anon_sym_LBRACE] = ACTIONS(525),
    [anon_sym_RBRACE] = ACTIONS(525),
    [anon_sym_POUNDfl] = ACTIONS(525),
    [anon_sym_POUNDfx] = ACTIONS(525),
    [anon_sym_POUNDs] = ACTIONS(525),
    [anon_sym_POUNDhash] = ACTIONS(527),
    [anon_sym_POUNDhasheq] = ACTIONS(527),
    [anon_sym_POUNDhasheqv] = ACTIONS(525),
    [anon_sym_SQUOTE] = ACTIONS(525),
    [anon_sym_BQUOTE] = ACTIONS(525),
    [anon_sym_COMMA] = ACTIONS(527),
    [anon_sym_COMMA_AT] = ACTIONS(525),
    [anon_sym_POUND_SQUOTE] = ACTIONS(525),
    [anon_sym_POUND_BQUOTE] = ACTIONS(525),
    [anon_sym_POUND_COMMA] = ACTIONS(527),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(525),
    [anon_sym_POUNDreader] = ACTIONS(525),
    [anon_sym_POUNDlang] = ACTIONS(525),
    [anon_sym_POUND_BANG2] = ACTIONS(527),
  },
  [63] = {
    [aux_sym__token_token1] = ACTIONS(529),
    [sym_dot] = ACTIONS(531),
    [aux_sym_comment_token1] = ACTIONS(529),
    [anon_sym_POUND_SEMI] = ACTIONS(529),
    [aux_sym_comment_token2] = ACTIONS(529),
    [anon_sym_POUND_BANG] = ACTIONS(529),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(529),
    [anon_sym_POUND_PIPE] = ACTIONS(529),
    [sym_boolean] = ACTIONS(531),
    [anon_sym_POUND] = ACTIONS(531),
    [anon_sym_POUND_LT_LT] = ACTIONS(529),
    [aux_sym_regex_token1] = ACTIONS(529),
    [anon_sym_DQUOTE] = ACTIONS(529),
    [sym_number] = ACTIONS(531),
    [sym_character] = ACTIONS(529),
    [aux_sym_symbol_token1] = ACTIONS(531),
    [sym_keyword] = ACTIONS(529),
    [anon_sym_POUND_AMP] = ACTIONS(529),
    [anon_sym_LPAREN] = ACTIONS(529),
    [anon_sym_RPAREN] = ACTIONS(529),
    [anon_sym_LBRACK] = ACTIONS(529),
    [anon_sym_RBRACK] = ACTIONS(529),
    [anon_sym_LBRACE] = ACTIONS(529),
    [anon_sym_RBRACE] = ACTIONS(529),
    [anon_sym_POUNDfl] = ACTIONS(529),
    [anon_sym_POUNDfx] = ACTIONS(529),
    [anon_sym_POUNDs] = ACTIONS(529),
    [anon_sym_POUNDhash] = ACTIONS(531),
    [anon_sym_POUNDhasheq] = ACTIONS(531),
    [anon_sym_POUNDhasheqv] = ACTIONS(529),
    [anon_sym_SQUOTE] = ACTIONS(529),
    [anon_sym_BQUOTE] = ACTIONS(529),
    [anon_sym_COMMA] = ACTIONS(531),
    [anon_sym_COMMA_AT] = ACTIONS(529),
    [anon_sym_POUND_SQUOTE] = ACTIONS(529),
    [anon_sym_POUND_BQUOTE] = ACTIONS(529),
    [anon_sym_POUND_COMMA] = ACTIONS(531),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(529),
    [anon_sym_POUNDreader] = ACTIONS(529),
    [anon_sym_POUNDlang] = ACTIONS(529),
    [anon_sym_POUND_BANG2] = ACTIONS(531),
  },
  [64] = {
    [aux_sym__token_token1] = ACTIONS(533),
    [sym_dot] = ACTIONS(535),
    [aux_sym_comment_token1] = ACTIONS(533),
    [anon_sym_POUND_SEMI] = ACTIONS(533),
    [aux_sym_comment_token2] = ACTIONS(533),
    [anon_sym_POUND_BANG] = ACTIONS(533),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(533),
    [anon_sym_POUND_PIPE] = ACTIONS(533),
    [sym_boolean] = ACTIONS(535),
    [anon_sym_POUND] = ACTIONS(535),
    [anon_sym_POUND_LT_LT] = ACTIONS(533),
    [aux_sym_regex_token1] = ACTIONS(533),
    [anon_sym_DQUOTE] = ACTIONS(533),
    [sym_number] = ACTIONS(535),
    [sym_character] = ACTIONS(533),
    [aux_sym_symbol_token1] = ACTIONS(535),
    [sym_keyword] = ACTIONS(533),
    [anon_sym_POUND_AMP] = ACTIONS(533),
    [anon_sym_LPAREN] = ACTIONS(533),
    [anon_sym_RPAREN] = ACTIONS(533),
    [anon_sym_LBRACK] = ACTIONS(533),
    [anon_sym_RBRACK] = ACTIONS(533),
    [anon_sym_LBRACE] = ACTIONS(533),
    [anon_sym_RBRACE] = ACTIONS(533),
    [anon_sym_POUNDfl] = ACTIONS(533),
    [anon_sym_POUNDfx] = ACTIONS(533),
    [anon_sym_POUNDs] = ACTIONS(533),
    [anon_sym_POUNDhash] = ACTIONS(535),
    [anon_sym_POUNDhasheq] = ACTIONS(535),
    [anon_sym_POUNDhasheqv] = ACTIONS(533),
    [anon_sym_SQUOTE] = ACTIONS(533),
    [anon_sym_BQUOTE] = ACTIONS(533),
    [anon_sym_COMMA] = ACTIONS(535),
    [anon_sym_COMMA_AT] = ACTIONS(533),
    [anon_sym_POUND_SQUOTE] = ACTIONS(533),
    [anon_sym_POUND_BQUOTE] = ACTIONS(533),
    [anon_sym_POUND_COMMA] = ACTIONS(535),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(533),
    [anon_sym_POUNDreader] = ACTIONS(533),
    [anon_sym_POUNDlang] = ACTIONS(533),
    [anon_sym_POUND_BANG2] = ACTIONS(535),
  },
  [65] = {
    [aux_sym__token_token1] = ACTIONS(537),
    [sym_dot] = ACTIONS(539),
    [aux_sym_comment_token1] = ACTIONS(537),
    [anon_sym_POUND_SEMI] = ACTIONS(537),
    [aux_sym_comment_token2] = ACTIONS(537),
    [anon_sym_POUND_BANG] = ACTIONS(537),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(537),
    [anon_sym_POUND_PIPE] = ACTIONS(537),
    [sym_boolean] = ACTIONS(539),
    [anon_sym_POUND] = ACTIONS(539),
    [anon_sym_POUND_LT_LT] = ACTIONS(537),
    [aux_sym_regex_token1] = ACTIONS(537),
    [anon_sym_DQUOTE] = ACTIONS(537),
    [sym_number] = ACTIONS(539),
    [sym_character] = ACTIONS(537),
    [aux_sym_symbol_token1] = ACTIONS(539),
    [sym_keyword] = ACTIONS(537),
    [anon_sym_POUND_AMP] = ACTIONS(537),
    [anon_sym_LPAREN] = ACTIONS(537),
    [anon_sym_RPAREN] = ACTIONS(537),
    [anon_sym_LBRACK] = ACTIONS(537),
    [anon_sym_RBRACK] = ACTIONS(537),
    [anon_sym_LBRACE] = ACTIONS(537),
    [anon_sym_RBRACE] = ACTIONS(537),
    [anon_sym_POUNDfl] = ACTIONS(537),
    [anon_sym_POUNDfx] = ACTIONS(537),
    [anon_sym_POUNDs] = ACTIONS(537),
    [anon_sym_POUNDhash] = ACTIONS(539),
    [anon_sym_POUNDhasheq] = ACTIONS(539),
    [anon_sym_POUNDhasheqv] = ACTIONS(537),
    [anon_sym_SQUOTE] = ACTIONS(537),
    [anon_sym_BQUOTE] = ACTIONS(537),
    [anon_sym_COMMA] = ACTIONS(539),
    [anon_sym_COMMA_AT] = ACTIONS(537),
    [anon_sym_POUND_SQUOTE] = ACTIONS(537),
    [anon_sym_POUND_BQUOTE] = ACTIONS(537),
    [anon_sym_POUND_COMMA] = ACTIONS(539),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(537),
    [anon_sym_POUNDreader] = ACTIONS(537),
    [anon_sym_POUNDlang] = ACTIONS(537),
    [anon_sym_POUND_BANG2] = ACTIONS(539),
  },
  [66] = {
    [aux_sym__token_token1] = ACTIONS(541),
    [sym_dot] = ACTIONS(543),
    [aux_sym_comment_token1] = ACTIONS(541),
    [anon_sym_POUND_SEMI] = ACTIONS(541),
    [aux_sym_comment_token2] = ACTIONS(541),
    [anon_sym_POUND_BANG] = ACTIONS(541),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(541),
    [anon_sym_POUND_PIPE] = ACTIONS(541),
    [sym_boolean] = ACTIONS(543),
    [anon_sym_POUND] = ACTIONS(543),
    [anon_sym_POUND_LT_LT] = ACTIONS(541),
    [aux_sym_regex_token1] = ACTIONS(541),
    [anon_sym_DQUOTE] = ACTIONS(541),
    [sym_number] = ACTIONS(543),
    [sym_character] = ACTIONS(541),
    [aux_sym_symbol_token1] = ACTIONS(543),
    [sym_keyword] = ACTIONS(541),
    [anon_sym_POUND_AMP] = ACTIONS(541),
    [anon_sym_LPAREN] = ACTIONS(541),
    [anon_sym_RPAREN] = ACTIONS(541),
    [anon_sym_LBRACK] = ACTIONS(541),
    [anon_sym_RBRACK] = ACTIONS(541),
    [anon_sym_LBRACE] = ACTIONS(541),
    [anon_sym_RBRACE] = ACTIONS(541),
    [anon_sym_POUNDfl] = ACTIONS(541),
    [anon_sym_POUNDfx] = ACTIONS(541),
    [anon_sym_POUNDs] = ACTIONS(541),
    [anon_sym_POUNDhash] = ACTIONS(543),
    [anon_sym_POUNDhasheq] = ACTIONS(543),
    [anon_sym_POUNDhasheqv] = ACTIONS(541),
    [anon_sym_SQUOTE] = ACTIONS(541),
    [anon_sym_BQUOTE] = ACTIONS(541),
    [anon_sym_COMMA] = ACTIONS(543),
    [anon_sym_COMMA_AT] = ACTIONS(541),
    [anon_sym_POUND_SQUOTE] = ACTIONS(541),
    [anon_sym_POUND_BQUOTE] = ACTIONS(541),
    [anon_sym_POUND_COMMA] = ACTIONS(543),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(541),
    [anon_sym_POUNDreader] = ACTIONS(541),
    [anon_sym_POUNDlang] = ACTIONS(541),
    [anon_sym_POUND_BANG2] = ACTIONS(543),
  },
  [67] = {
    [aux_sym__token_token1] = ACTIONS(545),
    [sym_dot] = ACTIONS(547),
    [aux_sym_comment_token1] = ACTIONS(545),
    [anon_sym_POUND_SEMI] = ACTIONS(545),
    [aux_sym_comment_token2] = ACTIONS(545),
    [anon_sym_POUND_BANG] = ACTIONS(545),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(545),
    [anon_sym_POUND_PIPE] = ACTIONS(545),
    [sym_boolean] = ACTIONS(547),
    [anon_sym_POUND] = ACTIONS(547),
    [anon_sym_POUND_LT_LT] = ACTIONS(545),
    [aux_sym_regex_token1] = ACTIONS(545),
    [anon_sym_DQUOTE] = ACTIONS(545),
    [sym_number] = ACTIONS(547),
    [sym_character] = ACTIONS(545),
    [aux_sym_symbol_token1] = ACTIONS(547),
    [sym_keyword] = ACTIONS(545),
    [anon_sym_POUND_AMP] = ACTIONS(545),
    [anon_sym_LPAREN] = ACTIONS(545),
    [anon_sym_RPAREN] = ACTIONS(545),
    [anon_sym_LBRACK] = ACTIONS(545),
    [anon_sym_RBRACK] = ACTIONS(545),
    [anon_sym_LBRACE] = ACTIONS(545),
    [anon_sym_RBRACE] = ACTIONS(545),
    [anon_sym_POUNDfl] = ACTIONS(545),
    [anon_sym_POUNDfx] = ACTIONS(545),
    [anon_sym_POUNDs] = ACTIONS(545),
    [anon_sym_POUNDhash] = ACTIONS(547),
    [anon_sym_POUNDhasheq] = ACTIONS(547),
    [anon_sym_POUNDhasheqv] = ACTIONS(545),
    [anon_sym_SQUOTE] = ACTIONS(545),
    [anon_sym_BQUOTE] = ACTIONS(545),
    [anon_sym_COMMA] = ACTIONS(547),
    [anon_sym_COMMA_AT] = ACTIONS(545),
    [anon_sym_POUND_SQUOTE] = ACTIONS(545),
    [anon_sym_POUND_BQUOTE] = ACTIONS(545),
    [anon_sym_POUND_COMMA] = ACTIONS(547),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(545),
    [anon_sym_POUNDreader] = ACTIONS(545),
    [anon_sym_POUNDlang] = ACTIONS(545),
    [anon_sym_POUND_BANG2] = ACTIONS(547),
  },
  [68] = {
    [aux_sym__token_token1] = ACTIONS(549),
    [sym_dot] = ACTIONS(551),
    [aux_sym_comment_token1] = ACTIONS(549),
    [anon_sym_POUND_SEMI] = ACTIONS(549),
    [aux_sym_comment_token2] = ACTIONS(549),
    [anon_sym_POUND_BANG] = ACTIONS(549),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(549),
    [anon_sym_POUND_PIPE] = ACTIONS(549),
    [sym_boolean] = ACTIONS(551),
    [anon_sym_POUND] = ACTIONS(551),
    [anon_sym_POUND_LT_LT] = ACTIONS(549),
    [aux_sym_regex_token1] = ACTIONS(549),
    [anon_sym_DQUOTE] = ACTIONS(549),
    [sym_number] = ACTIONS(551),
    [sym_character] = ACTIONS(549),
    [aux_sym_symbol_token1] = ACTIONS(551),
    [sym_keyword] = ACTIONS(549),
    [anon_sym_POUND_AMP] = ACTIONS(549),
    [anon_sym_LPAREN] = ACTIONS(549),
    [anon_sym_RPAREN] = ACTIONS(549),
    [anon_sym_LBRACK] = ACTIONS(549),
    [anon_sym_RBRACK] = ACTIONS(549),
    [anon_sym_LBRACE] = ACTIONS(549),
    [anon_sym_RBRACE] = ACTIONS(549),
    [anon_sym_POUNDfl] = ACTIONS(549),
    [anon_sym_POUNDfx] = ACTIONS(549),
    [anon_sym_POUNDs] = ACTIONS(549),
    [anon_sym_POUNDhash] = ACTIONS(551),
    [anon_sym_POUNDhasheq] = ACTIONS(551),
    [anon_sym_POUNDhasheqv] = ACTIONS(549),
    [anon_sym_SQUOTE] = ACTIONS(549),
    [anon_sym_BQUOTE] = ACTIONS(549),
    [anon_sym_COMMA] = ACTIONS(551),
    [anon_sym_COMMA_AT] = ACTIONS(549),
    [anon_sym_POUND_SQUOTE] = ACTIONS(549),
    [anon_sym_POUND_BQUOTE] = ACTIONS(549),
    [anon_sym_POUND_COMMA] = ACTIONS(551),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(549),
    [anon_sym_POUNDreader] = ACTIONS(549),
    [anon_sym_POUNDlang] = ACTIONS(549),
    [anon_sym_POUND_BANG2] = ACTIONS(551),
  },
  [69] = {
    [aux_sym__token_token1] = ACTIONS(553),
    [sym_dot] = ACTIONS(555),
    [aux_sym_comment_token1] = ACTIONS(553),
    [anon_sym_POUND_SEMI] = ACTIONS(553),
    [aux_sym_comment_token2] = ACTIONS(553),
    [anon_sym_POUND_BANG] = ACTIONS(553),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(553),
    [anon_sym_POUND_PIPE] = ACTIONS(553),
    [sym_boolean] = ACTIONS(555),
    [anon_sym_POUND] = ACTIONS(555),
    [anon_sym_POUND_LT_LT] = ACTIONS(553),
    [aux_sym_regex_token1] = ACTIONS(553),
    [anon_sym_DQUOTE] = ACTIONS(553),
    [sym_number] = ACTIONS(555),
    [sym_character] = ACTIONS(553),
    [aux_sym_symbol_token1] = ACTIONS(555),
    [sym_keyword] = ACTIONS(553),
    [anon_sym_POUND_AMP] = ACTIONS(553),
    [anon_sym_LPAREN] = ACTIONS(553),
    [anon_sym_RPAREN] = ACTIONS(553),
    [anon_sym_LBRACK] = ACTIONS(553),
    [anon_sym_RBRACK] = ACTIONS(553),
    [anon_sym_LBRACE] = ACTIONS(553),
    [anon_sym_RBRACE] = ACTIONS(553),
    [anon_sym_POUNDfl] = ACTIONS(553),
    [anon_sym_POUNDfx] = ACTIONS(553),
    [anon_sym_POUNDs] = ACTIONS(553),
    [anon_sym_POUNDhash] = ACTIONS(555),
    [anon_sym_POUNDhasheq] = ACTIONS(555),
    [anon_sym_POUNDhasheqv] = ACTIONS(553),
    [anon_sym_SQUOTE] = ACTIONS(553),
    [anon_sym_BQUOTE] = ACTIONS(553),
    [anon_sym_COMMA] = ACTIONS(555),
    [anon_sym_COMMA_AT] = ACTIONS(553),
    [anon_sym_POUND_SQUOTE] = ACTIONS(553),
    [anon_sym_POUND_BQUOTE] = ACTIONS(553),
    [anon_sym_POUND_COMMA] = ACTIONS(555),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(553),
    [anon_sym_POUNDreader] = ACTIONS(553),
    [anon_sym_POUNDlang] = ACTIONS(553),
    [anon_sym_POUND_BANG2] = ACTIONS(555),
  },
  [70] = {
    [aux_sym__token_token1] = ACTIONS(557),
    [sym_dot] = ACTIONS(559),
    [aux_sym_comment_token1] = ACTIONS(557),
    [anon_sym_POUND_SEMI] = ACTIONS(557),
    [aux_sym_comment_token2] = ACTIONS(557),
    [anon_sym_POUND_BANG] = ACTIONS(557),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(557),
    [anon_sym_POUND_PIPE] = ACTIONS(557),
    [sym_boolean] = ACTIONS(559),
    [anon_sym_POUND] = ACTIONS(559),
    [anon_sym_POUND_LT_LT] = ACTIONS(557),
    [aux_sym_regex_token1] = ACTIONS(557),
    [anon_sym_DQUOTE] = ACTIONS(557),
    [sym_number] = ACTIONS(559),
    [sym_character] = ACTIONS(557),
    [aux_sym_symbol_token1] = ACTIONS(559),
    [sym_keyword] = ACTIONS(557),
    [anon_sym_POUND_AMP] = ACTIONS(557),
    [anon_sym_LPAREN] = ACTIONS(557),
    [anon_sym_RPAREN] = ACTIONS(557),
    [anon_sym_LBRACK] = ACTIONS(557),
    [anon_sym_RBRACK] = ACTIONS(557),
    [anon_sym_LBRACE] = ACTIONS(557),
    [anon_sym_RBRACE] = ACTIONS(557),
    [anon_sym_POUNDfl] = ACTIONS(557),
    [anon_sym_POUNDfx] = ACTIONS(557),
    [anon_sym_POUNDs] = ACTIONS(557),
    [anon_sym_POUNDhash] = ACTIONS(559),
    [anon_sym_POUNDhasheq] = ACTIONS(559),
    [anon_sym_POUNDhasheqv] = ACTIONS(557),
    [anon_sym_SQUOTE] = ACTIONS(557),
    [anon_sym_BQUOTE] = ACTIONS(557),
    [anon_sym_COMMA] = ACTIONS(559),
    [anon_sym_COMMA_AT] = ACTIONS(557),
    [anon_sym_POUND_SQUOTE] = ACTIONS(557),
    [anon_sym_POUND_BQUOTE] = ACTIONS(557),
    [anon_sym_POUND_COMMA] = ACTIONS(559),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(557),
    [anon_sym_POUNDreader] = ACTIONS(557),
    [anon_sym_POUNDlang] = ACTIONS(557),
    [anon_sym_POUND_BANG2] = ACTIONS(559),
  },
  [71] = {
    [aux_sym__token_token1] = ACTIONS(561),
    [sym_dot] = ACTIONS(563),
    [aux_sym_comment_token1] = ACTIONS(561),
    [anon_sym_POUND_SEMI] = ACTIONS(561),
    [aux_sym_comment_token2] = ACTIONS(561),
    [anon_sym_POUND_BANG] = ACTIONS(561),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(561),
    [anon_sym_POUND_PIPE] = ACTIONS(561),
    [sym_boolean] = ACTIONS(563),
    [anon_sym_POUND] = ACTIONS(563),
    [anon_sym_POUND_LT_LT] = ACTIONS(561),
    [aux_sym_regex_token1] = ACTIONS(561),
    [anon_sym_DQUOTE] = ACTIONS(561),
    [sym_number] = ACTIONS(563),
    [sym_character] = ACTIONS(561),
    [aux_sym_symbol_token1] = ACTIONS(563),
    [sym_keyword] = ACTIONS(561),
    [anon_sym_POUND_AMP] = ACTIONS(561),
    [anon_sym_LPAREN] = ACTIONS(561),
    [anon_sym_RPAREN] = ACTIONS(561),
    [anon_sym_LBRACK] = ACTIONS(561),
    [anon_sym_RBRACK] = ACTIONS(561),
    [anon_sym_LBRACE] = ACTIONS(561),
    [anon_sym_RBRACE] = ACTIONS(561),
    [anon_sym_POUNDfl] = ACTIONS(561),
    [anon_sym_POUNDfx] = ACTIONS(561),
    [anon_sym_POUNDs] = ACTIONS(561),
    [anon_sym_POUNDhash] = ACTIONS(563),
    [anon_sym_POUNDhasheq] = ACTIONS(563),
    [anon_sym_POUNDhasheqv] = ACTIONS(561),
    [anon_sym_SQUOTE] = ACTIONS(561),
    [anon_sym_BQUOTE] = ACTIONS(561),
    [anon_sym_COMMA] = ACTIONS(563),
    [anon_sym_COMMA_AT] = ACTIONS(561),
    [anon_sym_POUND_SQUOTE] = ACTIONS(561),
    [anon_sym_POUND_BQUOTE] = ACTIONS(561),
    [anon_sym_POUND_COMMA] = ACTIONS(563),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(561),
    [anon_sym_POUNDreader] = ACTIONS(561),
    [anon_sym_POUNDlang] = ACTIONS(561),
    [anon_sym_POUND_BANG2] = ACTIONS(563),
  },
  [72] = {
    [aux_sym__token_token1] = ACTIONS(565),
    [sym_dot] = ACTIONS(567),
    [aux_sym_comment_token1] = ACTIONS(565),
    [anon_sym_POUND_SEMI] = ACTIONS(565),
    [aux_sym_comment_token2] = ACTIONS(565),
    [anon_sym_POUND_BANG] = ACTIONS(565),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(565),
    [anon_sym_POUND_PIPE] = ACTIONS(565),
    [sym_boolean] = ACTIONS(567),
    [anon_sym_POUND] = ACTIONS(567),
    [anon_sym_POUND_LT_LT] = ACTIONS(565),
    [aux_sym_regex_token1] = ACTIONS(565),
    [anon_sym_DQUOTE] = ACTIONS(565),
    [sym_number] = ACTIONS(567),
    [sym_character] = ACTIONS(565),
    [aux_sym_symbol_token1] = ACTIONS(567),
    [sym_keyword] = ACTIONS(565),
    [anon_sym_POUND_AMP] = ACTIONS(565),
    [anon_sym_LPAREN] = ACTIONS(565),
    [anon_sym_RPAREN] = ACTIONS(565),
    [anon_sym_LBRACK] = ACTIONS(565),
    [anon_sym_RBRACK] = ACTIONS(565),
    [anon_sym_LBRACE] = ACTIONS(565),
    [anon_sym_RBRACE] = ACTIONS(565),
    [anon_sym_POUNDfl] = ACTIONS(565),
    [anon_sym_POUNDfx] = ACTIONS(565),
    [anon_sym_POUNDs] = ACTIONS(565),
    [anon_sym_POUNDhash] = ACTIONS(567),
    [anon_sym_POUNDhasheq] = ACTIONS(567),
    [anon_sym_POUNDhasheqv] = ACTIONS(565),
    [anon_sym_SQUOTE] = ACTIONS(565),
    [anon_sym_BQUOTE] = ACTIONS(565),
    [anon_sym_COMMA] = ACTIONS(567),
    [anon_sym_COMMA_AT] = ACTIONS(565),
    [anon_sym_POUND_SQUOTE] = ACTIONS(565),
    [anon_sym_POUND_BQUOTE] = ACTIONS(565),
    [anon_sym_POUND_COMMA] = ACTIONS(567),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(565),
    [anon_sym_POUNDreader] = ACTIONS(565),
    [anon_sym_POUNDlang] = ACTIONS(565),
    [anon_sym_POUND_BANG2] = ACTIONS(567),
  },
  [73] = {
    [aux_sym__token_token1] = ACTIONS(569),
    [sym_dot] = ACTIONS(571),
    [aux_sym_comment_token1] = ACTIONS(569),
    [anon_sym_POUND_SEMI] = ACTIONS(569),
    [aux_sym_comment_token2] = ACTIONS(569),
    [anon_sym_POUND_BANG] = ACTIONS(569),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(569),
    [anon_sym_POUND_PIPE] = ACTIONS(569),
    [sym_boolean] = ACTIONS(571),
    [anon_sym_POUND] = ACTIONS(571),
    [anon_sym_POUND_LT_LT] = ACTIONS(569),
    [aux_sym_regex_token1] = ACTIONS(569),
    [anon_sym_DQUOTE] = ACTIONS(569),
    [sym_number] = ACTIONS(571),
    [sym_character] = ACTIONS(569),
    [aux_sym_symbol_token1] = ACTIONS(571),
    [sym_keyword] = ACTIONS(569),
    [anon_sym_POUND_AMP] = ACTIONS(569),
    [anon_sym_LPAREN] = ACTIONS(569),
    [anon_sym_RPAREN] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(569),
    [anon_sym_RBRACK] = ACTIONS(569),
    [anon_sym_LBRACE] = ACTIONS(569),
    [anon_sym_RBRACE] = ACTIONS(569),
    [anon_sym_POUNDfl] = ACTIONS(569),
    [anon_sym_POUNDfx] = ACTIONS(569),
    [anon_sym_POUNDs] = ACTIONS(569),
    [anon_sym_POUNDhash] = ACTIONS(571),
    [anon_sym_POUNDhasheq] = ACTIONS(571),
    [anon_sym_POUNDhasheqv] = ACTIONS(569),
    [anon_sym_SQUOTE] = ACTIONS(569),
    [anon_sym_BQUOTE] = ACTIONS(569),
    [anon_sym_COMMA] = ACTIONS(571),
    [anon_sym_COMMA_AT] = ACTIONS(569),
    [anon_sym_POUND_SQUOTE] = ACTIONS(569),
    [anon_sym_POUND_BQUOTE] = ACTIONS(569),
    [anon_sym_POUND_COMMA] = ACTIONS(571),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(569),
    [anon_sym_POUNDreader] = ACTIONS(569),
    [anon_sym_POUNDlang] = ACTIONS(569),
    [anon_sym_POUND_BANG2] = ACTIONS(571),
  },
  [74] = {
    [aux_sym__token_token1] = ACTIONS(573),
    [sym_dot] = ACTIONS(575),
    [aux_sym_comment_token1] = ACTIONS(573),
    [anon_sym_POUND_SEMI] = ACTIONS(573),
    [aux_sym_comment_token2] = ACTIONS(573),
    [anon_sym_POUND_BANG] = ACTIONS(573),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(573),
    [anon_sym_POUND_PIPE] = ACTIONS(573),
    [sym_boolean] = ACTIONS(575),
    [anon_sym_POUND] = ACTIONS(575),
    [anon_sym_POUND_LT_LT] = ACTIONS(573),
    [aux_sym_regex_token1] = ACTIONS(573),
    [anon_sym_DQUOTE] = ACTIONS(573),
    [sym_number] = ACTIONS(575),
    [sym_character] = ACTIONS(573),
    [aux_sym_symbol_token1] = ACTIONS(575),
    [sym_keyword] = ACTIONS(573),
    [anon_sym_POUND_AMP] = ACTIONS(573),
    [anon_sym_LPAREN] = ACTIONS(573),
    [anon_sym_RPAREN] = ACTIONS(573),
    [anon_sym_LBRACK] = ACTIONS(573),
    [anon_sym_RBRACK] = ACTIONS(573),
    [anon_sym_LBRACE] = ACTIONS(573),
    [anon_sym_RBRACE] = ACTIONS(573),
    [anon_sym_POUNDfl] = ACTIONS(573),
    [anon_sym_POUNDfx] = ACTIONS(573),
    [anon_sym_POUNDs] = ACTIONS(573),
    [anon_sym_POUNDhash] = ACTIONS(575),
    [anon_sym_POUNDhasheq] = ACTIONS(575),
    [anon_sym_POUNDhasheqv] = ACTIONS(573),
    [anon_sym_SQUOTE] = ACTIONS(573),
    [anon_sym_BQUOTE] = ACTIONS(573),
    [anon_sym_COMMA] = ACTIONS(575),
    [anon_sym_COMMA_AT] = ACTIONS(573),
    [anon_sym_POUND_SQUOTE] = ACTIONS(573),
    [anon_sym_POUND_BQUOTE] = ACTIONS(573),
    [anon_sym_POUND_COMMA] = ACTIONS(575),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(573),
    [anon_sym_POUNDreader] = ACTIONS(573),
    [anon_sym_POUNDlang] = ACTIONS(573),
    [anon_sym_POUND_BANG2] = ACTIONS(575),
  },
  [75] = {
    [aux_sym__token_token1] = ACTIONS(577),
    [sym_dot] = ACTIONS(579),
    [aux_sym_comment_token1] = ACTIONS(577),
    [anon_sym_POUND_SEMI] = ACTIONS(577),
    [aux_sym_comment_token2] = ACTIONS(577),
    [anon_sym_POUND_BANG] = ACTIONS(577),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(577),
    [anon_sym_POUND_PIPE] = ACTIONS(577),
    [sym_boolean] = ACTIONS(579),
    [anon_sym_POUND] = ACTIONS(579),
    [anon_sym_POUND_LT_LT] = ACTIONS(577),
    [aux_sym_regex_token1] = ACTIONS(577),
    [anon_sym_DQUOTE] = ACTIONS(577),
    [sym_number] = ACTIONS(579),
    [sym_character] = ACTIONS(577),
    [aux_sym_symbol_token1] = ACTIONS(579),
    [sym_keyword] = ACTIONS(577),
    [anon_sym_POUND_AMP] = ACTIONS(577),
    [anon_sym_LPAREN] = ACTIONS(577),
    [anon_sym_RPAREN] = ACTIONS(577),
    [anon_sym_LBRACK] = ACTIONS(577),
    [anon_sym_RBRACK] = ACTIONS(577),
    [anon_sym_LBRACE] = ACTIONS(577),
    [anon_sym_RBRACE] = ACTIONS(577),
    [anon_sym_POUNDfl] = ACTIONS(577),
    [anon_sym_POUNDfx] = ACTIONS(577),
    [anon_sym_POUNDs] = ACTIONS(577),
    [anon_sym_POUNDhash] = ACTIONS(579),
    [anon_sym_POUNDhasheq] = ACTIONS(579),
    [anon_sym_POUNDhasheqv] = ACTIONS(577),
    [anon_sym_SQUOTE] = ACTIONS(577),
    [anon_sym_BQUOTE] = ACTIONS(577),
    [anon_sym_COMMA] = ACTIONS(579),
    [anon_sym_COMMA_AT] = ACTIONS(577),
    [anon_sym_POUND_SQUOTE] = ACTIONS(577),
    [anon_sym_POUND_BQUOTE] = ACTIONS(577),
    [anon_sym_POUND_COMMA] = ACTIONS(579),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(577),
    [anon_sym_POUNDreader] = ACTIONS(577),
    [anon_sym_POUNDlang] = ACTIONS(577),
    [anon_sym_POUND_BANG2] = ACTIONS(579),
  },
  [76] = {
    [aux_sym__token_token1] = ACTIONS(489),
    [sym_dot] = ACTIONS(491),
    [aux_sym_comment_token1] = ACTIONS(489),
    [anon_sym_POUND_SEMI] = ACTIONS(489),
    [aux_sym_comment_token2] = ACTIONS(489),
    [anon_sym_POUND_BANG] = ACTIONS(489),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(489),
    [anon_sym_POUND_PIPE] = ACTIONS(489),
    [sym_boolean] = ACTIONS(491),
    [anon_sym_POUND] = ACTIONS(491),
    [anon_sym_POUND_LT_LT] = ACTIONS(489),
    [aux_sym_regex_token1] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(489),
    [sym_number] = ACTIONS(491),
    [sym_character] = ACTIONS(489),
    [aux_sym_symbol_token1] = ACTIONS(491),
    [sym_keyword] = ACTIONS(489),
    [anon_sym_POUND_AMP] = ACTIONS(489),
    [anon_sym_LPAREN] = ACTIONS(489),
    [anon_sym_RPAREN] = ACTIONS(489),
    [anon_sym_LBRACK] = ACTIONS(489),
    [anon_sym_RBRACK] = ACTIONS(489),
    [anon_sym_LBRACE] = ACTIONS(489),
    [anon_sym_RBRACE] = ACTIONS(489),
    [anon_sym_POUNDfl] = ACTIONS(489),
    [anon_sym_POUNDfx] = ACTIONS(489),
    [anon_sym_POUNDs] = ACTIONS(489),
    [anon_sym_POUNDhash] = ACTIONS(491),
    [anon_sym_POUNDhasheq] = ACTIONS(491),
    [anon_sym_POUNDhasheqv] = ACTIONS(489),
    [anon_sym_SQUOTE] = ACTIONS(489),
    [anon_sym_BQUOTE] = ACTIONS(489),
    [anon_sym_COMMA] = ACTIONS(491),
    [anon_sym_COMMA_AT] = ACTIONS(489),
    [anon_sym_POUND_SQUOTE] = ACTIONS(489),
    [anon_sym_POUND_BQUOTE] = ACTIONS(489),
    [anon_sym_POUND_COMMA] = ACTIONS(491),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(489),
    [anon_sym_POUNDreader] = ACTIONS(489),
    [anon_sym_POUNDlang] = ACTIONS(489),
    [anon_sym_POUND_BANG2] = ACTIONS(491),
  },
  [77] = {
    [aux_sym__token_token1] = ACTIONS(581),
    [sym_dot] = ACTIONS(583),
    [aux_sym_comment_token1] = ACTIONS(581),
    [anon_sym_POUND_SEMI] = ACTIONS(581),
    [aux_sym_comment_token2] = ACTIONS(581),
    [anon_sym_POUND_BANG] = ACTIONS(581),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(581),
    [anon_sym_POUND_PIPE] = ACTIONS(581),
    [sym_boolean] = ACTIONS(583),
    [anon_sym_POUND] = ACTIONS(583),
    [anon_sym_POUND_LT_LT] = ACTIONS(581),
    [aux_sym_regex_token1] = ACTIONS(581),
    [anon_sym_DQUOTE] = ACTIONS(581),
    [sym_number] = ACTIONS(583),
    [sym_character] = ACTIONS(581),
    [aux_sym_symbol_token1] = ACTIONS(583),
    [sym_keyword] = ACTIONS(581),
    [anon_sym_POUND_AMP] = ACTIONS(581),
    [anon_sym_LPAREN] = ACTIONS(581),
    [anon_sym_RPAREN] = ACTIONS(581),
    [anon_sym_LBRACK] = ACTIONS(581),
    [anon_sym_RBRACK] = ACTIONS(581),
    [anon_sym_LBRACE] = ACTIONS(581),
    [anon_sym_RBRACE] = ACTIONS(581),
    [anon_sym_POUNDfl] = ACTIONS(581),
    [anon_sym_POUNDfx] = ACTIONS(581),
    [anon_sym_POUNDs] = ACTIONS(581),
    [anon_sym_POUNDhash] = ACTIONS(583),
    [anon_sym_POUNDhasheq] = ACTIONS(583),
    [anon_sym_POUNDhasheqv] = ACTIONS(581),
    [anon_sym_SQUOTE] = ACTIONS(581),
    [anon_sym_BQUOTE] = ACTIONS(581),
    [anon_sym_COMMA] = ACTIONS(583),
    [anon_sym_COMMA_AT] = ACTIONS(581),
    [anon_sym_POUND_SQUOTE] = ACTIONS(581),
    [anon_sym_POUND_BQUOTE] = ACTIONS(581),
    [anon_sym_POUND_COMMA] = ACTIONS(583),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(581),
    [anon_sym_POUNDreader] = ACTIONS(581),
    [anon_sym_POUNDlang] = ACTIONS(581),
    [anon_sym_POUND_BANG2] = ACTIONS(583),
  },
  [78] = {
    [aux_sym__token_token1] = ACTIONS(585),
    [sym_dot] = ACTIONS(587),
    [aux_sym_comment_token1] = ACTIONS(585),
    [anon_sym_POUND_SEMI] = ACTIONS(585),
    [aux_sym_comment_token2] = ACTIONS(585),
    [anon_sym_POUND_BANG] = ACTIONS(585),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(585),
    [anon_sym_POUND_PIPE] = ACTIONS(585),
    [sym_boolean] = ACTIONS(587),
    [anon_sym_POUND] = ACTIONS(587),
    [anon_sym_POUND_LT_LT] = ACTIONS(585),
    [aux_sym_regex_token1] = ACTIONS(585),
    [anon_sym_DQUOTE] = ACTIONS(585),
    [sym_number] = ACTIONS(587),
    [sym_character] = ACTIONS(585),
    [aux_sym_symbol_token1] = ACTIONS(587),
    [sym_keyword] = ACTIONS(585),
    [anon_sym_POUND_AMP] = ACTIONS(585),
    [anon_sym_LPAREN] = ACTIONS(585),
    [anon_sym_RPAREN] = ACTIONS(585),
    [anon_sym_LBRACK] = ACTIONS(585),
    [anon_sym_RBRACK] = ACTIONS(585),
    [anon_sym_LBRACE] = ACTIONS(585),
    [anon_sym_RBRACE] = ACTIONS(585),
    [anon_sym_POUNDfl] = ACTIONS(585),
    [anon_sym_POUNDfx] = ACTIONS(585),
    [anon_sym_POUNDs] = ACTIONS(585),
    [anon_sym_POUNDhash] = ACTIONS(587),
    [anon_sym_POUNDhasheq] = ACTIONS(587),
    [anon_sym_POUNDhasheqv] = ACTIONS(585),
    [anon_sym_SQUOTE] = ACTIONS(585),
    [anon_sym_BQUOTE] = ACTIONS(585),
    [anon_sym_COMMA] = ACTIONS(587),
    [anon_sym_COMMA_AT] = ACTIONS(585),
    [anon_sym_POUND_SQUOTE] = ACTIONS(585),
    [anon_sym_POUND_BQUOTE] = ACTIONS(585),
    [anon_sym_POUND_COMMA] = ACTIONS(587),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(585),
    [anon_sym_POUNDreader] = ACTIONS(585),
    [anon_sym_POUNDlang] = ACTIONS(585),
    [anon_sym_POUND_BANG2] = ACTIONS(587),
  },
  [79] = {
    [aux_sym__token_token1] = ACTIONS(589),
    [sym_dot] = ACTIONS(591),
    [aux_sym_comment_token1] = ACTIONS(589),
    [anon_sym_POUND_SEMI] = ACTIONS(589),
    [aux_sym_comment_token2] = ACTIONS(589),
    [anon_sym_POUND_BANG] = ACTIONS(589),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(589),
    [anon_sym_POUND_PIPE] = ACTIONS(589),
    [sym_boolean] = ACTIONS(591),
    [anon_sym_POUND] = ACTIONS(591),
    [anon_sym_POUND_LT_LT] = ACTIONS(589),
    [aux_sym_regex_token1] = ACTIONS(589),
    [anon_sym_DQUOTE] = ACTIONS(589),
    [sym_number] = ACTIONS(591),
    [sym_character] = ACTIONS(589),
    [aux_sym_symbol_token1] = ACTIONS(591),
    [sym_keyword] = ACTIONS(589),
    [anon_sym_POUND_AMP] = ACTIONS(589),
    [anon_sym_LPAREN] = ACTIONS(589),
    [anon_sym_RPAREN] = ACTIONS(589),
    [anon_sym_LBRACK] = ACTIONS(589),
    [anon_sym_RBRACK] = ACTIONS(589),
    [anon_sym_LBRACE] = ACTIONS(589),
    [anon_sym_RBRACE] = ACTIONS(589),
    [anon_sym_POUNDfl] = ACTIONS(589),
    [anon_sym_POUNDfx] = ACTIONS(589),
    [anon_sym_POUNDs] = ACTIONS(589),
    [anon_sym_POUNDhash] = ACTIONS(591),
    [anon_sym_POUNDhasheq] = ACTIONS(591),
    [anon_sym_POUNDhasheqv] = ACTIONS(589),
    [anon_sym_SQUOTE] = ACTIONS(589),
    [anon_sym_BQUOTE] = ACTIONS(589),
    [anon_sym_COMMA] = ACTIONS(591),
    [anon_sym_COMMA_AT] = ACTIONS(589),
    [anon_sym_POUND_SQUOTE] = ACTIONS(589),
    [anon_sym_POUND_BQUOTE] = ACTIONS(589),
    [anon_sym_POUND_COMMA] = ACTIONS(591),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(589),
    [anon_sym_POUNDreader] = ACTIONS(589),
    [anon_sym_POUNDlang] = ACTIONS(589),
    [anon_sym_POUND_BANG2] = ACTIONS(591),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(487), 1,
      anon_sym_BSLASH,
    ACTIONS(491), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(489), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [46] = 3,
    ACTIONS(487), 1,
      anon_sym_BSLASH,
    ACTIONS(485), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(483), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [92] = 2,
    ACTIONS(563), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(561), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [135] = 2,
    ACTIONS(551), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(549), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [178] = 9,
    ACTIONS(593), 1,
      aux_sym__token_token1,
    ACTIONS(599), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(605), 1,
      anon_sym_POUND_PIPE,
    STATE(136), 1,
      sym__block_comment,
    ACTIONS(596), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    ACTIONS(602), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    STATE(84), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    ACTIONS(608), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(610), 19,
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
  [235] = 2,
    ACTIONS(571), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(569), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [278] = 2,
    ACTIONS(579), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(577), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [321] = 2,
    ACTIONS(499), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(497), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [364] = 2,
    ACTIONS(485), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(483), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [407] = 2,
    ACTIONS(575), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(573), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [450] = 2,
    ACTIONS(507), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(505), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [493] = 2,
    ACTIONS(587), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(585), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [536] = 2,
    ACTIONS(555), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(553), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [579] = 2,
    ACTIONS(583), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(581), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [622] = 2,
    ACTIONS(559), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(557), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [665] = 2,
    ACTIONS(591), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(589), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [708] = 2,
    ACTIONS(511), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(509), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [751] = 2,
    ACTIONS(535), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(533), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [794] = 2,
    ACTIONS(491), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(489), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [837] = 2,
    ACTIONS(567), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(565), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [880] = 2,
    ACTIONS(519), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(517), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [923] = 2,
    ACTIONS(503), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(501), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [966] = 2,
    ACTIONS(547), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(545), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [1009] = 2,
    ACTIONS(539), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(537), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [1052] = 2,
    ACTIONS(523), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(521), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [1095] = 2,
    ACTIONS(527), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(525), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [1138] = 2,
    ACTIONS(543), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(541), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [1181] = 2,
    ACTIONS(531), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(529), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [1224] = 2,
    ACTIONS(515), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(513), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [1267] = 2,
    ACTIONS(495), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(493), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [1310] = 3,
    ACTIONS(487), 1,
      anon_sym_BSLASH,
    ACTIONS(491), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(489), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [1352] = 3,
    ACTIONS(487), 1,
      anon_sym_BSLASH,
    ACTIONS(485), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(483), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [1394] = 2,
    ACTIONS(575), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(573), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [1433] = 2,
    ACTIONS(539), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(537), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [1472] = 2,
    ACTIONS(499), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(497), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [1511] = 2,
    ACTIONS(519), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(517), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [1550] = 2,
    ACTIONS(587), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(585), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [1589] = 2,
    ACTIONS(579), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(577), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [1628] = 2,
    ACTIONS(567), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(565), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [1667] = 2,
    ACTIONS(571), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(569), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [1706] = 2,
    ACTIONS(591), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(589), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [1745] = 2,
    ACTIONS(563), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(561), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [1784] = 2,
    ACTIONS(583), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(581), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [1823] = 2,
    ACTIONS(551), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(549), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [1862] = 2,
    ACTIONS(503), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(501), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [1901] = 2,
    ACTIONS(547), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(545), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [1940] = 2,
    ACTIONS(495), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(493), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [1979] = 2,
    ACTIONS(515), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(513), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [2018] = 2,
    ACTIONS(527), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(525), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [2057] = 2,
    ACTIONS(531), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(529), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [2096] = 2,
    ACTIONS(535), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(533), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [2135] = 2,
    ACTIONS(559), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(557), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [2174] = 2,
    ACTIONS(555), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(553), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [2213] = 2,
    ACTIONS(485), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(483), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [2252] = 2,
    ACTIONS(507), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(505), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [2291] = 2,
    ACTIONS(491), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(489), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [2330] = 2,
    ACTIONS(523), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(521), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
  [2369] = 8,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(365), 1,
      anon_sym_LBRACK,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    ACTIONS(612), 1,
      aux_sym_vector_token1,
    STATE(122), 1,
      sym__real_string,
    STATE(123), 1,
      sym_list,
    STATE(141), 1,
      aux_sym_vector_repeat1,
  [2394] = 8,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(614), 1,
      anon_sym_POUND,
    ACTIONS(616), 1,
      aux_sym_vector_token1,
    ACTIONS(618), 1,
      anon_sym_EQ,
    STATE(90), 1,
      sym_list,
    STATE(143), 1,
      aux_sym_vector_repeat1,
  [2419] = 8,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(620), 1,
      aux_sym_vector_token1,
    STATE(83), 1,
      sym_list,
    STATE(93), 1,
      sym__real_string,
    STATE(138), 1,
      aux_sym_vector_repeat1,
  [2444] = 8,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      anon_sym_LBRACE,
    ACTIONS(622), 1,
      aux_sym_vector_token1,
    STATE(68), 1,
      sym_list,
    STATE(77), 1,
      sym__real_string,
    STATE(142), 1,
      aux_sym_vector_repeat1,
  [2469] = 8,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(365), 1,
      anon_sym_LBRACK,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    ACTIONS(616), 1,
      aux_sym_vector_token1,
    ACTIONS(624), 1,
      anon_sym_POUND,
    ACTIONS(626), 1,
      anon_sym_EQ,
    STATE(134), 1,
      sym_list,
    STATE(143), 1,
      aux_sym_vector_repeat1,
  [2494] = 8,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      anon_sym_LBRACE,
    ACTIONS(616), 1,
      aux_sym_vector_token1,
    ACTIONS(628), 1,
      anon_sym_POUND,
    ACTIONS(630), 1,
      anon_sym_EQ,
    STATE(57), 1,
      sym_list,
    STATE(143), 1,
      aux_sym_vector_repeat1,
  [2519] = 3,
    ACTIONS(634), 1,
      aux_sym_vector_token1,
    STATE(143), 1,
      aux_sym_vector_repeat1,
    ACTIONS(632), 5,
      anon_sym_POUND,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [2533] = 6,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(365), 1,
      anon_sym_LBRACK,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    ACTIONS(637), 1,
      aux_sym_vector_token1,
    STATE(123), 1,
      sym_list,
    STATE(147), 1,
      aux_sym_vector_repeat1,
  [2552] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(616), 1,
      aux_sym_vector_token1,
    STATE(90), 1,
      sym_list,
    STATE(143), 1,
      aux_sym_vector_repeat1,
  [2571] = 6,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      anon_sym_LBRACE,
    ACTIONS(616), 1,
      aux_sym_vector_token1,
    STATE(57), 1,
      sym_list,
    STATE(143), 1,
      aux_sym_vector_repeat1,
  [2590] = 6,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(365), 1,
      anon_sym_LBRACK,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    ACTIONS(616), 1,
      aux_sym_vector_token1,
    STATE(134), 1,
      sym_list,
    STATE(143), 1,
      aux_sym_vector_repeat1,
  [2609] = 6,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      anon_sym_LBRACE,
    ACTIONS(639), 1,
      aux_sym_vector_token1,
    STATE(68), 1,
      sym_list,
    STATE(146), 1,
      aux_sym_vector_repeat1,
  [2628] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(641), 1,
      aux_sym_vector_token1,
    STATE(83), 1,
      sym_list,
    STATE(145), 1,
      aux_sym_vector_repeat1,
  [2647] = 4,
    ACTIONS(643), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(645), 1,
      aux_sym__block_comment_token1,
    ACTIONS(647), 1,
      anon_sym_PIPE_POUND,
    STATE(157), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [2661] = 4,
    ACTIONS(643), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(649), 1,
      aux_sym__block_comment_token1,
    ACTIONS(651), 1,
      anon_sym_PIPE_POUND,
    STATE(156), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [2675] = 4,
    ACTIONS(643), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(649), 1,
      aux_sym__block_comment_token1,
    ACTIONS(653), 1,
      anon_sym_PIPE_POUND,
    STATE(156), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [2689] = 4,
    ACTIONS(643), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(655), 1,
      aux_sym__block_comment_token1,
    ACTIONS(657), 1,
      anon_sym_PIPE_POUND,
    STATE(152), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [2703] = 4,
    ACTIONS(643), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(659), 1,
      aux_sym__block_comment_token1,
    ACTIONS(661), 1,
      anon_sym_PIPE_POUND,
    STATE(151), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [2717] = 4,
    ACTIONS(643), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(649), 1,
      aux_sym__block_comment_token1,
    ACTIONS(663), 1,
      anon_sym_PIPE_POUND,
    STATE(156), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [2731] = 4,
    ACTIONS(665), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(668), 1,
      aux_sym__block_comment_token1,
    ACTIONS(671), 1,
      anon_sym_PIPE_POUND,
    STATE(156), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [2745] = 4,
    ACTIONS(643), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(649), 1,
      aux_sym__block_comment_token1,
    ACTIONS(673), 1,
      anon_sym_PIPE_POUND,
    STATE(156), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [2759] = 4,
    ACTIONS(643), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(675), 1,
      aux_sym__block_comment_token1,
    ACTIONS(677), 1,
      anon_sym_PIPE_POUND,
    STATE(155), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [2773] = 3,
    ACTIONS(679), 1,
      anon_sym_DQUOTE,
    STATE(165), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(681), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2784] = 4,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_list,
  [2797] = 4,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(365), 1,
      anon_sym_LBRACK,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym_list,
  [2810] = 3,
    ACTIONS(683), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(685), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2821] = 4,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_list,
  [2834] = 3,
    ACTIONS(687), 1,
      anon_sym_DQUOTE,
    STATE(165), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(681), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2845] = 3,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    STATE(165), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(691), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2856] = 3,
    ACTIONS(694), 1,
      anon_sym_DQUOTE,
    STATE(165), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(681), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2867] = 3,
    ACTIONS(696), 1,
      anon_sym_DQUOTE,
    STATE(166), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(698), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2878] = 4,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(107), 1,
      sym_list,
  [2891] = 4,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(365), 1,
      anon_sym_LBRACK,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    STATE(130), 1,
      sym_list,
  [2904] = 4,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym_list,
  [2917] = 3,
    ACTIONS(700), 1,
      anon_sym_DQUOTE,
    STATE(159), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(702), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2928] = 2,
    ACTIONS(587), 1,
      aux_sym__block_comment_token1,
    ACTIONS(585), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [2936] = 2,
    ACTIONS(499), 1,
      aux_sym__block_comment_token1,
    ACTIONS(497), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [2944] = 2,
    ACTIONS(704), 1,
      aux_sym_comment_token3,
    STATE(177), 1,
      aux_sym_comment_repeat2,
  [2951] = 2,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      sym__real_string,
  [2958] = 2,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      sym__real_string,
  [2965] = 2,
    ACTIONS(706), 1,
      aux_sym_comment_token3,
    STATE(178), 1,
      aux_sym_comment_repeat2,
  [2972] = 2,
    ACTIONS(708), 1,
      aux_sym_comment_token3,
    STATE(178), 1,
      aux_sym_comment_repeat2,
  [2979] = 2,
    ACTIONS(711), 1,
      aux_sym_comment_token3,
    STATE(178), 1,
      aux_sym_comment_repeat2,
  [2986] = 2,
    ACTIONS(713), 1,
      aux_sym_comment_token3,
    STATE(178), 1,
      aux_sym_comment_repeat2,
  [2993] = 2,
    ACTIONS(715), 1,
      aux_sym_comment_token3,
    STATE(179), 1,
      aux_sym_comment_repeat2,
  [3000] = 2,
    ACTIONS(717), 1,
      aux_sym_comment_token3,
    STATE(180), 1,
      aux_sym_comment_repeat2,
  [3007] = 2,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym__real_string,
  [3014] = 1,
    ACTIONS(719), 1,
      aux_sym_comment_token3,
  [3018] = 1,
    ACTIONS(721), 1,
      sym__here_string_body,
  [3022] = 1,
    ACTIONS(723), 1,
      anon_sym_BSLASH,
  [3026] = 1,
    ACTIONS(725), 1,
      aux_sym_comment_token4,
  [3030] = 1,
    ACTIONS(727), 1,
      sym__here_string_body,
  [3034] = 1,
    ACTIONS(729), 1,
      sym__here_string_body,
  [3038] = 1,
    ACTIONS(399), 1,
      aux_sym_extension_token1,
  [3042] = 1,
    ACTIONS(731), 1,
      ts_builtin_sym_end,
  [3046] = 1,
    ACTIONS(325), 1,
      aux_sym_extension_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(80)] = 0,
  [SMALL_STATE(81)] = 46,
  [SMALL_STATE(82)] = 92,
  [SMALL_STATE(83)] = 135,
  [SMALL_STATE(84)] = 178,
  [SMALL_STATE(85)] = 235,
  [SMALL_STATE(86)] = 278,
  [SMALL_STATE(87)] = 321,
  [SMALL_STATE(88)] = 364,
  [SMALL_STATE(89)] = 407,
  [SMALL_STATE(90)] = 450,
  [SMALL_STATE(91)] = 493,
  [SMALL_STATE(92)] = 536,
  [SMALL_STATE(93)] = 579,
  [SMALL_STATE(94)] = 622,
  [SMALL_STATE(95)] = 665,
  [SMALL_STATE(96)] = 708,
  [SMALL_STATE(97)] = 751,
  [SMALL_STATE(98)] = 794,
  [SMALL_STATE(99)] = 837,
  [SMALL_STATE(100)] = 880,
  [SMALL_STATE(101)] = 923,
  [SMALL_STATE(102)] = 966,
  [SMALL_STATE(103)] = 1009,
  [SMALL_STATE(104)] = 1052,
  [SMALL_STATE(105)] = 1095,
  [SMALL_STATE(106)] = 1138,
  [SMALL_STATE(107)] = 1181,
  [SMALL_STATE(108)] = 1224,
  [SMALL_STATE(109)] = 1267,
  [SMALL_STATE(110)] = 1310,
  [SMALL_STATE(111)] = 1352,
  [SMALL_STATE(112)] = 1394,
  [SMALL_STATE(113)] = 1433,
  [SMALL_STATE(114)] = 1472,
  [SMALL_STATE(115)] = 1511,
  [SMALL_STATE(116)] = 1550,
  [SMALL_STATE(117)] = 1589,
  [SMALL_STATE(118)] = 1628,
  [SMALL_STATE(119)] = 1667,
  [SMALL_STATE(120)] = 1706,
  [SMALL_STATE(121)] = 1745,
  [SMALL_STATE(122)] = 1784,
  [SMALL_STATE(123)] = 1823,
  [SMALL_STATE(124)] = 1862,
  [SMALL_STATE(125)] = 1901,
  [SMALL_STATE(126)] = 1940,
  [SMALL_STATE(127)] = 1979,
  [SMALL_STATE(128)] = 2018,
  [SMALL_STATE(129)] = 2057,
  [SMALL_STATE(130)] = 2096,
  [SMALL_STATE(131)] = 2135,
  [SMALL_STATE(132)] = 2174,
  [SMALL_STATE(133)] = 2213,
  [SMALL_STATE(134)] = 2252,
  [SMALL_STATE(135)] = 2291,
  [SMALL_STATE(136)] = 2330,
  [SMALL_STATE(137)] = 2369,
  [SMALL_STATE(138)] = 2394,
  [SMALL_STATE(139)] = 2419,
  [SMALL_STATE(140)] = 2444,
  [SMALL_STATE(141)] = 2469,
  [SMALL_STATE(142)] = 2494,
  [SMALL_STATE(143)] = 2519,
  [SMALL_STATE(144)] = 2533,
  [SMALL_STATE(145)] = 2552,
  [SMALL_STATE(146)] = 2571,
  [SMALL_STATE(147)] = 2590,
  [SMALL_STATE(148)] = 2609,
  [SMALL_STATE(149)] = 2628,
  [SMALL_STATE(150)] = 2647,
  [SMALL_STATE(151)] = 2661,
  [SMALL_STATE(152)] = 2675,
  [SMALL_STATE(153)] = 2689,
  [SMALL_STATE(154)] = 2703,
  [SMALL_STATE(155)] = 2717,
  [SMALL_STATE(156)] = 2731,
  [SMALL_STATE(157)] = 2745,
  [SMALL_STATE(158)] = 2759,
  [SMALL_STATE(159)] = 2773,
  [SMALL_STATE(160)] = 2784,
  [SMALL_STATE(161)] = 2797,
  [SMALL_STATE(162)] = 2810,
  [SMALL_STATE(163)] = 2821,
  [SMALL_STATE(164)] = 2834,
  [SMALL_STATE(165)] = 2845,
  [SMALL_STATE(166)] = 2856,
  [SMALL_STATE(167)] = 2867,
  [SMALL_STATE(168)] = 2878,
  [SMALL_STATE(169)] = 2891,
  [SMALL_STATE(170)] = 2904,
  [SMALL_STATE(171)] = 2917,
  [SMALL_STATE(172)] = 2928,
  [SMALL_STATE(173)] = 2936,
  [SMALL_STATE(174)] = 2944,
  [SMALL_STATE(175)] = 2951,
  [SMALL_STATE(176)] = 2958,
  [SMALL_STATE(177)] = 2965,
  [SMALL_STATE(178)] = 2972,
  [SMALL_STATE(179)] = 2979,
  [SMALL_STATE(180)] = 2986,
  [SMALL_STATE(181)] = 2993,
  [SMALL_STATE(182)] = 3000,
  [SMALL_STATE(183)] = 3007,
  [SMALL_STATE(184)] = 3014,
  [SMALL_STATE(185)] = 3018,
  [SMALL_STATE(186)] = 3022,
  [SMALL_STATE(187)] = 3026,
  [SMALL_STATE(188)] = 3030,
  [SMALL_STATE(189)] = 3034,
  [SMALL_STATE(190)] = 3038,
  [SMALL_STATE(191)] = 3042,
  [SMALL_STATE(192)] = 3046,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(61),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(27),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(174),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(153),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(140),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(189),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(183),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(162),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(75),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(37),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(15),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(14),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(10),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(148),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(163),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(160),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(160),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(36),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(36),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(33),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(190),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(190),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(104),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(181),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(158),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(139),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(185),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(176),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(167),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(86),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(149),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(168),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(170),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(170),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(42),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(42),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(25),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(192),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(192),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 2),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_comment, 3),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_comment, 3),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_here_string, 2),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_here_string, 2),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 3),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 2),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 5),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 5),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 2),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure, 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 2),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 2),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 2),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 2),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 3),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 3),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 3),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 4),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 4),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 3),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 3),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string, 2),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_string, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_comment, 2),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_comment, 2),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(84),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(136),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(29),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(182),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(154),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2), SHIFT_REPEAT(143),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_comment_repeat1, 2), SHIFT_REPEAT(150),
  [668] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_comment_repeat1, 2), SHIFT_REPEAT(156),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_comment_repeat1, 2),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2),
  [691] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(165),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [708] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat2, 2), SHIFT_REPEAT(186),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat2, 3),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [731] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
