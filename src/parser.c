#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 68
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
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
  anon_sym_POUND_PERCENT = 36,
  aux_sym_symbol_token1 = 37,
  sym__compound_datum = 38,
  sym_program = 39,
  sym__token = 40,
  sym__skip = 41,
  sym_comment = 42,
  sym__block_comment = 43,
  sym__datum = 44,
  sym__simple_datum = 45,
  sym_string = 46,
  sym_byte_string = 47,
  sym__real_string = 48,
  sym_escape_sequence = 49,
  sym_symbol = 50,
  aux_sym_program_repeat1 = 51,
  aux_sym_comment_repeat1 = 52,
  aux_sym_comment_repeat2 = 53,
  aux_sym__block_comment_repeat1 = 54,
  aux_sym__real_string_repeat1 = 55,
  aux_sym_symbol_repeat1 = 56,
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
  [anon_sym_POUND_PERCENT] = "#%",
  [aux_sym_symbol_token1] = "symbol_token1",
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
  [sym_symbol] = "symbol",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_comment_repeat2] = "comment_repeat2",
  [aux_sym__block_comment_repeat1] = "_block_comment_repeat1",
  [aux_sym__real_string_repeat1] = "_real_string_repeat1",
  [aux_sym_symbol_repeat1] = "symbol_repeat1",
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
  [anon_sym_POUND_PERCENT] = anon_sym_POUND_PERCENT,
  [aux_sym_symbol_token1] = aux_sym_symbol_token1,
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
  [sym_symbol] = sym_symbol,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym_comment_repeat2] = aux_sym_comment_repeat2,
  [aux_sym__block_comment_repeat1] = aux_sym__block_comment_repeat1,
  [aux_sym__real_string_repeat1] = aux_sym__real_string_repeat1,
  [aux_sym_symbol_repeat1] = aux_sym_symbol_repeat1,
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
  [anon_sym_POUND_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_symbol_token1] = {
    .visible = false,
    .named = false,
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
  [sym_symbol] = {
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
  [aux_sym_symbol_repeat1] = {
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
      if (eof) ADVANCE(153);
      if (lookahead == '\n') ADVANCE(154);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(154);
      if (lookahead == '"') ADVANCE(176);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '(') ADVANCE(167);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == ';') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(161);
      if (lookahead == '|') ADVANCE(165);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(158);
      if (lookahead == '/') ADVANCE(159);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(176);
      if (lookahead == '\\') ADVANCE(162);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(33);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(222);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(70);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(70);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(70);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(70);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == '|') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(164);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(115);
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(11);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(71);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(71);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(13);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(71);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(71);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(234);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(16);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(72);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(72);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(18);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(72);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(72);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(114);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(145);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(147);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(73);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(145);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(73);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(145);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(73);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(147);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(73);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(73);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(73);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(92);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(33);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(222);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(234);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(119);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(101);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(226);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(102);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(238);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(103);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(120);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(98);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(230);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(98);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(76);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(230);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(242);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(98);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(242);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(259);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(98);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(259);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(118);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(137);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(96);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(96);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(11);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(96);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(16);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(145);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(96);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(145);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(96);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(121);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(122);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(123);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 58:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 59:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(106);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(270);
      END_STATE();
    case 60:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(273);
      END_STATE();
    case 61:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      END_STATE();
    case 62:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 63:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(107);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(269);
      END_STATE();
    case 64:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(272);
      END_STATE();
    case 65:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 66:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 67:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(110);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(277);
      END_STATE();
    case 68:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(278);
      END_STATE();
    case 69:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 70:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 71:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(111);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(88);
      END_STATE();
    case 72:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(89);
      END_STATE();
    case 73:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 77:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 80:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(28);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(32);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(29);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(30);
      END_STATE();
    case 81:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(31);
      END_STATE();
    case 82:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 83:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(45);
      END_STATE();
    case 84:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(51);
      END_STATE();
    case 85:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(52);
      END_STATE();
    case 86:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(53);
      END_STATE();
    case 87:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 88:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(88);
      END_STATE();
    case 89:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(89);
      END_STATE();
    case 90:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 91:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 92:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 93:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 94:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 95:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 96:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 97:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 98:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 99:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 100:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 101:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 102:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 103:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 104:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(224);
      END_STATE();
    case 105:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(228);
      END_STATE();
    case 106:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(270);
      END_STATE();
    case 107:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(269);
      END_STATE();
    case 108:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(232);
      END_STATE();
    case 109:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(13);
      END_STATE();
    case 110:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(277);
      END_STATE();
    case 111:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(88);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 116:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(191);
      END_STATE();
    case 117:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 118:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(209);
      END_STATE();
    case 119:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(265);
      END_STATE();
    case 120:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(87);
      END_STATE();
    case 121:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(268);
      END_STATE();
    case 122:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(271);
      END_STATE();
    case 123:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(274);
      END_STATE();
    case 124:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(236);
      END_STATE();
    case 125:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(240);
      END_STATE();
    case 126:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(273);
      END_STATE();
    case 127:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(272);
      END_STATE();
    case 128:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(244);
      END_STATE();
    case 129:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(18);
      END_STATE();
    case 130:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(278);
      END_STATE();
    case 131:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(89);
      END_STATE();
    case 132:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 135:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 136:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 137:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 150:
      if (eof) ADVANCE(153);
      if (lookahead == '\n') ADVANCE(154);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(154);
      if (lookahead == '"') ADVANCE(176);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '(') ADVANCE(167);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == ';') ADVANCE(156);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 151:
      if (eof) ADVANCE(153);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(154);
      if (lookahead == '"') ADVANCE(176);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == '.') ADVANCE(285);
      if (lookahead == ';') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(161);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 152:
      if (eof) ADVANCE(153);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(154);
      if (lookahead == '"') ADVANCE(176);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == '.') ADVANCE(285);
      if (lookahead == ';') ADVANCE(156);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_POUND_BANG_SLASH);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(186);
      if (lookahead == '\'') ADVANCE(187);
      if (lookahead == 'U') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(188);
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'b') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == 'f') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(181);
      if (lookahead == 'r') ADVANCE(184);
      if (lookahead == 't') ADVANCE(180);
      if (lookahead == 'u') ADVANCE(195);
      if (lookahead == 'v') ADVANCE(182);
      if (lookahead == 'x') ADVANCE(192);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == '#') ADVANCE(171);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '.') ADVANCE(212);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(58);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == ')') ADVANCE(286);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(92);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == '|') ADVANCE(163);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '%') ADVANCE(281);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(3);
      if (lookahead == 'F' ||
          lookahead == 'T') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(173);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(4);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(10);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(15);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(20);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__real_string_token1);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_BSLASHa);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_BSLASHb);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_BSLASHv);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_BSLASHf);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_BSLASHe);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_BSLASH_SQUOTE);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(189);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(190);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_BSLASHx);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_BSLASHu);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_BSLASHU);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(201);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(203);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '.') ADVANCE(212);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(58);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '.') ADVANCE(213);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(58);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(58);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(58);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '.') ADVANCE(216);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(62);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '.') ADVANCE(217);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(62);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(62);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(62);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == '.') ADVANCE(220);
      if (lookahead == '/') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == '/') ADVANCE(136);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(221);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(222);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(59);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(59);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(224);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(59);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(59);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '.') ADVANCE(228);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(226);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(63);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(63);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(228);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(63);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(63);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(108);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(230);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == '/') ADVANCE(108);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(232);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(233);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == '/') ADVANCE(124);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(234);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(60);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == '/') ADVANCE(124);
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
          lookahead == 't') ADVANCE(60);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(236);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(60);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(237);
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
          lookahead == 't') ADVANCE(60);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(238);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(240);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == '.') ADVANCE(244);
      if (lookahead == '/') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(68);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == '/') ADVANCE(128);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(68);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(244);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(68);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(245);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(68);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '.') ADVANCE(249);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(61);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '.') ADVANCE(249);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(61);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(246);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '.') ADVANCE(250);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(61);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(61);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(61);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(61);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(249);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(65);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(65);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(252);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '.') ADVANCE(256);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(65);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(65);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(65);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(65);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(255);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(146);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(69);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(69);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == '/') ADVANCE(144);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(69);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(145);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(73);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(146);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(69);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(69);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(263);
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
          lookahead == 't') ADVANCE(69);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_POUND_PERCENT);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == ')') ADVANCE(286);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(92);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__compound_datum);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 152},
  [2] = {.lex_state = 152},
  [3] = {.lex_state = 152},
  [4] = {.lex_state = 152},
  [5] = {.lex_state = 152},
  [6] = {.lex_state = 152},
  [7] = {.lex_state = 152},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 152},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 150},
  [17] = {.lex_state = 150},
  [18] = {.lex_state = 150},
  [19] = {.lex_state = 150},
  [20] = {.lex_state = 150},
  [21] = {.lex_state = 151},
  [22] = {.lex_state = 151},
  [23] = {.lex_state = 150},
  [24] = {.lex_state = 152},
  [25] = {.lex_state = 152},
  [26] = {.lex_state = 151},
  [27] = {.lex_state = 152},
  [28] = {.lex_state = 152},
  [29] = {.lex_state = 151},
  [30] = {.lex_state = 152},
  [31] = {.lex_state = 152},
  [32] = {.lex_state = 152},
  [33] = {.lex_state = 152},
  [34] = {.lex_state = 152},
  [35] = {.lex_state = 152},
  [36] = {.lex_state = 152},
  [37] = {.lex_state = 152},
  [38] = {.lex_state = 152},
  [39] = {.lex_state = 152},
  [40] = {.lex_state = 152},
  [41] = {.lex_state = 152},
  [42] = {.lex_state = 152},
  [43] = {.lex_state = 152},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 160},
  [54] = {.lex_state = 117},
  [55] = {.lex_state = 160},
  [56] = {.lex_state = 160},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 160},
  [59] = {.lex_state = 116},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 160},
  [62] = {.lex_state = 148},
  [63] = {.lex_state = 117},
  [64] = {.lex_state = 149},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 160},
  [67] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_POUND_SEMI] = ACTIONS(1),
    [anon_sym_POUND_BANG] = ACTIONS(1),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_POUND_PIPE] = ACTIONS(1),
    [aux_sym__block_comment_token1] = ACTIONS(1),
    [anon_sym_PIPE_POUND] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__real_string_token1] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_POUND_PERCENT] = ACTIONS(1),
    [aux_sym_symbol_token1] = ACTIONS(1),
    [sym__compound_datum] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(65),
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(34),
    [sym__datum] = STATE(2),
    [sym__simple_datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym__real_string] = STATE(28),
    [sym_symbol] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
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
    [anon_sym_POUND_PERCENT] = ACTIONS(19),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [sym__compound_datum] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
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
    ACTIONS(19), 1,
      anon_sym_POUND_PERCENT,
    ACTIONS(21), 1,
      aux_sym_symbol_token1,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      sym__real_string,
    STATE(34), 1,
      sym__block_comment,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(25), 4,
      sym__whitespace,
      sym_boolean,
      sym_number,
      sym__compound_datum,
    STATE(3), 8,
      sym__token,
      sym_comment,
      sym__datum,
      sym__simple_datum,
      sym_string,
      sym_byte_string,
      sym_symbol,
      aux_sym_program_repeat1,
  [51] = 13,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      aux_sym_comment_token1,
    ACTIONS(35), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(41), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(44), 1,
      anon_sym_POUND,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      anon_sym_POUND_PERCENT,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    STATE(28), 1,
      sym__real_string,
    STATE(34), 1,
      sym__block_comment,
    ACTIONS(38), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(29), 4,
      sym__whitespace,
      sym_boolean,
      sym_number,
      sym__compound_datum,
    STATE(3), 8,
      sym__token,
      sym_comment,
      sym__datum,
      sym__simple_datum,
      sym_string,
      sym_byte_string,
      sym_symbol,
      aux_sym_program_repeat1,
  [102] = 14,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_POUND_PERCENT,
    ACTIONS(21), 1,
      aux_sym_symbol_token1,
    ACTIONS(56), 1,
      sym__whitespace,
    ACTIONS(58), 1,
      aux_sym_comment_token1,
    ACTIONS(60), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(64), 1,
      anon_sym_POUND_PIPE,
    STATE(28), 1,
      sym__real_string,
    STATE(41), 1,
      sym__block_comment,
    ACTIONS(62), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(66), 3,
      sym_boolean,
      sym_number,
      sym__compound_datum,
    STATE(7), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    STATE(25), 5,
      sym__datum,
      sym__simple_datum,
      sym_string,
      sym_byte_string,
      sym_symbol,
  [154] = 14,
    ACTIONS(58), 1,
      aux_sym_comment_token1,
    ACTIONS(60), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(64), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(68), 1,
      sym__whitespace,
    ACTIONS(72), 1,
      anon_sym_POUND,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(76), 1,
      anon_sym_POUND_PERCENT,
    ACTIONS(78), 1,
      aux_sym_symbol_token1,
    STATE(41), 1,
      sym__block_comment,
    STATE(43), 1,
      sym__real_string,
    ACTIONS(62), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(70), 3,
      sym_boolean,
      sym_number,
      sym__compound_datum,
    STATE(6), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    STATE(36), 5,
      sym__datum,
      sym__simple_datum,
      sym_string,
      sym_byte_string,
      sym_symbol,
  [206] = 14,
    ACTIONS(58), 1,
      aux_sym_comment_token1,
    ACTIONS(60), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(64), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(72), 1,
      anon_sym_POUND,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(76), 1,
      anon_sym_POUND_PERCENT,
    ACTIONS(78), 1,
      aux_sym_symbol_token1,
    ACTIONS(80), 1,
      sym__whitespace,
    STATE(41), 1,
      sym__block_comment,
    STATE(43), 1,
      sym__real_string,
    ACTIONS(62), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(82), 3,
      sym_boolean,
      sym_number,
      sym__compound_datum,
    STATE(13), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    STATE(35), 5,
      sym__datum,
      sym__simple_datum,
      sym_string,
      sym_byte_string,
      sym_symbol,
  [258] = 14,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_POUND_PERCENT,
    ACTIONS(21), 1,
      aux_sym_symbol_token1,
    ACTIONS(58), 1,
      aux_sym_comment_token1,
    ACTIONS(60), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(64), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(80), 1,
      sym__whitespace,
    STATE(28), 1,
      sym__real_string,
    STATE(41), 1,
      sym__block_comment,
    ACTIONS(62), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(84), 3,
      sym_boolean,
      sym_number,
      sym__compound_datum,
    STATE(13), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    STATE(31), 5,
      sym__datum,
      sym__simple_datum,
      sym_string,
      sym_byte_string,
      sym_symbol,
  [310] = 8,
    ACTIONS(86), 1,
      anon_sym_BSLASH,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      aux_sym__real_string_token1,
    ACTIONS(94), 1,
      anon_sym_BSLASHx,
    ACTIONS(96), 1,
      anon_sym_BSLASHu,
    ACTIONS(98), 1,
      anon_sym_BSLASHU,
    STATE(11), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(92), 11,
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
  [346] = 8,
    ACTIONS(86), 1,
      anon_sym_BSLASH,
    ACTIONS(94), 1,
      anon_sym_BSLASHx,
    ACTIONS(96), 1,
      anon_sym_BSLASHu,
    ACTIONS(98), 1,
      anon_sym_BSLASHU,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      aux_sym__real_string_token1,
    STATE(8), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(92), 11,
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
  [382] = 8,
    ACTIONS(86), 1,
      anon_sym_BSLASH,
    ACTIONS(94), 1,
      anon_sym_BSLASHx,
    ACTIONS(96), 1,
      anon_sym_BSLASHu,
    ACTIONS(98), 1,
      anon_sym_BSLASHU,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      aux_sym__real_string_token1,
    STATE(12), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(92), 11,
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
  [418] = 8,
    ACTIONS(108), 1,
      anon_sym_BSLASH,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      aux_sym__real_string_token1,
    ACTIONS(119), 1,
      anon_sym_BSLASHx,
    ACTIONS(122), 1,
      anon_sym_BSLASHu,
    ACTIONS(125), 1,
      anon_sym_BSLASHU,
    STATE(11), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(116), 11,
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
  [454] = 8,
    ACTIONS(86), 1,
      anon_sym_BSLASH,
    ACTIONS(90), 1,
      aux_sym__real_string_token1,
    ACTIONS(94), 1,
      anon_sym_BSLASHx,
    ACTIONS(96), 1,
      anon_sym_BSLASHu,
    ACTIONS(98), 1,
      anon_sym_BSLASHU,
    ACTIONS(128), 1,
      anon_sym_DQUOTE,
    STATE(11), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(92), 11,
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
  [490] = 9,
    ACTIONS(130), 1,
      sym__whitespace,
    ACTIONS(133), 1,
      aux_sym_comment_token1,
    ACTIONS(136), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(142), 1,
      anon_sym_POUND_PIPE,
    STATE(41), 1,
      sym__block_comment,
    ACTIONS(139), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(147), 2,
      anon_sym_POUND,
      aux_sym_symbol_token1,
    STATE(13), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    ACTIONS(145), 5,
      sym_boolean,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND_PERCENT,
      sym__compound_datum,
  [526] = 2,
    ACTIONS(149), 1,
      anon_sym_BSLASH,
    ACTIONS(151), 16,
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
  [548] = 2,
    ACTIONS(153), 1,
      anon_sym_BSLASH,
    ACTIONS(155), 16,
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
  [570] = 4,
    ACTIONS(159), 1,
      aux_sym__block_comment_token1,
    STATE(18), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(161), 3,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(157), 11,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      anon_sym_DQUOTE,
      anon_sym_POUND_PERCENT,
      sym__compound_datum,
  [595] = 4,
    ACTIONS(165), 1,
      aux_sym__block_comment_token1,
    STATE(16), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(167), 3,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(163), 11,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      anon_sym_DQUOTE,
      anon_sym_POUND_PERCENT,
      sym__compound_datum,
  [620] = 4,
    ACTIONS(171), 1,
      aux_sym__block_comment_token1,
    STATE(18), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(174), 3,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(169), 11,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      anon_sym_DQUOTE,
      anon_sym_POUND_PERCENT,
      sym__compound_datum,
  [645] = 4,
    ACTIONS(176), 1,
      aux_sym__block_comment_token1,
    STATE(19), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(174), 3,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(169), 10,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      anon_sym_DQUOTE,
      anon_sym_POUND_PERCENT,
      sym__compound_datum,
  [669] = 4,
    ACTIONS(179), 1,
      aux_sym__block_comment_token1,
    STATE(19), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(161), 3,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(157), 10,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      anon_sym_DQUOTE,
      anon_sym_POUND_PERCENT,
      sym__compound_datum,
  [693] = 3,
    ACTIONS(183), 1,
      anon_sym_BSLASH,
    ACTIONS(185), 2,
      anon_sym_POUND,
      aux_sym_symbol_token1,
    ACTIONS(181), 12,
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
      anon_sym_POUND_PERCENT,
      sym__compound_datum,
  [715] = 3,
    ACTIONS(183), 1,
      anon_sym_BSLASH,
    ACTIONS(189), 2,
      anon_sym_POUND,
      aux_sym_symbol_token1,
    ACTIONS(187), 12,
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
      anon_sym_POUND_PERCENT,
      sym__compound_datum,
  [737] = 4,
    ACTIONS(191), 1,
      aux_sym__block_comment_token1,
    STATE(20), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(167), 3,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(163), 10,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      anon_sym_DQUOTE,
      anon_sym_POUND_PERCENT,
      sym__compound_datum,
  [761] = 2,
    ACTIONS(195), 2,
      anon_sym_POUND,
      aux_sym_symbol_token1,
    ACTIONS(193), 12,
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
      anon_sym_POUND_PERCENT,
      sym__compound_datum,
  [780] = 2,
    ACTIONS(185), 2,
      anon_sym_POUND,
      aux_sym_symbol_token1,
    ACTIONS(181), 12,
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
      anon_sym_POUND_PERCENT,
      sym__compound_datum,
  [799] = 3,
    ACTIONS(183), 1,
      anon_sym_BSLASH,
    ACTIONS(189), 2,
      anon_sym_POUND,
      aux_sym_symbol_token1,
    ACTIONS(187), 11,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND_PERCENT,
      sym__compound_datum,
  [820] = 2,
    ACTIONS(199), 2,
      anon_sym_POUND,
      aux_sym_symbol_token1,
    ACTIONS(197), 12,
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
      anon_sym_POUND_PERCENT,
      sym__compound_datum,
  [839] = 2,
    ACTIONS(203), 2,
      anon_sym_POUND,
      aux_sym_symbol_token1,
    ACTIONS(201), 12,
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
      anon_sym_POUND_PERCENT,
      sym__compound_datum,
  [858] = 3,
    ACTIONS(183), 1,
      anon_sym_BSLASH,
    ACTIONS(185), 2,
      anon_sym_POUND,
      aux_sym_symbol_token1,
    ACTIONS(181), 11,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND_PERCENT,
      sym__compound_datum,
  [879] = 2,
    ACTIONS(207), 2,
      anon_sym_POUND,
      aux_sym_symbol_token1,
    ACTIONS(205), 12,
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
      anon_sym_POUND_PERCENT,
      sym__compound_datum,
  [898] = 2,
    ACTIONS(189), 2,
      anon_sym_POUND,
      aux_sym_symbol_token1,
    ACTIONS(187), 12,
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
      anon_sym_POUND_PERCENT,
      sym__compound_datum,
  [917] = 2,
    ACTIONS(211), 2,
      anon_sym_POUND,
      aux_sym_symbol_token1,
    ACTIONS(209), 12,
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
      anon_sym_POUND_PERCENT,
      sym__compound_datum,
  [936] = 2,
    ACTIONS(215), 2,
      anon_sym_POUND,
      aux_sym_symbol_token1,
    ACTIONS(213), 12,
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
      anon_sym_POUND_PERCENT,
      sym__compound_datum,
  [955] = 2,
    ACTIONS(219), 2,
      anon_sym_POUND,
      aux_sym_symbol_token1,
    ACTIONS(217), 12,
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
      anon_sym_POUND_PERCENT,
      sym__compound_datum,
  [974] = 2,
    ACTIONS(189), 2,
      anon_sym_POUND,
      aux_sym_symbol_token1,
    ACTIONS(187), 11,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND_PERCENT,
      sym__compound_datum,
  [992] = 2,
    ACTIONS(185), 2,
      anon_sym_POUND,
      aux_sym_symbol_token1,
    ACTIONS(181), 11,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND_PERCENT,
      sym__compound_datum,
  [1010] = 2,
    ACTIONS(195), 2,
      anon_sym_POUND,
      aux_sym_symbol_token1,
    ACTIONS(193), 11,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND_PERCENT,
      sym__compound_datum,
  [1028] = 2,
    ACTIONS(215), 2,
      anon_sym_POUND,
      aux_sym_symbol_token1,
    ACTIONS(213), 11,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND_PERCENT,
      sym__compound_datum,
  [1046] = 2,
    ACTIONS(199), 2,
      anon_sym_POUND,
      aux_sym_symbol_token1,
    ACTIONS(197), 11,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND_PERCENT,
      sym__compound_datum,
  [1064] = 2,
    ACTIONS(211), 2,
      anon_sym_POUND,
      aux_sym_symbol_token1,
    ACTIONS(209), 11,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND_PERCENT,
      sym__compound_datum,
  [1082] = 2,
    ACTIONS(219), 2,
      anon_sym_POUND,
      aux_sym_symbol_token1,
    ACTIONS(217), 11,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND_PERCENT,
      sym__compound_datum,
  [1100] = 2,
    ACTIONS(207), 2,
      anon_sym_POUND,
      aux_sym_symbol_token1,
    ACTIONS(205), 11,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND_PERCENT,
      sym__compound_datum,
  [1118] = 2,
    ACTIONS(203), 2,
      anon_sym_POUND,
      aux_sym_symbol_token1,
    ACTIONS(201), 11,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym_boolean,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND_PERCENT,
      sym__compound_datum,
  [1136] = 4,
    ACTIONS(221), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(223), 1,
      aux_sym__block_comment_token1,
    ACTIONS(225), 1,
      anon_sym_PIPE_POUND,
    STATE(45), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [1150] = 4,
    ACTIONS(227), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(230), 1,
      aux_sym__block_comment_token1,
    ACTIONS(233), 1,
      anon_sym_PIPE_POUND,
    STATE(45), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [1164] = 4,
    ACTIONS(221), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(223), 1,
      aux_sym__block_comment_token1,
    ACTIONS(235), 1,
      anon_sym_PIPE_POUND,
    STATE(45), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [1178] = 4,
    ACTIONS(221), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(223), 1,
      aux_sym__block_comment_token1,
    ACTIONS(237), 1,
      anon_sym_PIPE_POUND,
    STATE(45), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [1192] = 4,
    ACTIONS(221), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(239), 1,
      aux_sym__block_comment_token1,
    ACTIONS(241), 1,
      anon_sym_PIPE_POUND,
    STATE(46), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [1206] = 4,
    ACTIONS(221), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(243), 1,
      aux_sym__block_comment_token1,
    ACTIONS(245), 1,
      anon_sym_PIPE_POUND,
    STATE(44), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [1220] = 4,
    ACTIONS(221), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(247), 1,
      aux_sym__block_comment_token1,
    ACTIONS(249), 1,
      anon_sym_PIPE_POUND,
    STATE(47), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [1234] = 2,
    ACTIONS(211), 1,
      aux_sym__block_comment_token1,
    ACTIONS(209), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [1242] = 2,
    ACTIONS(195), 1,
      aux_sym__block_comment_token1,
    ACTIONS(193), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [1250] = 2,
    ACTIONS(251), 1,
      aux_sym_comment_token2,
    STATE(56), 1,
      aux_sym_comment_repeat2,
  [1257] = 2,
    ACTIONS(253), 1,
      aux_sym_escape_sequence_token3,
    ACTIONS(255), 1,
      aux_sym_escape_sequence_token4,
  [1264] = 2,
    ACTIONS(257), 1,
      aux_sym_comment_token2,
    STATE(56), 1,
      aux_sym_comment_repeat2,
  [1271] = 2,
    ACTIONS(259), 1,
      aux_sym_comment_token2,
    STATE(56), 1,
      aux_sym_comment_repeat2,
  [1278] = 2,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      sym__real_string,
  [1285] = 2,
    ACTIONS(262), 1,
      aux_sym_comment_token2,
    STATE(55), 1,
      aux_sym_comment_repeat2,
  [1292] = 1,
    ACTIONS(253), 2,
      sym__newline,
      aux_sym_escape_sequence_token1,
  [1297] = 2,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      sym__real_string,
  [1304] = 2,
    ACTIONS(264), 1,
      aux_sym_comment_token2,
    STATE(53), 1,
      aux_sym_comment_repeat2,
  [1311] = 1,
    ACTIONS(253), 1,
      aux_sym_escape_sequence_token2,
  [1315] = 1,
    ACTIONS(266), 1,
      sym__newline,
  [1319] = 1,
    ACTIONS(253), 1,
      aux_sym_escape_sequence_token5,
  [1323] = 1,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
  [1327] = 1,
    ACTIONS(270), 1,
      aux_sym_comment_token2,
  [1331] = 1,
    ACTIONS(183), 1,
      anon_sym_BSLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 154,
  [SMALL_STATE(6)] = 206,
  [SMALL_STATE(7)] = 258,
  [SMALL_STATE(8)] = 310,
  [SMALL_STATE(9)] = 346,
  [SMALL_STATE(10)] = 382,
  [SMALL_STATE(11)] = 418,
  [SMALL_STATE(12)] = 454,
  [SMALL_STATE(13)] = 490,
  [SMALL_STATE(14)] = 526,
  [SMALL_STATE(15)] = 548,
  [SMALL_STATE(16)] = 570,
  [SMALL_STATE(17)] = 595,
  [SMALL_STATE(18)] = 620,
  [SMALL_STATE(19)] = 645,
  [SMALL_STATE(20)] = 669,
  [SMALL_STATE(21)] = 693,
  [SMALL_STATE(22)] = 715,
  [SMALL_STATE(23)] = 737,
  [SMALL_STATE(24)] = 761,
  [SMALL_STATE(25)] = 780,
  [SMALL_STATE(26)] = 799,
  [SMALL_STATE(27)] = 820,
  [SMALL_STATE(28)] = 839,
  [SMALL_STATE(29)] = 858,
  [SMALL_STATE(30)] = 879,
  [SMALL_STATE(31)] = 898,
  [SMALL_STATE(32)] = 917,
  [SMALL_STATE(33)] = 936,
  [SMALL_STATE(34)] = 955,
  [SMALL_STATE(35)] = 974,
  [SMALL_STATE(36)] = 992,
  [SMALL_STATE(37)] = 1010,
  [SMALL_STATE(38)] = 1028,
  [SMALL_STATE(39)] = 1046,
  [SMALL_STATE(40)] = 1064,
  [SMALL_STATE(41)] = 1082,
  [SMALL_STATE(42)] = 1100,
  [SMALL_STATE(43)] = 1118,
  [SMALL_STATE(44)] = 1136,
  [SMALL_STATE(45)] = 1150,
  [SMALL_STATE(46)] = 1164,
  [SMALL_STATE(47)] = 1178,
  [SMALL_STATE(48)] = 1192,
  [SMALL_STATE(49)] = 1206,
  [SMALL_STATE(50)] = 1220,
  [SMALL_STATE(51)] = 1234,
  [SMALL_STATE(52)] = 1242,
  [SMALL_STATE(53)] = 1250,
  [SMALL_STATE(54)] = 1257,
  [SMALL_STATE(55)] = 1264,
  [SMALL_STATE(56)] = 1271,
  [SMALL_STATE(57)] = 1278,
  [SMALL_STATE(58)] = 1285,
  [SMALL_STATE(59)] = 1292,
  [SMALL_STATE(60)] = 1297,
  [SMALL_STATE(61)] = 1304,
  [SMALL_STATE(62)] = 1311,
  [SMALL_STATE(63)] = 1315,
  [SMALL_STATE(64)] = 1319,
  [SMALL_STATE(65)] = 1323,
  [SMALL_STATE(66)] = 1327,
  [SMALL_STATE(67)] = 1331,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(34),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(58),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(50),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(60),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(59),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(11),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(14),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(62),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(54),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(64),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(13),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(41),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(5),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(61),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(49),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_symbol_repeat1, 2),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(18),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(19),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_comment, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_comment, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_string, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_comment, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_comment, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_comment_repeat1, 2), SHIFT_REPEAT(48),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_comment_repeat1, 2), SHIFT_REPEAT(45),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_comment_repeat1, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat2, 2), SHIFT_REPEAT(67),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [268] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat2, 3),
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
