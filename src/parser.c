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
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 77
#define ALIAS_COUNT 0
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
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
  anon_sym_POUNDs = 48,
  anon_sym_POUNDhash = 49,
  anon_sym_POUNDhasheq = 50,
  anon_sym_POUNDhasheqv = 51,
  sym_program = 52,
  sym__token = 53,
  sym__skip = 54,
  sym_comment = 55,
  sym__block_comment = 56,
  sym__datum = 57,
  sym__simple_datum = 58,
  sym_string = 59,
  sym_byte_string = 60,
  sym_regex = 61,
  sym__real_string = 62,
  sym_escape_sequence = 63,
  sym_box = 64,
  sym__compound_datum = 65,
  sym_list = 66,
  sym__abbrev_list = 67,
  sym_vector = 68,
  sym_structure = 69,
  sym_hash = 70,
  aux_sym_program_repeat1 = 71,
  aux_sym_comment_repeat1 = 72,
  aux_sym_comment_repeat2 = 73,
  aux_sym__block_comment_repeat1 = 74,
  aux_sym__real_string_repeat1 = 75,
  aux_sym_list_repeat1 = 76,
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
  [anon_sym_POUNDs] = "#s",
  [anon_sym_POUNDhash] = "#hash",
  [anon_sym_POUNDhasheq] = "#hasheq",
  [anon_sym_POUNDhasheqv] = "#hasheqv",
  [sym_program] = "program",
  [sym__token] = "_token",
  [sym__skip] = "_skip",
  [sym_comment] = "comment",
  [sym__block_comment] = "_block_comment",
  [sym__datum] = "_datum",
  [sym__simple_datum] = "_simple_datum",
  [sym_string] = "string",
  [sym_byte_string] = "byte_string",
  [sym_regex] = "regex",
  [sym__real_string] = "_real_string",
  [sym_escape_sequence] = "escape_sequence",
  [sym_box] = "box",
  [sym__compound_datum] = "_compound_datum",
  [sym_list] = "list",
  [sym__abbrev_list] = "_abbrev_list",
  [sym_vector] = "vector",
  [sym_structure] = "structure",
  [sym_hash] = "hash",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_comment_repeat2] = "comment_repeat2",
  [aux_sym__block_comment_repeat1] = "_block_comment_repeat1",
  [aux_sym__real_string_repeat1] = "_real_string_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
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
  [anon_sym_POUNDs] = anon_sym_POUNDs,
  [anon_sym_POUNDhash] = anon_sym_POUNDhash,
  [anon_sym_POUNDhasheq] = anon_sym_POUNDhasheq,
  [anon_sym_POUNDhasheqv] = anon_sym_POUNDhasheqv,
  [sym_program] = sym_program,
  [sym__token] = sym__token,
  [sym__skip] = sym__skip,
  [sym_comment] = sym_comment,
  [sym__block_comment] = sym__block_comment,
  [sym__datum] = sym__datum,
  [sym__simple_datum] = sym__simple_datum,
  [sym_string] = sym_string,
  [sym_byte_string] = sym_byte_string,
  [sym_regex] = sym_regex,
  [sym__real_string] = sym__real_string,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_box] = sym_box,
  [sym__compound_datum] = sym__compound_datum,
  [sym_list] = sym_list,
  [sym__abbrev_list] = sym__abbrev_list,
  [sym_vector] = sym_vector,
  [sym_structure] = sym_structure,
  [sym_hash] = sym_hash,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym_comment_repeat2] = aux_sym_comment_repeat2,
  [aux_sym__block_comment_repeat1] = aux_sym__block_comment_repeat1,
  [aux_sym__real_string_repeat1] = aux_sym__real_string_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
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
  [sym__simple_datum] = {
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
  [sym__compound_datum] = {
    .visible = false,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym__abbrev_list] = {
    .visible = false,
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
      if (eof) ADVANCE(187);
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '(') ADVANCE(336);
      if (lookahead == ')') ADVANCE(337);
      if (lookahead == '.') ADVANCE(190);
      if (lookahead == ';') ADVANCE(192);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '\\') ADVANCE(197);
      if (lookahead == ']') ADVANCE(339);
      if (lookahead == '{') ADVANCE(340);
      if (lookahead == '|') ADVANCE(201);
      if (lookahead == '}') ADVANCE(341);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(194);
      if (lookahead == '/') ADVANCE(195);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(115);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(147);
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(33);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(257);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(202);
      if (lookahead == '|') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(200);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(150);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(11);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(105);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(105);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(13);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(105);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(105);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(269);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(16);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(18);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(149);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(281);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(183);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(107);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(107);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(183);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(107);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(107);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(127);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(33);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(257);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(269);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(281);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(154);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(136);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(112);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(261);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(138);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(155);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(133);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(265);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(133);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(111);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(265);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(137);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(273);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(133);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(153);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(131);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(131);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(110);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(11);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(277);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(133);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(277);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(181);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(131);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(181);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(131);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(296);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(131);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(16);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(156);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(157);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(158);
      END_STATE();
    case 54:
      if (lookahead == 'U') ADVANCE(334);
      if (lookahead == 'b') ADVANCE(317);
      if (lookahead == 'l') ADVANCE(322);
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead == 'p') ADVANCE(318);
      if (lookahead == 'r') ADVANCE(321);
      if (lookahead == 's') ADVANCE(324);
      if (lookahead == 't') ADVANCE(319);
      if (lookahead == 'u') ADVANCE(330);
      if (lookahead == 'v') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(316);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(79);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(316);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(67);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(64);
      END_STATE();
    case 70:
      if (lookahead == 'h') ADVANCE(345);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 72:
      if (lookahead == 'k') ADVANCE(85);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(323);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(316);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 80:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 81:
      if (lookahead == 'q') ADVANCE(346);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 88:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 89:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 90:
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 91:
      if (lookahead == 'w') ADVANCE(74);
      END_STATE();
    case 92:
      if (lookahead == 'x') ADVANCE(210);
      END_STATE();
    case 93:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 94:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(141);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(305);
      END_STATE();
    case 95:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 96:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 97:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(142);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(304);
      END_STATE();
    case 98:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(308);
      END_STATE();
    case 99:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(310);
      END_STATE();
    case 100:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 101:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(145);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(312);
      END_STATE();
    case 102:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(307);
      END_STATE();
    case 103:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      END_STATE();
    case 104:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 105:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(146);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(123);
      END_STATE();
    case 106:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(313);
      END_STATE();
    case 107:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 108:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(124);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(128);
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
          lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 113:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 114:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 115:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(28);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(32);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(29);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(30);
      END_STATE();
    case 116:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(31);
      END_STATE();
    case 117:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 118:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(43);
      END_STATE();
    case 119:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(51);
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
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 123:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(123);
      END_STATE();
    case 124:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(124);
      END_STATE();
    case 125:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 126:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 127:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 128:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 129:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 130:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 131:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 132:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 133:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 134:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 135:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 136:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(119);
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
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(259);
      END_STATE();
    case 140:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(263);
      END_STATE();
    case 141:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(305);
      END_STATE();
    case 142:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(304);
      END_STATE();
    case 143:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(267);
      END_STATE();
    case 144:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(13);
      END_STATE();
    case 145:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(312);
      END_STATE();
    case 146:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(123);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(28);
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
          lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 151:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(226);
      END_STATE();
    case 152:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      END_STATE();
    case 153:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(244);
      END_STATE();
    case 154:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(300);
      END_STATE();
    case 155:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 156:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(303);
      END_STATE();
    case 157:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(306);
      END_STATE();
    case 158:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(309);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(316);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(271);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(275);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(308);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(307);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(279);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(18);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(313);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(124);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 171:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 172:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 173:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(284);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(290);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(310);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(298);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      END_STATE();
    case 186:
      if (eof) ADVANCE(187);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(188);
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '(') ADVANCE(336);
      if (lookahead == ')') ADVANCE(337);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == ';') ADVANCE(192);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '\\') ADVANCE(197);
      if (lookahead == ']') ADVANCE(339);
      if (lookahead == '{') ADVANCE(340);
      if (lookahead == '}') ADVANCE(341);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_dot);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_POUND_BANG_SLASH);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == '\'') ADVANCE(222);
      if (lookahead == 'U') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(223);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'b') ADVANCE(214);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == 'f') ADVANCE(218);
      if (lookahead == 'n') ADVANCE(216);
      if (lookahead == 'r') ADVANCE(219);
      if (lookahead == 't') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(230);
      if (lookahead == 'v') ADVANCE(217);
      if (lookahead == 'x') ADVANCE(227);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == '#') ADVANCE(203);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == '|') ADVANCE(199);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(342);
      if (lookahead == 'x') ADVANCE(343);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '&') ADVANCE(335);
      if (lookahead == ';') ADVANCE(193);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(3);
      if (lookahead == 'F' ||
          lookahead == 'T') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 'h') ADVANCE(55);
      if (lookahead == 'p') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == 's') ADVANCE(344);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == '|') ADVANCE(199);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(4);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(10);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(15);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(20);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '|') ADVANCE(199);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '#') ADVANCE(209);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__real_string_token1);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_BSLASHa);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_BSLASHb);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_BSLASHv);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_BSLASHf);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_BSLASHe);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_BSLASH_SQUOTE);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(224);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(225);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_BSLASHx);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_BSLASHu);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_BSLASHU);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
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
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '.') ADVANCE(247);
      if (lookahead == '/') ADVANCE(168);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(93);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == '/') ADVANCE(168);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(93);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(93);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(93);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '.') ADVANCE(251);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(96);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '.') ADVANCE(252);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(96);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(252);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(96);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(252);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(96);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == '/') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(100);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '.') ADVANCE(256);
      if (lookahead == '/') ADVANCE(172);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(100);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(100);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(100);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '.') ADVANCE(259);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(257);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(94);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '.') ADVANCE(260);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '@') ADVANCE(38);
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
    case 259:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(259);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(94);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '@') ADVANCE(38);
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
    case 261:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(261);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(97);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(97);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(263);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(97);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(97);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(266);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(265);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(101);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(266);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == '/') ADVANCE(143);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(101);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(101);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(268);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(101);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(98);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(98);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(271);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(98);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(98);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '.') ADVANCE(275);
      if (lookahead == '/') ADVANCE(161);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(273);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == '/') ADVANCE(161);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(275);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == '/') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(277);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '/') ADVANCE(164);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(279);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(280);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(283);
      if (lookahead == '.') ADVANCE(284);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(95);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(283);
      if (lookahead == '.') ADVANCE(284);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(95);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(281);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(283);
      if (lookahead == '.') ADVANCE(285);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(95);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(95);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(95);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(95);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(284);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(289);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(99);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(289);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(99);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(287);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(289);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(99);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(99);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(99);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(99);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(290);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(295);
      if (lookahead == '.') ADVANCE(298);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(182);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(103);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(294);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(295);
      if (lookahead == '.') ADVANCE(298);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(103);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(295);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(180);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(107);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(299);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(182);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(103);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(298);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(299);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(103);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(299);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(316);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(159);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(328);
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
      ACCEPT_TOKEN(anon_sym_POUND_AMP);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_POUNDfl);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_POUNDfx);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_POUNDs);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_POUNDhash);
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_POUNDhasheq);
      if (lookahead == 'v') ADVANCE(347);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_POUNDhasheqv);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 186},
  [2] = {.lex_state = 186},
  [3] = {.lex_state = 186},
  [4] = {.lex_state = 186},
  [5] = {.lex_state = 186},
  [6] = {.lex_state = 186},
  [7] = {.lex_state = 186},
  [8] = {.lex_state = 186},
  [9] = {.lex_state = 186},
  [10] = {.lex_state = 186},
  [11] = {.lex_state = 186},
  [12] = {.lex_state = 186},
  [13] = {.lex_state = 186},
  [14] = {.lex_state = 186},
  [15] = {.lex_state = 186},
  [16] = {.lex_state = 186},
  [17] = {.lex_state = 186},
  [18] = {.lex_state = 186},
  [19] = {.lex_state = 186},
  [20] = {.lex_state = 186},
  [21] = {.lex_state = 186},
  [22] = {.lex_state = 186},
  [23] = {.lex_state = 186},
  [24] = {.lex_state = 186},
  [25] = {.lex_state = 186},
  [26] = {.lex_state = 186},
  [27] = {.lex_state = 186},
  [28] = {.lex_state = 186},
  [29] = {.lex_state = 186},
  [30] = {.lex_state = 186},
  [31] = {.lex_state = 186},
  [32] = {.lex_state = 186},
  [33] = {.lex_state = 186},
  [34] = {.lex_state = 186},
  [35] = {.lex_state = 186},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 186},
  [42] = {.lex_state = 186},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 186},
  [49] = {.lex_state = 186},
  [50] = {.lex_state = 186},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 152},
  [54] = {.lex_state = 196},
  [55] = {.lex_state = 196},
  [56] = {.lex_state = 151},
  [57] = {.lex_state = 196},
  [58] = {.lex_state = 186},
  [59] = {.lex_state = 184},
  [60] = {.lex_state = 152},
  [61] = {.lex_state = 185},
  [62] = {.lex_state = 196},
  [63] = {.lex_state = 186},
  [64] = {.lex_state = 0},
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
    [aux_sym__real_string_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(64),
    [sym__token] = STATE(10),
    [sym_comment] = STATE(10),
    [sym__block_comment] = STATE(29),
    [sym__datum] = STATE(10),
    [sym__simple_datum] = STATE(10),
    [sym_string] = STATE(10),
    [sym_byte_string] = STATE(10),
    [sym_regex] = STATE(10),
    [sym__real_string] = STATE(20),
    [sym_box] = STATE(10),
    [sym__compound_datum] = STATE(10),
    [sym_list] = STATE(10),
    [sym__abbrev_list] = STATE(10),
    [sym_vector] = STATE(10),
    [sym_structure] = STATE(10),
    [sym_hash] = STATE(10),
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
    [sym__block_comment] = STATE(29),
    [sym__datum] = STATE(2),
    [sym__simple_datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(20),
    [sym_box] = STATE(2),
    [sym__compound_datum] = STATE(2),
    [sym_list] = STATE(2),
    [sym__abbrev_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
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
  [3] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(29),
    [sym__datum] = STATE(2),
    [sym__simple_datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(20),
    [sym_box] = STATE(2),
    [sym__compound_datum] = STATE(2),
    [sym_list] = STATE(2),
    [sym__abbrev_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [sym__whitespace] = ACTIONS(92),
    [sym_dot] = ACTIONS(94),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(94),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(92),
    [sym_character] = ACTIONS(92),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(96),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
  },
  [4] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(29),
    [sym__datum] = STATE(2),
    [sym__simple_datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(20),
    [sym_box] = STATE(2),
    [sym__compound_datum] = STATE(2),
    [sym_list] = STATE(2),
    [sym__abbrev_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [sym__whitespace] = ACTIONS(92),
    [sym_dot] = ACTIONS(94),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(94),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(92),
    [sym_character] = ACTIONS(92),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
  },
  [5] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(29),
    [sym__datum] = STATE(2),
    [sym__simple_datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(20),
    [sym_box] = STATE(2),
    [sym__compound_datum] = STATE(2),
    [sym_list] = STATE(2),
    [sym__abbrev_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [sym__whitespace] = ACTIONS(92),
    [sym_dot] = ACTIONS(94),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(94),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(92),
    [sym_character] = ACTIONS(92),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
  },
  [6] = {
    [sym__token] = STATE(5),
    [sym_comment] = STATE(5),
    [sym__block_comment] = STATE(29),
    [sym__datum] = STATE(5),
    [sym__simple_datum] = STATE(5),
    [sym_string] = STATE(5),
    [sym_byte_string] = STATE(5),
    [sym_regex] = STATE(5),
    [sym__real_string] = STATE(20),
    [sym_box] = STATE(5),
    [sym__compound_datum] = STATE(5),
    [sym_list] = STATE(5),
    [sym__abbrev_list] = STATE(5),
    [sym_vector] = STATE(5),
    [sym_structure] = STATE(5),
    [sym_hash] = STATE(5),
    [aux_sym_list_repeat1] = STATE(5),
    [sym__whitespace] = ACTIONS(98),
    [sym_dot] = ACTIONS(100),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(100),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(98),
    [sym_character] = ACTIONS(98),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
  },
  [7] = {
    [sym__token] = STATE(4),
    [sym_comment] = STATE(4),
    [sym__block_comment] = STATE(29),
    [sym__datum] = STATE(4),
    [sym__simple_datum] = STATE(4),
    [sym_string] = STATE(4),
    [sym_byte_string] = STATE(4),
    [sym_regex] = STATE(4),
    [sym__real_string] = STATE(20),
    [sym_box] = STATE(4),
    [sym__compound_datum] = STATE(4),
    [sym_list] = STATE(4),
    [sym__abbrev_list] = STATE(4),
    [sym_vector] = STATE(4),
    [sym_structure] = STATE(4),
    [sym_hash] = STATE(4),
    [aux_sym_list_repeat1] = STATE(4),
    [sym__whitespace] = ACTIONS(104),
    [sym_dot] = ACTIONS(106),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(106),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(104),
    [sym_character] = ACTIONS(104),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(102),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
  },
  [8] = {
    [sym__token] = STATE(3),
    [sym_comment] = STATE(3),
    [sym__block_comment] = STATE(29),
    [sym__datum] = STATE(3),
    [sym__simple_datum] = STATE(3),
    [sym_string] = STATE(3),
    [sym_byte_string] = STATE(3),
    [sym_regex] = STATE(3),
    [sym__real_string] = STATE(20),
    [sym_box] = STATE(3),
    [sym__compound_datum] = STATE(3),
    [sym_list] = STATE(3),
    [sym__abbrev_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_structure] = STATE(3),
    [sym_hash] = STATE(3),
    [aux_sym_list_repeat1] = STATE(3),
    [sym__whitespace] = ACTIONS(108),
    [sym_dot] = ACTIONS(110),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(110),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(108),
    [sym_character] = ACTIONS(108),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(102),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
  },
  [9] = {
    [sym__token] = STATE(9),
    [sym_comment] = STATE(9),
    [sym__block_comment] = STATE(29),
    [sym__datum] = STATE(9),
    [sym__simple_datum] = STATE(9),
    [sym_string] = STATE(9),
    [sym_byte_string] = STATE(9),
    [sym_regex] = STATE(9),
    [sym__real_string] = STATE(20),
    [sym_box] = STATE(9),
    [sym__compound_datum] = STATE(9),
    [sym_list] = STATE(9),
    [sym__abbrev_list] = STATE(9),
    [sym_vector] = STATE(9),
    [sym_structure] = STATE(9),
    [sym_hash] = STATE(9),
    [aux_sym_program_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(112),
    [sym__whitespace] = ACTIONS(114),
    [aux_sym_comment_token1] = ACTIONS(117),
    [anon_sym_POUND_SEMI] = ACTIONS(120),
    [anon_sym_POUND_BANG] = ACTIONS(123),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(123),
    [anon_sym_POUND_PIPE] = ACTIONS(126),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(132),
    [aux_sym_regex_token1] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(114),
    [sym_character] = ACTIONS(114),
    [anon_sym_POUND_AMP] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(153),
    [anon_sym_POUNDfx] = ACTIONS(153),
    [anon_sym_POUNDs] = ACTIONS(156),
    [anon_sym_POUNDhash] = ACTIONS(159),
    [anon_sym_POUNDhasheq] = ACTIONS(159),
    [anon_sym_POUNDhasheqv] = ACTIONS(162),
  },
  [10] = {
    [sym__token] = STATE(9),
    [sym_comment] = STATE(9),
    [sym__block_comment] = STATE(29),
    [sym__datum] = STATE(9),
    [sym__simple_datum] = STATE(9),
    [sym_string] = STATE(9),
    [sym_byte_string] = STATE(9),
    [sym_regex] = STATE(9),
    [sym__real_string] = STATE(20),
    [sym_box] = STATE(9),
    [sym__compound_datum] = STATE(9),
    [sym_list] = STATE(9),
    [sym__abbrev_list] = STATE(9),
    [sym_vector] = STATE(9),
    [sym_structure] = STATE(9),
    [sym_hash] = STATE(9),
    [aux_sym_program_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym__whitespace] = ACTIONS(167),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(169),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(167),
    [sym_character] = ACTIONS(167),
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
  [11] = {
    [sym__skip] = STATE(35),
    [sym_comment] = STATE(35),
    [sym__block_comment] = STATE(29),
    [sym__datum] = STATE(25),
    [sym__simple_datum] = STATE(25),
    [sym_string] = STATE(25),
    [sym_byte_string] = STATE(25),
    [sym_regex] = STATE(25),
    [sym__real_string] = STATE(20),
    [sym_box] = STATE(25),
    [sym__compound_datum] = STATE(25),
    [sym_list] = STATE(25),
    [sym__abbrev_list] = STATE(25),
    [sym_vector] = STATE(25),
    [sym_structure] = STATE(25),
    [sym_hash] = STATE(25),
    [aux_sym_comment_repeat1] = STATE(35),
    [sym__whitespace] = ACTIONS(171),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(173),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(175),
    [sym_character] = ACTIONS(175),
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
  [12] = {
    [sym__skip] = STATE(11),
    [sym_comment] = STATE(11),
    [sym__block_comment] = STATE(29),
    [sym__datum] = STATE(21),
    [sym__simple_datum] = STATE(21),
    [sym_string] = STATE(21),
    [sym_byte_string] = STATE(21),
    [sym_regex] = STATE(21),
    [sym__real_string] = STATE(20),
    [sym_box] = STATE(21),
    [sym__compound_datum] = STATE(21),
    [sym_list] = STATE(21),
    [sym__abbrev_list] = STATE(21),
    [sym_vector] = STATE(21),
    [sym_structure] = STATE(21),
    [sym_hash] = STATE(21),
    [aux_sym_comment_repeat1] = STATE(11),
    [sym__whitespace] = ACTIONS(177),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(179),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(181),
    [sym_character] = ACTIONS(181),
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
  [13] = {
    [sym__skip] = STATE(35),
    [sym_comment] = STATE(35),
    [sym__block_comment] = STATE(29),
    [sym__datum] = STATE(27),
    [sym__simple_datum] = STATE(27),
    [sym_string] = STATE(27),
    [sym_byte_string] = STATE(27),
    [sym_regex] = STATE(27),
    [sym__real_string] = STATE(20),
    [sym_box] = STATE(27),
    [sym__compound_datum] = STATE(27),
    [sym_list] = STATE(27),
    [sym__abbrev_list] = STATE(27),
    [sym_vector] = STATE(27),
    [sym_structure] = STATE(27),
    [sym_hash] = STATE(27),
    [aux_sym_comment_repeat1] = STATE(35),
    [sym__whitespace] = ACTIONS(171),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(183),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(185),
    [sym_character] = ACTIONS(185),
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
  [14] = {
    [sym__skip] = STATE(13),
    [sym_comment] = STATE(13),
    [sym__block_comment] = STATE(29),
    [sym__datum] = STATE(34),
    [sym__simple_datum] = STATE(34),
    [sym_string] = STATE(34),
    [sym_byte_string] = STATE(34),
    [sym_regex] = STATE(34),
    [sym__real_string] = STATE(20),
    [sym_box] = STATE(34),
    [sym__compound_datum] = STATE(34),
    [sym_list] = STATE(34),
    [sym__abbrev_list] = STATE(34),
    [sym_vector] = STATE(34),
    [sym_structure] = STATE(34),
    [sym_hash] = STATE(34),
    [aux_sym_comment_repeat1] = STATE(13),
    [sym__whitespace] = ACTIONS(187),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(189),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(191),
    [sym_character] = ACTIONS(191),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(197), 1,
      anon_sym_BSLASH,
    ACTIONS(195), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(193), 22,
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
  [35] = 3,
    ACTIONS(197), 1,
      anon_sym_BSLASH,
    ACTIONS(201), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(199), 22,
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
  [70] = 2,
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
  [102] = 2,
    ACTIONS(209), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(207), 22,
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
  [134] = 2,
    ACTIONS(213), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(211), 22,
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
  [166] = 2,
    ACTIONS(217), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(215), 22,
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
  [198] = 2,
    ACTIONS(201), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(199), 22,
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
  [230] = 2,
    ACTIONS(221), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(219), 22,
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
  [262] = 2,
    ACTIONS(225), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(223), 22,
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
  [294] = 2,
    ACTIONS(229), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(227), 22,
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
  [326] = 2,
    ACTIONS(195), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(193), 22,
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
  [358] = 2,
    ACTIONS(233), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(231), 22,
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
  [390] = 2,
    ACTIONS(237), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(235), 22,
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
  [422] = 2,
    ACTIONS(241), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(239), 22,
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
  [454] = 2,
    ACTIONS(245), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(243), 22,
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
  [486] = 2,
    ACTIONS(249), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(247), 22,
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
  [518] = 2,
    ACTIONS(253), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(251), 22,
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
  [550] = 2,
    ACTIONS(257), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(255), 22,
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
  [582] = 2,
    ACTIONS(261), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(259), 22,
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
  [614] = 2,
    ACTIONS(265), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(263), 22,
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
  [646] = 9,
    ACTIONS(267), 1,
      sym__whitespace,
    ACTIONS(270), 1,
      aux_sym_comment_token1,
    ACTIONS(273), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(279), 1,
      anon_sym_POUND_PIPE,
    STATE(29), 1,
      sym__block_comment,
    ACTIONS(276), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    STATE(35), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    ACTIONS(282), 4,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(284), 12,
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
  [691] = 8,
    ACTIONS(286), 1,
      anon_sym_BSLASH,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      aux_sym__real_string_token1,
    ACTIONS(294), 1,
      anon_sym_BSLASHx,
    ACTIONS(296), 1,
      anon_sym_BSLASHu,
    ACTIONS(298), 1,
      anon_sym_BSLASHU,
    STATE(38), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(292), 11,
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
  [727] = 8,
    ACTIONS(286), 1,
      anon_sym_BSLASH,
    ACTIONS(294), 1,
      anon_sym_BSLASHx,
    ACTIONS(296), 1,
      anon_sym_BSLASHu,
    ACTIONS(298), 1,
      anon_sym_BSLASHU,
    ACTIONS(300), 1,
      anon_sym_DQUOTE,
    ACTIONS(302), 1,
      aux_sym__real_string_token1,
    STATE(36), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(292), 11,
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
  [763] = 8,
    ACTIONS(304), 1,
      anon_sym_BSLASH,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    ACTIONS(309), 1,
      aux_sym__real_string_token1,
    ACTIONS(315), 1,
      anon_sym_BSLASHx,
    ACTIONS(318), 1,
      anon_sym_BSLASHu,
    ACTIONS(321), 1,
      anon_sym_BSLASHU,
    STATE(38), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(312), 11,
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
  [799] = 2,
    ACTIONS(324), 1,
      anon_sym_BSLASH,
    ACTIONS(326), 16,
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
  [821] = 2,
    ACTIONS(328), 1,
      anon_sym_BSLASH,
    ACTIONS(330), 16,
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
  [843] = 7,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(332), 1,
      sym_number,
    STATE(17), 1,
      sym_list,
    STATE(26), 1,
      sym__real_string,
  [865] = 5,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(332), 1,
      sym_number,
    STATE(17), 1,
      sym_list,
  [881] = 4,
    ACTIONS(334), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(336), 1,
      aux_sym__block_comment_token1,
    ACTIONS(338), 1,
      anon_sym_PIPE_POUND,
    STATE(45), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [895] = 4,
    ACTIONS(334), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(340), 1,
      aux_sym__block_comment_token1,
    ACTIONS(342), 1,
      anon_sym_PIPE_POUND,
    STATE(46), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [909] = 4,
    ACTIONS(334), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(344), 1,
      aux_sym__block_comment_token1,
    ACTIONS(346), 1,
      anon_sym_PIPE_POUND,
    STATE(47), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [923] = 4,
    ACTIONS(334), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(344), 1,
      aux_sym__block_comment_token1,
    ACTIONS(348), 1,
      anon_sym_PIPE_POUND,
    STATE(47), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [937] = 4,
    ACTIONS(350), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(353), 1,
      aux_sym__block_comment_token1,
    ACTIONS(356), 1,
      anon_sym_PIPE_POUND,
    STATE(47), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [951] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_list,
  [964] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_list,
  [977] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_list,
  [990] = 2,
    ACTIONS(225), 1,
      aux_sym__block_comment_token1,
    ACTIONS(223), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [998] = 2,
    ACTIONS(229), 1,
      aux_sym__block_comment_token1,
    ACTIONS(227), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [1006] = 2,
    ACTIONS(358), 1,
      aux_sym_escape_sequence_token3,
    ACTIONS(360), 1,
      aux_sym_escape_sequence_token4,
  [1013] = 2,
    ACTIONS(362), 1,
      aux_sym_comment_token2,
    STATE(54), 1,
      aux_sym_comment_repeat2,
  [1020] = 2,
    ACTIONS(365), 1,
      aux_sym_comment_token2,
    STATE(57), 1,
      aux_sym_comment_repeat2,
  [1027] = 1,
    ACTIONS(358), 2,
      sym__newline,
      aux_sym_escape_sequence_token1,
  [1032] = 2,
    ACTIONS(367), 1,
      aux_sym_comment_token2,
    STATE(54), 1,
      aux_sym_comment_repeat2,
  [1039] = 2,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym__real_string,
  [1046] = 1,
    ACTIONS(358), 1,
      aux_sym_escape_sequence_token5,
  [1050] = 1,
    ACTIONS(369), 1,
      sym__newline,
  [1054] = 1,
    ACTIONS(358), 1,
      aux_sym_escape_sequence_token2,
  [1058] = 1,
    ACTIONS(371), 1,
      aux_sym_comment_token2,
  [1062] = 1,
    ACTIONS(197), 1,
      anon_sym_BSLASH,
  [1066] = 1,
    ACTIONS(373), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
  [SMALL_STATE(16)] = 35,
  [SMALL_STATE(17)] = 70,
  [SMALL_STATE(18)] = 102,
  [SMALL_STATE(19)] = 134,
  [SMALL_STATE(20)] = 166,
  [SMALL_STATE(21)] = 198,
  [SMALL_STATE(22)] = 230,
  [SMALL_STATE(23)] = 262,
  [SMALL_STATE(24)] = 294,
  [SMALL_STATE(25)] = 326,
  [SMALL_STATE(26)] = 358,
  [SMALL_STATE(27)] = 390,
  [SMALL_STATE(28)] = 422,
  [SMALL_STATE(29)] = 454,
  [SMALL_STATE(30)] = 486,
  [SMALL_STATE(31)] = 518,
  [SMALL_STATE(32)] = 550,
  [SMALL_STATE(33)] = 582,
  [SMALL_STATE(34)] = 614,
  [SMALL_STATE(35)] = 646,
  [SMALL_STATE(36)] = 691,
  [SMALL_STATE(37)] = 727,
  [SMALL_STATE(38)] = 763,
  [SMALL_STATE(39)] = 799,
  [SMALL_STATE(40)] = 821,
  [SMALL_STATE(41)] = 843,
  [SMALL_STATE(42)] = 865,
  [SMALL_STATE(43)] = 881,
  [SMALL_STATE(44)] = 895,
  [SMALL_STATE(45)] = 909,
  [SMALL_STATE(46)] = 923,
  [SMALL_STATE(47)] = 937,
  [SMALL_STATE(48)] = 951,
  [SMALL_STATE(49)] = 964,
  [SMALL_STATE(50)] = 977,
  [SMALL_STATE(51)] = 990,
  [SMALL_STATE(52)] = 998,
  [SMALL_STATE(53)] = 1006,
  [SMALL_STATE(54)] = 1013,
  [SMALL_STATE(55)] = 1020,
  [SMALL_STATE(56)] = 1027,
  [SMALL_STATE(57)] = 1032,
  [SMALL_STATE(58)] = 1039,
  [SMALL_STATE(59)] = 1046,
  [SMALL_STATE(60)] = 1050,
  [SMALL_STATE(61)] = 1054,
  [SMALL_STATE(62)] = 1058,
  [SMALL_STATE(63)] = 1062,
  [SMALL_STATE(64)] = 1066,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(29),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(12),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(55),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(44),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(41),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(58),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(37),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(14),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(6),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(7),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(8),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(42),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(48),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(49),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(49),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(55),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(44),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(41),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(58),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(37),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(42),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(48),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(49),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(49),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_comment, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_comment, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_comment, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_comment, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_string, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 2),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 2),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(35),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(29),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(12),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(55),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(44),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(56),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(38),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(39),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(61),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(53),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(59),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_comment_repeat1, 2), SHIFT_REPEAT(43),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_comment_repeat1, 2), SHIFT_REPEAT(47),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_comment_repeat1, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat2, 2), SHIFT_REPEAT(63),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat2, 3),
  [373] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
