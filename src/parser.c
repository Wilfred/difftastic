#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 184
#define SYMBOL_COUNT 77
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
  sym__eof = 41,
  sym_root = 42,
  sym__newline_or_eof = 43,
  sym_table = 44,
  sym__table_header = 45,
  sym__loose_table_header = 46,
  sym_table_array = 47,
  sym__table_array_header = 48,
  sym__loose_table_array_header = 49,
  sym_pair = 50,
  sym__inline_pair = 51,
  sym__loose_pair = 52,
  sym__pairs = 53,
  sym_key = 54,
  sym_dotted_key = 55,
  sym__quoted_key = 56,
  sym__inline_value = 57,
  sym_string = 58,
  sym__basic_string = 59,
  sym__multiline_basic_string = 60,
  sym__literal_string = 61,
  sym__multiline_literal_string = 62,
  sym_integer = 63,
  sym_float = 64,
  sym_offset_date_time = 65,
  sym_local_date_time = 66,
  sym_local_date = 67,
  sym_array = 68,
  sym_inline_table = 69,
  aux_sym_root_repeat1 = 70,
  aux_sym_root_repeat2 = 71,
  aux_sym__basic_string_repeat1 = 72,
  aux_sym__multiline_basic_string_repeat1 = 73,
  aux_sym__multiline_literal_string_repeat1 = 74,
  aux_sym_array_repeat1 = 75,
  aux_sym_inline_table_repeat1 = 76,
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
  [sym__eof] = "_eof",
  [sym_root] = "root",
  [sym__newline_or_eof] = "_newline_or_eof",
  [sym_table] = "table",
  [sym__table_header] = "_table_header",
  [sym__loose_table_header] = "_loose_table_header",
  [sym_table_array] = "table_array",
  [sym__table_array_header] = "_table_array_header",
  [sym__loose_table_array_header] = "_loose_table_array_header",
  [sym_pair] = "pair",
  [sym__inline_pair] = "_inline_pair",
  [sym__loose_pair] = "_loose_pair",
  [sym__pairs] = "_pairs",
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
  [aux_sym_root_repeat2] = "root_repeat2",
  [aux_sym__basic_string_repeat1] = "_basic_string_repeat1",
  [aux_sym__multiline_basic_string_repeat1] = "_multiline_basic_string_repeat1",
  [aux_sym__multiline_literal_string_repeat1] = "_multiline_literal_string_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
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
  [sym__eof] = {
    .visible = false,
    .named = true,
  },
  [sym_root] = {
    .visible = true,
    .named = true,
  },
  [sym__newline_or_eof] = {
    .visible = false,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym__table_header] = {
    .visible = false,
    .named = true,
  },
  [sym__loose_table_header] = {
    .visible = false,
    .named = true,
  },
  [sym_table_array] = {
    .visible = true,
    .named = true,
  },
  [sym__table_array_header] = {
    .visible = false,
    .named = true,
  },
  [sym__loose_table_array_header] = {
    .visible = false,
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
  [sym__loose_pair] = {
    .visible = false,
    .named = true,
  },
  [sym__pairs] = {
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
  [aux_sym_root_repeat2] = {
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
  [1] = {.lex_state = 2, .external_lex_state = 1},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2, .external_lex_state = 1},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2, .external_lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2, .external_lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2, .external_lex_state = 1},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 2, .external_lex_state = 1},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 2, .external_lex_state = 1},
  [48] = {.lex_state = 2, .external_lex_state = 1},
  [49] = {.lex_state = 5, .external_lex_state = 1},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 12, .external_lex_state = 1},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 2, .external_lex_state = 1},
  [56] = {.lex_state = 2, .external_lex_state = 1},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 2, .external_lex_state = 1},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 2, .external_lex_state = 1},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 2, .external_lex_state = 1},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 12, .external_lex_state = 1},
  [68] = {.lex_state = 2, .external_lex_state = 1},
  [69] = {.lex_state = 2, .external_lex_state = 1},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 12, .external_lex_state = 1},
  [73] = {.lex_state = 2, .external_lex_state = 1},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 2, .external_lex_state = 1},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2, .external_lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 2, .external_lex_state = 1},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 2, .external_lex_state = 1},
  [83] = {.lex_state = 12},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 12},
  [86] = {.lex_state = 2, .external_lex_state = 1},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 2, .external_lex_state = 1},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 2, .external_lex_state = 1},
  [91] = {.lex_state = 12},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 11},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 12},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 2, .external_lex_state = 1},
  [99] = {.lex_state = 12},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 11},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 12},
  [105] = {.lex_state = 2, .external_lex_state = 1},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 2, .external_lex_state = 1},
  [110] = {.lex_state = 11},
  [111] = {.lex_state = 2, .external_lex_state = 1},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 2, .external_lex_state = 1},
  [114] = {.lex_state = 2, .external_lex_state = 1},
  [115] = {.lex_state = 11},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2, .external_lex_state = 1},
  [118] = {.lex_state = 2, .external_lex_state = 1},
  [119] = {.lex_state = 12},
  [120] = {.lex_state = 12},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 12},
  [123] = {.lex_state = 12},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 12},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 12},
  [129] = {.lex_state = 12},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 12},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 12},
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 12},
  [139] = {.lex_state = 12},
  [140] = {.lex_state = 12},
  [141] = {.lex_state = 12},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 12},
  [144] = {.lex_state = 12},
  [145] = {.lex_state = 11},
  [146] = {.lex_state = 11},
  [147] = {.lex_state = 11},
  [148] = {.lex_state = 11},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 16},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 12},
  [153] = {.lex_state = 11},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 11},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 12},
  [163] = {.lex_state = 11},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 11},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 11},
  [170] = {.lex_state = 11},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 11},
  [174] = {.lex_state = 11},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 11},
  [177] = {.lex_state = 11},
  [178] = {.lex_state = 11},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 16},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 12},
  [183] = {.lex_state = 0},
};

