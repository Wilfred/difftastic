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
#define STATE_COUNT 77
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
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
  anon_sym_POUNDreader = 54,
  anon_sym_POUNDlang = 55,
  aux_sym_extension_token1 = 56,
  sym_program = 57,
  sym__token = 58,
  sym__skip = 59,
  sym_comment = 60,
  sym__block_comment = 61,
  sym__datum = 62,
  sym_string = 63,
  sym_byte_string = 64,
  sym_regex = 65,
  sym__real_string = 66,
  sym_escape_sequence = 67,
  sym_box = 68,
  sym_list = 69,
  sym_vector = 70,
  sym_structure = 71,
  sym_hash = 72,
  sym_graph = 73,
  sym_extension = 74,
  aux_sym_program_repeat1 = 75,
  aux_sym_comment_repeat1 = 76,
  aux_sym_comment_repeat2 = 77,
  aux_sym__block_comment_repeat1 = 78,
  aux_sym__real_string_repeat1 = 79,
  aux_sym_list_repeat1 = 80,
  aux_sym_vector_repeat1 = 81,
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
  [anon_sym_POUNDreader] = "#reader",
  [anon_sym_POUNDlang] = "#lang ",
  [aux_sym_extension_token1] = "extension_token1",
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
  [anon_sym_POUNDreader] = anon_sym_POUNDreader,
  [anon_sym_POUNDlang] = anon_sym_POUNDlang,
  [aux_sym_extension_token1] = aux_sym_extension_token1,
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
  [anon_sym_POUNDreader] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDlang] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_extension_token1] = {
    .visible = false,
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
      if (eof) ADVANCE(198);
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == ';') ADVANCE(203);
      if (lookahead == '=') ADVANCE(361);
      if (lookahead == '[') ADVANCE(350);
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead == ']') ADVANCE(351);
      if (lookahead == '{') ADVANCE(352);
      if (lookahead == '|') ADVANCE(212);
      if (lookahead == '}') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(211);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(205);
      if (lookahead == '/') ADVANCE(206);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(363);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == '=') ADVANCE(361);
      if (lookahead == '[') ADVANCE(350);
      if (lookahead == '{') ADVANCE(352);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(157);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(269);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '|') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(211);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(160);
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(13);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(15);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(281);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(18);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(20);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(159);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(192);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(192);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(178);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(137);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(269);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(281);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(163);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(122);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(273);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(148);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(164);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(181);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(181);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(143);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(277);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(143);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(121);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(277);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(285);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(306);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(143);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(306);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(162);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(141);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(141);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(120);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(13);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(289);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(143);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(289);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(190);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(141);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(190);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(141);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(141);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(18);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(165);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(166);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(167);
      END_STATE();
    case 56:
      if (lookahead == 'U') ADVANCE(346);
      if (lookahead == 'b') ADVANCE(329);
      if (lookahead == 'l') ADVANCE(334);
      if (lookahead == 'n') ADVANCE(332);
      if (lookahead == 'p') ADVANCE(330);
      if (lookahead == 'r') ADVANCE(333);
      if (lookahead == 's') ADVANCE(336);
      if (lookahead == 't') ADVANCE(331);
      if (lookahead == 'u') ADVANCE(342);
      if (lookahead == 'v') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(328);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'b') ADVANCE(328);
      END_STATE();
    case 63:
      if (lookahead == 'b') ADVANCE(88);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(328);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'x') ADVANCE(222);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 75:
      if (lookahead == 'f') ADVANCE(74);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(2);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(358);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 80:
      if (lookahead == 'k') ADVANCE(95);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(335);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(328);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 90:
      if (lookahead == 'q') ADVANCE(359);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(362);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 100:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 101:
      if (lookahead == 'w') ADVANCE(82);
      END_STATE();
    case 102:
      if (lookahead == 'x') ADVANCE(222);
      END_STATE();
    case 103:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 104:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(151);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(317);
      END_STATE();
    case 105:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 106:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 107:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(152);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(316);
      END_STATE();
    case 108:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(320);
      END_STATE();
    case 109:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      END_STATE();
    case 110:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 111:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(155);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(324);
      END_STATE();
    case 112:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(319);
      END_STATE();
    case 113:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      END_STATE();
    case 114:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 115:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(156);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(133);
      END_STATE();
    case 116:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(325);
      END_STATE();
    case 117:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 118:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(134);
      END_STATE();
    case 119:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 120:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 121:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 125:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(30);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(31);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 126:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 127:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 128:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(45);
      END_STATE();
    case 129:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(53);
      END_STATE();
    case 130:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(54);
      END_STATE();
    case 131:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 132:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 133:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(133);
      END_STATE();
    case 134:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(134);
      END_STATE();
    case 135:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 136:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 137:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 138:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 139:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 140:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 141:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 142:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 143:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 144:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 145:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 146:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 147:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 148:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 149:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(271);
      END_STATE();
    case 150:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(275);
      END_STATE();
    case 151:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(317);
      END_STATE();
    case 152:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(316);
      END_STATE();
    case 153:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(279);
      END_STATE();
    case 154:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(15);
      END_STATE();
    case 155:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(324);
      END_STATE();
    case 156:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(133);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 161:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(238);
      END_STATE();
    case 162:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(256);
      END_STATE();
    case 163:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(312);
      END_STATE();
    case 164:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 165:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(315);
      END_STATE();
    case 166:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(318);
      END_STATE();
    case 167:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(321);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(328);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(283);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(287);
      END_STATE();
    case 171:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(320);
      END_STATE();
    case 172:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(319);
      END_STATE();
    case 173:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(291);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(20);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(325);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(134);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(296);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(310);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      END_STATE();
    case 196:
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 197:
      if (eof) ADVANCE(198);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(199);
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == ';') ADVANCE(203);
      if (lookahead == '[') ADVANCE(350);
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead == ']') ADVANCE(351);
      if (lookahead == '{') ADVANCE(352);
      if (lookahead == '}') ADVANCE(353);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_dot);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_POUND_BANG_SLASH);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '\'') ADVANCE(234);
      if (lookahead == 'U') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(235);
      if (lookahead == 'a') ADVANCE(225);
      if (lookahead == 'b') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == 'f') ADVANCE(230);
      if (lookahead == 'n') ADVANCE(228);
      if (lookahead == 'r') ADVANCE(231);
      if (lookahead == 't') ADVANCE(227);
      if (lookahead == 'u') ADVANCE(242);
      if (lookahead == 'v') ADVANCE(229);
      if (lookahead == 'x') ADVANCE(239);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == '#') ADVANCE(214);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == '|') ADVANCE(210);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead == 'x') ADVANCE(355);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '&') ADVANCE(347);
      if (lookahead == ';') ADVANCE(204);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(5);
      if (lookahead == 'F' ||
          lookahead == 'T') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(216);
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'p') ADVANCE(102);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == 's') ADVANCE(357);
      if (lookahead == 't') ADVANCE(217);
      if (lookahead == '|') ADVANCE(210);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(6);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(12);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(17);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '|') ADVANCE(210);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '#') ADVANCE(221);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__real_string_token1);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_BSLASHa);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_BSLASHb);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_BSLASHv);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_BSLASHf);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_BSLASHe);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_BSLASH_SQUOTE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(236);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(237);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_BSLASHx);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_BSLASHu);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_BSLASHU);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(250);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '.') ADVANCE(259);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '.') ADVANCE(260);
      if (lookahead == '/') ADVANCE(177);
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
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(260);
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
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(266);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == '/') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(266);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == '/') ADVANCE(181);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
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
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '/') ADVANCE(149);
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
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '/') ADVANCE(149);
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
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(271);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(272);
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
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '.') ADVANCE(275);
      if (lookahead == '/') ADVANCE(150);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(273);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == '/') ADVANCE(150);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(275);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(277);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '/') ADVANCE(153);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(279);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
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
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(282);
      if (lookahead == '.') ADVANCE(283);
      if (lookahead == '/') ADVANCE(169);
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
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(282);
      if (lookahead == '.') ADVANCE(284);
      if (lookahead == '/') ADVANCE(169);
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
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(283);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(284);
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
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
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
      if (lookahead == '/') ADVANCE(170);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
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
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
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
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
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
      if (lookahead == '/') ADVANCE(173);
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
      if (lookahead == '/') ADVANCE(173);
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
      if (lookahead == '#') ADVANCE(295);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(105);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(295);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(105);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(293);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(295);
      if (lookahead == '.') ADVANCE(297);
      if (lookahead == '/') ADVANCE(185);
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
          lookahead == 't') ADVANCE(105);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(105);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(297);
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
          lookahead == 't') ADVANCE(105);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(105);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(296);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '.') ADVANCE(302);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '.') ADVANCE(302);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(299);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '.') ADVANCE(303);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(303);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(303);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(303);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(302);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '.') ADVANCE(310);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(191);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '.') ADVANCE(310);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '.') ADVANCE(311);
      if (lookahead == '/') ADVANCE(189);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(311);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(191);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(311);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(311);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(328);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(168);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(328);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(339);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(340);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(341);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(342);
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
      ACCEPT_TOKEN(anon_sym_POUND_AMP);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_POUNDfl);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_POUNDfx);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_vector_token1);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_POUNDs);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_POUNDhash);
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_POUNDhasheq);
      if (lookahead == 'v') ADVANCE(360);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_POUNDhasheqv);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_POUNDreader);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_POUNDlang);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_extension_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 197},
  [2] = {.lex_state = 197},
  [3] = {.lex_state = 197},
  [4] = {.lex_state = 197},
  [5] = {.lex_state = 197},
  [6] = {.lex_state = 197},
  [7] = {.lex_state = 197},
  [8] = {.lex_state = 197},
  [9] = {.lex_state = 197},
  [10] = {.lex_state = 197},
  [11] = {.lex_state = 197},
  [12] = {.lex_state = 197},
  [13] = {.lex_state = 197},
  [14] = {.lex_state = 197},
  [15] = {.lex_state = 197},
  [16] = {.lex_state = 197},
  [17] = {.lex_state = 197},
  [18] = {.lex_state = 197},
  [19] = {.lex_state = 197},
  [20] = {.lex_state = 197},
  [21] = {.lex_state = 197},
  [22] = {.lex_state = 197},
  [23] = {.lex_state = 197},
  [24] = {.lex_state = 197},
  [25] = {.lex_state = 197},
  [26] = {.lex_state = 197},
  [27] = {.lex_state = 197},
  [28] = {.lex_state = 197},
  [29] = {.lex_state = 197},
  [30] = {.lex_state = 197},
  [31] = {.lex_state = 197},
  [32] = {.lex_state = 197},
  [33] = {.lex_state = 197},
  [34] = {.lex_state = 197},
  [35] = {.lex_state = 197},
  [36] = {.lex_state = 197},
  [37] = {.lex_state = 197},
  [38] = {.lex_state = 197},
  [39] = {.lex_state = 197},
  [40] = {.lex_state = 197},
  [41] = {.lex_state = 197},
  [42] = {.lex_state = 197},
  [43] = {.lex_state = 197},
  [44] = {.lex_state = 197},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 197},
  [61] = {.lex_state = 197},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 207},
  [65] = {.lex_state = 197},
  [66] = {.lex_state = 161},
  [67] = {.lex_state = 207},
  [68] = {.lex_state = 193},
  [69] = {.lex_state = 207},
  [70] = {.lex_state = 194},
  [71] = {.lex_state = 207},
  [72] = {.lex_state = 197},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 196},
  [75] = {.lex_state = 195},
  [76] = {.lex_state = 0},
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
    [sym_program] = STATE(76),
    [sym__token] = STATE(10),
    [sym_comment] = STATE(10),
    [sym__block_comment] = STATE(38),
    [sym__datum] = STATE(10),
    [sym_string] = STATE(10),
    [sym_byte_string] = STATE(10),
    [sym_regex] = STATE(10),
    [sym__real_string] = STATE(36),
    [sym_box] = STATE(10),
    [sym_list] = STATE(10),
    [sym_vector] = STATE(10),
    [sym_structure] = STATE(10),
    [sym_hash] = STATE(10),
    [sym_graph] = STATE(10),
    [sym_extension] = STATE(10),
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
    [anon_sym_POUNDreader] = ACTIONS(39),
    [anon_sym_POUNDlang] = ACTIONS(41),
  },
  [2] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(38),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(36),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [sym__whitespace] = ACTIONS(43),
    [sym_dot] = ACTIONS(46),
    [aux_sym_comment_token1] = ACTIONS(49),
    [anon_sym_POUND_SEMI] = ACTIONS(52),
    [anon_sym_POUND_BANG] = ACTIONS(55),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(55),
    [anon_sym_POUND_PIPE] = ACTIONS(58),
    [sym_boolean] = ACTIONS(46),
    [anon_sym_POUND] = ACTIONS(61),
    [aux_sym_regex_token1] = ACTIONS(64),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [sym_number] = ACTIONS(43),
    [sym_character] = ACTIONS(43),
    [anon_sym_POUND_AMP] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_RBRACK] = ACTIONS(76),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(76),
    [anon_sym_POUNDfl] = ACTIONS(84),
    [anon_sym_POUNDfx] = ACTIONS(84),
    [anon_sym_POUNDs] = ACTIONS(87),
    [anon_sym_POUNDhash] = ACTIONS(90),
    [anon_sym_POUNDhasheq] = ACTIONS(90),
    [anon_sym_POUNDhasheqv] = ACTIONS(93),
    [anon_sym_POUNDreader] = ACTIONS(96),
    [anon_sym_POUNDlang] = ACTIONS(99),
  },
  [3] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(38),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(36),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [sym__whitespace] = ACTIONS(102),
    [sym_dot] = ACTIONS(104),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(104),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(102),
    [sym_character] = ACTIONS(102),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_POUNDreader] = ACTIONS(39),
    [anon_sym_POUNDlang] = ACTIONS(41),
  },
  [4] = {
    [sym__token] = STATE(3),
    [sym_comment] = STATE(3),
    [sym__block_comment] = STATE(38),
    [sym__datum] = STATE(3),
    [sym_string] = STATE(3),
    [sym_byte_string] = STATE(3),
    [sym_regex] = STATE(3),
    [sym__real_string] = STATE(36),
    [sym_box] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_structure] = STATE(3),
    [sym_hash] = STATE(3),
    [sym_graph] = STATE(3),
    [sym_extension] = STATE(3),
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
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_POUNDreader] = ACTIONS(39),
    [anon_sym_POUNDlang] = ACTIONS(41),
  },
  [5] = {
    [sym__token] = STATE(8),
    [sym_comment] = STATE(8),
    [sym__block_comment] = STATE(38),
    [sym__datum] = STATE(8),
    [sym_string] = STATE(8),
    [sym_byte_string] = STATE(8),
    [sym_regex] = STATE(8),
    [sym__real_string] = STATE(36),
    [sym_box] = STATE(8),
    [sym_list] = STATE(8),
    [sym_vector] = STATE(8),
    [sym_structure] = STATE(8),
    [sym_hash] = STATE(8),
    [sym_graph] = STATE(8),
    [sym_extension] = STATE(8),
    [aux_sym_list_repeat1] = STATE(8),
    [sym__whitespace] = ACTIONS(114),
    [sym_dot] = ACTIONS(116),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(116),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(114),
    [sym_character] = ACTIONS(114),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(112),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_POUNDreader] = ACTIONS(39),
    [anon_sym_POUNDlang] = ACTIONS(41),
  },
  [6] = {
    [sym__token] = STATE(7),
    [sym_comment] = STATE(7),
    [sym__block_comment] = STATE(38),
    [sym__datum] = STATE(7),
    [sym_string] = STATE(7),
    [sym_byte_string] = STATE(7),
    [sym_regex] = STATE(7),
    [sym__real_string] = STATE(36),
    [sym_box] = STATE(7),
    [sym_list] = STATE(7),
    [sym_vector] = STATE(7),
    [sym_structure] = STATE(7),
    [sym_hash] = STATE(7),
    [sym_graph] = STATE(7),
    [sym_extension] = STATE(7),
    [aux_sym_list_repeat1] = STATE(7),
    [sym__whitespace] = ACTIONS(118),
    [sym_dot] = ACTIONS(120),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(120),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(118),
    [sym_character] = ACTIONS(118),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(112),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_POUNDreader] = ACTIONS(39),
    [anon_sym_POUNDlang] = ACTIONS(41),
  },
  [7] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(38),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(36),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [sym__whitespace] = ACTIONS(102),
    [sym_dot] = ACTIONS(104),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(104),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(102),
    [sym_character] = ACTIONS(102),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(106),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_POUNDreader] = ACTIONS(39),
    [anon_sym_POUNDlang] = ACTIONS(41),
  },
  [8] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(38),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(36),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [sym__whitespace] = ACTIONS(102),
    [sym_dot] = ACTIONS(104),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(104),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(102),
    [sym_character] = ACTIONS(102),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(106),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_POUNDreader] = ACTIONS(39),
    [anon_sym_POUNDlang] = ACTIONS(41),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 1,
      aux_sym_comment_token1,
    ACTIONS(130), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(136), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(139), 1,
      sym_boolean,
    ACTIONS(142), 1,
      anon_sym_POUND,
    ACTIONS(145), 1,
      aux_sym_regex_token1,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_POUND_AMP,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_POUNDs,
    ACTIONS(172), 1,
      anon_sym_POUNDhasheqv,
    ACTIONS(175), 1,
      anon_sym_POUNDreader,
    ACTIONS(178), 1,
      anon_sym_POUNDlang,
    STATE(36), 1,
      sym__real_string,
    STATE(38), 1,
      sym__block_comment,
    ACTIONS(133), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(163), 2,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
    ACTIONS(169), 2,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(124), 3,
      sym__whitespace,
      sym_number,
      sym_character,
    STATE(9), 14,
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
      sym_extension,
      aux_sym_program_repeat1,
  [88] = 23,
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
    ACTIONS(39), 1,
      anon_sym_POUNDreader,
    ACTIONS(41), 1,
      anon_sym_POUNDlang,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(185), 1,
      sym_boolean,
    STATE(36), 1,
      sym__real_string,
    STATE(38), 1,
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
    ACTIONS(183), 3,
      sym__whitespace,
      sym_number,
      sym_character,
    STATE(9), 14,
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
      sym_extension,
      aux_sym_program_repeat1,
  [176] = 22,
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
    ACTIONS(187), 1,
      sym__whitespace,
    ACTIONS(189), 1,
      sym_boolean,
    STATE(36), 1,
      sym__real_string,
    STATE(38), 1,
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
    ACTIONS(191), 2,
      sym_number,
      sym_character,
    STATE(18), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    STATE(23), 10,
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
  [258] = 22,
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
    ACTIONS(193), 1,
      sym__whitespace,
    ACTIONS(195), 1,
      sym_boolean,
    STATE(36), 1,
      sym__real_string,
    STATE(38), 1,
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
    STATE(17), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    STATE(26), 10,
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
  [340] = 22,
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
    ACTIONS(199), 1,
      sym__whitespace,
    ACTIONS(201), 1,
      sym_boolean,
    STATE(36), 1,
      sym__real_string,
    STATE(38), 1,
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
    ACTIONS(203), 2,
      sym_number,
      sym_character,
    STATE(44), 3,
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
  [422] = 22,
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
    ACTIONS(205), 1,
      sym__whitespace,
    ACTIONS(207), 1,
      sym_boolean,
    STATE(36), 1,
      sym__real_string,
    STATE(38), 1,
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
    ACTIONS(209), 2,
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
  [504] = 22,
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
    ACTIONS(211), 1,
      sym__whitespace,
    ACTIONS(213), 1,
      sym_boolean,
    STATE(36), 1,
      sym__real_string,
    STATE(38), 1,
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
    ACTIONS(215), 2,
      sym_number,
      sym_character,
    STATE(13), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    STATE(34), 10,
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
  [586] = 22,
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
    ACTIONS(199), 1,
      sym__whitespace,
    ACTIONS(217), 1,
      sym_boolean,
    STATE(36), 1,
      sym__real_string,
    STATE(38), 1,
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
    ACTIONS(219), 2,
      sym_number,
      sym_character,
    STATE(44), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    STATE(33), 10,
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
  [668] = 22,
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
    ACTIONS(199), 1,
      sym__whitespace,
    ACTIONS(221), 1,
      sym_boolean,
    STATE(36), 1,
      sym__real_string,
    STATE(38), 1,
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
    ACTIONS(223), 2,
      sym_number,
      sym_character,
    STATE(44), 3,
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
  [750] = 22,
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
    ACTIONS(199), 1,
      sym__whitespace,
    ACTIONS(225), 1,
      sym_boolean,
    STATE(36), 1,
      sym__real_string,
    STATE(38), 1,
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
    ACTIONS(227), 2,
      sym_number,
      sym_character,
    STATE(44), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    STATE(43), 10,
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
  [832] = 3,
    ACTIONS(233), 1,
      anon_sym_BSLASH,
    ACTIONS(231), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(229), 24,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [869] = 3,
    ACTIONS(233), 1,
      anon_sym_BSLASH,
    ACTIONS(237), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(235), 24,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [906] = 2,
    ACTIONS(241), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(239), 24,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [940] = 2,
    ACTIONS(245), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(243), 24,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [974] = 2,
    ACTIONS(237), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(235), 24,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1008] = 2,
    ACTIONS(249), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(247), 24,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1042] = 2,
    ACTIONS(253), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(251), 24,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1076] = 2,
    ACTIONS(257), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(255), 24,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1110] = 2,
    ACTIONS(261), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(259), 24,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1144] = 2,
    ACTIONS(265), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(263), 24,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1178] = 2,
    ACTIONS(269), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(267), 24,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1212] = 2,
    ACTIONS(273), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(271), 24,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1246] = 2,
    ACTIONS(277), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(275), 24,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1280] = 2,
    ACTIONS(281), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(279), 24,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1314] = 2,
    ACTIONS(285), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(283), 24,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1348] = 2,
    ACTIONS(289), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(287), 24,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1382] = 2,
    ACTIONS(293), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(291), 24,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1416] = 2,
    ACTIONS(297), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(295), 24,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1450] = 2,
    ACTIONS(301), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(299), 24,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1484] = 2,
    ACTIONS(305), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(303), 24,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1518] = 2,
    ACTIONS(309), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(307), 24,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1552] = 2,
    ACTIONS(313), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(311), 24,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1586] = 2,
    ACTIONS(317), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(315), 24,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1620] = 2,
    ACTIONS(321), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(319), 24,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1654] = 2,
    ACTIONS(231), 5,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(229), 24,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1688] = 9,
    ACTIONS(323), 1,
      sym__whitespace,
    ACTIONS(326), 1,
      aux_sym_comment_token1,
    ACTIONS(329), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(335), 1,
      anon_sym_POUND_PIPE,
    STATE(38), 1,
      sym__block_comment,
    ACTIONS(332), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    STATE(44), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    ACTIONS(338), 4,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(340), 12,
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
  [1733] = 8,
    ACTIONS(342), 1,
      anon_sym_BSLASH,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      aux_sym__real_string_token1,
    ACTIONS(350), 1,
      anon_sym_BSLASHx,
    ACTIONS(352), 1,
      anon_sym_BSLASHu,
    ACTIONS(354), 1,
      anon_sym_BSLASHU,
    STATE(46), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(348), 11,
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
  [1769] = 8,
    ACTIONS(342), 1,
      anon_sym_BSLASH,
    ACTIONS(350), 1,
      anon_sym_BSLASHx,
    ACTIONS(352), 1,
      anon_sym_BSLASHu,
    ACTIONS(354), 1,
      anon_sym_BSLASHU,
    ACTIONS(356), 1,
      anon_sym_DQUOTE,
    ACTIONS(358), 1,
      aux_sym__real_string_token1,
    STATE(47), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(348), 11,
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
  [1805] = 8,
    ACTIONS(360), 1,
      anon_sym_BSLASH,
    ACTIONS(363), 1,
      anon_sym_DQUOTE,
    ACTIONS(365), 1,
      aux_sym__real_string_token1,
    ACTIONS(371), 1,
      anon_sym_BSLASHx,
    ACTIONS(374), 1,
      anon_sym_BSLASHu,
    ACTIONS(377), 1,
      anon_sym_BSLASHU,
    STATE(47), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(368), 11,
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
  [1841] = 2,
    ACTIONS(380), 1,
      anon_sym_BSLASH,
    ACTIONS(382), 16,
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
  [1863] = 2,
    ACTIONS(384), 1,
      anon_sym_BSLASH,
    ACTIONS(386), 16,
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
  [1885] = 8,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(388), 1,
      aux_sym_vector_token1,
    STATE(27), 1,
      sym__real_string,
    STATE(28), 1,
      sym_list,
    STATE(51), 1,
      aux_sym_vector_repeat1,
  [1910] = 8,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(390), 1,
      anon_sym_POUND,
    ACTIONS(392), 1,
      aux_sym_vector_token1,
    ACTIONS(394), 1,
      anon_sym_EQ,
    STATE(39), 1,
      sym_list,
    STATE(52), 1,
      aux_sym_vector_repeat1,
  [1935] = 3,
    ACTIONS(398), 1,
      aux_sym_vector_token1,
    STATE(52), 1,
      aux_sym_vector_repeat1,
    ACTIONS(396), 5,
      anon_sym_POUND,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [1949] = 6,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(392), 1,
      aux_sym_vector_token1,
    STATE(39), 1,
      sym_list,
    STATE(52), 1,
      aux_sym_vector_repeat1,
  [1968] = 6,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(401), 1,
      aux_sym_vector_token1,
    STATE(28), 1,
      sym_list,
    STATE(53), 1,
      aux_sym_vector_repeat1,
  [1987] = 4,
    ACTIONS(403), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(406), 1,
      aux_sym__block_comment_token1,
    ACTIONS(409), 1,
      anon_sym_PIPE_POUND,
    STATE(55), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [2001] = 4,
    ACTIONS(411), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(413), 1,
      aux_sym__block_comment_token1,
    ACTIONS(415), 1,
      anon_sym_PIPE_POUND,
    STATE(59), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [2015] = 4,
    ACTIONS(411), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(417), 1,
      aux_sym__block_comment_token1,
    ACTIONS(419), 1,
      anon_sym_PIPE_POUND,
    STATE(55), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [2029] = 4,
    ACTIONS(411), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(421), 1,
      aux_sym__block_comment_token1,
    ACTIONS(423), 1,
      anon_sym_PIPE_POUND,
    STATE(57), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [2043] = 4,
    ACTIONS(411), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(417), 1,
      aux_sym__block_comment_token1,
    ACTIONS(425), 1,
      anon_sym_PIPE_POUND,
    STATE(55), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [2057] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_list,
  [2070] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_list,
  [2083] = 2,
    ACTIONS(321), 1,
      aux_sym__block_comment_token1,
    ACTIONS(319), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [2091] = 2,
    ACTIONS(253), 1,
      aux_sym__block_comment_token1,
    ACTIONS(251), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [2099] = 2,
    ACTIONS(427), 1,
      aux_sym_comment_token2,
    STATE(69), 1,
      aux_sym_comment_repeat2,
  [2106] = 2,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      sym__real_string,
  [2113] = 1,
    ACTIONS(429), 2,
      sym__newline,
      aux_sym_escape_sequence_token1,
  [2118] = 2,
    ACTIONS(431), 1,
      aux_sym_comment_token2,
    STATE(67), 1,
      aux_sym_comment_repeat2,
  [2125] = 2,
    ACTIONS(429), 1,
      aux_sym_escape_sequence_token3,
    ACTIONS(434), 1,
      aux_sym_escape_sequence_token4,
  [2132] = 2,
    ACTIONS(436), 1,
      aux_sym_comment_token2,
    STATE(67), 1,
      aux_sym_comment_repeat2,
  [2139] = 1,
    ACTIONS(429), 1,
      aux_sym_escape_sequence_token2,
  [2143] = 1,
    ACTIONS(438), 1,
      aux_sym_comment_token2,
  [2147] = 1,
    ACTIONS(233), 1,
      anon_sym_BSLASH,
  [2151] = 1,
    ACTIONS(440), 1,
      sym__newline,
  [2155] = 1,
    ACTIONS(215), 1,
      aux_sym_extension_token1,
  [2159] = 1,
    ACTIONS(429), 1,
      aux_sym_escape_sequence_token5,
  [2163] = 1,
    ACTIONS(442), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 88,
  [SMALL_STATE(11)] = 176,
  [SMALL_STATE(12)] = 258,
  [SMALL_STATE(13)] = 340,
  [SMALL_STATE(14)] = 422,
  [SMALL_STATE(15)] = 504,
  [SMALL_STATE(16)] = 586,
  [SMALL_STATE(17)] = 668,
  [SMALL_STATE(18)] = 750,
  [SMALL_STATE(19)] = 832,
  [SMALL_STATE(20)] = 869,
  [SMALL_STATE(21)] = 906,
  [SMALL_STATE(22)] = 940,
  [SMALL_STATE(23)] = 974,
  [SMALL_STATE(24)] = 1008,
  [SMALL_STATE(25)] = 1042,
  [SMALL_STATE(26)] = 1076,
  [SMALL_STATE(27)] = 1110,
  [SMALL_STATE(28)] = 1144,
  [SMALL_STATE(29)] = 1178,
  [SMALL_STATE(30)] = 1212,
  [SMALL_STATE(31)] = 1246,
  [SMALL_STATE(32)] = 1280,
  [SMALL_STATE(33)] = 1314,
  [SMALL_STATE(34)] = 1348,
  [SMALL_STATE(35)] = 1382,
  [SMALL_STATE(36)] = 1416,
  [SMALL_STATE(37)] = 1450,
  [SMALL_STATE(38)] = 1484,
  [SMALL_STATE(39)] = 1518,
  [SMALL_STATE(40)] = 1552,
  [SMALL_STATE(41)] = 1586,
  [SMALL_STATE(42)] = 1620,
  [SMALL_STATE(43)] = 1654,
  [SMALL_STATE(44)] = 1688,
  [SMALL_STATE(45)] = 1733,
  [SMALL_STATE(46)] = 1769,
  [SMALL_STATE(47)] = 1805,
  [SMALL_STATE(48)] = 1841,
  [SMALL_STATE(49)] = 1863,
  [SMALL_STATE(50)] = 1885,
  [SMALL_STATE(51)] = 1910,
  [SMALL_STATE(52)] = 1935,
  [SMALL_STATE(53)] = 1949,
  [SMALL_STATE(54)] = 1968,
  [SMALL_STATE(55)] = 1987,
  [SMALL_STATE(56)] = 2001,
  [SMALL_STATE(57)] = 2015,
  [SMALL_STATE(58)] = 2029,
  [SMALL_STATE(59)] = 2043,
  [SMALL_STATE(60)] = 2057,
  [SMALL_STATE(61)] = 2070,
  [SMALL_STATE(62)] = 2083,
  [SMALL_STATE(63)] = 2091,
  [SMALL_STATE(64)] = 2099,
  [SMALL_STATE(65)] = 2106,
  [SMALL_STATE(66)] = 2113,
  [SMALL_STATE(67)] = 2118,
  [SMALL_STATE(68)] = 2125,
  [SMALL_STATE(69)] = 2132,
  [SMALL_STATE(70)] = 2139,
  [SMALL_STATE(71)] = 2143,
  [SMALL_STATE(72)] = 2147,
  [SMALL_STATE(73)] = 2151,
  [SMALL_STATE(74)] = 2155,
  [SMALL_STATE(75)] = 2159,
  [SMALL_STATE(76)] = 2163,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(38),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(11),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(64),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(56),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(50),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(65),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(45),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(14),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(5),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(6),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(54),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(60),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(61),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(61),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(15),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(74),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(38),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(64),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(56),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(50),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(65),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(45),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(54),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(60),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(61),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(61),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(74),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 5),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 5),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_comment, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_comment, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 4),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_string, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 3),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 3),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 3),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_comment, 3),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_comment, 3),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(44),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(38),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(11),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(64),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(56),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(66),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(47),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(49),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(70),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(68),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(75),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2), SHIFT_REPEAT(52),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_comment_repeat1, 2), SHIFT_REPEAT(58),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_comment_repeat1, 2), SHIFT_REPEAT(55),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_comment_repeat1, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat2, 2), SHIFT_REPEAT(72),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat2, 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [442] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
