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
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
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
  anon_sym_LPAREN = 39,
  anon_sym_RPAREN = 40,
  anon_sym_LBRACK = 41,
  anon_sym_RBRACK = 42,
  anon_sym_LBRACE = 43,
  anon_sym_RBRACE = 44,
  sym_program = 45,
  sym__token = 46,
  sym__skip = 47,
  sym_comment = 48,
  sym__block_comment = 49,
  sym__datum = 50,
  sym__simple_datum = 51,
  sym_string = 52,
  sym_byte_string = 53,
  sym_regex = 54,
  sym__real_string = 55,
  sym_escape_sequence = 56,
  sym__compound_datum = 57,
  sym_list = 58,
  aux_sym_program_repeat1 = 59,
  aux_sym_comment_repeat1 = 60,
  aux_sym_comment_repeat2 = 61,
  aux_sym__block_comment_repeat1 = 62,
  aux_sym__real_string_repeat1 = 63,
  aux_sym_list_repeat1 = 64,
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
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
  [sym__compound_datum] = "_compound_datum",
  [sym_list] = "list",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [sym__compound_datum] = sym__compound_datum,
  [sym_list] = sym_list,
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
  [sym__compound_datum] = {
    .visible = false,
    .named = true,
  },
  [sym_list] = {
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
      if (eof) ADVANCE(183);
      if (lookahead == '\n') ADVANCE(208);
      if (lookahead == '"') ADVANCE(207);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '(') ADVANCE(331);
      if (lookahead == ')') ADVANCE(332);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == ';') ADVANCE(188);
      if (lookahead == '[') ADVANCE(333);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == ']') ADVANCE(334);
      if (lookahead == '{') ADVANCE(335);
      if (lookahead == '|') ADVANCE(197);
      if (lookahead == '}') ADVANCE(336);
      if (lookahead != 0) ADVANCE(196);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(190);
      if (lookahead == '/') ADVANCE(191);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(194);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(111);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '.') ADVANCE(135);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(33);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(253);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(100);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(100);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(100);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(100);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(198);
      if (lookahead == '|') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(196);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(146);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(11);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(101);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(101);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(13);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(101);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(101);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(265);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(161);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(16);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(161);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(18);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(179);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(103);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(103);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(179);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(103);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(103);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(123);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(135);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(33);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(253);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(265);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(150);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(132);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(108);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(257);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(134);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(283);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(151);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(129);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(261);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(129);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(107);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(261);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(133);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(269);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(290);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(129);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(290);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(149);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(127);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(127);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(11);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(273);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(129);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(273);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(127);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(127);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(127);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(16);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(152);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(153);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(154);
      END_STATE();
    case 54:
      if (lookahead == 'U') ADVANCE(330);
      if (lookahead == 'b') ADVANCE(313);
      if (lookahead == 'l') ADVANCE(318);
      if (lookahead == 'n') ADVANCE(316);
      if (lookahead == 'p') ADVANCE(314);
      if (lookahead == 'r') ADVANCE(317);
      if (lookahead == 's') ADVANCE(320);
      if (lookahead == 't') ADVANCE(315);
      if (lookahead == 'u') ADVANCE(326);
      if (lookahead == 'v') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(312);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(77);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(312);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 67:
      if (lookahead == 'f') ADVANCE(66);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 70:
      if (lookahead == 'k') ADVANCE(81);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(319);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 78:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(312);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 84:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 85:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 86:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 87:
      if (lookahead == 'w') ADVANCE(73);
      END_STATE();
    case 88:
      if (lookahead == 'x') ADVANCE(206);
      END_STATE();
    case 89:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      END_STATE();
    case 90:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(137);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(301);
      END_STATE();
    case 91:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 92:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 93:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(138);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(300);
      END_STATE();
    case 94:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(304);
      END_STATE();
    case 95:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(306);
      END_STATE();
    case 96:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 97:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(141);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(308);
      END_STATE();
    case 98:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(303);
      END_STATE();
    case 99:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 100:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 101:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(142);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(119);
      END_STATE();
    case 102:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(309);
      END_STATE();
    case 103:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 104:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(120);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 107:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 108:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 111:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(28);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(32);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(29);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(30);
      END_STATE();
    case 112:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(31);
      END_STATE();
    case 113:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 114:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(43);
      END_STATE();
    case 115:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(51);
      END_STATE();
    case 116:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(52);
      END_STATE();
    case 117:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(53);
      END_STATE();
    case 118:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 119:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(119);
      END_STATE();
    case 120:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(120);
      END_STATE();
    case 121:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 122:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 123:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 124:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 125:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 126:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 127:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 128:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 129:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 130:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 131:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 132:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 133:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 134:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 135:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(255);
      END_STATE();
    case 136:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(259);
      END_STATE();
    case 137:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(301);
      END_STATE();
    case 138:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(300);
      END_STATE();
    case 139:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(263);
      END_STATE();
    case 140:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(13);
      END_STATE();
    case 141:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(308);
      END_STATE();
    case 142:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(119);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 147:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(222);
      END_STATE();
    case 148:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      END_STATE();
    case 149:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(240);
      END_STATE();
    case 150:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(296);
      END_STATE();
    case 151:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 152:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(299);
      END_STATE();
    case 153:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(302);
      END_STATE();
    case 154:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(305);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(312);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(267);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(271);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(304);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(303);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(275);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(18);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(309);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(120);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 171:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 172:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 173:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(286);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(306);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      END_STATE();
    case 182:
      if (eof) ADVANCE(183);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(184);
      if (lookahead == '"') ADVANCE(207);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '(') ADVANCE(331);
      if (lookahead == ')') ADVANCE(332);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == ';') ADVANCE(188);
      if (lookahead == '[') ADVANCE(333);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == ']') ADVANCE(334);
      if (lookahead == '{') ADVANCE(335);
      if (lookahead == '}') ADVANCE(336);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_dot);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_POUND_BANG_SLASH);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(217);
      if (lookahead == '\'') ADVANCE(218);
      if (lookahead == 'U') ADVANCE(231);
      if (lookahead == '\\') ADVANCE(219);
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == 'b') ADVANCE(210);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == 'f') ADVANCE(214);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(215);
      if (lookahead == 't') ADVANCE(211);
      if (lookahead == 'u') ADVANCE(226);
      if (lookahead == 'v') ADVANCE(213);
      if (lookahead == 'x') ADVANCE(223);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == '#') ADVANCE(199);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == '|') ADVANCE(195);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == ';') ADVANCE(189);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(3);
      if (lookahead == 'F' ||
          lookahead == 'T') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(201);
      if (lookahead == 'p') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead == 't') ADVANCE(202);
      if (lookahead == '|') ADVANCE(195);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(4);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(10);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(15);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(20);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '|') ADVANCE(195);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '#') ADVANCE(205);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__real_string_token1);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_BSLASHa);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_BSLASHb);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_BSLASHv);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_BSLASHf);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_BSLASHe);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_BSLASH_SQUOTE);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(220);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(221);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_BSLASHx);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_BSLASHu);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_BSLASHU);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
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
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '.') ADVANCE(243);
      if (lookahead == '/') ADVANCE(164);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(89);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '.') ADVANCE(244);
      if (lookahead == '/') ADVANCE(164);
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
          lookahead == 't') ADVANCE(89);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(89);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(244);
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
          lookahead == 't') ADVANCE(89);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '.') ADVANCE(247);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(92);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(92);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(92);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(92);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '.') ADVANCE(251);
      if (lookahead == '/') ADVANCE(168);
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
      if (lookahead == '/') ADVANCE(168);
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
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(253);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(90);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '.') ADVANCE(256);
      if (lookahead == '/') ADVANCE(135);
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
          lookahead == 't') ADVANCE(90);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(255);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(90);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(256);
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
          lookahead == 't') ADVANCE(90);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '.') ADVANCE(259);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(257);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(93);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '.') ADVANCE(260);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(93);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(259);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(93);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(93);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == '/') ADVANCE(139);
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
      if (lookahead == '/') ADVANCE(139);
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
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(265);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(94);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(266);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == '/') ADVANCE(156);
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
          lookahead == 't') ADVANCE(94);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(94);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(268);
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
          lookahead == 't') ADVANCE(94);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
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
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
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
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
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
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
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
      if (lookahead == '/') ADVANCE(160);
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
      if (lookahead == '/') ADVANCE(160);
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
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '/') ADVANCE(172);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(91);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '/') ADVANCE(172);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(91);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(277);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == '/') ADVANCE(172);
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
          lookahead == 't') ADVANCE(91);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(281);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(91);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(281);
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
          lookahead == 't') ADVANCE(91);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(281);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(91);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(280);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '.') ADVANCE(286);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(95);
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
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(95);
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
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
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
      if (lookahead == '#') ADVANCE(287);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(95);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(287);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(95);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(287);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(95);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(286);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '.') ADVANCE(294);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(178);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(99);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(290);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '.') ADVANCE(294);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(99);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '/') ADVANCE(176);
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
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(103);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(295);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(178);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(99);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(294);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(295);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(99);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(295);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(99);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(312);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(155);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(312);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(324);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(325);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(326);
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
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 182},
  [2] = {.lex_state = 182},
  [3] = {.lex_state = 182},
  [4] = {.lex_state = 182},
  [5] = {.lex_state = 182},
  [6] = {.lex_state = 182},
  [7] = {.lex_state = 182},
  [8] = {.lex_state = 182},
  [9] = {.lex_state = 182},
  [10] = {.lex_state = 182},
  [11] = {.lex_state = 182},
  [12] = {.lex_state = 182},
  [13] = {.lex_state = 182},
  [14] = {.lex_state = 182},
  [15] = {.lex_state = 182},
  [16] = {.lex_state = 182},
  [17] = {.lex_state = 182},
  [18] = {.lex_state = 182},
  [19] = {.lex_state = 182},
  [20] = {.lex_state = 182},
  [21] = {.lex_state = 182},
  [22] = {.lex_state = 182},
  [23] = {.lex_state = 182},
  [24] = {.lex_state = 182},
  [25] = {.lex_state = 182},
  [26] = {.lex_state = 182},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 182},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 192},
  [41] = {.lex_state = 182},
  [42] = {.lex_state = 148},
  [43] = {.lex_state = 182},
  [44] = {.lex_state = 192},
  [45] = {.lex_state = 147},
  [46] = {.lex_state = 192},
  [47] = {.lex_state = 148},
  [48] = {.lex_state = 182},
  [49] = {.lex_state = 192},
  [50] = {.lex_state = 180},
  [51] = {.lex_state = 181},
  [52] = {.lex_state = 0},
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
    [sym_program] = STATE(52),
    [sym__token] = STATE(10),
    [sym_comment] = STATE(10),
    [sym__block_comment] = STATE(16),
    [sym__datum] = STATE(10),
    [sym__simple_datum] = STATE(10),
    [sym_string] = STATE(10),
    [sym_byte_string] = STATE(10),
    [sym_regex] = STATE(10),
    [sym__real_string] = STATE(24),
    [sym__compound_datum] = STATE(10),
    [sym_list] = STATE(10),
    [aux_sym_program_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(15),
    [aux_sym_regex_token1] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(5),
    [sym_character] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(30), 1,
      sym_dot,
    ACTIONS(33), 1,
      aux_sym_comment_token1,
    ACTIONS(36), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(42), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(45), 1,
      anon_sym_POUND,
    ACTIONS(48), 1,
      aux_sym_regex_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(62), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym__block_comment,
    STATE(24), 1,
      sym__real_string,
    ACTIONS(39), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(57), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(27), 4,
      sym__whitespace,
      sym_boolean,
      sym_number,
      sym_character,
    STATE(2), 10,
      sym__token,
      sym_comment,
      sym__datum,
      sym__simple_datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym__compound_datum,
      sym_list,
      aux_sym_list_repeat1,
  [64] = 16,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      aux_sym_regex_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      sym_dot,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym__block_comment,
    STATE(24), 1,
      sym__real_string,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(65), 4,
      sym__whitespace,
      sym_boolean,
      sym_number,
      sym_character,
    STATE(2), 10,
      sym__token,
      sym_comment,
      sym__datum,
      sym__simple_datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym__compound_datum,
      sym_list,
      aux_sym_list_repeat1,
  [126] = 16,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      aux_sym_regex_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      sym_dot,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    STATE(16), 1,
      sym__block_comment,
    STATE(24), 1,
      sym__real_string,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(65), 4,
      sym__whitespace,
      sym_boolean,
      sym_number,
      sym_character,
    STATE(2), 10,
      sym__token,
      sym_comment,
      sym__datum,
      sym__simple_datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym__compound_datum,
      sym_list,
      aux_sym_list_repeat1,
  [188] = 16,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      aux_sym_regex_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym_dot,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym__block_comment,
    STATE(24), 1,
      sym__real_string,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(71), 4,
      sym__whitespace,
      sym_boolean,
      sym_number,
      sym_character,
    STATE(8), 10,
      sym__token,
      sym_comment,
      sym__datum,
      sym__simple_datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym__compound_datum,
      sym_list,
      aux_sym_list_repeat1,
  [250] = 16,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      aux_sym_regex_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_dot,
    STATE(16), 1,
      sym__block_comment,
    STATE(24), 1,
      sym__real_string,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(77), 4,
      sym__whitespace,
      sym_boolean,
      sym_number,
      sym_character,
    STATE(4), 10,
      sym__token,
      sym_comment,
      sym__datum,
      sym__simple_datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym__compound_datum,
      sym_list,
      aux_sym_list_repeat1,
  [312] = 16,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      aux_sym_regex_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(83), 1,
      sym_dot,
    STATE(16), 1,
      sym__block_comment,
    STATE(24), 1,
      sym__real_string,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(81), 4,
      sym__whitespace,
      sym_boolean,
      sym_number,
      sym_character,
    STATE(3), 10,
      sym__token,
      sym_comment,
      sym__datum,
      sym__simple_datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym__compound_datum,
      sym_list,
      aux_sym_list_repeat1,
  [374] = 16,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      aux_sym_regex_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      sym_dot,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym__block_comment,
    STATE(24), 1,
      sym__real_string,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(65), 4,
      sym__whitespace,
      sym_boolean,
      sym_number,
      sym_character,
    STATE(2), 10,
      sym__token,
      sym_comment,
      sym__datum,
      sym__simple_datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym__compound_datum,
      sym_list,
      aux_sym_list_repeat1,
  [436] = 15,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 1,
      aux_sym_comment_token1,
    ACTIONS(93), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(99), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(102), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      aux_sym_regex_token1,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_LBRACK,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym__block_comment,
    STATE(24), 1,
      sym__real_string,
    ACTIONS(96), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(87), 4,
      sym__whitespace,
      sym_boolean,
      sym_number,
      sym_character,
    STATE(9), 10,
      sym__token,
      sym_comment,
      sym__datum,
      sym__simple_datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym__compound_datum,
      sym_list,
      aux_sym_program_repeat1,
  [495] = 15,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      aux_sym_regex_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym__block_comment,
    STATE(24), 1,
      sym__real_string,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(122), 4,
      sym__whitespace,
      sym_boolean,
      sym_number,
      sym_character,
    STATE(9), 10,
      sym__token,
      sym_comment,
      sym__datum,
      sym__simple_datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym__compound_datum,
      sym_list,
      aux_sym_program_repeat1,
  [554] = 16,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      aux_sym_regex_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(124), 1,
      sym__whitespace,
    STATE(16), 1,
      sym__block_comment,
    STATE(24), 1,
      sym__real_string,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(126), 3,
      sym_boolean,
      sym_number,
      sym_character,
    STATE(12), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    STATE(17), 7,
      sym__datum,
      sym__simple_datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym__compound_datum,
      sym_list,
  [614] = 16,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      aux_sym_regex_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      sym__whitespace,
    STATE(16), 1,
      sym__block_comment,
    STATE(24), 1,
      sym__real_string,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(130), 3,
      sym_boolean,
      sym_number,
      sym_character,
    STATE(28), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    STATE(25), 7,
      sym__datum,
      sym__simple_datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym__compound_datum,
      sym_list,
  [674] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH,
    ACTIONS(134), 2,
      sym_dot,
      anon_sym_POUND,
    ACTIONS(132), 18,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [702] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH,
    ACTIONS(140), 2,
      sym_dot,
      anon_sym_POUND,
    ACTIONS(138), 18,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [730] = 2,
    ACTIONS(144), 2,
      sym_dot,
      anon_sym_POUND,
    ACTIONS(142), 18,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [755] = 2,
    ACTIONS(148), 2,
      sym_dot,
      anon_sym_POUND,
    ACTIONS(146), 18,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [780] = 2,
    ACTIONS(134), 2,
      sym_dot,
      anon_sym_POUND,
    ACTIONS(132), 18,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [805] = 2,
    ACTIONS(152), 2,
      sym_dot,
      anon_sym_POUND,
    ACTIONS(150), 18,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [830] = 2,
    ACTIONS(156), 2,
      sym_dot,
      anon_sym_POUND,
    ACTIONS(154), 18,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [855] = 2,
    ACTIONS(160), 2,
      sym_dot,
      anon_sym_POUND,
    ACTIONS(158), 18,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [880] = 2,
    ACTIONS(164), 2,
      sym_dot,
      anon_sym_POUND,
    ACTIONS(162), 18,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [905] = 2,
    ACTIONS(168), 2,
      sym_dot,
      anon_sym_POUND,
    ACTIONS(166), 18,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [930] = 2,
    ACTIONS(172), 2,
      sym_dot,
      anon_sym_POUND,
    ACTIONS(170), 18,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [955] = 2,
    ACTIONS(176), 2,
      sym_dot,
      anon_sym_POUND,
    ACTIONS(174), 18,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [980] = 2,
    ACTIONS(140), 2,
      sym_dot,
      anon_sym_POUND,
    ACTIONS(138), 18,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1005] = 2,
    ACTIONS(180), 2,
      sym_dot,
      anon_sym_POUND,
    ACTIONS(178), 18,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1030] = 8,
    ACTIONS(182), 1,
      anon_sym_BSLASH,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      aux_sym__real_string_token1,
    ACTIONS(193), 1,
      anon_sym_BSLASHx,
    ACTIONS(196), 1,
      anon_sym_BSLASHu,
    ACTIONS(199), 1,
      anon_sym_BSLASHU,
    STATE(27), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(190), 11,
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
  [1066] = 9,
    ACTIONS(202), 1,
      sym__whitespace,
    ACTIONS(205), 1,
      aux_sym_comment_token1,
    ACTIONS(208), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(214), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(219), 1,
      anon_sym_POUND,
    STATE(16), 1,
      sym__block_comment,
    ACTIONS(211), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    STATE(28), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    ACTIONS(217), 8,
      sym_boolean,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [1104] = 8,
    ACTIONS(221), 1,
      anon_sym_BSLASH,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      aux_sym__real_string_token1,
    ACTIONS(229), 1,
      anon_sym_BSLASHx,
    ACTIONS(231), 1,
      anon_sym_BSLASHu,
    ACTIONS(233), 1,
      anon_sym_BSLASHU,
    STATE(30), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(227), 11,
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
  [1140] = 8,
    ACTIONS(221), 1,
      anon_sym_BSLASH,
    ACTIONS(229), 1,
      anon_sym_BSLASHx,
    ACTIONS(231), 1,
      anon_sym_BSLASHu,
    ACTIONS(233), 1,
      anon_sym_BSLASHU,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__real_string_token1,
    STATE(27), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(227), 11,
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
  [1176] = 2,
    ACTIONS(239), 1,
      anon_sym_BSLASH,
    ACTIONS(241), 16,
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
  [1198] = 2,
    ACTIONS(243), 1,
      anon_sym_BSLASH,
    ACTIONS(245), 16,
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
  [1220] = 4,
    ACTIONS(247), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(249), 1,
      aux_sym__block_comment_token1,
    ACTIONS(251), 1,
      anon_sym_PIPE_POUND,
    STATE(36), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [1234] = 4,
    ACTIONS(247), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(253), 1,
      aux_sym__block_comment_token1,
    ACTIONS(255), 1,
      anon_sym_PIPE_POUND,
    STATE(33), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [1248] = 4,
    ACTIONS(247), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(257), 1,
      aux_sym__block_comment_token1,
    ACTIONS(259), 1,
      anon_sym_PIPE_POUND,
    STATE(37), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [1262] = 4,
    ACTIONS(261), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(264), 1,
      aux_sym__block_comment_token1,
    ACTIONS(267), 1,
      anon_sym_PIPE_POUND,
    STATE(36), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [1276] = 4,
    ACTIONS(247), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(249), 1,
      aux_sym__block_comment_token1,
    ACTIONS(269), 1,
      anon_sym_PIPE_POUND,
    STATE(36), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [1290] = 2,
    ACTIONS(156), 1,
      aux_sym__block_comment_token1,
    ACTIONS(154), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [1298] = 2,
    ACTIONS(144), 1,
      aux_sym__block_comment_token1,
    ACTIONS(142), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [1306] = 2,
    ACTIONS(271), 1,
      aux_sym_comment_token2,
    STATE(44), 1,
      aux_sym_comment_repeat2,
  [1313] = 2,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      sym__real_string,
  [1320] = 2,
    ACTIONS(273), 1,
      aux_sym_escape_sequence_token3,
    ACTIONS(275), 1,
      aux_sym_escape_sequence_token4,
  [1327] = 2,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym__real_string,
  [1334] = 2,
    ACTIONS(277), 1,
      aux_sym_comment_token2,
    STATE(44), 1,
      aux_sym_comment_repeat2,
  [1341] = 1,
    ACTIONS(273), 2,
      sym__newline,
      aux_sym_escape_sequence_token1,
  [1346] = 2,
    ACTIONS(280), 1,
      aux_sym_comment_token2,
    STATE(40), 1,
      aux_sym_comment_repeat2,
  [1353] = 1,
    ACTIONS(282), 1,
      sym__newline,
  [1357] = 1,
    ACTIONS(136), 1,
      anon_sym_BSLASH,
  [1361] = 1,
    ACTIONS(284), 1,
      aux_sym_comment_token2,
  [1365] = 1,
    ACTIONS(273), 1,
      aux_sym_escape_sequence_token5,
  [1369] = 1,
    ACTIONS(273), 1,
      aux_sym_escape_sequence_token2,
  [1373] = 1,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 64,
  [SMALL_STATE(4)] = 126,
  [SMALL_STATE(5)] = 188,
  [SMALL_STATE(6)] = 250,
  [SMALL_STATE(7)] = 312,
  [SMALL_STATE(8)] = 374,
  [SMALL_STATE(9)] = 436,
  [SMALL_STATE(10)] = 495,
  [SMALL_STATE(11)] = 554,
  [SMALL_STATE(12)] = 614,
  [SMALL_STATE(13)] = 674,
  [SMALL_STATE(14)] = 702,
  [SMALL_STATE(15)] = 730,
  [SMALL_STATE(16)] = 755,
  [SMALL_STATE(17)] = 780,
  [SMALL_STATE(18)] = 805,
  [SMALL_STATE(19)] = 830,
  [SMALL_STATE(20)] = 855,
  [SMALL_STATE(21)] = 880,
  [SMALL_STATE(22)] = 905,
  [SMALL_STATE(23)] = 930,
  [SMALL_STATE(24)] = 955,
  [SMALL_STATE(25)] = 980,
  [SMALL_STATE(26)] = 1005,
  [SMALL_STATE(27)] = 1030,
  [SMALL_STATE(28)] = 1066,
  [SMALL_STATE(29)] = 1104,
  [SMALL_STATE(30)] = 1140,
  [SMALL_STATE(31)] = 1176,
  [SMALL_STATE(32)] = 1198,
  [SMALL_STATE(33)] = 1220,
  [SMALL_STATE(34)] = 1234,
  [SMALL_STATE(35)] = 1248,
  [SMALL_STATE(36)] = 1262,
  [SMALL_STATE(37)] = 1276,
  [SMALL_STATE(38)] = 1290,
  [SMALL_STATE(39)] = 1298,
  [SMALL_STATE(40)] = 1306,
  [SMALL_STATE(41)] = 1313,
  [SMALL_STATE(42)] = 1320,
  [SMALL_STATE(43)] = 1327,
  [SMALL_STATE(44)] = 1334,
  [SMALL_STATE(45)] = 1341,
  [SMALL_STATE(46)] = 1346,
  [SMALL_STATE(47)] = 1353,
  [SMALL_STATE(48)] = 1357,
  [SMALL_STATE(49)] = 1361,
  [SMALL_STATE(50)] = 1365,
  [SMALL_STATE(51)] = 1369,
  [SMALL_STATE(52)] = 1373,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(16),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(11),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(46),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(35),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(43),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(41),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(29),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(5),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(6),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(7),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(46),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(35),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(43),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(41),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_comment, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_comment, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_comment, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_comment, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_string, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(45),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(27),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(31),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(51),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(42),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(50),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(28),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(16),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(11),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(46),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(35),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_comment_repeat1, 2), SHIFT_REPEAT(34),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_comment_repeat1, 2), SHIFT_REPEAT(36),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_comment_repeat1, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat2, 2), SHIFT_REPEAT(48),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat2, 3),
  [286] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