enum {
  ts_external_token__eof = 0,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__eof] = sym__eof,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__eof] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
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
    [sym__table_header] = STATE(8),
    [sym__loose_table_header] = STATE(8),
    [sym__inline_pair] = STATE(9),
    [sym__loose_pair] = STATE(10),
    [aux_sym_root_repeat1] = STATE(11),
    [sym_table] = STATE(12),
    [sym__loose_table_array_header] = STATE(13),
    [sym_pair] = STATE(10),
    [sym_dotted_key] = STATE(14),
    [sym__quoted_key] = STATE(5),
    [sym__literal_string] = STATE(5),
    [sym_root] = STATE(15),
    [sym_table_array] = STATE(12),
    [sym__table_array_header] = STATE(13),
    [sym__pairs] = STATE(16),
    [sym_key] = STATE(14),
    [sym__basic_string] = STATE(5),
    [sym__eof] = ACTIONS(5),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(11),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [2] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(19),
  },
  [3] = {
    [sym__quoted_key] = STATE(5),
    [sym__literal_string] = STATE(5),
    [sym_key] = STATE(17),
    [sym__basic_string] = STATE(5),
    [sym_dotted_key] = STATE(17),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym__bare_key] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [4] = {
    [aux_sym__basic_string_repeat1] = STATE(19),
    [anon_sym_DQUOTE2] = ACTIONS(21),
    [sym_escape_sequence] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
    [aux_sym__basic_string_token1] = ACTIONS(27),
  },
  [5] = {
    [anon_sym_EQ] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(29),
    [anon_sym_DOT] = ACTIONS(29),
  },
  [6] = {
    [sym__quoted_key] = STATE(112),
    [sym__literal_string] = STATE(112),
    [sym_key] = STATE(20),
    [sym__basic_string] = STATE(112),
    [sym_dotted_key] = STATE(20),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym__bare_key] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(35),
  },
  [7] = {
    [anon_sym_SQUOTE2] = ACTIONS(37),
    [aux_sym__literal_string_token1] = ACTIONS(39),
    [sym_comment] = ACTIONS(25),
  },
  [8] = {
    [sym__quoted_key] = STATE(5),
    [sym__literal_string] = STATE(5),
    [sym__inline_pair] = STATE(9),
    [sym__loose_pair] = STATE(24),
    [sym__pairs] = STATE(25),
    [sym_key] = STATE(14),
    [sym__basic_string] = STATE(5),
    [sym_pair] = STATE(24),
    [sym_dotted_key] = STATE(14),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(43),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [9] = {
    [sym__newline_or_eof] = STATE(26),
    [sym__eof] = ACTIONS(47),
    [sym__newline] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__table_header] = STATE(8),
    [sym__loose_table_header] = STATE(8),
    [sym__inline_pair] = STATE(9),
    [sym__loose_pair] = STATE(28),
    [sym_table] = STATE(29),
    [sym__loose_table_array_header] = STATE(13),
    [sym_pair] = STATE(28),
    [sym_dotted_key] = STATE(14),
    [sym__quoted_key] = STATE(5),
    [sym__literal_string] = STATE(5),
    [sym_table_array] = STATE(29),
    [sym__table_array_header] = STATE(13),
    [sym_key] = STATE(14),
    [sym__basic_string] = STATE(5),
    [aux_sym_root_repeat2] = STATE(29),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(49),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [11] = {
    [sym__table_header] = STATE(8),
    [sym__loose_table_header] = STATE(8),
    [sym__inline_pair] = STATE(9),
    [sym__loose_pair] = STATE(31),
    [aux_sym_root_repeat1] = STATE(32),
    [sym_table] = STATE(33),
    [sym__loose_table_array_header] = STATE(13),
    [sym_pair] = STATE(31),
    [sym_dotted_key] = STATE(14),
    [sym__quoted_key] = STATE(5),
    [sym__literal_string] = STATE(5),
    [sym_table_array] = STATE(33),
    [sym__table_array_header] = STATE(13),
    [sym__pairs] = STATE(34),
    [sym_key] = STATE(14),
    [sym__basic_string] = STATE(5),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym__eof] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(53),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [12] = {
    [sym__table_array_header] = STATE(13),
    [sym__table_header] = STATE(8),
    [sym__loose_table_header] = STATE(8),
    [sym_table_array] = STATE(29),
    [sym_table] = STATE(29),
    [sym__loose_table_array_header] = STATE(13),
    [aux_sym_root_repeat2] = STATE(29),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [13] = {
    [sym__quoted_key] = STATE(5),
    [sym__literal_string] = STATE(5),
    [sym__inline_pair] = STATE(9),
    [sym__loose_pair] = STATE(36),
    [sym__pairs] = STATE(37),
    [sym_key] = STATE(14),
    [sym__basic_string] = STATE(5),
    [sym_pair] = STATE(36),
    [sym_dotted_key] = STATE(14),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(57),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [14] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(63),
  },
  [15] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(65),
  },
  [16] = {
    [sym__table_header] = STATE(8),
    [sym__loose_table_header] = STATE(8),
    [sym__inline_pair] = STATE(9),
    [sym__loose_pair] = STATE(28),
    [sym_table] = STATE(29),
    [sym__loose_table_array_header] = STATE(13),
    [sym_pair] = STATE(28),
    [sym_dotted_key] = STATE(14),
    [sym__quoted_key] = STATE(5),
    [sym__literal_string] = STATE(5),
    [sym_table_array] = STATE(29),
    [sym__table_array_header] = STATE(13),
    [sym_key] = STATE(14),
    [sym__basic_string] = STATE(5),
    [aux_sym_root_repeat2] = STATE(29),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym__bare_key] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [17] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(67),
    [anon_sym_DOT] = ACTIONS(63),
  },
  [18] = {
    [anon_sym_RBRACE] = ACTIONS(69),
    [anon_sym_EQ] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(69),
  },
  [19] = {
    [aux_sym__basic_string_repeat1] = STATE(42),
    [anon_sym_DQUOTE2] = ACTIONS(71),
    [sym_escape_sequence] = ACTIONS(73),
    [sym_comment] = ACTIONS(25),
    [aux_sym__basic_string_token1] = ACTIONS(75),
  },
  [20] = {
    [anon_sym_DOT] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(79),
  },
  [21] = {
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_EQ] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_DOT] = ACTIONS(81),
  },
  [22] = {
    [anon_sym_SQUOTE2] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [anon_sym_LBRACK_LBRACK] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [ts_builtin_sym_end] = ACTIONS(85),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(85),
    [sym__bare_key] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(85),
  },
  [24] = {
    [sym__quoted_key] = STATE(5),
    [sym__literal_string] = STATE(5),
    [sym__inline_pair] = STATE(9),
    [sym__loose_pair] = STATE(28),
    [sym_key] = STATE(14),
    [sym__basic_string] = STATE(5),
    [sym_pair] = STATE(28),
    [sym_dotted_key] = STATE(14),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(49),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [25] = {
    [sym__quoted_key] = STATE(5),
    [sym__literal_string] = STATE(5),
    [sym__inline_pair] = STATE(9),
    [sym__loose_pair] = STATE(28),
    [sym_key] = STATE(14),
    [sym__basic_string] = STATE(5),
    [sym_pair] = STATE(28),
    [sym_dotted_key] = STATE(14),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym__bare_key] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [26] = {
    [anon_sym_LBRACK_LBRACK] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(93),
    [sym__bare_key] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(93),
  },
  [27] = {
    [anon_sym_LBRACK_LBRACK] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [ts_builtin_sym_end] = ACTIONS(97),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(97),
    [sym__bare_key] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(97),
  },
  [28] = {
    [anon_sym_LBRACK_LBRACK] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [ts_builtin_sym_end] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(49),
    [sym__bare_key] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(101),
  },
  [29] = {
    [sym__table_array_header] = STATE(13),
    [sym__table_header] = STATE(8),
    [sym__loose_table_header] = STATE(8),
    [sym_table_array] = STATE(45),
    [sym_table] = STATE(45),
    [sym__loose_table_array_header] = STATE(13),
    [aux_sym_root_repeat2] = STATE(45),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [30] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(105),
  },
  [31] = {
    [sym__table_header] = STATE(8),
    [sym__loose_table_header] = STATE(8),
    [sym__inline_pair] = STATE(9),
    [sym__loose_pair] = STATE(28),
    [sym_table] = STATE(46),
    [sym__loose_table_array_header] = STATE(13),
    [sym_pair] = STATE(28),
    [sym_dotted_key] = STATE(14),
    [sym__quoted_key] = STATE(5),
    [sym__literal_string] = STATE(5),
    [sym_table_array] = STATE(46),
    [sym__table_array_header] = STATE(13),
    [sym_key] = STATE(14),
    [sym__basic_string] = STATE(5),
    [aux_sym_root_repeat2] = STATE(46),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(49),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [32] = {
    [aux_sym_root_repeat1] = STATE(32),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym__eof] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(109),
    [sym__bare_key] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_SQUOTE] = ACTIONS(107),
  },
  [33] = {
    [sym__table_array_header] = STATE(13),
    [sym__table_header] = STATE(8),
    [sym__loose_table_header] = STATE(8),
    [sym_table_array] = STATE(46),
    [sym_table] = STATE(46),
    [sym__loose_table_array_header] = STATE(13),
    [aux_sym_root_repeat2] = STATE(46),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [34] = {
    [sym__table_header] = STATE(8),
    [sym__loose_table_header] = STATE(8),
    [sym__inline_pair] = STATE(9),
    [sym__loose_pair] = STATE(28),
    [sym_table] = STATE(46),
    [sym__loose_table_array_header] = STATE(13),
    [sym_pair] = STATE(28),
    [sym_dotted_key] = STATE(14),
    [sym__quoted_key] = STATE(5),
    [sym__literal_string] = STATE(5),
    [sym_table_array] = STATE(46),
    [sym__table_array_header] = STATE(13),
    [sym_key] = STATE(14),
    [sym__basic_string] = STATE(5),
    [aux_sym_root_repeat2] = STATE(46),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(105),
    [sym__bare_key] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [35] = {
    [anon_sym_LBRACK_LBRACK] = ACTIONS(114),
    [anon_sym_DQUOTE] = ACTIONS(114),
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(114),
    [sym__bare_key] = ACTIONS(114),
    [anon_sym_LBRACK] = ACTIONS(116),
    [anon_sym_SQUOTE] = ACTIONS(114),
  },
  [36] = {
    [sym__quoted_key] = STATE(5),
    [sym__literal_string] = STATE(5),
    [sym__inline_pair] = STATE(9),
    [sym__loose_pair] = STATE(28),
    [sym_key] = STATE(14),
    [sym__basic_string] = STATE(5),
    [sym_pair] = STATE(28),
    [sym_dotted_key] = STATE(14),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(118),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(118),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(49),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [37] = {
    [sym__quoted_key] = STATE(5),
    [sym__literal_string] = STATE(5),
    [sym__inline_pair] = STATE(9),
    [sym__loose_pair] = STATE(28),
    [sym_key] = STATE(14),
    [sym__basic_string] = STATE(5),
    [sym_pair] = STATE(28),
    [sym_dotted_key] = STATE(14),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(118),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(118),
    [sym__bare_key] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [38] = {
    [sym__literal_string] = STATE(55),
    [sym__multiline_literal_string] = STATE(55),
    [sym_local_date] = STATE(56),
    [sym_array] = STATE(56),
    [sym__inline_value] = STATE(56),
    [sym_string] = STATE(56),
    [sym_integer] = STATE(56),
    [sym_float] = STATE(56),
    [sym_inline_table] = STATE(56),
    [sym__basic_string] = STATE(55),
    [sym__multiline_basic_string] = STATE(55),
    [sym_offset_date_time] = STATE(56),
    [sym_local_date_time] = STATE(56),
    [anon_sym_DQUOTE] = ACTIONS(122),
    [aux_sym_offset_date_time_token1] = ACTIONS(124),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(126),
    [sym_boolean] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(130),
    [sym_local_time] = ACTIONS(128),
    [aux_sym_integer_token2] = ACTIONS(126),
    [aux_sym_float_token3] = ACTIONS(132),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(134),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(138),
    [aux_sym_integer_token4] = ACTIONS(126),
    [aux_sym_integer_token1] = ACTIONS(140),
    [anon_sym_SQUOTE] = ACTIONS(142),
  },
  [39] = {
    [sym__quoted_key] = STATE(5),
    [sym__literal_string] = STATE(5),
    [sym_key] = STATE(57),
    [sym__basic_string] = STATE(5),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym__bare_key] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [40] = {
    [sym__newline_or_eof] = STATE(58),
    [sym__eof] = ACTIONS(144),
    [sym__newline] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [anon_sym_RBRACE] = ACTIONS(146),
    [anon_sym_EQ] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(146),
    [anon_sym_COMMA] = ACTIONS(146),
    [anon_sym_DOT] = ACTIONS(146),
  },
  [42] = {
    [aux_sym__basic_string_repeat1] = STATE(42),
    [anon_sym_DQUOTE2] = ACTIONS(148),
    [sym_escape_sequence] = ACTIONS(150),
    [sym_comment] = ACTIONS(25),
    [aux_sym__basic_string_token1] = ACTIONS(153),
  },
  [43] = {
    [sym__newline_or_eof] = STATE(59),
    [sym__eof] = ACTIONS(156),
    [sym__newline] = ACTIONS(156),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [anon_sym_RBRACE] = ACTIONS(158),
    [anon_sym_EQ] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(158),
    [anon_sym_COMMA] = ACTIONS(158),
    [anon_sym_DOT] = ACTIONS(158),
  },
  [45] = {
    [sym__table_array_header] = STATE(13),
    [sym__table_header] = STATE(8),
    [sym__loose_table_header] = STATE(8),
    [sym_table_array] = STATE(45),
    [sym_table] = STATE(45),
    [sym__loose_table_array_header] = STATE(13),
    [aux_sym_root_repeat2] = STATE(45),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(160),
    [ts_builtin_sym_end] = ACTIONS(163),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(165),
  },
  [46] = {
    [sym__table_array_header] = STATE(13),
    [sym__table_header] = STATE(8),
    [sym__loose_table_header] = STATE(8),
    [sym_table_array] = STATE(45),
    [sym_table] = STATE(45),
    [sym__loose_table_array_header] = STATE(13),
    [aux_sym_root_repeat2] = STATE(45),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(168),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [47] = {
    [sym__eof] = ACTIONS(170),
    [sym__newline] = ACTIONS(170),
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [sym__eof] = ACTIONS(172),
    [sym__newline] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
  },
  [49] = {
    [sym__eof] = ACTIONS(174),
    [sym__newline] = ACTIONS(176),
    [aux_sym_offset_date_time_token2] = ACTIONS(178),
    [sym_comment] = ACTIONS(25),
  },
  [50] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(62),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(180),
    [aux_sym__literal_string_token1] = ACTIONS(180),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(182),
    [sym_comment] = ACTIONS(25),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(184),
  },
  [51] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(64),
    [sym_comment] = ACTIONS(25),
    [sym__escape_line_ending] = ACTIONS(186),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(186),
    [sym_escape_sequence] = ACTIONS(186),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(188),
    [aux_sym__basic_string_token1] = ACTIONS(188),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(190),
  },
  [52] = {
    [sym__quoted_key] = STATE(5),
    [sym__literal_string] = STATE(5),
    [sym_key] = STATE(183),
    [sym__basic_string] = STATE(5),
    [sym__inline_pair] = STATE(66),
    [sym_dotted_key] = STATE(183),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym__bare_key] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(192),
  },
  [53] = {
    [sym__eof] = ACTIONS(170),
    [sym__newline] = ACTIONS(170),
    [aux_sym_float_token1] = ACTIONS(194),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_token2] = ACTIONS(196),
  },
  [54] = {
    [sym__literal_string] = STATE(123),
    [sym__multiline_literal_string] = STATE(123),
    [sym_local_date] = STATE(70),
    [sym_array] = STATE(70),
    [sym__inline_value] = STATE(70),
    [sym_string] = STATE(70),
    [sym_integer] = STATE(70),
    [sym_float] = STATE(70),
    [sym_inline_table] = STATE(70),
    [aux_sym_root_repeat1] = STATE(71),
    [sym__basic_string] = STATE(123),
    [sym__multiline_basic_string] = STATE(123),
    [sym_offset_date_time] = STATE(70),
    [sym_local_date_time] = STATE(70),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(200),
    [aux_sym_offset_date_time_token1] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(204),
    [sym_boolean] = ACTIONS(206),
    [anon_sym_LBRACK] = ACTIONS(208),
    [sym_local_time] = ACTIONS(206),
    [aux_sym_integer_token2] = ACTIONS(204),
    [aux_sym_float_token3] = ACTIONS(210),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(212),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(214),
    [sym__newline] = ACTIONS(216),
    [anon_sym_LBRACE] = ACTIONS(218),
    [aux_sym_integer_token4] = ACTIONS(204),
    [aux_sym_integer_token1] = ACTIONS(220),
    [anon_sym_SQUOTE] = ACTIONS(222),
  },
  [55] = {
    [sym__eof] = ACTIONS(224),
    [sym__newline] = ACTIONS(224),
    [sym_comment] = ACTIONS(3),
  },
  [56] = {
    [sym__eof] = ACTIONS(226),
    [sym__newline] = ACTIONS(226),
    [sym_comment] = ACTIONS(3),
  },
  [57] = {
    [anon_sym_EQ] = ACTIONS(228),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(228),
    [anon_sym_DOT] = ACTIONS(228),
  },
  [58] = {
    [anon_sym_LBRACK_LBRACK] = ACTIONS(230),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [ts_builtin_sym_end] = ACTIONS(230),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(230),
    [sym__bare_key] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_SQUOTE] = ACTIONS(230),
  },
  [59] = {
    [anon_sym_LBRACK_LBRACK] = ACTIONS(234),
    [anon_sym_DQUOTE] = ACTIONS(234),
    [ts_builtin_sym_end] = ACTIONS(234),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(234),
    [sym__bare_key] = ACTIONS(234),
    [anon_sym_LBRACK] = ACTIONS(236),
    [anon_sym_SQUOTE] = ACTIONS(234),
  },
  [60] = {
    [sym_comment] = ACTIONS(3),
    [aux_sym_offset_date_time_token3] = ACTIONS(238),
  },
  [61] = {
    [sym__eof] = ACTIONS(240),
    [sym__newline] = ACTIONS(240),
    [sym_comment] = ACTIONS(3),
  },
  [62] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(74),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(242),
    [aux_sym__literal_string_token1] = ACTIONS(242),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(244),
    [sym_comment] = ACTIONS(25),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(246),
  },
  [63] = {
    [sym__eof] = ACTIONS(248),
    [sym__newline] = ACTIONS(248),
    [sym_comment] = ACTIONS(3),
  },
  [64] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(76),
    [sym_comment] = ACTIONS(25),
    [sym__escape_line_ending] = ACTIONS(250),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(250),
    [sym_escape_sequence] = ACTIONS(250),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(252),
    [aux_sym__basic_string_token1] = ACTIONS(252),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(254),
  },
  [65] = {
    [sym__eof] = ACTIONS(256),
    [sym__newline] = ACTIONS(256),
    [sym_comment] = ACTIONS(3),
  },
  [66] = {
    [aux_sym_inline_table_repeat1] = STATE(79),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(260),
  },
  [67] = {
    [sym__eof] = ACTIONS(262),
    [sym__newline] = ACTIONS(262),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_token2] = ACTIONS(264),
  },
  [68] = {
    [sym__eof] = ACTIONS(262),
    [sym__newline] = ACTIONS(262),
    [sym_comment] = ACTIONS(3),
  },
  [69] = {
    [sym__eof] = ACTIONS(266),
    [sym__newline] = ACTIONS(266),
    [sym_comment] = ACTIONS(3),
  },
  [70] = {
    [aux_sym_root_repeat1] = STATE(83),
    [aux_sym_array_repeat1] = STATE(84),
    [sym__newline] = ACTIONS(268),
    [anon_sym_RBRACK] = ACTIONS(270),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(272),
  },
  [71] = {
    [sym__literal_string] = STATE(123),
    [sym__multiline_literal_string] = STATE(123),
    [sym_local_date] = STATE(85),
    [sym_array] = STATE(85),
    [sym__inline_value] = STATE(85),
    [sym_string] = STATE(85),
    [sym_integer] = STATE(85),
    [sym_float] = STATE(85),
    [sym_inline_table] = STATE(85),
    [aux_sym_root_repeat1] = STATE(115),
    [sym__basic_string] = STATE(123),
    [sym__multiline_basic_string] = STATE(123),
    [sym_offset_date_time] = STATE(85),
    [sym_local_date_time] = STATE(85),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(270),
    [aux_sym_offset_date_time_token1] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(204),
    [sym_boolean] = ACTIONS(274),
    [anon_sym_LBRACK] = ACTIONS(208),
    [sym_local_time] = ACTIONS(274),
    [aux_sym_integer_token2] = ACTIONS(204),
    [aux_sym_float_token3] = ACTIONS(210),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(212),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(214),
    [sym__newline] = ACTIONS(276),
    [anon_sym_LBRACE] = ACTIONS(218),
    [aux_sym_integer_token4] = ACTIONS(204),
    [aux_sym_integer_token1] = ACTIONS(220),
    [anon_sym_SQUOTE] = ACTIONS(222),
  },
  [72] = {
    [sym__eof] = ACTIONS(278),
    [sym__newline] = ACTIONS(278),
    [aux_sym_offset_date_time_token4] = ACTIONS(280),
    [sym_comment] = ACTIONS(3),
  },
  [73] = {
    [sym__eof] = ACTIONS(282),
    [sym__newline] = ACTIONS(282),
    [sym_comment] = ACTIONS(3),
  },
  [74] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(74),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(284),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(287),
    [aux_sym__literal_string_token1] = ACTIONS(284),
    [sym_comment] = ACTIONS(25),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(290),
  },
  [75] = {
    [sym__eof] = ACTIONS(292),
    [sym__newline] = ACTIONS(292),
    [sym_comment] = ACTIONS(3),
  },
  [76] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(76),
    [sym_comment] = ACTIONS(25),
    [sym__escape_line_ending] = ACTIONS(294),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(294),
    [sym_escape_sequence] = ACTIONS(294),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(297),
    [aux_sym__basic_string_token1] = ACTIONS(297),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(300),
  },
  [77] = {
    [sym__quoted_key] = STATE(5),
    [sym__literal_string] = STATE(5),
    [sym_key] = STATE(183),
    [sym__basic_string] = STATE(5),
    [sym__inline_pair] = STATE(87),
    [sym_dotted_key] = STATE(183),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym__bare_key] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [78] = {
    [sym__eof] = ACTIONS(302),
    [sym__newline] = ACTIONS(302),
    [sym_comment] = ACTIONS(3),
  },
  [79] = {
    [aux_sym_inline_table_repeat1] = STATE(89),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(304),
  },
  [80] = {
    [sym__eof] = ACTIONS(306),
    [sym__newline] = ACTIONS(306),
    [sym_comment] = ACTIONS(3),
  },
  [81] = {
    [sym__literal_string] = STATE(123),
    [sym__multiline_literal_string] = STATE(123),
    [sym_local_date] = STATE(91),
    [sym_array] = STATE(91),
    [sym__inline_value] = STATE(91),
    [sym_string] = STATE(91),
    [sym_integer] = STATE(91),
    [sym_float] = STATE(91),
    [sym_inline_table] = STATE(91),
    [aux_sym_root_repeat1] = STATE(92),
    [sym__basic_string] = STATE(123),
    [sym__multiline_basic_string] = STATE(123),
    [sym_offset_date_time] = STATE(91),
    [sym_local_date_time] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(308),
    [aux_sym_offset_date_time_token1] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(204),
    [sym_boolean] = ACTIONS(310),
    [anon_sym_LBRACK] = ACTIONS(208),
    [sym_local_time] = ACTIONS(310),
    [aux_sym_integer_token2] = ACTIONS(204),
    [aux_sym_float_token3] = ACTIONS(210),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(212),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(214),
    [sym__newline] = ACTIONS(312),
    [anon_sym_LBRACE] = ACTIONS(218),
    [aux_sym_integer_token4] = ACTIONS(204),
    [aux_sym_integer_token1] = ACTIONS(220),
    [anon_sym_SQUOTE] = ACTIONS(222),
  },
  [82] = {
    [sym__eof] = ACTIONS(314),
    [sym__newline] = ACTIONS(314),
    [sym_comment] = ACTIONS(3),
  },
  [83] = {
    [aux_sym_root_repeat1] = STATE(115),
    [aux_sym_array_repeat1] = STATE(94),
    [sym__newline] = ACTIONS(276),
    [anon_sym_RBRACK] = ACTIONS(308),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(316),
  },
  [84] = {
    [aux_sym_array_repeat1] = STATE(95),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(316),
    [anon_sym_RBRACK] = ACTIONS(308),
  },
  [85] = {
    [aux_sym_root_repeat1] = STATE(96),
    [aux_sym_array_repeat1] = STATE(94),
    [sym__newline] = ACTIONS(318),
    [anon_sym_RBRACK] = ACTIONS(308),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(316),
  },
  [86] = {
    [sym__eof] = ACTIONS(320),
    [sym__newline] = ACTIONS(320),
    [sym_comment] = ACTIONS(3),
  },
  [87] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(322),
    [anon_sym_RBRACE] = ACTIONS(322),
  },
  [88] = {
    [sym__eof] = ACTIONS(324),
    [sym__newline] = ACTIONS(324),
    [sym_comment] = ACTIONS(3),
  },
  [89] = {
    [aux_sym_inline_table_repeat1] = STATE(89),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(326),
    [anon_sym_RBRACE] = ACTIONS(329),
  },
  [90] = {
    [sym__eof] = ACTIONS(331),
    [sym__newline] = ACTIONS(331),
    [sym_comment] = ACTIONS(3),
  },
  [91] = {
    [aux_sym_root_repeat1] = STATE(97),
    [sym__newline] = ACTIONS(333),
    [anon_sym_RBRACK] = ACTIONS(335),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(335),
  },
  [92] = {
    [sym__literal_string] = STATE(123),
    [sym__multiline_literal_string] = STATE(123),
    [sym_local_date] = STATE(99),
    [sym_array] = STATE(99),
    [sym__inline_value] = STATE(99),
    [sym_string] = STATE(99),
    [sym_integer] = STATE(99),
    [sym_float] = STATE(99),
    [sym_inline_table] = STATE(99),
    [aux_sym_root_repeat1] = STATE(115),
    [sym__basic_string] = STATE(123),
    [sym__multiline_basic_string] = STATE(123),
    [sym_offset_date_time] = STATE(99),
    [sym_local_date_time] = STATE(99),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(337),
    [aux_sym_offset_date_time_token1] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(204),
    [sym_boolean] = ACTIONS(339),
    [anon_sym_LBRACK] = ACTIONS(208),
    [sym_local_time] = ACTIONS(339),
    [aux_sym_integer_token2] = ACTIONS(204),
    [aux_sym_float_token3] = ACTIONS(210),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(212),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(214),
    [sym__newline] = ACTIONS(276),
    [anon_sym_LBRACE] = ACTIONS(218),
    [aux_sym_integer_token4] = ACTIONS(204),
    [aux_sym_integer_token1] = ACTIONS(220),
    [anon_sym_SQUOTE] = ACTIONS(222),
  },
  [93] = {
    [sym__literal_string] = STATE(123),
    [sym__multiline_literal_string] = STATE(123),
    [sym_local_date] = STATE(91),
    [sym_array] = STATE(91),
    [sym__inline_value] = STATE(91),
    [sym_string] = STATE(91),
    [sym_integer] = STATE(91),
    [sym_float] = STATE(91),
    [sym_inline_table] = STATE(91),
    [aux_sym_root_repeat1] = STATE(100),
    [sym__basic_string] = STATE(123),
    [sym__multiline_basic_string] = STATE(123),
    [sym_offset_date_time] = STATE(91),
    [sym_local_date_time] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(337),
    [aux_sym_offset_date_time_token1] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(204),
    [sym_boolean] = ACTIONS(310),
    [anon_sym_LBRACK] = ACTIONS(208),
    [sym_local_time] = ACTIONS(310),
    [aux_sym_integer_token2] = ACTIONS(204),
    [aux_sym_float_token3] = ACTIONS(210),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(212),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(214),
    [sym__newline] = ACTIONS(341),
    [anon_sym_LBRACE] = ACTIONS(218),
    [aux_sym_integer_token4] = ACTIONS(204),
    [aux_sym_integer_token1] = ACTIONS(220),
    [anon_sym_SQUOTE] = ACTIONS(222),
  },
  [94] = {
    [aux_sym_array_repeat1] = STATE(95),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(343),
    [anon_sym_RBRACK] = ACTIONS(337),
  },
  [95] = {
    [aux_sym_array_repeat1] = STATE(95),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(345),
    [anon_sym_RBRACK] = ACTIONS(335),
  },
  [96] = {
    [aux_sym_root_repeat1] = STATE(115),
    [aux_sym_array_repeat1] = STATE(103),
    [sym__newline] = ACTIONS(276),
    [anon_sym_RBRACK] = ACTIONS(337),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(343),
  },
  [97] = {
    [aux_sym_root_repeat1] = STATE(115),
    [sym__newline] = ACTIONS(276),
    [anon_sym_RBRACK] = ACTIONS(348),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(348),
  },
  [98] = {
    [sym__eof] = ACTIONS(350),
    [sym__newline] = ACTIONS(350),
    [sym_comment] = ACTIONS(3),
  },
  [99] = {
    [aux_sym_root_repeat1] = STATE(104),
    [sym__newline] = ACTIONS(352),
    [anon_sym_RBRACK] = ACTIONS(348),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(348),
  },
  [100] = {
    [sym__literal_string] = STATE(123),
    [sym__multiline_literal_string] = STATE(123),
    [sym_local_date] = STATE(99),
    [sym_array] = STATE(99),
    [sym__inline_value] = STATE(99),
    [sym_string] = STATE(99),
    [sym_integer] = STATE(99),
    [sym_float] = STATE(99),
    [sym_inline_table] = STATE(99),
    [aux_sym_root_repeat1] = STATE(115),
    [sym__basic_string] = STATE(123),
    [sym__multiline_basic_string] = STATE(123),
    [sym_offset_date_time] = STATE(99),
    [sym_local_date_time] = STATE(99),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(354),
    [aux_sym_offset_date_time_token1] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(204),
    [sym_boolean] = ACTIONS(339),
    [anon_sym_LBRACK] = ACTIONS(208),
    [sym_local_time] = ACTIONS(339),
    [aux_sym_integer_token2] = ACTIONS(204),
    [aux_sym_float_token3] = ACTIONS(210),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(212),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(214),
    [sym__newline] = ACTIONS(276),
    [anon_sym_LBRACE] = ACTIONS(218),
    [aux_sym_integer_token4] = ACTIONS(204),
    [aux_sym_integer_token1] = ACTIONS(220),
    [anon_sym_SQUOTE] = ACTIONS(222),
  },
  [101] = {
    [sym__literal_string] = STATE(123),
    [sym__multiline_literal_string] = STATE(123),
    [sym_local_date] = STATE(91),
    [sym_array] = STATE(91),
    [sym__inline_value] = STATE(91),
    [sym_string] = STATE(91),
    [sym_integer] = STATE(91),
    [sym_float] = STATE(91),
    [sym_inline_table] = STATE(91),
    [aux_sym_root_repeat1] = STATE(106),
    [sym__basic_string] = STATE(123),
    [sym__multiline_basic_string] = STATE(123),
    [sym_offset_date_time] = STATE(91),
    [sym_local_date_time] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(354),
    [aux_sym_offset_date_time_token1] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(204),
    [sym_boolean] = ACTIONS(310),
    [anon_sym_LBRACK] = ACTIONS(208),
    [sym_local_time] = ACTIONS(310),
    [aux_sym_integer_token2] = ACTIONS(204),
    [aux_sym_float_token3] = ACTIONS(210),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(212),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(214),
    [sym__newline] = ACTIONS(356),
    [anon_sym_LBRACE] = ACTIONS(218),
    [aux_sym_integer_token4] = ACTIONS(204),
    [aux_sym_integer_token1] = ACTIONS(220),
    [anon_sym_SQUOTE] = ACTIONS(222),
  },
  [102] = {
    [sym__literal_string] = STATE(123),
    [sym__multiline_literal_string] = STATE(123),
    [sym_local_date] = STATE(91),
    [sym_array] = STATE(91),
    [sym__inline_value] = STATE(91),
    [sym_string] = STATE(91),
    [sym_integer] = STATE(91),
    [sym_float] = STATE(91),
    [sym_inline_table] = STATE(91),
    [aux_sym_root_repeat1] = STATE(107),
    [sym__basic_string] = STATE(123),
    [sym__multiline_basic_string] = STATE(123),
    [sym_offset_date_time] = STATE(91),
    [sym_local_date_time] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [aux_sym_offset_date_time_token1] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(204),
    [sym_boolean] = ACTIONS(310),
    [anon_sym_LBRACK] = ACTIONS(208),
    [sym_local_time] = ACTIONS(310),
    [aux_sym_integer_token2] = ACTIONS(204),
    [aux_sym_float_token3] = ACTIONS(210),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(212),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(214),
    [sym__newline] = ACTIONS(358),
    [anon_sym_LBRACE] = ACTIONS(218),
    [aux_sym_integer_token4] = ACTIONS(204),
    [aux_sym_integer_token1] = ACTIONS(220),
    [anon_sym_SQUOTE] = ACTIONS(222),
  },
  [103] = {
    [aux_sym_array_repeat1] = STATE(95),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(360),
    [anon_sym_RBRACK] = ACTIONS(354),
  },
  [104] = {
    [aux_sym_root_repeat1] = STATE(115),
    [sym__newline] = ACTIONS(276),
    [anon_sym_RBRACK] = ACTIONS(362),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(362),
  },
  [105] = {
    [sym__eof] = ACTIONS(364),
    [sym__newline] = ACTIONS(364),
    [sym_comment] = ACTIONS(3),
  },
  [106] = {
    [sym__literal_string] = STATE(123),
    [sym__multiline_literal_string] = STATE(123),
    [sym_local_date] = STATE(99),
    [sym_array] = STATE(99),
    [sym__inline_value] = STATE(99),
    [sym_string] = STATE(99),
    [sym_integer] = STATE(99),
    [sym_float] = STATE(99),
    [sym_inline_table] = STATE(99),
    [aux_sym_root_repeat1] = STATE(115),
    [sym__basic_string] = STATE(123),
    [sym__multiline_basic_string] = STATE(123),
    [sym_offset_date_time] = STATE(99),
    [sym_local_date_time] = STATE(99),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(366),
    [aux_sym_offset_date_time_token1] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(204),
    [sym_boolean] = ACTIONS(339),
    [anon_sym_LBRACK] = ACTIONS(208),
    [sym_local_time] = ACTIONS(339),
    [aux_sym_integer_token2] = ACTIONS(204),
    [aux_sym_float_token3] = ACTIONS(210),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(212),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(214),
    [sym__newline] = ACTIONS(276),
    [anon_sym_LBRACE] = ACTIONS(218),
    [aux_sym_integer_token4] = ACTIONS(204),
    [aux_sym_integer_token1] = ACTIONS(220),
    [anon_sym_SQUOTE] = ACTIONS(222),
  },
  [107] = {
    [sym__literal_string] = STATE(123),
    [sym__multiline_literal_string] = STATE(123),
    [sym_local_date] = STATE(99),
    [sym_array] = STATE(99),
    [sym__inline_value] = STATE(99),
    [sym_string] = STATE(99),
    [sym_integer] = STATE(99),
    [sym_float] = STATE(99),
    [sym_inline_table] = STATE(99),
    [aux_sym_root_repeat1] = STATE(115),
    [sym__basic_string] = STATE(123),
    [sym__multiline_basic_string] = STATE(123),
    [sym_offset_date_time] = STATE(99),
    [sym_local_date_time] = STATE(99),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [aux_sym_offset_date_time_token1] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(204),
    [sym_boolean] = ACTIONS(339),
    [anon_sym_LBRACK] = ACTIONS(208),
    [sym_local_time] = ACTIONS(339),
    [aux_sym_integer_token2] = ACTIONS(204),
    [aux_sym_float_token3] = ACTIONS(210),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(212),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(214),
    [sym__newline] = ACTIONS(276),
    [anon_sym_LBRACE] = ACTIONS(218),
    [aux_sym_integer_token4] = ACTIONS(204),
    [aux_sym_integer_token1] = ACTIONS(220),
    [anon_sym_SQUOTE] = ACTIONS(222),
  },
  [108] = {
    [sym__literal_string] = STATE(123),
    [sym__multiline_literal_string] = STATE(123),
    [sym_local_date] = STATE(91),
    [sym_array] = STATE(91),
    [sym__inline_value] = STATE(91),
    [sym_string] = STATE(91),
    [sym_integer] = STATE(91),
    [sym_float] = STATE(91),
    [sym_inline_table] = STATE(91),
    [aux_sym_root_repeat1] = STATE(110),
    [sym__basic_string] = STATE(123),
    [sym__multiline_basic_string] = STATE(123),
    [sym_offset_date_time] = STATE(91),
    [sym_local_date_time] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(366),
    [aux_sym_offset_date_time_token1] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(204),
    [sym_boolean] = ACTIONS(310),
    [anon_sym_LBRACK] = ACTIONS(208),
    [sym_local_time] = ACTIONS(310),
    [aux_sym_integer_token2] = ACTIONS(204),
    [aux_sym_float_token3] = ACTIONS(210),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(212),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(214),
    [sym__newline] = ACTIONS(368),
    [anon_sym_LBRACE] = ACTIONS(218),
    [aux_sym_integer_token4] = ACTIONS(204),
    [aux_sym_integer_token1] = ACTIONS(220),
    [anon_sym_SQUOTE] = ACTIONS(222),
  },
  [109] = {
    [sym__eof] = ACTIONS(370),
    [sym__newline] = ACTIONS(370),
    [sym_comment] = ACTIONS(3),
  },
  [110] = {
    [sym__literal_string] = STATE(123),
    [sym__multiline_literal_string] = STATE(123),
    [sym_local_date] = STATE(99),
    [sym_array] = STATE(99),
    [sym__inline_value] = STATE(99),
    [sym_string] = STATE(99),
    [sym_integer] = STATE(99),
    [sym_float] = STATE(99),
    [sym_inline_table] = STATE(99),
    [aux_sym_root_repeat1] = STATE(115),
    [sym__basic_string] = STATE(123),
    [sym__multiline_basic_string] = STATE(123),
    [sym_offset_date_time] = STATE(99),
    [sym_local_date_time] = STATE(99),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(372),
    [aux_sym_offset_date_time_token1] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(204),
    [sym_boolean] = ACTIONS(339),
    [anon_sym_LBRACK] = ACTIONS(208),
    [sym_local_time] = ACTIONS(339),
    [aux_sym_integer_token2] = ACTIONS(204),
    [aux_sym_float_token3] = ACTIONS(210),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(212),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(214),
    [sym__newline] = ACTIONS(276),
    [anon_sym_LBRACE] = ACTIONS(218),
    [aux_sym_integer_token4] = ACTIONS(204),
    [aux_sym_integer_token1] = ACTIONS(220),
    [anon_sym_SQUOTE] = ACTIONS(222),
  },
  [111] = {
    [sym__eof] = ACTIONS(374),
    [sym__newline] = ACTIONS(374),
    [sym_comment] = ACTIONS(3),
  },
  [112] = {
    [anon_sym_DOT] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(29),
  },
  [113] = {
    [sym__eof] = ACTIONS(69),
    [sym__newline] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
  },
  [114] = {
    [sym__eof] = ACTIONS(81),
    [sym__newline] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
  },
  [115] = {
    [aux_sym_root_repeat1] = STATE(115),
    [anon_sym_DQUOTE] = ACTIONS(112),
    [anon_sym_RBRACK] = ACTIONS(107),
    [aux_sym_offset_date_time_token1] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(107),
    [sym_boolean] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(107),
    [sym_local_time] = ACTIONS(107),
    [aux_sym_integer_token2] = ACTIONS(107),
    [aux_sym_float_token3] = ACTIONS(107),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(107),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(107),
    [sym__newline] = ACTIONS(376),
    [anon_sym_LBRACE] = ACTIONS(107),
    [aux_sym_integer_token4] = ACTIONS(107),
    [aux_sym_integer_token1] = ACTIONS(112),
    [anon_sym_SQUOTE] = ACTIONS(112),
  },
  [116] = {
    [sym__quoted_key] = STATE(112),
    [sym__literal_string] = STATE(112),
    [sym_key] = STATE(125),
    [sym__basic_string] = STATE(112),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym__bare_key] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(35),
  },
  [117] = {
    [sym__eof] = ACTIONS(146),
    [sym__newline] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
  },
  [118] = {
    [sym__eof] = ACTIONS(158),
    [sym__newline] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
  },
  [119] = {
    [sym__newline] = ACTIONS(170),
    [anon_sym_RBRACK] = ACTIONS(170),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(170),
    [anon_sym_RBRACE] = ACTIONS(170),
  },
  [120] = {
    [sym__newline] = ACTIONS(172),
    [anon_sym_RBRACK] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(172),
    [anon_sym_RBRACE] = ACTIONS(172),
  },
  [121] = {
    [sym__newline] = ACTIONS(176),
    [aux_sym_offset_date_time_token2] = ACTIONS(379),
    [anon_sym_RBRACK] = ACTIONS(176),
    [sym_comment] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(176),
    [anon_sym_RBRACE] = ACTIONS(176),
  },
  [122] = {
    [anon_sym_RBRACK] = ACTIONS(170),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(170),
    [aux_sym_float_token1] = ACTIONS(381),
    [sym__newline] = ACTIONS(170),
    [aux_sym_float_token2] = ACTIONS(383),
    [anon_sym_RBRACE] = ACTIONS(170),
  },
  [123] = {
    [sym__newline] = ACTIONS(224),
    [anon_sym_RBRACK] = ACTIONS(224),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(224),
    [anon_sym_RBRACE] = ACTIONS(224),
  },
  [124] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(226),
    [anon_sym_RBRACE] = ACTIONS(226),
  },
  [125] = {
    [anon_sym_DOT] = ACTIONS(228),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(228),
  },
  [126] = {
    [sym__newline] = ACTIONS(240),
    [anon_sym_RBRACK] = ACTIONS(240),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(240),
    [anon_sym_RBRACE] = ACTIONS(240),
  },
  [127] = {
    [sym__newline] = ACTIONS(248),
    [anon_sym_RBRACK] = ACTIONS(248),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(248),
    [anon_sym_RBRACE] = ACTIONS(248),
  },
  [128] = {
    [sym__newline] = ACTIONS(256),
    [anon_sym_RBRACK] = ACTIONS(256),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(256),
    [anon_sym_RBRACE] = ACTIONS(256),
  },
  [129] = {
    [sym__newline] = ACTIONS(262),
    [anon_sym_RBRACK] = ACTIONS(262),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(262),
    [aux_sym_float_token2] = ACTIONS(385),
    [anon_sym_RBRACE] = ACTIONS(262),
  },
  [130] = {
    [sym__newline] = ACTIONS(262),
    [anon_sym_RBRACK] = ACTIONS(262),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_RBRACE] = ACTIONS(262),
  },
  [131] = {
    [sym__newline] = ACTIONS(266),
    [anon_sym_RBRACK] = ACTIONS(266),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(266),
    [anon_sym_RBRACE] = ACTIONS(266),
  },
  [132] = {
    [sym__newline] = ACTIONS(278),
    [anon_sym_RBRACK] = ACTIONS(278),
    [aux_sym_offset_date_time_token4] = ACTIONS(387),
    [anon_sym_COMMA] = ACTIONS(278),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(278),
  },
  [133] = {
    [sym__newline] = ACTIONS(282),
    [anon_sym_RBRACK] = ACTIONS(282),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(282),
    [anon_sym_RBRACE] = ACTIONS(282),
  },
  [134] = {
    [sym__newline] = ACTIONS(292),
    [anon_sym_RBRACK] = ACTIONS(292),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(292),
    [anon_sym_RBRACE] = ACTIONS(292),
  },
  [135] = {
    [sym__newline] = ACTIONS(302),
    [anon_sym_RBRACK] = ACTIONS(302),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(302),
    [anon_sym_RBRACE] = ACTIONS(302),
  },
  [136] = {
    [sym__newline] = ACTIONS(306),
    [anon_sym_RBRACK] = ACTIONS(306),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(306),
    [anon_sym_RBRACE] = ACTIONS(306),
  },
  [137] = {
    [sym__newline] = ACTIONS(314),
    [anon_sym_RBRACK] = ACTIONS(314),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(314),
    [anon_sym_RBRACE] = ACTIONS(314),
  },
  [138] = {
    [sym__newline] = ACTIONS(320),
    [anon_sym_RBRACK] = ACTIONS(320),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(320),
    [anon_sym_RBRACE] = ACTIONS(320),
  },
  [139] = {
    [sym__newline] = ACTIONS(324),
    [anon_sym_RBRACK] = ACTIONS(324),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(324),
    [anon_sym_RBRACE] = ACTIONS(324),
  },
  [140] = {
    [sym__newline] = ACTIONS(331),
    [anon_sym_RBRACK] = ACTIONS(331),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(331),
    [anon_sym_RBRACE] = ACTIONS(331),
  },
  [141] = {
    [sym__newline] = ACTIONS(350),
    [anon_sym_RBRACK] = ACTIONS(350),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(350),
    [anon_sym_RBRACE] = ACTIONS(350),
  },
  [142] = {
    [sym__newline] = ACTIONS(364),
    [anon_sym_RBRACK] = ACTIONS(364),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_RBRACE] = ACTIONS(364),
  },
  [143] = {
    [sym__newline] = ACTIONS(370),
    [anon_sym_RBRACK] = ACTIONS(370),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(370),
    [anon_sym_RBRACE] = ACTIONS(370),
  },
  [144] = {
    [sym__newline] = ACTIONS(374),
    [anon_sym_RBRACK] = ACTIONS(374),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(374),
    [anon_sym_RBRACE] = ACTIONS(374),
  },
  [145] = {
    [sym__newline] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(69),
  },
  [146] = {
    [sym__newline] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_DOT] = ACTIONS(81),
  },
  [147] = {
    [sym__newline] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(146),
    [anon_sym_DOT] = ACTIONS(146),
  },
  [148] = {
    [sym__newline] = ACTIONS(158),
    [anon_sym_RBRACK] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(158),
    [anon_sym_DOT] = ACTIONS(158),
  },
  [149] = {
    [aux_sym__basic_string_repeat1] = STATE(151),
    [anon_sym_DQUOTE2] = ACTIONS(389),
    [sym_escape_sequence] = ACTIONS(391),
    [sym_comment] = ACTIONS(25),
    [aux_sym__basic_string_token1] = ACTIONS(393),
  },
  [150] = {
    [anon_sym_SQUOTE2] = ACTIONS(395),
    [aux_sym__literal_string_token1] = ACTIONS(397),
    [sym_comment] = ACTIONS(25),
  },
  [151] = {
    [aux_sym__basic_string_repeat1] = STATE(42),
    [anon_sym_DQUOTE2] = ACTIONS(399),
    [sym_escape_sequence] = ACTIONS(73),
    [sym_comment] = ACTIONS(25),
    [aux_sym__basic_string_token1] = ACTIONS(75),
  },
  [152] = {
    [anon_sym_SQUOTE2] = ACTIONS(401),
    [sym_comment] = ACTIONS(3),
  },
  [153] = {
    [sym__literal_string] = STATE(123),
    [sym__multiline_literal_string] = STATE(123),
    [sym_local_date] = STATE(124),
    [sym_array] = STATE(124),
    [sym__inline_value] = STATE(124),
    [sym_string] = STATE(124),
    [sym_integer] = STATE(124),
    [sym_float] = STATE(124),
    [sym_inline_table] = STATE(124),
    [sym__basic_string] = STATE(123),
    [sym__multiline_basic_string] = STATE(123),
    [sym_offset_date_time] = STATE(124),
    [sym_local_date_time] = STATE(124),
    [anon_sym_DQUOTE] = ACTIONS(403),
    [aux_sym_offset_date_time_token1] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(204),
    [sym_boolean] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(208),
    [sym_local_time] = ACTIONS(405),
    [aux_sym_integer_token2] = ACTIONS(204),
    [aux_sym_float_token3] = ACTIONS(210),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(212),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(214),
    [anon_sym_LBRACE] = ACTIONS(218),
    [aux_sym_integer_token4] = ACTIONS(204),
    [aux_sym_integer_token1] = ACTIONS(220),
    [anon_sym_SQUOTE] = ACTIONS(407),
  },
  [154] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(159),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(409),
    [aux_sym__literal_string_token1] = ACTIONS(411),
    [sym_comment] = ACTIONS(25),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(411),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(413),
  },
  [155] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(160),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(415),
    [sym_comment] = ACTIONS(25),
    [sym_escape_sequence] = ACTIONS(415),
    [aux_sym__basic_string_token1] = ACTIONS(417),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(419),
    [sym__escape_line_ending] = ACTIONS(415),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(417),
  },
  [156] = {
    [sym__quoted_key] = STATE(5),
    [sym__literal_string] = STATE(5),
    [sym__inline_pair] = STATE(161),
    [sym_key] = STATE(183),
    [sym__basic_string] = STATE(5),
    [sym_dotted_key] = STATE(183),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(421),
  },
  [157] = {
    [sym__inline_value] = STATE(162),
    [sym_string] = STATE(162),
    [sym_integer] = STATE(162),
    [sym_float] = STATE(162),
    [sym_inline_table] = STATE(162),
    [aux_sym_root_repeat1] = STATE(163),
    [sym__literal_string] = STATE(123),
    [sym__multiline_literal_string] = STATE(123),
    [sym_local_date] = STATE(162),
    [sym_array] = STATE(162),
    [sym__basic_string] = STATE(123),
    [sym__multiline_basic_string] = STATE(123),
    [sym_offset_date_time] = STATE(162),
    [sym_local_date_time] = STATE(162),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(423),
    [aux_sym_offset_date_time_token1] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(204),
    [sym_boolean] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(208),
    [sym_local_time] = ACTIONS(425),
    [aux_sym_integer_token2] = ACTIONS(204),
    [aux_sym_float_token3] = ACTIONS(210),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(212),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(214),
    [sym__newline] = ACTIONS(427),
    [anon_sym_LBRACE] = ACTIONS(218),
    [aux_sym_integer_token4] = ACTIONS(204),
    [aux_sym_integer_token1] = ACTIONS(220),
    [anon_sym_SQUOTE] = ACTIONS(222),
  },
  [158] = {
    [sym_comment] = ACTIONS(3),
    [aux_sym_offset_date_time_token3] = ACTIONS(429),
  },
  [159] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(74),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(244),
    [aux_sym__literal_string_token1] = ACTIONS(242),
    [sym_comment] = ACTIONS(25),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(242),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(431),
  },
  [160] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(76),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(250),
    [sym_comment] = ACTIONS(25),
    [sym_escape_sequence] = ACTIONS(250),
    [aux_sym__basic_string_token1] = ACTIONS(252),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(433),
    [sym__escape_line_ending] = ACTIONS(250),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(252),
  },
  [161] = {
    [aux_sym_inline_table_repeat1] = STATE(164),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(435),
  },
  [162] = {
    [aux_sym_root_repeat1] = STATE(166),
    [aux_sym_array_repeat1] = STATE(167),
    [sym__newline] = ACTIONS(437),
    [anon_sym_RBRACK] = ACTIONS(439),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(441),
  },
  [163] = {
    [sym__inline_value] = STATE(168),
    [sym_string] = STATE(168),
    [sym_integer] = STATE(168),
    [sym_float] = STATE(168),
    [sym_inline_table] = STATE(168),
    [aux_sym_root_repeat1] = STATE(115),
    [sym__literal_string] = STATE(123),
    [sym__multiline_literal_string] = STATE(123),
    [sym_local_date] = STATE(168),
    [sym_array] = STATE(168),
    [sym__basic_string] = STATE(123),
    [sym__multiline_basic_string] = STATE(123),
    [sym_offset_date_time] = STATE(168),
    [sym_local_date_time] = STATE(168),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(439),
    [aux_sym_offset_date_time_token1] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(204),
    [sym_boolean] = ACTIONS(443),
    [anon_sym_LBRACK] = ACTIONS(208),
    [sym_local_time] = ACTIONS(443),
    [aux_sym_integer_token2] = ACTIONS(204),
    [aux_sym_float_token3] = ACTIONS(210),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(212),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(214),
    [sym__newline] = ACTIONS(276),
    [anon_sym_LBRACE] = ACTIONS(218),
    [aux_sym_integer_token4] = ACTIONS(204),
    [aux_sym_integer_token1] = ACTIONS(220),
    [anon_sym_SQUOTE] = ACTIONS(222),
  },
  [164] = {
    [aux_sym_inline_table_repeat1] = STATE(89),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(445),
  },
  [165] = {
    [sym__inline_value] = STATE(91),
    [sym_string] = STATE(91),
    [sym_integer] = STATE(91),
    [sym_float] = STATE(91),
    [sym_inline_table] = STATE(91),
    [aux_sym_root_repeat1] = STATE(169),
    [sym__literal_string] = STATE(123),
    [sym__multiline_literal_string] = STATE(123),
    [sym_local_date] = STATE(91),
    [sym_array] = STATE(91),
    [sym__basic_string] = STATE(123),
    [sym__multiline_basic_string] = STATE(123),
    [sym_offset_date_time] = STATE(91),
    [sym_local_date_time] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(447),
    [aux_sym_offset_date_time_token1] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(204),
    [sym_boolean] = ACTIONS(310),
    [anon_sym_LBRACK] = ACTIONS(208),
    [sym_local_time] = ACTIONS(310),
    [aux_sym_integer_token2] = ACTIONS(204),
    [aux_sym_float_token3] = ACTIONS(210),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(212),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(214),
    [sym__newline] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(218),
    [aux_sym_integer_token4] = ACTIONS(204),
    [aux_sym_integer_token1] = ACTIONS(220),
    [anon_sym_SQUOTE] = ACTIONS(222),
  },
  [166] = {
    [aux_sym_root_repeat1] = STATE(115),
    [aux_sym_array_repeat1] = STATE(171),
    [sym__newline] = ACTIONS(276),
    [anon_sym_RBRACK] = ACTIONS(447),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(451),
  },
  [167] = {
    [aux_sym_array_repeat1] = STATE(95),
    [anon_sym_RBRACK] = ACTIONS(447),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(451),
  },
  [168] = {
    [aux_sym_root_repeat1] = STATE(172),
    [aux_sym_array_repeat1] = STATE(171),
    [sym__newline] = ACTIONS(453),
    [anon_sym_RBRACK] = ACTIONS(447),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(451),
  },
  [169] = {
    [sym__inline_value] = STATE(99),
    [sym_string] = STATE(99),
    [sym_integer] = STATE(99),
    [sym_float] = STATE(99),
    [sym_inline_table] = STATE(99),
    [aux_sym_root_repeat1] = STATE(115),
    [sym__literal_string] = STATE(123),
    [sym__multiline_literal_string] = STATE(123),
    [sym_local_date] = STATE(99),
    [sym_array] = STATE(99),
    [sym__basic_string] = STATE(123),
    [sym__multiline_basic_string] = STATE(123),
    [sym_offset_date_time] = STATE(99),
    [sym_local_date_time] = STATE(99),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(455),
    [aux_sym_offset_date_time_token1] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(204),
    [sym_boolean] = ACTIONS(339),
    [anon_sym_LBRACK] = ACTIONS(208),
    [sym_local_time] = ACTIONS(339),
    [aux_sym_integer_token2] = ACTIONS(204),
    [aux_sym_float_token3] = ACTIONS(210),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(212),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(214),
    [sym__newline] = ACTIONS(276),
    [anon_sym_LBRACE] = ACTIONS(218),
    [aux_sym_integer_token4] = ACTIONS(204),
    [aux_sym_integer_token1] = ACTIONS(220),
    [anon_sym_SQUOTE] = ACTIONS(222),
  },
  [170] = {
    [sym__inline_value] = STATE(91),
    [sym_string] = STATE(91),
    [sym_integer] = STATE(91),
    [sym_float] = STATE(91),
    [sym_inline_table] = STATE(91),
    [aux_sym_root_repeat1] = STATE(173),
    [sym__literal_string] = STATE(123),
    [sym__multiline_literal_string] = STATE(123),
    [sym_local_date] = STATE(91),
    [sym_array] = STATE(91),
    [sym__basic_string] = STATE(123),
    [sym__multiline_basic_string] = STATE(123),
    [sym_offset_date_time] = STATE(91),
    [sym_local_date_time] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(455),
    [aux_sym_offset_date_time_token1] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(204),
    [sym_boolean] = ACTIONS(310),
    [anon_sym_LBRACK] = ACTIONS(208),
    [sym_local_time] = ACTIONS(310),
    [aux_sym_integer_token2] = ACTIONS(204),
    [aux_sym_float_token3] = ACTIONS(210),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(212),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(214),
    [sym__newline] = ACTIONS(457),
    [anon_sym_LBRACE] = ACTIONS(218),
    [aux_sym_integer_token4] = ACTIONS(204),
    [aux_sym_integer_token1] = ACTIONS(220),
    [anon_sym_SQUOTE] = ACTIONS(222),
  },
  [171] = {
    [aux_sym_array_repeat1] = STATE(95),
    [anon_sym_RBRACK] = ACTIONS(455),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(459),
  },
  [172] = {
    [aux_sym_root_repeat1] = STATE(115),
    [aux_sym_array_repeat1] = STATE(175),
    [sym__newline] = ACTIONS(276),
    [anon_sym_RBRACK] = ACTIONS(455),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(459),
  },
  [173] = {
    [sym__inline_value] = STATE(99),
    [sym_string] = STATE(99),
    [sym_integer] = STATE(99),
    [sym_float] = STATE(99),
    [sym_inline_table] = STATE(99),
    [aux_sym_root_repeat1] = STATE(115),
    [sym__literal_string] = STATE(123),
    [sym__multiline_literal_string] = STATE(123),
    [sym_local_date] = STATE(99),
    [sym_array] = STATE(99),
    [sym__basic_string] = STATE(123),
    [sym__multiline_basic_string] = STATE(123),
    [sym_offset_date_time] = STATE(99),
    [sym_local_date_time] = STATE(99),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(461),
    [aux_sym_offset_date_time_token1] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(204),
    [sym_boolean] = ACTIONS(339),
    [anon_sym_LBRACK] = ACTIONS(208),
    [sym_local_time] = ACTIONS(339),
    [aux_sym_integer_token2] = ACTIONS(204),
    [aux_sym_float_token3] = ACTIONS(210),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(212),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(214),
    [sym__newline] = ACTIONS(276),
    [anon_sym_LBRACE] = ACTIONS(218),
    [aux_sym_integer_token4] = ACTIONS(204),
    [aux_sym_integer_token1] = ACTIONS(220),
    [anon_sym_SQUOTE] = ACTIONS(222),
  },
  [174] = {
    [sym__inline_value] = STATE(91),
    [sym_string] = STATE(91),
    [sym_integer] = STATE(91),
    [sym_float] = STATE(91),
    [sym_inline_table] = STATE(91),
    [aux_sym_root_repeat1] = STATE(176),
    [sym__literal_string] = STATE(123),
    [sym__multiline_literal_string] = STATE(123),
    [sym_local_date] = STATE(91),
    [sym_array] = STATE(91),
    [sym__basic_string] = STATE(123),
    [sym__multiline_basic_string] = STATE(123),
    [sym_offset_date_time] = STATE(91),
    [sym_local_date_time] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(461),
    [aux_sym_offset_date_time_token1] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(204),
    [sym_boolean] = ACTIONS(310),
    [anon_sym_LBRACK] = ACTIONS(208),
    [sym_local_time] = ACTIONS(310),
    [aux_sym_integer_token2] = ACTIONS(204),
    [aux_sym_float_token3] = ACTIONS(210),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(212),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(214),
    [sym__newline] = ACTIONS(463),
    [anon_sym_LBRACE] = ACTIONS(218),
    [aux_sym_integer_token4] = ACTIONS(204),
    [aux_sym_integer_token1] = ACTIONS(220),
    [anon_sym_SQUOTE] = ACTIONS(222),
  },
  [175] = {
    [aux_sym_array_repeat1] = STATE(95),
    [anon_sym_RBRACK] = ACTIONS(461),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(465),
  },
  [176] = {
    [sym__inline_value] = STATE(99),
    [sym_string] = STATE(99),
    [sym_integer] = STATE(99),
    [sym_float] = STATE(99),
    [sym_inline_table] = STATE(99),
    [aux_sym_root_repeat1] = STATE(115),
    [sym__literal_string] = STATE(123),
    [sym__multiline_literal_string] = STATE(123),
    [sym_local_date] = STATE(99),
    [sym_array] = STATE(99),
    [sym__basic_string] = STATE(123),
    [sym__multiline_basic_string] = STATE(123),
    [sym_offset_date_time] = STATE(99),
    [sym_local_date_time] = STATE(99),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(467),
    [aux_sym_offset_date_time_token1] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(204),
    [sym_boolean] = ACTIONS(339),
    [anon_sym_LBRACK] = ACTIONS(208),
    [sym_local_time] = ACTIONS(339),
    [aux_sym_integer_token2] = ACTIONS(204),
    [aux_sym_float_token3] = ACTIONS(210),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(212),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(214),
    [sym__newline] = ACTIONS(276),
    [anon_sym_LBRACE] = ACTIONS(218),
    [aux_sym_integer_token4] = ACTIONS(204),
    [aux_sym_integer_token1] = ACTIONS(220),
    [anon_sym_SQUOTE] = ACTIONS(222),
  },
  [177] = {
    [sym__inline_value] = STATE(91),
    [sym_string] = STATE(91),
    [sym_integer] = STATE(91),
    [sym_float] = STATE(91),
    [sym_inline_table] = STATE(91),
    [aux_sym_root_repeat1] = STATE(178),
    [sym__literal_string] = STATE(123),
    [sym__multiline_literal_string] = STATE(123),
    [sym_local_date] = STATE(91),
    [sym_array] = STATE(91),
    [sym__basic_string] = STATE(123),
    [sym__multiline_basic_string] = STATE(123),
    [sym_offset_date_time] = STATE(91),
    [sym_local_date_time] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(467),
    [aux_sym_offset_date_time_token1] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(204),
    [sym_boolean] = ACTIONS(310),
    [anon_sym_LBRACK] = ACTIONS(208),
    [sym_local_time] = ACTIONS(310),
    [aux_sym_integer_token2] = ACTIONS(204),
    [aux_sym_float_token3] = ACTIONS(210),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(212),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(214),
    [sym__newline] = ACTIONS(469),
    [anon_sym_LBRACE] = ACTIONS(218),
    [aux_sym_integer_token4] = ACTIONS(204),
    [aux_sym_integer_token1] = ACTIONS(220),
    [anon_sym_SQUOTE] = ACTIONS(222),
  },
  [178] = {
    [sym__inline_value] = STATE(99),
    [sym_string] = STATE(99),
    [sym_integer] = STATE(99),
    [sym_float] = STATE(99),
    [sym_inline_table] = STATE(99),
    [aux_sym_root_repeat1] = STATE(115),
    [sym__literal_string] = STATE(123),
    [sym__multiline_literal_string] = STATE(123),
    [sym_local_date] = STATE(99),
    [sym_array] = STATE(99),
    [sym__basic_string] = STATE(123),
    [sym__multiline_basic_string] = STATE(123),
    [sym_offset_date_time] = STATE(99),
    [sym_local_date_time] = STATE(99),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(471),
    [aux_sym_offset_date_time_token1] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(204),
    [sym_boolean] = ACTIONS(339),
    [anon_sym_LBRACK] = ACTIONS(208),
    [sym_local_time] = ACTIONS(339),
    [aux_sym_integer_token2] = ACTIONS(204),
    [aux_sym_float_token3] = ACTIONS(210),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(212),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(214),
    [sym__newline] = ACTIONS(276),
    [anon_sym_LBRACE] = ACTIONS(218),
    [aux_sym_integer_token4] = ACTIONS(204),
    [aux_sym_integer_token1] = ACTIONS(220),
    [anon_sym_SQUOTE] = ACTIONS(222),
  },
  [179] = {
    [aux_sym__basic_string_repeat1] = STATE(181),
    [anon_sym_DQUOTE2] = ACTIONS(473),
    [sym_escape_sequence] = ACTIONS(475),
    [sym_comment] = ACTIONS(25),
    [aux_sym__basic_string_token1] = ACTIONS(477),
  },
  [180] = {
    [anon_sym_SQUOTE2] = ACTIONS(479),
    [sym_comment] = ACTIONS(25),
    [aux_sym__literal_string_token1] = ACTIONS(481),
  },
  [181] = {
    [aux_sym__basic_string_repeat1] = STATE(42),
    [anon_sym_DQUOTE2] = ACTIONS(483),
    [sym_escape_sequence] = ACTIONS(73),
    [sym_comment] = ACTIONS(25),
    [aux_sym__basic_string_token1] = ACTIONS(75),
  },
  [182] = {
    [anon_sym_SQUOTE2] = ACTIONS(485),
    [sym_comment] = ACTIONS(3),
  },
  [183] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(487),
    [anon_sym_DOT] = ACTIONS(63),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(11),
  [13] = {.count = 1, .reusable = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = false}, SHIFT(6),
  [17] = {.count = 1, .reusable = true}, SHIFT(7),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_root, 1),
  [21] = {.count = 1, .reusable = true}, SHIFT(18),
  [23] = {.count = 1, .reusable = true}, SHIFT(19),
  [25] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [27] = {.count = 1, .reusable = false}, SHIFT(19),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_key, 1),
  [31] = {.count = 1, .reusable = true}, SHIFT(149),
  [33] = {.count = 1, .reusable = true}, SHIFT(112),
  [35] = {.count = 1, .reusable = true}, SHIFT(150),
  [37] = {.count = 1, .reusable = true}, SHIFT(21),
  [39] = {.count = 1, .reusable = false}, SHIFT(22),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_table, 1),
  [43] = {.count = 1, .reusable = true}, SHIFT(23),
  [45] = {.count = 1, .reusable = false}, REDUCE(sym_table, 1),
  [47] = {.count = 1, .reusable = true}, SHIFT(26),
  [49] = {.count = 1, .reusable = true}, SHIFT(27),
  [51] = {.count = 1, .reusable = true}, SHIFT(30),
  [53] = {.count = 1, .reusable = true}, SHIFT(32),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_table_array, 1),
  [57] = {.count = 1, .reusable = true}, SHIFT(35),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym_table_array, 1),
  [61] = {.count = 1, .reusable = true}, SHIFT(38),
  [63] = {.count = 1, .reusable = true}, SHIFT(39),
  [65] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [67] = {.count = 1, .reusable = true}, SHIFT(40),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym__basic_string, 2),
  [71] = {.count = 1, .reusable = true}, SHIFT(41),
  [73] = {.count = 1, .reusable = true}, SHIFT(42),
  [75] = {.count = 1, .reusable = false}, SHIFT(42),
  [77] = {.count = 1, .reusable = true}, SHIFT(116),
  [79] = {.count = 1, .reusable = true}, SHIFT(43),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym__literal_string, 2),
  [83] = {.count = 1, .reusable = true}, SHIFT(44),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym__loose_table_header, 2),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym__loose_table_header, 2),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_table, 2),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_table, 2),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_pair, 2),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_pair, 2),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym__loose_pair, 2),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym__loose_pair, 2),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym__pairs, 2),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym__pairs, 2),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_root, 2),
  [107] = {.count = 1, .reusable = true}, REDUCE(aux_sym_root_repeat1, 2),
  [109] = {.count = 2, .reusable = true}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(32),
  [112] = {.count = 1, .reusable = false}, REDUCE(aux_sym_root_repeat1, 2),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym__loose_table_array_header, 2),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym__loose_table_array_header, 2),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_table_array, 2),
  [120] = {.count = 1, .reusable = false}, REDUCE(sym_table_array, 2),
  [122] = {.count = 1, .reusable = false}, SHIFT(179),
  [124] = {.count = 1, .reusable = true}, SHIFT(49),
  [126] = {.count = 1, .reusable = true}, SHIFT(47),
  [128] = {.count = 1, .reusable = true}, SHIFT(56),
  [130] = {.count = 1, .reusable = true}, SHIFT(54),
  [132] = {.count = 1, .reusable = true}, SHIFT(48),
  [134] = {.count = 1, .reusable = true}, SHIFT(50),
  [136] = {.count = 1, .reusable = true}, SHIFT(51),
  [138] = {.count = 1, .reusable = true}, SHIFT(52),
  [140] = {.count = 1, .reusable = false}, SHIFT(53),
  [142] = {.count = 1, .reusable = false}, SHIFT(180),
  [144] = {.count = 1, .reusable = true}, SHIFT(58),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym__basic_string, 3),
  [148] = {.count = 1, .reusable = true}, REDUCE(aux_sym__basic_string_repeat1, 2),
  [150] = {.count = 2, .reusable = true}, REDUCE(aux_sym__basic_string_repeat1, 2), SHIFT_REPEAT(42),
  [153] = {.count = 2, .reusable = false}, REDUCE(aux_sym__basic_string_repeat1, 2), SHIFT_REPEAT(42),
  [156] = {.count = 1, .reusable = true}, SHIFT(59),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym__literal_string, 3),
  [160] = {.count = 2, .reusable = true}, REDUCE(aux_sym_root_repeat2, 2), SHIFT_REPEAT(3),
  [163] = {.count = 1, .reusable = true}, REDUCE(aux_sym_root_repeat2, 2),
  [165] = {.count = 2, .reusable = false}, REDUCE(aux_sym_root_repeat2, 2), SHIFT_REPEAT(6),
  [168] = {.count = 1, .reusable = true}, REDUCE(sym_root, 3),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_integer, 1),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym_float, 1),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym_local_date, 1),
  [176] = {.count = 1, .reusable = false}, REDUCE(sym_local_date, 1),
  [178] = {.count = 1, .reusable = true}, SHIFT(60),
  [180] = {.count = 1, .reusable = false}, SHIFT(62),
  [182] = {.count = 1, .reusable = true}, SHIFT(62),
  [184] = {.count = 1, .reusable = true}, SHIFT(61),
  [186] = {.count = 1, .reusable = true}, SHIFT(64),
  [188] = {.count = 1, .reusable = false}, SHIFT(64),
  [190] = {.count = 1, .reusable = true}, SHIFT(63),
  [192] = {.count = 1, .reusable = true}, SHIFT(65),
  [194] = {.count = 1, .reusable = true}, SHIFT(67),
  [196] = {.count = 1, .reusable = true}, SHIFT(68),
  [198] = {.count = 1, .reusable = false}, SHIFT(149),
  [200] = {.count = 1, .reusable = true}, SHIFT(69),
  [202] = {.count = 1, .reusable = true}, SHIFT(121),
  [204] = {.count = 1, .reusable = true}, SHIFT(119),
  [206] = {.count = 1, .reusable = true}, SHIFT(70),
  [208] = {.count = 1, .reusable = true}, SHIFT(157),
  [210] = {.count = 1, .reusable = true}, SHIFT(120),
  [212] = {.count = 1, .reusable = true}, SHIFT(154),
  [214] = {.count = 1, .reusable = true}, SHIFT(155),
  [216] = {.count = 1, .reusable = true}, SHIFT(71),
  [218] = {.count = 1, .reusable = true}, SHIFT(156),
  [220] = {.count = 1, .reusable = false}, SHIFT(122),
  [222] = {.count = 1, .reusable = false}, SHIFT(150),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym__inline_pair, 3),
  [228] = {.count = 1, .reusable = true}, REDUCE(sym_dotted_key, 3),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym__table_array_header, 4),
  [232] = {.count = 1, .reusable = false}, REDUCE(sym__table_array_header, 4),
  [234] = {.count = 1, .reusable = true}, REDUCE(sym__table_header, 4),
  [236] = {.count = 1, .reusable = false}, REDUCE(sym__table_header, 4),
  [238] = {.count = 1, .reusable = true}, SHIFT(72),
  [240] = {.count = 1, .reusable = true}, REDUCE(sym__multiline_literal_string, 2),
  [242] = {.count = 1, .reusable = false}, SHIFT(74),
  [244] = {.count = 1, .reusable = true}, SHIFT(74),
  [246] = {.count = 1, .reusable = true}, SHIFT(73),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym__multiline_basic_string, 2),
  [250] = {.count = 1, .reusable = true}, SHIFT(76),
  [252] = {.count = 1, .reusable = false}, SHIFT(76),
  [254] = {.count = 1, .reusable = true}, SHIFT(75),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym_inline_table, 2),
  [258] = {.count = 1, .reusable = true}, SHIFT(77),
  [260] = {.count = 1, .reusable = true}, SHIFT(78),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_float, 2),
  [264] = {.count = 1, .reusable = true}, SHIFT(80),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [268] = {.count = 1, .reusable = true}, SHIFT(83),
  [270] = {.count = 1, .reusable = true}, SHIFT(82),
  [272] = {.count = 1, .reusable = true}, SHIFT(81),
  [274] = {.count = 1, .reusable = true}, SHIFT(85),
  [276] = {.count = 1, .reusable = true}, SHIFT(115),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym_local_date_time, 3),
  [280] = {.count = 1, .reusable = true}, SHIFT(86),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym__multiline_literal_string, 3),
  [284] = {.count = 2, .reusable = false}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2), SHIFT_REPEAT(74),
  [287] = {.count = 2, .reusable = true}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2), SHIFT_REPEAT(74),
  [290] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym__multiline_basic_string, 3),
  [294] = {.count = 2, .reusable = true}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2), SHIFT_REPEAT(76),
  [297] = {.count = 2, .reusable = false}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2), SHIFT_REPEAT(76),
  [300] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2),
  [302] = {.count = 1, .reusable = true}, REDUCE(sym_inline_table, 3, .production_id = 1),
  [304] = {.count = 1, .reusable = true}, SHIFT(88),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym_float, 3),
  [308] = {.count = 1, .reusable = true}, SHIFT(90),
  [310] = {.count = 1, .reusable = true}, SHIFT(91),
  [312] = {.count = 1, .reusable = true}, SHIFT(92),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [316] = {.count = 1, .reusable = true}, SHIFT(93),
  [318] = {.count = 1, .reusable = true}, SHIFT(96),
  [320] = {.count = 1, .reusable = true}, REDUCE(sym_offset_date_time, 4),
  [322] = {.count = 1, .reusable = true}, REDUCE(aux_sym_inline_table_repeat1, 2, .production_id = 1),
  [324] = {.count = 1, .reusable = true}, REDUCE(sym_inline_table, 4, .production_id = 1),
  [326] = {.count = 2, .reusable = true}, REDUCE(aux_sym_inline_table_repeat1, 2), SHIFT_REPEAT(77),
  [329] = {.count = 1, .reusable = true}, REDUCE(aux_sym_inline_table_repeat1, 2),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_array, 4),
  [333] = {.count = 1, .reusable = true}, SHIFT(97),
  [335] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2),
  [337] = {.count = 1, .reusable = true}, SHIFT(98),
  [339] = {.count = 1, .reusable = true}, SHIFT(99),
  [341] = {.count = 1, .reusable = true}, SHIFT(100),
  [343] = {.count = 1, .reusable = true}, SHIFT(101),
  [345] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(102),
  [348] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat1, 3),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_array, 5),
  [352] = {.count = 1, .reusable = true}, SHIFT(104),
  [354] = {.count = 1, .reusable = true}, SHIFT(105),
  [356] = {.count = 1, .reusable = true}, SHIFT(106),
  [358] = {.count = 1, .reusable = true}, SHIFT(107),
  [360] = {.count = 1, .reusable = true}, SHIFT(108),
  [362] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat1, 4),
  [364] = {.count = 1, .reusable = true}, REDUCE(sym_array, 6),
  [366] = {.count = 1, .reusable = true}, SHIFT(109),
  [368] = {.count = 1, .reusable = true}, SHIFT(110),
  [370] = {.count = 1, .reusable = true}, REDUCE(sym_array, 7),
  [372] = {.count = 1, .reusable = true}, SHIFT(111),
  [374] = {.count = 1, .reusable = true}, REDUCE(sym_array, 8),
  [376] = {.count = 2, .reusable = true}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(115),
  [379] = {.count = 1, .reusable = true}, SHIFT(158),
  [381] = {.count = 1, .reusable = true}, SHIFT(129),
  [383] = {.count = 1, .reusable = true}, SHIFT(130),
  [385] = {.count = 1, .reusable = true}, SHIFT(136),
  [387] = {.count = 1, .reusable = true}, SHIFT(138),
  [389] = {.count = 1, .reusable = true}, SHIFT(145),
  [391] = {.count = 1, .reusable = true}, SHIFT(151),
  [393] = {.count = 1, .reusable = false}, SHIFT(151),
  [395] = {.count = 1, .reusable = true}, SHIFT(146),
  [397] = {.count = 1, .reusable = false}, SHIFT(152),
  [399] = {.count = 1, .reusable = true}, SHIFT(147),
  [401] = {.count = 1, .reusable = true}, SHIFT(148),
  [403] = {.count = 1, .reusable = false}, SHIFT(4),
  [405] = {.count = 1, .reusable = true}, SHIFT(124),
  [407] = {.count = 1, .reusable = false}, SHIFT(7),
  [409] = {.count = 1, .reusable = true}, SHIFT(159),
  [411] = {.count = 1, .reusable = false}, SHIFT(159),
  [413] = {.count = 1, .reusable = true}, SHIFT(126),
  [415] = {.count = 1, .reusable = true}, SHIFT(160),
  [417] = {.count = 1, .reusable = false}, SHIFT(160),
  [419] = {.count = 1, .reusable = true}, SHIFT(127),
  [421] = {.count = 1, .reusable = true}, SHIFT(128),
  [423] = {.count = 1, .reusable = true}, SHIFT(131),
  [425] = {.count = 1, .reusable = true}, SHIFT(162),
  [427] = {.count = 1, .reusable = true}, SHIFT(163),
  [429] = {.count = 1, .reusable = true}, SHIFT(132),
  [431] = {.count = 1, .reusable = true}, SHIFT(133),
  [433] = {.count = 1, .reusable = true}, SHIFT(134),
  [435] = {.count = 1, .reusable = true}, SHIFT(135),
  [437] = {.count = 1, .reusable = true}, SHIFT(166),
  [439] = {.count = 1, .reusable = true}, SHIFT(137),
  [441] = {.count = 1, .reusable = true}, SHIFT(165),
  [443] = {.count = 1, .reusable = true}, SHIFT(168),
  [445] = {.count = 1, .reusable = true}, SHIFT(139),
  [447] = {.count = 1, .reusable = true}, SHIFT(140),
  [449] = {.count = 1, .reusable = true}, SHIFT(169),
  [451] = {.count = 1, .reusable = true}, SHIFT(170),
  [453] = {.count = 1, .reusable = true}, SHIFT(172),
  [455] = {.count = 1, .reusable = true}, SHIFT(141),
  [457] = {.count = 1, .reusable = true}, SHIFT(173),
  [459] = {.count = 1, .reusable = true}, SHIFT(174),
  [461] = {.count = 1, .reusable = true}, SHIFT(142),
  [463] = {.count = 1, .reusable = true}, SHIFT(176),
  [465] = {.count = 1, .reusable = true}, SHIFT(177),
  [467] = {.count = 1, .reusable = true}, SHIFT(143),
  [469] = {.count = 1, .reusable = true}, SHIFT(178),
  [471] = {.count = 1, .reusable = true}, SHIFT(144),
  [473] = {.count = 1, .reusable = true}, SHIFT(113),
  [475] = {.count = 1, .reusable = true}, SHIFT(181),
  [477] = {.count = 1, .reusable = false}, SHIFT(181),
  [479] = {.count = 1, .reusable = true}, SHIFT(114),
  [481] = {.count = 1, .reusable = false}, SHIFT(182),
  [483] = {.count = 1, .reusable = true}, SHIFT(117),
  [485] = {.count = 1, .reusable = true}, SHIFT(118),
  [487] = {.count = 1, .reusable = true}, SHIFT(153),
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
