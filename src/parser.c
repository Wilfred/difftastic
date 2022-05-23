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
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym__whitespace = 1,
  sym__newline = 2,
  aux_sym_comment_token1 = 3,
  anon_sym_POUND_SEMI = 4,
  anon_sym_POUND_BANG = 5,
  anon_sym_POUND_BANG_SLASH = 6,
  aux_sym_comment_token2 = 7,
  anon_sym_BSLASH = 8,
  anon_sym_POUND_PIPE = 9,
  aux_sym__block_comment_token1 = 10,
  anon_sym_PIPE_POUND = 11,
  sym_boolean = 12,
  anon_sym_POUND = 13,
  anon_sym_DQUOTE = 14,
  aux_sym__real_string_token1 = 15,
  anon_sym_BSLASHa = 16,
  anon_sym_BSLASHb = 17,
  anon_sym_BSLASHt = 18,
  anon_sym_BSLASHn = 19,
  anon_sym_BSLASHv = 20,
  anon_sym_BSLASHf = 21,
  anon_sym_BSLASHr = 22,
  anon_sym_BSLASHe = 23,
  anon_sym_BSLASH_DQUOTE = 24,
  anon_sym_BSLASH_SQUOTE = 25,
  anon_sym_BSLASH_BSLASH = 26,
  aux_sym_escape_sequence_token1 = 27,
  anon_sym_BSLASHx = 28,
  aux_sym_escape_sequence_token2 = 29,
  anon_sym_BSLASHu = 30,
  aux_sym_escape_sequence_token3 = 31,
  aux_sym_escape_sequence_token4 = 32,
  anon_sym_BSLASHU = 33,
  aux_sym_escape_sequence_token5 = 34,
  sym_number = 35,
  sym_character = 36,
  sym__compound_datum = 37,
  sym_program = 38,
  sym__token = 39,
  sym__skip = 40,
  sym_comment = 41,
  sym__block_comment = 42,
  sym__datum = 43,
  sym__simple_datum = 44,
  sym_string = 45,
  sym_byte_string = 46,
  sym__real_string = 47,
  sym_escape_sequence = 48,
  aux_sym_program_repeat1 = 49,
  aux_sym_comment_repeat1 = 50,
  aux_sym_comment_repeat2 = 51,
  aux_sym__block_comment_repeat1 = 52,
  aux_sym__real_string_repeat1 = 53,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__whitespace] = "_whitespace",
  [sym__newline] = "_newline",
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
  [sym__compound_datum] = "_compound_datum",
  [sym_program] = "program",
  [sym__token] = "_token",
  [sym__skip] = "_skip",
  [sym_comment] = "comment",
  [sym__block_comment] = "_block_comment",
  [sym__datum] = "_datum",
  [sym__simple_datum] = "_simple_datum",
  [sym_string] = "string",
  [sym_byte_string] = "byte_string",
  [sym__real_string] = "_real_string",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_comment_repeat2] = "comment_repeat2",
  [aux_sym__block_comment_repeat1] = "_block_comment_repeat1",
  [aux_sym__real_string_repeat1] = "_real_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__whitespace] = sym__whitespace,
  [sym__newline] = sym__newline,
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
  [sym__compound_datum] = sym__compound_datum,
  [sym_program] = sym_program,
  [sym__token] = sym__token,
  [sym__skip] = sym__skip,
  [sym_comment] = sym_comment,
  [sym__block_comment] = sym__block_comment,
  [sym__datum] = sym__datum,
  [sym__simple_datum] = sym__simple_datum,
  [sym_string] = sym_string,
  [sym_byte_string] = sym_byte_string,
  [sym__real_string] = sym__real_string,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym_comment_repeat2] = aux_sym_comment_repeat2,
  [aux_sym__block_comment_repeat1] = aux_sym__block_comment_repeat1,
  [aux_sym__real_string_repeat1] = aux_sym__real_string_repeat1,
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
  [sym__compound_datum] = {
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
  [sym__real_string] = {
    .visible = false,
    .named = true,
  },
  [sym_escape_sequence] = {
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
      if (lookahead == '\n') ADVANCE(204);
      if (lookahead == '"') ADVANCE(203);
      if (lookahead == '#') ADVANCE(202);
      if (lookahead == ';') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == '|') ADVANCE(195);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(188);
      if (lookahead == '/') ADVANCE(189);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(192);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(111);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '.') ADVANCE(135);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(249);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
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
          lookahead == 'i') ADVANCE(236);
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
          lookahead == 'i') ADVANCE(236);
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
          lookahead == 'i') ADVANCE(236);
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
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '|') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(194);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(146);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
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
          lookahead == 'i') ADVANCE(236);
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
          lookahead == 'i') ADVANCE(236);
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
          lookahead == 'i') ADVANCE(236);
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
          lookahead == '-') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(261);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(161);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
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
          lookahead == 'i') ADVANCE(236);
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
          lookahead == 'i') ADVANCE(236);
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
          lookahead == 'i') ADVANCE(236);
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
          lookahead == '-') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(273);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(179);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
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
          lookahead == 'i') ADVANCE(236);
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
          lookahead == 'i') ADVANCE(236);
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
          lookahead == 'i') ADVANCE(236);
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
          lookahead == 'i') ADVANCE(236);
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
          lookahead == 'i') ADVANCE(236);
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
      if (lookahead == ')') ADVANCE(327);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(135);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(249);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(261);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(273);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(150);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(123);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(132);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(108);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(253);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(134);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(151);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(129);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(257);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(129);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(107);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(257);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(133);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(265);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(286);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(129);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(286);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(149);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(127);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(127);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(11);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(269);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(129);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(269);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(127);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(127);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(127);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(16);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(152);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(153);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(154);
      END_STATE();
    case 55:
      if (lookahead == 'U') ADVANCE(326);
      if (lookahead == 'b') ADVANCE(309);
      if (lookahead == 'l') ADVANCE(314);
      if (lookahead == 'n') ADVANCE(312);
      if (lookahead == 'p') ADVANCE(310);
      if (lookahead == 'r') ADVANCE(313);
      if (lookahead == 's') ADVANCE(316);
      if (lookahead == 't') ADVANCE(311);
      if (lookahead == 'u') ADVANCE(322);
      if (lookahead == 'v') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(308);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(78);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(308);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(308);
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
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 71:
      if (lookahead == 'k') ADVANCE(82);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(315);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 79:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 85:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 86:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 87:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 88:
      if (lookahead == 'w') ADVANCE(74);
      END_STATE();
    case 89:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 90:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(137);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(297);
      END_STATE();
    case 91:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      END_STATE();
    case 92:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 93:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(138);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(296);
      END_STATE();
    case 94:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(300);
      END_STATE();
    case 95:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      END_STATE();
    case 96:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 97:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(141);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(304);
      END_STATE();
    case 98:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(299);
      END_STATE();
    case 99:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
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
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(305);
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
          lookahead == 'b') ADVANCE(29);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(28);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(30);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(31);
      END_STATE();
    case 112:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 113:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 114:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(44);
      END_STATE();
    case 115:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(52);
      END_STATE();
    case 116:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(53);
      END_STATE();
    case 117:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(54);
      END_STATE();
    case 118:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 119:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(119);
      END_STATE();
    case 120:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(120);
      END_STATE();
    case 121:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 122:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
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
          lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 125:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 126:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 127:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 128:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 129:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 130:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 131:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(54);
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
          lookahead == '1') ADVANCE(251);
      END_STATE();
    case 136:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(255);
      END_STATE();
    case 137:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(297);
      END_STATE();
    case 138:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(296);
      END_STATE();
    case 139:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(259);
      END_STATE();
    case 140:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(13);
      END_STATE();
    case 141:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(304);
      END_STATE();
    case 142:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(119);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 147:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(218);
      END_STATE();
    case 148:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      END_STATE();
    case 149:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(236);
      END_STATE();
    case 150:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(292);
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
          lookahead == 't') ADVANCE(295);
      END_STATE();
    case 153:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(298);
      END_STATE();
    case 154:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(301);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(308);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(263);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(267);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(300);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(299);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(271);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(18);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(305);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(120);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 171:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 172:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      END_STATE();
    case 173:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(290);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      END_STATE();
    case 182:
      if (eof) ADVANCE(183);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(184);
      if (lookahead == '"') ADVANCE(203);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == ';') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
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
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_POUND_BANG_SLASH);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(214);
      if (lookahead == 'U') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'b') ADVANCE(206);
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == 'f') ADVANCE(210);
      if (lookahead == 'n') ADVANCE(208);
      if (lookahead == 'r') ADVANCE(211);
      if (lookahead == 't') ADVANCE(207);
      if (lookahead == 'u') ADVANCE(222);
      if (lookahead == 'v') ADVANCE(209);
      if (lookahead == 'x') ADVANCE(219);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == '#') ADVANCE(197);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == '|') ADVANCE(193);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == ';') ADVANCE(187);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(3);
      if (lookahead == 'F' ||
          lookahead == 'T') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == 'f') ADVANCE(199);
      if (lookahead == 't') ADVANCE(200);
      if (lookahead == '|') ADVANCE(193);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(4);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(10);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(15);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(20);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '|') ADVANCE(193);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__real_string_token1);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_BSLASHa);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_BSLASHb);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_BSLASHv);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_BSLASHf);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_BSLASHe);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_BSLASH_SQUOTE);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(216);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(217);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_BSLASHx);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_BSLASHu);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_BSLASHU);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
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
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '/') ADVANCE(164);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(89);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == '/') ADVANCE(164);
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
          lookahead == 't') ADVANCE(89);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(89);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(240);
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
          lookahead == 't') ADVANCE(89);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '.') ADVANCE(243);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(92);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '.') ADVANCE(244);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(92);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(92);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(92);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '.') ADVANCE(247);
      if (lookahead == '/') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(96);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '.') ADVANCE(248);
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
    case 247:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(96);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(248);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(96);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '.') ADVANCE(251);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(249);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(90);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '.') ADVANCE(252);
      if (lookahead == '/') ADVANCE(135);
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
          lookahead == 't') ADVANCE(90);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(252);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(251);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(90);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(252);
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
          lookahead == 't') ADVANCE(90);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(253);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(93);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '.') ADVANCE(256);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(93);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(255);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(93);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(93);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '.') ADVANCE(259);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(257);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(97);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '.') ADVANCE(260);
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
    case 259:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(259);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(97);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(260);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(97);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(261);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(94);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == '/') ADVANCE(156);
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
          lookahead == 't') ADVANCE(94);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(263);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(94);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(264);
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
          lookahead == 't') ADVANCE(94);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(266);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(265);
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
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
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
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(98);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(98);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '/') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(269);
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
      if (lookahead == '.') ADVANCE(272);
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
    case 271:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(271);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(102);
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
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == '/') ADVANCE(172);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(91);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == '/') ADVANCE(172);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(91);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(273);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '.') ADVANCE(277);
      if (lookahead == '/') ADVANCE(172);
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
          lookahead == 't') ADVANCE(91);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(277);
      if (lookahead == '@') ADVANCE(42);
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
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(277);
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
          lookahead == 't') ADVANCE(91);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(277);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
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
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(276);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(281);
      if (lookahead == '.') ADVANCE(282);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(95);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(281);
      if (lookahead == '.') ADVANCE(282);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(95);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(279);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(281);
      if (lookahead == '.') ADVANCE(283);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(95);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(283);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
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
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(283);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
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
      if (lookahead == '#') ADVANCE(283);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
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
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(282);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(287);
      if (lookahead == '.') ADVANCE(290);
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
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(286);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(287);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(99);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(287);
      if (lookahead == '.') ADVANCE(291);
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
    case 288:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(103);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(291);
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
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(308);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(155);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(320);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(321);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
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
      ACCEPT_TOKEN(sym__compound_datum);
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
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
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
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 182},
  [31] = {.lex_state = 148},
  [32] = {.lex_state = 190},
  [33] = {.lex_state = 190},
  [34] = {.lex_state = 147},
  [35] = {.lex_state = 190},
  [36] = {.lex_state = 180},
  [37] = {.lex_state = 181},
  [38] = {.lex_state = 148},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 190},
  [41] = {.lex_state = 182},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_POUND_PIPE] = ACTIONS(1),
    [aux_sym__block_comment_token1] = ACTIONS(1),
    [anon_sym_PIPE_POUND] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__real_string_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(39),
    [sym__token] = STATE(3),
    [sym_comment] = STATE(3),
    [sym__block_comment] = STATE(20),
    [sym__datum] = STATE(3),
    [sym__simple_datum] = STATE(3),
    [sym_string] = STATE(3),
    [sym_byte_string] = STATE(3),
    [sym__real_string] = STATE(21),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(5),
    [sym_character] = ACTIONS(5),
    [sym__compound_datum] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(24), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(33), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(36), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym__block_comment,
    STATE(21), 1,
      sym__real_string,
    ACTIONS(30), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(21), 5,
      sym__whitespace,
      sym_boolean,
      sym_number,
      sym_character,
      sym__compound_datum,
    STATE(2), 7,
      sym__token,
      sym_comment,
      sym__datum,
      sym__simple_datum,
      sym_string,
      sym_byte_string,
      aux_sym_program_repeat1,
  [45] = 11,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym__block_comment,
    STATE(21), 1,
      sym__real_string,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(44), 5,
      sym__whitespace,
      sym_boolean,
      sym_number,
      sym_character,
      sym__compound_datum,
    STATE(2), 7,
      sym__token,
      sym_comment,
      sym__datum,
      sym__simple_datum,
      sym_string,
      sym_byte_string,
      aux_sym_program_repeat1,
  [90] = 12,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(46), 1,
      sym__whitespace,
    STATE(20), 1,
      sym__block_comment,
    STATE(21), 1,
      sym__real_string,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    STATE(11), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    ACTIONS(48), 4,
      sym_boolean,
      sym_number,
      sym_character,
      sym__compound_datum,
    STATE(22), 4,
      sym__datum,
      sym__simple_datum,
      sym_string,
      sym_byte_string,
  [136] = 12,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      sym__whitespace,
    STATE(20), 1,
      sym__block_comment,
    STATE(21), 1,
      sym__real_string,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    STATE(4), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    ACTIONS(52), 4,
      sym_boolean,
      sym_number,
      sym_character,
      sym__compound_datum,
    STATE(15), 4,
      sym__datum,
      sym__simple_datum,
      sym_string,
      sym_byte_string,
  [182] = 8,
    ACTIONS(54), 1,
      anon_sym_BSLASH,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      aux_sym__real_string_token1,
    ACTIONS(65), 1,
      anon_sym_BSLASHx,
    ACTIONS(68), 1,
      anon_sym_BSLASHu,
    ACTIONS(71), 1,
      anon_sym_BSLASHU,
    STATE(6), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(62), 11,
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
  [218] = 8,
    ACTIONS(74), 1,
      anon_sym_BSLASH,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      aux_sym__real_string_token1,
    ACTIONS(82), 1,
      anon_sym_BSLASHx,
    ACTIONS(84), 1,
      anon_sym_BSLASHu,
    ACTIONS(86), 1,
      anon_sym_BSLASHU,
    STATE(6), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(80), 11,
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
  [254] = 8,
    ACTIONS(74), 1,
      anon_sym_BSLASH,
    ACTIONS(82), 1,
      anon_sym_BSLASHx,
    ACTIONS(84), 1,
      anon_sym_BSLASHu,
    ACTIONS(86), 1,
      anon_sym_BSLASHU,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      aux_sym__real_string_token1,
    STATE(7), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(80), 11,
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
  [290] = 2,
    ACTIONS(92), 1,
      anon_sym_BSLASH,
    ACTIONS(94), 16,
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
  [312] = 2,
    ACTIONS(96), 1,
      anon_sym_BSLASH,
    ACTIONS(98), 16,
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
  [334] = 9,
    ACTIONS(100), 1,
      sym__whitespace,
    ACTIONS(103), 1,
      aux_sym_comment_token1,
    ACTIONS(106), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(112), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(117), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym__block_comment,
    ACTIONS(109), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    STATE(11), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    ACTIONS(115), 5,
      sym_boolean,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      sym__compound_datum,
  [369] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH,
    ACTIONS(123), 1,
      anon_sym_POUND,
    ACTIONS(119), 12,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      sym__compound_datum,
  [390] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH,
    ACTIONS(127), 1,
      anon_sym_POUND,
    ACTIONS(125), 12,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      sym__compound_datum,
  [411] = 2,
    ACTIONS(131), 1,
      anon_sym_POUND,
    ACTIONS(129), 12,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      sym__compound_datum,
  [429] = 2,
    ACTIONS(127), 1,
      anon_sym_POUND,
    ACTIONS(125), 12,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      sym__compound_datum,
  [447] = 2,
    ACTIONS(135), 1,
      anon_sym_POUND,
    ACTIONS(133), 12,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      sym__compound_datum,
  [465] = 2,
    ACTIONS(139), 1,
      anon_sym_POUND,
    ACTIONS(137), 12,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      sym__compound_datum,
  [483] = 2,
    ACTIONS(143), 1,
      anon_sym_POUND,
    ACTIONS(141), 12,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      sym__compound_datum,
  [501] = 2,
    ACTIONS(147), 1,
      anon_sym_POUND,
    ACTIONS(145), 12,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      sym__compound_datum,
  [519] = 2,
    ACTIONS(151), 1,
      anon_sym_POUND,
    ACTIONS(149), 12,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      sym__compound_datum,
  [537] = 2,
    ACTIONS(155), 1,
      anon_sym_POUND,
    ACTIONS(153), 12,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      sym__compound_datum,
  [555] = 2,
    ACTIONS(123), 1,
      anon_sym_POUND,
    ACTIONS(119), 12,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      sym__compound_datum,
  [573] = 4,
    ACTIONS(157), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(159), 1,
      aux_sym__block_comment_token1,
    ACTIONS(161), 1,
      anon_sym_PIPE_POUND,
    STATE(25), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [587] = 4,
    ACTIONS(163), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(166), 1,
      aux_sym__block_comment_token1,
    ACTIONS(169), 1,
      anon_sym_PIPE_POUND,
    STATE(24), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [601] = 4,
    ACTIONS(157), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(171), 1,
      aux_sym__block_comment_token1,
    ACTIONS(173), 1,
      anon_sym_PIPE_POUND,
    STATE(24), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [615] = 4,
    ACTIONS(157), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(175), 1,
      aux_sym__block_comment_token1,
    ACTIONS(177), 1,
      anon_sym_PIPE_POUND,
    STATE(27), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [629] = 4,
    ACTIONS(157), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(171), 1,
      aux_sym__block_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PIPE_POUND,
    STATE(24), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [643] = 2,
    ACTIONS(135), 1,
      aux_sym__block_comment_token1,
    ACTIONS(133), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [651] = 2,
    ACTIONS(143), 1,
      aux_sym__block_comment_token1,
    ACTIONS(141), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [659] = 2,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      sym__real_string,
  [666] = 2,
    ACTIONS(181), 1,
      aux_sym_escape_sequence_token3,
    ACTIONS(183), 1,
      aux_sym_escape_sequence_token4,
  [673] = 2,
    ACTIONS(185), 1,
      aux_sym_comment_token2,
    STATE(33), 1,
      aux_sym_comment_repeat2,
  [680] = 2,
    ACTIONS(187), 1,
      aux_sym_comment_token2,
    STATE(33), 1,
      aux_sym_comment_repeat2,
  [687] = 1,
    ACTIONS(181), 2,
      sym__newline,
      aux_sym_escape_sequence_token1,
  [692] = 2,
    ACTIONS(190), 1,
      aux_sym_comment_token2,
    STATE(32), 1,
      aux_sym_comment_repeat2,
  [699] = 1,
    ACTIONS(181), 1,
      aux_sym_escape_sequence_token5,
  [703] = 1,
    ACTIONS(181), 1,
      aux_sym_escape_sequence_token2,
  [707] = 1,
    ACTIONS(192), 1,
      sym__newline,
  [711] = 1,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
  [715] = 1,
    ACTIONS(196), 1,
      aux_sym_comment_token2,
  [719] = 1,
    ACTIONS(121), 1,
      anon_sym_BSLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 136,
  [SMALL_STATE(6)] = 182,
  [SMALL_STATE(7)] = 218,
  [SMALL_STATE(8)] = 254,
  [SMALL_STATE(9)] = 290,
  [SMALL_STATE(10)] = 312,
  [SMALL_STATE(11)] = 334,
  [SMALL_STATE(12)] = 369,
  [SMALL_STATE(13)] = 390,
  [SMALL_STATE(14)] = 411,
  [SMALL_STATE(15)] = 429,
  [SMALL_STATE(16)] = 447,
  [SMALL_STATE(17)] = 465,
  [SMALL_STATE(18)] = 483,
  [SMALL_STATE(19)] = 501,
  [SMALL_STATE(20)] = 519,
  [SMALL_STATE(21)] = 537,
  [SMALL_STATE(22)] = 555,
  [SMALL_STATE(23)] = 573,
  [SMALL_STATE(24)] = 587,
  [SMALL_STATE(25)] = 601,
  [SMALL_STATE(26)] = 615,
  [SMALL_STATE(27)] = 629,
  [SMALL_STATE(28)] = 643,
  [SMALL_STATE(29)] = 651,
  [SMALL_STATE(30)] = 659,
  [SMALL_STATE(31)] = 666,
  [SMALL_STATE(32)] = 673,
  [SMALL_STATE(33)] = 680,
  [SMALL_STATE(34)] = 687,
  [SMALL_STATE(35)] = 692,
  [SMALL_STATE(36)] = 699,
  [SMALL_STATE(37)] = 703,
  [SMALL_STATE(38)] = 707,
  [SMALL_STATE(39)] = 711,
  [SMALL_STATE(40)] = 715,
  [SMALL_STATE(41)] = 719,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(20),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(35),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(30),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(34),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(6),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(9),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(37),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(31),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(36),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(11),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(20),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(5),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(35),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(23),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_comment, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_comment, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_string, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_comment, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_comment, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_comment_repeat1, 2), SHIFT_REPEAT(26),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_comment_repeat1, 2), SHIFT_REPEAT(24),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_comment_repeat1, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat2, 2), SHIFT_REPEAT(41),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [194] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat2, 3),
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
