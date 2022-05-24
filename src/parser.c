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
#define STATE_COUNT 72
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 0
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym__whitespace = 1,
  sym__newline = 2,
  sym_dot = 3,
  aux_sym_comment_token1 = 4,
  anon_sym_POUND_SEMI = 5,
  anon_sym_POUND_BANG = 6,
  anon_sym_POUND_BANG_SLASH = 7,
  aux_sym_comment_token2 = 8,
  anon_sym_BSLASH = 9,
  anon_sym_POUND_PIPE = 10,
  aux_sym__block_comment_token1 = 11,
  anon_sym_PIPE_POUND = 12,
  sym_boolean = 13,
  anon_sym_POUND = 14,
  aux_sym_regex_token1 = 15,
  anon_sym_DQUOTE = 16,
  aux_sym__real_string_token1 = 17,
  anon_sym_BSLASHa = 18,
  anon_sym_BSLASHb = 19,
  anon_sym_BSLASHt = 20,
  anon_sym_BSLASHn = 21,
  anon_sym_BSLASHv = 22,
  anon_sym_BSLASHf = 23,
  anon_sym_BSLASHr = 24,
  anon_sym_BSLASHe = 25,
  anon_sym_BSLASH_DQUOTE = 26,
  anon_sym_BSLASH_SQUOTE = 27,
  anon_sym_BSLASH_BSLASH = 28,
  aux_sym_escape_sequence_token1 = 29,
  anon_sym_BSLASHx = 30,
  aux_sym_escape_sequence_token2 = 31,
  anon_sym_BSLASHu = 32,
  aux_sym_escape_sequence_token3 = 33,
  aux_sym_escape_sequence_token4 = 34,
  anon_sym_BSLASHU = 35,
  aux_sym_escape_sequence_token5 = 36,
  sym_number = 37,
  sym_character = 38,
  anon_sym_POUND_AMP = 39,
  anon_sym_LPAREN = 40,
  anon_sym_RPAREN = 41,
  anon_sym_LBRACK = 42,
  anon_sym_RBRACK = 43,
  anon_sym_LBRACE = 44,
  anon_sym_RBRACE = 45,
  anon_sym_POUNDfl = 46,
  anon_sym_POUNDfx = 47,
  aux_sym_vector_token1 = 48,
  anon_sym_POUNDs = 49,
  anon_sym_POUNDhash = 50,
  anon_sym_POUNDhasheq = 51,
  anon_sym_POUNDhasheqv = 52,
  anon_sym_EQ = 53,
  sym_program = 54,
  sym__token = 55,
  sym__skip = 56,
  sym_comment = 57,
  sym__block_comment = 58,
  sym__datum = 59,
  sym_string = 60,
  sym_byte_string = 61,
  sym_regex = 62,
  sym__real_string = 63,
  sym_escape_sequence = 64,
  sym_box = 65,
  sym_list = 66,
  sym_vector = 67,
  sym_structure = 68,
  sym_hash = 69,
  sym_graph = 70,
  aux_sym_program_repeat1 = 71,
  aux_sym_comment_repeat1 = 72,
  aux_sym_comment_repeat2 = 73,
  aux_sym__block_comment_repeat1 = 74,
  aux_sym__real_string_repeat1 = 75,
  aux_sym_list_repeat1 = 76,
  aux_sym_vector_repeat1 = 77,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__whitespace] = "_whitespace",
  [sym__newline] = "_newline",
  [sym_dot] = "dot",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_POUND_SEMI] = "#;",
  [anon_sym_POUND_BANG] = "#! ",
  [anon_sym_POUND_BANG_SLASH] = "#!/",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_POUND_PIPE] = "#|",
  [aux_sym__block_comment_token1] = "_block_comment_token1",
  [anon_sym_PIPE_POUND] = "|#",
  [sym_boolean] = "boolean",
  [anon_sym_POUND] = "#",
  [aux_sym_regex_token1] = "regex_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__real_string_token1] = "_real_string_token1",
  [anon_sym_BSLASHa] = "\\a",
  [anon_sym_BSLASHb] = "\\b",
  [anon_sym_BSLASHt] = "\\t",
  [anon_sym_BSLASHn] = "\\n",
  [anon_sym_BSLASHv] = "\\v",
  [anon_sym_BSLASHf] = "\\f",
  [anon_sym_BSLASHr] = "\\r",
  [anon_sym_BSLASHe] = "\\e",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [anon_sym_BSLASH_SQUOTE] = "\\'",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [aux_sym_escape_sequence_token1] = "escape_sequence_token1",
  [anon_sym_BSLASHx] = "\\x",
  [aux_sym_escape_sequence_token2] = "escape_sequence_token2",
  [anon_sym_BSLASHu] = "\\u",
  [aux_sym_escape_sequence_token3] = "escape_sequence_token3",
  [aux_sym_escape_sequence_token4] = "escape_sequence_token4",
  [anon_sym_BSLASHU] = "\\U",
  [aux_sym_escape_sequence_token5] = "escape_sequence_token5",
  [sym_number] = "number",
  [sym_character] = "character",
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
  [sym_program] = "program",
  [sym__token] = "_token",
  [sym__skip] = "_skip",
  [sym_comment] = "comment",
  [sym__block_comment] = "_block_comment",
  [sym__datum] = "_datum",
  [sym_string] = "string",
  [sym_byte_string] = "byte_string",
  [sym_regex] = "regex",
  [sym__real_string] = "_real_string",
  [sym_escape_sequence] = "escape_sequence",
  [sym_box] = "box",
  [sym_list] = "list",
  [sym_vector] = "vector",
  [sym_structure] = "structure",
  [sym_hash] = "hash",
  [sym_graph] = "graph",
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
  [sym__whitespace] = sym__whitespace,
  [sym__newline] = sym__newline,
  [sym_dot] = sym_dot,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_POUND_SEMI] = anon_sym_POUND_SEMI,
  [anon_sym_POUND_BANG] = anon_sym_POUND_BANG,
  [anon_sym_POUND_BANG_SLASH] = anon_sym_POUND_BANG_SLASH,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_POUND_PIPE] = anon_sym_POUND_PIPE,
  [aux_sym__block_comment_token1] = aux_sym__block_comment_token1,
  [anon_sym_PIPE_POUND] = anon_sym_PIPE_POUND,
  [sym_boolean] = sym_boolean,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_regex_token1] = aux_sym_regex_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__real_string_token1] = aux_sym__real_string_token1,
  [anon_sym_BSLASHa] = anon_sym_BSLASHa,
  [anon_sym_BSLASHb] = anon_sym_BSLASHb,
  [anon_sym_BSLASHt] = anon_sym_BSLASHt,
  [anon_sym_BSLASHn] = anon_sym_BSLASHn,
  [anon_sym_BSLASHv] = anon_sym_BSLASHv,
  [anon_sym_BSLASHf] = anon_sym_BSLASHf,
  [anon_sym_BSLASHr] = anon_sym_BSLASHr,
  [anon_sym_BSLASHe] = anon_sym_BSLASHe,
  [anon_sym_BSLASH_DQUOTE] = anon_sym_BSLASH_DQUOTE,
  [anon_sym_BSLASH_SQUOTE] = anon_sym_BSLASH_SQUOTE,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [aux_sym_escape_sequence_token1] = aux_sym_escape_sequence_token1,
  [anon_sym_BSLASHx] = anon_sym_BSLASHx,
  [aux_sym_escape_sequence_token2] = aux_sym_escape_sequence_token2,
  [anon_sym_BSLASHu] = anon_sym_BSLASHu,
  [aux_sym_escape_sequence_token3] = aux_sym_escape_sequence_token3,
  [aux_sym_escape_sequence_token4] = aux_sym_escape_sequence_token4,
  [anon_sym_BSLASHU] = anon_sym_BSLASHU,
  [aux_sym_escape_sequence_token5] = aux_sym_escape_sequence_token5,
  [sym_number] = sym_number,
  [sym_character] = sym_character,
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
  [sym_program] = sym_program,
  [sym__token] = sym__token,
  [sym__skip] = sym__skip,
  [sym_comment] = sym_comment,
  [sym__block_comment] = sym__block_comment,
  [sym__datum] = sym__datum,
  [sym_string] = sym_string,
  [sym_byte_string] = sym_byte_string,
  [sym_regex] = sym_regex,
  [sym__real_string] = sym__real_string,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_box] = sym_box,
  [sym_list] = sym_list,
  [sym_vector] = sym_vector,
  [sym_structure] = sym_structure,
  [sym_hash] = sym_hash,
  [sym_graph] = sym_graph,
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
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
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
  [anon_sym_POUND_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_BANG_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
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
  [anon_sym_BSLASHa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_escape_sequence_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASHx] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_escape_sequence_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASHu] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_escape_sequence_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escape_sequence_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASHU] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_escape_sequence_token5] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
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
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym__real_string] = {
    .visible = false,
    .named = true,
  },
  [sym_escape_sequence] = {
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

static inline bool sym__whitespace_character_set_1(int32_t c) {
  return (c < 8232
    ? (c < 160
      ? (c < ' '
        ? (c >= '\t' && c <= '\r')
        : c <= ' ')
      : (c <= 160 || (c < 8192
        ? c == 5760
        : c <= 8202)))
    : (c <= 8233 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8287)
      : (c <= 12288 || c == 65279))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(188);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '(') ADVANCE(338);
      if (lookahead == ')') ADVANCE(339);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == ';') ADVANCE(193);
      if (lookahead == '=') ADVANCE(351);
      if (lookahead == '[') ADVANCE(340);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == ']') ADVANCE(341);
      if (lookahead == '{') ADVANCE(342);
      if (lookahead == '|') ADVANCE(202);
      if (lookahead == '}') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(195);
      if (lookahead == '/') ADVANCE(196);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '(') ADVANCE(338);
      if (lookahead == '=') ADVANCE(351);
      if (lookahead == '[') ADVANCE(340);
      if (lookahead == '{') ADVANCE(342);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(199);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(259);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(105);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(105);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(105);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(105);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '|') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(145);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(12);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(145);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(14);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(149);
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(271);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(17);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(19);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(150);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(283);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(183);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(108);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(108);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(183);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(108);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(108);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(128);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(259);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(271);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(283);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(154);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(137);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(113);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(263);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(139);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(155);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(134);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(267);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(134);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(112);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(267);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(138);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(275);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(296);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(134);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(296);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(153);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(132);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(145);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(132);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(111);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(12);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(279);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(134);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(279);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(181);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(132);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(181);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(132);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(298);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(132);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(17);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(156);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(157);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(158);
      END_STATE();
    case 55:
      if (lookahead == 'U') ADVANCE(336);
      if (lookahead == 'b') ADVANCE(319);
      if (lookahead == 'l') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(322);
      if (lookahead == 'p') ADVANCE(320);
      if (lookahead == 'r') ADVANCE(323);
      if (lookahead == 's') ADVANCE(326);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead == 'u') ADVANCE(332);
      if (lookahead == 'v') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(318);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(318);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(80);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(318);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(68);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(65);
      END_STATE();
    case 71:
      if (lookahead == 'h') ADVANCE(348);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 73:
      if (lookahead == 'k') ADVANCE(86);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(325);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(318);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 81:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 82:
      if (lookahead == 'q') ADVANCE(349);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 86:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 89:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 90:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 91:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 92:
      if (lookahead == 'w') ADVANCE(75);
      END_STATE();
    case 93:
      if (lookahead == 'x') ADVANCE(212);
      END_STATE();
    case 94:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 95:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(142);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(307);
      END_STATE();
    case 96:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      END_STATE();
    case 97:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 98:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(143);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(306);
      END_STATE();
    case 99:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(310);
      END_STATE();
    case 100:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(312);
      END_STATE();
    case 101:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 102:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(146);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(314);
      END_STATE();
    case 103:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(309);
      END_STATE();
    case 104:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(317);
      END_STATE();
    case 105:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 106:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(147);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(124);
      END_STATE();
    case 107:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(315);
      END_STATE();
    case 108:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 109:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(125);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 111:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 112:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 113:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 114:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 115:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 116:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(29);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(33);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(30);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(31);
      END_STATE();
    case 117:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 118:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 119:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(44);
      END_STATE();
    case 120:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(52);
      END_STATE();
    case 121:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(53);
      END_STATE();
    case 122:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(54);
      END_STATE();
    case 123:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 124:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(124);
      END_STATE();
    case 125:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(125);
      END_STATE();
    case 126:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 127:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 128:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 129:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 130:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 131:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 132:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 133:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 134:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 135:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 136:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 137:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 138:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 139:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 140:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(261);
      END_STATE();
    case 141:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(265);
      END_STATE();
    case 142:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(307);
      END_STATE();
    case 143:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(306);
      END_STATE();
    case 144:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(269);
      END_STATE();
    case 145:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(14);
      END_STATE();
    case 146:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(314);
      END_STATE();
    case 147:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(124);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 152:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(228);
      END_STATE();
    case 153:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(246);
      END_STATE();
    case 154:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(302);
      END_STATE();
    case 155:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 156:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(305);
      END_STATE();
    case 157:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(308);
      END_STATE();
    case 158:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(311);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(318);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(273);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(277);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(310);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(309);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(281);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(19);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(315);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(125);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 171:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 172:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 173:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(286);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(312);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(300);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(317);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      END_STATE();
    case 187:
      if (eof) ADVANCE(188);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(189);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '(') ADVANCE(338);
      if (lookahead == ')') ADVANCE(339);
      if (lookahead == '.') ADVANCE(192);
      if (lookahead == ';') ADVANCE(193);
      if (lookahead == '[') ADVANCE(340);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == ']') ADVANCE(341);
      if (lookahead == '{') ADVANCE(342);
      if (lookahead == '}') ADVANCE(343);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_dot);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_POUND_BANG_SLASH);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '\'') ADVANCE(224);
      if (lookahead == 'U') ADVANCE(237);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'b') ADVANCE(216);
      if (lookahead == 'e') ADVANCE(222);
      if (lookahead == 'f') ADVANCE(220);
      if (lookahead == 'n') ADVANCE(218);
      if (lookahead == 'r') ADVANCE(221);
      if (lookahead == 't') ADVANCE(217);
      if (lookahead == 'u') ADVANCE(232);
      if (lookahead == 'v') ADVANCE(219);
      if (lookahead == 'x') ADVANCE(229);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == '#') ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == '|') ADVANCE(200);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'l') ADVANCE(344);
      if (lookahead == 'x') ADVANCE(345);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '&') ADVANCE(337);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(4);
      if (lookahead == 'F' ||
          lookahead == 'T') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == 'f') ADVANCE(206);
      if (lookahead == 'h') ADVANCE(56);
      if (lookahead == 'p') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == 's') ADVANCE(347);
      if (lookahead == 't') ADVANCE(207);
      if (lookahead == '|') ADVANCE(200);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(5);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(11);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(16);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(21);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '|') ADVANCE(200);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '#') ADVANCE(211);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__real_string_token1);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_BSLASHa);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_BSLASHb);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_BSLASHv);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_BSLASHf);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_BSLASHe);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_BSLASH_SQUOTE);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(226);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(227);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_BSLASHx);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_BSLASHu);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_BSLASHU);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '.') ADVANCE(249);
      if (lookahead == '/') ADVANCE(168);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(94);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '.') ADVANCE(250);
      if (lookahead == '/') ADVANCE(168);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(94);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(94);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(94);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(252);
      if (lookahead == '.') ADVANCE(253);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(97);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(252);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(97);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(97);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(97);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '.') ADVANCE(257);
      if (lookahead == '/') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(101);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '.') ADVANCE(258);
      if (lookahead == '/') ADVANCE(172);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(101);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(101);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(258);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(101);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '.') ADVANCE(261);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(259);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(95);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(95);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(261);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(95);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(95);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '.') ADVANCE(265);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(263);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(98);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '.') ADVANCE(266);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(98);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(266);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(265);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(98);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(266);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(98);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '.') ADVANCE(269);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '.') ADVANCE(270);
      if (lookahead == '/') ADVANCE(144);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(270);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == '.') ADVANCE(273);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(271);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(99);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(99);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(273);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(99);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(99);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '.') ADVANCE(277);
      if (lookahead == '/') ADVANCE(161);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(275);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '.') ADVANCE(278);
      if (lookahead == '/') ADVANCE(161);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(277);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == '/') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(279);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '.') ADVANCE(282);
      if (lookahead == '/') ADVANCE(164);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(281);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(282);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '.') ADVANCE(286);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(96);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '.') ADVANCE(286);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(96);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(283);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(96);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(287);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(96);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(287);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(96);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(287);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(96);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(286);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(100);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(100);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(289);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(100);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(100);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(100);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(100);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(292);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '.') ADVANCE(300);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(182);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(104);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(296);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '.') ADVANCE(300);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(104);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(180);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(108);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(182);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(104);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(104);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(301);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(318);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(159);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(318);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(329);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(330);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(331);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(332);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(333);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(334);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(335);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_POUND_AMP);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_POUNDfl);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_POUNDfx);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_vector_token1);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_POUNDs);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_POUNDhash);
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_POUNDhasheq);
      if (lookahead == 'v') ADVANCE(350);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_POUNDhasheqv);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 187},
  [2] = {.lex_state = 187},
  [3] = {.lex_state = 187},
  [4] = {.lex_state = 187},
  [5] = {.lex_state = 187},
  [6] = {.lex_state = 187},
  [7] = {.lex_state = 187},
  [8] = {.lex_state = 187},
  [9] = {.lex_state = 187},
  [10] = {.lex_state = 187},
  [11] = {.lex_state = 187},
  [12] = {.lex_state = 187},
  [13] = {.lex_state = 187},
  [14] = {.lex_state = 187},
  [15] = {.lex_state = 187},
  [16] = {.lex_state = 187},
  [17] = {.lex_state = 187},
  [18] = {.lex_state = 187},
  [19] = {.lex_state = 187},
  [20] = {.lex_state = 187},
  [21] = {.lex_state = 187},
  [22] = {.lex_state = 187},
  [23] = {.lex_state = 187},
  [24] = {.lex_state = 187},
  [25] = {.lex_state = 187},
  [26] = {.lex_state = 187},
  [27] = {.lex_state = 187},
  [28] = {.lex_state = 187},
  [29] = {.lex_state = 187},
  [30] = {.lex_state = 187},
  [31] = {.lex_state = 187},
  [32] = {.lex_state = 187},
  [33] = {.lex_state = 187},
  [34] = {.lex_state = 187},
  [35] = {.lex_state = 187},
  [36] = {.lex_state = 187},
  [37] = {.lex_state = 187},
  [38] = {.lex_state = 187},
  [39] = {.lex_state = 187},
  [40] = {.lex_state = 187},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 187},
  [57] = {.lex_state = 187},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 184},
  [61] = {.lex_state = 152},
  [62] = {.lex_state = 197},
  [63] = {.lex_state = 197},
  [64] = {.lex_state = 197},
  [65] = {.lex_state = 187},
  [66] = {.lex_state = 197},
  [67] = {.lex_state = 187},
  [68] = {.lex_state = 185},
  [69] = {.lex_state = 186},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_POUND_PIPE] = ACTIONS(1),
    [aux_sym__block_comment_token1] = ACTIONS(1),
    [anon_sym_PIPE_POUND] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_vector_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(71),
    [sym__token] = STATE(10),
    [sym_comment] = STATE(10),
    [sym__block_comment] = STATE(36),
    [sym__datum] = STATE(10),
    [sym_string] = STATE(10),
    [sym_byte_string] = STATE(10),
    [sym_regex] = STATE(10),
    [sym__real_string] = STATE(35),
    [sym_box] = STATE(10),
    [sym_list] = STATE(10),
    [sym_vector] = STATE(10),
    [sym_structure] = STATE(10),
    [sym_hash] = STATE(10),
    [sym_graph] = STATE(10),
    [aux_sym_program_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(5),
    [sym_character] = ACTIONS(5),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
  },
  [2] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(36),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(35),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [sym__whitespace] = ACTIONS(39),
    [sym_dot] = ACTIONS(42),
    [aux_sym_comment_token1] = ACTIONS(45),
    [anon_sym_POUND_SEMI] = ACTIONS(48),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(51),
    [anon_sym_POUND_PIPE] = ACTIONS(54),
    [sym_boolean] = ACTIONS(42),
    [anon_sym_POUND] = ACTIONS(57),
    [aux_sym_regex_token1] = ACTIONS(60),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [sym_number] = ACTIONS(39),
    [sym_character] = ACTIONS(39),
    [anon_sym_POUND_AMP] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(74),
    [anon_sym_RBRACK] = ACTIONS(72),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(72),
    [anon_sym_POUNDfl] = ACTIONS(80),
    [anon_sym_POUNDfx] = ACTIONS(80),
    [anon_sym_POUNDs] = ACTIONS(83),
    [anon_sym_POUNDhash] = ACTIONS(86),
    [anon_sym_POUNDhasheq] = ACTIONS(86),
    [anon_sym_POUNDhasheqv] = ACTIONS(89),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      aux_sym_regex_token1,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_POUND_AMP,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_POUNDs,
    ACTIONS(37), 1,
      anon_sym_POUNDhasheqv,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym__real_string,
    STATE(36), 1,
      sym__block_comment,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(31), 2,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
    ACTIONS(35), 2,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(94), 2,
      sym_dot,
      sym_boolean,
    ACTIONS(92), 3,
      sym__whitespace,
      sym_number,
      sym_character,
    STATE(2), 13,
      sym__token,
      sym_comment,
      sym__datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym_box,
      sym_list,
      sym_vector,
      sym_structure,
      sym_hash,
      sym_graph,
      aux_sym_list_repeat1,
  [82] = 21,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      aux_sym_regex_token1,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_POUND_AMP,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_POUNDs,
    ACTIONS(37), 1,
      anon_sym_POUNDhasheqv,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym__real_string,
    STATE(36), 1,
      sym__block_comment,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(31), 2,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
    ACTIONS(35), 2,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(100), 2,
      sym_dot,
      sym_boolean,
    ACTIONS(98), 3,
      sym__whitespace,
      sym_number,
      sym_character,
    STATE(8), 13,
      sym__token,
      sym_comment,
      sym__datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym_box,
      sym_list,
      sym_vector,
      sym_structure,
      sym_hash,
      sym_graph,
      aux_sym_list_repeat1,
  [164] = 21,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      aux_sym_regex_token1,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_POUND_AMP,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_POUNDs,
    ACTIONS(37), 1,
      anon_sym_POUNDhasheqv,
    ACTIONS(102), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      sym__real_string,
    STATE(36), 1,
      sym__block_comment,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(31), 2,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
    ACTIONS(35), 2,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(106), 2,
      sym_dot,
      sym_boolean,
    ACTIONS(104), 3,
      sym__whitespace,
      sym_number,
      sym_character,
    STATE(7), 13,
      sym__token,
      sym_comment,
      sym__datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym_box,
      sym_list,
      sym_vector,
      sym_structure,
      sym_hash,
      sym_graph,
      aux_sym_list_repeat1,
  [246] = 21,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      aux_sym_regex_token1,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_POUND_AMP,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_POUNDs,
    ACTIONS(37), 1,
      anon_sym_POUNDhasheqv,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym__real_string,
    STATE(36), 1,
      sym__block_comment,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(31), 2,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
    ACTIONS(35), 2,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(110), 2,
      sym_dot,
      sym_boolean,
    ACTIONS(108), 3,
      sym__whitespace,
      sym_number,
      sym_character,
    STATE(3), 13,
      sym__token,
      sym_comment,
      sym__datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym_box,
      sym_list,
      sym_vector,
      sym_structure,
      sym_hash,
      sym_graph,
      aux_sym_list_repeat1,
  [328] = 21,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      aux_sym_regex_token1,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_POUND_AMP,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_POUNDs,
    ACTIONS(37), 1,
      anon_sym_POUNDhasheqv,
    ACTIONS(96), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      sym__real_string,
    STATE(36), 1,
      sym__block_comment,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(31), 2,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
    ACTIONS(35), 2,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(94), 2,
      sym_dot,
      sym_boolean,
    ACTIONS(92), 3,
      sym__whitespace,
      sym_number,
      sym_character,
    STATE(2), 13,
      sym__token,
      sym_comment,
      sym__datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym_box,
      sym_list,
      sym_vector,
      sym_structure,
      sym_hash,
      sym_graph,
      aux_sym_list_repeat1,
  [410] = 21,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      aux_sym_regex_token1,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_POUND_AMP,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_POUNDs,
    ACTIONS(37), 1,
      anon_sym_POUNDhasheqv,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym__real_string,
    STATE(36), 1,
      sym__block_comment,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(31), 2,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
    ACTIONS(35), 2,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(94), 2,
      sym_dot,
      sym_boolean,
    ACTIONS(92), 3,
      sym__whitespace,
      sym_number,
      sym_character,
    STATE(2), 13,
      sym__token,
      sym_comment,
      sym__datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym_box,
      sym_list,
      sym_vector,
      sym_structure,
      sym_hash,
      sym_graph,
      aux_sym_list_repeat1,
  [492] = 21,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      aux_sym_comment_token1,
    ACTIONS(120), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(126), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(129), 1,
      sym_boolean,
    ACTIONS(132), 1,
      anon_sym_POUND,
    ACTIONS(135), 1,
      aux_sym_regex_token1,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_POUND_AMP,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    ACTIONS(156), 1,
      anon_sym_POUNDs,
    ACTIONS(162), 1,
      anon_sym_POUNDhasheqv,
    STATE(35), 1,
      sym__real_string,
    STATE(36), 1,
      sym__block_comment,
    ACTIONS(123), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(153), 2,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
    ACTIONS(159), 2,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(114), 3,
      sym__whitespace,
      sym_number,
      sym_character,
    STATE(9), 13,
      sym__token,
      sym_comment,
      sym__datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym_box,
      sym_list,
      sym_vector,
      sym_structure,
      sym_hash,
      sym_graph,
      aux_sym_program_repeat1,
  [573] = 21,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      aux_sym_regex_token1,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_POUND_AMP,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_POUNDs,
    ACTIONS(37), 1,
      anon_sym_POUNDhasheqv,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(169), 1,
      sym_boolean,
    STATE(35), 1,
      sym__real_string,
    STATE(36), 1,
      sym__block_comment,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(31), 2,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
    ACTIONS(35), 2,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(167), 3,
      sym__whitespace,
      sym_number,
      sym_character,
    STATE(9), 13,
      sym__token,
      sym_comment,
      sym__datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym_box,
      sym_list,
      sym_vector,
      sym_structure,
      sym_hash,
      sym_graph,
      aux_sym_program_repeat1,
  [654] = 22,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      aux_sym_regex_token1,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_POUND_AMP,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_POUNDs,
    ACTIONS(37), 1,
      anon_sym_POUNDhasheqv,
    ACTIONS(171), 1,
      sym__whitespace,
    ACTIONS(173), 1,
      sym_boolean,
    STATE(35), 1,
      sym__real_string,
    STATE(36), 1,
      sym__block_comment,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(31), 2,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
    ACTIONS(35), 2,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(175), 2,
      sym_number,
      sym_character,
    STATE(40), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    STATE(22), 10,
      sym__datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym_box,
      sym_list,
      sym_vector,
      sym_structure,
      sym_hash,
      sym_graph,
  [736] = 22,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      aux_sym_regex_token1,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_POUND_AMP,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_POUNDs,
    ACTIONS(37), 1,
      anon_sym_POUNDhasheqv,
    ACTIONS(177), 1,
      sym__whitespace,
    ACTIONS(179), 1,
      sym_boolean,
    STATE(35), 1,
      sym__real_string,
    STATE(36), 1,
      sym__block_comment,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(31), 2,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
    ACTIONS(35), 2,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(181), 2,
      sym_number,
      sym_character,
    STATE(16), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    STATE(21), 10,
      sym__datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym_box,
      sym_list,
      sym_vector,
      sym_structure,
      sym_hash,
      sym_graph,
  [818] = 22,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      aux_sym_regex_token1,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_POUND_AMP,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_POUNDs,
    ACTIONS(37), 1,
      anon_sym_POUNDhasheqv,
    ACTIONS(183), 1,
      sym__whitespace,
    ACTIONS(185), 1,
      sym_boolean,
    STATE(35), 1,
      sym__real_string,
    STATE(36), 1,
      sym__block_comment,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(31), 2,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
    ACTIONS(35), 2,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(187), 2,
      sym_number,
      sym_character,
    STATE(11), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    STATE(24), 10,
      sym__datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym_box,
      sym_list,
      sym_vector,
      sym_structure,
      sym_hash,
      sym_graph,
  [900] = 22,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      aux_sym_regex_token1,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_POUND_AMP,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_POUNDs,
    ACTIONS(37), 1,
      anon_sym_POUNDhasheqv,
    ACTIONS(189), 1,
      sym__whitespace,
    ACTIONS(191), 1,
      sym_boolean,
    STATE(35), 1,
      sym__real_string,
    STATE(36), 1,
      sym__block_comment,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(31), 2,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
    ACTIONS(35), 2,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(193), 2,
      sym_number,
      sym_character,
    STATE(15), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    STATE(19), 10,
      sym__datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym_box,
      sym_list,
      sym_vector,
      sym_structure,
      sym_hash,
      sym_graph,
  [982] = 22,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      aux_sym_regex_token1,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_POUND_AMP,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_POUNDs,
    ACTIONS(37), 1,
      anon_sym_POUNDhasheqv,
    ACTIONS(171), 1,
      sym__whitespace,
    ACTIONS(195), 1,
      sym_boolean,
    STATE(35), 1,
      sym__real_string,
    STATE(36), 1,
      sym__block_comment,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(31), 2,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
    ACTIONS(35), 2,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(197), 2,
      sym_number,
      sym_character,
    STATE(40), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    STATE(29), 10,
      sym__datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym_box,
      sym_list,
      sym_vector,
      sym_structure,
      sym_hash,
      sym_graph,
  [1064] = 22,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      aux_sym_regex_token1,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_POUND_AMP,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_POUNDs,
    ACTIONS(37), 1,
      anon_sym_POUNDhasheqv,
    ACTIONS(171), 1,
      sym__whitespace,
    ACTIONS(199), 1,
      sym_boolean,
    STATE(35), 1,
      sym__real_string,
    STATE(36), 1,
      sym__block_comment,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(31), 2,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
    ACTIONS(35), 2,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(201), 2,
      sym_number,
      sym_character,
    STATE(40), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    STATE(37), 10,
      sym__datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym_box,
      sym_list,
      sym_vector,
      sym_structure,
      sym_hash,
      sym_graph,
  [1146] = 3,
    ACTIONS(207), 1,
      anon_sym_BSLASH,
    ACTIONS(205), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(203), 22,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
  [1181] = 3,
    ACTIONS(207), 1,
      anon_sym_BSLASH,
    ACTIONS(211), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(209), 22,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
  [1216] = 2,
    ACTIONS(215), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(213), 22,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
  [1248] = 2,
    ACTIONS(219), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(217), 22,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
  [1280] = 2,
    ACTIONS(205), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(203), 22,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
  [1312] = 2,
    ACTIONS(223), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(221), 22,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
  [1344] = 2,
    ACTIONS(227), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(225), 22,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
  [1376] = 2,
    ACTIONS(231), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(229), 22,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
  [1408] = 2,
    ACTIONS(235), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(233), 22,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
  [1440] = 2,
    ACTIONS(239), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(237), 22,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
  [1472] = 2,
    ACTIONS(243), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(241), 22,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
  [1504] = 2,
    ACTIONS(247), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(245), 22,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
  [1536] = 2,
    ACTIONS(251), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(249), 22,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
  [1568] = 2,
    ACTIONS(255), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(253), 22,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
  [1600] = 2,
    ACTIONS(259), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(257), 22,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
  [1632] = 2,
    ACTIONS(263), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(261), 22,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
  [1664] = 2,
    ACTIONS(267), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(265), 22,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
  [1696] = 2,
    ACTIONS(271), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(269), 22,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
  [1728] = 2,
    ACTIONS(275), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(273), 22,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
  [1760] = 2,
    ACTIONS(279), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(277), 22,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
  [1792] = 2,
    ACTIONS(211), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(209), 22,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
  [1824] = 2,
    ACTIONS(283), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(281), 22,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
  [1856] = 2,
    ACTIONS(287), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(285), 22,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
  [1888] = 9,
    ACTIONS(289), 1,
      sym__whitespace,
    ACTIONS(292), 1,
      aux_sym_comment_token1,
    ACTIONS(295), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(301), 1,
      anon_sym_POUND_PIPE,
    STATE(36), 1,
      sym__block_comment,
    ACTIONS(298), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    STATE(40), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    ACTIONS(304), 4,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(306), 12,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
  [1933] = 8,
    ACTIONS(308), 1,
      anon_sym_BSLASH,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    ACTIONS(312), 1,
      aux_sym__real_string_token1,
    ACTIONS(316), 1,
      anon_sym_BSLASHx,
    ACTIONS(318), 1,
      anon_sym_BSLASHu,
    ACTIONS(320), 1,
      anon_sym_BSLASHU,
    STATE(42), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(314), 11,
      anon_sym_BSLASHa,
      anon_sym_BSLASHb,
      anon_sym_BSLASHt,
      anon_sym_BSLASHn,
      anon_sym_BSLASHv,
      anon_sym_BSLASHf,
      anon_sym_BSLASHr,
      anon_sym_BSLASHe,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_SQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1969] = 8,
    ACTIONS(308), 1,
      anon_sym_BSLASH,
    ACTIONS(316), 1,
      anon_sym_BSLASHx,
    ACTIONS(318), 1,
      anon_sym_BSLASHu,
    ACTIONS(320), 1,
      anon_sym_BSLASHU,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym__real_string_token1,
    STATE(43), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(314), 11,
      anon_sym_BSLASHa,
      anon_sym_BSLASHb,
      anon_sym_BSLASHt,
      anon_sym_BSLASHn,
      anon_sym_BSLASHv,
      anon_sym_BSLASHf,
      anon_sym_BSLASHr,
      anon_sym_BSLASHe,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_SQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2005] = 8,
    ACTIONS(326), 1,
      anon_sym_BSLASH,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym__real_string_token1,
    ACTIONS(337), 1,
      anon_sym_BSLASHx,
    ACTIONS(340), 1,
      anon_sym_BSLASHu,
    ACTIONS(343), 1,
      anon_sym_BSLASHU,
    STATE(43), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(334), 11,
      anon_sym_BSLASHa,
      anon_sym_BSLASHb,
      anon_sym_BSLASHt,
      anon_sym_BSLASHn,
      anon_sym_BSLASHv,
      anon_sym_BSLASHf,
      anon_sym_BSLASHr,
      anon_sym_BSLASHe,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_SQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2041] = 2,
    ACTIONS(346), 1,
      anon_sym_BSLASH,
    ACTIONS(348), 16,
      anon_sym_DQUOTE,
      aux_sym__real_string_token1,
      anon_sym_BSLASHa,
      anon_sym_BSLASHb,
      anon_sym_BSLASHt,
      anon_sym_BSLASHn,
      anon_sym_BSLASHv,
      anon_sym_BSLASHf,
      anon_sym_BSLASHr,
      anon_sym_BSLASHe,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_SQUOTE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHx,
      anon_sym_BSLASHu,
      anon_sym_BSLASHU,
  [2063] = 2,
    ACTIONS(350), 1,
      anon_sym_BSLASH,
    ACTIONS(352), 16,
      anon_sym_DQUOTE,
      aux_sym__real_string_token1,
      anon_sym_BSLASHa,
      anon_sym_BSLASHb,
      anon_sym_BSLASHt,
      anon_sym_BSLASHn,
      anon_sym_BSLASHv,
      anon_sym_BSLASHf,
      anon_sym_BSLASHr,
      anon_sym_BSLASHe,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_SQUOTE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHx,
      anon_sym_BSLASHu,
      anon_sym_BSLASHU,
  [2085] = 8,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(354), 1,
      anon_sym_POUND,
    ACTIONS(356), 1,
      aux_sym_vector_token1,
    ACTIONS(358), 1,
      anon_sym_EQ,
    STATE(32), 1,
      sym_list,
    STATE(48), 1,
      aux_sym_vector_repeat1,
  [2110] = 8,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(360), 1,
      aux_sym_vector_token1,
    STATE(25), 1,
      sym__real_string,
    STATE(26), 1,
      sym_list,
    STATE(46), 1,
      aux_sym_vector_repeat1,
  [2135] = 3,
    ACTIONS(364), 1,
      aux_sym_vector_token1,
    STATE(48), 1,
      aux_sym_vector_repeat1,
    ACTIONS(362), 5,
      anon_sym_POUND,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [2149] = 6,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(367), 1,
      aux_sym_vector_token1,
    STATE(26), 1,
      sym_list,
    STATE(50), 1,
      aux_sym_vector_repeat1,
  [2168] = 6,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(356), 1,
      aux_sym_vector_token1,
    STATE(32), 1,
      sym_list,
    STATE(48), 1,
      aux_sym_vector_repeat1,
  [2187] = 4,
    ACTIONS(369), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(371), 1,
      aux_sym__block_comment_token1,
    ACTIONS(373), 1,
      anon_sym_PIPE_POUND,
    STATE(54), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [2201] = 4,
    ACTIONS(369), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(375), 1,
      aux_sym__block_comment_token1,
    ACTIONS(377), 1,
      anon_sym_PIPE_POUND,
    STATE(51), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [2215] = 4,
    ACTIONS(369), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(371), 1,
      aux_sym__block_comment_token1,
    ACTIONS(379), 1,
      anon_sym_PIPE_POUND,
    STATE(54), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [2229] = 4,
    ACTIONS(381), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(384), 1,
      aux_sym__block_comment_token1,
    ACTIONS(387), 1,
      anon_sym_PIPE_POUND,
    STATE(54), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [2243] = 4,
    ACTIONS(369), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(389), 1,
      aux_sym__block_comment_token1,
    ACTIONS(391), 1,
      anon_sym_PIPE_POUND,
    STATE(53), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [2257] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_list,
  [2270] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_list,
  [2283] = 2,
    ACTIONS(271), 1,
      aux_sym__block_comment_token1,
    ACTIONS(269), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [2291] = 2,
    ACTIONS(227), 1,
      aux_sym__block_comment_token1,
    ACTIONS(225), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [2299] = 2,
    ACTIONS(393), 1,
      aux_sym_escape_sequence_token3,
    ACTIONS(395), 1,
      aux_sym_escape_sequence_token4,
  [2306] = 1,
    ACTIONS(393), 2,
      sym__newline,
      aux_sym_escape_sequence_token1,
  [2311] = 2,
    ACTIONS(397), 1,
      aux_sym_comment_token2,
    STATE(64), 1,
      aux_sym_comment_repeat2,
  [2318] = 2,
    ACTIONS(399), 1,
      aux_sym_comment_token2,
    STATE(62), 1,
      aux_sym_comment_repeat2,
  [2325] = 2,
    ACTIONS(401), 1,
      aux_sym_comment_token2,
    STATE(64), 1,
      aux_sym_comment_repeat2,
  [2332] = 2,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym__real_string,
  [2339] = 1,
    ACTIONS(404), 1,
      aux_sym_comment_token2,
  [2343] = 1,
    ACTIONS(207), 1,
      anon_sym_BSLASH,
  [2347] = 1,
    ACTIONS(393), 1,
      aux_sym_escape_sequence_token2,
  [2351] = 1,
    ACTIONS(393), 1,
      aux_sym_escape_sequence_token5,
  [2355] = 1,
    ACTIONS(406), 1,
      sym__newline,
  [2359] = 1,
    ACTIONS(408), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 164,
  [SMALL_STATE(6)] = 246,
  [SMALL_STATE(7)] = 328,
  [SMALL_STATE(8)] = 410,
  [SMALL_STATE(9)] = 492,
  [SMALL_STATE(10)] = 573,
  [SMALL_STATE(11)] = 654,
  [SMALL_STATE(12)] = 736,
  [SMALL_STATE(13)] = 818,
  [SMALL_STATE(14)] = 900,
  [SMALL_STATE(15)] = 982,
  [SMALL_STATE(16)] = 1064,
  [SMALL_STATE(17)] = 1146,
  [SMALL_STATE(18)] = 1181,
  [SMALL_STATE(19)] = 1216,
  [SMALL_STATE(20)] = 1248,
  [SMALL_STATE(21)] = 1280,
  [SMALL_STATE(22)] = 1312,
  [SMALL_STATE(23)] = 1344,
  [SMALL_STATE(24)] = 1376,
  [SMALL_STATE(25)] = 1408,
  [SMALL_STATE(26)] = 1440,
  [SMALL_STATE(27)] = 1472,
  [SMALL_STATE(28)] = 1504,
  [SMALL_STATE(29)] = 1536,
  [SMALL_STATE(30)] = 1568,
  [SMALL_STATE(31)] = 1600,
  [SMALL_STATE(32)] = 1632,
  [SMALL_STATE(33)] = 1664,
  [SMALL_STATE(34)] = 1696,
  [SMALL_STATE(35)] = 1728,
  [SMALL_STATE(36)] = 1760,
  [SMALL_STATE(37)] = 1792,
  [SMALL_STATE(38)] = 1824,
  [SMALL_STATE(39)] = 1856,
  [SMALL_STATE(40)] = 1888,
  [SMALL_STATE(41)] = 1933,
  [SMALL_STATE(42)] = 1969,
  [SMALL_STATE(43)] = 2005,
  [SMALL_STATE(44)] = 2041,
  [SMALL_STATE(45)] = 2063,
  [SMALL_STATE(46)] = 2085,
  [SMALL_STATE(47)] = 2110,
  [SMALL_STATE(48)] = 2135,
  [SMALL_STATE(49)] = 2149,
  [SMALL_STATE(50)] = 2168,
  [SMALL_STATE(51)] = 2187,
  [SMALL_STATE(52)] = 2201,
  [SMALL_STATE(53)] = 2215,
  [SMALL_STATE(54)] = 2229,
  [SMALL_STATE(55)] = 2243,
  [SMALL_STATE(56)] = 2257,
  [SMALL_STATE(57)] = 2270,
  [SMALL_STATE(58)] = 2283,
  [SMALL_STATE(59)] = 2291,
  [SMALL_STATE(60)] = 2299,
  [SMALL_STATE(61)] = 2306,
  [SMALL_STATE(62)] = 2311,
  [SMALL_STATE(63)] = 2318,
  [SMALL_STATE(64)] = 2325,
  [SMALL_STATE(65)] = 2332,
  [SMALL_STATE(66)] = 2339,
  [SMALL_STATE(67)] = 2343,
  [SMALL_STATE(68)] = 2347,
  [SMALL_STATE(69)] = 2351,
  [SMALL_STATE(70)] = 2355,
  [SMALL_STATE(71)] = 2359,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(36),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(12),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(63),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(55),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(47),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(65),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(41),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(14),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(4),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(5),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(6),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(49),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(56),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(57),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(57),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(36),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(63),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(55),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(47),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(65),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(41),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(49),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(56),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(57),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(57),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 5),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 5),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_comment, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_comment, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 4),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_string, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 3),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_comment, 3),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_comment, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure, 2),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(40),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(36),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(12),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(63),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(55),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(61),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(43),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(44),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(68),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(60),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(69),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2), SHIFT_REPEAT(48),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_comment_repeat1, 2), SHIFT_REPEAT(52),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_comment_repeat1, 2), SHIFT_REPEAT(54),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_comment_repeat1, 2),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat2, 2), SHIFT_REPEAT(67),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat2, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [408] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
