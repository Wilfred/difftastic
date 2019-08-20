#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 163
#define SYMBOL_COUNT 70
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
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
  aux_sym_offset_date_time_token1 = 33,
  aux_sym_offset_date_time_token2 = 34,
  aux_sym_offset_date_time_token3 = 35,
  aux_sym_offset_date_time_token4 = 36,
  sym_local_time = 37,
  anon_sym_COMMA = 38,
  anon_sym_LBRACE = 39,
  anon_sym_RBRACE = 40,
  sym__line_ending_or_eof = 41,
  sym_root = 42,
  sym_table = 43,
  sym_table_array = 44,
  sym_pair = 45,
  sym__inline_pair = 46,
  sym_key = 47,
  sym_dotted_key = 48,
  sym__quoted_key = 49,
  sym__inline_value = 50,
  sym_string = 51,
  sym__basic_string = 52,
  sym__multiline_basic_string = 53,
  sym__literal_string = 54,
  sym__multiline_literal_string = 55,
  sym_integer = 56,
  sym_float = 57,
  sym_offset_date_time = 58,
  sym_local_date_time = 59,
  sym_local_date = 60,
  sym_array = 61,
  sym_inline_table = 62,
  aux_sym_root_repeat1 = 63,
  aux_sym__basic_string_repeat1 = 64,
  aux_sym__multiline_basic_string_repeat1 = 65,
  aux_sym__multiline_literal_string_repeat1 = 66,
  aux_sym_array_repeat1 = 67,
  aux_sym_array_repeat2 = 68,
  aux_sym_inline_table_repeat1 = 69,
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
  [aux_sym_offset_date_time_token1] = "offset_date_time_token1",
  [aux_sym_offset_date_time_token2] = "offset_date_time_token2",
  [aux_sym_offset_date_time_token3] = "offset_date_time_token3",
  [aux_sym_offset_date_time_token4] = "offset_date_time_token4",
  [sym_local_time] = "local_time",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym__line_ending_or_eof] = "_line_ending_or_eof",
  [sym_root] = "root",
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
  [sym_offset_date_time] = "offset_date_time",
  [sym_local_date_time] = "local_date_time",
  [sym_local_date] = "local_date",
  [sym_array] = "array",
  [sym_inline_table] = "inline_table",
  [aux_sym_root_repeat1] = "root_repeat1",
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
  [aux_sym_offset_date_time_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_offset_date_time_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_offset_date_time_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_offset_date_time_token4] = {
    .visible = false,
    .named = false,
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
  [sym_root] = {
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
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_table] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_root_repeat1] = {
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
      if (lookahead == 0) ADVANCE(81);
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '\'') ADVANCE(160);
      if (lookahead == '+') ADVANCE(21);
      if (lookahead == ',') ADVANCE(194);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '0') ADVANCE(101);
      if (lookahead == '1') ADVANCE(98);
      if (lookahead == '2') ADVANCE(96);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == '{') ADVANCE(195);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(191);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(139);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(81);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '"') ADVANCE(141);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '\'') ADVANCE(155);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == ',') ADVANCE(194);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '0') ADVANCE(102);
      if (lookahead == '1') ADVANCE(100);
      if (lookahead == '2') ADVANCE(97);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == '{') ADVANCE(195);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(81);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '\'') ADVANCE(154);
      if (lookahead == ',') ADVANCE(194);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 3:
      if (lookahead == '\t') SKIP(15)
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(149);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '') ADVANCE(144);
      END_STATE();
    case 4:
      if (lookahead == '\t') SKIP(15)
      if (lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '') ADVANCE(144);
      END_STATE();
    case 5:
      if (lookahead == '\t') SKIP(13)
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == ' ') ADVANCE(187);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == ',') ADVANCE(194);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(187);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(150);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '#') ADVANCE(157);
      if (lookahead == '\'') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '') ADVANCE(158);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(153);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(153);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == 'U') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(76);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(152);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(83);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '"') ADVANCE(141);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '\'') ADVANCE(155);
      if (lookahead == ',') ADVANCE(194);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '0') ADVANCE(170);
      if (lookahead == '1') ADVANCE(168);
      if (lookahead == '2') ADVANCE(167);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == '{') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(22);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '\'') ADVANCE(159);
      if (lookahead == ',') ADVANCE(194);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '2') ADVANCE(52);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(29);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(190);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == ',') ADVANCE(194);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(147);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(157);
      if (lookahead == '\'') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '') ADVANCE(158);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(161);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == '0') ADVANCE(175);
      if (lookahead == '1') ADVANCE(173);
      if (lookahead == '2') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(39);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 22:
      if (lookahead == '0') ADVANCE(165);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(39);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 23:
      if (lookahead == '0') ADVANCE(180);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 24:
      if (lookahead == '0') ADVANCE(180);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 25:
      if (lookahead == '0') ADVANCE(188);
      END_STATE();
    case 26:
      if (lookahead == '0') ADVANCE(192);
      END_STATE();
    case 27:
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == '1') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == '0') ADVANCE(58);
      if (lookahead == '3') ADVANCE(49);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(67);
      END_STATE();
    case 29:
      if (lookahead == '2') ADVANCE(51);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(59);
      END_STATE();
    case 30:
      if (lookahead == '6') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(62);
      END_STATE();
    case 31:
      if (lookahead == '6') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(63);
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
      if (lookahead == ':') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == 'U') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(76);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(152);
      END_STATE();
    case 37:
      if (lookahead == ']') ADVANCE(88);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 41:
      if (lookahead == 'f') ADVANCE(184);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 48:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(178);
      END_STATE();
    case 49:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(186);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(20);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(34);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(32);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(69);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(61);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(70);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(177);
      END_STATE();
    case 57:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 58:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(176);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(10);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '0') ADVANCE(183);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == ':') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(92);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(94);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == 'b') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead == 'x') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == 'b') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead == 'x') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'n') ADVANCE(119);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0') ADVANCE(136);
      if (lookahead == '1') ADVANCE(116);
      if (lookahead == '2') ADVANCE(115);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'n') ADVANCE(119);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0') ADVANCE(183);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0') ADVANCE(133);
      if (lookahead == '1') ADVANCE(130);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0') ADVANCE(132);
      if (lookahead == '3') ADVANCE(128);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(134);
      if (lookahead == '-' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(129);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(112);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(110);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'l') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'r') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'u') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(139);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(112);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(104);
      if (lookahead == '-' ||
          ('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__bare_key);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (lookahead == '-' ||
          lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__bare_key);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(14);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__basic_string_token1);
      if (lookahead == ' ') ADVANCE(142);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '') ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__basic_string_token1);
      if ((0 <= lookahead && lookahead <= '\t') ||
          ('' <= lookahead && lookahead <= '') ||
          lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == '') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__basic_string_token1);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      if (lookahead == '"') ADVANCE(14);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__multiline_basic_string_token1);
      if (lookahead == '"') ADVANCE(151);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__multiline_basic_string_token1);
      if (lookahead == '"') ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__multiline_basic_string_token2);
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '\r') ADVANCE(6);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE2);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__escape_line_ending);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(17);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '#') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '') ADVANCE(158);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if ((0 <= lookahead && lookahead <= '') ||
          ('' <= lookahead && lookahead <= '') ||
          lookahead == '\'' ||
          lookahead == '') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          (lookahead < '\n' || '' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      if (lookahead == '\'') ADVANCE(17);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__multiline_literal_string_token1);
      if (lookahead == '\'') ADVANCE(164);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__multiline_literal_string_token1);
      if (lookahead == '\'') ADVANCE(162);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE2);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(166);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 'x') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(171);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      if (lookahead == '_') ADVANCE(48);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '_') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_float_token2);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '_') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_float_token3);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_offset_date_time_token1);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_offset_date_time_token2);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_offset_date_time_token3);
      if (lookahead == '.') ADVANCE(64);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_offset_date_time_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_offset_date_time_token4);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_offset_date_time_token4);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_local_time);
      if (lookahead == '.') ADVANCE(65);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_local_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 196:
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
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 0, .external_lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 0, .external_lex_state = 1},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 0, .external_lex_state = 1},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 1},
  [27] = {.lex_state = 0, .external_lex_state = 1},
  [28] = {.lex_state = 5, .external_lex_state = 1},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 12, .external_lex_state = 1},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 0, .external_lex_state = 1},
  [35] = {.lex_state = 0, .external_lex_state = 1},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 0, .external_lex_state = 1},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 0, .external_lex_state = 1},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 0, .external_lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 12, .external_lex_state = 1},
  [47] = {.lex_state = 0, .external_lex_state = 1},
  [48] = {.lex_state = 0, .external_lex_state = 1},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 12, .external_lex_state = 1},
  [52] = {.lex_state = 0, .external_lex_state = 1},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 0, .external_lex_state = 1},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 0, .external_lex_state = 1},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0, .external_lex_state = 1},
  [60] = {.lex_state = 0, .external_lex_state = 1},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 12},
  [66] = {.lex_state = 0, .external_lex_state = 1},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0, .external_lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 0, .external_lex_state = 1},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0, .external_lex_state = 1},
  [78] = {.lex_state = 11},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 12},
  [82] = {.lex_state = 12},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 0, .external_lex_state = 1},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 12},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 0, .external_lex_state = 1},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 0, .external_lex_state = 1},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0, .external_lex_state = 1},
  [94] = {.lex_state = 0, .external_lex_state = 1},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 0, .external_lex_state = 1},
  [97] = {.lex_state = 0, .external_lex_state = 1},
  [98] = {.lex_state = 12},
  [99] = {.lex_state = 12},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 12},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 12},
  [106] = {.lex_state = 12},
  [107] = {.lex_state = 12},
  [108] = {.lex_state = 12},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 12},
  [112] = {.lex_state = 12},
  [113] = {.lex_state = 12},
  [114] = {.lex_state = 12},
  [115] = {.lex_state = 12},
  [116] = {.lex_state = 12},
  [117] = {.lex_state = 12},
  [118] = {.lex_state = 12},
  [119] = {.lex_state = 12},
  [120] = {.lex_state = 12},
  [121] = {.lex_state = 12},
  [122] = {.lex_state = 12},
  [123] = {.lex_state = 12},
  [124] = {.lex_state = 11},
  [125] = {.lex_state = 11},
  [126] = {.lex_state = 11},
  [127] = {.lex_state = 11},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 16},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 11},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 11},
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 11},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 12},
  [145] = {.lex_state = 11},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 12},
  [148] = {.lex_state = 11},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 11},
  [152] = {.lex_state = 11},
  [153] = {.lex_state = 11},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 11},
  [156] = {.lex_state = 11},
  [157] = {.lex_state = 11},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 16},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 12},
  [162] = {.lex_state = 0},
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
    [aux_sym_offset_date_time_token4] = ACTIONS(1),
    [aux_sym_offset_date_time_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [sym__bare_key] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [aux_sym_integer_token2] = ACTIONS(1),
    [aux_sym_float_token3] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym__escape_line_ending] = ACTIONS(1),
    [aux_sym_offset_date_time_token3] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_local_time] = ACTIONS(1),
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
    [sym_pair] = STATE(9),
    [sym__inline_pair] = STATE(7),
    [sym__basic_string] = STATE(4),
    [sym_root] = STATE(8),
    [sym_key] = STATE(10),
    [sym_dotted_key] = STATE(10),
    [aux_sym_root_repeat1] = STATE(9),
    [sym__literal_string] = STATE(4),
    [sym_table] = STATE(9),
    [sym_table_array] = STATE(9),
    [sym__quoted_key] = STATE(4),
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
    [sym__literal_string] = STATE(92),
    [sym__basic_string] = STATE(92),
    [sym__quoted_key] = STATE(92),
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
    [sym_pair] = STATE(18),
    [sym__inline_pair] = STATE(7),
    [sym__basic_string] = STATE(4),
    [aux_sym_root_repeat1] = STATE(18),
    [sym_dotted_key] = STATE(10),
    [sym_key] = STATE(10),
    [sym__literal_string] = STATE(4),
    [sym_table] = STATE(18),
    [sym_table_array] = STATE(18),
    [sym__quoted_key] = STATE(4),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(45),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [10] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_DOT] = ACTIONS(49),
  },
  [11] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(49),
  },
  [12] = {
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(53),
    [anon_sym_COMMA] = ACTIONS(53),
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
    [anon_sym_RBRACE] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(65),
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
    [sym_pair] = STATE(18),
    [sym__inline_pair] = STATE(7),
    [sym__basic_string] = STATE(4),
    [aux_sym_root_repeat1] = STATE(18),
    [sym_dotted_key] = STATE(10),
    [sym_key] = STATE(10),
    [sym__literal_string] = STATE(4),
    [sym_table] = STATE(18),
    [sym_table_array] = STATE(18),
    [sym__quoted_key] = STATE(4),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(81),
    [sym__bare_key] = ACTIONS(84),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(90),
  },
  [19] = {
    [sym_integer] = STATE(35),
    [sym_array] = STATE(35),
    [sym_inline_table] = STATE(35),
    [sym_string] = STATE(35),
    [sym__basic_string] = STATE(34),
    [sym_float] = STATE(35),
    [sym_offset_date_time] = STATE(35),
    [sym__multiline_basic_string] = STATE(34),
    [sym__literal_string] = STATE(34),
    [sym_local_date_time] = STATE(35),
    [sym_local_date] = STATE(35),
    [sym__inline_value] = STATE(35),
    [sym__multiline_literal_string] = STATE(34),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [aux_sym_offset_date_time_token1] = ACTIONS(95),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(97),
    [sym_boolean] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [sym_local_time] = ACTIONS(99),
    [aux_sym_integer_token2] = ACTIONS(97),
    [aux_sym_float_token3] = ACTIONS(103),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(105),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(109),
    [aux_sym_integer_token4] = ACTIONS(97),
    [aux_sym_integer_token1] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
  },
  [20] = {
    [sym__literal_string] = STATE(4),
    [sym__basic_string] = STATE(4),
    [sym__quoted_key] = STATE(4),
    [sym_key] = STATE(36),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym__bare_key] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [21] = {
    [sym__line_ending_or_eof] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_EQ] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(117),
    [anon_sym_COMMA] = ACTIONS(117),
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
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_EQ] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(129),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_DOT] = ACTIONS(129),
  },
  [26] = {
    [sym__line_ending_or_eof] = ACTIONS(131),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym__line_ending_or_eof] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym__line_ending_or_eof] = ACTIONS(135),
    [aux_sym_offset_date_time_token2] = ACTIONS(137),
    [sym_comment] = ACTIONS(23),
  },
  [29] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(41),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(139),
    [aux_sym__literal_string_token1] = ACTIONS(139),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(141),
    [sym_comment] = ACTIONS(23),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(143),
  },
  [30] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(43),
    [sym_comment] = ACTIONS(23),
    [sym__escape_line_ending] = ACTIONS(145),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(145),
    [sym_escape_sequence] = ACTIONS(145),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(147),
    [aux_sym__basic_string_token1] = ACTIONS(147),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(149),
  },
  [31] = {
    [sym_dotted_key] = STATE(162),
    [sym__literal_string] = STATE(4),
    [sym__inline_pair] = STATE(45),
    [sym__basic_string] = STATE(4),
    [sym__quoted_key] = STATE(4),
    [sym_key] = STATE(162),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym__bare_key] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(151),
  },
  [32] = {
    [sym__line_ending_or_eof] = ACTIONS(131),
    [aux_sym_float_token1] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_token2] = ACTIONS(155),
  },
  [33] = {
    [sym_integer] = STATE(50),
    [sym_array] = STATE(50),
    [sym_inline_table] = STATE(50),
    [sym_string] = STATE(50),
    [sym__basic_string] = STATE(102),
    [sym_float] = STATE(50),
    [sym_offset_date_time] = STATE(50),
    [aux_sym_array_repeat1] = STATE(49),
    [sym__multiline_basic_string] = STATE(102),
    [sym__literal_string] = STATE(102),
    [sym_local_date_time] = STATE(50),
    [sym_local_date] = STATE(50),
    [sym__inline_value] = STATE(50),
    [sym__multiline_literal_string] = STATE(102),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(159),
    [aux_sym_offset_date_time_token1] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(163),
    [sym_boolean] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(167),
    [sym_local_time] = ACTIONS(165),
    [aux_sym_integer_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(169),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(173),
    [sym__newline] = ACTIONS(175),
    [anon_sym_LBRACE] = ACTIONS(177),
    [aux_sym_integer_token4] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(181),
  },
  [34] = {
    [sym__line_ending_or_eof] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [sym__line_ending_or_eof] = ACTIONS(185),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [anon_sym_EQ] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(187),
    [anon_sym_DOT] = ACTIONS(187),
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
    [anon_sym_LBRACK_LBRACK] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [ts_builtin_sym_end] = ACTIONS(193),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(193),
    [sym__bare_key] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(193),
  },
  [39] = {
    [sym_comment] = ACTIONS(3),
    [aux_sym_offset_date_time_token3] = ACTIONS(197),
  },
  [40] = {
    [sym__line_ending_or_eof] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(53),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(201),
    [aux_sym__literal_string_token1] = ACTIONS(201),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(203),
    [sym_comment] = ACTIONS(23),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(205),
  },
  [42] = {
    [sym__line_ending_or_eof] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
  },
  [43] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(55),
    [sym_comment] = ACTIONS(23),
    [sym__escape_line_ending] = ACTIONS(209),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(209),
    [sym_escape_sequence] = ACTIONS(209),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(211),
    [aux_sym__basic_string_token1] = ACTIONS(211),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(213),
  },
  [44] = {
    [sym__line_ending_or_eof] = ACTIONS(215),
    [sym_comment] = ACTIONS(3),
  },
  [45] = {
    [aux_sym_inline_table_repeat1] = STATE(58),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_RBRACE] = ACTIONS(219),
  },
  [46] = {
    [sym__line_ending_or_eof] = ACTIONS(221),
    [aux_sym_float_token2] = ACTIONS(223),
    [sym_comment] = ACTIONS(3),
  },
  [47] = {
    [sym__line_ending_or_eof] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [sym__line_ending_or_eof] = ACTIONS(225),
    [sym_comment] = ACTIONS(3),
  },
  [49] = {
    [sym_integer] = STATE(62),
    [sym_array] = STATE(62),
    [sym_inline_table] = STATE(62),
    [sym_string] = STATE(62),
    [sym__basic_string] = STATE(102),
    [sym_float] = STATE(62),
    [sym_offset_date_time] = STATE(62),
    [aux_sym_array_repeat1] = STATE(61),
    [sym__multiline_basic_string] = STATE(102),
    [sym__literal_string] = STATE(102),
    [sym_local_date_time] = STATE(62),
    [sym_local_date] = STATE(62),
    [sym__inline_value] = STATE(62),
    [sym__multiline_literal_string] = STATE(102),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(227),
    [aux_sym_offset_date_time_token1] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(163),
    [sym_boolean] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(167),
    [sym_local_time] = ACTIONS(229),
    [aux_sym_integer_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(169),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(173),
    [sym__newline] = ACTIONS(231),
    [anon_sym_LBRACE] = ACTIONS(177),
    [aux_sym_integer_token4] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(181),
  },
  [50] = {
    [aux_sym_array_repeat2] = STATE(64),
    [aux_sym_array_repeat1] = STATE(65),
    [sym__newline] = ACTIONS(233),
    [anon_sym_RBRACK] = ACTIONS(227),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(235),
  },
  [51] = {
    [sym__line_ending_or_eof] = ACTIONS(237),
    [sym_comment] = ACTIONS(3),
    [aux_sym_offset_date_time_token4] = ACTIONS(239),
  },
  [52] = {
    [sym__line_ending_or_eof] = ACTIONS(241),
    [sym_comment] = ACTIONS(3),
  },
  [53] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(53),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(243),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(246),
    [aux_sym__literal_string_token1] = ACTIONS(243),
    [sym_comment] = ACTIONS(23),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(249),
  },
  [54] = {
    [sym__line_ending_or_eof] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
  },
  [55] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(55),
    [sym_comment] = ACTIONS(23),
    [sym__escape_line_ending] = ACTIONS(253),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(253),
    [sym_escape_sequence] = ACTIONS(253),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(256),
    [aux_sym__basic_string_token1] = ACTIONS(256),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(259),
  },
  [56] = {
    [sym_dotted_key] = STATE(162),
    [sym__literal_string] = STATE(4),
    [sym__inline_pair] = STATE(67),
    [sym__basic_string] = STATE(4),
    [sym__quoted_key] = STATE(4),
    [sym_key] = STATE(162),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym__bare_key] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [57] = {
    [sym__line_ending_or_eof] = ACTIONS(261),
    [sym_comment] = ACTIONS(3),
  },
  [58] = {
    [aux_sym_inline_table_repeat1] = STATE(69),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_RBRACE] = ACTIONS(263),
  },
  [59] = {
    [sym__line_ending_or_eof] = ACTIONS(265),
    [sym_comment] = ACTIONS(3),
  },
  [60] = {
    [sym__line_ending_or_eof] = ACTIONS(267),
    [sym_comment] = ACTIONS(3),
  },
  [61] = {
    [aux_sym_array_repeat1] = STATE(61),
    [anon_sym_DQUOTE] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(271),
    [aux_sym_offset_date_time_token1] = ACTIONS(271),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(271),
    [sym_boolean] = ACTIONS(271),
    [anon_sym_COMMA] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(271),
    [sym_local_time] = ACTIONS(271),
    [aux_sym_integer_token2] = ACTIONS(271),
    [aux_sym_float_token3] = ACTIONS(271),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(271),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(271),
    [sym__newline] = ACTIONS(273),
    [anon_sym_LBRACE] = ACTIONS(271),
    [aux_sym_integer_token4] = ACTIONS(271),
    [aux_sym_integer_token1] = ACTIONS(269),
    [anon_sym_SQUOTE] = ACTIONS(269),
  },
  [62] = {
    [aux_sym_array_repeat2] = STATE(72),
    [aux_sym_array_repeat1] = STATE(73),
    [sym__newline] = ACTIONS(276),
    [anon_sym_RBRACK] = ACTIONS(278),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(280),
  },
  [63] = {
    [sym_integer] = STATE(75),
    [sym_array] = STATE(75),
    [sym_inline_table] = STATE(75),
    [sym_string] = STATE(75),
    [sym__basic_string] = STATE(102),
    [sym_float] = STATE(75),
    [sym_offset_date_time] = STATE(75),
    [aux_sym_array_repeat1] = STATE(74),
    [sym__multiline_basic_string] = STATE(102),
    [sym__literal_string] = STATE(102),
    [sym_local_date_time] = STATE(75),
    [sym_local_date] = STATE(75),
    [sym__inline_value] = STATE(75),
    [sym__multiline_literal_string] = STATE(102),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(278),
    [aux_sym_offset_date_time_token1] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(163),
    [sym_boolean] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(167),
    [sym_local_time] = ACTIONS(282),
    [aux_sym_integer_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(169),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(173),
    [sym__newline] = ACTIONS(284),
    [anon_sym_LBRACE] = ACTIONS(177),
    [aux_sym_integer_token4] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(181),
  },
  [64] = {
    [aux_sym_array_repeat2] = STATE(76),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(280),
    [anon_sym_RBRACK] = ACTIONS(278),
  },
  [65] = {
    [aux_sym_array_repeat2] = STATE(72),
    [aux_sym_array_repeat1] = STATE(61),
    [sym__newline] = ACTIONS(231),
    [anon_sym_RBRACK] = ACTIONS(278),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(280),
  },
  [66] = {
    [sym__line_ending_or_eof] = ACTIONS(286),
    [sym_comment] = ACTIONS(3),
  },
  [67] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(288),
    [anon_sym_RBRACE] = ACTIONS(288),
  },
  [68] = {
    [sym__line_ending_or_eof] = ACTIONS(290),
    [sym_comment] = ACTIONS(3),
  },
  [69] = {
    [aux_sym_inline_table_repeat1] = STATE(69),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(292),
    [anon_sym_RBRACE] = ACTIONS(295),
  },
  [70] = {
    [sym_integer] = STATE(75),
    [sym_array] = STATE(75),
    [sym_inline_table] = STATE(75),
    [sym_string] = STATE(75),
    [sym__basic_string] = STATE(102),
    [sym_float] = STATE(75),
    [sym_offset_date_time] = STATE(75),
    [aux_sym_array_repeat1] = STATE(78),
    [sym__multiline_basic_string] = STATE(102),
    [sym__literal_string] = STATE(102),
    [sym_local_date_time] = STATE(75),
    [sym_local_date] = STATE(75),
    [sym__inline_value] = STATE(75),
    [sym__multiline_literal_string] = STATE(102),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(297),
    [aux_sym_offset_date_time_token1] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(163),
    [sym_boolean] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(167),
    [sym_local_time] = ACTIONS(282),
    [aux_sym_integer_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(169),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(173),
    [sym__newline] = ACTIONS(299),
    [anon_sym_LBRACE] = ACTIONS(177),
    [aux_sym_integer_token4] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(181),
  },
  [71] = {
    [sym__line_ending_or_eof] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
  },
  [72] = {
    [aux_sym_array_repeat2] = STATE(76),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(303),
    [anon_sym_RBRACK] = ACTIONS(297),
  },
  [73] = {
    [aux_sym_array_repeat2] = STATE(80),
    [aux_sym_array_repeat1] = STATE(61),
    [sym__newline] = ACTIONS(231),
    [anon_sym_RBRACK] = ACTIONS(297),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(303),
  },
  [74] = {
    [sym_integer] = STATE(81),
    [sym_array] = STATE(81),
    [sym_inline_table] = STATE(81),
    [sym_string] = STATE(81),
    [sym__basic_string] = STATE(102),
    [sym_float] = STATE(81),
    [sym_offset_date_time] = STATE(81),
    [aux_sym_array_repeat1] = STATE(61),
    [sym__multiline_basic_string] = STATE(102),
    [sym__literal_string] = STATE(102),
    [sym_local_date_time] = STATE(81),
    [sym_local_date] = STATE(81),
    [sym__inline_value] = STATE(81),
    [sym__multiline_literal_string] = STATE(102),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(297),
    [aux_sym_offset_date_time_token1] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(163),
    [sym_boolean] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(167),
    [sym_local_time] = ACTIONS(305),
    [aux_sym_integer_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(169),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(173),
    [sym__newline] = ACTIONS(231),
    [anon_sym_LBRACE] = ACTIONS(177),
    [aux_sym_integer_token4] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(181),
  },
  [75] = {
    [aux_sym_array_repeat1] = STATE(82),
    [sym__newline] = ACTIONS(307),
    [anon_sym_RBRACK] = ACTIONS(309),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(309),
  },
  [76] = {
    [aux_sym_array_repeat2] = STATE(76),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(311),
    [anon_sym_RBRACK] = ACTIONS(309),
  },
  [77] = {
    [sym__line_ending_or_eof] = ACTIONS(314),
    [sym_comment] = ACTIONS(3),
  },
  [78] = {
    [sym_integer] = STATE(81),
    [sym_array] = STATE(81),
    [sym_inline_table] = STATE(81),
    [sym_string] = STATE(81),
    [sym__basic_string] = STATE(102),
    [sym_float] = STATE(81),
    [sym_offset_date_time] = STATE(81),
    [aux_sym_array_repeat1] = STATE(61),
    [sym__multiline_basic_string] = STATE(102),
    [sym__literal_string] = STATE(102),
    [sym_local_date_time] = STATE(81),
    [sym_local_date] = STATE(81),
    [sym__inline_value] = STATE(81),
    [sym__multiline_literal_string] = STATE(102),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(316),
    [aux_sym_offset_date_time_token1] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(163),
    [sym_boolean] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(167),
    [sym_local_time] = ACTIONS(305),
    [aux_sym_integer_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(169),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(173),
    [sym__newline] = ACTIONS(231),
    [anon_sym_LBRACE] = ACTIONS(177),
    [aux_sym_integer_token4] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(181),
  },
  [79] = {
    [sym_integer] = STATE(75),
    [sym_array] = STATE(75),
    [sym_inline_table] = STATE(75),
    [sym_string] = STATE(75),
    [sym__basic_string] = STATE(102),
    [sym_float] = STATE(75),
    [sym_offset_date_time] = STATE(75),
    [aux_sym_array_repeat1] = STATE(85),
    [sym__multiline_basic_string] = STATE(102),
    [sym__literal_string] = STATE(102),
    [sym_local_date_time] = STATE(75),
    [sym_local_date] = STATE(75),
    [sym__inline_value] = STATE(75),
    [sym__multiline_literal_string] = STATE(102),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(316),
    [aux_sym_offset_date_time_token1] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(163),
    [sym_boolean] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(167),
    [sym_local_time] = ACTIONS(282),
    [aux_sym_integer_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(169),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(173),
    [sym__newline] = ACTIONS(318),
    [anon_sym_LBRACE] = ACTIONS(177),
    [aux_sym_integer_token4] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(181),
  },
  [80] = {
    [aux_sym_array_repeat2] = STATE(76),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(320),
    [anon_sym_RBRACK] = ACTIONS(316),
  },
  [81] = {
    [aux_sym_array_repeat1] = STATE(87),
    [sym__newline] = ACTIONS(322),
    [anon_sym_RBRACK] = ACTIONS(324),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(324),
  },
  [82] = {
    [aux_sym_array_repeat1] = STATE(61),
    [sym__newline] = ACTIONS(231),
    [anon_sym_RBRACK] = ACTIONS(324),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(324),
  },
  [83] = {
    [sym_integer] = STATE(75),
    [sym_array] = STATE(75),
    [sym_inline_table] = STATE(75),
    [sym_string] = STATE(75),
    [sym__basic_string] = STATE(102),
    [sym_float] = STATE(75),
    [sym_offset_date_time] = STATE(75),
    [aux_sym_array_repeat1] = STATE(88),
    [sym__multiline_basic_string] = STATE(102),
    [sym__literal_string] = STATE(102),
    [sym_local_date_time] = STATE(75),
    [sym_local_date] = STATE(75),
    [sym__inline_value] = STATE(75),
    [sym__multiline_literal_string] = STATE(102),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [aux_sym_offset_date_time_token1] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(163),
    [sym_boolean] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(167),
    [sym_local_time] = ACTIONS(282),
    [aux_sym_integer_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(169),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(173),
    [sym__newline] = ACTIONS(326),
    [anon_sym_LBRACE] = ACTIONS(177),
    [aux_sym_integer_token4] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(181),
  },
  [84] = {
    [sym__line_ending_or_eof] = ACTIONS(328),
    [sym_comment] = ACTIONS(3),
  },
  [85] = {
    [sym_integer] = STATE(81),
    [sym_array] = STATE(81),
    [sym_inline_table] = STATE(81),
    [sym_string] = STATE(81),
    [sym__basic_string] = STATE(102),
    [sym_float] = STATE(81),
    [sym_offset_date_time] = STATE(81),
    [aux_sym_array_repeat1] = STATE(61),
    [sym__multiline_basic_string] = STATE(102),
    [sym__literal_string] = STATE(102),
    [sym_local_date_time] = STATE(81),
    [sym_local_date] = STATE(81),
    [sym__inline_value] = STATE(81),
    [sym__multiline_literal_string] = STATE(102),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(330),
    [aux_sym_offset_date_time_token1] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(163),
    [sym_boolean] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(167),
    [sym_local_time] = ACTIONS(305),
    [aux_sym_integer_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(169),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(173),
    [sym__newline] = ACTIONS(231),
    [anon_sym_LBRACE] = ACTIONS(177),
    [aux_sym_integer_token4] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(181),
  },
  [86] = {
    [sym_integer] = STATE(75),
    [sym_array] = STATE(75),
    [sym_inline_table] = STATE(75),
    [sym_string] = STATE(75),
    [sym__basic_string] = STATE(102),
    [sym_float] = STATE(75),
    [sym_offset_date_time] = STATE(75),
    [aux_sym_array_repeat1] = STATE(90),
    [sym__multiline_basic_string] = STATE(102),
    [sym__literal_string] = STATE(102),
    [sym_local_date_time] = STATE(75),
    [sym_local_date] = STATE(75),
    [sym__inline_value] = STATE(75),
    [sym__multiline_literal_string] = STATE(102),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(330),
    [aux_sym_offset_date_time_token1] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(163),
    [sym_boolean] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(167),
    [sym_local_time] = ACTIONS(282),
    [aux_sym_integer_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(169),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(173),
    [sym__newline] = ACTIONS(332),
    [anon_sym_LBRACE] = ACTIONS(177),
    [aux_sym_integer_token4] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(181),
  },
  [87] = {
    [aux_sym_array_repeat1] = STATE(61),
    [sym__newline] = ACTIONS(231),
    [anon_sym_RBRACK] = ACTIONS(334),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(334),
  },
  [88] = {
    [sym_integer] = STATE(81),
    [sym_array] = STATE(81),
    [sym_inline_table] = STATE(81),
    [sym_string] = STATE(81),
    [sym__basic_string] = STATE(102),
    [sym_float] = STATE(81),
    [sym_offset_date_time] = STATE(81),
    [aux_sym_array_repeat1] = STATE(61),
    [sym__multiline_basic_string] = STATE(102),
    [sym__literal_string] = STATE(102),
    [sym_local_date_time] = STATE(81),
    [sym_local_date] = STATE(81),
    [sym__inline_value] = STATE(81),
    [sym__multiline_literal_string] = STATE(102),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [aux_sym_offset_date_time_token1] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(163),
    [sym_boolean] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(167),
    [sym_local_time] = ACTIONS(305),
    [aux_sym_integer_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(169),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(173),
    [sym__newline] = ACTIONS(231),
    [anon_sym_LBRACE] = ACTIONS(177),
    [aux_sym_integer_token4] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(181),
  },
  [89] = {
    [sym__line_ending_or_eof] = ACTIONS(336),
    [sym_comment] = ACTIONS(3),
  },
  [90] = {
    [sym_integer] = STATE(81),
    [sym_array] = STATE(81),
    [sym_inline_table] = STATE(81),
    [sym_string] = STATE(81),
    [sym__basic_string] = STATE(102),
    [sym_float] = STATE(81),
    [sym_offset_date_time] = STATE(81),
    [aux_sym_array_repeat1] = STATE(61),
    [sym__multiline_basic_string] = STATE(102),
    [sym__literal_string] = STATE(102),
    [sym_local_date_time] = STATE(81),
    [sym_local_date] = STATE(81),
    [sym__inline_value] = STATE(81),
    [sym__multiline_literal_string] = STATE(102),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(338),
    [aux_sym_offset_date_time_token1] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(163),
    [sym_boolean] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(167),
    [sym_local_time] = ACTIONS(305),
    [aux_sym_integer_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(169),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(173),
    [sym__newline] = ACTIONS(231),
    [anon_sym_LBRACE] = ACTIONS(177),
    [aux_sym_integer_token4] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(181),
  },
  [91] = {
    [sym__line_ending_or_eof] = ACTIONS(340),
    [sym_comment] = ACTIONS(3),
  },
  [92] = {
    [anon_sym_DOT] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(27),
  },
  [93] = {
    [sym__line_ending_or_eof] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
  },
  [94] = {
    [sym__line_ending_or_eof] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
  },
  [95] = {
    [sym__literal_string] = STATE(92),
    [sym__basic_string] = STATE(92),
    [sym__quoted_key] = STATE(92),
    [sym_key] = STATE(104),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym__bare_key] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(33),
  },
  [96] = {
    [sym__line_ending_or_eof] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
  },
  [97] = {
    [sym__line_ending_or_eof] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
  },
  [98] = {
    [sym__newline] = ACTIONS(131),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(131),
  },
  [99] = {
    [sym__newline] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(133),
    [anon_sym_RBRACE] = ACTIONS(133),
  },
  [100] = {
    [sym__newline] = ACTIONS(342),
    [aux_sym_offset_date_time_token2] = ACTIONS(344),
    [anon_sym_RBRACK] = ACTIONS(342),
    [sym_comment] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(342),
    [anon_sym_RBRACE] = ACTIONS(342),
  },
  [101] = {
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(131),
    [aux_sym_float_token1] = ACTIONS(346),
    [sym__newline] = ACTIONS(131),
    [aux_sym_float_token2] = ACTIONS(348),
    [anon_sym_RBRACE] = ACTIONS(131),
  },
  [102] = {
    [sym__newline] = ACTIONS(183),
    [anon_sym_RBRACK] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_RBRACE] = ACTIONS(183),
  },
  [103] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_RBRACE] = ACTIONS(185),
  },
  [104] = {
    [anon_sym_DOT] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(187),
  },
  [105] = {
    [sym__newline] = ACTIONS(199),
    [anon_sym_RBRACK] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(199),
  },
  [106] = {
    [sym__newline] = ACTIONS(207),
    [anon_sym_RBRACK] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_RBRACE] = ACTIONS(207),
  },
  [107] = {
    [sym__newline] = ACTIONS(215),
    [anon_sym_RBRACK] = ACTIONS(215),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(215),
    [anon_sym_RBRACE] = ACTIONS(215),
  },
  [108] = {
    [sym__newline] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(221),
    [aux_sym_float_token2] = ACTIONS(350),
    [anon_sym_RBRACE] = ACTIONS(221),
  },
  [109] = {
    [sym__newline] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_RBRACE] = ACTIONS(221),
  },
  [110] = {
    [sym__newline] = ACTIONS(225),
    [anon_sym_RBRACK] = ACTIONS(225),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(225),
    [anon_sym_RBRACE] = ACTIONS(225),
  },
  [111] = {
    [sym__newline] = ACTIONS(237),
    [anon_sym_RBRACK] = ACTIONS(237),
    [aux_sym_offset_date_time_token4] = ACTIONS(352),
    [anon_sym_COMMA] = ACTIONS(237),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(237),
  },
  [112] = {
    [sym__newline] = ACTIONS(241),
    [anon_sym_RBRACK] = ACTIONS(241),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(241),
    [anon_sym_RBRACE] = ACTIONS(241),
  },
  [113] = {
    [sym__newline] = ACTIONS(251),
    [anon_sym_RBRACK] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(251),
    [anon_sym_RBRACE] = ACTIONS(251),
  },
  [114] = {
    [sym__newline] = ACTIONS(261),
    [anon_sym_RBRACK] = ACTIONS(261),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_RBRACE] = ACTIONS(261),
  },
  [115] = {
    [sym__newline] = ACTIONS(265),
    [anon_sym_RBRACK] = ACTIONS(265),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(265),
    [anon_sym_RBRACE] = ACTIONS(265),
  },
  [116] = {
    [sym__newline] = ACTIONS(267),
    [anon_sym_RBRACK] = ACTIONS(267),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_RBRACE] = ACTIONS(267),
  },
  [117] = {
    [sym__newline] = ACTIONS(286),
    [anon_sym_RBRACK] = ACTIONS(286),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(286),
    [anon_sym_RBRACE] = ACTIONS(286),
  },
  [118] = {
    [sym__newline] = ACTIONS(290),
    [anon_sym_RBRACK] = ACTIONS(290),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(290),
    [anon_sym_RBRACE] = ACTIONS(290),
  },
  [119] = {
    [sym__newline] = ACTIONS(301),
    [anon_sym_RBRACK] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(301),
    [anon_sym_RBRACE] = ACTIONS(301),
  },
  [120] = {
    [sym__newline] = ACTIONS(314),
    [anon_sym_RBRACK] = ACTIONS(314),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(314),
    [anon_sym_RBRACE] = ACTIONS(314),
  },
  [121] = {
    [sym__newline] = ACTIONS(328),
    [anon_sym_RBRACK] = ACTIONS(328),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(328),
    [anon_sym_RBRACE] = ACTIONS(328),
  },
  [122] = {
    [sym__newline] = ACTIONS(336),
    [anon_sym_RBRACK] = ACTIONS(336),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(336),
    [anon_sym_RBRACE] = ACTIONS(336),
  },
  [123] = {
    [sym__newline] = ACTIONS(340),
    [anon_sym_RBRACK] = ACTIONS(340),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(340),
    [anon_sym_RBRACE] = ACTIONS(340),
  },
  [124] = {
    [sym__newline] = ACTIONS(53),
    [anon_sym_RBRACK] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_DOT] = ACTIONS(53),
  },
  [125] = {
    [sym__newline] = ACTIONS(65),
    [anon_sym_RBRACK] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT] = ACTIONS(65),
  },
  [126] = {
    [sym__newline] = ACTIONS(117),
    [anon_sym_RBRACK] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(117),
  },
  [127] = {
    [sym__newline] = ACTIONS(129),
    [anon_sym_RBRACK] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_DOT] = ACTIONS(129),
  },
  [128] = {
    [aux_sym__basic_string_repeat1] = STATE(130),
    [anon_sym_DQUOTE2] = ACTIONS(354),
    [sym_escape_sequence] = ACTIONS(356),
    [sym_comment] = ACTIONS(23),
    [aux_sym__basic_string_token1] = ACTIONS(358),
  },
  [129] = {
    [anon_sym_SQUOTE2] = ACTIONS(360),
    [aux_sym__literal_string_token1] = ACTIONS(362),
    [sym_comment] = ACTIONS(23),
  },
  [130] = {
    [aux_sym__basic_string_repeat1] = STATE(23),
    [anon_sym_DQUOTE2] = ACTIONS(364),
    [sym_escape_sequence] = ACTIONS(57),
    [sym_comment] = ACTIONS(23),
    [aux_sym__basic_string_token1] = ACTIONS(59),
  },
  [131] = {
    [anon_sym_SQUOTE2] = ACTIONS(366),
    [sym_comment] = ACTIONS(3),
  },
  [132] = {
    [sym_integer] = STATE(103),
    [sym_array] = STATE(103),
    [sym_inline_table] = STATE(103),
    [sym_string] = STATE(103),
    [sym__basic_string] = STATE(102),
    [sym_float] = STATE(103),
    [sym_offset_date_time] = STATE(103),
    [sym__multiline_basic_string] = STATE(102),
    [sym__literal_string] = STATE(102),
    [sym_local_date_time] = STATE(103),
    [sym_local_date] = STATE(103),
    [sym__inline_value] = STATE(103),
    [sym__multiline_literal_string] = STATE(102),
    [anon_sym_DQUOTE] = ACTIONS(368),
    [aux_sym_offset_date_time_token1] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(163),
    [sym_boolean] = ACTIONS(370),
    [anon_sym_LBRACK] = ACTIONS(167),
    [sym_local_time] = ACTIONS(370),
    [aux_sym_integer_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(169),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(173),
    [anon_sym_LBRACE] = ACTIONS(177),
    [aux_sym_integer_token4] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(372),
  },
  [133] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(138),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(374),
    [aux_sym__literal_string_token1] = ACTIONS(376),
    [sym_comment] = ACTIONS(23),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(376),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(378),
  },
  [134] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(139),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(380),
    [sym_comment] = ACTIONS(23),
    [sym_escape_sequence] = ACTIONS(380),
    [aux_sym__basic_string_token1] = ACTIONS(382),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(384),
    [sym__escape_line_ending] = ACTIONS(380),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(382),
  },
  [135] = {
    [sym__inline_pair] = STATE(140),
    [sym__basic_string] = STATE(4),
    [sym_key] = STATE(162),
    [sym_dotted_key] = STATE(162),
    [sym__literal_string] = STATE(4),
    [sym__quoted_key] = STATE(4),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(386),
  },
  [136] = {
    [sym_string] = STATE(142),
    [sym__basic_string] = STATE(102),
    [sym_float] = STATE(142),
    [sym_offset_date_time] = STATE(142),
    [sym__inline_value] = STATE(142),
    [sym__multiline_literal_string] = STATE(102),
    [sym_integer] = STATE(142),
    [sym_array] = STATE(142),
    [sym_inline_table] = STATE(142),
    [aux_sym_array_repeat1] = STATE(141),
    [sym__multiline_basic_string] = STATE(102),
    [sym__literal_string] = STATE(102),
    [sym_local_date_time] = STATE(142),
    [sym_local_date] = STATE(142),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(388),
    [aux_sym_offset_date_time_token1] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(163),
    [sym_boolean] = ACTIONS(390),
    [anon_sym_LBRACK] = ACTIONS(167),
    [sym_local_time] = ACTIONS(390),
    [aux_sym_integer_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(169),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(173),
    [sym__newline] = ACTIONS(392),
    [anon_sym_LBRACE] = ACTIONS(177),
    [aux_sym_integer_token4] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(181),
  },
  [137] = {
    [sym_comment] = ACTIONS(3),
    [aux_sym_offset_date_time_token3] = ACTIONS(394),
  },
  [138] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(53),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(203),
    [aux_sym__literal_string_token1] = ACTIONS(201),
    [sym_comment] = ACTIONS(23),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(201),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(396),
  },
  [139] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(55),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(209),
    [sym_comment] = ACTIONS(23),
    [sym_escape_sequence] = ACTIONS(209),
    [aux_sym__basic_string_token1] = ACTIONS(211),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(398),
    [sym__escape_line_ending] = ACTIONS(209),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(211),
  },
  [140] = {
    [aux_sym_inline_table_repeat1] = STATE(143),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_RBRACE] = ACTIONS(400),
  },
  [141] = {
    [sym_string] = STATE(144),
    [sym__basic_string] = STATE(102),
    [sym_float] = STATE(144),
    [sym_offset_date_time] = STATE(144),
    [sym__inline_value] = STATE(144),
    [sym__multiline_literal_string] = STATE(102),
    [sym_integer] = STATE(144),
    [sym_array] = STATE(144),
    [sym_inline_table] = STATE(144),
    [aux_sym_array_repeat1] = STATE(61),
    [sym__multiline_basic_string] = STATE(102),
    [sym__literal_string] = STATE(102),
    [sym_local_date_time] = STATE(144),
    [sym_local_date] = STATE(144),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(402),
    [aux_sym_offset_date_time_token1] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(163),
    [sym_boolean] = ACTIONS(404),
    [anon_sym_LBRACK] = ACTIONS(167),
    [sym_local_time] = ACTIONS(404),
    [aux_sym_integer_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(169),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(173),
    [sym__newline] = ACTIONS(231),
    [anon_sym_LBRACE] = ACTIONS(177),
    [aux_sym_integer_token4] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(181),
  },
  [142] = {
    [aux_sym_array_repeat2] = STATE(146),
    [aux_sym_array_repeat1] = STATE(147),
    [sym__newline] = ACTIONS(406),
    [anon_sym_RBRACK] = ACTIONS(402),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(408),
  },
  [143] = {
    [aux_sym_inline_table_repeat1] = STATE(69),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_RBRACE] = ACTIONS(410),
  },
  [144] = {
    [aux_sym_array_repeat2] = STATE(149),
    [aux_sym_array_repeat1] = STATE(150),
    [sym__newline] = ACTIONS(412),
    [anon_sym_RBRACK] = ACTIONS(414),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(416),
  },
  [145] = {
    [sym_string] = STATE(75),
    [sym__basic_string] = STATE(102),
    [sym_float] = STATE(75),
    [sym_offset_date_time] = STATE(75),
    [sym__inline_value] = STATE(75),
    [sym__multiline_literal_string] = STATE(102),
    [sym_integer] = STATE(75),
    [sym_array] = STATE(75),
    [sym_inline_table] = STATE(75),
    [aux_sym_array_repeat1] = STATE(151),
    [sym__multiline_basic_string] = STATE(102),
    [sym__literal_string] = STATE(102),
    [sym_local_date_time] = STATE(75),
    [sym_local_date] = STATE(75),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(414),
    [aux_sym_offset_date_time_token1] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(163),
    [sym_boolean] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(167),
    [sym_local_time] = ACTIONS(282),
    [aux_sym_integer_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(169),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(173),
    [sym__newline] = ACTIONS(418),
    [anon_sym_LBRACE] = ACTIONS(177),
    [aux_sym_integer_token4] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(181),
  },
  [146] = {
    [aux_sym_array_repeat2] = STATE(76),
    [anon_sym_RBRACK] = ACTIONS(414),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(416),
  },
  [147] = {
    [aux_sym_array_repeat2] = STATE(149),
    [aux_sym_array_repeat1] = STATE(61),
    [sym__newline] = ACTIONS(231),
    [anon_sym_RBRACK] = ACTIONS(414),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(416),
  },
  [148] = {
    [sym_string] = STATE(75),
    [sym__basic_string] = STATE(102),
    [sym_float] = STATE(75),
    [sym_offset_date_time] = STATE(75),
    [sym__inline_value] = STATE(75),
    [sym__multiline_literal_string] = STATE(102),
    [sym_integer] = STATE(75),
    [sym_array] = STATE(75),
    [sym_inline_table] = STATE(75),
    [aux_sym_array_repeat1] = STATE(152),
    [sym__multiline_basic_string] = STATE(102),
    [sym__literal_string] = STATE(102),
    [sym_local_date_time] = STATE(75),
    [sym_local_date] = STATE(75),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(420),
    [aux_sym_offset_date_time_token1] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(163),
    [sym_boolean] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(167),
    [sym_local_time] = ACTIONS(282),
    [aux_sym_integer_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(169),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(173),
    [sym__newline] = ACTIONS(422),
    [anon_sym_LBRACE] = ACTIONS(177),
    [aux_sym_integer_token4] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(181),
  },
  [149] = {
    [aux_sym_array_repeat2] = STATE(76),
    [anon_sym_RBRACK] = ACTIONS(420),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(424),
  },
  [150] = {
    [aux_sym_array_repeat2] = STATE(154),
    [aux_sym_array_repeat1] = STATE(61),
    [sym__newline] = ACTIONS(231),
    [anon_sym_RBRACK] = ACTIONS(420),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(424),
  },
  [151] = {
    [sym_string] = STATE(81),
    [sym__basic_string] = STATE(102),
    [sym_float] = STATE(81),
    [sym_offset_date_time] = STATE(81),
    [sym__inline_value] = STATE(81),
    [sym__multiline_literal_string] = STATE(102),
    [sym_integer] = STATE(81),
    [sym_array] = STATE(81),
    [sym_inline_table] = STATE(81),
    [aux_sym_array_repeat1] = STATE(61),
    [sym__multiline_basic_string] = STATE(102),
    [sym__literal_string] = STATE(102),
    [sym_local_date_time] = STATE(81),
    [sym_local_date] = STATE(81),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(420),
    [aux_sym_offset_date_time_token1] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(163),
    [sym_boolean] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(167),
    [sym_local_time] = ACTIONS(305),
    [aux_sym_integer_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(169),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(173),
    [sym__newline] = ACTIONS(231),
    [anon_sym_LBRACE] = ACTIONS(177),
    [aux_sym_integer_token4] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(181),
  },
  [152] = {
    [sym_string] = STATE(81),
    [sym__basic_string] = STATE(102),
    [sym_float] = STATE(81),
    [sym_offset_date_time] = STATE(81),
    [sym__inline_value] = STATE(81),
    [sym__multiline_literal_string] = STATE(102),
    [sym_integer] = STATE(81),
    [sym_array] = STATE(81),
    [sym_inline_table] = STATE(81),
    [aux_sym_array_repeat1] = STATE(61),
    [sym__multiline_basic_string] = STATE(102),
    [sym__literal_string] = STATE(102),
    [sym_local_date_time] = STATE(81),
    [sym_local_date] = STATE(81),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(426),
    [aux_sym_offset_date_time_token1] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(163),
    [sym_boolean] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(167),
    [sym_local_time] = ACTIONS(305),
    [aux_sym_integer_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(169),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(173),
    [sym__newline] = ACTIONS(231),
    [anon_sym_LBRACE] = ACTIONS(177),
    [aux_sym_integer_token4] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(181),
  },
  [153] = {
    [sym_string] = STATE(75),
    [sym__basic_string] = STATE(102),
    [sym_float] = STATE(75),
    [sym_offset_date_time] = STATE(75),
    [sym__inline_value] = STATE(75),
    [sym__multiline_literal_string] = STATE(102),
    [sym_integer] = STATE(75),
    [sym_array] = STATE(75),
    [sym_inline_table] = STATE(75),
    [aux_sym_array_repeat1] = STATE(155),
    [sym__multiline_basic_string] = STATE(102),
    [sym__literal_string] = STATE(102),
    [sym_local_date_time] = STATE(75),
    [sym_local_date] = STATE(75),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(426),
    [aux_sym_offset_date_time_token1] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(163),
    [sym_boolean] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(167),
    [sym_local_time] = ACTIONS(282),
    [aux_sym_integer_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(169),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(173),
    [sym__newline] = ACTIONS(428),
    [anon_sym_LBRACE] = ACTIONS(177),
    [aux_sym_integer_token4] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(181),
  },
  [154] = {
    [aux_sym_array_repeat2] = STATE(76),
    [anon_sym_RBRACK] = ACTIONS(426),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(430),
  },
  [155] = {
    [sym_string] = STATE(81),
    [sym__basic_string] = STATE(102),
    [sym_float] = STATE(81),
    [sym_offset_date_time] = STATE(81),
    [sym__inline_value] = STATE(81),
    [sym__multiline_literal_string] = STATE(102),
    [sym_integer] = STATE(81),
    [sym_array] = STATE(81),
    [sym_inline_table] = STATE(81),
    [aux_sym_array_repeat1] = STATE(61),
    [sym__multiline_basic_string] = STATE(102),
    [sym__literal_string] = STATE(102),
    [sym_local_date_time] = STATE(81),
    [sym_local_date] = STATE(81),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(432),
    [aux_sym_offset_date_time_token1] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(163),
    [sym_boolean] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(167),
    [sym_local_time] = ACTIONS(305),
    [aux_sym_integer_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(169),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(173),
    [sym__newline] = ACTIONS(231),
    [anon_sym_LBRACE] = ACTIONS(177),
    [aux_sym_integer_token4] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(181),
  },
  [156] = {
    [sym_string] = STATE(75),
    [sym__basic_string] = STATE(102),
    [sym_float] = STATE(75),
    [sym_offset_date_time] = STATE(75),
    [sym__inline_value] = STATE(75),
    [sym__multiline_literal_string] = STATE(102),
    [sym_integer] = STATE(75),
    [sym_array] = STATE(75),
    [sym_inline_table] = STATE(75),
    [aux_sym_array_repeat1] = STATE(157),
    [sym__multiline_basic_string] = STATE(102),
    [sym__literal_string] = STATE(102),
    [sym_local_date_time] = STATE(75),
    [sym_local_date] = STATE(75),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(432),
    [aux_sym_offset_date_time_token1] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(163),
    [sym_boolean] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(167),
    [sym_local_time] = ACTIONS(282),
    [aux_sym_integer_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(169),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(173),
    [sym__newline] = ACTIONS(434),
    [anon_sym_LBRACE] = ACTIONS(177),
    [aux_sym_integer_token4] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(181),
  },
  [157] = {
    [sym_string] = STATE(81),
    [sym__basic_string] = STATE(102),
    [sym_float] = STATE(81),
    [sym_offset_date_time] = STATE(81),
    [sym__inline_value] = STATE(81),
    [sym__multiline_literal_string] = STATE(102),
    [sym_integer] = STATE(81),
    [sym_array] = STATE(81),
    [sym_inline_table] = STATE(81),
    [aux_sym_array_repeat1] = STATE(61),
    [sym__multiline_basic_string] = STATE(102),
    [sym__literal_string] = STATE(102),
    [sym_local_date_time] = STATE(81),
    [sym_local_date] = STATE(81),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(436),
    [aux_sym_offset_date_time_token1] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(163),
    [sym_boolean] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(167),
    [sym_local_time] = ACTIONS(305),
    [aux_sym_integer_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(169),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(173),
    [sym__newline] = ACTIONS(231),
    [anon_sym_LBRACE] = ACTIONS(177),
    [aux_sym_integer_token4] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(181),
  },
  [158] = {
    [aux_sym__basic_string_repeat1] = STATE(160),
    [anon_sym_DQUOTE2] = ACTIONS(438),
    [sym_escape_sequence] = ACTIONS(440),
    [sym_comment] = ACTIONS(23),
    [aux_sym__basic_string_token1] = ACTIONS(442),
  },
  [159] = {
    [anon_sym_SQUOTE2] = ACTIONS(444),
    [sym_comment] = ACTIONS(23),
    [aux_sym__literal_string_token1] = ACTIONS(446),
  },
  [160] = {
    [aux_sym__basic_string_repeat1] = STATE(23),
    [anon_sym_DQUOTE2] = ACTIONS(448),
    [sym_escape_sequence] = ACTIONS(57),
    [sym_comment] = ACTIONS(23),
    [aux_sym__basic_string_token1] = ACTIONS(59),
  },
  [161] = {
    [anon_sym_SQUOTE2] = ACTIONS(450),
    [sym_comment] = ACTIONS(3),
  },
  [162] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(452),
    [anon_sym_DOT] = ACTIONS(49),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, REDUCE(sym_root, 0),
  [11] = {.count = 1, .reusable = true}, SHIFT(9),
  [13] = {.count = 1, .reusable = true}, SHIFT(4),
  [15] = {.count = 1, .reusable = false}, SHIFT(5),
  [17] = {.count = 1, .reusable = true}, SHIFT(6),
  [19] = {.count = 1, .reusable = true}, SHIFT(12),
  [21] = {.count = 1, .reusable = true}, SHIFT(13),
  [23] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [25] = {.count = 1, .reusable = false}, SHIFT(13),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_key, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(128),
  [31] = {.count = 1, .reusable = true}, SHIFT(92),
  [33] = {.count = 1, .reusable = true}, SHIFT(129),
  [35] = {.count = 1, .reusable = true}, SHIFT(15),
  [37] = {.count = 1, .reusable = false}, SHIFT(16),
  [39] = {.count = 1, .reusable = true}, SHIFT(17),
  [41] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_root, 1),
  [45] = {.count = 1, .reusable = true}, SHIFT(18),
  [47] = {.count = 1, .reusable = true}, SHIFT(19),
  [49] = {.count = 1, .reusable = true}, SHIFT(20),
  [51] = {.count = 1, .reusable = true}, SHIFT(21),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym__basic_string, 2),
  [55] = {.count = 1, .reusable = true}, SHIFT(22),
  [57] = {.count = 1, .reusable = true}, SHIFT(23),
  [59] = {.count = 1, .reusable = false}, SHIFT(23),
  [61] = {.count = 1, .reusable = true}, SHIFT(95),
  [63] = {.count = 1, .reusable = true}, SHIFT(24),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym__literal_string, 2),
  [67] = {.count = 1, .reusable = true}, SHIFT(25),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_pair, 2),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_pair, 2),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(2),
  [76] = {.count = 2, .reusable = true}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(3),
  [79] = {.count = 1, .reusable = true}, REDUCE(aux_sym_root_repeat1, 2),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(18),
  [84] = {.count = 2, .reusable = true}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(4),
  [87] = {.count = 2, .reusable = false}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(5),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(6),
  [93] = {.count = 1, .reusable = false}, SHIFT(158),
  [95] = {.count = 1, .reusable = true}, SHIFT(28),
  [97] = {.count = 1, .reusable = true}, SHIFT(26),
  [99] = {.count = 1, .reusable = true}, SHIFT(35),
  [101] = {.count = 1, .reusable = true}, SHIFT(33),
  [103] = {.count = 1, .reusable = true}, SHIFT(27),
  [105] = {.count = 1, .reusable = true}, SHIFT(29),
  [107] = {.count = 1, .reusable = true}, SHIFT(30),
  [109] = {.count = 1, .reusable = true}, SHIFT(31),
  [111] = {.count = 1, .reusable = false}, SHIFT(32),
  [113] = {.count = 1, .reusable = false}, SHIFT(159),
  [115] = {.count = 1, .reusable = true}, SHIFT(37),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym__basic_string, 3),
  [119] = {.count = 1, .reusable = true}, REDUCE(aux_sym__basic_string_repeat1, 2),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym__basic_string_repeat1, 2), SHIFT_REPEAT(23),
  [124] = {.count = 2, .reusable = false}, REDUCE(aux_sym__basic_string_repeat1, 2), SHIFT_REPEAT(23),
  [127] = {.count = 1, .reusable = true}, SHIFT(38),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym__literal_string, 3),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_integer, 1),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_float, 1),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_local_date, 1),
  [137] = {.count = 1, .reusable = true}, SHIFT(39),
  [139] = {.count = 1, .reusable = false}, SHIFT(41),
  [141] = {.count = 1, .reusable = true}, SHIFT(41),
  [143] = {.count = 1, .reusable = true}, SHIFT(40),
  [145] = {.count = 1, .reusable = true}, SHIFT(43),
  [147] = {.count = 1, .reusable = false}, SHIFT(43),
  [149] = {.count = 1, .reusable = true}, SHIFT(42),
  [151] = {.count = 1, .reusable = true}, SHIFT(44),
  [153] = {.count = 1, .reusable = true}, SHIFT(46),
  [155] = {.count = 1, .reusable = true}, SHIFT(47),
  [157] = {.count = 1, .reusable = false}, SHIFT(128),
  [159] = {.count = 1, .reusable = true}, SHIFT(48),
  [161] = {.count = 1, .reusable = true}, SHIFT(100),
  [163] = {.count = 1, .reusable = true}, SHIFT(98),
  [165] = {.count = 1, .reusable = true}, SHIFT(50),
  [167] = {.count = 1, .reusable = true}, SHIFT(136),
  [169] = {.count = 1, .reusable = true}, SHIFT(99),
  [171] = {.count = 1, .reusable = true}, SHIFT(133),
  [173] = {.count = 1, .reusable = true}, SHIFT(134),
  [175] = {.count = 1, .reusable = true}, SHIFT(49),
  [177] = {.count = 1, .reusable = true}, SHIFT(135),
  [179] = {.count = 1, .reusable = false}, SHIFT(101),
  [181] = {.count = 1, .reusable = false}, SHIFT(129),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym__inline_pair, 3),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_dotted_key, 3),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_table_array, 4),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym_table_array, 4),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_table, 4),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym_table, 4),
  [197] = {.count = 1, .reusable = true}, SHIFT(51),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym__multiline_literal_string, 2),
  [201] = {.count = 1, .reusable = false}, SHIFT(53),
  [203] = {.count = 1, .reusable = true}, SHIFT(53),
  [205] = {.count = 1, .reusable = true}, SHIFT(52),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym__multiline_basic_string, 2),
  [209] = {.count = 1, .reusable = true}, SHIFT(55),
  [211] = {.count = 1, .reusable = false}, SHIFT(55),
  [213] = {.count = 1, .reusable = true}, SHIFT(54),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_inline_table, 2),
  [217] = {.count = 1, .reusable = true}, SHIFT(56),
  [219] = {.count = 1, .reusable = true}, SHIFT(57),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_float, 2),
  [223] = {.count = 1, .reusable = true}, SHIFT(59),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [227] = {.count = 1, .reusable = true}, SHIFT(60),
  [229] = {.count = 1, .reusable = true}, SHIFT(62),
  [231] = {.count = 1, .reusable = true}, SHIFT(61),
  [233] = {.count = 1, .reusable = true}, SHIFT(65),
  [235] = {.count = 1, .reusable = true}, SHIFT(63),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_local_date_time, 3),
  [239] = {.count = 1, .reusable = true}, SHIFT(66),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym__multiline_literal_string, 3),
  [243] = {.count = 2, .reusable = false}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2), SHIFT_REPEAT(53),
  [246] = {.count = 2, .reusable = true}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2), SHIFT_REPEAT(53),
  [249] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym__multiline_basic_string, 3),
  [253] = {.count = 2, .reusable = true}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2), SHIFT_REPEAT(55),
  [256] = {.count = 2, .reusable = false}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2), SHIFT_REPEAT(55),
  [259] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_inline_table, 3, .production_id = 1),
  [263] = {.count = 1, .reusable = true}, SHIFT(68),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_float, 3),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [269] = {.count = 1, .reusable = false}, REDUCE(aux_sym_array_repeat1, 2),
  [271] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2),
  [273] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(61),
  [276] = {.count = 1, .reusable = true}, SHIFT(73),
  [278] = {.count = 1, .reusable = true}, SHIFT(71),
  [280] = {.count = 1, .reusable = true}, SHIFT(70),
  [282] = {.count = 1, .reusable = true}, SHIFT(75),
  [284] = {.count = 1, .reusable = true}, SHIFT(74),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym_offset_date_time, 4),
  [288] = {.count = 1, .reusable = true}, REDUCE(aux_sym_inline_table_repeat1, 2, .production_id = 1),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym_inline_table, 4, .production_id = 1),
  [292] = {.count = 2, .reusable = true}, REDUCE(aux_sym_inline_table_repeat1, 2), SHIFT_REPEAT(56),
  [295] = {.count = 1, .reusable = true}, REDUCE(aux_sym_inline_table_repeat1, 2),
  [297] = {.count = 1, .reusable = true}, SHIFT(77),
  [299] = {.count = 1, .reusable = true}, SHIFT(78),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_array, 4),
  [303] = {.count = 1, .reusable = true}, SHIFT(79),
  [305] = {.count = 1, .reusable = true}, SHIFT(81),
  [307] = {.count = 1, .reusable = true}, SHIFT(82),
  [309] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat2, 2),
  [311] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_repeat2, 2), SHIFT_REPEAT(83),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym_array, 5),
  [316] = {.count = 1, .reusable = true}, SHIFT(84),
  [318] = {.count = 1, .reusable = true}, SHIFT(85),
  [320] = {.count = 1, .reusable = true}, SHIFT(86),
  [322] = {.count = 1, .reusable = true}, SHIFT(87),
  [324] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat2, 3),
  [326] = {.count = 1, .reusable = true}, SHIFT(88),
  [328] = {.count = 1, .reusable = true}, REDUCE(sym_array, 6),
  [330] = {.count = 1, .reusable = true}, SHIFT(89),
  [332] = {.count = 1, .reusable = true}, SHIFT(90),
  [334] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat2, 4),
  [336] = {.count = 1, .reusable = true}, REDUCE(sym_array, 7),
  [338] = {.count = 1, .reusable = true}, SHIFT(91),
  [340] = {.count = 1, .reusable = true}, REDUCE(sym_array, 8),
  [342] = {.count = 1, .reusable = false}, REDUCE(sym_local_date, 1),
  [344] = {.count = 1, .reusable = true}, SHIFT(137),
  [346] = {.count = 1, .reusable = true}, SHIFT(108),
  [348] = {.count = 1, .reusable = true}, SHIFT(109),
  [350] = {.count = 1, .reusable = true}, SHIFT(115),
  [352] = {.count = 1, .reusable = true}, SHIFT(117),
  [354] = {.count = 1, .reusable = true}, SHIFT(124),
  [356] = {.count = 1, .reusable = true}, SHIFT(130),
  [358] = {.count = 1, .reusable = false}, SHIFT(130),
  [360] = {.count = 1, .reusable = true}, SHIFT(125),
  [362] = {.count = 1, .reusable = false}, SHIFT(131),
  [364] = {.count = 1, .reusable = true}, SHIFT(126),
  [366] = {.count = 1, .reusable = true}, SHIFT(127),
  [368] = {.count = 1, .reusable = false}, SHIFT(3),
  [370] = {.count = 1, .reusable = true}, SHIFT(103),
  [372] = {.count = 1, .reusable = false}, SHIFT(6),
  [374] = {.count = 1, .reusable = true}, SHIFT(138),
  [376] = {.count = 1, .reusable = false}, SHIFT(138),
  [378] = {.count = 1, .reusable = true}, SHIFT(105),
  [380] = {.count = 1, .reusable = true}, SHIFT(139),
  [382] = {.count = 1, .reusable = false}, SHIFT(139),
  [384] = {.count = 1, .reusable = true}, SHIFT(106),
  [386] = {.count = 1, .reusable = true}, SHIFT(107),
  [388] = {.count = 1, .reusable = true}, SHIFT(110),
  [390] = {.count = 1, .reusable = true}, SHIFT(142),
  [392] = {.count = 1, .reusable = true}, SHIFT(141),
  [394] = {.count = 1, .reusable = true}, SHIFT(111),
  [396] = {.count = 1, .reusable = true}, SHIFT(112),
  [398] = {.count = 1, .reusable = true}, SHIFT(113),
  [400] = {.count = 1, .reusable = true}, SHIFT(114),
  [402] = {.count = 1, .reusable = true}, SHIFT(116),
  [404] = {.count = 1, .reusable = true}, SHIFT(144),
  [406] = {.count = 1, .reusable = true}, SHIFT(147),
  [408] = {.count = 1, .reusable = true}, SHIFT(145),
  [410] = {.count = 1, .reusable = true}, SHIFT(118),
  [412] = {.count = 1, .reusable = true}, SHIFT(150),
  [414] = {.count = 1, .reusable = true}, SHIFT(119),
  [416] = {.count = 1, .reusable = true}, SHIFT(148),
  [418] = {.count = 1, .reusable = true}, SHIFT(151),
  [420] = {.count = 1, .reusable = true}, SHIFT(120),
  [422] = {.count = 1, .reusable = true}, SHIFT(152),
  [424] = {.count = 1, .reusable = true}, SHIFT(153),
  [426] = {.count = 1, .reusable = true}, SHIFT(121),
  [428] = {.count = 1, .reusable = true}, SHIFT(155),
  [430] = {.count = 1, .reusable = true}, SHIFT(156),
  [432] = {.count = 1, .reusable = true}, SHIFT(122),
  [434] = {.count = 1, .reusable = true}, SHIFT(157),
  [436] = {.count = 1, .reusable = true}, SHIFT(123),
  [438] = {.count = 1, .reusable = true}, SHIFT(93),
  [440] = {.count = 1, .reusable = true}, SHIFT(160),
  [442] = {.count = 1, .reusable = false}, SHIFT(160),
  [444] = {.count = 1, .reusable = true}, SHIFT(94),
  [446] = {.count = 1, .reusable = false}, SHIFT(161),
  [448] = {.count = 1, .reusable = true}, SHIFT(96),
  [450] = {.count = 1, .reusable = true}, SHIFT(97),
  [452] = {.count = 1, .reusable = true}, SHIFT(132),
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
