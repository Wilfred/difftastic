#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 155
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  sym_comment = 1,
  sym__newline = 2,
  anon_sym_LBRACK = 3,
  anon_sym_RBRACK = 4,
  anon_sym_LBRACK_LBRACK = 5,
  anon_sym_RBRACK_RBRACK = 6,
  anon_sym_EQ = 7,
  anon_sym_DOT = 8,
  sym__bare_key = 9,
  anon_sym_DQUOTE = 10,
  aux_sym__basic_string_token1 = 11,
  anon_sym_DQUOTE2 = 12,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 13,
  aux_sym__multiline_basic_string_token1 = 14,
  aux_sym__multiline_basic_string_token2 = 15,
  anon_sym_DQUOTE_DQUOTE_DQUOTE2 = 16,
  sym_escape_sequence = 17,
  sym__escape_line_ending = 18,
  anon_sym_SQUOTE = 19,
  aux_sym__literal_string_token1 = 20,
  anon_sym_SQUOTE2 = 21,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 22,
  aux_sym__multiline_literal_string_token1 = 23,
  anon_sym_SQUOTE_SQUOTE_SQUOTE2 = 24,
  aux_sym_integer_token1 = 25,
  aux_sym_integer_token2 = 26,
  aux_sym_integer_token3 = 27,
  aux_sym_integer_token4 = 28,
  aux_sym_float_token1 = 29,
  aux_sym_float_token2 = 30,
  aux_sym_float_token3 = 31,
  sym_boolean = 32,
  sym_offset_date_time = 33,
  sym_local_date_time = 34,
  sym_local_date = 35,
  sym_local_time = 36,
  anon_sym_COMMA = 37,
  anon_sym_LBRACE = 38,
  anon_sym_RBRACE = 39,
  sym__line_ending_or_eof = 40,
  sym_file = 41,
  sym_table = 42,
  sym_table_array = 43,
  sym_pair = 44,
  sym__inline_pair = 45,
  sym_key = 46,
  sym_dotted_key = 47,
  sym__quoted_key = 48,
  sym__inline_value = 49,
  sym_string = 50,
  sym__basic_string = 51,
  sym__multiline_basic_string = 52,
  sym__literal_string = 53,
  sym__multiline_literal_string = 54,
  sym_integer = 55,
  sym_float = 56,
  sym_array = 57,
  sym_inline_table = 58,
  aux_sym_file_repeat1 = 59,
  aux_sym__basic_string_repeat1 = 60,
  aux_sym__multiline_basic_string_repeat1 = 61,
  aux_sym__multiline_literal_string_repeat1 = 62,
  aux_sym_array_repeat1 = 63,
  aux_sym_array_repeat2 = 64,
  aux_sym_inline_table_repeat1 = 65,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym__newline] = "_newline",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT] = ".",
  [sym__bare_key] = "_bare_key",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__basic_string_token1] = "_basic_string_token1",
  [anon_sym_DQUOTE2] = "\"",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [aux_sym__multiline_basic_string_token1] = "_multiline_basic_string_token1",
  [aux_sym__multiline_basic_string_token2] = "_multiline_basic_string_token2",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = "\"\"\"",
  [sym_escape_sequence] = "escape_sequence",
  [sym__escape_line_ending] = "escape_sequence",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__literal_string_token1] = "_literal_string_token1",
  [anon_sym_SQUOTE2] = "'",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [aux_sym__multiline_literal_string_token1] = "_multiline_literal_string_token1",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = "'''",
  [aux_sym_integer_token1] = "integer_token1",
  [aux_sym_integer_token2] = "integer_token2",
  [aux_sym_integer_token3] = "integer_token3",
  [aux_sym_integer_token4] = "integer_token4",
  [aux_sym_float_token1] = "float_token1",
  [aux_sym_float_token2] = "float_token2",
  [aux_sym_float_token3] = "float_token3",
  [sym_boolean] = "boolean",
  [sym_offset_date_time] = "offset_date_time",
  [sym_local_date_time] = "local_date_time",
  [sym_local_date] = "local_date",
  [sym_local_time] = "local_time",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym__line_ending_or_eof] = "_line_ending_or_eof",
  [sym_file] = "file",
  [sym_table] = "table",
  [sym_table_array] = "table_array",
  [sym_pair] = "pair",
  [sym__inline_pair] = "_inline_pair",
  [sym_key] = "key",
  [sym_dotted_key] = "dotted_key",
  [sym__quoted_key] = "_quoted_key",
  [sym__inline_value] = "_inline_value",
  [sym_string] = "string",
  [sym__basic_string] = "_basic_string",
  [sym__multiline_basic_string] = "_multiline_basic_string",
  [sym__literal_string] = "_literal_string",
  [sym__multiline_literal_string] = "_multiline_literal_string",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_array] = "array",
  [sym_inline_table] = "inline_table",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym__basic_string_repeat1] = "_basic_string_repeat1",
  [aux_sym__multiline_basic_string_repeat1] = "_multiline_basic_string_repeat1",
  [aux_sym__multiline_literal_string_repeat1] = "_multiline_literal_string_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_array_repeat2] = "array_repeat2",
  [aux_sym_inline_table_repeat1] = "inline_table_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
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
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym__bare_key] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__basic_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__multiline_basic_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__multiline_basic_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__escape_line_ending] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__literal_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__multiline_literal_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = {
    .visible = true,
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
  [aux_sym_integer_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token4] = {
    .visible = false,
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
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_offset_date_time] = {
    .visible = true,
    .named = true,
  },
  [sym_local_date_time] = {
    .visible = true,
    .named = true,
  },
  [sym_local_date] = {
    .visible = true,
    .named = true,
  },
  [sym_local_time] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
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
  [sym__line_ending_or_eof] = {
    .visible = false,
    .named = true,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_table_array] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym__inline_pair] = {
    .visible = false,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_key] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_key] = {
    .visible = false,
    .named = true,
  },
  [sym__inline_value] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__basic_string] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_basic_string] = {
    .visible = false,
    .named = true,
  },
  [sym__literal_string] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_literal_string] = {
    .visible = false,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_table] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__basic_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__multiline_basic_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__multiline_literal_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_table_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [1] = sym_pair,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(80);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '"') ADVANCE(134);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(148);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == ',') ADVANCE(176);
      if (lookahead == '-') ADVANCE(99);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '0') ADVANCE(96);
      if (lookahead == '1') ADVANCE(94);
      if (lookahead == '2') ADVANCE(93);
      if (lookahead == '=') ADVANCE(88);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == ']') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == '{') ADVANCE(177);
      if (lookahead == '}') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(80);
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '"') ADVANCE(129);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(143);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == ',') ADVANCE(176);
      if (lookahead == '-') ADVANCE(99);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '0') ADVANCE(96);
      if (lookahead == '1') ADVANCE(94);
      if (lookahead == '2') ADVANCE(93);
      if (lookahead == '=') ADVANCE(88);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == ']') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == '{') ADVANCE(177);
      if (lookahead == '}') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(80);
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '"') ADVANCE(128);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(142);
      if (lookahead == ',') ADVANCE(176);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '=') ADVANCE(88);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == '}') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 3:
      if (lookahead == '\t') SKIP(14)
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '') ADVANCE(132);
      END_STATE();
    case 4:
      if (lookahead == '\t') SKIP(14)
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '"') ADVANCE(133);
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '') ADVANCE(132);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(138);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '\'') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '') ADVANCE(146);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(141);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == 'U') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(140);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(82);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '"') ADVANCE(129);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(143);
      if (lookahead == ',') ADVANCE(176);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '0') ADVANCE(158);
      if (lookahead == '1') ADVANCE(156);
      if (lookahead == '2') ADVANCE(155);
      if (lookahead == '[') ADVANCE(83);
      if (lookahead == ']') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == '{') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(20);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(147);
      if (lookahead == ',') ADVANCE(176);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == ']') ADVANCE(85);
      if (lookahead == '}') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == ',') ADVANCE(176);
      if (lookahead == ']') ADVANCE(85);
      if (lookahead == '}') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(135);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '\'') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '') ADVANCE(146);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(149);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ':') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == '0') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'n') ADVANCE(38);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 21:
      if (lookahead == '0') ADVANCE(164);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 22:
      if (lookahead == '0') ADVANCE(164);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 23:
      if (lookahead == '0') ADVANCE(174);
      END_STATE();
    case 24:
      if (lookahead == '0') ADVANCE(56);
      if (lookahead == '1') ADVANCE(49);
      END_STATE();
    case 25:
      if (lookahead == '0') ADVANCE(171);
      END_STATE();
    case 26:
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == '3') ADVANCE(48);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(64);
      END_STATE();
    case 27:
      if (lookahead == '2') ADVANCE(50);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(68);
      END_STATE();
    case 28:
      if (lookahead == '2') ADVANCE(51);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(69);
      END_STATE();
    case 29:
      if (lookahead == '6') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(61);
      END_STATE();
    case 30:
      if (lookahead == '6') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(65);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(53);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(30);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == 'U') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(140);
      END_STATE();
    case 36:
      if (lookahead == ']') ADVANCE(87);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 40:
      if (lookahead == 'f') ADVANCE(168);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 47:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(162);
      END_STATE();
    case 48:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(173);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(19);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(34);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(32);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(60);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(66);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(70);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(161);
      END_STATE();
    case 56:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 57:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '\r') ADVANCE(9);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(86);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == '-') ADVANCE(100);
      if (lookahead == '0') ADVANCE(167);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == '_') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == ':') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '_') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(91);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '_') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '_') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == 'b') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(120);
      if (lookahead == 'x') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(108);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0') ADVANCE(167);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0') ADVANCE(122);
      if (lookahead == '1') ADVANCE(119);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0') ADVANCE(121);
      if (lookahead == '3') ADVANCE(117);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(123);
      if (lookahead == '-' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(118);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(103);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'l') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'r') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'u') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(127);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(103);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(98);
      if (lookahead == '-' ||
          ('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__bare_key);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__bare_key);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(13);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__basic_string_token1);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '#') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '') ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__basic_string_token1);
      if ((0 <= lookahead && lookahead <= '\t') ||
          ('' <= lookahead && lookahead <= '') ||
          lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == '') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__basic_string_token1);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      if (lookahead == '"') ADVANCE(13);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__multiline_basic_string_token1);
      if (lookahead == '"') ADVANCE(139);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__multiline_basic_string_token1);
      if (lookahead == '"') ADVANCE(136);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__multiline_basic_string_token2);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(5);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE2);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__escape_line_ending);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(16);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '') ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if ((0 <= lookahead && lookahead <= '') ||
          ('' <= lookahead && lookahead <= '') ||
          lookahead == '\'' ||
          lookahead == '') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          (lookahead < '\n' || '' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '') ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      if (lookahead == '\'') ADVANCE(16);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__multiline_literal_string_token1);
      if (lookahead == '\'') ADVANCE(152);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__multiline_literal_string_token1);
      if (lookahead == '\'') ADVANCE(150);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE2);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(154);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == 'b') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == 'x') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead == '_') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_float_token2);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '_') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_float_token3);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_offset_date_time);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_local_date_time);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(170);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_local_date_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_local_date);
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_local_time);
      if (lookahead == '.') ADVANCE(62);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_local_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 0, .external_lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 0, .external_lex_state = 1},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 0, .external_lex_state = 1},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 0, .external_lex_state = 1},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 0, .external_lex_state = 1},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 11, .external_lex_state = 1},
  [33] = {.lex_state = 0, .external_lex_state = 1},
  [34] = {.lex_state = 0, .external_lex_state = 1},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0, .external_lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0, .external_lex_state = 1},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 0, .external_lex_state = 1},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 0, .external_lex_state = 1},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 11, .external_lex_state = 1},
  [48] = {.lex_state = 0, .external_lex_state = 1},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 0, .external_lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0, .external_lex_state = 1},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0, .external_lex_state = 1},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 0, .external_lex_state = 1},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 0, .external_lex_state = 1},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0, .external_lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 0, .external_lex_state = 1},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0, .external_lex_state = 1},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 11},
  [78] = {.lex_state = 11},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 0, .external_lex_state = 1},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 0, .external_lex_state = 1},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 0, .external_lex_state = 1},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0, .external_lex_state = 1},
  [90] = {.lex_state = 0, .external_lex_state = 1},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 1},
  [93] = {.lex_state = 0, .external_lex_state = 1},
  [94] = {.lex_state = 11},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 11},
  [97] = {.lex_state = 11},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 11},
  [103] = {.lex_state = 11},
  [104] = {.lex_state = 11},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 11},
  [110] = {.lex_state = 11},
  [111] = {.lex_state = 11},
  [112] = {.lex_state = 11},
  [113] = {.lex_state = 11},
  [114] = {.lex_state = 11},
  [115] = {.lex_state = 11},
  [116] = {.lex_state = 11},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 15},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 11},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 11},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 11},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 11},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 11},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 10},
  [144] = {.lex_state = 10},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 10},
  [148] = {.lex_state = 10},
  [149] = {.lex_state = 10},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 15},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 11},
  [154] = {.lex_state = 0},
};

