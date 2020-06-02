#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 152
#define LARGE_STATE_COUNT 2
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

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_document_token1] = aux_sym_document_token1,
  [sym_comment] = sym_comment,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym__bare_key] = sym__bare_key,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__basic_string_token1] = aux_sym__basic_string_token1,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [aux_sym__multiline_basic_string_token1] = aux_sym__multiline_basic_string_token1,
  [aux_sym__multiline_basic_string_token2] = aux_sym__multiline_basic_string_token2,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__escape_line_ending] = sym_escape_sequence,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__literal_string_token1] = aux_sym__literal_string_token1,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [aux_sym__multiline_literal_string_token1] = aux_sym__multiline_literal_string_token1,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [aux_sym_integer_token2] = aux_sym_integer_token2,
  [aux_sym_integer_token3] = aux_sym_integer_token3,
  [aux_sym_integer_token4] = aux_sym_integer_token4,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [aux_sym_float_token2] = aux_sym_float_token2,
  [sym_boolean] = sym_boolean,
  [sym_offset_date_time] = sym_offset_date_time,
  [sym_local_date_time] = sym_local_date_time,
  [sym_local_date] = sym_local_date,
  [sym_local_time] = sym_local_time,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym__line_ending_or_eof] = sym__line_ending_or_eof,
  [sym_document] = sym_document,
  [sym_table] = sym_table,
  [sym_table_array_element] = sym_table_array_element,
  [sym_pair] = sym_pair,
  [sym__inline_pair] = sym__inline_pair,
  [sym_key] = sym_key,
  [sym_dotted_key] = sym_dotted_key,
  [sym__quoted_key] = sym__quoted_key,
  [sym__inline_value] = sym__inline_value,
  [sym_string] = sym_string,
  [sym__basic_string] = sym__basic_string,
  [sym__multiline_basic_string] = sym__multiline_basic_string,
  [sym__literal_string] = sym__literal_string,
  [sym__multiline_literal_string] = sym__multiline_literal_string,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_array] = sym_array,
  [sym_inline_table] = sym_inline_table,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_document_repeat2] = aux_sym_document_repeat2,
  [aux_sym__basic_string_repeat1] = aux_sym__basic_string_repeat1,
  [aux_sym__multiline_basic_string_repeat1] = aux_sym__multiline_basic_string_repeat1,
  [aux_sym__multiline_literal_string_repeat1] = aux_sym__multiline_literal_string_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_array_repeat2] = aux_sym_array_repeat2,
  [aux_sym_inline_table_repeat1] = aux_sym_inline_table_repeat1,
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
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(82);
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '"') ADVANCE(133);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '\'') ADVANCE(147);
      if (lookahead == '+') ADVANCE(18);
      if (lookahead == ',') ADVANCE(175);
      if (lookahead == '-') ADVANCE(100);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '0') ADVANCE(97);
      if (lookahead == '1') ADVANCE(95);
      if (lookahead == '2') ADVANCE(94);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == '{') ADVANCE(176);
      if (lookahead == '}') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(80)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(12)
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0 &&
          (lookahead < 0 || 31 < lookahead) &&
          lookahead != 127) ADVANCE(131);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(12)
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '"') ADVANCE(132);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead != 0 &&
          (lookahead < 0 || 31 < lookahead) &&
          lookahead != 127) ADVANCE(131);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(137);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < 0 || 31 < lookahead) &&
          lookahead != 127) ADVANCE(145);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(140);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == 'U') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(139);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(83);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '"') ADVANCE(128);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '\'') ADVANCE(142);
      if (lookahead == ',') ADVANCE(175);
      if (lookahead == '0') ADVANCE(157);
      if (lookahead == '1') ADVANCE(155);
      if (lookahead == '2') ADVANCE(154);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead == '{') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(20);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(134);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '\'') ADVANCE(146);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ']') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ']') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '\'') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < 0 || 31 < lookahead) &&
          lookahead != 127) ADVANCE(145);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(148);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ':') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(152);
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(37);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 19:
      if (lookahead == '0') ADVANCE(173);
      END_STATE();
    case 20:
      if (lookahead == '0') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(37);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 21:
      if (lookahead == '0') ADVANCE(55);
      if (lookahead == '1') ADVANCE(48);
      END_STATE();
    case 22:
      if (lookahead == '0') ADVANCE(164);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(23);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 23:
      if (lookahead == '0') ADVANCE(164);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 24:
      if (lookahead == '0') ADVANCE(170);
      END_STATE();
    case 25:
      if (lookahead == '0') ADVANCE(56);
      if (lookahead == '3') ADVANCE(47);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(64);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(49);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(68);
      END_STATE();
    case 27:
      if (lookahead == '2') ADVANCE(50);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(69);
      END_STATE();
    case 28:
      if (lookahead == '6') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(59);
      END_STATE();
    case 29:
      if (lookahead == '6') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(65);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(52);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(29);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(53);
      END_STATE();
    case 34:
      if (lookahead == 'U') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(139);
      END_STATE();
    case 35:
      if (lookahead == ']') ADVANCE(89);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(167);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 46:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(163);
      END_STATE();
    case 47:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(172);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(17);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(33);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(31);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(58);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(66);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(70);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(162);
      END_STATE();
    case 55:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 56:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
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
      if (eof) ADVANCE(82);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '"') ADVANCE(128);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '\'') ADVANCE(142);
      if (lookahead == '+') ADVANCE(18);
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
          lookahead == ' ') SKIP(80)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 81:
      if (eof) ADVANCE(82);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(7);
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
          lookahead == ' ') SKIP(81)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
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
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '_') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == ':') ADVANCE(51);
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
      if (lookahead == '"') ADVANCE(9);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__basic_string_token1);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < 0 || 31 < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != 127) ADVANCE(131);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__basic_string_token1);
      if ((0 <= lookahead && lookahead <= '\t') ||
          (11 <= lookahead && lookahead <= 31) ||
          lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 127) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__basic_string_token1);
      if (lookahead != 0 &&
          (lookahead < 0 || 31 < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != 127) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      if (lookahead == '"') ADVANCE(9);
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
      if (lookahead == '\'') ADVANCE(14);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < 0 || 31 < lookahead) &&
          lookahead != '\'' &&
          lookahead != 127) ADVANCE(145);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if ((0 <= lookahead && lookahead <= 8) ||
          (11 <= lookahead && lookahead <= 31) ||
          lookahead == '\'' ||
          lookahead == 127) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          (lookahead < 0 || 8 < lookahead) &&
          (lookahead < '\n' || 31 < lookahead) &&
          lookahead != '\'' &&
          lookahead != 127) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      if (lookahead == '\'') ADVANCE(14);
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
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(153);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == 'b') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(54);
      if (lookahead == 'x') ADVANCE(72);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '_') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead == '_') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      if (lookahead == '_') ADVANCE(46);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_float_token1);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '_') ADVANCE(63);
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
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(27);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(169);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_local_date_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(27);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_local_date);
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(26);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_local_time);
      if (lookahead == '.') ADVANCE(60);
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
  [1] = {.lex_state = 81},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 81},
  [28] = {.lex_state = 81},
  [29] = {.lex_state = 81},
  [30] = {.lex_state = 81},
  [31] = {.lex_state = 81},
  [32] = {.lex_state = 81},
  [33] = {.lex_state = 81},
  [34] = {.lex_state = 81},
  [35] = {.lex_state = 81},
  [36] = {.lex_state = 81},
  [37] = {.lex_state = 81},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 81},
  [44] = {.lex_state = 81},
  [45] = {.lex_state = 81},
  [46] = {.lex_state = 81},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 81},
  [50] = {.lex_state = 81},
  [51] = {.lex_state = 81},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 81},
  [54] = {.lex_state = 81},
  [55] = {.lex_state = 81},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 81},
  [58] = {.lex_state = 81},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 81},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 81},
  [65] = {.lex_state = 81},
  [66] = {.lex_state = 81},
  [67] = {.lex_state = 81},
  [68] = {.lex_state = 81},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 81},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 81},
  [78] = {.lex_state = 81},
  [79] = {.lex_state = 81},
  [80] = {.lex_state = 81},
  [81] = {.lex_state = 81},
  [82] = {.lex_state = 81},
  [83] = {.lex_state = 81},
  [84] = {.lex_state = 81},
  [85] = {.lex_state = 81},
  [86] = {.lex_state = 81},
  [87] = {.lex_state = 81},
  [88] = {.lex_state = 81},
  [89] = {.lex_state = 81},
  [90] = {.lex_state = 81},
  [91] = {.lex_state = 81},
  [92] = {.lex_state = 81},
  [93] = {.lex_state = 81},
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
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 13},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 13},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 13},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 10},
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
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 0, .external_lex_state = 1},
  [137] = {.lex_state = 0, .external_lex_state = 1},
  [138] = {.lex_state = 0, .external_lex_state = 1},
  [139] = {.lex_state = 0, .external_lex_state = 1},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 0, .external_lex_state = 1},
  [142] = {.lex_state = 0, .external_lex_state = 1},
  [143] = {.lex_state = 0, .external_lex_state = 1},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0, .external_lex_state = 1},
  [146] = {.lex_state = 0, .external_lex_state = 1},
  [147] = {.lex_state = 0, .external_lex_state = 1},
  [148] = {.lex_state = 0, .external_lex_state = 1},
  [149] = {.lex_state = 0, .external_lex_state = 1},
  [150] = {.lex_state = 10},
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

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
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
};

static uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_RBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(41), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(39), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(86), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(55), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [66] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(49), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(47), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(86), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(66), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [132] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      aux_sym_document_token1,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    STATE(15), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(57), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(55), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(86), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(68), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [198] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      aux_sym_document_token1,
    ACTIONS(61), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(57), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(55), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(86), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(68), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [264] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(49), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(47), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(86), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(66), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [330] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      aux_sym_document_token1,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(57), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(55), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(86), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(68), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [396] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(49), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(47), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(86), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(66), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [462] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      aux_sym_document_token1,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(57), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(55), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(86), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(68), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [528] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(49), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(47), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(86), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(66), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [594] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      aux_sym_document_token1,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(57), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(55), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(86), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(68), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [660] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      aux_sym_document_token1,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(57), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(55), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(86), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(68), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [726] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(49), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(47), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(86), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(66), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [792] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(49), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(47), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(86), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(66), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [858] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(49), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(47), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(86), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(66), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [924] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      aux_sym_document_token1,
    ACTIONS(85), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(89), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(87), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(86), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(54), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [990] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      anon_sym_RBRACK,
    ACTIONS(91), 1,
      aux_sym_document_token1,
    STATE(3), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(57), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(55), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(86), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(68), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1056] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(49), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(47), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(86), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(66), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1122] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      aux_sym_document_token1,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(57), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(55), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(86), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(68), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1188] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      aux_sym_document_token1,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(103), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(101), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(86), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(61), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1254] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(109), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(107), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(86), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(53), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1320] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      aux_sym_document_token1,
    STATE(23), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(57), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(55), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(86), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(68), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1383] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(49), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(47), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(86), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(66), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1446] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(115), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(113), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(86), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(111), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1503] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(123), 1,
      anon_sym_SQUOTE,
    ACTIONS(125), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(127), 1,
      aux_sym_integer_token1,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(135), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(129), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(133), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(126), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(137), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1560] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_document_token1,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(144), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_integer_token1,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(142), 14,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1593] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(13), 1,
      sym__bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 1,
      aux_sym_document_token1,
    STATE(142), 1,
      sym__inline_pair,
    STATE(32), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(115), 2,
      sym_key,
      sym_dotted_key,
    STATE(48), 3,
      sym_table,
      sym_table_array_element,
      aux_sym_document_repeat2,
    STATE(106), 3,
      sym__quoted_key,
      sym__basic_string,
      sym__literal_string,
  [1639] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      aux_sym_document_token1,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    STATE(142), 1,
      sym__inline_pair,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
    STATE(31), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(115), 2,
      sym_key,
      sym_dotted_key,
    STATE(106), 3,
      sym__quoted_key,
      sym__basic_string,
      sym__literal_string,
  [1678] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      aux_sym_document_token1,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    STATE(142), 1,
      sym__inline_pair,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
    STATE(30), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(115), 2,
      sym_key,
      sym_dotted_key,
    STATE(106), 3,
      sym__quoted_key,
      sym__basic_string,
      sym__literal_string,
  [1717] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(148), 1,
      aux_sym_document_token1,
    ACTIONS(164), 1,
      anon_sym_LBRACK,
    STATE(142), 1,
      sym__inline_pair,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
    STATE(32), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(115), 2,
      sym_key,
      sym_dotted_key,
    STATE(106), 3,
      sym__quoted_key,
      sym__basic_string,
      sym__literal_string,
  [1756] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(148), 1,
      aux_sym_document_token1,
    ACTIONS(168), 1,
      anon_sym_LBRACK,
    STATE(142), 1,
      sym__inline_pair,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
    STATE(32), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(115), 2,
      sym_key,
      sym_dotted_key,
    STATE(106), 3,
      sym__quoted_key,
      sym__basic_string,
      sym__literal_string,
  [1795] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym_document_token1,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    ACTIONS(177), 1,
      sym__bare_key,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    STATE(142), 1,
      sym__inline_pair,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
    STATE(32), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(115), 2,
      sym_key,
      sym_dotted_key,
    STATE(106), 3,
      sym__quoted_key,
      sym__basic_string,
      sym__literal_string,
  [1834] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      sym__inline_pair,
    STATE(110), 2,
      sym_key,
      sym_dotted_key,
    STATE(106), 3,
      sym__quoted_key,
      sym__basic_string,
      sym__literal_string,
  [1862] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      sym__inline_pair,
    STATE(110), 2,
      sym_key,
      sym_dotted_key,
    STATE(106), 3,
      sym__quoted_key,
      sym__basic_string,
      sym__literal_string,
  [1890] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    STATE(113), 1,
      sym__inline_pair,
    STATE(110), 2,
      sym_key,
      sym_dotted_key,
    STATE(106), 3,
      sym__quoted_key,
      sym__basic_string,
      sym__literal_string,
  [1915] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    STATE(121), 2,
      sym_key,
      sym_dotted_key,
    STATE(106), 3,
      sym__quoted_key,
      sym__basic_string,
      sym__literal_string,
  [1937] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym__bare_key,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(122), 2,
      sym_key,
      sym_dotted_key,
    STATE(109), 3,
      sym__quoted_key,
      sym__basic_string,
      sym__literal_string,
  [1959] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE2,
    STATE(39), 1,
      aux_sym__multiline_basic_string_repeat1,
    ACTIONS(198), 2,
      aux_sym__basic_string_token1,
      aux_sym__multiline_basic_string_token1,
    ACTIONS(200), 3,
      aux_sym__multiline_basic_string_token2,
      sym_escape_sequence,
      sym__escape_line_ending,
  [1978] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE2,
    STATE(39), 1,
      aux_sym__multiline_basic_string_repeat1,
    ACTIONS(204), 2,
      aux_sym__basic_string_token1,
      aux_sym__multiline_basic_string_token1,
    ACTIONS(207), 3,
      aux_sym__multiline_basic_string_token2,
      sym_escape_sequence,
      sym__escape_line_ending,
  [1997] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE2,
    STATE(38), 1,
      aux_sym__multiline_basic_string_repeat1,
    ACTIONS(212), 2,
      aux_sym__basic_string_token1,
      aux_sym__multiline_basic_string_token1,
    ACTIONS(214), 3,
      aux_sym__multiline_basic_string_token2,
      sym_escape_sequence,
      sym__escape_line_ending,
  [2016] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE2,
    STATE(42), 1,
      aux_sym__multiline_basic_string_repeat1,
    ACTIONS(218), 2,
      aux_sym__basic_string_token1,
      aux_sym__multiline_basic_string_token1,
    ACTIONS(220), 3,
      aux_sym__multiline_basic_string_token2,
      sym_escape_sequence,
      sym__escape_line_ending,
  [2035] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE2,
    STATE(39), 1,
      aux_sym__multiline_basic_string_repeat1,
    ACTIONS(198), 2,
      aux_sym__basic_string_token1,
      aux_sym__multiline_basic_string_token1,
    ACTIONS(200), 3,
      aux_sym__multiline_basic_string_token2,
      sym_escape_sequence,
      sym__escape_line_ending,
  [2054] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym__bare_key,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(108), 1,
      sym_key,
    STATE(109), 3,
      sym__quoted_key,
      sym__basic_string,
      sym__literal_string,
  [2075] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    STATE(104), 1,
      sym_key,
    STATE(106), 3,
      sym__quoted_key,
      sym__basic_string,
      sym__literal_string,
  [2096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 6,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      anon_sym_LBRACK_LBRACK,
      sym__bare_key,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 6,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2123] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(237), 1,
      anon_sym_LBRACK_LBRACK,
    STATE(47), 3,
      sym_table,
      sym_table_array_element,
      aux_sym_document_repeat2,
  [2141] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    STATE(47), 3,
      sym_table,
      sym_table_array_element,
      aux_sym_document_repeat2,
  [2159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 6,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 6,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 6,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2195] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(47), 3,
      sym_table,
      sym_table_array_element,
      aux_sym_document_repeat2,
  [2213] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(248), 1,
      aux_sym_document_token1,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_array_repeat1,
    STATE(100), 1,
      aux_sym_array_repeat2,
  [2232] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_RBRACK,
    ACTIONS(252), 1,
      aux_sym_document_token1,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_array_repeat1,
    STATE(96), 1,
      aux_sym_array_repeat2,
  [2251] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    ACTIONS(256), 1,
      aux_sym_document_token1,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_array_repeat1,
    STATE(105), 1,
      aux_sym_array_repeat2,
  [2270] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(260), 1,
      aux_sym__multiline_basic_string_token2,
    ACTIONS(264), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE2,
    STATE(60), 1,
      aux_sym__multiline_literal_string_repeat1,
    ACTIONS(262), 2,
      aux_sym__literal_string_token1,
      aux_sym__multiline_literal_string_token1,
  [2287] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(105), 1,
      aux_sym_array_repeat2,
  [2306] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(98), 1,
      aux_sym_array_repeat2,
  [2325] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(268), 1,
      aux_sym__multiline_basic_string_token2,
    ACTIONS(272), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE2,
    STATE(63), 1,
      aux_sym__multiline_literal_string_repeat1,
    ACTIONS(270), 2,
      aux_sym__literal_string_token1,
      aux_sym__multiline_literal_string_token1,
  [2342] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(274), 1,
      aux_sym__multiline_basic_string_token2,
    ACTIONS(280), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE2,
    STATE(60), 1,
      aux_sym__multiline_literal_string_repeat1,
    ACTIONS(277), 2,
      aux_sym__literal_string_token1,
      aux_sym__multiline_literal_string_token1,
  [2359] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
    ACTIONS(282), 1,
      aux_sym_document_token1,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_array_repeat1,
    STATE(103), 1,
      aux_sym_array_repeat2,
  [2378] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(286), 1,
      aux_sym__multiline_basic_string_token2,
    ACTIONS(290), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE2,
    STATE(56), 1,
      aux_sym__multiline_literal_string_repeat1,
    ACTIONS(288), 2,
      aux_sym__literal_string_token1,
      aux_sym__multiline_literal_string_token1,
  [2395] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(260), 1,
      aux_sym__multiline_basic_string_token2,
    ACTIONS(292), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE2,
    STATE(60), 1,
      aux_sym__multiline_literal_string_repeat1,
    ACTIONS(262), 2,
      aux_sym__literal_string_token1,
      aux_sym__multiline_literal_string_token1,
  [2412] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(100), 1,
      aux_sym_array_repeat2,
  [2431] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(107), 1,
      aux_sym_array_repeat2,
  [2450] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      aux_sym_document_token1,
    STATE(81), 1,
      aux_sym_array_repeat1,
    ACTIONS(298), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2474] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      aux_sym_document_token1,
    STATE(74), 1,
      aux_sym_array_repeat1,
    ACTIONS(304), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2488] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(306), 1,
      aux_sym__basic_string_token1,
    ACTIONS(308), 1,
      anon_sym_DQUOTE2,
    ACTIONS(310), 1,
      sym_escape_sequence,
    STATE(73), 1,
      aux_sym__basic_string_repeat1,
  [2504] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(312), 1,
      aux_sym__basic_string_token1,
    ACTIONS(314), 1,
      anon_sym_DQUOTE2,
    ACTIONS(316), 1,
      sym_escape_sequence,
    STATE(69), 1,
      aux_sym__basic_string_repeat1,
  [2520] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(318), 1,
      aux_sym__basic_string_token1,
    ACTIONS(320), 1,
      anon_sym_DQUOTE2,
    ACTIONS(322), 1,
      sym_escape_sequence,
    STATE(72), 1,
      aux_sym__basic_string_repeat1,
  [2536] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(306), 1,
      aux_sym__basic_string_token1,
    ACTIONS(310), 1,
      sym_escape_sequence,
    ACTIONS(324), 1,
      anon_sym_DQUOTE2,
    STATE(73), 1,
      aux_sym__basic_string_repeat1,
  [2552] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym__basic_string_token1,
    ACTIONS(329), 1,
      anon_sym_DQUOTE2,
    ACTIONS(331), 1,
      sym_escape_sequence,
    STATE(73), 1,
      aux_sym__basic_string_repeat1,
  [2568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(298), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2582] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(306), 1,
      aux_sym__basic_string_token1,
    ACTIONS(310), 1,
      sym_escape_sequence,
    ACTIONS(334), 1,
      anon_sym_DQUOTE2,
    STATE(73), 1,
      aux_sym__basic_string_repeat1,
  [2598] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(336), 1,
      aux_sym__basic_string_token1,
    ACTIONS(338), 1,
      anon_sym_DQUOTE2,
    ACTIONS(340), 1,
      sym_escape_sequence,
    STATE(75), 1,
      aux_sym__basic_string_repeat1,
  [2614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2654] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(350), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2788] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
    STATE(102), 1,
      aux_sym_inline_table_repeat1,
  [2801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(380), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      aux_sym_inline_table_repeat1,
  [2814] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_array_repeat2,
  [2827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_RBRACK,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_array_repeat2,
  [2840] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_array_repeat2,
  [2853] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(387), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      aux_sym_inline_table_repeat1,
  [2866] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_array_repeat2,
  [2879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      aux_sym_inline_table_repeat1,
  [2892] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(394), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      aux_sym_inline_table_repeat1,
  [2905] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_array_repeat2,
  [2918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 3,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
  [2927] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_array_repeat2,
  [2940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 3,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
  [2949] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_array_repeat2,
  [2962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT,
  [2970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT,
  [2978] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_EQ,
    ACTIONS(404), 1,
      anon_sym_DOT,
  [2988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2996] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(408), 1,
      aux_sym__literal_string_token1,
    ACTIONS(410), 1,
      anon_sym_SQUOTE2,
  [3006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3014] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(414), 1,
      aux_sym__literal_string_token1,
    ACTIONS(416), 1,
      anon_sym_SQUOTE2,
  [3024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_DOT,
    ACTIONS(418), 1,
      anon_sym_EQ,
  [3034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT,
  [3042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT,
  [3050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT,
  [3058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT,
  [3066] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(420), 1,
      aux_sym__literal_string_token1,
    ACTIONS(422), 1,
      anon_sym_SQUOTE2,
  [3076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_DOT,
    ACTIONS(424), 1,
      anon_sym_RBRACK,
  [3086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(428), 1,
      anon_sym_DOT,
  [3096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym__line_ending_or_eof,
  [3103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym__line_ending_or_eof,
  [3110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      sym__line_ending_or_eof,
  [3117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__line_ending_or_eof,
  [3124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      sym__line_ending_or_eof,
  [3131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      sym__line_ending_or_eof,
  [3138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym__line_ending_or_eof,
  [3145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym__line_ending_or_eof,
  [3152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym__line_ending_or_eof,
  [3159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym__line_ending_or_eof,
  [3166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym__line_ending_or_eof,
  [3173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      sym__line_ending_or_eof,
  [3180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_SQUOTE2,
  [3187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym__line_ending_or_eof,
  [3194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      sym__line_ending_or_eof,
  [3201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym__line_ending_or_eof,
  [3208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym__line_ending_or_eof,
  [3215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_SQUOTE2,
  [3222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym__line_ending_or_eof,
  [3229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      sym__line_ending_or_eof,
  [3236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      sym__line_ending_or_eof,
  [3243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      ts_builtin_sym_end,
  [3250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym__line_ending_or_eof,
  [3257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      sym__line_ending_or_eof,
  [3264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym__line_ending_or_eof,
  [3271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym__line_ending_or_eof,
  [3278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym__line_ending_or_eof,
  [3285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_SQUOTE2,
  [3292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym__line_ending_or_eof,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 66,
  [SMALL_STATE(4)] = 132,
  [SMALL_STATE(5)] = 198,
  [SMALL_STATE(6)] = 264,
  [SMALL_STATE(7)] = 330,
  [SMALL_STATE(8)] = 396,
  [SMALL_STATE(9)] = 462,
  [SMALL_STATE(10)] = 528,
  [SMALL_STATE(11)] = 594,
  [SMALL_STATE(12)] = 660,
  [SMALL_STATE(13)] = 726,
  [SMALL_STATE(14)] = 792,
  [SMALL_STATE(15)] = 858,
  [SMALL_STATE(16)] = 924,
  [SMALL_STATE(17)] = 990,
  [SMALL_STATE(18)] = 1056,
  [SMALL_STATE(19)] = 1122,
  [SMALL_STATE(20)] = 1188,
  [SMALL_STATE(21)] = 1254,
  [SMALL_STATE(22)] = 1320,
  [SMALL_STATE(23)] = 1383,
  [SMALL_STATE(24)] = 1446,
  [SMALL_STATE(25)] = 1503,
  [SMALL_STATE(26)] = 1560,
  [SMALL_STATE(27)] = 1593,
  [SMALL_STATE(28)] = 1639,
  [SMALL_STATE(29)] = 1678,
  [SMALL_STATE(30)] = 1717,
  [SMALL_STATE(31)] = 1756,
  [SMALL_STATE(32)] = 1795,
  [SMALL_STATE(33)] = 1834,
  [SMALL_STATE(34)] = 1862,
  [SMALL_STATE(35)] = 1890,
  [SMALL_STATE(36)] = 1915,
  [SMALL_STATE(37)] = 1937,
  [SMALL_STATE(38)] = 1959,
  [SMALL_STATE(39)] = 1978,
  [SMALL_STATE(40)] = 1997,
  [SMALL_STATE(41)] = 2016,
  [SMALL_STATE(42)] = 2035,
  [SMALL_STATE(43)] = 2054,
  [SMALL_STATE(44)] = 2075,
  [SMALL_STATE(45)] = 2096,
  [SMALL_STATE(46)] = 2111,
  [SMALL_STATE(47)] = 2123,
  [SMALL_STATE(48)] = 2141,
  [SMALL_STATE(49)] = 2159,
  [SMALL_STATE(50)] = 2171,
  [SMALL_STATE(51)] = 2183,
  [SMALL_STATE(52)] = 2195,
  [SMALL_STATE(53)] = 2213,
  [SMALL_STATE(54)] = 2232,
  [SMALL_STATE(55)] = 2251,
  [SMALL_STATE(56)] = 2270,
  [SMALL_STATE(57)] = 2287,
  [SMALL_STATE(58)] = 2306,
  [SMALL_STATE(59)] = 2325,
  [SMALL_STATE(60)] = 2342,
  [SMALL_STATE(61)] = 2359,
  [SMALL_STATE(62)] = 2378,
  [SMALL_STATE(63)] = 2395,
  [SMALL_STATE(64)] = 2412,
  [SMALL_STATE(65)] = 2431,
  [SMALL_STATE(66)] = 2450,
  [SMALL_STATE(67)] = 2464,
  [SMALL_STATE(68)] = 2474,
  [SMALL_STATE(69)] = 2488,
  [SMALL_STATE(70)] = 2504,
  [SMALL_STATE(71)] = 2520,
  [SMALL_STATE(72)] = 2536,
  [SMALL_STATE(73)] = 2552,
  [SMALL_STATE(74)] = 2568,
  [SMALL_STATE(75)] = 2582,
  [SMALL_STATE(76)] = 2598,
  [SMALL_STATE(77)] = 2614,
  [SMALL_STATE(78)] = 2624,
  [SMALL_STATE(79)] = 2634,
  [SMALL_STATE(80)] = 2644,
  [SMALL_STATE(81)] = 2654,
  [SMALL_STATE(82)] = 2668,
  [SMALL_STATE(83)] = 2678,
  [SMALL_STATE(84)] = 2688,
  [SMALL_STATE(85)] = 2698,
  [SMALL_STATE(86)] = 2708,
  [SMALL_STATE(87)] = 2718,
  [SMALL_STATE(88)] = 2728,
  [SMALL_STATE(89)] = 2738,
  [SMALL_STATE(90)] = 2748,
  [SMALL_STATE(91)] = 2758,
  [SMALL_STATE(92)] = 2768,
  [SMALL_STATE(93)] = 2778,
  [SMALL_STATE(94)] = 2788,
  [SMALL_STATE(95)] = 2801,
  [SMALL_STATE(96)] = 2814,
  [SMALL_STATE(97)] = 2827,
  [SMALL_STATE(98)] = 2840,
  [SMALL_STATE(99)] = 2853,
  [SMALL_STATE(100)] = 2866,
  [SMALL_STATE(101)] = 2879,
  [SMALL_STATE(102)] = 2892,
  [SMALL_STATE(103)] = 2905,
  [SMALL_STATE(104)] = 2918,
  [SMALL_STATE(105)] = 2927,
  [SMALL_STATE(106)] = 2940,
  [SMALL_STATE(107)] = 2949,
  [SMALL_STATE(108)] = 2962,
  [SMALL_STATE(109)] = 2970,
  [SMALL_STATE(110)] = 2978,
  [SMALL_STATE(111)] = 2988,
  [SMALL_STATE(112)] = 2996,
  [SMALL_STATE(113)] = 3006,
  [SMALL_STATE(114)] = 3014,
  [SMALL_STATE(115)] = 3024,
  [SMALL_STATE(116)] = 3034,
  [SMALL_STATE(117)] = 3042,
  [SMALL_STATE(118)] = 3050,
  [SMALL_STATE(119)] = 3058,
  [SMALL_STATE(120)] = 3066,
  [SMALL_STATE(121)] = 3076,
  [SMALL_STATE(122)] = 3086,
  [SMALL_STATE(123)] = 3096,
  [SMALL_STATE(124)] = 3103,
  [SMALL_STATE(125)] = 3110,
  [SMALL_STATE(126)] = 3117,
  [SMALL_STATE(127)] = 3124,
  [SMALL_STATE(128)] = 3131,
  [SMALL_STATE(129)] = 3138,
  [SMALL_STATE(130)] = 3145,
  [SMALL_STATE(131)] = 3152,
  [SMALL_STATE(132)] = 3159,
  [SMALL_STATE(133)] = 3166,
  [SMALL_STATE(134)] = 3173,
  [SMALL_STATE(135)] = 3180,
  [SMALL_STATE(136)] = 3187,
  [SMALL_STATE(137)] = 3194,
  [SMALL_STATE(138)] = 3201,
  [SMALL_STATE(139)] = 3208,
  [SMALL_STATE(140)] = 3215,
  [SMALL_STATE(141)] = 3222,
  [SMALL_STATE(142)] = 3229,
  [SMALL_STATE(143)] = 3236,
  [SMALL_STATE(144)] = 3243,
  [SMALL_STATE(145)] = 3250,
  [SMALL_STATE(146)] = 3257,
  [SMALL_STATE(147)] = 3264,
  [SMALL_STATE(148)] = 3271,
  [SMALL_STATE(149)] = 3278,
  [SMALL_STATE(150)] = 3285,
  [SMALL_STATE(151)] = 3292,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(26),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_array_element, 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_array_element, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_array_element, 5),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_array_element, 5),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 5),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 5),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(32),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(106),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(71),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(114),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2), SHIFT_REPEAT(39),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2), SHIFT_REPEAT(39),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__basic_string, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(36),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(37),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__basic_string, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2), SHIFT_REPEAT(60),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2), SHIFT_REPEAT(60),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_literal_string, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 2),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__basic_string_repeat1, 2), SHIFT_REPEAT(73),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__basic_string_repeat1, 2),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__basic_string_repeat1, 2), SHIFT_REPEAT(73),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 8),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 7),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 6),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 4),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_table, 4, .production_id = 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_table, 3, .production_id = 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_basic_string, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_literal_string, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_table, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_basic_string, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 2), SHIFT_REPEAT(22),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_table_repeat1, 2), SHIFT_REPEAT(35),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_table_repeat1, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_key, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_pair, 3),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_table_repeat1, 2, .production_id = 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [440] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
};

#ifdef __cplusplus
extern "C" {
#endif
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
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
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
#ifdef __cplusplus
}
#endif
