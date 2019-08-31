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
      if (lookahead == ']') ADVANCE(37);
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
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '\'') ADVANCE(146);
      if (lookahead == ',') ADVANCE(175);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == '}') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == ',') ADVANCE(175);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == '}') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(134);
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
      if (lookahead == '"') ADVANCE(13);
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
      if (lookahead == '"') ADVANCE(13);
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
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0, .external_lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0, .external_lex_state = 1},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 0, .external_lex_state = 1},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 0, .external_lex_state = 1},
  [30] = {.lex_state = 0, .external_lex_state = 1},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 0, .external_lex_state = 1},
  [36] = {.lex_state = 0, .external_lex_state = 1},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 0, .external_lex_state = 1},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 0, .external_lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0, .external_lex_state = 1},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 0, .external_lex_state = 1},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 0, .external_lex_state = 1},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0, .external_lex_state = 1},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0, .external_lex_state = 1},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 0, .external_lex_state = 1},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 0, .external_lex_state = 1},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0, .external_lex_state = 1},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0, .external_lex_state = 1},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 11},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 0, .external_lex_state = 1},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 0, .external_lex_state = 1},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 0, .external_lex_state = 1},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0, .external_lex_state = 1},
  [91] = {.lex_state = 0, .external_lex_state = 1},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 1},
  [94] = {.lex_state = 0, .external_lex_state = 1},
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
  [117] = {.lex_state = 11},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 15},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 11},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 11},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 11},
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 11},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 11},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 10},
  [142] = {.lex_state = 10},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 10},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 10},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 15},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 11},
  [151] = {.lex_state = 0},
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
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [sym__bare_key] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [aux_sym_integer_token2] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [sym_local_date] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_document_token1] = ACTIONS(1),
    [aux_sym_integer_token3] = ACTIONS(1),
    [sym__escape_line_ending] = ACTIONS(1),
    [sym_local_time] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_integer_token4] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [aux_sym_float_token2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [aux_sym_document_repeat2] = STATE(7),
    [sym__inline_pair] = STATE(8),
    [sym_pair] = STATE(11),
    [sym__basic_string] = STATE(4),
    [sym_document] = STATE(9),
    [sym_key] = STATE(10),
    [sym_dotted_key] = STATE(10),
    [sym__literal_string] = STATE(4),
    [sym_table] = STATE(7),
    [aux_sym_document_repeat1] = STATE(11),
    [sym__quoted_key] = STATE(4),
    [sym_table_array_element] = STATE(7),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(9),
    [aux_sym_document_token1] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [2] = {
    [sym_dotted_key] = STATE(12),
    [sym__literal_string] = STATE(4),
    [sym__basic_string] = STATE(4),
    [sym__quoted_key] = STATE(4),
    [sym_key] = STATE(12),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [3] = {
    [aux_sym__basic_string_repeat1] = STATE(14),
    [sym_comment] = ACTIONS(19),
    [anon_sym_DQUOTE2] = ACTIONS(21),
    [sym_escape_sequence] = ACTIONS(23),
    [aux_sym__basic_string_token1] = ACTIONS(25),
  },
  [4] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(27),
  },
  [5] = {
    [sym_dotted_key] = STATE(15),
    [sym__literal_string] = STATE(89),
    [sym__basic_string] = STATE(89),
    [sym__quoted_key] = STATE(89),
    [sym_key] = STATE(15),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [sym__bare_key] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
  },
  [6] = {
    [anon_sym_SQUOTE2] = ACTIONS(35),
    [sym_comment] = ACTIONS(19),
    [aux_sym__literal_string_token1] = ACTIONS(37),
  },
  [7] = {
    [sym_table_array_element] = STATE(18),
    [aux_sym_document_repeat2] = STATE(18),
    [sym_table] = STATE(18),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [8] = {
    [sym__line_ending_or_eof] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(43),
  },
  [10] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(45),
    [anon_sym_DOT] = ACTIONS(47),
  },
  [11] = {
    [sym_pair] = STATE(23),
    [sym__inline_pair] = STATE(8),
    [aux_sym_document_repeat2] = STATE(22),
    [sym__basic_string] = STATE(4),
    [sym_key] = STATE(10),
    [sym_dotted_key] = STATE(10),
    [sym__literal_string] = STATE(4),
    [sym_table] = STATE(22),
    [aux_sym_document_repeat1] = STATE(23),
    [sym__quoted_key] = STATE(4),
    [sym_table_array_element] = STATE(22),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(39),
    [aux_sym_document_token1] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [12] = {
    [anon_sym_RBRACK_RBRACK] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(47),
  },
  [13] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(53),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_DOT] = ACTIONS(53),
  },
  [14] = {
    [aux_sym__basic_string_repeat1] = STATE(26),
    [sym_comment] = ACTIONS(19),
    [anon_sym_DQUOTE2] = ACTIONS(55),
    [sym_escape_sequence] = ACTIONS(57),
    [aux_sym__basic_string_token1] = ACTIONS(59),
  },
  [15] = {
    [anon_sym_DOT] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(63),
  },
  [16] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(65),
    [anon_sym_DOT] = ACTIONS(65),
  },
  [17] = {
    [anon_sym_SQUOTE2] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_table_array_element] = STATE(18),
    [aux_sym_document_repeat2] = STATE(18),
    [sym_table] = STATE(18),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(74),
  },
  [19] = {
    [anon_sym_LBRACK_LBRACK] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [ts_builtin_sym_end] = ACTIONS(77),
    [aux_sym_document_token1] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
    [sym__bare_key] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(77),
  },
  [20] = {
    [sym_integer] = STATE(36),
    [sym_string] = STATE(36),
    [sym__basic_string] = STATE(35),
    [sym_float] = STATE(36),
    [sym_array] = STATE(36),
    [sym__multiline_basic_string] = STATE(35),
    [sym__literal_string] = STATE(35),
    [sym_inline_table] = STATE(36),
    [sym__inline_value] = STATE(36),
    [sym__multiline_literal_string] = STATE(35),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym_local_date_time] = ACTIONS(83),
    [aux_sym_integer_token3] = ACTIONS(85),
    [sym_offset_date_time] = ACTIONS(87),
    [aux_sym_float_token1] = ACTIONS(89),
    [sym_local_time] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(93),
    [aux_sym_integer_token2] = ACTIONS(85),
    [sym_boolean] = ACTIONS(87),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(95),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(97),
    [sym_local_date] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token4] = ACTIONS(85),
    [aux_sym_integer_token1] = ACTIONS(99),
    [aux_sym_float_token2] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(101),
  },
  [21] = {
    [sym__literal_string] = STATE(4),
    [sym__basic_string] = STATE(4),
    [sym__quoted_key] = STATE(4),
    [sym_key] = STATE(37),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [22] = {
    [sym_table_array_element] = STATE(18),
    [aux_sym_document_repeat2] = STATE(18),
    [sym_table] = STATE(18),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [23] = {
    [sym_pair] = STATE(23),
    [sym__inline_pair] = STATE(8),
    [sym__basic_string] = STATE(4),
    [sym_key] = STATE(10),
    [sym_dotted_key] = STATE(10),
    [sym__literal_string] = STATE(4),
    [aux_sym_document_repeat1] = STATE(23),
    [sym__quoted_key] = STATE(4),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [ts_builtin_sym_end] = ACTIONS(105),
    [aux_sym_document_token1] = ACTIONS(110),
    [sym_comment] = ACTIONS(3),
    [sym__bare_key] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(116),
    [anon_sym_SQUOTE] = ACTIONS(118),
  },
  [24] = {
    [sym__line_ending_or_eof] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(123),
    [anon_sym_RBRACE] = ACTIONS(123),
    [anon_sym_DOT] = ACTIONS(123),
  },
  [26] = {
    [aux_sym__basic_string_repeat1] = STATE(26),
    [sym_comment] = ACTIONS(19),
    [anon_sym_DQUOTE2] = ACTIONS(125),
    [sym_escape_sequence] = ACTIONS(127),
    [aux_sym__basic_string_token1] = ACTIONS(130),
  },
  [27] = {
    [sym__line_ending_or_eof] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(135),
    [anon_sym_COMMA] = ACTIONS(135),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(135),
    [anon_sym_RBRACE] = ACTIONS(135),
    [anon_sym_DOT] = ACTIONS(135),
  },
  [29] = {
    [sym__line_ending_or_eof] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [sym__line_ending_or_eof] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [sym_integer] = STATE(42),
    [sym_string] = STATE(42),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(42),
    [sym_array] = STATE(42),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(42),
    [aux_sym_array_repeat1] = STATE(41),
    [sym__inline_value] = STATE(42),
    [sym__multiline_literal_string] = STATE(97),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(143),
    [sym_local_date_time] = ACTIONS(145),
    [aux_sym_document_token1] = ACTIONS(147),
    [aux_sym_integer_token3] = ACTIONS(149),
    [sym_offset_date_time] = ACTIONS(151),
    [aux_sym_float_token1] = ACTIONS(153),
    [sym_local_time] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [aux_sym_integer_token2] = ACTIONS(149),
    [sym_boolean] = ACTIONS(151),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(161),
    [sym_local_date] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token4] = ACTIONS(149),
    [aux_sym_integer_token1] = ACTIONS(163),
    [aux_sym_float_token2] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(165),
  },
  [32] = {
    [sym_dotted_key] = STATE(151),
    [sym__literal_string] = STATE(4),
    [sym__inline_pair] = STATE(44),
    [sym__basic_string] = STATE(4),
    [sym__quoted_key] = STATE(4),
    [sym_key] = STATE(151),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(167),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [33] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(46),
    [sym_comment] = ACTIONS(19),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(169),
    [aux_sym__literal_string_token1] = ACTIONS(169),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(171),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(173),
  },
  [34] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(48),
    [sym__escape_line_ending] = ACTIONS(175),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(175),
    [sym_comment] = ACTIONS(19),
    [sym_escape_sequence] = ACTIONS(175),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(177),
    [aux_sym__basic_string_token1] = ACTIONS(177),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(179),
  },
  [35] = {
    [sym__line_ending_or_eof] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [sym__line_ending_or_eof] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(185),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(185),
    [anon_sym_DOT] = ACTIONS(185),
  },
  [38] = {
    [sym_pair] = STATE(49),
    [sym__inline_pair] = STATE(8),
    [sym__basic_string] = STATE(4),
    [sym_key] = STATE(10),
    [sym_dotted_key] = STATE(10),
    [sym__literal_string] = STATE(4),
    [aux_sym_document_repeat1] = STATE(49),
    [sym__quoted_key] = STATE(4),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(187),
    [aux_sym_document_token1] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [39] = {
    [sym_pair] = STATE(50),
    [sym__inline_pair] = STATE(8),
    [sym__basic_string] = STATE(4),
    [sym_key] = STATE(10),
    [sym_dotted_key] = STATE(10),
    [sym__literal_string] = STATE(4),
    [aux_sym_document_repeat1] = STATE(50),
    [sym__quoted_key] = STATE(4),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(193),
    [aux_sym_document_token1] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [40] = {
    [sym__line_ending_or_eof] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [sym_integer] = STATE(53),
    [sym_string] = STATE(53),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(53),
    [sym_array] = STATE(53),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(53),
    [aux_sym_array_repeat1] = STATE(52),
    [sym__inline_value] = STATE(53),
    [sym__multiline_literal_string] = STATE(97),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(201),
    [sym_local_date_time] = ACTIONS(203),
    [aux_sym_document_token1] = ACTIONS(205),
    [aux_sym_integer_token3] = ACTIONS(149),
    [sym_offset_date_time] = ACTIONS(207),
    [aux_sym_float_token1] = ACTIONS(153),
    [sym_local_time] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [aux_sym_integer_token2] = ACTIONS(149),
    [sym_boolean] = ACTIONS(207),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(161),
    [sym_local_date] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token4] = ACTIONS(149),
    [aux_sym_integer_token1] = ACTIONS(163),
    [aux_sym_float_token2] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(165),
  },
  [42] = {
    [aux_sym_array_repeat1] = STATE(55),
    [aux_sym_array_repeat2] = STATE(56),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(209),
    [aux_sym_document_token1] = ACTIONS(211),
    [anon_sym_RBRACK] = ACTIONS(201),
  },
  [43] = {
    [sym__line_ending_or_eof] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [aux_sym_inline_table_repeat1] = STATE(59),
    [anon_sym_RBRACE] = ACTIONS(215),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(217),
  },
  [45] = {
    [sym__line_ending_or_eof] = ACTIONS(219),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(61),
    [sym_comment] = ACTIONS(19),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(221),
    [aux_sym__literal_string_token1] = ACTIONS(221),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(223),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(225),
  },
  [47] = {
    [sym__line_ending_or_eof] = ACTIONS(227),
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(63),
    [sym__escape_line_ending] = ACTIONS(229),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(229),
    [sym_comment] = ACTIONS(19),
    [sym_escape_sequence] = ACTIONS(229),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(231),
    [aux_sym__basic_string_token1] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(233),
  },
  [49] = {
    [sym_pair] = STATE(23),
    [sym__inline_pair] = STATE(8),
    [sym__basic_string] = STATE(4),
    [sym_key] = STATE(10),
    [sym_dotted_key] = STATE(10),
    [sym__literal_string] = STATE(4),
    [aux_sym_document_repeat1] = STATE(23),
    [sym__quoted_key] = STATE(4),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(235),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(235),
    [aux_sym_document_token1] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(237),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [50] = {
    [sym_pair] = STATE(23),
    [sym__inline_pair] = STATE(8),
    [sym__basic_string] = STATE(4),
    [sym_key] = STATE(10),
    [sym_dotted_key] = STATE(10),
    [sym__literal_string] = STATE(4),
    [aux_sym_document_repeat1] = STATE(23),
    [sym__quoted_key] = STATE(4),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(239),
    [aux_sym_document_token1] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(241),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [51] = {
    [sym__line_ending_or_eof] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
  },
  [52] = {
    [aux_sym_array_repeat1] = STATE(52),
    [anon_sym_COMMA] = ACTIONS(245),
    [sym_local_date_time] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(245),
    [aux_sym_integer_token2] = ACTIONS(245),
    [sym_boolean] = ACTIONS(245),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(245),
    [sym_local_date] = ACTIONS(247),
    [anon_sym_DQUOTE] = ACTIONS(247),
    [anon_sym_RBRACK] = ACTIONS(245),
    [aux_sym_document_token1] = ACTIONS(249),
    [aux_sym_integer_token3] = ACTIONS(245),
    [sym_offset_date_time] = ACTIONS(245),
    [aux_sym_float_token1] = ACTIONS(245),
    [sym_local_time] = ACTIONS(245),
    [anon_sym_LBRACE] = ACTIONS(245),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token4] = ACTIONS(245),
    [aux_sym_integer_token1] = ACTIONS(247),
    [aux_sym_float_token2] = ACTIONS(245),
    [anon_sym_SQUOTE] = ACTIONS(247),
  },
  [53] = {
    [aux_sym_array_repeat1] = STATE(66),
    [aux_sym_array_repeat2] = STATE(67),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(252),
    [aux_sym_document_token1] = ACTIONS(254),
    [anon_sym_RBRACK] = ACTIONS(256),
  },
  [54] = {
    [sym_integer] = STATE(69),
    [sym_string] = STATE(69),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(69),
    [sym_array] = STATE(69),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(69),
    [aux_sym_array_repeat1] = STATE(68),
    [sym__inline_value] = STATE(69),
    [sym__multiline_literal_string] = STATE(97),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(256),
    [sym_local_date_time] = ACTIONS(258),
    [aux_sym_document_token1] = ACTIONS(260),
    [aux_sym_integer_token3] = ACTIONS(149),
    [sym_offset_date_time] = ACTIONS(262),
    [aux_sym_float_token1] = ACTIONS(153),
    [sym_local_time] = ACTIONS(262),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [aux_sym_integer_token2] = ACTIONS(149),
    [sym_boolean] = ACTIONS(262),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(161),
    [sym_local_date] = ACTIONS(258),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token4] = ACTIONS(149),
    [aux_sym_integer_token1] = ACTIONS(163),
    [aux_sym_float_token2] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(165),
  },
  [55] = {
    [aux_sym_array_repeat1] = STATE(52),
    [aux_sym_array_repeat2] = STATE(67),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(252),
    [aux_sym_document_token1] = ACTIONS(205),
    [anon_sym_RBRACK] = ACTIONS(256),
  },
  [56] = {
    [aux_sym_array_repeat2] = STATE(70),
    [anon_sym_COMMA] = ACTIONS(252),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(256),
  },
  [57] = {
    [sym__line_ending_or_eof] = ACTIONS(264),
    [sym_comment] = ACTIONS(3),
  },
  [58] = {
    [sym_dotted_key] = STATE(151),
    [sym__literal_string] = STATE(4),
    [sym__inline_pair] = STATE(71),
    [sym__basic_string] = STATE(4),
    [sym__quoted_key] = STATE(4),
    [sym_key] = STATE(151),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [59] = {
    [aux_sym_inline_table_repeat1] = STATE(73),
    [anon_sym_RBRACE] = ACTIONS(266),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(217),
  },
  [60] = {
    [sym__line_ending_or_eof] = ACTIONS(268),
    [sym_comment] = ACTIONS(3),
  },
  [61] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(61),
    [sym_comment] = ACTIONS(19),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(270),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(273),
    [aux_sym__literal_string_token1] = ACTIONS(270),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(276),
  },
  [62] = {
    [sym__line_ending_or_eof] = ACTIONS(278),
    [sym_comment] = ACTIONS(3),
  },
  [63] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(63),
    [sym__escape_line_ending] = ACTIONS(280),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(280),
    [sym_comment] = ACTIONS(19),
    [sym_escape_sequence] = ACTIONS(280),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(283),
    [aux_sym__basic_string_token1] = ACTIONS(283),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(286),
  },
  [64] = {
    [sym__line_ending_or_eof] = ACTIONS(288),
    [sym_comment] = ACTIONS(3),
  },
  [65] = {
    [sym_integer] = STATE(69),
    [sym_string] = STATE(69),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(69),
    [sym_array] = STATE(69),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(69),
    [aux_sym_array_repeat1] = STATE(75),
    [sym__inline_value] = STATE(69),
    [sym__multiline_literal_string] = STATE(97),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(290),
    [sym_local_date_time] = ACTIONS(258),
    [aux_sym_document_token1] = ACTIONS(292),
    [aux_sym_integer_token3] = ACTIONS(149),
    [sym_offset_date_time] = ACTIONS(262),
    [aux_sym_float_token1] = ACTIONS(153),
    [sym_local_time] = ACTIONS(262),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [aux_sym_integer_token2] = ACTIONS(149),
    [sym_boolean] = ACTIONS(262),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(161),
    [sym_local_date] = ACTIONS(258),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token4] = ACTIONS(149),
    [aux_sym_integer_token1] = ACTIONS(163),
    [aux_sym_float_token2] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(165),
  },
  [66] = {
    [aux_sym_array_repeat1] = STATE(52),
    [aux_sym_array_repeat2] = STATE(77),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(294),
    [aux_sym_document_token1] = ACTIONS(205),
    [anon_sym_RBRACK] = ACTIONS(290),
  },
  [67] = {
    [aux_sym_array_repeat2] = STATE(70),
    [anon_sym_COMMA] = ACTIONS(294),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(290),
  },
  [68] = {
    [sym_integer] = STATE(78),
    [sym_string] = STATE(78),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(78),
    [sym_array] = STATE(78),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(78),
    [aux_sym_array_repeat1] = STATE(52),
    [sym__inline_value] = STATE(78),
    [sym__multiline_literal_string] = STATE(97),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(290),
    [sym_local_date_time] = ACTIONS(296),
    [aux_sym_document_token1] = ACTIONS(205),
    [aux_sym_integer_token3] = ACTIONS(149),
    [sym_offset_date_time] = ACTIONS(298),
    [aux_sym_float_token1] = ACTIONS(153),
    [sym_local_time] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [aux_sym_integer_token2] = ACTIONS(149),
    [sym_boolean] = ACTIONS(298),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(161),
    [sym_local_date] = ACTIONS(296),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token4] = ACTIONS(149),
    [aux_sym_integer_token1] = ACTIONS(163),
    [aux_sym_float_token2] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(165),
  },
  [69] = {
    [aux_sym_array_repeat1] = STATE(79),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(300),
    [aux_sym_document_token1] = ACTIONS(302),
    [anon_sym_RBRACK] = ACTIONS(300),
  },
  [70] = {
    [aux_sym_array_repeat2] = STATE(70),
    [anon_sym_COMMA] = ACTIONS(304),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(300),
  },
  [71] = {
    [anon_sym_RBRACE] = ACTIONS(307),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(307),
  },
  [72] = {
    [sym__line_ending_or_eof] = ACTIONS(309),
    [sym_comment] = ACTIONS(3),
  },
  [73] = {
    [aux_sym_inline_table_repeat1] = STATE(73),
    [anon_sym_RBRACE] = ACTIONS(311),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(313),
  },
  [74] = {
    [sym__line_ending_or_eof] = ACTIONS(316),
    [sym_comment] = ACTIONS(3),
  },
  [75] = {
    [sym_integer] = STATE(78),
    [sym_string] = STATE(78),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(78),
    [sym_array] = STATE(78),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(78),
    [aux_sym_array_repeat1] = STATE(52),
    [sym__inline_value] = STATE(78),
    [sym__multiline_literal_string] = STATE(97),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(318),
    [sym_local_date_time] = ACTIONS(296),
    [aux_sym_document_token1] = ACTIONS(205),
    [aux_sym_integer_token3] = ACTIONS(149),
    [sym_offset_date_time] = ACTIONS(298),
    [aux_sym_float_token1] = ACTIONS(153),
    [sym_local_time] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [aux_sym_integer_token2] = ACTIONS(149),
    [sym_boolean] = ACTIONS(298),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(161),
    [sym_local_date] = ACTIONS(296),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token4] = ACTIONS(149),
    [aux_sym_integer_token1] = ACTIONS(163),
    [aux_sym_float_token2] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(165),
  },
  [76] = {
    [sym_integer] = STATE(69),
    [sym_string] = STATE(69),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(69),
    [sym_array] = STATE(69),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(69),
    [aux_sym_array_repeat1] = STATE(82),
    [sym__inline_value] = STATE(69),
    [sym__multiline_literal_string] = STATE(97),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(318),
    [sym_local_date_time] = ACTIONS(258),
    [aux_sym_document_token1] = ACTIONS(320),
    [aux_sym_integer_token3] = ACTIONS(149),
    [sym_offset_date_time] = ACTIONS(262),
    [aux_sym_float_token1] = ACTIONS(153),
    [sym_local_time] = ACTIONS(262),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [aux_sym_integer_token2] = ACTIONS(149),
    [sym_boolean] = ACTIONS(262),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(161),
    [sym_local_date] = ACTIONS(258),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token4] = ACTIONS(149),
    [aux_sym_integer_token1] = ACTIONS(163),
    [aux_sym_float_token2] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(165),
  },
  [77] = {
    [aux_sym_array_repeat2] = STATE(70),
    [anon_sym_COMMA] = ACTIONS(322),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(318),
  },
  [78] = {
    [aux_sym_array_repeat1] = STATE(84),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(324),
    [aux_sym_document_token1] = ACTIONS(326),
    [anon_sym_RBRACK] = ACTIONS(324),
  },
  [79] = {
    [aux_sym_array_repeat1] = STATE(52),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(324),
    [aux_sym_document_token1] = ACTIONS(205),
    [anon_sym_RBRACK] = ACTIONS(324),
  },
  [80] = {
    [sym_integer] = STATE(69),
    [sym_string] = STATE(69),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(69),
    [sym_array] = STATE(69),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(69),
    [aux_sym_array_repeat1] = STATE(85),
    [sym__inline_value] = STATE(69),
    [sym__multiline_literal_string] = STATE(97),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [sym_local_date_time] = ACTIONS(258),
    [aux_sym_document_token1] = ACTIONS(328),
    [aux_sym_integer_token3] = ACTIONS(149),
    [sym_offset_date_time] = ACTIONS(262),
    [aux_sym_float_token1] = ACTIONS(153),
    [sym_local_time] = ACTIONS(262),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [aux_sym_integer_token2] = ACTIONS(149),
    [sym_boolean] = ACTIONS(262),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(161),
    [sym_local_date] = ACTIONS(258),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token4] = ACTIONS(149),
    [aux_sym_integer_token1] = ACTIONS(163),
    [aux_sym_float_token2] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(165),
  },
  [81] = {
    [sym__line_ending_or_eof] = ACTIONS(330),
    [sym_comment] = ACTIONS(3),
  },
  [82] = {
    [sym_integer] = STATE(78),
    [sym_string] = STATE(78),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(78),
    [sym_array] = STATE(78),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(78),
    [aux_sym_array_repeat1] = STATE(52),
    [sym__inline_value] = STATE(78),
    [sym__multiline_literal_string] = STATE(97),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(332),
    [sym_local_date_time] = ACTIONS(296),
    [aux_sym_document_token1] = ACTIONS(205),
    [aux_sym_integer_token3] = ACTIONS(149),
    [sym_offset_date_time] = ACTIONS(298),
    [aux_sym_float_token1] = ACTIONS(153),
    [sym_local_time] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [aux_sym_integer_token2] = ACTIONS(149),
    [sym_boolean] = ACTIONS(298),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(161),
    [sym_local_date] = ACTIONS(296),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token4] = ACTIONS(149),
    [aux_sym_integer_token1] = ACTIONS(163),
    [aux_sym_float_token2] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(165),
  },
  [83] = {
    [sym_integer] = STATE(69),
    [sym_string] = STATE(69),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(69),
    [sym_array] = STATE(69),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(69),
    [aux_sym_array_repeat1] = STATE(87),
    [sym__inline_value] = STATE(69),
    [sym__multiline_literal_string] = STATE(97),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(332),
    [sym_local_date_time] = ACTIONS(258),
    [aux_sym_document_token1] = ACTIONS(334),
    [aux_sym_integer_token3] = ACTIONS(149),
    [sym_offset_date_time] = ACTIONS(262),
    [aux_sym_float_token1] = ACTIONS(153),
    [sym_local_time] = ACTIONS(262),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [aux_sym_integer_token2] = ACTIONS(149),
    [sym_boolean] = ACTIONS(262),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(161),
    [sym_local_date] = ACTIONS(258),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token4] = ACTIONS(149),
    [aux_sym_integer_token1] = ACTIONS(163),
    [aux_sym_float_token2] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(165),
  },
  [84] = {
    [aux_sym_array_repeat1] = STATE(52),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(336),
    [aux_sym_document_token1] = ACTIONS(205),
    [anon_sym_RBRACK] = ACTIONS(336),
  },
  [85] = {
    [sym_integer] = STATE(78),
    [sym_string] = STATE(78),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(78),
    [sym_array] = STATE(78),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(78),
    [aux_sym_array_repeat1] = STATE(52),
    [sym__inline_value] = STATE(78),
    [sym__multiline_literal_string] = STATE(97),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [sym_local_date_time] = ACTIONS(296),
    [aux_sym_document_token1] = ACTIONS(205),
    [aux_sym_integer_token3] = ACTIONS(149),
    [sym_offset_date_time] = ACTIONS(298),
    [aux_sym_float_token1] = ACTIONS(153),
    [sym_local_time] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [aux_sym_integer_token2] = ACTIONS(149),
    [sym_boolean] = ACTIONS(298),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(161),
    [sym_local_date] = ACTIONS(296),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token4] = ACTIONS(149),
    [aux_sym_integer_token1] = ACTIONS(163),
    [aux_sym_float_token2] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(165),
  },
  [86] = {
    [sym__line_ending_or_eof] = ACTIONS(338),
    [sym_comment] = ACTIONS(3),
  },
  [87] = {
    [sym_integer] = STATE(78),
    [sym_string] = STATE(78),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(78),
    [sym_array] = STATE(78),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(78),
    [aux_sym_array_repeat1] = STATE(52),
    [sym__inline_value] = STATE(78),
    [sym__multiline_literal_string] = STATE(97),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(340),
    [sym_local_date_time] = ACTIONS(296),
    [aux_sym_document_token1] = ACTIONS(205),
    [aux_sym_integer_token3] = ACTIONS(149),
    [sym_offset_date_time] = ACTIONS(298),
    [aux_sym_float_token1] = ACTIONS(153),
    [sym_local_time] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [aux_sym_integer_token2] = ACTIONS(149),
    [sym_boolean] = ACTIONS(298),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(161),
    [sym_local_date] = ACTIONS(296),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token4] = ACTIONS(149),
    [aux_sym_integer_token1] = ACTIONS(163),
    [aux_sym_float_token2] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(165),
  },
  [88] = {
    [sym__line_ending_or_eof] = ACTIONS(342),
    [sym_comment] = ACTIONS(3),
  },
  [89] = {
    [anon_sym_DOT] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(27),
  },
  [90] = {
    [sym__line_ending_or_eof] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
  },
  [91] = {
    [sym__line_ending_or_eof] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
  },
  [92] = {
    [sym__literal_string] = STATE(89),
    [sym__basic_string] = STATE(89),
    [sym__quoted_key] = STATE(89),
    [sym_key] = STATE(99),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [sym__bare_key] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
  },
  [93] = {
    [sym__line_ending_or_eof] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
  },
  [94] = {
    [sym__line_ending_or_eof] = ACTIONS(135),
    [sym_comment] = ACTIONS(3),
  },
  [95] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(137),
    [aux_sym_document_token1] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(137),
  },
  [96] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(139),
    [aux_sym_document_token1] = ACTIONS(139),
    [anon_sym_RBRACK] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(139),
  },
  [97] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(181),
    [aux_sym_document_token1] = ACTIONS(181),
    [anon_sym_RBRACK] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(181),
  },
  [98] = {
    [anon_sym_RBRACE] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(183),
  },
  [99] = {
    [anon_sym_DOT] = ACTIONS(185),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(185),
  },
  [100] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(199),
    [aux_sym_document_token1] = ACTIONS(199),
    [anon_sym_RBRACK] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(199),
  },
  [101] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(213),
    [aux_sym_document_token1] = ACTIONS(213),
    [anon_sym_RBRACK] = ACTIONS(213),
    [anon_sym_RBRACE] = ACTIONS(213),
  },
  [102] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(219),
    [aux_sym_document_token1] = ACTIONS(219),
    [anon_sym_RBRACK] = ACTIONS(219),
    [anon_sym_RBRACE] = ACTIONS(219),
  },
  [103] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(227),
    [aux_sym_document_token1] = ACTIONS(227),
    [anon_sym_RBRACK] = ACTIONS(227),
    [anon_sym_RBRACE] = ACTIONS(227),
  },
  [104] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(243),
    [aux_sym_document_token1] = ACTIONS(243),
    [anon_sym_RBRACK] = ACTIONS(243),
    [anon_sym_RBRACE] = ACTIONS(243),
  },
  [105] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(264),
    [aux_sym_document_token1] = ACTIONS(264),
    [anon_sym_RBRACK] = ACTIONS(264),
    [anon_sym_RBRACE] = ACTIONS(264),
  },
  [106] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(268),
    [aux_sym_document_token1] = ACTIONS(268),
    [anon_sym_RBRACK] = ACTIONS(268),
    [anon_sym_RBRACE] = ACTIONS(268),
  },
  [107] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(278),
    [aux_sym_document_token1] = ACTIONS(278),
    [anon_sym_RBRACK] = ACTIONS(278),
    [anon_sym_RBRACE] = ACTIONS(278),
  },
  [108] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(288),
    [aux_sym_document_token1] = ACTIONS(288),
    [anon_sym_RBRACK] = ACTIONS(288),
    [anon_sym_RBRACE] = ACTIONS(288),
  },
  [109] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(309),
    [aux_sym_document_token1] = ACTIONS(309),
    [anon_sym_RBRACK] = ACTIONS(309),
    [anon_sym_RBRACE] = ACTIONS(309),
  },
  [110] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(316),
    [aux_sym_document_token1] = ACTIONS(316),
    [anon_sym_RBRACK] = ACTIONS(316),
    [anon_sym_RBRACE] = ACTIONS(316),
  },
  [111] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(330),
    [aux_sym_document_token1] = ACTIONS(330),
    [anon_sym_RBRACK] = ACTIONS(330),
    [anon_sym_RBRACE] = ACTIONS(330),
  },
  [112] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(338),
    [aux_sym_document_token1] = ACTIONS(338),
    [anon_sym_RBRACK] = ACTIONS(338),
    [anon_sym_RBRACE] = ACTIONS(338),
  },
  [113] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(342),
    [aux_sym_document_token1] = ACTIONS(342),
    [anon_sym_RBRACK] = ACTIONS(342),
    [anon_sym_RBRACE] = ACTIONS(342),
  },
  [114] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(53),
    [anon_sym_COMMA] = ACTIONS(53),
    [aux_sym_document_token1] = ACTIONS(53),
    [anon_sym_DOT] = ACTIONS(53),
  },
  [115] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(65),
    [aux_sym_document_token1] = ACTIONS(65),
    [anon_sym_DOT] = ACTIONS(65),
  },
  [116] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(123),
    [aux_sym_document_token1] = ACTIONS(123),
    [anon_sym_DOT] = ACTIONS(123),
  },
  [117] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(135),
    [anon_sym_COMMA] = ACTIONS(135),
    [aux_sym_document_token1] = ACTIONS(135),
    [anon_sym_DOT] = ACTIONS(135),
  },
  [118] = {
    [aux_sym__basic_string_repeat1] = STATE(120),
    [sym_comment] = ACTIONS(19),
    [anon_sym_DQUOTE2] = ACTIONS(344),
    [sym_escape_sequence] = ACTIONS(346),
    [aux_sym__basic_string_token1] = ACTIONS(348),
  },
  [119] = {
    [anon_sym_SQUOTE2] = ACTIONS(350),
    [sym_comment] = ACTIONS(19),
    [aux_sym__literal_string_token1] = ACTIONS(352),
  },
  [120] = {
    [aux_sym__basic_string_repeat1] = STATE(26),
    [sym_comment] = ACTIONS(19),
    [anon_sym_DQUOTE2] = ACTIONS(354),
    [sym_escape_sequence] = ACTIONS(57),
    [aux_sym__basic_string_token1] = ACTIONS(59),
  },
  [121] = {
    [anon_sym_SQUOTE2] = ACTIONS(356),
    [sym_comment] = ACTIONS(3),
  },
  [122] = {
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
    [anon_sym_DQUOTE] = ACTIONS(358),
    [sym_local_date_time] = ACTIONS(360),
    [aux_sym_integer_token3] = ACTIONS(149),
    [sym_offset_date_time] = ACTIONS(362),
    [aux_sym_float_token1] = ACTIONS(153),
    [sym_local_time] = ACTIONS(362),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [aux_sym_integer_token2] = ACTIONS(149),
    [sym_boolean] = ACTIONS(362),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(161),
    [sym_local_date] = ACTIONS(360),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token4] = ACTIONS(149),
    [aux_sym_integer_token1] = ACTIONS(163),
    [aux_sym_float_token2] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(364),
  },
  [123] = {
    [sym_string] = STATE(128),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(128),
    [sym_array] = STATE(128),
    [sym__inline_value] = STATE(128),
    [sym__multiline_literal_string] = STATE(97),
    [sym_integer] = STATE(128),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(128),
    [aux_sym_array_repeat1] = STATE(127),
    [sym_local_date_time] = ACTIONS(366),
    [anon_sym_LBRACK] = ACTIONS(155),
    [aux_sym_integer_token2] = ACTIONS(149),
    [sym_boolean] = ACTIONS(368),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(159),
    [sym_local_date] = ACTIONS(366),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(370),
    [aux_sym_document_token1] = ACTIONS(372),
    [aux_sym_integer_token3] = ACTIONS(149),
    [sym_offset_date_time] = ACTIONS(368),
    [aux_sym_float_token1] = ACTIONS(153),
    [sym_local_time] = ACTIONS(368),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token4] = ACTIONS(149),
    [aux_sym_integer_token1] = ACTIONS(163),
    [aux_sym_float_token2] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(165),
  },
  [124] = {
    [sym__inline_pair] = STATE(129),
    [sym__basic_string] = STATE(4),
    [sym_key] = STATE(151),
    [sym_dotted_key] = STATE(151),
    [sym__literal_string] = STATE(4),
    [sym__quoted_key] = STATE(4),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(374),
    [sym_comment] = ACTIONS(3),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [125] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(130),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(376),
    [aux_sym__literal_string_token1] = ACTIONS(378),
    [sym_comment] = ACTIONS(19),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(378),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(380),
  },
  [126] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(131),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(382),
    [sym_escape_sequence] = ACTIONS(382),
    [aux_sym__basic_string_token1] = ACTIONS(384),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(386),
    [sym__escape_line_ending] = ACTIONS(382),
    [sym_comment] = ACTIONS(19),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(384),
  },
  [127] = {
    [sym_string] = STATE(132),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(132),
    [sym_array] = STATE(132),
    [sym__inline_value] = STATE(132),
    [sym__multiline_literal_string] = STATE(97),
    [sym_integer] = STATE(132),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(132),
    [aux_sym_array_repeat1] = STATE(52),
    [sym_local_date_time] = ACTIONS(388),
    [anon_sym_LBRACK] = ACTIONS(155),
    [aux_sym_integer_token2] = ACTIONS(149),
    [sym_boolean] = ACTIONS(390),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(159),
    [sym_local_date] = ACTIONS(388),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(392),
    [aux_sym_document_token1] = ACTIONS(205),
    [aux_sym_integer_token3] = ACTIONS(149),
    [sym_offset_date_time] = ACTIONS(390),
    [aux_sym_float_token1] = ACTIONS(153),
    [sym_local_time] = ACTIONS(390),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token4] = ACTIONS(149),
    [aux_sym_integer_token1] = ACTIONS(163),
    [aux_sym_float_token2] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(165),
  },
  [128] = {
    [aux_sym_array_repeat1] = STATE(134),
    [aux_sym_array_repeat2] = STATE(135),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(394),
    [aux_sym_document_token1] = ACTIONS(396),
    [anon_sym_RBRACK] = ACTIONS(392),
  },
  [129] = {
    [aux_sym_inline_table_repeat1] = STATE(136),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_RBRACE] = ACTIONS(398),
  },
  [130] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(61),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(223),
    [aux_sym__literal_string_token1] = ACTIONS(221),
    [sym_comment] = ACTIONS(19),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(221),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(400),
  },
  [131] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(63),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(229),
    [sym_escape_sequence] = ACTIONS(229),
    [aux_sym__basic_string_token1] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(402),
    [sym__escape_line_ending] = ACTIONS(229),
    [sym_comment] = ACTIONS(19),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(231),
  },
  [132] = {
    [aux_sym_array_repeat1] = STATE(138),
    [aux_sym_array_repeat2] = STATE(139),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(404),
    [aux_sym_document_token1] = ACTIONS(406),
    [anon_sym_RBRACK] = ACTIONS(408),
  },
  [133] = {
    [sym_string] = STATE(69),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(69),
    [sym_array] = STATE(69),
    [sym__inline_value] = STATE(69),
    [sym__multiline_literal_string] = STATE(97),
    [sym_integer] = STATE(69),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(69),
    [aux_sym_array_repeat1] = STATE(140),
    [sym_local_date_time] = ACTIONS(258),
    [anon_sym_LBRACK] = ACTIONS(155),
    [aux_sym_integer_token2] = ACTIONS(149),
    [sym_boolean] = ACTIONS(262),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(159),
    [sym_local_date] = ACTIONS(258),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(408),
    [aux_sym_document_token1] = ACTIONS(410),
    [aux_sym_integer_token3] = ACTIONS(149),
    [sym_offset_date_time] = ACTIONS(262),
    [aux_sym_float_token1] = ACTIONS(153),
    [sym_local_time] = ACTIONS(262),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token4] = ACTIONS(149),
    [aux_sym_integer_token1] = ACTIONS(163),
    [aux_sym_float_token2] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(165),
  },
  [134] = {
    [aux_sym_array_repeat1] = STATE(52),
    [aux_sym_array_repeat2] = STATE(139),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(404),
    [aux_sym_document_token1] = ACTIONS(205),
    [anon_sym_RBRACK] = ACTIONS(408),
  },
  [135] = {
    [aux_sym_array_repeat2] = STATE(70),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(404),
    [anon_sym_RBRACK] = ACTIONS(408),
  },
  [136] = {
    [aux_sym_inline_table_repeat1] = STATE(73),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_RBRACE] = ACTIONS(412),
  },
  [137] = {
    [sym_string] = STATE(69),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(69),
    [sym_array] = STATE(69),
    [sym__inline_value] = STATE(69),
    [sym__multiline_literal_string] = STATE(97),
    [sym_integer] = STATE(69),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(69),
    [aux_sym_array_repeat1] = STATE(141),
    [sym_local_date_time] = ACTIONS(258),
    [anon_sym_LBRACK] = ACTIONS(155),
    [aux_sym_integer_token2] = ACTIONS(149),
    [sym_boolean] = ACTIONS(262),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(159),
    [sym_local_date] = ACTIONS(258),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(414),
    [aux_sym_document_token1] = ACTIONS(416),
    [aux_sym_integer_token3] = ACTIONS(149),
    [sym_offset_date_time] = ACTIONS(262),
    [aux_sym_float_token1] = ACTIONS(153),
    [sym_local_time] = ACTIONS(262),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token4] = ACTIONS(149),
    [aux_sym_integer_token1] = ACTIONS(163),
    [aux_sym_float_token2] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(165),
  },
  [138] = {
    [aux_sym_array_repeat1] = STATE(52),
    [aux_sym_array_repeat2] = STATE(143),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(418),
    [aux_sym_document_token1] = ACTIONS(205),
    [anon_sym_RBRACK] = ACTIONS(414),
  },
  [139] = {
    [aux_sym_array_repeat2] = STATE(70),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(418),
    [anon_sym_RBRACK] = ACTIONS(414),
  },
  [140] = {
    [sym_string] = STATE(78),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(78),
    [sym_array] = STATE(78),
    [sym__inline_value] = STATE(78),
    [sym__multiline_literal_string] = STATE(97),
    [sym_integer] = STATE(78),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(78),
    [aux_sym_array_repeat1] = STATE(52),
    [sym_local_date_time] = ACTIONS(296),
    [anon_sym_LBRACK] = ACTIONS(155),
    [aux_sym_integer_token2] = ACTIONS(149),
    [sym_boolean] = ACTIONS(298),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(159),
    [sym_local_date] = ACTIONS(296),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(414),
    [aux_sym_document_token1] = ACTIONS(205),
    [aux_sym_integer_token3] = ACTIONS(149),
    [sym_offset_date_time] = ACTIONS(298),
    [aux_sym_float_token1] = ACTIONS(153),
    [sym_local_time] = ACTIONS(298),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token4] = ACTIONS(149),
    [aux_sym_integer_token1] = ACTIONS(163),
    [aux_sym_float_token2] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(165),
  },
  [141] = {
    [sym_string] = STATE(78),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(78),
    [sym_array] = STATE(78),
    [sym__inline_value] = STATE(78),
    [sym__multiline_literal_string] = STATE(97),
    [sym_integer] = STATE(78),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(78),
    [aux_sym_array_repeat1] = STATE(52),
    [sym_local_date_time] = ACTIONS(296),
    [anon_sym_LBRACK] = ACTIONS(155),
    [aux_sym_integer_token2] = ACTIONS(149),
    [sym_boolean] = ACTIONS(298),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(159),
    [sym_local_date] = ACTIONS(296),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(420),
    [aux_sym_document_token1] = ACTIONS(205),
    [aux_sym_integer_token3] = ACTIONS(149),
    [sym_offset_date_time] = ACTIONS(298),
    [aux_sym_float_token1] = ACTIONS(153),
    [sym_local_time] = ACTIONS(298),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token4] = ACTIONS(149),
    [aux_sym_integer_token1] = ACTIONS(163),
    [aux_sym_float_token2] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(165),
  },
  [142] = {
    [sym_string] = STATE(69),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(69),
    [sym_array] = STATE(69),
    [sym__inline_value] = STATE(69),
    [sym__multiline_literal_string] = STATE(97),
    [sym_integer] = STATE(69),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(69),
    [aux_sym_array_repeat1] = STATE(144),
    [sym_local_date_time] = ACTIONS(258),
    [anon_sym_LBRACK] = ACTIONS(155),
    [aux_sym_integer_token2] = ACTIONS(149),
    [sym_boolean] = ACTIONS(262),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(159),
    [sym_local_date] = ACTIONS(258),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(420),
    [aux_sym_document_token1] = ACTIONS(422),
    [aux_sym_integer_token3] = ACTIONS(149),
    [sym_offset_date_time] = ACTIONS(262),
    [aux_sym_float_token1] = ACTIONS(153),
    [sym_local_time] = ACTIONS(262),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token4] = ACTIONS(149),
    [aux_sym_integer_token1] = ACTIONS(163),
    [aux_sym_float_token2] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(165),
  },
  [143] = {
    [aux_sym_array_repeat2] = STATE(70),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(424),
    [anon_sym_RBRACK] = ACTIONS(420),
  },
  [144] = {
    [sym_string] = STATE(78),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(78),
    [sym_array] = STATE(78),
    [sym__inline_value] = STATE(78),
    [sym__multiline_literal_string] = STATE(97),
    [sym_integer] = STATE(78),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(78),
    [aux_sym_array_repeat1] = STATE(52),
    [sym_local_date_time] = ACTIONS(296),
    [anon_sym_LBRACK] = ACTIONS(155),
    [aux_sym_integer_token2] = ACTIONS(149),
    [sym_boolean] = ACTIONS(298),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(159),
    [sym_local_date] = ACTIONS(296),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(426),
    [aux_sym_document_token1] = ACTIONS(205),
    [aux_sym_integer_token3] = ACTIONS(149),
    [sym_offset_date_time] = ACTIONS(298),
    [aux_sym_float_token1] = ACTIONS(153),
    [sym_local_time] = ACTIONS(298),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token4] = ACTIONS(149),
    [aux_sym_integer_token1] = ACTIONS(163),
    [aux_sym_float_token2] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(165),
  },
  [145] = {
    [sym_string] = STATE(69),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(69),
    [sym_array] = STATE(69),
    [sym__inline_value] = STATE(69),
    [sym__multiline_literal_string] = STATE(97),
    [sym_integer] = STATE(69),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(69),
    [aux_sym_array_repeat1] = STATE(146),
    [sym_local_date_time] = ACTIONS(258),
    [anon_sym_LBRACK] = ACTIONS(155),
    [aux_sym_integer_token2] = ACTIONS(149),
    [sym_boolean] = ACTIONS(262),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(159),
    [sym_local_date] = ACTIONS(258),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(426),
    [aux_sym_document_token1] = ACTIONS(428),
    [aux_sym_integer_token3] = ACTIONS(149),
    [sym_offset_date_time] = ACTIONS(262),
    [aux_sym_float_token1] = ACTIONS(153),
    [sym_local_time] = ACTIONS(262),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token4] = ACTIONS(149),
    [aux_sym_integer_token1] = ACTIONS(163),
    [aux_sym_float_token2] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(165),
  },
  [146] = {
    [sym_string] = STATE(78),
    [sym__basic_string] = STATE(97),
    [sym_float] = STATE(78),
    [sym_array] = STATE(78),
    [sym__inline_value] = STATE(78),
    [sym__multiline_literal_string] = STATE(97),
    [sym_integer] = STATE(78),
    [sym__multiline_basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [sym_inline_table] = STATE(78),
    [aux_sym_array_repeat1] = STATE(52),
    [sym_local_date_time] = ACTIONS(296),
    [anon_sym_LBRACK] = ACTIONS(155),
    [aux_sym_integer_token2] = ACTIONS(149),
    [sym_boolean] = ACTIONS(298),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(159),
    [sym_local_date] = ACTIONS(296),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(430),
    [aux_sym_document_token1] = ACTIONS(205),
    [aux_sym_integer_token3] = ACTIONS(149),
    [sym_offset_date_time] = ACTIONS(298),
    [aux_sym_float_token1] = ACTIONS(153),
    [sym_local_time] = ACTIONS(298),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token4] = ACTIONS(149),
    [aux_sym_integer_token1] = ACTIONS(163),
    [aux_sym_float_token2] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(165),
  },
  [147] = {
    [aux_sym__basic_string_repeat1] = STATE(149),
    [sym_comment] = ACTIONS(19),
    [anon_sym_DQUOTE2] = ACTIONS(432),
    [sym_escape_sequence] = ACTIONS(434),
    [aux_sym__basic_string_token1] = ACTIONS(436),
  },
  [148] = {
    [anon_sym_SQUOTE2] = ACTIONS(438),
    [sym_comment] = ACTIONS(19),
    [aux_sym__literal_string_token1] = ACTIONS(440),
  },
  [149] = {
    [aux_sym__basic_string_repeat1] = STATE(26),
    [sym_comment] = ACTIONS(19),
    [anon_sym_DQUOTE2] = ACTIONS(442),
    [sym_escape_sequence] = ACTIONS(57),
    [aux_sym__basic_string_token1] = ACTIONS(59),
  },
  [150] = {
    [anon_sym_SQUOTE2] = ACTIONS(444),
    [sym_comment] = ACTIONS(3),
  },
  [151] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(446),
    [anon_sym_DOT] = ACTIONS(47),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [11] = {.count = 1, .reusable = true}, SHIFT(11),
  [13] = {.count = 1, .reusable = true}, SHIFT(4),
  [15] = {.count = 1, .reusable = false}, SHIFT(5),
  [17] = {.count = 1, .reusable = true}, SHIFT(6),
  [19] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [21] = {.count = 1, .reusable = true}, SHIFT(13),
  [23] = {.count = 1, .reusable = true}, SHIFT(14),
  [25] = {.count = 1, .reusable = false}, SHIFT(14),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_key, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(118),
  [31] = {.count = 1, .reusable = true}, SHIFT(89),
  [33] = {.count = 1, .reusable = true}, SHIFT(119),
  [35] = {.count = 1, .reusable = true}, SHIFT(16),
  [37] = {.count = 1, .reusable = false}, SHIFT(17),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [41] = {.count = 1, .reusable = true}, SHIFT(19),
  [43] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [45] = {.count = 1, .reusable = true}, SHIFT(20),
  [47] = {.count = 1, .reusable = true}, SHIFT(21),
  [49] = {.count = 1, .reusable = true}, SHIFT(23),
  [51] = {.count = 1, .reusable = true}, SHIFT(24),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym__basic_string, 2),
  [55] = {.count = 1, .reusable = true}, SHIFT(25),
  [57] = {.count = 1, .reusable = true}, SHIFT(26),
  [59] = {.count = 1, .reusable = false}, SHIFT(26),
  [61] = {.count = 1, .reusable = true}, SHIFT(92),
  [63] = {.count = 1, .reusable = true}, SHIFT(27),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym__literal_string, 2),
  [67] = {.count = 1, .reusable = true}, SHIFT(28),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(2),
  [72] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat2, 2),
  [74] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(5),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_pair, 2),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_pair, 2),
  [81] = {.count = 1, .reusable = false}, SHIFT(147),
  [83] = {.count = 1, .reusable = false}, SHIFT(36),
  [85] = {.count = 1, .reusable = true}, SHIFT(29),
  [87] = {.count = 1, .reusable = true}, SHIFT(36),
  [89] = {.count = 1, .reusable = true}, SHIFT(30),
  [91] = {.count = 1, .reusable = true}, SHIFT(31),
  [93] = {.count = 1, .reusable = true}, SHIFT(32),
  [95] = {.count = 1, .reusable = true}, SHIFT(33),
  [97] = {.count = 1, .reusable = true}, SHIFT(34),
  [99] = {.count = 1, .reusable = false}, SHIFT(29),
  [101] = {.count = 1, .reusable = false}, SHIFT(148),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_document, 2),
  [105] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [107] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [110] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(23),
  [113] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [116] = {.count = 1, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2),
  [118] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [121] = {.count = 1, .reusable = true}, SHIFT(38),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym__basic_string, 3),
  [125] = {.count = 1, .reusable = true}, REDUCE(aux_sym__basic_string_repeat1, 2),
  [127] = {.count = 2, .reusable = true}, REDUCE(aux_sym__basic_string_repeat1, 2), SHIFT_REPEAT(26),
  [130] = {.count = 2, .reusable = false}, REDUCE(aux_sym__basic_string_repeat1, 2), SHIFT_REPEAT(26),
  [133] = {.count = 1, .reusable = true}, SHIFT(39),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym__literal_string, 3),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_integer, 1),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_float, 1),
  [141] = {.count = 1, .reusable = false}, SHIFT(118),
  [143] = {.count = 1, .reusable = true}, SHIFT(40),
  [145] = {.count = 1, .reusable = false}, SHIFT(42),
  [147] = {.count = 1, .reusable = true}, SHIFT(41),
  [149] = {.count = 1, .reusable = true}, SHIFT(95),
  [151] = {.count = 1, .reusable = true}, SHIFT(42),
  [153] = {.count = 1, .reusable = true}, SHIFT(96),
  [155] = {.count = 1, .reusable = true}, SHIFT(123),
  [157] = {.count = 1, .reusable = true}, SHIFT(124),
  [159] = {.count = 1, .reusable = true}, SHIFT(125),
  [161] = {.count = 1, .reusable = true}, SHIFT(126),
  [163] = {.count = 1, .reusable = false}, SHIFT(95),
  [165] = {.count = 1, .reusable = false}, SHIFT(119),
  [167] = {.count = 1, .reusable = true}, SHIFT(43),
  [169] = {.count = 1, .reusable = false}, SHIFT(46),
  [171] = {.count = 1, .reusable = true}, SHIFT(46),
  [173] = {.count = 1, .reusable = true}, SHIFT(45),
  [175] = {.count = 1, .reusable = true}, SHIFT(48),
  [177] = {.count = 1, .reusable = false}, SHIFT(48),
  [179] = {.count = 1, .reusable = true}, SHIFT(47),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym__inline_pair, 3),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_dotted_key, 3),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_table_array_element, 4),
  [189] = {.count = 1, .reusable = true}, SHIFT(49),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym_table_array_element, 4),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_table, 4),
  [195] = {.count = 1, .reusable = true}, SHIFT(50),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym_table, 4),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [201] = {.count = 1, .reusable = true}, SHIFT(51),
  [203] = {.count = 1, .reusable = false}, SHIFT(53),
  [205] = {.count = 1, .reusable = true}, SHIFT(52),
  [207] = {.count = 1, .reusable = true}, SHIFT(53),
  [209] = {.count = 1, .reusable = true}, SHIFT(54),
  [211] = {.count = 1, .reusable = true}, SHIFT(55),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_inline_table, 2),
  [215] = {.count = 1, .reusable = true}, SHIFT(57),
  [217] = {.count = 1, .reusable = true}, SHIFT(58),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym__multiline_literal_string, 2),
  [221] = {.count = 1, .reusable = false}, SHIFT(61),
  [223] = {.count = 1, .reusable = true}, SHIFT(61),
  [225] = {.count = 1, .reusable = true}, SHIFT(60),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym__multiline_basic_string, 2),
  [229] = {.count = 1, .reusable = true}, SHIFT(63),
  [231] = {.count = 1, .reusable = false}, SHIFT(63),
  [233] = {.count = 1, .reusable = true}, SHIFT(62),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_table_array_element, 5),
  [237] = {.count = 1, .reusable = false}, REDUCE(sym_table_array_element, 5),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_table, 5),
  [241] = {.count = 1, .reusable = false}, REDUCE(sym_table, 5),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [245] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2),
  [247] = {.count = 1, .reusable = false}, REDUCE(aux_sym_array_repeat1, 2),
  [249] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(52),
  [252] = {.count = 1, .reusable = true}, SHIFT(65),
  [254] = {.count = 1, .reusable = true}, SHIFT(66),
  [256] = {.count = 1, .reusable = true}, SHIFT(64),
  [258] = {.count = 1, .reusable = false}, SHIFT(69),
  [260] = {.count = 1, .reusable = true}, SHIFT(68),
  [262] = {.count = 1, .reusable = true}, SHIFT(69),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_inline_table, 3, .production_id = 1),
  [266] = {.count = 1, .reusable = true}, SHIFT(72),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym__multiline_literal_string, 3),
  [270] = {.count = 2, .reusable = false}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2), SHIFT_REPEAT(61),
  [273] = {.count = 2, .reusable = true}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2), SHIFT_REPEAT(61),
  [276] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym__multiline_basic_string, 3),
  [280] = {.count = 2, .reusable = true}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2), SHIFT_REPEAT(63),
  [283] = {.count = 2, .reusable = false}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2), SHIFT_REPEAT(63),
  [286] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym_array, 4),
  [290] = {.count = 1, .reusable = true}, SHIFT(74),
  [292] = {.count = 1, .reusable = true}, SHIFT(75),
  [294] = {.count = 1, .reusable = true}, SHIFT(76),
  [296] = {.count = 1, .reusable = false}, SHIFT(78),
  [298] = {.count = 1, .reusable = true}, SHIFT(78),
  [300] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat2, 2),
  [302] = {.count = 1, .reusable = true}, SHIFT(79),
  [304] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_repeat2, 2), SHIFT_REPEAT(80),
  [307] = {.count = 1, .reusable = true}, REDUCE(aux_sym_inline_table_repeat1, 2, .production_id = 1),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_inline_table, 4, .production_id = 1),
  [311] = {.count = 1, .reusable = true}, REDUCE(aux_sym_inline_table_repeat1, 2),
  [313] = {.count = 2, .reusable = true}, REDUCE(aux_sym_inline_table_repeat1, 2), SHIFT_REPEAT(58),
  [316] = {.count = 1, .reusable = true}, REDUCE(sym_array, 5),
  [318] = {.count = 1, .reusable = true}, SHIFT(81),
  [320] = {.count = 1, .reusable = true}, SHIFT(82),
  [322] = {.count = 1, .reusable = true}, SHIFT(83),
  [324] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat2, 3),
  [326] = {.count = 1, .reusable = true}, SHIFT(84),
  [328] = {.count = 1, .reusable = true}, SHIFT(85),
  [330] = {.count = 1, .reusable = true}, REDUCE(sym_array, 6),
  [332] = {.count = 1, .reusable = true}, SHIFT(86),
  [334] = {.count = 1, .reusable = true}, SHIFT(87),
  [336] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat2, 4),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym_array, 7),
  [340] = {.count = 1, .reusable = true}, SHIFT(88),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym_array, 8),
  [344] = {.count = 1, .reusable = true}, SHIFT(114),
  [346] = {.count = 1, .reusable = true}, SHIFT(120),
  [348] = {.count = 1, .reusable = false}, SHIFT(120),
  [350] = {.count = 1, .reusable = true}, SHIFT(115),
  [352] = {.count = 1, .reusable = false}, SHIFT(121),
  [354] = {.count = 1, .reusable = true}, SHIFT(116),
  [356] = {.count = 1, .reusable = true}, SHIFT(117),
  [358] = {.count = 1, .reusable = false}, SHIFT(3),
  [360] = {.count = 1, .reusable = false}, SHIFT(98),
  [362] = {.count = 1, .reusable = true}, SHIFT(98),
  [364] = {.count = 1, .reusable = false}, SHIFT(6),
  [366] = {.count = 1, .reusable = false}, SHIFT(128),
  [368] = {.count = 1, .reusable = true}, SHIFT(128),
  [370] = {.count = 1, .reusable = true}, SHIFT(100),
  [372] = {.count = 1, .reusable = true}, SHIFT(127),
  [374] = {.count = 1, .reusable = true}, SHIFT(101),
  [376] = {.count = 1, .reusable = true}, SHIFT(130),
  [378] = {.count = 1, .reusable = false}, SHIFT(130),
  [380] = {.count = 1, .reusable = true}, SHIFT(102),
  [382] = {.count = 1, .reusable = true}, SHIFT(131),
  [384] = {.count = 1, .reusable = false}, SHIFT(131),
  [386] = {.count = 1, .reusable = true}, SHIFT(103),
  [388] = {.count = 1, .reusable = false}, SHIFT(132),
  [390] = {.count = 1, .reusable = true}, SHIFT(132),
  [392] = {.count = 1, .reusable = true}, SHIFT(104),
  [394] = {.count = 1, .reusable = true}, SHIFT(133),
  [396] = {.count = 1, .reusable = true}, SHIFT(134),
  [398] = {.count = 1, .reusable = true}, SHIFT(105),
  [400] = {.count = 1, .reusable = true}, SHIFT(106),
  [402] = {.count = 1, .reusable = true}, SHIFT(107),
  [404] = {.count = 1, .reusable = true}, SHIFT(137),
  [406] = {.count = 1, .reusable = true}, SHIFT(138),
  [408] = {.count = 1, .reusable = true}, SHIFT(108),
  [410] = {.count = 1, .reusable = true}, SHIFT(140),
  [412] = {.count = 1, .reusable = true}, SHIFT(109),
  [414] = {.count = 1, .reusable = true}, SHIFT(110),
  [416] = {.count = 1, .reusable = true}, SHIFT(141),
  [418] = {.count = 1, .reusable = true}, SHIFT(142),
  [420] = {.count = 1, .reusable = true}, SHIFT(111),
  [422] = {.count = 1, .reusable = true}, SHIFT(144),
  [424] = {.count = 1, .reusable = true}, SHIFT(145),
  [426] = {.count = 1, .reusable = true}, SHIFT(112),
  [428] = {.count = 1, .reusable = true}, SHIFT(146),
  [430] = {.count = 1, .reusable = true}, SHIFT(113),
  [432] = {.count = 1, .reusable = true}, SHIFT(90),
  [434] = {.count = 1, .reusable = true}, SHIFT(149),
  [436] = {.count = 1, .reusable = false}, SHIFT(149),
  [438] = {.count = 1, .reusable = true}, SHIFT(91),
  [440] = {.count = 1, .reusable = false}, SHIFT(150),
  [442] = {.count = 1, .reusable = true}, SHIFT(93),
  [444] = {.count = 1, .reusable = true}, SHIFT(94),
  [446] = {.count = 1, .reusable = true}, SHIFT(122),
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