enum {
  ts_external_token__line_ending_or_eof = 0,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__line_ending_or_eof] = sym__line_ending_or_eof,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__line_ending_or_eof] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [sym__line_ending_or_eof] = ACTIONS(1),
    [sym_local_time] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [sym__bare_key] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [aux_sym_integer_token2] = ACTIONS(1),
    [aux_sym_float_token3] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym__escape_line_ending] = ACTIONS(1),
    [sym_local_date] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_integer_token4] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [aux_sym_float_token2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_pair] = STATE(10),
    [sym__inline_pair] = STATE(7),
    [sym__basic_string] = STATE(4),
    [sym_file] = STATE(8),
    [sym_key] = STATE(9),
    [sym_dotted_key] = STATE(9),
    [sym__literal_string] = STATE(4),
    [sym_table] = STATE(10),
    [aux_sym_file_repeat1] = STATE(10),
    [sym__quoted_key] = STATE(4),
    [sym_table_array] = STATE(10),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(11),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [2] = {
    [sym_dotted_key] = STATE(11),
    [sym__literal_string] = STATE(4),
    [sym__basic_string] = STATE(4),
    [sym__quoted_key] = STATE(4),
    [sym_key] = STATE(11),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym__bare_key] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [3] = {
    [aux_sym__basic_string_repeat1] = STATE(13),
    [anon_sym_DQUOTE2] = ACTIONS(19),
    [sym_escape_sequence] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
    [aux_sym__basic_string_token1] = ACTIONS(25),
  },
  [4] = {
    [anon_sym_EQ] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(27),
  },
  [5] = {
    [sym_dotted_key] = STATE(14),
    [sym__literal_string] = STATE(88),
    [sym__basic_string] = STATE(88),
    [sym__quoted_key] = STATE(88),
    [sym_key] = STATE(14),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym__bare_key] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(33),
  },
  [6] = {
    [anon_sym_SQUOTE2] = ACTIONS(35),
    [aux_sym__literal_string_token1] = ACTIONS(37),
    [sym_comment] = ACTIONS(23),
  },
  [7] = {
    [sym__line_ending_or_eof] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(41),
  },
  [9] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
  },
  [10] = {
    [sym_pair] = STATE(20),
    [sym__inline_pair] = STATE(7),
    [sym__basic_string] = STATE(4),
    [sym_key] = STATE(9),
    [sym_dotted_key] = STATE(9),
    [sym__literal_string] = STATE(4),
    [sym_table] = STATE(20),
    [sym_table_array] = STATE(20),
    [sym__quoted_key] = STATE(4),
    [aux_sym_file_repeat1] = STATE(20),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(49),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [11] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(45),
  },
  [12] = {
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(53),
    [anon_sym_DOT] = ACTIONS(53),
  },
  [13] = {
    [aux_sym__basic_string_repeat1] = STATE(23),
    [anon_sym_DQUOTE2] = ACTIONS(55),
    [sym_escape_sequence] = ACTIONS(57),
    [sym_comment] = ACTIONS(23),
    [aux_sym__basic_string_token1] = ACTIONS(59),
  },
  [14] = {
    [anon_sym_DOT] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(63),
  },
  [15] = {
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(65),
    [anon_sym_DOT] = ACTIONS(65),
  },
  [16] = {
    [anon_sym_SQUOTE2] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [anon_sym_LBRACK_LBRACK] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(69),
    [sym__bare_key] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(69),
  },
  [18] = {
    [sym_integer] = STATE(34),
    [sym_string] = STATE(34),
    [sym__basic_string] = STATE(33),
    [sym_float] = STATE(34),
    [sym_array] = STATE(34),
    [sym__multiline_basic_string] = STATE(33),
    [sym__literal_string] = STATE(33),
    [sym_inline_table] = STATE(34),
    [sym__inline_value] = STATE(34),
    [sym__multiline_literal_string] = STATE(33),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [sym_local_time] = ACTIONS(75),
    [sym_offset_date_time] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [aux_sym_integer_token3] = ACTIONS(79),
    [sym_boolean] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
    [sym_local_date] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(83),
    [aux_sym_integer_token2] = ACTIONS(79),
    [aux_sym_float_token3] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(89),
    [sym_local_date_time] = ACTIONS(81),
    [aux_sym_integer_token4] = ACTIONS(79),
    [aux_sym_integer_token1] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(93),
  },
  [19] = {
    [sym__literal_string] = STATE(4),
    [sym__basic_string] = STATE(4),
    [sym__quoted_key] = STATE(4),
    [sym_key] = STATE(35),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym__bare_key] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [20] = {
    [sym_pair] = STATE(20),
    [sym__inline_pair] = STATE(7),
    [sym__basic_string] = STATE(4),
    [sym_key] = STATE(9),
    [sym_dotted_key] = STATE(9),
    [sym__literal_string] = STATE(4),
    [sym_table] = STATE(20),
    [sym_table_array] = STATE(20),
    [sym__quoted_key] = STATE(4),
    [aux_sym_file_repeat1] = STATE(20),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [ts_builtin_sym_end] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(103),
    [sym__bare_key] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_SQUOTE] = ACTIONS(112),
  },
  [21] = {
    [sym__line_ending_or_eof] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(117),
  },
  [23] = {
    [aux_sym__basic_string_repeat1] = STATE(23),
    [anon_sym_DQUOTE2] = ACTIONS(119),
    [sym_escape_sequence] = ACTIONS(121),
    [sym_comment] = ACTIONS(23),
    [aux_sym__basic_string_token1] = ACTIONS(124),
  },
  [24] = {
    [sym__line_ending_or_eof] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_EQ] = ACTIONS(129),
    [anon_sym_RBRACE] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(129),
    [anon_sym_DOT] = ACTIONS(129),
  },
  [26] = {
    [sym_dotted_key] = STATE(154),
    [sym__literal_string] = STATE(4),
    [sym__inline_pair] = STATE(39),
    [sym__basic_string] = STATE(4),
    [sym__quoted_key] = STATE(4),
    [sym_key] = STATE(154),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(131),
    [sym__bare_key] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [27] = {
    [sym__line_ending_or_eof] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym_integer] = STATE(42),
    [sym_string] = STATE(42),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(42),
    [sym_array] = STATE(42),
    [aux_sym_array_repeat1] = STATE(41),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(42),
    [sym__inline_value] = STATE(42),
    [sym__multiline_literal_string] = STATE(97),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(137),
    [sym_local_time] = ACTIONS(139),
    [sym_offset_date_time] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(141),
    [aux_sym_integer_token3] = ACTIONS(143),
    [sym_boolean] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
    [sym_local_date] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(147),
    [aux_sym_integer_token2] = ACTIONS(143),
    [aux_sym_float_token3] = ACTIONS(149),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(151),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(153),
    [sym_local_date_time] = ACTIONS(145),
    [sym__newline] = ACTIONS(155),
    [aux_sym_integer_token4] = ACTIONS(143),
    [aux_sym_integer_token1] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
  },
  [29] = {
    [sym__line_ending_or_eof] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(44),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(163),
    [aux_sym__literal_string_token1] = ACTIONS(163),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(165),
    [sym_comment] = ACTIONS(23),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(167),
  },
  [31] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(46),
    [sym_comment] = ACTIONS(23),
    [sym__escape_line_ending] = ACTIONS(169),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(169),
    [sym_escape_sequence] = ACTIONS(169),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(171),
    [aux_sym__basic_string_token1] = ACTIONS(171),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(173),
  },
  [32] = {
    [sym__line_ending_or_eof] = ACTIONS(133),
    [aux_sym_float_token1] = ACTIONS(175),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_token2] = ACTIONS(177),
  },
  [33] = {
    [sym__line_ending_or_eof] = ACTIONS(179),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [sym__line_ending_or_eof] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [anon_sym_EQ] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(183),
    [anon_sym_DOT] = ACTIONS(183),
  },
  [36] = {
    [anon_sym_LBRACK_LBRACK] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(185),
    [ts_builtin_sym_end] = ACTIONS(185),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(185),
    [sym__bare_key] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_SQUOTE] = ACTIONS(185),
  },
  [37] = {
    [anon_sym_LBRACK_LBRACK] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(189),
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(189),
    [sym__bare_key] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(189),
  },
  [38] = {
    [sym__line_ending_or_eof] = ACTIONS(193),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [aux_sym_inline_table_repeat1] = STATE(51),
    [anon_sym_COMMA] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(197),
  },
  [40] = {
    [sym__line_ending_or_eof] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [sym_integer] = STATE(54),
    [sym_string] = STATE(54),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(54),
    [sym_array] = STATE(54),
    [aux_sym_array_repeat1] = STATE(53),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(54),
    [sym__inline_value] = STATE(54),
    [sym__multiline_literal_string] = STATE(97),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(201),
    [sym_local_time] = ACTIONS(203),
    [sym_offset_date_time] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(141),
    [aux_sym_integer_token3] = ACTIONS(143),
    [sym_boolean] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
    [sym_local_date] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(147),
    [aux_sym_integer_token2] = ACTIONS(143),
    [aux_sym_float_token3] = ACTIONS(149),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(151),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(153),
    [sym_local_date_time] = ACTIONS(205),
    [sym__newline] = ACTIONS(207),
    [aux_sym_integer_token4] = ACTIONS(143),
    [aux_sym_integer_token1] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
  },
  [42] = {
    [aux_sym_array_repeat1] = STATE(56),
    [aux_sym_array_repeat2] = STATE(57),
    [anon_sym_COMMA] = ACTIONS(209),
    [sym__newline] = ACTIONS(211),
    [anon_sym_RBRACK] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
  },
  [43] = {
    [sym__line_ending_or_eof] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(59),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(215),
    [aux_sym__literal_string_token1] = ACTIONS(215),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(217),
    [sym_comment] = ACTIONS(23),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(219),
  },
  [45] = {
    [sym__line_ending_or_eof] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(61),
    [sym_comment] = ACTIONS(23),
    [sym__escape_line_ending] = ACTIONS(223),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(223),
    [sym_escape_sequence] = ACTIONS(223),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(225),
    [aux_sym__basic_string_token1] = ACTIONS(225),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(227),
  },
  [47] = {
    [sym__line_ending_or_eof] = ACTIONS(229),
    [aux_sym_float_token2] = ACTIONS(231),
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [sym__line_ending_or_eof] = ACTIONS(229),
    [sym_comment] = ACTIONS(3),
  },
  [49] = {
    [sym_dotted_key] = STATE(154),
    [sym__literal_string] = STATE(4),
    [sym__inline_pair] = STATE(63),
    [sym__basic_string] = STATE(4),
    [sym__quoted_key] = STATE(4),
    [sym_key] = STATE(154),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym__bare_key] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [50] = {
    [sym__line_ending_or_eof] = ACTIONS(233),
    [sym_comment] = ACTIONS(3),
  },
  [51] = {
    [aux_sym_inline_table_repeat1] = STATE(65),
    [anon_sym_COMMA] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(235),
  },
  [52] = {
    [sym__line_ending_or_eof] = ACTIONS(237),
    [sym_comment] = ACTIONS(3),
  },
  [53] = {
    [aux_sym_array_repeat1] = STATE(53),
    [sym_local_time] = ACTIONS(239),
    [sym_offset_date_time] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(239),
    [aux_sym_integer_token2] = ACTIONS(239),
    [aux_sym_float_token3] = ACTIONS(239),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(239),
    [sym_local_date_time] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [anon_sym_RBRACK] = ACTIONS(239),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(239),
    [sym_boolean] = ACTIONS(239),
    [sym_local_date] = ACTIONS(241),
    [anon_sym_COMMA] = ACTIONS(239),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(239),
    [sym__newline] = ACTIONS(243),
    [aux_sym_integer_token4] = ACTIONS(239),
    [aux_sym_integer_token1] = ACTIONS(241),
    [anon_sym_SQUOTE] = ACTIONS(241),
  },
  [54] = {
    [aux_sym_array_repeat1] = STATE(68),
    [aux_sym_array_repeat2] = STATE(69),
    [anon_sym_COMMA] = ACTIONS(246),
    [sym__newline] = ACTIONS(248),
    [anon_sym_RBRACK] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
  },
  [55] = {
    [sym_integer] = STATE(71),
    [sym_string] = STATE(71),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(71),
    [sym_array] = STATE(71),
    [aux_sym_array_repeat1] = STATE(70),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(71),
    [sym__inline_value] = STATE(71),
    [sym__multiline_literal_string] = STATE(97),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(250),
    [sym_local_time] = ACTIONS(252),
    [sym_offset_date_time] = ACTIONS(252),
    [anon_sym_LBRACE] = ACTIONS(141),
    [aux_sym_integer_token3] = ACTIONS(143),
    [sym_boolean] = ACTIONS(252),
    [sym_comment] = ACTIONS(3),
    [sym_local_date] = ACTIONS(254),
    [anon_sym_LBRACK] = ACTIONS(147),
    [aux_sym_integer_token2] = ACTIONS(143),
    [aux_sym_float_token3] = ACTIONS(149),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(151),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(153),
    [sym_local_date_time] = ACTIONS(254),
    [sym__newline] = ACTIONS(256),
    [aux_sym_integer_token4] = ACTIONS(143),
    [aux_sym_integer_token1] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
  },
  [56] = {
    [aux_sym_array_repeat1] = STATE(53),
    [aux_sym_array_repeat2] = STATE(69),
    [anon_sym_COMMA] = ACTIONS(246),
    [sym__newline] = ACTIONS(207),
    [anon_sym_RBRACK] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
  },
  [57] = {
    [aux_sym_array_repeat2] = STATE(72),
    [anon_sym_COMMA] = ACTIONS(246),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(250),
  },
  [58] = {
    [sym__line_ending_or_eof] = ACTIONS(258),
    [sym_comment] = ACTIONS(3),
  },
  [59] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(59),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(260),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(263),
    [aux_sym__literal_string_token1] = ACTIONS(260),
    [sym_comment] = ACTIONS(23),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(266),
  },
  [60] = {
    [sym__line_ending_or_eof] = ACTIONS(268),
    [sym_comment] = ACTIONS(3),
  },
  [61] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(61),
    [sym_comment] = ACTIONS(23),
    [sym__escape_line_ending] = ACTIONS(270),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(270),
    [sym_escape_sequence] = ACTIONS(270),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(273),
    [aux_sym__basic_string_token1] = ACTIONS(273),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(276),
  },
  [62] = {
    [sym__line_ending_or_eof] = ACTIONS(278),
    [sym_comment] = ACTIONS(3),
  },
  [63] = {
    [anon_sym_COMMA] = ACTIONS(280),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(280),
  },
  [64] = {
    [sym__line_ending_or_eof] = ACTIONS(282),
    [sym_comment] = ACTIONS(3),
  },
  [65] = {
    [aux_sym_inline_table_repeat1] = STATE(65),
    [anon_sym_COMMA] = ACTIONS(284),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(287),
  },
  [66] = {
    [sym_integer] = STATE(71),
    [sym_string] = STATE(71),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(71),
    [sym_array] = STATE(71),
    [aux_sym_array_repeat1] = STATE(74),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(71),
    [sym__inline_value] = STATE(71),
    [sym__multiline_literal_string] = STATE(97),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(289),
    [sym_local_time] = ACTIONS(252),
    [sym_offset_date_time] = ACTIONS(252),
    [anon_sym_LBRACE] = ACTIONS(141),
    [aux_sym_integer_token3] = ACTIONS(143),
    [sym_boolean] = ACTIONS(252),
    [sym_comment] = ACTIONS(3),
    [sym_local_date] = ACTIONS(254),
    [anon_sym_LBRACK] = ACTIONS(147),
    [aux_sym_integer_token2] = ACTIONS(143),
    [aux_sym_float_token3] = ACTIONS(149),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(151),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(153),
    [sym_local_date_time] = ACTIONS(254),
    [sym__newline] = ACTIONS(291),
    [aux_sym_integer_token4] = ACTIONS(143),
    [aux_sym_integer_token1] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
  },
  [67] = {
    [sym__line_ending_or_eof] = ACTIONS(293),
    [sym_comment] = ACTIONS(3),
  },
  [68] = {
    [aux_sym_array_repeat1] = STATE(53),
    [aux_sym_array_repeat2] = STATE(76),
    [anon_sym_COMMA] = ACTIONS(295),
    [sym__newline] = ACTIONS(207),
    [anon_sym_RBRACK] = ACTIONS(289),
    [sym_comment] = ACTIONS(3),
  },
  [69] = {
    [aux_sym_array_repeat2] = STATE(72),
    [anon_sym_COMMA] = ACTIONS(295),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(289),
  },
  [70] = {
    [sym_integer] = STATE(77),
    [sym_string] = STATE(77),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(77),
    [sym_array] = STATE(77),
    [aux_sym_array_repeat1] = STATE(53),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(77),
    [sym__inline_value] = STATE(77),
    [sym__multiline_literal_string] = STATE(97),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(289),
    [sym_local_time] = ACTIONS(297),
    [sym_offset_date_time] = ACTIONS(297),
    [anon_sym_LBRACE] = ACTIONS(141),
    [aux_sym_integer_token3] = ACTIONS(143),
    [sym_boolean] = ACTIONS(297),
    [sym_comment] = ACTIONS(3),
    [sym_local_date] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(147),
    [aux_sym_integer_token2] = ACTIONS(143),
    [aux_sym_float_token3] = ACTIONS(149),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(151),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(153),
    [sym_local_date_time] = ACTIONS(299),
    [sym__newline] = ACTIONS(207),
    [aux_sym_integer_token4] = ACTIONS(143),
    [aux_sym_integer_token1] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
  },
  [71] = {
    [aux_sym_array_repeat1] = STATE(78),
    [anon_sym_COMMA] = ACTIONS(301),
    [sym__newline] = ACTIONS(303),
    [anon_sym_RBRACK] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
  },
  [72] = {
    [aux_sym_array_repeat2] = STATE(72),
    [anon_sym_COMMA] = ACTIONS(305),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(301),
  },
  [73] = {
    [sym__line_ending_or_eof] = ACTIONS(308),
    [sym_comment] = ACTIONS(3),
  },
  [74] = {
    [sym_integer] = STATE(77),
    [sym_string] = STATE(77),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(77),
    [sym_array] = STATE(77),
    [aux_sym_array_repeat1] = STATE(53),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(77),
    [sym__inline_value] = STATE(77),
    [sym__multiline_literal_string] = STATE(97),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(310),
    [sym_local_time] = ACTIONS(297),
    [sym_offset_date_time] = ACTIONS(297),
    [anon_sym_LBRACE] = ACTIONS(141),
    [aux_sym_integer_token3] = ACTIONS(143),
    [sym_boolean] = ACTIONS(297),
    [sym_comment] = ACTIONS(3),
    [sym_local_date] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(147),
    [aux_sym_integer_token2] = ACTIONS(143),
    [aux_sym_float_token3] = ACTIONS(149),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(151),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(153),
    [sym_local_date_time] = ACTIONS(299),
    [sym__newline] = ACTIONS(207),
    [aux_sym_integer_token4] = ACTIONS(143),
    [aux_sym_integer_token1] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
  },
  [75] = {
    [sym_integer] = STATE(71),
    [sym_string] = STATE(71),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(71),
    [sym_array] = STATE(71),
    [aux_sym_array_repeat1] = STATE(81),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(71),
    [sym__inline_value] = STATE(71),
    [sym__multiline_literal_string] = STATE(97),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(310),
    [sym_local_time] = ACTIONS(252),
    [sym_offset_date_time] = ACTIONS(252),
    [anon_sym_LBRACE] = ACTIONS(141),
    [aux_sym_integer_token3] = ACTIONS(143),
    [sym_boolean] = ACTIONS(252),
    [sym_comment] = ACTIONS(3),
    [sym_local_date] = ACTIONS(254),
    [anon_sym_LBRACK] = ACTIONS(147),
    [aux_sym_integer_token2] = ACTIONS(143),
    [aux_sym_float_token3] = ACTIONS(149),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(151),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(153),
    [sym_local_date_time] = ACTIONS(254),
    [sym__newline] = ACTIONS(312),
    [aux_sym_integer_token4] = ACTIONS(143),
    [aux_sym_integer_token1] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
  },
  [76] = {
    [aux_sym_array_repeat2] = STATE(72),
    [anon_sym_COMMA] = ACTIONS(314),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(310),
  },
  [77] = {
    [aux_sym_array_repeat1] = STATE(83),
    [anon_sym_COMMA] = ACTIONS(316),
    [sym__newline] = ACTIONS(318),
    [anon_sym_RBRACK] = ACTIONS(316),
    [sym_comment] = ACTIONS(3),
  },
  [78] = {
    [aux_sym_array_repeat1] = STATE(53),
    [anon_sym_COMMA] = ACTIONS(316),
    [sym__newline] = ACTIONS(207),
    [anon_sym_RBRACK] = ACTIONS(316),
    [sym_comment] = ACTIONS(3),
  },
  [79] = {
    [sym_integer] = STATE(71),
    [sym_string] = STATE(71),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(71),
    [sym_array] = STATE(71),
    [aux_sym_array_repeat1] = STATE(84),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(71),
    [sym__inline_value] = STATE(71),
    [sym__multiline_literal_string] = STATE(97),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [sym_local_time] = ACTIONS(252),
    [sym_offset_date_time] = ACTIONS(252),
    [anon_sym_LBRACE] = ACTIONS(141),
    [aux_sym_integer_token3] = ACTIONS(143),
    [sym_boolean] = ACTIONS(252),
    [sym_comment] = ACTIONS(3),
    [sym_local_date] = ACTIONS(254),
    [anon_sym_LBRACK] = ACTIONS(147),
    [aux_sym_integer_token2] = ACTIONS(143),
    [aux_sym_float_token3] = ACTIONS(149),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(151),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(153),
    [sym_local_date_time] = ACTIONS(254),
    [sym__newline] = ACTIONS(320),
    [aux_sym_integer_token4] = ACTIONS(143),
    [aux_sym_integer_token1] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
  },
  [80] = {
    [sym__line_ending_or_eof] = ACTIONS(322),
    [sym_comment] = ACTIONS(3),
  },
  [81] = {
    [sym_integer] = STATE(77),
    [sym_string] = STATE(77),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(77),
    [sym_array] = STATE(77),
    [aux_sym_array_repeat1] = STATE(53),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(77),
    [sym__inline_value] = STATE(77),
    [sym__multiline_literal_string] = STATE(97),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(324),
    [sym_local_time] = ACTIONS(297),
    [sym_offset_date_time] = ACTIONS(297),
    [anon_sym_LBRACE] = ACTIONS(141),
    [aux_sym_integer_token3] = ACTIONS(143),
    [sym_boolean] = ACTIONS(297),
    [sym_comment] = ACTIONS(3),
    [sym_local_date] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(147),
    [aux_sym_integer_token2] = ACTIONS(143),
    [aux_sym_float_token3] = ACTIONS(149),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(151),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(153),
    [sym_local_date_time] = ACTIONS(299),
    [sym__newline] = ACTIONS(207),
    [aux_sym_integer_token4] = ACTIONS(143),
    [aux_sym_integer_token1] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
  },
  [82] = {
    [sym_integer] = STATE(71),
    [sym_string] = STATE(71),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(71),
    [sym_array] = STATE(71),
    [aux_sym_array_repeat1] = STATE(86),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(71),
    [sym__inline_value] = STATE(71),
    [sym__multiline_literal_string] = STATE(97),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(324),
    [sym_local_time] = ACTIONS(252),
    [sym_offset_date_time] = ACTIONS(252),
    [anon_sym_LBRACE] = ACTIONS(141),
    [aux_sym_integer_token3] = ACTIONS(143),
    [sym_boolean] = ACTIONS(252),
    [sym_comment] = ACTIONS(3),
    [sym_local_date] = ACTIONS(254),
    [anon_sym_LBRACK] = ACTIONS(147),
    [aux_sym_integer_token2] = ACTIONS(143),
    [aux_sym_float_token3] = ACTIONS(149),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(151),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(153),
    [sym_local_date_time] = ACTIONS(254),
    [sym__newline] = ACTIONS(326),
    [aux_sym_integer_token4] = ACTIONS(143),
    [aux_sym_integer_token1] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
  },
  [83] = {
    [aux_sym_array_repeat1] = STATE(53),
    [anon_sym_COMMA] = ACTIONS(328),
    [sym__newline] = ACTIONS(207),
    [anon_sym_RBRACK] = ACTIONS(328),
    [sym_comment] = ACTIONS(3),
  },
  [84] = {
    [sym_integer] = STATE(77),
    [sym_string] = STATE(77),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(77),
    [sym_array] = STATE(77),
    [aux_sym_array_repeat1] = STATE(53),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(77),
    [sym__inline_value] = STATE(77),
    [sym__multiline_literal_string] = STATE(97),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [sym_local_time] = ACTIONS(297),
    [sym_offset_date_time] = ACTIONS(297),
    [anon_sym_LBRACE] = ACTIONS(141),
    [aux_sym_integer_token3] = ACTIONS(143),
    [sym_boolean] = ACTIONS(297),
    [sym_comment] = ACTIONS(3),
    [sym_local_date] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(147),
    [aux_sym_integer_token2] = ACTIONS(143),
    [aux_sym_float_token3] = ACTIONS(149),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(151),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(153),
    [sym_local_date_time] = ACTIONS(299),
    [sym__newline] = ACTIONS(207),
    [aux_sym_integer_token4] = ACTIONS(143),
    [aux_sym_integer_token1] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
  },
  [85] = {
    [sym__line_ending_or_eof] = ACTIONS(330),
    [sym_comment] = ACTIONS(3),
  },
  [86] = {
    [sym_integer] = STATE(77),
    [sym_string] = STATE(77),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(77),
    [sym_array] = STATE(77),
    [aux_sym_array_repeat1] = STATE(53),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(77),
    [sym__inline_value] = STATE(77),
    [sym__multiline_literal_string] = STATE(97),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(332),
    [sym_local_time] = ACTIONS(297),
    [sym_offset_date_time] = ACTIONS(297),
    [anon_sym_LBRACE] = ACTIONS(141),
    [aux_sym_integer_token3] = ACTIONS(143),
    [sym_boolean] = ACTIONS(297),
    [sym_comment] = ACTIONS(3),
    [sym_local_date] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(147),
    [aux_sym_integer_token2] = ACTIONS(143),
    [aux_sym_float_token3] = ACTIONS(149),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(151),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(153),
    [sym_local_date_time] = ACTIONS(299),
    [sym__newline] = ACTIONS(207),
    [aux_sym_integer_token4] = ACTIONS(143),
    [aux_sym_integer_token1] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
  },
  [87] = {
    [sym__line_ending_or_eof] = ACTIONS(334),
    [sym_comment] = ACTIONS(3),
  },
  [88] = {
    [anon_sym_DOT] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(27),
  },
  [89] = {
    [sym__line_ending_or_eof] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
  },
  [90] = {
    [sym__line_ending_or_eof] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
  },
  [91] = {
    [sym__literal_string] = STATE(88),
    [sym__basic_string] = STATE(88),
    [sym__quoted_key] = STATE(88),
    [sym_key] = STATE(99),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym__bare_key] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(33),
  },
  [92] = {
    [sym__line_ending_or_eof] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
  },
  [93] = {
    [sym__line_ending_or_eof] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
  },
  [94] = {
    [anon_sym_COMMA] = ACTIONS(133),
    [sym__newline] = ACTIONS(133),
    [anon_sym_RBRACE] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
  },
  [95] = {
    [anon_sym_COMMA] = ACTIONS(161),
    [sym__newline] = ACTIONS(161),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_RBRACK] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
  },
  [96] = {
    [anon_sym_COMMA] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_token1] = ACTIONS(336),
    [sym__newline] = ACTIONS(133),
    [anon_sym_RBRACE] = ACTIONS(133),
    [aux_sym_float_token2] = ACTIONS(338),
  },
  [97] = {
    [anon_sym_COMMA] = ACTIONS(179),
    [sym__newline] = ACTIONS(179),
    [anon_sym_RBRACE] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(179),
    [sym_comment] = ACTIONS(3),
  },
  [98] = {
    [anon_sym_COMMA] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(181),
  },
  [99] = {
    [anon_sym_DOT] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(183),
  },
  [100] = {
    [anon_sym_COMMA] = ACTIONS(193),
    [sym__newline] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(193),
    [anon_sym_RBRACK] = ACTIONS(193),
    [sym_comment] = ACTIONS(3),
  },
  [101] = {
    [anon_sym_COMMA] = ACTIONS(199),
    [sym__newline] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(199),
    [anon_sym_RBRACK] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
  },
  [102] = {
    [anon_sym_COMMA] = ACTIONS(213),
    [sym__newline] = ACTIONS(213),
    [anon_sym_RBRACE] = ACTIONS(213),
    [anon_sym_RBRACK] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
  },
  [103] = {
    [anon_sym_COMMA] = ACTIONS(221),
    [sym__newline] = ACTIONS(221),
    [anon_sym_RBRACE] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
  },
  [104] = {
    [anon_sym_COMMA] = ACTIONS(229),
    [sym__newline] = ACTIONS(229),
    [anon_sym_RBRACE] = ACTIONS(229),
    [anon_sym_RBRACK] = ACTIONS(229),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_token2] = ACTIONS(340),
  },
  [105] = {
    [anon_sym_COMMA] = ACTIONS(229),
    [sym__newline] = ACTIONS(229),
    [anon_sym_RBRACE] = ACTIONS(229),
    [anon_sym_RBRACK] = ACTIONS(229),
    [sym_comment] = ACTIONS(3),
  },
  [106] = {
    [anon_sym_COMMA] = ACTIONS(233),
    [sym__newline] = ACTIONS(233),
    [anon_sym_RBRACE] = ACTIONS(233),
    [anon_sym_RBRACK] = ACTIONS(233),
    [sym_comment] = ACTIONS(3),
  },
  [107] = {
    [anon_sym_COMMA] = ACTIONS(237),
    [sym__newline] = ACTIONS(237),
    [anon_sym_RBRACE] = ACTIONS(237),
    [anon_sym_RBRACK] = ACTIONS(237),
    [sym_comment] = ACTIONS(3),
  },
  [108] = {
    [anon_sym_COMMA] = ACTIONS(258),
    [sym__newline] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(258),
    [anon_sym_RBRACK] = ACTIONS(258),
    [sym_comment] = ACTIONS(3),
  },
  [109] = {
    [anon_sym_COMMA] = ACTIONS(268),
    [sym__newline] = ACTIONS(268),
    [anon_sym_RBRACE] = ACTIONS(268),
    [anon_sym_RBRACK] = ACTIONS(268),
    [sym_comment] = ACTIONS(3),
  },
  [110] = {
    [anon_sym_COMMA] = ACTIONS(278),
    [sym__newline] = ACTIONS(278),
    [anon_sym_RBRACE] = ACTIONS(278),
    [anon_sym_RBRACK] = ACTIONS(278),
    [sym_comment] = ACTIONS(3),
  },
  [111] = {
    [anon_sym_COMMA] = ACTIONS(282),
    [sym__newline] = ACTIONS(282),
    [anon_sym_RBRACE] = ACTIONS(282),
    [anon_sym_RBRACK] = ACTIONS(282),
    [sym_comment] = ACTIONS(3),
  },
  [112] = {
    [anon_sym_COMMA] = ACTIONS(293),
    [sym__newline] = ACTIONS(293),
    [anon_sym_RBRACE] = ACTIONS(293),
    [anon_sym_RBRACK] = ACTIONS(293),
    [sym_comment] = ACTIONS(3),
  },
  [113] = {
    [anon_sym_COMMA] = ACTIONS(308),
    [sym__newline] = ACTIONS(308),
    [anon_sym_RBRACE] = ACTIONS(308),
    [anon_sym_RBRACK] = ACTIONS(308),
    [sym_comment] = ACTIONS(3),
  },
  [114] = {
    [anon_sym_COMMA] = ACTIONS(322),
    [sym__newline] = ACTIONS(322),
    [anon_sym_RBRACE] = ACTIONS(322),
    [anon_sym_RBRACK] = ACTIONS(322),
    [sym_comment] = ACTIONS(3),
  },
  [115] = {
    [anon_sym_COMMA] = ACTIONS(330),
    [sym__newline] = ACTIONS(330),
    [anon_sym_RBRACE] = ACTIONS(330),
    [anon_sym_RBRACK] = ACTIONS(330),
    [sym_comment] = ACTIONS(3),
  },
  [116] = {
    [anon_sym_COMMA] = ACTIONS(334),
    [sym__newline] = ACTIONS(334),
    [anon_sym_RBRACE] = ACTIONS(334),
    [anon_sym_RBRACK] = ACTIONS(334),
    [sym_comment] = ACTIONS(3),
  },
  [117] = {
    [anon_sym_COMMA] = ACTIONS(53),
    [sym__newline] = ACTIONS(53),
    [anon_sym_RBRACK] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(53),
  },
  [118] = {
    [anon_sym_COMMA] = ACTIONS(65),
    [sym__newline] = ACTIONS(65),
    [anon_sym_RBRACK] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(65),
  },
  [119] = {
    [anon_sym_COMMA] = ACTIONS(117),
    [sym__newline] = ACTIONS(117),
    [anon_sym_RBRACK] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(117),
  },
  [120] = {
    [anon_sym_COMMA] = ACTIONS(129),
    [sym__newline] = ACTIONS(129),
    [anon_sym_RBRACK] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(129),
  },
  [121] = {
    [aux_sym__basic_string_repeat1] = STATE(123),
    [anon_sym_DQUOTE2] = ACTIONS(342),
    [sym_escape_sequence] = ACTIONS(344),
    [sym_comment] = ACTIONS(23),
    [aux_sym__basic_string_token1] = ACTIONS(346),
  },
  [122] = {
    [anon_sym_SQUOTE2] = ACTIONS(348),
    [aux_sym__literal_string_token1] = ACTIONS(350),
    [sym_comment] = ACTIONS(23),
  },
  [123] = {
    [aux_sym__basic_string_repeat1] = STATE(23),
    [anon_sym_DQUOTE2] = ACTIONS(352),
    [sym_escape_sequence] = ACTIONS(57),
    [sym_comment] = ACTIONS(23),
    [aux_sym__basic_string_token1] = ACTIONS(59),
  },
  [124] = {
    [anon_sym_SQUOTE2] = ACTIONS(354),
    [sym_comment] = ACTIONS(3),
  },
  [125] = {
    [sym_integer] = STATE(98),
    [sym_string] = STATE(98),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(98),
    [sym_array] = STATE(98),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(98),
    [sym__inline_value] = STATE(98),
    [sym__multiline_literal_string] = STATE(97),
    [anon_sym_DQUOTE] = ACTIONS(356),
    [sym_local_time] = ACTIONS(358),
    [sym_offset_date_time] = ACTIONS(358),
    [anon_sym_LBRACE] = ACTIONS(141),
    [aux_sym_integer_token3] = ACTIONS(143),
    [sym_boolean] = ACTIONS(358),
    [sym_comment] = ACTIONS(3),
    [sym_local_date] = ACTIONS(360),
    [anon_sym_LBRACK] = ACTIONS(147),
    [aux_sym_integer_token2] = ACTIONS(143),
    [aux_sym_float_token3] = ACTIONS(149),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(151),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(153),
    [sym_local_date_time] = ACTIONS(360),
    [aux_sym_integer_token4] = ACTIONS(143),
    [aux_sym_integer_token1] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(362),
  },
  [126] = {
    [sym__inline_pair] = STATE(130),
    [sym__basic_string] = STATE(4),
    [sym_key] = STATE(154),
    [sym_dotted_key] = STATE(154),
    [sym__literal_string] = STATE(4),
    [sym__quoted_key] = STATE(4),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(364),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [127] = {
    [sym_string] = STATE(132),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(132),
    [sym_array] = STATE(132),
    [aux_sym_array_repeat1] = STATE(131),
    [sym__inline_value] = STATE(132),
    [sym__multiline_literal_string] = STATE(97),
    [sym_integer] = STATE(132),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(132),
    [sym_local_time] = ACTIONS(366),
    [sym_offset_date_time] = ACTIONS(366),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(147),
    [aux_sym_integer_token2] = ACTIONS(143),
    [aux_sym_float_token3] = ACTIONS(149),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(151),
    [sym_local_date_time] = ACTIONS(368),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(370),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(143),
    [sym_boolean] = ACTIONS(366),
    [sym_local_date] = ACTIONS(368),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(153),
    [sym__newline] = ACTIONS(372),
    [aux_sym_integer_token4] = ACTIONS(143),
    [aux_sym_integer_token1] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
  },
  [128] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(133),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(374),
    [aux_sym__literal_string_token1] = ACTIONS(376),
    [sym_comment] = ACTIONS(23),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(376),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(378),
  },
  [129] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(134),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(380),
    [sym_comment] = ACTIONS(23),
    [sym_escape_sequence] = ACTIONS(380),
    [aux_sym__basic_string_token1] = ACTIONS(382),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(384),
    [sym__escape_line_ending] = ACTIONS(380),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(382),
  },
  [130] = {
    [aux_sym_inline_table_repeat1] = STATE(135),
    [anon_sym_COMMA] = ACTIONS(195),
    [anon_sym_RBRACE] = ACTIONS(386),
    [sym_comment] = ACTIONS(3),
  },
  [131] = {
    [sym_string] = STATE(136),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(136),
    [sym_array] = STATE(136),
    [aux_sym_array_repeat1] = STATE(53),
    [sym__inline_value] = STATE(136),
    [sym__multiline_literal_string] = STATE(97),
    [sym_integer] = STATE(136),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(136),
    [sym_local_time] = ACTIONS(388),
    [sym_offset_date_time] = ACTIONS(388),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(147),
    [aux_sym_integer_token2] = ACTIONS(143),
    [aux_sym_float_token3] = ACTIONS(149),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(151),
    [sym_local_date_time] = ACTIONS(390),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(392),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(143),
    [sym_boolean] = ACTIONS(388),
    [sym_local_date] = ACTIONS(390),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(153),
    [sym__newline] = ACTIONS(207),
    [aux_sym_integer_token4] = ACTIONS(143),
    [aux_sym_integer_token1] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
  },
  [132] = {
    [aux_sym_array_repeat1] = STATE(138),
    [aux_sym_array_repeat2] = STATE(139),
    [anon_sym_COMMA] = ACTIONS(394),
    [sym__newline] = ACTIONS(396),
    [anon_sym_RBRACK] = ACTIONS(392),
    [sym_comment] = ACTIONS(3),
  },
  [133] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(59),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(217),
    [aux_sym__literal_string_token1] = ACTIONS(215),
    [sym_comment] = ACTIONS(23),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(215),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(398),
  },
  [134] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(61),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(223),
    [sym_comment] = ACTIONS(23),
    [sym_escape_sequence] = ACTIONS(223),
    [aux_sym__basic_string_token1] = ACTIONS(225),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(400),
    [sym__escape_line_ending] = ACTIONS(223),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(225),
  },
  [135] = {
    [aux_sym_inline_table_repeat1] = STATE(65),
    [anon_sym_COMMA] = ACTIONS(195),
    [anon_sym_RBRACE] = ACTIONS(402),
    [sym_comment] = ACTIONS(3),
  },
  [136] = {
    [aux_sym_array_repeat1] = STATE(141),
    [aux_sym_array_repeat2] = STATE(142),
    [anon_sym_COMMA] = ACTIONS(404),
    [sym__newline] = ACTIONS(406),
    [anon_sym_RBRACK] = ACTIONS(408),
    [sym_comment] = ACTIONS(3),
  },
  [137] = {
    [sym_string] = STATE(71),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(71),
    [sym_array] = STATE(71),
    [aux_sym_array_repeat1] = STATE(143),
    [sym__inline_value] = STATE(71),
    [sym__multiline_literal_string] = STATE(97),
    [sym_integer] = STATE(71),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(71),
    [sym_local_time] = ACTIONS(252),
    [sym_offset_date_time] = ACTIONS(252),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(147),
    [aux_sym_integer_token2] = ACTIONS(143),
    [aux_sym_float_token3] = ACTIONS(149),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(151),
    [sym_local_date_time] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(408),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(143),
    [sym_boolean] = ACTIONS(252),
    [sym_local_date] = ACTIONS(254),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(153),
    [sym__newline] = ACTIONS(410),
    [aux_sym_integer_token4] = ACTIONS(143),
    [aux_sym_integer_token1] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
  },
  [138] = {
    [aux_sym_array_repeat1] = STATE(53),
    [aux_sym_array_repeat2] = STATE(142),
    [anon_sym_COMMA] = ACTIONS(404),
    [sym__newline] = ACTIONS(207),
    [anon_sym_RBRACK] = ACTIONS(408),
    [sym_comment] = ACTIONS(3),
  },
  [139] = {
    [aux_sym_array_repeat2] = STATE(72),
    [anon_sym_COMMA] = ACTIONS(404),
    [anon_sym_RBRACK] = ACTIONS(408),
    [sym_comment] = ACTIONS(3),
  },
  [140] = {
    [sym_string] = STATE(71),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(71),
    [sym_array] = STATE(71),
    [aux_sym_array_repeat1] = STATE(144),
    [sym__inline_value] = STATE(71),
    [sym__multiline_literal_string] = STATE(97),
    [sym_integer] = STATE(71),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(71),
    [sym_local_time] = ACTIONS(252),
    [sym_offset_date_time] = ACTIONS(252),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(147),
    [aux_sym_integer_token2] = ACTIONS(143),
    [aux_sym_float_token3] = ACTIONS(149),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(151),
    [sym_local_date_time] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(412),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(143),
    [sym_boolean] = ACTIONS(252),
    [sym_local_date] = ACTIONS(254),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(153),
    [sym__newline] = ACTIONS(414),
    [aux_sym_integer_token4] = ACTIONS(143),
    [aux_sym_integer_token1] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
  },
  [141] = {
    [aux_sym_array_repeat1] = STATE(53),
    [aux_sym_array_repeat2] = STATE(146),
    [anon_sym_COMMA] = ACTIONS(416),
    [sym__newline] = ACTIONS(207),
    [anon_sym_RBRACK] = ACTIONS(412),
    [sym_comment] = ACTIONS(3),
  },
  [142] = {
    [aux_sym_array_repeat2] = STATE(72),
    [anon_sym_COMMA] = ACTIONS(416),
    [anon_sym_RBRACK] = ACTIONS(412),
    [sym_comment] = ACTIONS(3),
  },
  [143] = {
    [sym_string] = STATE(77),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(77),
    [sym_array] = STATE(77),
    [aux_sym_array_repeat1] = STATE(53),
    [sym__inline_value] = STATE(77),
    [sym__multiline_literal_string] = STATE(97),
    [sym_integer] = STATE(77),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(77),
    [sym_local_time] = ACTIONS(297),
    [sym_offset_date_time] = ACTIONS(297),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(147),
    [aux_sym_integer_token2] = ACTIONS(143),
    [aux_sym_float_token3] = ACTIONS(149),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(151),
    [sym_local_date_time] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(412),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(143),
    [sym_boolean] = ACTIONS(297),
    [sym_local_date] = ACTIONS(299),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(153),
    [sym__newline] = ACTIONS(207),
    [aux_sym_integer_token4] = ACTIONS(143),
    [aux_sym_integer_token1] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
  },
  [144] = {
    [sym_string] = STATE(77),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(77),
    [sym_array] = STATE(77),
    [aux_sym_array_repeat1] = STATE(53),
    [sym__inline_value] = STATE(77),
    [sym__multiline_literal_string] = STATE(97),
    [sym_integer] = STATE(77),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(77),
    [sym_local_time] = ACTIONS(297),
    [sym_offset_date_time] = ACTIONS(297),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(147),
    [aux_sym_integer_token2] = ACTIONS(143),
    [aux_sym_float_token3] = ACTIONS(149),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(151),
    [sym_local_date_time] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(418),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(143),
    [sym_boolean] = ACTIONS(297),
    [sym_local_date] = ACTIONS(299),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(153),
    [sym__newline] = ACTIONS(207),
    [aux_sym_integer_token4] = ACTIONS(143),
    [aux_sym_integer_token1] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
  },
  [145] = {
    [sym_string] = STATE(71),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(71),
    [sym_array] = STATE(71),
    [aux_sym_array_repeat1] = STATE(147),
    [sym__inline_value] = STATE(71),
    [sym__multiline_literal_string] = STATE(97),
    [sym_integer] = STATE(71),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(71),
    [sym_local_time] = ACTIONS(252),
    [sym_offset_date_time] = ACTIONS(252),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(147),
    [aux_sym_integer_token2] = ACTIONS(143),
    [aux_sym_float_token3] = ACTIONS(149),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(151),
    [sym_local_date_time] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(418),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(143),
    [sym_boolean] = ACTIONS(252),
    [sym_local_date] = ACTIONS(254),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(153),
    [sym__newline] = ACTIONS(420),
    [aux_sym_integer_token4] = ACTIONS(143),
    [aux_sym_integer_token1] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
  },
  [146] = {
    [aux_sym_array_repeat2] = STATE(72),
    [anon_sym_COMMA] = ACTIONS(422),
    [anon_sym_RBRACK] = ACTIONS(418),
    [sym_comment] = ACTIONS(3),
  },
  [147] = {
    [sym_string] = STATE(77),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(77),
    [sym_array] = STATE(77),
    [aux_sym_array_repeat1] = STATE(53),
    [sym__inline_value] = STATE(77),
    [sym__multiline_literal_string] = STATE(97),
    [sym_integer] = STATE(77),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(77),
    [sym_local_time] = ACTIONS(297),
    [sym_offset_date_time] = ACTIONS(297),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(147),
    [aux_sym_integer_token2] = ACTIONS(143),
    [aux_sym_float_token3] = ACTIONS(149),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(151),
    [sym_local_date_time] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(424),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(143),
    [sym_boolean] = ACTIONS(297),
    [sym_local_date] = ACTIONS(299),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(153),
    [sym__newline] = ACTIONS(207),
    [aux_sym_integer_token4] = ACTIONS(143),
    [aux_sym_integer_token1] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
  },
  [148] = {
    [sym_string] = STATE(71),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(71),
    [sym_array] = STATE(71),
    [aux_sym_array_repeat1] = STATE(149),
    [sym__inline_value] = STATE(71),
    [sym__multiline_literal_string] = STATE(97),
    [sym_integer] = STATE(71),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(71),
    [sym_local_time] = ACTIONS(252),
    [sym_offset_date_time] = ACTIONS(252),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(147),
    [aux_sym_integer_token2] = ACTIONS(143),
    [aux_sym_float_token3] = ACTIONS(149),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(151),
    [sym_local_date_time] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(424),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(143),
    [sym_boolean] = ACTIONS(252),
    [sym_local_date] = ACTIONS(254),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(153),
    [sym__newline] = ACTIONS(426),
    [aux_sym_integer_token4] = ACTIONS(143),
    [aux_sym_integer_token1] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
  },
  [149] = {
    [sym_string] = STATE(77),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(77),
    [sym_array] = STATE(77),
    [aux_sym_array_repeat1] = STATE(53),
    [sym__inline_value] = STATE(77),
    [sym__multiline_literal_string] = STATE(97),
    [sym_integer] = STATE(77),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(77),
    [sym_local_time] = ACTIONS(297),
    [sym_offset_date_time] = ACTIONS(297),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(147),
    [aux_sym_integer_token2] = ACTIONS(143),
    [aux_sym_float_token3] = ACTIONS(149),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(151),
    [sym_local_date_time] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(428),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(143),
    [sym_boolean] = ACTIONS(297),
    [sym_local_date] = ACTIONS(299),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(153),
    [sym__newline] = ACTIONS(207),
    [aux_sym_integer_token4] = ACTIONS(143),
    [aux_sym_integer_token1] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
  },
  [150] = {
    [aux_sym__basic_string_repeat1] = STATE(152),
    [anon_sym_DQUOTE2] = ACTIONS(430),
    [sym_escape_sequence] = ACTIONS(432),
    [sym_comment] = ACTIONS(23),
    [aux_sym__basic_string_token1] = ACTIONS(434),
  },
  [151] = {
    [anon_sym_SQUOTE2] = ACTIONS(436),
    [sym_comment] = ACTIONS(23),
    [aux_sym__literal_string_token1] = ACTIONS(438),
  },
  [152] = {
    [aux_sym__basic_string_repeat1] = STATE(23),
    [anon_sym_DQUOTE2] = ACTIONS(440),
    [sym_escape_sequence] = ACTIONS(57),
    [sym_comment] = ACTIONS(23),
    [aux_sym__basic_string_token1] = ACTIONS(59),
  },
  [153] = {
    [anon_sym_SQUOTE2] = ACTIONS(442),
    [sym_comment] = ACTIONS(3),
  },
  [154] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(45),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, REDUCE(sym_file, 0),
  [11] = {.count = 1, .reusable = true}, SHIFT(10),
  [13] = {.count = 1, .reusable = true}, SHIFT(4),
  [15] = {.count = 1, .reusable = false}, SHIFT(5),
  [17] = {.count = 1, .reusable = true}, SHIFT(6),
  [19] = {.count = 1, .reusable = true}, SHIFT(12),
  [21] = {.count = 1, .reusable = true}, SHIFT(13),
  [23] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [25] = {.count = 1, .reusable = false}, SHIFT(13),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_key, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(121),
  [31] = {.count = 1, .reusable = true}, SHIFT(88),
  [33] = {.count = 1, .reusable = true}, SHIFT(122),
  [35] = {.count = 1, .reusable = true}, SHIFT(15),
  [37] = {.count = 1, .reusable = false}, SHIFT(16),
  [39] = {.count = 1, .reusable = true}, SHIFT(17),
  [41] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [43] = {.count = 1, .reusable = true}, SHIFT(18),
  [45] = {.count = 1, .reusable = true}, SHIFT(19),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_file, 1),
  [49] = {.count = 1, .reusable = true}, SHIFT(20),
  [51] = {.count = 1, .reusable = true}, SHIFT(21),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym__basic_string, 2),
  [55] = {.count = 1, .reusable = true}, SHIFT(22),
  [57] = {.count = 1, .reusable = true}, SHIFT(23),
  [59] = {.count = 1, .reusable = false}, SHIFT(23),
  [61] = {.count = 1, .reusable = true}, SHIFT(91),
  [63] = {.count = 1, .reusable = true}, SHIFT(24),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym__literal_string, 2),
  [67] = {.count = 1, .reusable = true}, SHIFT(25),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_pair, 2),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_pair, 2),
  [73] = {.count = 1, .reusable = false}, SHIFT(150),
  [75] = {.count = 1, .reusable = true}, SHIFT(34),
  [77] = {.count = 1, .reusable = true}, SHIFT(26),
  [79] = {.count = 1, .reusable = true}, SHIFT(27),
  [81] = {.count = 1, .reusable = false}, SHIFT(34),
  [83] = {.count = 1, .reusable = true}, SHIFT(28),
  [85] = {.count = 1, .reusable = true}, SHIFT(29),
  [87] = {.count = 1, .reusable = true}, SHIFT(30),
  [89] = {.count = 1, .reusable = true}, SHIFT(31),
  [91] = {.count = 1, .reusable = false}, SHIFT(32),
  [93] = {.count = 1, .reusable = false}, SHIFT(151),
  [95] = {.count = 2, .reusable = true}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(2),
  [98] = {.count = 2, .reusable = true}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(3),
  [101] = {.count = 1, .reusable = true}, REDUCE(aux_sym_file_repeat1, 2),
  [103] = {.count = 2, .reusable = true}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(20),
  [106] = {.count = 2, .reusable = true}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(4),
  [109] = {.count = 2, .reusable = false}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(5),
  [112] = {.count = 2, .reusable = true}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(6),
  [115] = {.count = 1, .reusable = true}, SHIFT(36),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym__basic_string, 3),
  [119] = {.count = 1, .reusable = true}, REDUCE(aux_sym__basic_string_repeat1, 2),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym__basic_string_repeat1, 2), SHIFT_REPEAT(23),
  [124] = {.count = 2, .reusable = false}, REDUCE(aux_sym__basic_string_repeat1, 2), SHIFT_REPEAT(23),
  [127] = {.count = 1, .reusable = true}, SHIFT(37),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym__literal_string, 3),
  [131] = {.count = 1, .reusable = true}, SHIFT(38),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_integer, 1),
  [135] = {.count = 1, .reusable = false}, SHIFT(121),
  [137] = {.count = 1, .reusable = true}, SHIFT(40),
  [139] = {.count = 1, .reusable = true}, SHIFT(42),
  [141] = {.count = 1, .reusable = true}, SHIFT(126),
  [143] = {.count = 1, .reusable = true}, SHIFT(94),
  [145] = {.count = 1, .reusable = false}, SHIFT(42),
  [147] = {.count = 1, .reusable = true}, SHIFT(127),
  [149] = {.count = 1, .reusable = true}, SHIFT(95),
  [151] = {.count = 1, .reusable = true}, SHIFT(128),
  [153] = {.count = 1, .reusable = true}, SHIFT(129),
  [155] = {.count = 1, .reusable = true}, SHIFT(41),
  [157] = {.count = 1, .reusable = false}, SHIFT(96),
  [159] = {.count = 1, .reusable = false}, SHIFT(122),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_float, 1),
  [163] = {.count = 1, .reusable = false}, SHIFT(44),
  [165] = {.count = 1, .reusable = true}, SHIFT(44),
  [167] = {.count = 1, .reusable = true}, SHIFT(43),
  [169] = {.count = 1, .reusable = true}, SHIFT(46),
  [171] = {.count = 1, .reusable = false}, SHIFT(46),
  [173] = {.count = 1, .reusable = true}, SHIFT(45),
  [175] = {.count = 1, .reusable = true}, SHIFT(47),
  [177] = {.count = 1, .reusable = true}, SHIFT(48),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym__inline_pair, 3),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_dotted_key, 3),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_table_array, 4),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_table_array, 4),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_table, 4),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym_table, 4),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_inline_table, 2),
  [195] = {.count = 1, .reusable = true}, SHIFT(49),
  [197] = {.count = 1, .reusable = true}, SHIFT(50),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [201] = {.count = 1, .reusable = true}, SHIFT(52),
  [203] = {.count = 1, .reusable = true}, SHIFT(54),
  [205] = {.count = 1, .reusable = false}, SHIFT(54),
  [207] = {.count = 1, .reusable = true}, SHIFT(53),
  [209] = {.count = 1, .reusable = true}, SHIFT(55),
  [211] = {.count = 1, .reusable = true}, SHIFT(56),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym__multiline_literal_string, 2),
  [215] = {.count = 1, .reusable = false}, SHIFT(59),
  [217] = {.count = 1, .reusable = true}, SHIFT(59),
  [219] = {.count = 1, .reusable = true}, SHIFT(58),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym__multiline_basic_string, 2),
  [223] = {.count = 1, .reusable = true}, SHIFT(61),
  [225] = {.count = 1, .reusable = false}, SHIFT(61),
  [227] = {.count = 1, .reusable = true}, SHIFT(60),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_float, 2),
  [231] = {.count = 1, .reusable = true}, SHIFT(62),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_inline_table, 3, .production_id = 1),
  [235] = {.count = 1, .reusable = true}, SHIFT(64),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [239] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2),
  [241] = {.count = 1, .reusable = false}, REDUCE(aux_sym_array_repeat1, 2),
  [243] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(53),
  [246] = {.count = 1, .reusable = true}, SHIFT(66),
  [248] = {.count = 1, .reusable = true}, SHIFT(68),
  [250] = {.count = 1, .reusable = true}, SHIFT(67),
  [252] = {.count = 1, .reusable = true}, SHIFT(71),
  [254] = {.count = 1, .reusable = false}, SHIFT(71),
  [256] = {.count = 1, .reusable = true}, SHIFT(70),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym__multiline_literal_string, 3),
  [260] = {.count = 2, .reusable = false}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2), SHIFT_REPEAT(59),
  [263] = {.count = 2, .reusable = true}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2), SHIFT_REPEAT(59),
  [266] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym__multiline_basic_string, 3),
  [270] = {.count = 2, .reusable = true}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2), SHIFT_REPEAT(61),
  [273] = {.count = 2, .reusable = false}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2), SHIFT_REPEAT(61),
  [276] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym_float, 3),
  [280] = {.count = 1, .reusable = true}, REDUCE(aux_sym_inline_table_repeat1, 2, .production_id = 1),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym_inline_table, 4, .production_id = 1),
  [284] = {.count = 2, .reusable = true}, REDUCE(aux_sym_inline_table_repeat1, 2), SHIFT_REPEAT(49),
  [287] = {.count = 1, .reusable = true}, REDUCE(aux_sym_inline_table_repeat1, 2),
  [289] = {.count = 1, .reusable = true}, SHIFT(73),
  [291] = {.count = 1, .reusable = true}, SHIFT(74),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_array, 4),
  [295] = {.count = 1, .reusable = true}, SHIFT(75),
  [297] = {.count = 1, .reusable = true}, SHIFT(77),
  [299] = {.count = 1, .reusable = false}, SHIFT(77),
  [301] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat2, 2),
  [303] = {.count = 1, .reusable = true}, SHIFT(78),
  [305] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_repeat2, 2), SHIFT_REPEAT(79),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym_array, 5),
  [310] = {.count = 1, .reusable = true}, SHIFT(80),
  [312] = {.count = 1, .reusable = true}, SHIFT(81),
  [314] = {.count = 1, .reusable = true}, SHIFT(82),
  [316] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat2, 3),
  [318] = {.count = 1, .reusable = true}, SHIFT(83),
  [320] = {.count = 1, .reusable = true}, SHIFT(84),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym_array, 6),
  [324] = {.count = 1, .reusable = true}, SHIFT(85),
  [326] = {.count = 1, .reusable = true}, SHIFT(86),
  [328] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat2, 4),
  [330] = {.count = 1, .reusable = true}, REDUCE(sym_array, 7),
  [332] = {.count = 1, .reusable = true}, SHIFT(87),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym_array, 8),
  [336] = {.count = 1, .reusable = true}, SHIFT(104),
  [338] = {.count = 1, .reusable = true}, SHIFT(105),
  [340] = {.count = 1, .reusable = true}, SHIFT(110),
  [342] = {.count = 1, .reusable = true}, SHIFT(117),
  [344] = {.count = 1, .reusable = true}, SHIFT(123),
  [346] = {.count = 1, .reusable = false}, SHIFT(123),
  [348] = {.count = 1, .reusable = true}, SHIFT(118),
  [350] = {.count = 1, .reusable = false}, SHIFT(124),
  [352] = {.count = 1, .reusable = true}, SHIFT(119),
  [354] = {.count = 1, .reusable = true}, SHIFT(120),
  [356] = {.count = 1, .reusable = false}, SHIFT(3),
  [358] = {.count = 1, .reusable = true}, SHIFT(98),
  [360] = {.count = 1, .reusable = false}, SHIFT(98),
  [362] = {.count = 1, .reusable = false}, SHIFT(6),
  [364] = {.count = 1, .reusable = true}, SHIFT(100),
  [366] = {.count = 1, .reusable = true}, SHIFT(132),
  [368] = {.count = 1, .reusable = false}, SHIFT(132),
  [370] = {.count = 1, .reusable = true}, SHIFT(101),
  [372] = {.count = 1, .reusable = true}, SHIFT(131),
  [374] = {.count = 1, .reusable = true}, SHIFT(133),
  [376] = {.count = 1, .reusable = false}, SHIFT(133),
  [378] = {.count = 1, .reusable = true}, SHIFT(102),
  [380] = {.count = 1, .reusable = true}, SHIFT(134),
  [382] = {.count = 1, .reusable = false}, SHIFT(134),
  [384] = {.count = 1, .reusable = true}, SHIFT(103),
  [386] = {.count = 1, .reusable = true}, SHIFT(106),
  [388] = {.count = 1, .reusable = true}, SHIFT(136),
  [390] = {.count = 1, .reusable = false}, SHIFT(136),
  [392] = {.count = 1, .reusable = true}, SHIFT(107),
  [394] = {.count = 1, .reusable = true}, SHIFT(137),
  [396] = {.count = 1, .reusable = true}, SHIFT(138),
  [398] = {.count = 1, .reusable = true}, SHIFT(108),
  [400] = {.count = 1, .reusable = true}, SHIFT(109),
  [402] = {.count = 1, .reusable = true}, SHIFT(111),
  [404] = {.count = 1, .reusable = true}, SHIFT(140),
  [406] = {.count = 1, .reusable = true}, SHIFT(141),
  [408] = {.count = 1, .reusable = true}, SHIFT(112),
  [410] = {.count = 1, .reusable = true}, SHIFT(143),
  [412] = {.count = 1, .reusable = true}, SHIFT(113),
  [414] = {.count = 1, .reusable = true}, SHIFT(144),
  [416] = {.count = 1, .reusable = true}, SHIFT(145),
  [418] = {.count = 1, .reusable = true}, SHIFT(114),
  [420] = {.count = 1, .reusable = true}, SHIFT(147),
  [422] = {.count = 1, .reusable = true}, SHIFT(148),
  [424] = {.count = 1, .reusable = true}, SHIFT(115),
  [426] = {.count = 1, .reusable = true}, SHIFT(149),
  [428] = {.count = 1, .reusable = true}, SHIFT(116),
  [430] = {.count = 1, .reusable = true}, SHIFT(89),
  [432] = {.count = 1, .reusable = true}, SHIFT(152),
  [434] = {.count = 1, .reusable = false}, SHIFT(152),
  [436] = {.count = 1, .reusable = true}, SHIFT(90),
  [438] = {.count = 1, .reusable = false}, SHIFT(153),
  [440] = {.count = 1, .reusable = true}, SHIFT(92),
  [442] = {.count = 1, .reusable = true}, SHIFT(93),
  [444] = {.count = 1, .reusable = true}, SHIFT(125),
};

void *tree_sitter_toml_external_scanner_create(void);
void tree_sitter_toml_external_scanner_destroy(void *);
bool tree_sitter_toml_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_toml_external_scanner_serialize(void *, char *);
void tree_sitter_toml_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_toml(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_toml_external_scanner_create,
      tree_sitter_toml_external_scanner_destroy,
      tree_sitter_toml_external_scanner_scan,
      tree_sitter_toml_external_scanner_serialize,
      tree_sitter_toml_external_scanner_deserialize,
    },
  };
  return &language;
}
