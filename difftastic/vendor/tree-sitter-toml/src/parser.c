#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 152
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 2

enum {
  aux_sym_document_token1 = 1,
  sym_comment = 2,
  anon_sym_LBRACK = 3,
  anon_sym_RBRACK = 4,
  anon_sym_LBRACK_LBRACK = 5,
  anon_sym_RBRACK_RBRACK = 6,
  anon_sym_EQ = 7,
  anon_sym_DOT = 8,
  sym_bare_key = 9,
  anon_sym_DQUOTE = 10,
  aux_sym__basic_string_token1 = 11,
  anon_sym_DQUOTE2 = 12,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 13,
  aux_sym__multiline_basic_string_token1 = 14,
  sym_escape_sequence = 15,
  sym__escape_line_ending = 16,
  anon_sym_SQUOTE = 17,
  aux_sym__literal_string_token1 = 18,
  anon_sym_SQUOTE2 = 19,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 20,
  aux_sym_integer_token1 = 21,
  aux_sym_integer_token2 = 22,
  aux_sym_integer_token3 = 23,
  aux_sym_integer_token4 = 24,
  aux_sym_float_token1 = 25,
  aux_sym_float_token2 = 26,
  sym_boolean = 27,
  sym_offset_date_time = 28,
  sym_local_date_time = 29,
  sym_local_date = 30,
  sym_local_time = 31,
  anon_sym_COMMA = 32,
  anon_sym_LBRACE = 33,
  anon_sym_RBRACE = 34,
  sym__line_ending_or_eof = 35,
  sym__multiline_basic_string_content = 36,
  sym__multiline_basic_string_end = 37,
  sym__multiline_literal_string_content = 38,
  sym__multiline_literal_string_end = 39,
  sym_document = 40,
  sym_table = 41,
  sym_table_array_element = 42,
  sym_pair = 43,
  sym__inline_pair = 44,
  sym__key = 45,
  sym_dotted_key = 46,
  sym_quoted_key = 47,
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
  [sym_bare_key] = "bare_key",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__basic_string_token1] = "_basic_string_token1",
  [anon_sym_DQUOTE2] = "\"",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [aux_sym__multiline_basic_string_token1] = "_multiline_basic_string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym__escape_line_ending] = "escape_sequence",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__literal_string_token1] = "_literal_string_token1",
  [anon_sym_SQUOTE2] = "'",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
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
  [sym__multiline_basic_string_content] = "_multiline_basic_string_content",
  [sym__multiline_basic_string_end] = "_multiline_basic_string_end",
  [sym__multiline_literal_string_content] = "_multiline_literal_string_content",
  [sym__multiline_literal_string_end] = "_multiline_literal_string_end",
  [sym_document] = "document",
  [sym_table] = "table",
  [sym_table_array_element] = "table_array_element",
  [sym_pair] = "pair",
  [sym__inline_pair] = "_inline_pair",
  [sym__key] = "_key",
  [sym_dotted_key] = "dotted_key",
  [sym_quoted_key] = "quoted_key",
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
  [sym_bare_key] = sym_bare_key,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__basic_string_token1] = aux_sym__basic_string_token1,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [aux_sym__multiline_basic_string_token1] = aux_sym__multiline_basic_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__escape_line_ending] = sym_escape_sequence,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__literal_string_token1] = aux_sym__literal_string_token1,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
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
  [sym__multiline_basic_string_content] = sym__multiline_basic_string_content,
  [sym__multiline_basic_string_end] = sym__multiline_basic_string_end,
  [sym__multiline_literal_string_content] = sym__multiline_literal_string_content,
  [sym__multiline_literal_string_end] = sym__multiline_literal_string_end,
  [sym_document] = sym_document,
  [sym_table] = sym_table,
  [sym_table_array_element] = sym_table_array_element,
  [sym_pair] = sym_pair,
  [sym__inline_pair] = sym__inline_pair,
  [sym__key] = sym__key,
  [sym_dotted_key] = sym_dotted_key,
  [sym_quoted_key] = sym_quoted_key,
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
  [sym_bare_key] = {
    .visible = true,
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
  [sym__multiline_basic_string_content] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_basic_string_end] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_literal_string_content] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_literal_string_end] = {
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
  [sym__key] = {
    .visible = false,
    .named = true,
  },
  [sym_dotted_key] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_key] = {
    .visible = true,
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

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = sym_pair,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  sym__inline_pair, 2,
    sym__inline_pair,
    sym_pair,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(77);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(127);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(137);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == ',') ADVANCE(161);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == '0') ADVANCE(92);
      if (lookahead == '1') ADVANCE(90);
      if (lookahead == '2') ADVANCE(89);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(75)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(129);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != 127) ADVANCE(125);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != 127) ADVANCE(135);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(131);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == 'U') ADVANCE(74);
      if (lookahead == 'u') ADVANCE(70);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(130);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(78);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '"') ADVANCE(123);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(133);
      if (lookahead == ',') ADVANCE(161);
      if (lookahead == '0') ADVANCE(144);
      if (lookahead == '1') ADVANCE(142);
      if (lookahead == '2') ADVANCE(141);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(17);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(128);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(136);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(138);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(31);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(159);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(31);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(50);
      if (lookahead == '1') ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead == '0') ADVANCE(156);
      END_STATE();
    case 20:
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == '3') ADVANCE(42);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(59);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(44);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(63);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(45);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(64);
      END_STATE();
    case 23:
      if (lookahead == '6') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == '6') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(60);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(47);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(48);
      END_STATE();
    case 29:
      if (lookahead == ']') ADVANCE(84);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(153);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 40:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 41:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(150);
      END_STATE();
    case 42:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(158);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(14);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(28);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(26);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(53);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(61);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(65);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(149);
      END_STATE();
    case 50:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 51:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 75:
      if (eof) ADVANCE(77);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '"') ADVANCE(123);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(133);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == ',') ADVANCE(161);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == '0') ADVANCE(92);
      if (lookahead == '1') ADVANCE(90);
      if (lookahead == '2') ADVANCE(89);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(75)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 76:
      if (eof) ADVANCE(77);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(132);
      if (lookahead == ',') ADVANCE(161);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(76)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_document_token1);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead > 8 &&
          (lookahead < '\n' || 31 < lookahead) &&
          lookahead != 127) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '_') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == ':') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '_') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(87);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '_') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '_') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == 'b') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == 'x') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '0') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(103);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '0') ADVANCE(117);
      if (lookahead == '1') ADVANCE(114);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '0') ADVANCE(116);
      if (lookahead == '3') ADVANCE(112);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(118);
      if (lookahead == '-' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '_') ADVANCE(113);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(98);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '_') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '_') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '_') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'r') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'u') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(121);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(98);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_bare_key);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(94);
      if (lookahead == '-' ||
          ('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_bare_key);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_bare_key);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead == '-' ||
          lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_bare_key);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_bare_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_bare_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_bare_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(8);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__basic_string_token1);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != 127) ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__basic_string_token1);
      if (lookahead != 0 &&
          lookahead > 8 &&
          (lookahead < '\n' || 31 < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != 127) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      if (lookahead == '"') ADVANCE(8);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__multiline_basic_string_token1);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__escape_line_ending);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(11);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '#') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != '\'' &&
          lookahead != 127) ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead > 8 &&
          (lookahead < '\n' || 31 < lookahead) &&
          lookahead != '\'' &&
          lookahead != 127) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      if (lookahead == '\'') ADVANCE(11);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(140);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == 'b') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == 'x') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '_') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead == '_') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '_') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '_') ADVANCE(57);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_float_token2);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_offset_date_time);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_local_date_time);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(155);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_local_date_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_local_date);
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(21);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_local_time);
      if (lookahead == '.') ADVANCE(55);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_local_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 76},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 76},
  [28] = {.lex_state = 76},
  [29] = {.lex_state = 76},
  [30] = {.lex_state = 76},
  [31] = {.lex_state = 76},
  [32] = {.lex_state = 76},
  [33] = {.lex_state = 76},
  [34] = {.lex_state = 76},
  [35] = {.lex_state = 76},
  [36] = {.lex_state = 76},
  [37] = {.lex_state = 76},
  [38] = {.lex_state = 2, .external_lex_state = 2},
  [39] = {.lex_state = 2, .external_lex_state = 2},
  [40] = {.lex_state = 2, .external_lex_state = 2},
  [41] = {.lex_state = 2, .external_lex_state = 2},
  [42] = {.lex_state = 2, .external_lex_state = 2},
  [43] = {.lex_state = 76},
  [44] = {.lex_state = 76},
  [45] = {.lex_state = 76},
  [46] = {.lex_state = 76},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 76},
  [50] = {.lex_state = 76},
  [51] = {.lex_state = 76},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 76},
  [54] = {.lex_state = 76},
  [55] = {.lex_state = 76},
  [56] = {.lex_state = 3, .external_lex_state = 3},
  [57] = {.lex_state = 76},
  [58] = {.lex_state = 76},
  [59] = {.lex_state = 3, .external_lex_state = 3},
  [60] = {.lex_state = 3, .external_lex_state = 3},
  [61] = {.lex_state = 76},
  [62] = {.lex_state = 3, .external_lex_state = 3},
  [63] = {.lex_state = 3, .external_lex_state = 3},
  [64] = {.lex_state = 76},
  [65] = {.lex_state = 76},
  [66] = {.lex_state = 76},
  [67] = {.lex_state = 76},
  [68] = {.lex_state = 76},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 76},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 76},
  [78] = {.lex_state = 76},
  [79] = {.lex_state = 76},
  [80] = {.lex_state = 76},
  [81] = {.lex_state = 76},
  [82] = {.lex_state = 76},
  [83] = {.lex_state = 76},
  [84] = {.lex_state = 76},
  [85] = {.lex_state = 76},
  [86] = {.lex_state = 76},
  [87] = {.lex_state = 76},
  [88] = {.lex_state = 76},
  [89] = {.lex_state = 76},
  [90] = {.lex_state = 76},
  [91] = {.lex_state = 76},
  [92] = {.lex_state = 76},
  [93] = {.lex_state = 76},
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
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 9},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 0, .external_lex_state = 4},
  [124] = {.lex_state = 0, .external_lex_state = 4},
  [125] = {.lex_state = 0, .external_lex_state = 4},
  [126] = {.lex_state = 0, .external_lex_state = 4},
  [127] = {.lex_state = 0, .external_lex_state = 4},
  [128] = {.lex_state = 0, .external_lex_state = 4},
  [129] = {.lex_state = 0, .external_lex_state = 4},
  [130] = {.lex_state = 0, .external_lex_state = 4},
  [131] = {.lex_state = 0, .external_lex_state = 4},
  [132] = {.lex_state = 0, .external_lex_state = 4},
  [133] = {.lex_state = 0, .external_lex_state = 4},
  [134] = {.lex_state = 0, .external_lex_state = 4},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 0, .external_lex_state = 4},
  [137] = {.lex_state = 0, .external_lex_state = 4},
  [138] = {.lex_state = 0, .external_lex_state = 4},
  [139] = {.lex_state = 0, .external_lex_state = 4},
  [140] = {.lex_state = 0, .external_lex_state = 4},
  [141] = {.lex_state = 0, .external_lex_state = 4},
  [142] = {.lex_state = 0, .external_lex_state = 4},
  [143] = {.lex_state = 0, .external_lex_state = 4},
  [144] = {.lex_state = 0, .external_lex_state = 4},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 9},
  [147] = {.lex_state = 0, .external_lex_state = 4},
  [148] = {.lex_state = 0, .external_lex_state = 4},
  [149] = {.lex_state = 0, .external_lex_state = 4},
  [150] = {.lex_state = 9},
  [151] = {.lex_state = 0, .external_lex_state = 4},
};

