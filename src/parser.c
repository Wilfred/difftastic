#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 152
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  aux_sym_document_token1 = 1,
  sym_comment = 2,
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
  sym_boolean = 31,
  sym_offset_date_time = 32,
  sym_local_date_time = 33,
  sym_local_date = 34,
  sym_local_time = 35,
  anon_sym_COMMA = 36,
  anon_sym_LBRACE = 37,
  anon_sym_RBRACE = 38,
  sym__line_ending_or_eof = 39,
  sym_document = 40,
  sym_table = 41,
  sym_table_array_element = 42,
  sym_pair = 43,
  sym__inline_pair = 44,
  sym_key = 45,
  sym_dotted_key = 46,
  sym__quoted_key = 47,
  sym__inline_value = 48,
  sym_string = 49,
  sym__basic_string = 50,
  sym__multiline_basic_string = 51,
  sym__literal_string = 52,
  sym__multiline_literal_string = 53,
  sym_integer = 54,
  sym_float = 55,
  sym_array = 56,
  sym_inline_table = 57,
  aux_sym_document_repeat1 = 58,
  aux_sym_document_repeat2 = 59,
  aux_sym__basic_string_repeat1 = 60,
  aux_sym__multiline_basic_string_repeat1 = 61,
  aux_sym__multiline_literal_string_repeat1 = 62,
  aux_sym_array_repeat1 = 63,
  aux_sym_array_repeat2 = 64,
  aux_sym_inline_table_repeat1 = 65,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_document_token1] = "document_token1",
  [sym_comment] = "comment",
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
  [sym_boolean] = "boolean",
  [sym_offset_date_time] = "offset_date_time",
  [sym_local_date_time] = "local_date_time",
  [sym_local_date] = "local_date",
  [sym_local_time] = "local_time",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym__line_ending_or_eof] = "_line_ending_or_eof",
  [sym_document] = "document",
  [sym_table] = "table",
  [sym_table_array_element] = "table_array_element",
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
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_document_repeat2] = "document_repeat2",
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
  [aux_sym_document_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
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
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_table_array_element] = {
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
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat2] = {
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
  [0] = {0},
  [1] = {
    [1] = sym_pair,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(82);
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '"') ADVANCE(133);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '\'') ADVANCE(147);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == ',') ADVANCE(175);
      if (lookahead == '-') ADVANCE(100);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '0') ADVANCE(97);
      if (lookahead == '1') ADVANCE(95);
      if (lookahead == '2') ADVANCE(94);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == '{') ADVANCE(176);
      if (lookahead == '}') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(82);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '"') ADVANCE(128);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '\'') ADVANCE(142);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == ',') ADVANCE(175);
      if (lookahead == '-') ADVANCE(100);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '0') ADVANCE(97);
      if (lookahead == '1') ADVANCE(95);
      if (lookahead == '2') ADVANCE(94);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == '{') ADVANCE(176);
      if (lookahead == '}') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(82);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '"') ADVANCE(127);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '\'') ADVANCE(141);
      if (lookahead == ',') ADVANCE(175);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == '}') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 3:
      if (lookahead == '\t') SKIP(14)
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '') ADVANCE(131);
      END_STATE();
    case 4:
      if (lookahead == '\t') SKIP(14)
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '"') ADVANCE(132);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '') ADVANCE(131);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(137);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '') ADVANCE(145);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(140);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == 'U') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(77);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(139);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(83);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '"') ADVANCE(128);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '\'') ADVANCE(142);
      if (lookahead == ',') ADVANCE(175);
      if (lookahead == '0') ADVANCE(157);
      if (lookahead == '1') ADVANCE(155);
      if (lookahead == '2') ADVANCE(154);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == '{') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(22);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(134);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '\'') ADVANCE(146);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '\'') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '') ADVANCE(145);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(148);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ':') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == '0') ADVANCE(152);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(39);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 21:
      if (lookahead == '0') ADVANCE(173);
      END_STATE();
    case 22:
      if (lookahead == '0') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(39);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 23:
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == '1') ADVANCE(50);
      END_STATE();
    case 24:
      if (lookahead == '0') ADVANCE(164);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(25);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 25:
      if (lookahead == '0') ADVANCE(164);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 26:
      if (lookahead == '0') ADVANCE(170);
      END_STATE();
    case 27:
      if (lookahead == '0') ADVANCE(58);
      if (lookahead == '3') ADVANCE(49);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(66);
      END_STATE();
    case 28:
      if (lookahead == '2') ADVANCE(51);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(70);
      END_STATE();
    case 29:
      if (lookahead == '2') ADVANCE(52);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(71);
      END_STATE();
    case 30:
      if (lookahead == '6') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(61);
      END_STATE();
    case 31:
      if (lookahead == '6') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(67);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(30);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(54);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == 'U') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(77);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(139);
      END_STATE();
    case 37:
      if (lookahead == ']') ADVANCE(89);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 41:
      if (lookahead == 'f') ADVANCE(167);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(167);
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
          lookahead == '1') ADVANCE(163);
      END_STATE();
    case 49:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(172);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(19);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(35);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(33);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(60);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(68);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(72);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(162);
      END_STATE();
    case 57:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 58:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_document_token1);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == '_') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == ':') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '_') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(92);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '_') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '_') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == 'b') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(120);
      if (lookahead == 'x') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(108);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0') ADVANCE(122);
      if (lookahead == '1') ADVANCE(119);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(118);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(103);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'l') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'n') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'r') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'u') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(126);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(103);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(99);
      if (lookahead == '-' ||
          ('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__bare_key);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (lookahead == '-' ||
          lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__bare_key);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(11);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__basic_string_token1);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '') ADVANCE(131);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__basic_string_token1);
      if ((0 <= lookahead && lookahead <= '\t') ||
          ('' <= lookahead && lookahead <= '') ||
          lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == '') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__basic_string_token1);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '') ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      if (lookahead == '"') ADVANCE(11);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__multiline_basic_string_token1);
      if (lookahead == '"') ADVANCE(138);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__multiline_basic_string_token1);
      if (lookahead == '"') ADVANCE(135);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__multiline_basic_string_token2);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE2);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__escape_line_ending);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(16);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '') ADVANCE(145);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if ((0 <= lookahead && lookahead <= '') ||
          ('' <= lookahead && lookahead <= '') ||
          lookahead == '\'' ||
          lookahead == '') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          (lookahead < '\n' || '' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      if (lookahead == '\'') ADVANCE(16);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__multiline_literal_string_token1);
      if (lookahead == '\'') ADVANCE(151);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__multiline_literal_string_token1);
      if (lookahead == '\'') ADVANCE(149);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE2);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(153);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'b') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 'x') ADVANCE(74);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      if (lookahead == '_') ADVANCE(48);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_float_token1);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '_') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_float_token2);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_offset_date_time);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_local_date_time);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(29);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(169);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_local_date_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(29);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_local_date);
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(28);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_local_time);
      if (lookahead == '.') ADVANCE(62);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_local_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 12},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 15},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 15},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 12},
  [117] = {.lex_state = 12},
  [118] = {.lex_state = 12},
  [119] = {.lex_state = 12},
  [120] = {.lex_state = 15},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 12},
  [123] = {.lex_state = 0, .external_lex_state = 1},
  [124] = {.lex_state = 0, .external_lex_state = 1},
  [125] = {.lex_state = 0, .external_lex_state = 1},
  [126] = {.lex_state = 0, .external_lex_state = 1},
  [127] = {.lex_state = 0, .external_lex_state = 1},
  [128] = {.lex_state = 0, .external_lex_state = 1},
  [129] = {.lex_state = 0, .external_lex_state = 1},
  [130] = {.lex_state = 0, .external_lex_state = 1},
  [131] = {.lex_state = 0, .external_lex_state = 1},
  [132] = {.lex_state = 0, .external_lex_state = 1},
  [133] = {.lex_state = 0, .external_lex_state = 1},
  [134] = {.lex_state = 0, .external_lex_state = 1},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 0, .external_lex_state = 1},
  [137] = {.lex_state = 0, .external_lex_state = 1},
  [138] = {.lex_state = 0, .external_lex_state = 1},
  [139] = {.lex_state = 0, .external_lex_state = 1},
  [140] = {.lex_state = 12},
  [141] = {.lex_state = 0, .external_lex_state = 1},
  [142] = {.lex_state = 0, .external_lex_state = 1},
  [143] = {.lex_state = 0, .external_lex_state = 1},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0, .external_lex_state = 1},
  [146] = {.lex_state = 0, .external_lex_state = 1},
  [147] = {.lex_state = 0, .external_lex_state = 1},
  [148] = {.lex_state = 0, .external_lex_state = 1},
  [149] = {.lex_state = 0, .external_lex_state = 1},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 0, .external_lex_state = 1},
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
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_document_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym__bare_key] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym__escape_line_ending] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [aux_sym_integer_token2] = ACTIONS(1),
    [aux_sym_integer_token3] = ACTIONS(1),
    [aux_sym_integer_token4] = ACTIONS(1),
    [aux_sym_float_token2] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_local_date] = ACTIONS(1),
    [sym_local_time] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__line_ending_or_eof] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(144),
    [sym_table] = STATE(52),
    [sym_table_array_element] = STATE(52),
    [sym_pair] = STATE(27),
    [sym__inline_pair] = STATE(142),
    [sym_key] = STATE(115),
    [sym_dotted_key] = STATE(115),
    [sym__quoted_key] = STATE(106),
    [sym__basic_string] = STATE(106),
    [sym__literal_string] = STATE(106),
    [aux_sym_document_repeat1] = STATE(27),
    [aux_sym_document_repeat2] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_document_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(11),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [2] = {
    [sym__inline_value] = STATE(55),
    [sym_string] = STATE(55),
    [sym__basic_string] = STATE(86),
    [sym__multiline_basic_string] = STATE(86),
    [sym__literal_string] = STATE(86),
    [sym__multiline_literal_string] = STATE(86),
    [sym_integer] = STATE(55),
    [sym_float] = STATE(55),
    [sym_array] = STATE(55),
    [sym_inline_table] = STATE(55),
    [aux_sym_array_repeat1] = STATE(26),
    [aux_sym_document_token1] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(31),
    [aux_sym_integer_token1] = ACTIONS(33),
    [aux_sym_integer_token2] = ACTIONS(35),
    [aux_sym_integer_token3] = ACTIONS(35),
    [aux_sym_integer_token4] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(37),
    [sym_boolean] = ACTIONS(39),
    [sym_offset_date_time] = ACTIONS(39),
    [sym_local_date_time] = ACTIONS(41),
    [sym_local_date] = ACTIONS(41),
    [sym_local_time] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(43),
  },
  [3] = {
    [sym__inline_value] = STATE(66),
    [sym_string] = STATE(66),
    [sym__basic_string] = STATE(86),
    [sym__multiline_basic_string] = STATE(86),
    [sym__literal_string] = STATE(86),
    [sym__multiline_literal_string] = STATE(86),
    [sym_integer] = STATE(66),
    [sym_float] = STATE(66),
    [sym_array] = STATE(66),
    [sym_inline_table] = STATE(66),
    [aux_sym_array_repeat1] = STATE(26),
    [aux_sym_document_token1] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(31),
    [aux_sym_integer_token1] = ACTIONS(33),
    [aux_sym_integer_token2] = ACTIONS(35),
    [aux_sym_integer_token3] = ACTIONS(35),
    [aux_sym_integer_token4] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(37),
    [sym_boolean] = ACTIONS(47),
    [sym_offset_date_time] = ACTIONS(47),
    [sym_local_date_time] = ACTIONS(49),
    [sym_local_date] = ACTIONS(49),
    [sym_local_time] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(43),
  },
  [4] = {
    [sym__inline_value] = STATE(68),
    [sym_string] = STATE(68),
    [sym__basic_string] = STATE(86),
    [sym__multiline_basic_string] = STATE(86),
    [sym__literal_string] = STATE(86),
    [sym__multiline_literal_string] = STATE(86),
    [sym_integer] = STATE(68),
    [sym_float] = STATE(68),
    [sym_array] = STATE(68),
    [sym_inline_table] = STATE(68),
    [aux_sym_array_repeat1] = STATE(15),
    [aux_sym_document_token1] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(31),
    [aux_sym_integer_token1] = ACTIONS(33),
    [aux_sym_integer_token2] = ACTIONS(35),
    [aux_sym_integer_token3] = ACTIONS(35),
    [aux_sym_integer_token4] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(37),
    [sym_boolean] = ACTIONS(55),
    [sym_offset_date_time] = ACTIONS(55),
    [sym_local_date_time] = ACTIONS(57),
    [sym_local_date] = ACTIONS(57),
    [sym_local_time] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(43),
  },
  [5] = {
    [sym__inline_value] = STATE(68),
    [sym_string] = STATE(68),
    [sym__basic_string] = STATE(86),
    [sym__multiline_basic_string] = STATE(86),
    [sym__literal_string] = STATE(86),
    [sym__multiline_literal_string] = STATE(86),
    [sym_integer] = STATE(68),
    [sym_float] = STATE(68),
    [sym_array] = STATE(68),
    [sym_inline_table] = STATE(68),
    [aux_sym_array_repeat1] = STATE(14),
    [aux_sym_document_token1] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(31),
    [aux_sym_integer_token1] = ACTIONS(33),
    [aux_sym_integer_token2] = ACTIONS(35),
    [aux_sym_integer_token3] = ACTIONS(35),
    [aux_sym_integer_token4] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(37),
    [sym_boolean] = ACTIONS(55),
    [sym_offset_date_time] = ACTIONS(55),
    [sym_local_date_time] = ACTIONS(57),
    [sym_local_date] = ACTIONS(57),
    [sym_local_time] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(43),
  },
  [6] = {
    [sym__inline_value] = STATE(66),
    [sym_string] = STATE(66),
    [sym__basic_string] = STATE(86),
    [sym__multiline_basic_string] = STATE(86),
    [sym__literal_string] = STATE(86),
    [sym__multiline_literal_string] = STATE(86),
    [sym_integer] = STATE(66),
    [sym_float] = STATE(66),
    [sym_array] = STATE(66),
    [sym_inline_table] = STATE(66),
    [aux_sym_array_repeat1] = STATE(26),
    [aux_sym_document_token1] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(31),
    [aux_sym_integer_token1] = ACTIONS(33),
    [aux_sym_integer_token2] = ACTIONS(35),
    [aux_sym_integer_token3] = ACTIONS(35),
    [aux_sym_integer_token4] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(37),
    [sym_boolean] = ACTIONS(47),
    [sym_offset_date_time] = ACTIONS(47),
    [sym_local_date_time] = ACTIONS(49),
    [sym_local_date] = ACTIONS(49),
    [sym_local_time] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(43),
  },
  [7] = {
    [sym__inline_value] = STATE(68),
    [sym_string] = STATE(68),
    [sym__basic_string] = STATE(86),
    [sym__multiline_basic_string] = STATE(86),
    [sym__literal_string] = STATE(86),
    [sym__multiline_literal_string] = STATE(86),
    [sym_integer] = STATE(68),
    [sym_float] = STATE(68),
    [sym_array] = STATE(68),
    [sym_inline_table] = STATE(68),
    [aux_sym_array_repeat1] = STATE(6),
    [aux_sym_document_token1] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(31),
    [aux_sym_integer_token1] = ACTIONS(33),
    [aux_sym_integer_token2] = ACTIONS(35),
    [aux_sym_integer_token3] = ACTIONS(35),
    [aux_sym_integer_token4] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(37),
    [sym_boolean] = ACTIONS(55),
    [sym_offset_date_time] = ACTIONS(55),
    [sym_local_date_time] = ACTIONS(57),
    [sym_local_date] = ACTIONS(57),
    [sym_local_time] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(43),
  },
  [8] = {
    [sym__inline_value] = STATE(66),
    [sym_string] = STATE(66),
    [sym__basic_string] = STATE(86),
    [sym__multiline_basic_string] = STATE(86),
    [sym__literal_string] = STATE(86),
    [sym__multiline_literal_string] = STATE(86),
    [sym_integer] = STATE(66),
    [sym_float] = STATE(66),
    [sym_array] = STATE(66),
    [sym_inline_table] = STATE(66),
    [aux_sym_array_repeat1] = STATE(26),
    [aux_sym_document_token1] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(31),
    [aux_sym_integer_token1] = ACTIONS(33),
    [aux_sym_integer_token2] = ACTIONS(35),
    [aux_sym_integer_token3] = ACTIONS(35),
    [aux_sym_integer_token4] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(37),
    [sym_boolean] = ACTIONS(47),
    [sym_offset_date_time] = ACTIONS(47),
    [sym_local_date_time] = ACTIONS(49),
    [sym_local_date] = ACTIONS(49),
    [sym_local_time] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(43),
  },
  [9] = {
    [sym__inline_value] = STATE(68),
    [sym_string] = STATE(68),
    [sym__basic_string] = STATE(86),
    [sym__multiline_basic_string] = STATE(86),
    [sym__literal_string] = STATE(86),
    [sym__multiline_literal_string] = STATE(86),
    [sym_integer] = STATE(68),
    [sym_float] = STATE(68),
    [sym_array] = STATE(68),
    [sym_inline_table] = STATE(68),
    [aux_sym_array_repeat1] = STATE(10),
    [aux_sym_document_token1] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(31),
    [aux_sym_integer_token1] = ACTIONS(33),
    [aux_sym_integer_token2] = ACTIONS(35),
    [aux_sym_integer_token3] = ACTIONS(35),
    [aux_sym_integer_token4] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(37),
    [sym_boolean] = ACTIONS(55),
    [sym_offset_date_time] = ACTIONS(55),
    [sym_local_date_time] = ACTIONS(57),
    [sym_local_date] = ACTIONS(57),
    [sym_local_time] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(43),
  },
  [10] = {
    [sym__inline_value] = STATE(66),
    [sym_string] = STATE(66),
    [sym__basic_string] = STATE(86),
    [sym__multiline_basic_string] = STATE(86),
    [sym__literal_string] = STATE(86),
    [sym__multiline_literal_string] = STATE(86),
    [sym_integer] = STATE(66),
    [sym_float] = STATE(66),
    [sym_array] = STATE(66),
    [sym_inline_table] = STATE(66),
    [aux_sym_array_repeat1] = STATE(26),
    [aux_sym_document_token1] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(31),
    [aux_sym_integer_token1] = ACTIONS(33),
    [aux_sym_integer_token2] = ACTIONS(35),
    [aux_sym_integer_token3] = ACTIONS(35),
    [aux_sym_integer_token4] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(37),
    [sym_boolean] = ACTIONS(47),
    [sym_offset_date_time] = ACTIONS(47),
    [sym_local_date_time] = ACTIONS(49),
    [sym_local_date] = ACTIONS(49),
    [sym_local_time] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(43),
  },
  [11] = {
    [sym__inline_value] = STATE(68),
    [sym_string] = STATE(68),
    [sym__basic_string] = STATE(86),
    [sym__multiline_basic_string] = STATE(86),
    [sym__literal_string] = STATE(86),
    [sym__multiline_literal_string] = STATE(86),
    [sym_integer] = STATE(68),
    [sym_float] = STATE(68),
    [sym_array] = STATE(68),
    [sym_inline_table] = STATE(68),
    [aux_sym_array_repeat1] = STATE(18),
    [aux_sym_document_token1] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(31),
    [aux_sym_integer_token1] = ACTIONS(33),
    [aux_sym_integer_token2] = ACTIONS(35),
    [aux_sym_integer_token3] = ACTIONS(35),
    [aux_sym_integer_token4] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(37),
    [sym_boolean] = ACTIONS(55),
    [sym_offset_date_time] = ACTIONS(55),
    [sym_local_date_time] = ACTIONS(57),
    [sym_local_date] = ACTIONS(57),
    [sym_local_time] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(43),
  },
  [12] = {
    [sym__inline_value] = STATE(68),
    [sym_string] = STATE(68),
    [sym__basic_string] = STATE(86),
    [sym__multiline_basic_string] = STATE(86),
    [sym__literal_string] = STATE(86),
    [sym__multiline_literal_string] = STATE(86),
    [sym_integer] = STATE(68),
    [sym_float] = STATE(68),
    [sym_array] = STATE(68),
    [sym_inline_table] = STATE(68),
    [aux_sym_array_repeat1] = STATE(8),
    [aux_sym_document_token1] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(31),
    [aux_sym_integer_token1] = ACTIONS(33),
    [aux_sym_integer_token2] = ACTIONS(35),
    [aux_sym_integer_token3] = ACTIONS(35),
    [aux_sym_integer_token4] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(37),
    [sym_boolean] = ACTIONS(55),
    [sym_offset_date_time] = ACTIONS(55),
    [sym_local_date_time] = ACTIONS(57),
    [sym_local_date] = ACTIONS(57),
    [sym_local_time] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(43),
  },
  [13] = {
    [sym__inline_value] = STATE(66),
    [sym_string] = STATE(66),
    [sym__basic_string] = STATE(86),
    [sym__multiline_basic_string] = STATE(86),
    [sym__literal_string] = STATE(86),
    [sym__multiline_literal_string] = STATE(86),
    [sym_integer] = STATE(66),
    [sym_float] = STATE(66),
    [sym_array] = STATE(66),
    [sym_inline_table] = STATE(66),
    [aux_sym_array_repeat1] = STATE(26),
    [aux_sym_document_token1] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(31),
    [aux_sym_integer_token1] = ACTIONS(33),
    [aux_sym_integer_token2] = ACTIONS(35),
    [aux_sym_integer_token3] = ACTIONS(35),
    [aux_sym_integer_token4] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(37),
    [sym_boolean] = ACTIONS(47),
    [sym_offset_date_time] = ACTIONS(47),
    [sym_local_date_time] = ACTIONS(49),
    [sym_local_date] = ACTIONS(49),
    [sym_local_time] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(43),
  },
  [14] = {
    [sym__inline_value] = STATE(66),
    [sym_string] = STATE(66),
    [sym__basic_string] = STATE(86),
    [sym__multiline_basic_string] = STATE(86),
    [sym__literal_string] = STATE(86),
    [sym__multiline_literal_string] = STATE(86),
    [sym_integer] = STATE(66),
    [sym_float] = STATE(66),
    [sym_array] = STATE(66),
    [sym_inline_table] = STATE(66),
    [aux_sym_array_repeat1] = STATE(26),
    [aux_sym_document_token1] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(31),
    [aux_sym_integer_token1] = ACTIONS(33),
    [aux_sym_integer_token2] = ACTIONS(35),
    [aux_sym_integer_token3] = ACTIONS(35),
    [aux_sym_integer_token4] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(37),
    [sym_boolean] = ACTIONS(47),
    [sym_offset_date_time] = ACTIONS(47),
    [sym_local_date_time] = ACTIONS(49),
    [sym_local_date] = ACTIONS(49),
    [sym_local_time] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(43),
  },
  [15] = {
    [sym__inline_value] = STATE(66),
    [sym_string] = STATE(66),
    [sym__basic_string] = STATE(86),
    [sym__multiline_basic_string] = STATE(86),
    [sym__literal_string] = STATE(86),
    [sym__multiline_literal_string] = STATE(86),
    [sym_integer] = STATE(66),
    [sym_float] = STATE(66),
    [sym_array] = STATE(66),
    [sym_inline_table] = STATE(66),
    [aux_sym_array_repeat1] = STATE(26),
    [aux_sym_document_token1] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(31),
    [aux_sym_integer_token1] = ACTIONS(33),
    [aux_sym_integer_token2] = ACTIONS(35),
    [aux_sym_integer_token3] = ACTIONS(35),
    [aux_sym_integer_token4] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(37),
    [sym_boolean] = ACTIONS(47),
    [sym_offset_date_time] = ACTIONS(47),
    [sym_local_date_time] = ACTIONS(49),
    [sym_local_date] = ACTIONS(49),
    [sym_local_time] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(43),
  },
  [16] = {
    [sym__inline_value] = STATE(54),
    [sym_string] = STATE(54),
    [sym__basic_string] = STATE(86),
    [sym__multiline_basic_string] = STATE(86),
    [sym__literal_string] = STATE(86),
    [sym__multiline_literal_string] = STATE(86),
    [sym_integer] = STATE(54),
    [sym_float] = STATE(54),
    [sym_array] = STATE(54),
    [sym_inline_table] = STATE(54),
    [aux_sym_array_repeat1] = STATE(2),
    [aux_sym_document_token1] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(31),
    [aux_sym_integer_token1] = ACTIONS(33),
    [aux_sym_integer_token2] = ACTIONS(35),
    [aux_sym_integer_token3] = ACTIONS(35),
    [aux_sym_integer_token4] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(37),
    [sym_boolean] = ACTIONS(87),
    [sym_offset_date_time] = ACTIONS(87),
    [sym_local_date_time] = ACTIONS(89),
    [sym_local_date] = ACTIONS(89),
    [sym_local_time] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(43),
  },
  [17] = {
    [sym__inline_value] = STATE(68),
    [sym_string] = STATE(68),
    [sym__basic_string] = STATE(86),
    [sym__multiline_basic_string] = STATE(86),
    [sym__literal_string] = STATE(86),
    [sym__multiline_literal_string] = STATE(86),
    [sym_integer] = STATE(68),
    [sym_float] = STATE(68),
    [sym_array] = STATE(68),
    [sym_inline_table] = STATE(68),
    [aux_sym_array_repeat1] = STATE(3),
    [aux_sym_document_token1] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(31),
    [aux_sym_integer_token1] = ACTIONS(33),
    [aux_sym_integer_token2] = ACTIONS(35),
    [aux_sym_integer_token3] = ACTIONS(35),
    [aux_sym_integer_token4] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(37),
    [sym_boolean] = ACTIONS(55),
    [sym_offset_date_time] = ACTIONS(55),
    [sym_local_date_time] = ACTIONS(57),
    [sym_local_date] = ACTIONS(57),
    [sym_local_time] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(43),
  },
  [18] = {
    [sym__inline_value] = STATE(66),
    [sym_string] = STATE(66),
    [sym__basic_string] = STATE(86),
    [sym__multiline_basic_string] = STATE(86),
    [sym__literal_string] = STATE(86),
    [sym__multiline_literal_string] = STATE(86),
    [sym_integer] = STATE(66),
    [sym_float] = STATE(66),
    [sym_array] = STATE(66),
    [sym_inline_table] = STATE(66),
    [aux_sym_array_repeat1] = STATE(26),
    [aux_sym_document_token1] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(31),
    [aux_sym_integer_token1] = ACTIONS(33),
    [aux_sym_integer_token2] = ACTIONS(35),
    [aux_sym_integer_token3] = ACTIONS(35),
    [aux_sym_integer_token4] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(37),
    [sym_boolean] = ACTIONS(47),
    [sym_offset_date_time] = ACTIONS(47),
    [sym_local_date_time] = ACTIONS(49),
    [sym_local_date] = ACTIONS(49),
    [sym_local_time] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(43),
  },
  [19] = {
    [sym__inline_value] = STATE(68),
    [sym_string] = STATE(68),
    [sym__basic_string] = STATE(86),
    [sym__multiline_basic_string] = STATE(86),
    [sym__literal_string] = STATE(86),
    [sym__multiline_literal_string] = STATE(86),
    [sym_integer] = STATE(68),
    [sym_float] = STATE(68),
    [sym_array] = STATE(68),
    [sym_inline_table] = STATE(68),
    [aux_sym_array_repeat1] = STATE(13),
    [aux_sym_document_token1] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(31),
    [aux_sym_integer_token1] = ACTIONS(33),
    [aux_sym_integer_token2] = ACTIONS(35),
    [aux_sym_integer_token3] = ACTIONS(35),
    [aux_sym_integer_token4] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(37),
    [sym_boolean] = ACTIONS(55),
    [sym_offset_date_time] = ACTIONS(55),
    [sym_local_date_time] = ACTIONS(57),
    [sym_local_date] = ACTIONS(57),
    [sym_local_time] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(43),
  },
  [20] = {
    [sym__inline_value] = STATE(61),
    [sym_string] = STATE(61),
    [sym__basic_string] = STATE(86),
    [sym__multiline_basic_string] = STATE(86),
    [sym__literal_string] = STATE(86),
    [sym__multiline_literal_string] = STATE(86),
    [sym_integer] = STATE(61),
    [sym_float] = STATE(61),
    [sym_array] = STATE(61),
    [sym_inline_table] = STATE(61),
    [aux_sym_array_repeat1] = STATE(21),
    [aux_sym_document_token1] = ACTIONS(97),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(31),
    [aux_sym_integer_token1] = ACTIONS(33),
    [aux_sym_integer_token2] = ACTIONS(35),
    [aux_sym_integer_token3] = ACTIONS(35),
    [aux_sym_integer_token4] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(37),
    [sym_boolean] = ACTIONS(101),
    [sym_offset_date_time] = ACTIONS(101),
    [sym_local_date_time] = ACTIONS(103),
    [sym_local_date] = ACTIONS(103),
    [sym_local_time] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(43),
  },
  [21] = {
    [sym__inline_value] = STATE(53),
    [sym_string] = STATE(53),
    [sym__basic_string] = STATE(86),
    [sym__multiline_basic_string] = STATE(86),
    [sym__literal_string] = STATE(86),
    [sym__multiline_literal_string] = STATE(86),
    [sym_integer] = STATE(53),
    [sym_float] = STATE(53),
    [sym_array] = STATE(53),
    [sym_inline_table] = STATE(53),
    [aux_sym_array_repeat1] = STATE(26),
    [aux_sym_document_token1] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(31),
    [aux_sym_integer_token1] = ACTIONS(33),
    [aux_sym_integer_token2] = ACTIONS(35),
    [aux_sym_integer_token3] = ACTIONS(35),
    [aux_sym_integer_token4] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(37),
    [sym_boolean] = ACTIONS(107),
    [sym_offset_date_time] = ACTIONS(107),
    [sym_local_date_time] = ACTIONS(109),
    [sym_local_date] = ACTIONS(109),
    [sym_local_time] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(43),
  },
  [22] = {
    [sym__inline_value] = STATE(68),
    [sym_string] = STATE(68),
    [sym__basic_string] = STATE(86),
    [sym__multiline_basic_string] = STATE(86),
    [sym__literal_string] = STATE(86),
    [sym__multiline_literal_string] = STATE(86),
    [sym_integer] = STATE(68),
    [sym_float] = STATE(68),
    [sym_array] = STATE(68),
    [sym_inline_table] = STATE(68),
    [aux_sym_array_repeat1] = STATE(23),
    [aux_sym_document_token1] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(31),
    [aux_sym_integer_token1] = ACTIONS(33),
    [aux_sym_integer_token2] = ACTIONS(35),
    [aux_sym_integer_token3] = ACTIONS(35),
    [aux_sym_integer_token4] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(37),
    [sym_boolean] = ACTIONS(55),
    [sym_offset_date_time] = ACTIONS(55),
    [sym_local_date_time] = ACTIONS(57),
    [sym_local_date] = ACTIONS(57),
    [sym_local_time] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(43),
  },
  [23] = {
    [sym__inline_value] = STATE(66),
    [sym_string] = STATE(66),
    [sym__basic_string] = STATE(86),
    [sym__multiline_basic_string] = STATE(86),
    [sym__literal_string] = STATE(86),
    [sym__multiline_literal_string] = STATE(86),
    [sym_integer] = STATE(66),
    [sym_float] = STATE(66),
    [sym_array] = STATE(66),
    [sym_inline_table] = STATE(66),
    [aux_sym_array_repeat1] = STATE(26),
    [aux_sym_document_token1] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(31),
    [aux_sym_integer_token1] = ACTIONS(33),
    [aux_sym_integer_token2] = ACTIONS(35),
    [aux_sym_integer_token3] = ACTIONS(35),
    [aux_sym_integer_token4] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(37),
    [sym_boolean] = ACTIONS(47),
    [sym_offset_date_time] = ACTIONS(47),
    [sym_local_date_time] = ACTIONS(49),
    [sym_local_date] = ACTIONS(49),
    [sym_local_time] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(43),
  },
  [24] = {
    [sym__inline_value] = STATE(111),
    [sym_string] = STATE(111),
    [sym__basic_string] = STATE(86),
    [sym__multiline_basic_string] = STATE(86),
    [sym__literal_string] = STATE(86),
    [sym__multiline_literal_string] = STATE(86),
    [sym_integer] = STATE(111),
    [sym_float] = STATE(111),
    [sym_array] = STATE(111),
    [sym_inline_table] = STATE(111),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(31),
    [aux_sym_integer_token1] = ACTIONS(33),
    [aux_sym_integer_token2] = ACTIONS(35),
    [aux_sym_integer_token3] = ACTIONS(35),
    [aux_sym_integer_token4] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(37),
    [sym_boolean] = ACTIONS(113),
    [sym_offset_date_time] = ACTIONS(113),
    [sym_local_date_time] = ACTIONS(115),
    [sym_local_date] = ACTIONS(115),
    [sym_local_time] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(43),
  },
  [25] = {
    [sym__inline_value] = STATE(137),
    [sym_string] = STATE(137),
    [sym__basic_string] = STATE(126),
    [sym__multiline_basic_string] = STATE(126),
    [sym__literal_string] = STATE(126),
    [sym__multiline_literal_string] = STATE(126),
    [sym_integer] = STATE(137),
    [sym_float] = STATE(137),
    [sym_array] = STATE(137),
    [sym_inline_table] = STATE(137),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(121),
    [anon_sym_SQUOTE] = ACTIONS(123),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(125),
    [aux_sym_integer_token1] = ACTIONS(127),
    [aux_sym_integer_token2] = ACTIONS(129),
    [aux_sym_integer_token3] = ACTIONS(129),
    [aux_sym_integer_token4] = ACTIONS(129),
    [aux_sym_float_token1] = ACTIONS(131),
    [aux_sym_float_token2] = ACTIONS(131),
    [sym_boolean] = ACTIONS(133),
    [sym_offset_date_time] = ACTIONS(133),
    [sym_local_date_time] = ACTIONS(135),
    [sym_local_date] = ACTIONS(135),
    [sym_local_time] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(137),
  },
  [26] = {
    [aux_sym_array_repeat1] = STATE(26),
    [aux_sym_document_token1] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(142),
    [anon_sym_RBRACK] = ACTIONS(142),
    [anon_sym_DQUOTE] = ACTIONS(144),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(142),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(142),
    [aux_sym_integer_token1] = ACTIONS(144),
    [aux_sym_integer_token2] = ACTIONS(142),
    [aux_sym_integer_token3] = ACTIONS(142),
    [aux_sym_integer_token4] = ACTIONS(142),
    [aux_sym_float_token1] = ACTIONS(142),
    [aux_sym_float_token2] = ACTIONS(142),
    [sym_boolean] = ACTIONS(142),
    [sym_offset_date_time] = ACTIONS(142),
    [sym_local_date_time] = ACTIONS(144),
    [sym_local_date] = ACTIONS(144),
    [sym_local_time] = ACTIONS(142),
    [anon_sym_COMMA] = ACTIONS(142),
    [anon_sym_LBRACE] = ACTIONS(142),
  },
  [27] = {
    [sym_table] = STATE(48),
    [sym_table_array_element] = STATE(48),
    [sym_pair] = STATE(32),
    [sym__inline_pair] = STATE(142),
    [sym_key] = STATE(115),
    [sym_dotted_key] = STATE(115),
    [sym__quoted_key] = STATE(106),
    [sym__basic_string] = STATE(106),
    [sym__literal_string] = STATE(106),
    [aux_sym_document_repeat1] = STATE(32),
    [aux_sym_document_repeat2] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(146),
    [aux_sym_document_token1] = ACTIONS(148),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(11),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [28] = {
    [sym_pair] = STATE(31),
    [sym__inline_pair] = STATE(142),
    [sym_key] = STATE(115),
    [sym_dotted_key] = STATE(115),
    [sym__quoted_key] = STATE(106),
    [sym__basic_string] = STATE(106),
    [sym__literal_string] = STATE(106),
    [aux_sym_document_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(150),
    [aux_sym_document_token1] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(154),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(150),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [29] = {
    [sym_pair] = STATE(30),
    [sym__inline_pair] = STATE(142),
    [sym_key] = STATE(115),
    [sym_dotted_key] = STATE(115),
    [sym__quoted_key] = STATE(106),
    [sym__basic_string] = STATE(106),
    [sym__literal_string] = STATE(106),
    [aux_sym_document_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(156),
    [aux_sym_document_token1] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(156),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [30] = {
    [sym_pair] = STATE(32),
    [sym__inline_pair] = STATE(142),
    [sym_key] = STATE(115),
    [sym_dotted_key] = STATE(115),
    [sym__quoted_key] = STATE(106),
    [sym__basic_string] = STATE(106),
    [sym__literal_string] = STATE(106),
    [aux_sym_document_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(162),
    [aux_sym_document_token1] = ACTIONS(148),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(164),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(162),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [31] = {
    [sym_pair] = STATE(32),
    [sym__inline_pair] = STATE(142),
    [sym_key] = STATE(115),
    [sym_dotted_key] = STATE(115),
    [sym__quoted_key] = STATE(106),
    [sym__basic_string] = STATE(106),
    [sym__literal_string] = STATE(106),
    [aux_sym_document_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(166),
    [aux_sym_document_token1] = ACTIONS(148),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(168),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(166),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [32] = {
    [sym_pair] = STATE(32),
    [sym__inline_pair] = STATE(142),
    [sym_key] = STATE(115),
    [sym_dotted_key] = STATE(115),
    [sym__quoted_key] = STATE(106),
    [sym__basic_string] = STATE(106),
    [sym__literal_string] = STATE(106),
    [aux_sym_document_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(170),
    [aux_sym_document_token1] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(175),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(170),
    [sym__bare_key] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(180),
    [anon_sym_SQUOTE] = ACTIONS(183),
  },
  [33] = {
    [sym__inline_pair] = STATE(94),
    [sym_key] = STATE(110),
    [sym_dotted_key] = STATE(110),
    [sym__quoted_key] = STATE(106),
    [sym__basic_string] = STATE(106),
    [sym__literal_string] = STATE(106),
    [sym_comment] = ACTIONS(3),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(186),
  },
  [34] = {
    [sym__inline_pair] = STATE(99),
    [sym_key] = STATE(110),
    [sym_dotted_key] = STATE(110),
    [sym__quoted_key] = STATE(106),
    [sym__basic_string] = STATE(106),
    [sym__literal_string] = STATE(106),
    [sym_comment] = ACTIONS(3),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(188),
  },
  [35] = {
    [sym__inline_pair] = STATE(113),
    [sym_key] = STATE(110),
    [sym_dotted_key] = STATE(110),
    [sym__quoted_key] = STATE(106),
    [sym__basic_string] = STATE(106),
    [sym__literal_string] = STATE(106),
    [sym_comment] = ACTIONS(3),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [36] = {
    [sym_key] = STATE(121),
    [sym_dotted_key] = STATE(121),
    [sym__quoted_key] = STATE(106),
    [sym__basic_string] = STATE(106),
    [sym__literal_string] = STATE(106),
    [sym_comment] = ACTIONS(3),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [37] = {
    [sym_key] = STATE(122),
    [sym_dotted_key] = STATE(122),
    [sym__quoted_key] = STATE(109),
    [sym__basic_string] = STATE(109),
    [sym__literal_string] = STATE(109),
    [sym_comment] = ACTIONS(3),
    [sym__bare_key] = ACTIONS(190),
    [anon_sym_DQUOTE] = ACTIONS(192),
    [anon_sym_SQUOTE] = ACTIONS(194),
  },
  [38] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(39),
    [sym_comment] = ACTIONS(196),
    [aux_sym__basic_string_token1] = ACTIONS(198),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(198),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(200),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(202),
    [sym_escape_sequence] = ACTIONS(200),
    [sym__escape_line_ending] = ACTIONS(200),
  },
  [39] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(39),
    [sym_comment] = ACTIONS(196),
    [aux_sym__basic_string_token1] = ACTIONS(204),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(204),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(207),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(210),
    [sym_escape_sequence] = ACTIONS(207),
    [sym__escape_line_ending] = ACTIONS(207),
  },
  [40] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(38),
    [sym_comment] = ACTIONS(196),
    [aux_sym__basic_string_token1] = ACTIONS(212),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(212),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(214),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(216),
    [sym_escape_sequence] = ACTIONS(214),
    [sym__escape_line_ending] = ACTIONS(214),
  },
  [41] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(42),
    [sym_comment] = ACTIONS(196),
    [aux_sym__basic_string_token1] = ACTIONS(218),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(218),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(220),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(222),
    [sym_escape_sequence] = ACTIONS(220),
    [sym__escape_line_ending] = ACTIONS(220),
  },
  [42] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(39),
    [sym_comment] = ACTIONS(196),
    [aux_sym__basic_string_token1] = ACTIONS(198),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(198),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(200),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(224),
    [sym_escape_sequence] = ACTIONS(200),
    [sym__escape_line_ending] = ACTIONS(200),
  },
  [43] = {
    [sym_key] = STATE(108),
    [sym__quoted_key] = STATE(109),
    [sym__basic_string] = STATE(109),
    [sym__literal_string] = STATE(109),
    [sym_comment] = ACTIONS(3),
    [sym__bare_key] = ACTIONS(190),
    [anon_sym_DQUOTE] = ACTIONS(192),
    [anon_sym_SQUOTE] = ACTIONS(194),
  },
  [44] = {
    [sym_key] = STATE(104),
    [sym__quoted_key] = STATE(106),
    [sym__basic_string] = STATE(106),
    [sym__literal_string] = STATE(106),
    [sym_comment] = ACTIONS(3),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(226),
    [aux_sym_document_token1] = ACTIONS(226),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(228),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(226),
    [sym__bare_key] = ACTIONS(226),
    [anon_sym_DQUOTE] = ACTIONS(226),
    [anon_sym_SQUOTE] = ACTIONS(226),
  },
  [46] = {
    [aux_sym_document_token1] = ACTIONS(230),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(230),
    [anon_sym_EQ] = ACTIONS(230),
    [anon_sym_DOT] = ACTIONS(230),
    [anon_sym_COMMA] = ACTIONS(230),
    [anon_sym_RBRACE] = ACTIONS(230),
  },
  [47] = {
    [sym_table] = STATE(47),
    [sym_table_array_element] = STATE(47),
    [aux_sym_document_repeat2] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(232),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(234),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(237),
  },
  [48] = {
    [sym_table] = STATE(47),
    [sym_table_array_element] = STATE(47),
    [aux_sym_document_repeat2] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(240),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(11),
  },
  [49] = {
    [aux_sym_document_token1] = ACTIONS(242),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(242),
    [anon_sym_EQ] = ACTIONS(242),
    [anon_sym_DOT] = ACTIONS(242),
    [anon_sym_COMMA] = ACTIONS(242),
    [anon_sym_RBRACE] = ACTIONS(242),
  },
  [50] = {
    [aux_sym_document_token1] = ACTIONS(244),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(244),
    [anon_sym_EQ] = ACTIONS(244),
    [anon_sym_DOT] = ACTIONS(244),
    [anon_sym_COMMA] = ACTIONS(244),
    [anon_sym_RBRACE] = ACTIONS(244),
  },
  [51] = {
    [aux_sym_document_token1] = ACTIONS(246),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(246),
    [anon_sym_EQ] = ACTIONS(246),
    [anon_sym_DOT] = ACTIONS(246),
    [anon_sym_COMMA] = ACTIONS(246),
    [anon_sym_RBRACE] = ACTIONS(246),
  },
  [52] = {
    [sym_table] = STATE(47),
    [sym_table_array_element] = STATE(47),
    [aux_sym_document_repeat2] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(11),
  },
  [53] = {
    [aux_sym_array_repeat1] = STATE(58),
    [aux_sym_array_repeat2] = STATE(100),
    [aux_sym_document_token1] = ACTIONS(248),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(250),
  },
  [54] = {
    [aux_sym_array_repeat1] = STATE(57),
    [aux_sym_array_repeat2] = STATE(96),
    [aux_sym_document_token1] = ACTIONS(252),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(254),
  },
  [55] = {
    [aux_sym_array_repeat1] = STATE(65),
    [aux_sym_array_repeat2] = STATE(105),
    [aux_sym_document_token1] = ACTIONS(256),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(258),
  },
  [56] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(60),
    [sym_comment] = ACTIONS(196),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(260),
    [aux_sym__literal_string_token1] = ACTIONS(262),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(262),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(264),
  },
  [57] = {
    [aux_sym_array_repeat1] = STATE(26),
    [aux_sym_array_repeat2] = STATE(105),
    [aux_sym_document_token1] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(258),
  },
  [58] = {
    [aux_sym_array_repeat1] = STATE(26),
    [aux_sym_array_repeat2] = STATE(98),
    [aux_sym_document_token1] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(77),
    [anon_sym_COMMA] = ACTIONS(266),
  },
  [59] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(63),
    [sym_comment] = ACTIONS(196),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(268),
    [aux_sym__literal_string_token1] = ACTIONS(270),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(270),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(272),
  },
  [60] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(60),
    [sym_comment] = ACTIONS(196),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(274),
    [aux_sym__literal_string_token1] = ACTIONS(277),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(277),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(280),
  },
  [61] = {
    [aux_sym_array_repeat1] = STATE(64),
    [aux_sym_array_repeat2] = STATE(103),
    [aux_sym_document_token1] = ACTIONS(282),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_COMMA] = ACTIONS(284),
  },
  [62] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(56),
    [sym_comment] = ACTIONS(196),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(286),
    [aux_sym__literal_string_token1] = ACTIONS(288),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(288),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(290),
  },
  [63] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(60),
    [sym_comment] = ACTIONS(196),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(260),
    [aux_sym__literal_string_token1] = ACTIONS(262),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(262),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(292),
  },
  [64] = {
    [aux_sym_array_repeat1] = STATE(26),
    [aux_sym_array_repeat2] = STATE(100),
    [aux_sym_document_token1] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(250),
  },
  [65] = {
    [aux_sym_array_repeat1] = STATE(26),
    [aux_sym_array_repeat2] = STATE(107),
    [aux_sym_document_token1] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(294),
  },
  [66] = {
    [aux_sym_array_repeat1] = STATE(81),
    [aux_sym_document_token1] = ACTIONS(296),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(298),
    [anon_sym_COMMA] = ACTIONS(298),
  },
  [67] = {
    [aux_sym_document_token1] = ACTIONS(300),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(300),
    [anon_sym_COMMA] = ACTIONS(300),
    [anon_sym_RBRACE] = ACTIONS(300),
  },
  [68] = {
    [aux_sym_array_repeat1] = STATE(74),
    [aux_sym_document_token1] = ACTIONS(302),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(304),
    [anon_sym_COMMA] = ACTIONS(304),
  },
  [69] = {
    [aux_sym__basic_string_repeat1] = STATE(73),
    [sym_comment] = ACTIONS(196),
    [aux_sym__basic_string_token1] = ACTIONS(306),
    [anon_sym_DQUOTE2] = ACTIONS(308),
    [sym_escape_sequence] = ACTIONS(310),
  },
  [70] = {
    [aux_sym__basic_string_repeat1] = STATE(69),
    [sym_comment] = ACTIONS(196),
    [aux_sym__basic_string_token1] = ACTIONS(312),
    [anon_sym_DQUOTE2] = ACTIONS(314),
    [sym_escape_sequence] = ACTIONS(316),
  },
  [71] = {
    [aux_sym__basic_string_repeat1] = STATE(72),
    [sym_comment] = ACTIONS(196),
    [aux_sym__basic_string_token1] = ACTIONS(318),
    [anon_sym_DQUOTE2] = ACTIONS(320),
    [sym_escape_sequence] = ACTIONS(322),
  },
  [72] = {
    [aux_sym__basic_string_repeat1] = STATE(73),
    [sym_comment] = ACTIONS(196),
    [aux_sym__basic_string_token1] = ACTIONS(306),
    [anon_sym_DQUOTE2] = ACTIONS(324),
    [sym_escape_sequence] = ACTIONS(310),
  },
  [73] = {
    [aux_sym__basic_string_repeat1] = STATE(73),
    [sym_comment] = ACTIONS(196),
    [aux_sym__basic_string_token1] = ACTIONS(326),
    [anon_sym_DQUOTE2] = ACTIONS(329),
    [sym_escape_sequence] = ACTIONS(331),
  },
  [74] = {
    [aux_sym_array_repeat1] = STATE(26),
    [aux_sym_document_token1] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(298),
    [anon_sym_COMMA] = ACTIONS(298),
  },
  [75] = {
    [aux_sym__basic_string_repeat1] = STATE(73),
    [sym_comment] = ACTIONS(196),
    [aux_sym__basic_string_token1] = ACTIONS(306),
    [anon_sym_DQUOTE2] = ACTIONS(334),
    [sym_escape_sequence] = ACTIONS(310),
  },
  [76] = {
    [aux_sym__basic_string_repeat1] = STATE(75),
    [sym_comment] = ACTIONS(196),
    [aux_sym__basic_string_token1] = ACTIONS(336),
    [anon_sym_DQUOTE2] = ACTIONS(338),
    [sym_escape_sequence] = ACTIONS(340),
  },
  [77] = {
    [aux_sym_document_token1] = ACTIONS(342),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(342),
    [anon_sym_COMMA] = ACTIONS(342),
    [anon_sym_RBRACE] = ACTIONS(342),
  },
  [78] = {
    [aux_sym_document_token1] = ACTIONS(344),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(344),
    [anon_sym_COMMA] = ACTIONS(344),
    [anon_sym_RBRACE] = ACTIONS(344),
  },
  [79] = {
    [aux_sym_document_token1] = ACTIONS(346),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(346),
    [anon_sym_COMMA] = ACTIONS(346),
    [anon_sym_RBRACE] = ACTIONS(346),
  },
  [80] = {
    [aux_sym_document_token1] = ACTIONS(348),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(348),
    [anon_sym_COMMA] = ACTIONS(348),
    [anon_sym_RBRACE] = ACTIONS(348),
  },
  [81] = {
    [aux_sym_array_repeat1] = STATE(26),
    [aux_sym_document_token1] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(350),
    [anon_sym_COMMA] = ACTIONS(350),
  },
  [82] = {
    [aux_sym_document_token1] = ACTIONS(352),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(352),
    [anon_sym_COMMA] = ACTIONS(352),
    [anon_sym_RBRACE] = ACTIONS(352),
  },
  [83] = {
    [aux_sym_document_token1] = ACTIONS(354),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(354),
    [anon_sym_COMMA] = ACTIONS(354),
    [anon_sym_RBRACE] = ACTIONS(354),
  },
  [84] = {
    [aux_sym_document_token1] = ACTIONS(356),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(356),
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_RBRACE] = ACTIONS(356),
  },
  [85] = {
    [aux_sym_document_token1] = ACTIONS(358),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(358),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_RBRACE] = ACTIONS(358),
  },
  [86] = {
    [aux_sym_document_token1] = ACTIONS(360),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(360),
    [anon_sym_COMMA] = ACTIONS(360),
    [anon_sym_RBRACE] = ACTIONS(360),
  },
  [87] = {
    [aux_sym_document_token1] = ACTIONS(362),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(362),
    [anon_sym_COMMA] = ACTIONS(362),
    [anon_sym_RBRACE] = ACTIONS(362),
  },
  [88] = {
    [aux_sym_document_token1] = ACTIONS(364),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(364),
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_RBRACE] = ACTIONS(364),
  },
  [89] = {
    [aux_sym_document_token1] = ACTIONS(366),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(366),
    [anon_sym_COMMA] = ACTIONS(366),
    [anon_sym_RBRACE] = ACTIONS(366),
  },
  [90] = {
    [aux_sym_document_token1] = ACTIONS(368),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(368),
    [anon_sym_COMMA] = ACTIONS(368),
    [anon_sym_RBRACE] = ACTIONS(368),
  },
  [91] = {
    [aux_sym_document_token1] = ACTIONS(370),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(370),
    [anon_sym_COMMA] = ACTIONS(370),
    [anon_sym_RBRACE] = ACTIONS(370),
  },
  [92] = {
    [aux_sym_document_token1] = ACTIONS(372),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(372),
    [anon_sym_COMMA] = ACTIONS(372),
    [anon_sym_RBRACE] = ACTIONS(372),
  },
  [93] = {
    [aux_sym_document_token1] = ACTIONS(374),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(374),
    [anon_sym_COMMA] = ACTIONS(374),
    [anon_sym_RBRACE] = ACTIONS(374),
  },
  [94] = {
    [aux_sym_inline_table_repeat1] = STATE(102),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(376),
    [anon_sym_RBRACE] = ACTIONS(378),
  },
  [95] = {
    [aux_sym_inline_table_repeat1] = STATE(101),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(376),
    [anon_sym_RBRACE] = ACTIONS(380),
  },
  [96] = {
    [aux_sym_array_repeat2] = STATE(97),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(258),
  },
  [97] = {
    [aux_sym_array_repeat2] = STATE(97),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(304),
    [anon_sym_COMMA] = ACTIONS(382),
  },
  [98] = {
    [aux_sym_array_repeat2] = STATE(97),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(385),
  },
  [99] = {
    [aux_sym_inline_table_repeat1] = STATE(95),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(376),
    [anon_sym_RBRACE] = ACTIONS(387),
  },
  [100] = {
    [aux_sym_array_repeat2] = STATE(97),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(77),
    [anon_sym_COMMA] = ACTIONS(266),
  },
  [101] = {
    [aux_sym_inline_table_repeat1] = STATE(101),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(389),
    [anon_sym_RBRACE] = ACTIONS(392),
  },
  [102] = {
    [aux_sym_inline_table_repeat1] = STATE(101),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(376),
    [anon_sym_RBRACE] = ACTIONS(394),
  },
  [103] = {
    [aux_sym_array_repeat2] = STATE(97),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(250),
  },
  [104] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(396),
    [anon_sym_EQ] = ACTIONS(396),
    [anon_sym_DOT] = ACTIONS(396),
  },
  [105] = {
    [aux_sym_array_repeat2] = STATE(97),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(294),
  },
  [106] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(398),
    [anon_sym_EQ] = ACTIONS(398),
    [anon_sym_DOT] = ACTIONS(398),
  },
  [107] = {
    [aux_sym_array_repeat2] = STATE(97),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(53),
    [anon_sym_COMMA] = ACTIONS(400),
  },
  [108] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(396),
    [anon_sym_DOT] = ACTIONS(396),
  },
  [109] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(398),
    [anon_sym_DOT] = ACTIONS(398),
  },
  [110] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(402),
    [anon_sym_DOT] = ACTIONS(404),
  },
  [111] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(406),
    [anon_sym_RBRACE] = ACTIONS(406),
  },
  [112] = {
    [sym_comment] = ACTIONS(196),
    [aux_sym__literal_string_token1] = ACTIONS(408),
    [anon_sym_SQUOTE2] = ACTIONS(410),
  },
  [113] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(412),
    [anon_sym_RBRACE] = ACTIONS(412),
  },
  [114] = {
    [sym_comment] = ACTIONS(196),
    [aux_sym__literal_string_token1] = ACTIONS(414),
    [anon_sym_SQUOTE2] = ACTIONS(416),
  },
  [115] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(418),
    [anon_sym_DOT] = ACTIONS(404),
  },
  [116] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(246),
    [anon_sym_DOT] = ACTIONS(246),
  },
  [117] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(244),
    [anon_sym_DOT] = ACTIONS(244),
  },
  [118] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(230),
    [anon_sym_DOT] = ACTIONS(230),
  },
  [119] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(242),
    [anon_sym_DOT] = ACTIONS(242),
  },
  [120] = {
    [sym_comment] = ACTIONS(196),
    [aux_sym__literal_string_token1] = ACTIONS(420),
    [anon_sym_SQUOTE2] = ACTIONS(422),
  },
  [121] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(424),
    [anon_sym_DOT] = ACTIONS(404),
  },
  [122] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(426),
    [anon_sym_DOT] = ACTIONS(428),
  },
  [123] = {
    [sym_comment] = ACTIONS(3),
    [sym__line_ending_or_eof] = ACTIONS(246),
  },
  [124] = {
    [sym_comment] = ACTIONS(3),
    [sym__line_ending_or_eof] = ACTIONS(244),
  },
  [125] = {
    [sym_comment] = ACTIONS(3),
    [sym__line_ending_or_eof] = ACTIONS(372),
  },
  [126] = {
    [sym_comment] = ACTIONS(3),
    [sym__line_ending_or_eof] = ACTIONS(360),
  },
  [127] = {
    [sym_comment] = ACTIONS(3),
    [sym__line_ending_or_eof] = ACTIONS(366),
  },
  [128] = {
    [sym_comment] = ACTIONS(3),
    [sym__line_ending_or_eof] = ACTIONS(356),
  },
  [129] = {
    [sym_comment] = ACTIONS(3),
    [sym__line_ending_or_eof] = ACTIONS(354),
  },
  [130] = {
    [sym_comment] = ACTIONS(3),
    [sym__line_ending_or_eof] = ACTIONS(348),
  },
  [131] = {
    [sym_comment] = ACTIONS(3),
    [sym__line_ending_or_eof] = ACTIONS(362),
  },
  [132] = {
    [sym_comment] = ACTIONS(3),
    [sym__line_ending_or_eof] = ACTIONS(430),
  },
  [133] = {
    [sym_comment] = ACTIONS(3),
    [sym__line_ending_or_eof] = ACTIONS(432),
  },
  [134] = {
    [sym_comment] = ACTIONS(3),
    [sym__line_ending_or_eof] = ACTIONS(370),
  },
  [135] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE2] = ACTIONS(434),
  },
  [136] = {
    [sym_comment] = ACTIONS(3),
    [sym__line_ending_or_eof] = ACTIONS(368),
  },
  [137] = {
    [sym_comment] = ACTIONS(3),
    [sym__line_ending_or_eof] = ACTIONS(406),
  },
  [138] = {
    [sym_comment] = ACTIONS(3),
    [sym__line_ending_or_eof] = ACTIONS(364),
  },
  [139] = {
    [sym_comment] = ACTIONS(3),
    [sym__line_ending_or_eof] = ACTIONS(230),
  },
  [140] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE2] = ACTIONS(436),
  },
  [141] = {
    [sym_comment] = ACTIONS(3),
    [sym__line_ending_or_eof] = ACTIONS(358),
  },
  [142] = {
    [sym_comment] = ACTIONS(3),
    [sym__line_ending_or_eof] = ACTIONS(438),
  },
  [143] = {
    [sym_comment] = ACTIONS(3),
    [sym__line_ending_or_eof] = ACTIONS(342),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(440),
    [sym_comment] = ACTIONS(3),
  },
  [145] = {
    [sym_comment] = ACTIONS(3),
    [sym__line_ending_or_eof] = ACTIONS(300),
  },
  [146] = {
    [sym_comment] = ACTIONS(3),
    [sym__line_ending_or_eof] = ACTIONS(352),
  },
  [147] = {
    [sym_comment] = ACTIONS(3),
    [sym__line_ending_or_eof] = ACTIONS(346),
  },
  [148] = {
    [sym_comment] = ACTIONS(3),
    [sym__line_ending_or_eof] = ACTIONS(374),
  },
  [149] = {
    [sym_comment] = ACTIONS(3),
    [sym__line_ending_or_eof] = ACTIONS(344),
  },
  [150] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE2] = ACTIONS(442),
  },
  [151] = {
    [sym_comment] = ACTIONS(3),
    [sym__line_ending_or_eof] = ACTIONS(242),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(27),
  [9] = {.count = 1, .reusable = false}, SHIFT(36),
  [11] = {.count = 1, .reusable = true}, SHIFT(37),
  [13] = {.count = 1, .reusable = true}, SHIFT(106),
  [15] = {.count = 1, .reusable = true}, SHIFT(71),
  [17] = {.count = 1, .reusable = true}, SHIFT(114),
  [19] = {.count = 1, .reusable = true}, SHIFT(26),
  [21] = {.count = 1, .reusable = true}, SHIFT(20),
  [23] = {.count = 1, .reusable = true}, SHIFT(125),
  [25] = {.count = 1, .reusable = false}, SHIFT(71),
  [27] = {.count = 1, .reusable = true}, SHIFT(40),
  [29] = {.count = 1, .reusable = false}, SHIFT(114),
  [31] = {.count = 1, .reusable = true}, SHIFT(59),
  [33] = {.count = 1, .reusable = false}, SHIFT(83),
  [35] = {.count = 1, .reusable = true}, SHIFT(83),
  [37] = {.count = 1, .reusable = true}, SHIFT(84),
  [39] = {.count = 1, .reusable = true}, SHIFT(55),
  [41] = {.count = 1, .reusable = false}, SHIFT(55),
  [43] = {.count = 1, .reusable = true}, SHIFT(33),
  [45] = {.count = 1, .reusable = true}, SHIFT(143),
  [47] = {.count = 1, .reusable = true}, SHIFT(66),
  [49] = {.count = 1, .reusable = false}, SHIFT(66),
  [51] = {.count = 1, .reusable = true}, SHIFT(15),
  [53] = {.count = 1, .reusable = true}, SHIFT(147),
  [55] = {.count = 1, .reusable = true}, SHIFT(68),
  [57] = {.count = 1, .reusable = false}, SHIFT(68),
  [59] = {.count = 1, .reusable = true}, SHIFT(14),
  [61] = {.count = 1, .reusable = true}, SHIFT(78),
  [63] = {.count = 1, .reusable = true}, SHIFT(6),
  [65] = {.count = 1, .reusable = true}, SHIFT(79),
  [67] = {.count = 1, .reusable = true}, SHIFT(10),
  [69] = {.count = 1, .reusable = true}, SHIFT(130),
  [71] = {.count = 1, .reusable = true}, SHIFT(18),
  [73] = {.count = 1, .reusable = true}, SHIFT(131),
  [75] = {.count = 1, .reusable = true}, SHIFT(8),
  [77] = {.count = 1, .reusable = true}, SHIFT(80),
  [79] = {.count = 1, .reusable = true}, SHIFT(77),
  [81] = {.count = 1, .reusable = true}, SHIFT(149),
  [83] = {.count = 1, .reusable = true}, SHIFT(2),
  [85] = {.count = 1, .reusable = true}, SHIFT(138),
  [87] = {.count = 1, .reusable = true}, SHIFT(54),
  [89] = {.count = 1, .reusable = false}, SHIFT(54),
  [91] = {.count = 1, .reusable = true}, SHIFT(3),
  [93] = {.count = 1, .reusable = true}, SHIFT(13),
  [95] = {.count = 1, .reusable = true}, SHIFT(87),
  [97] = {.count = 1, .reusable = true}, SHIFT(21),
  [99] = {.count = 1, .reusable = true}, SHIFT(88),
  [101] = {.count = 1, .reusable = true}, SHIFT(61),
  [103] = {.count = 1, .reusable = false}, SHIFT(61),
  [105] = {.count = 1, .reusable = true}, SHIFT(92),
  [107] = {.count = 1, .reusable = true}, SHIFT(53),
  [109] = {.count = 1, .reusable = false}, SHIFT(53),
  [111] = {.count = 1, .reusable = true}, SHIFT(23),
  [113] = {.count = 1, .reusable = true}, SHIFT(111),
  [115] = {.count = 1, .reusable = false}, SHIFT(111),
  [117] = {.count = 1, .reusable = true}, SHIFT(16),
  [119] = {.count = 1, .reusable = false}, SHIFT(70),
  [121] = {.count = 1, .reusable = true}, SHIFT(41),
  [123] = {.count = 1, .reusable = false}, SHIFT(112),
  [125] = {.count = 1, .reusable = true}, SHIFT(62),
  [127] = {.count = 1, .reusable = false}, SHIFT(129),
  [129] = {.count = 1, .reusable = true}, SHIFT(129),
  [131] = {.count = 1, .reusable = true}, SHIFT(128),
  [133] = {.count = 1, .reusable = true}, SHIFT(137),
  [135] = {.count = 1, .reusable = false}, SHIFT(137),
  [137] = {.count = 1, .reusable = true}, SHIFT(34),
  [139] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(26),
  [142] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2),
  [144] = {.count = 1, .reusable = false}, REDUCE(aux_sym_array_repeat1, 2),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [148] = {.count = 1, .reusable = true}, SHIFT(32),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_table, 4),
  [152] = {.count = 1, .reusable = true}, SHIFT(31),
  [154] = {.count = 1, .reusable = false}, REDUCE(sym_table, 4),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_table_array_element, 4),
  [158] = {.count = 1, .reusable = true}, SHIFT(30),
  [160] = {.count = 1, .reusable = false}, REDUCE(sym_table_array_element, 4),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_table_array_element, 5),
  [164] = {.count = 1, .reusable = false}, REDUCE(sym_table_array_element, 5),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym_table, 5),
  [168] = {.count = 1, .reusable = false}, REDUCE(sym_table, 5),
  [170] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [172] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(32),
  [175] = {.count = 1, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2),
  [177] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(106),
  [180] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(71),
  [183] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(114),
  [186] = {.count = 1, .reusable = true}, SHIFT(91),
  [188] = {.count = 1, .reusable = true}, SHIFT(134),
  [190] = {.count = 1, .reusable = true}, SHIFT(109),
  [192] = {.count = 1, .reusable = true}, SHIFT(76),
  [194] = {.count = 1, .reusable = true}, SHIFT(120),
  [196] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [198] = {.count = 1, .reusable = false}, SHIFT(39),
  [200] = {.count = 1, .reusable = true}, SHIFT(39),
  [202] = {.count = 1, .reusable = true}, SHIFT(93),
  [204] = {.count = 2, .reusable = false}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2), SHIFT_REPEAT(39),
  [207] = {.count = 2, .reusable = true}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2), SHIFT_REPEAT(39),
  [210] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2),
  [212] = {.count = 1, .reusable = false}, SHIFT(38),
  [214] = {.count = 1, .reusable = true}, SHIFT(38),
  [216] = {.count = 1, .reusable = true}, SHIFT(89),
  [218] = {.count = 1, .reusable = false}, SHIFT(42),
  [220] = {.count = 1, .reusable = true}, SHIFT(42),
  [222] = {.count = 1, .reusable = true}, SHIFT(127),
  [224] = {.count = 1, .reusable = true}, SHIFT(148),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym_pair, 2),
  [228] = {.count = 1, .reusable = false}, REDUCE(sym_pair, 2),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym__basic_string, 3),
  [232] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat2, 2),
  [234] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(36),
  [237] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(37),
  [240] = {.count = 1, .reusable = true}, REDUCE(sym_document, 2),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym__literal_string, 3),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym__literal_string, 2),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym__basic_string, 2),
  [248] = {.count = 1, .reusable = true}, SHIFT(58),
  [250] = {.count = 1, .reusable = true}, SHIFT(12),
  [252] = {.count = 1, .reusable = true}, SHIFT(57),
  [254] = {.count = 1, .reusable = true}, SHIFT(11),
  [256] = {.count = 1, .reusable = true}, SHIFT(65),
  [258] = {.count = 1, .reusable = true}, SHIFT(9),
  [260] = {.count = 1, .reusable = true}, SHIFT(60),
  [262] = {.count = 1, .reusable = false}, SHIFT(60),
  [264] = {.count = 1, .reusable = true}, SHIFT(145),
  [266] = {.count = 1, .reusable = true}, SHIFT(7),
  [268] = {.count = 1, .reusable = true}, SHIFT(63),
  [270] = {.count = 1, .reusable = false}, SHIFT(63),
  [272] = {.count = 1, .reusable = true}, SHIFT(90),
  [274] = {.count = 2, .reusable = true}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2), SHIFT_REPEAT(60),
  [277] = {.count = 2, .reusable = false}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2), SHIFT_REPEAT(60),
  [280] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2),
  [282] = {.count = 1, .reusable = true}, SHIFT(64),
  [284] = {.count = 1, .reusable = true}, SHIFT(19),
  [286] = {.count = 1, .reusable = true}, SHIFT(56),
  [288] = {.count = 1, .reusable = false}, SHIFT(56),
  [290] = {.count = 1, .reusable = true}, SHIFT(136),
  [292] = {.count = 1, .reusable = true}, SHIFT(67),
  [294] = {.count = 1, .reusable = true}, SHIFT(4),
  [296] = {.count = 1, .reusable = true}, SHIFT(81),
  [298] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat2, 3),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym__multiline_literal_string, 3),
  [302] = {.count = 1, .reusable = true}, SHIFT(74),
  [304] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat2, 2),
  [306] = {.count = 1, .reusable = false}, SHIFT(73),
  [308] = {.count = 1, .reusable = true}, SHIFT(139),
  [310] = {.count = 1, .reusable = true}, SHIFT(73),
  [312] = {.count = 1, .reusable = false}, SHIFT(69),
  [314] = {.count = 1, .reusable = true}, SHIFT(123),
  [316] = {.count = 1, .reusable = true}, SHIFT(69),
  [318] = {.count = 1, .reusable = false}, SHIFT(72),
  [320] = {.count = 1, .reusable = true}, SHIFT(51),
  [322] = {.count = 1, .reusable = true}, SHIFT(72),
  [324] = {.count = 1, .reusable = true}, SHIFT(46),
  [326] = {.count = 2, .reusable = false}, REDUCE(aux_sym__basic_string_repeat1, 2), SHIFT_REPEAT(73),
  [329] = {.count = 1, .reusable = true}, REDUCE(aux_sym__basic_string_repeat1, 2),
  [331] = {.count = 2, .reusable = true}, REDUCE(aux_sym__basic_string_repeat1, 2), SHIFT_REPEAT(73),
  [334] = {.count = 1, .reusable = true}, SHIFT(118),
  [336] = {.count = 1, .reusable = false}, SHIFT(75),
  [338] = {.count = 1, .reusable = true}, SHIFT(116),
  [340] = {.count = 1, .reusable = true}, SHIFT(75),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym_array, 8),
  [344] = {.count = 1, .reusable = true}, REDUCE(sym_array, 7),
  [346] = {.count = 1, .reusable = true}, REDUCE(sym_array, 6),
  [348] = {.count = 1, .reusable = true}, REDUCE(sym_array, 5),
  [350] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat2, 4),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym_inline_table, 4, .production_id = 1),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_integer, 1),
  [356] = {.count = 1, .reusable = true}, REDUCE(sym_float, 1),
  [358] = {.count = 1, .reusable = true}, REDUCE(sym_inline_table, 3, .production_id = 1),
  [360] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [362] = {.count = 1, .reusable = true}, REDUCE(sym_array, 4),
  [364] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [366] = {.count = 1, .reusable = true}, REDUCE(sym__multiline_basic_string, 2),
  [368] = {.count = 1, .reusable = true}, REDUCE(sym__multiline_literal_string, 2),
  [370] = {.count = 1, .reusable = true}, REDUCE(sym_inline_table, 2),
  [372] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [374] = {.count = 1, .reusable = true}, REDUCE(sym__multiline_basic_string, 3),
  [376] = {.count = 1, .reusable = true}, SHIFT(35),
  [378] = {.count = 1, .reusable = true}, SHIFT(85),
  [380] = {.count = 1, .reusable = true}, SHIFT(146),
  [382] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_repeat2, 2), SHIFT_REPEAT(22),
  [385] = {.count = 1, .reusable = true}, SHIFT(5),
  [387] = {.count = 1, .reusable = true}, SHIFT(141),
  [389] = {.count = 2, .reusable = true}, REDUCE(aux_sym_inline_table_repeat1, 2), SHIFT_REPEAT(35),
  [392] = {.count = 1, .reusable = true}, REDUCE(aux_sym_inline_table_repeat1, 2),
  [394] = {.count = 1, .reusable = true}, SHIFT(82),
  [396] = {.count = 1, .reusable = true}, REDUCE(sym_dotted_key, 3),
  [398] = {.count = 1, .reusable = true}, REDUCE(sym_key, 1),
  [400] = {.count = 1, .reusable = true}, SHIFT(17),
  [402] = {.count = 1, .reusable = true}, SHIFT(24),
  [404] = {.count = 1, .reusable = true}, SHIFT(44),
  [406] = {.count = 1, .reusable = true}, REDUCE(sym__inline_pair, 3),
  [408] = {.count = 1, .reusable = false}, SHIFT(150),
  [410] = {.count = 1, .reusable = true}, SHIFT(124),
  [412] = {.count = 1, .reusable = true}, REDUCE(aux_sym_inline_table_repeat1, 2, .production_id = 1),
  [414] = {.count = 1, .reusable = false}, SHIFT(135),
  [416] = {.count = 1, .reusable = true}, SHIFT(50),
  [418] = {.count = 1, .reusable = true}, SHIFT(25),
  [420] = {.count = 1, .reusable = false}, SHIFT(140),
  [422] = {.count = 1, .reusable = true}, SHIFT(117),
  [424] = {.count = 1, .reusable = true}, SHIFT(133),
  [426] = {.count = 1, .reusable = true}, SHIFT(132),
  [428] = {.count = 1, .reusable = true}, SHIFT(43),
  [430] = {.count = 1, .reusable = true}, SHIFT(29),
  [432] = {.count = 1, .reusable = true}, SHIFT(28),
  [434] = {.count = 1, .reusable = true}, SHIFT(49),
  [436] = {.count = 1, .reusable = true}, SHIFT(119),
  [438] = {.count = 1, .reusable = true}, SHIFT(45),
  [440] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [442] = {.count = 1, .reusable = true}, SHIFT(151),
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