enum {
  ts_external_token__line_ending_or_eof = 0,
  ts_external_token__multiline_basic_string_content = 1,
  ts_external_token__multiline_basic_string_end = 2,
  ts_external_token__multiline_literal_string_content = 3,
  ts_external_token__multiline_literal_string_end = 4,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__line_ending_or_eof] = sym__line_ending_or_eof,
  [ts_external_token__multiline_basic_string_content] = sym__multiline_basic_string_content,
  [ts_external_token__multiline_basic_string_end] = sym__multiline_basic_string_end,
  [ts_external_token__multiline_literal_string_content] = sym__multiline_literal_string_content,
  [ts_external_token__multiline_literal_string_end] = sym__multiline_literal_string_end,
};

static bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__line_ending_or_eof] = true,
    [ts_external_token__multiline_basic_string_content] = true,
    [ts_external_token__multiline_basic_string_end] = true,
    [ts_external_token__multiline_literal_string_content] = true,
    [ts_external_token__multiline_literal_string_end] = true,
  },
  [2] = {
    [ts_external_token__multiline_basic_string_content] = true,
    [ts_external_token__multiline_basic_string_end] = true,
  },
  [3] = {
    [ts_external_token__multiline_literal_string_content] = true,
    [ts_external_token__multiline_literal_string_end] = true,
  },
  [4] = {
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
    [sym_bare_key] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(1),
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
    [sym__multiline_basic_string_content] = ACTIONS(1),
    [sym__multiline_basic_string_end] = ACTIONS(1),
    [sym__multiline_literal_string_content] = ACTIONS(1),
    [sym__multiline_literal_string_end] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(145),
    [sym_table] = STATE(52),
    [sym_table_array_element] = STATE(52),
    [sym_pair] = STATE(27),
    [sym__inline_pair] = STATE(144),
    [sym__key] = STATE(121),
    [sym_dotted_key] = STATE(121),
    [sym_quoted_key] = STATE(121),
    [sym__basic_string] = STATE(100),
    [sym__literal_string] = STATE(100),
    [aux_sym_document_repeat1] = STATE(27),
    [aux_sym_document_repeat2] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_document_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(11),
    [sym_bare_key] = ACTIONS(13),
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
    STATE(110), 6,
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
    STATE(127), 6,
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
      sym_bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 1,
      aux_sym_document_token1,
    STATE(144), 1,
      sym__inline_pair,
    STATE(32), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(100), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(48), 3,
      sym_table,
      sym_table_array_element,
      aux_sym_document_repeat2,
    STATE(121), 3,
      sym__key,
      sym_dotted_key,
      sym_quoted_key,
  [1639] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      aux_sym_document_token1,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    STATE(144), 1,
      sym__inline_pair,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
    STATE(31), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(100), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(121), 3,
      sym__key,
      sym_dotted_key,
      sym_quoted_key,
  [1678] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      aux_sym_document_token1,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    STATE(144), 1,
      sym__inline_pair,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
    STATE(30), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(100), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(121), 3,
      sym__key,
      sym_dotted_key,
      sym_quoted_key,
  [1717] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(148), 1,
      aux_sym_document_token1,
    ACTIONS(164), 1,
      anon_sym_LBRACK,
    STATE(144), 1,
      sym__inline_pair,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
    STATE(32), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(100), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(121), 3,
      sym__key,
      sym_dotted_key,
      sym_quoted_key,
  [1756] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(148), 1,
      aux_sym_document_token1,
    ACTIONS(168), 1,
      anon_sym_LBRACK,
    STATE(144), 1,
      sym__inline_pair,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
    STATE(32), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(100), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(121), 3,
      sym__key,
      sym_dotted_key,
      sym_quoted_key,
  [1795] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym_document_token1,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    ACTIONS(177), 1,
      sym_bare_key,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    STATE(144), 1,
      sym__inline_pair,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
    STATE(32), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(100), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(121), 3,
      sym__key,
      sym_dotted_key,
      sym_quoted_key,
  [1834] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      sym_bare_key,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      sym__inline_pair,
    STATE(100), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(112), 3,
      sym__key,
      sym_dotted_key,
      sym_quoted_key,
  [1862] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      sym_bare_key,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      sym__inline_pair,
    STATE(100), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(112), 3,
      sym__key,
      sym_dotted_key,
      sym_quoted_key,
  [1890] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      sym_bare_key,
    STATE(114), 1,
      sym__inline_pair,
    STATE(100), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(112), 3,
      sym__key,
      sym_dotted_key,
      sym_quoted_key,
  [1915] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(192), 1,
      sym_bare_key,
    STATE(100), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(109), 3,
      sym__key,
      sym_dotted_key,
      sym_quoted_key,
  [1937] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_bare_key,
    ACTIONS(196), 1,
      anon_sym_DQUOTE,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    STATE(122), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(108), 3,
      sym__key,
      sym_dotted_key,
      sym_quoted_key,
  [1959] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym__multiline_basic_string_end,
    STATE(39), 1,
      aux_sym__multiline_basic_string_repeat1,
    ACTIONS(202), 5,
      sym__multiline_basic_string_content,
      aux_sym__basic_string_token1,
      aux_sym__multiline_basic_string_token1,
      sym_escape_sequence,
      sym__escape_line_ending,
  [1976] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym__multiline_basic_string_end,
    STATE(39), 1,
      aux_sym__multiline_basic_string_repeat1,
    ACTIONS(206), 5,
      sym__multiline_basic_string_content,
      aux_sym__basic_string_token1,
      aux_sym__multiline_basic_string_token1,
      sym_escape_sequence,
      sym__escape_line_ending,
  [1993] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym__multiline_basic_string_end,
    STATE(38), 1,
      aux_sym__multiline_basic_string_repeat1,
    ACTIONS(211), 5,
      sym__multiline_basic_string_content,
      aux_sym__basic_string_token1,
      aux_sym__multiline_basic_string_token1,
      sym_escape_sequence,
      sym__escape_line_ending,
  [2010] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym__multiline_basic_string_end,
    STATE(42), 1,
      aux_sym__multiline_basic_string_repeat1,
    ACTIONS(215), 5,
      sym__multiline_basic_string_content,
      aux_sym__basic_string_token1,
      aux_sym__multiline_basic_string_token1,
      sym_escape_sequence,
      sym__escape_line_ending,
  [2027] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym__multiline_basic_string_end,
    STATE(39), 1,
      aux_sym__multiline_basic_string_repeat1,
    ACTIONS(202), 5,
      sym__multiline_basic_string_content,
      aux_sym__basic_string_token1,
      aux_sym__multiline_basic_string_token1,
      sym_escape_sequence,
      sym__escape_line_ending,
  [2044] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DQUOTE,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      sym_bare_key,
    STATE(111), 2,
      sym__key,
      sym_quoted_key,
    STATE(122), 2,
      sym__basic_string,
      sym__literal_string,
  [2065] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(223), 1,
      sym_bare_key,
    STATE(100), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(105), 2,
      sym__key,
      sym_quoted_key,
  [2086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_LBRACK,
    ACTIONS(225), 6,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      anon_sym_LBRACK_LBRACK,
      sym_bare_key,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 6,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2113] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_LBRACK_LBRACK,
    STATE(47), 3,
      sym_table,
      sym_table_array_element,
      aux_sym_document_repeat2,
  [2131] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    STATE(47), 3,
      sym_table,
      sym_table_array_element,
      aux_sym_document_repeat2,
  [2149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 6,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 6,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 6,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2185] = 5,
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
  [2203] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(247), 1,
      aux_sym_document_token1,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_array_repeat1,
    STATE(101), 1,
      aux_sym_array_repeat2,
  [2222] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_RBRACK,
    ACTIONS(251), 1,
      aux_sym_document_token1,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_array_repeat1,
    STATE(96), 1,
      aux_sym_array_repeat2,
  [2241] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    ACTIONS(255), 1,
      aux_sym_document_token1,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_array_repeat1,
    STATE(106), 1,
      aux_sym_array_repeat2,
  [2260] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym__multiline_literal_string_end,
    STATE(60), 1,
      aux_sym__multiline_literal_string_repeat1,
    ACTIONS(259), 3,
      sym__multiline_literal_string_content,
      aux_sym__multiline_basic_string_token1,
      aux_sym__literal_string_token1,
  [2275] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(106), 1,
      aux_sym_array_repeat2,
  [2294] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(98), 1,
      aux_sym_array_repeat2,
  [2313] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(267), 1,
      sym__multiline_literal_string_end,
    STATE(63), 1,
      aux_sym__multiline_literal_string_repeat1,
    ACTIONS(265), 3,
      sym__multiline_literal_string_content,
      aux_sym__multiline_basic_string_token1,
      aux_sym__literal_string_token1,
  [2328] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(272), 1,
      sym__multiline_literal_string_end,
    STATE(60), 1,
      aux_sym__multiline_literal_string_repeat1,
    ACTIONS(269), 3,
      sym__multiline_literal_string_content,
      aux_sym__multiline_basic_string_token1,
      aux_sym__literal_string_token1,
  [2343] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
    ACTIONS(274), 1,
      aux_sym_document_token1,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_array_repeat1,
    STATE(103), 1,
      aux_sym_array_repeat2,
  [2362] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym__multiline_literal_string_end,
    STATE(56), 1,
      aux_sym__multiline_literal_string_repeat1,
    ACTIONS(278), 3,
      sym__multiline_literal_string_content,
      aux_sym__multiline_basic_string_token1,
      aux_sym__literal_string_token1,
  [2377] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym__multiline_literal_string_end,
    STATE(60), 1,
      aux_sym__multiline_literal_string_repeat1,
    ACTIONS(259), 3,
      sym__multiline_literal_string_content,
      aux_sym__multiline_basic_string_token1,
      aux_sym__literal_string_token1,
  [2392] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(101), 1,
      aux_sym_array_repeat2,
  [2411] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(95), 1,
      aux_sym_array_repeat2,
  [2430] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      aux_sym_document_token1,
    STATE(81), 1,
      aux_sym_array_repeat1,
    ACTIONS(288), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2454] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      aux_sym_document_token1,
    STATE(74), 1,
      aux_sym_array_repeat1,
    ACTIONS(294), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2468] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_DQUOTE2,
    STATE(72), 1,
      aux_sym__basic_string_repeat1,
    ACTIONS(296), 2,
      aux_sym__basic_string_token1,
      sym_escape_sequence,
  [2482] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DQUOTE2,
    STATE(69), 1,
      aux_sym__basic_string_repeat1,
    ACTIONS(300), 2,
      aux_sym__basic_string_token1,
      sym_escape_sequence,
  [2496] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_DQUOTE2,
    STATE(72), 1,
      aux_sym__basic_string_repeat1,
    ACTIONS(296), 2,
      aux_sym__basic_string_token1,
      sym_escape_sequence,
  [2510] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DQUOTE2,
    STATE(72), 1,
      aux_sym__basic_string_repeat1,
    ACTIONS(306), 2,
      aux_sym__basic_string_token1,
      sym_escape_sequence,
  [2524] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_DQUOTE2,
    STATE(72), 1,
      aux_sym__basic_string_repeat1,
    ACTIONS(296), 2,
      aux_sym__basic_string_token1,
      sym_escape_sequence,
  [2538] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(288), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2552] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_DQUOTE2,
    STATE(73), 1,
      aux_sym__basic_string_repeat1,
    ACTIONS(313), 2,
      aux_sym__basic_string_token1,
      sym_escape_sequence,
  [2566] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_DQUOTE2,
    STATE(71), 1,
      aux_sym__basic_string_repeat1,
    ACTIONS(317), 2,
      aux_sym__basic_string_token1,
      sym_escape_sequence,
  [2580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2620] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(329), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2754] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(357), 1,
      anon_sym_RBRACE,
    STATE(102), 1,
      aux_sym_inline_table_repeat1,
  [2767] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_array_repeat2,
  [2780] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_array_repeat2,
  [2793] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_RBRACK,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_array_repeat2,
  [2806] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    ACTIONS(364), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_array_repeat2,
  [2819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      aux_sym_inline_table_repeat1,
  [2832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 3,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
  [2841] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_array_repeat2,
  [2854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(370), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      aux_sym_inline_table_repeat1,
  [2867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_array_repeat2,
  [2880] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    ACTIONS(375), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      aux_sym_inline_table_repeat1,
  [2893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 3,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
  [2902] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_array_repeat2,
  [2915] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(379), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      aux_sym_inline_table_repeat1,
  [2928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(383), 1,
      anon_sym_DOT,
  [2938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_RBRACK,
    ACTIONS(387), 1,
      anon_sym_DOT,
  [2948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT,
  [2964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_EQ,
  [2974] = 3,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(393), 1,
      aux_sym__literal_string_token1,
    ACTIONS(395), 1,
      anon_sym_SQUOTE2,
  [2984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT,
  [3000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT,
  [3008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT,
  [3016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT,
  [3024] = 3,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(399), 1,
      aux_sym__literal_string_token1,
    ACTIONS(401), 1,
      anon_sym_SQUOTE2,
  [3034] = 3,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(403), 1,
      aux_sym__literal_string_token1,
    ACTIONS(405), 1,
      anon_sym_SQUOTE2,
  [3044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_DOT,
    ACTIONS(407), 1,
      anon_sym_EQ,
  [3054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT,
  [3062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      sym__line_ending_or_eof,
  [3069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym__line_ending_or_eof,
  [3076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym__line_ending_or_eof,
  [3083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__line_ending_or_eof,
  [3090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      sym__line_ending_or_eof,
  [3097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym__line_ending_or_eof,
  [3104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym__line_ending_or_eof,
  [3111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym__line_ending_or_eof,
  [3118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__line_ending_or_eof,
  [3125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym__line_ending_or_eof,
  [3132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      sym__line_ending_or_eof,
  [3139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym__line_ending_or_eof,
  [3146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_SQUOTE2,
  [3153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym__line_ending_or_eof,
  [3160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym__line_ending_or_eof,
  [3167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym__line_ending_or_eof,
  [3174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      sym__line_ending_or_eof,
  [3181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      sym__line_ending_or_eof,
  [3188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym__line_ending_or_eof,
  [3195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      sym__line_ending_or_eof,
  [3202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym__line_ending_or_eof,
  [3209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym__line_ending_or_eof,
  [3216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      ts_builtin_sym_end,
  [3223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_SQUOTE2,
  [3230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      sym__line_ending_or_eof,
  [3237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__line_ending_or_eof,
  [3244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      sym__line_ending_or_eof,
  [3251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_SQUOTE2,
  [3258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
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
  [SMALL_STATE(39)] = 1976,
  [SMALL_STATE(40)] = 1993,
  [SMALL_STATE(41)] = 2010,
  [SMALL_STATE(42)] = 2027,
  [SMALL_STATE(43)] = 2044,
  [SMALL_STATE(44)] = 2065,
  [SMALL_STATE(45)] = 2086,
  [SMALL_STATE(46)] = 2101,
  [SMALL_STATE(47)] = 2113,
  [SMALL_STATE(48)] = 2131,
  [SMALL_STATE(49)] = 2149,
  [SMALL_STATE(50)] = 2161,
  [SMALL_STATE(51)] = 2173,
  [SMALL_STATE(52)] = 2185,
  [SMALL_STATE(53)] = 2203,
  [SMALL_STATE(54)] = 2222,
  [SMALL_STATE(55)] = 2241,
  [SMALL_STATE(56)] = 2260,
  [SMALL_STATE(57)] = 2275,
  [SMALL_STATE(58)] = 2294,
  [SMALL_STATE(59)] = 2313,
  [SMALL_STATE(60)] = 2328,
  [SMALL_STATE(61)] = 2343,
  [SMALL_STATE(62)] = 2362,
  [SMALL_STATE(63)] = 2377,
  [SMALL_STATE(64)] = 2392,
  [SMALL_STATE(65)] = 2411,
  [SMALL_STATE(66)] = 2430,
  [SMALL_STATE(67)] = 2444,
  [SMALL_STATE(68)] = 2454,
  [SMALL_STATE(69)] = 2468,
  [SMALL_STATE(70)] = 2482,
  [SMALL_STATE(71)] = 2496,
  [SMALL_STATE(72)] = 2510,
  [SMALL_STATE(73)] = 2524,
  [SMALL_STATE(74)] = 2538,
  [SMALL_STATE(75)] = 2552,
  [SMALL_STATE(76)] = 2566,
  [SMALL_STATE(77)] = 2580,
  [SMALL_STATE(78)] = 2590,
  [SMALL_STATE(79)] = 2600,
  [SMALL_STATE(80)] = 2610,
  [SMALL_STATE(81)] = 2620,
  [SMALL_STATE(82)] = 2634,
  [SMALL_STATE(83)] = 2644,
  [SMALL_STATE(84)] = 2654,
  [SMALL_STATE(85)] = 2664,
  [SMALL_STATE(86)] = 2674,
  [SMALL_STATE(87)] = 2684,
  [SMALL_STATE(88)] = 2694,
  [SMALL_STATE(89)] = 2704,
  [SMALL_STATE(90)] = 2714,
  [SMALL_STATE(91)] = 2724,
  [SMALL_STATE(92)] = 2734,
  [SMALL_STATE(93)] = 2744,
  [SMALL_STATE(94)] = 2754,
  [SMALL_STATE(95)] = 2767,
  [SMALL_STATE(96)] = 2780,
  [SMALL_STATE(97)] = 2793,
  [SMALL_STATE(98)] = 2806,
  [SMALL_STATE(99)] = 2819,
  [SMALL_STATE(100)] = 2832,
  [SMALL_STATE(101)] = 2841,
  [SMALL_STATE(102)] = 2854,
  [SMALL_STATE(103)] = 2867,
  [SMALL_STATE(104)] = 2880,
  [SMALL_STATE(105)] = 2893,
  [SMALL_STATE(106)] = 2902,
  [SMALL_STATE(107)] = 2915,
  [SMALL_STATE(108)] = 2928,
  [SMALL_STATE(109)] = 2938,
  [SMALL_STATE(110)] = 2948,
  [SMALL_STATE(111)] = 2956,
  [SMALL_STATE(112)] = 2964,
  [SMALL_STATE(113)] = 2974,
  [SMALL_STATE(114)] = 2984,
  [SMALL_STATE(115)] = 2992,
  [SMALL_STATE(116)] = 3000,
  [SMALL_STATE(117)] = 3008,
  [SMALL_STATE(118)] = 3016,
  [SMALL_STATE(119)] = 3024,
  [SMALL_STATE(120)] = 3034,
  [SMALL_STATE(121)] = 3044,
  [SMALL_STATE(122)] = 3054,
  [SMALL_STATE(123)] = 3062,
  [SMALL_STATE(124)] = 3069,
  [SMALL_STATE(125)] = 3076,
  [SMALL_STATE(126)] = 3083,
  [SMALL_STATE(127)] = 3090,
  [SMALL_STATE(128)] = 3097,
  [SMALL_STATE(129)] = 3104,
  [SMALL_STATE(130)] = 3111,
  [SMALL_STATE(131)] = 3118,
  [SMALL_STATE(132)] = 3125,
  [SMALL_STATE(133)] = 3132,
  [SMALL_STATE(134)] = 3139,
  [SMALL_STATE(135)] = 3146,
  [SMALL_STATE(136)] = 3153,
  [SMALL_STATE(137)] = 3160,
  [SMALL_STATE(138)] = 3167,
  [SMALL_STATE(139)] = 3174,
  [SMALL_STATE(140)] = 3181,
  [SMALL_STATE(141)] = 3188,
  [SMALL_STATE(142)] = 3195,
  [SMALL_STATE(143)] = 3202,
  [SMALL_STATE(144)] = 3209,
  [SMALL_STATE(145)] = 3216,
  [SMALL_STATE(146)] = 3223,
  [SMALL_STATE(147)] = 3230,
  [SMALL_STATE(148)] = 3237,
  [SMALL_STATE(149)] = 3244,
  [SMALL_STATE(150)] = 3251,
  [SMALL_STATE(151)] = 3258,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
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
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
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
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
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
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(121),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(76),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(120),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2), SHIFT_REPEAT(39),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__basic_string, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(36),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(37),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__basic_string, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2), SHIFT_REPEAT(60),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_literal_string, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__basic_string_repeat1, 2), SHIFT_REPEAT(72),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__basic_string_repeat1, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 8),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 7),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 6),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 4),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_table, 4, .production_id = 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_table, 3, .production_id = 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_basic_string, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_literal_string, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_table, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_basic_string, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 2), SHIFT_REPEAT(22),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_key, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_table_repeat1, 2), SHIFT_REPEAT(35),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_table_repeat1, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_key, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_pair, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_table_repeat1, 2, .production_id = 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [417] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
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
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
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
