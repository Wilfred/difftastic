#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 190
#define SYMBOL_COUNT 78
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
  aux_sym__singleline_basic_string_token1 = 11,
  anon_sym_DQUOTE2 = 12,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 13,
  aux_sym__multiline_basic_string_token1 = 14,
  aux_sym__multiline_basic_string_token2 = 15,
  anon_sym_DQUOTE_DQUOTE_DQUOTE2 = 16,
  sym_escape_sequence = 17,
  sym__escape_line_ending = 18,
  anon_sym_SQUOTE = 19,
  aux_sym__singleline_literal_string_token1 = 20,
  anon_sym_SQUOTE2 = 21,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 22,
  aux_sym__multiline_literal_string_token1 = 23,
  anon_sym_SQUOTE_SQUOTE_SQUOTE2 = 24,
  sym__decimal_integer = 25,
  sym__hexadecimal_integer = 26,
  sym__octal_integer = 27,
  sym__binary_integer = 28,
  aux_sym_float_token1 = 29,
  sym__float_fractional_part = 30,
  aux_sym__float_exponent_part_token1 = 31,
  sym_boolean = 32,
  sym__rfc3339_date = 33,
  sym__rfc3339_delimiter = 34,
  sym__rfc3339_time = 35,
  sym__rfc3339_offset = 36,
  anon_sym_COMMA = 37,
  anon_sym_LBRACE = 38,
  anon_sym_RBRACE = 39,
  sym__eof = 40,
  sym_root = 41,
  sym__newline_or_eof = 42,
  sym_table = 43,
  sym__table_header = 44,
  sym__loose_table_header = 45,
  sym_table_array = 46,
  sym__table_array_header = 47,
  sym__loose_table_array_header = 48,
  sym_pair = 49,
  sym__inline_pair = 50,
  sym__loose_pair = 51,
  sym__pairs = 52,
  sym_key = 53,
  sym_dotted_key = 54,
  sym__quoted_key = 55,
  sym__inline_value = 56,
  sym_string = 57,
  sym__singleline_basic_string = 58,
  sym__multiline_basic_string = 59,
  sym__singleline_literal_string = 60,
  sym__multiline_literal_string = 61,
  sym_integer = 62,
  sym_float = 63,
  sym__float_exponent_part = 64,
  sym_offset_date_time = 65,
  sym_local_date_time = 66,
  sym_local_date = 67,
  sym_local_time = 68,
  sym_array = 69,
  sym_inline_table = 70,
  aux_sym_root_repeat1 = 71,
  aux_sym_root_repeat2 = 72,
  aux_sym__singleline_basic_string_repeat1 = 73,
  aux_sym__multiline_basic_string_repeat1 = 74,
  aux_sym__multiline_literal_string_repeat1 = 75,
  aux_sym_array_repeat1 = 76,
  aux_sym_inline_table_repeat1 = 77,
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
  [aux_sym__singleline_basic_string_token1] = "_singleline_basic_string_token1",
  [anon_sym_DQUOTE2] = "\"",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [aux_sym__multiline_basic_string_token1] = "_multiline_basic_string_token1",
  [aux_sym__multiline_basic_string_token2] = "_multiline_basic_string_token2",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = "\"\"\"",
  [sym_escape_sequence] = "escape_sequence",
  [sym__escape_line_ending] = "escape_sequence",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__singleline_literal_string_token1] = "_singleline_literal_string_token1",
  [anon_sym_SQUOTE2] = "'",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [aux_sym__multiline_literal_string_token1] = "_multiline_literal_string_token1",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = "'''",
  [sym__decimal_integer] = "_decimal_integer",
  [sym__hexadecimal_integer] = "_hexadecimal_integer",
  [sym__octal_integer] = "_octal_integer",
  [sym__binary_integer] = "_binary_integer",
  [aux_sym_float_token1] = "float_token1",
  [sym__float_fractional_part] = "_float_fractional_part",
  [aux_sym__float_exponent_part_token1] = "_float_exponent_part_token1",
  [sym_boolean] = "boolean",
  [sym__rfc3339_date] = "_rfc3339_date",
  [sym__rfc3339_delimiter] = "_rfc3339_delimiter",
  [sym__rfc3339_time] = "_rfc3339_time",
  [sym__rfc3339_offset] = "_rfc3339_offset",
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
  [sym__singleline_basic_string] = "_singleline_basic_string",
  [sym__multiline_basic_string] = "_multiline_basic_string",
  [sym__singleline_literal_string] = "_singleline_literal_string",
  [sym__multiline_literal_string] = "_multiline_literal_string",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym__float_exponent_part] = "_float_exponent_part",
  [sym_offset_date_time] = "offset_date_time",
  [sym_local_date_time] = "local_date_time",
  [sym_local_date] = "local_date",
  [sym_local_time] = "local_time",
  [sym_array] = "array",
  [sym_inline_table] = "inline_table",
  [aux_sym_root_repeat1] = "root_repeat1",
  [aux_sym_root_repeat2] = "root_repeat2",
  [aux_sym__singleline_basic_string_repeat1] = "_singleline_basic_string_repeat1",
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
  [aux_sym__singleline_basic_string_token1] = {
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
  [aux_sym__singleline_literal_string_token1] = {
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
  [sym__decimal_integer] = {
    .visible = false,
    .named = true,
  },
  [sym__hexadecimal_integer] = {
    .visible = false,
    .named = true,
  },
  [sym__octal_integer] = {
    .visible = false,
    .named = true,
  },
  [sym__binary_integer] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__float_fractional_part] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__float_exponent_part_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym__rfc3339_date] = {
    .visible = false,
    .named = true,
  },
  [sym__rfc3339_delimiter] = {
    .visible = false,
    .named = true,
  },
  [sym__rfc3339_time] = {
    .visible = false,
    .named = true,
  },
  [sym__rfc3339_offset] = {
    .visible = false,
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
  [sym__singleline_basic_string] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_basic_string] = {
    .visible = false,
    .named = true,
  },
  [sym__singleline_literal_string] = {
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
  [sym__float_exponent_part] = {
    .visible = false,
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
  [aux_sym__singleline_basic_string_repeat1] = {
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
      if (lookahead == 0) ADVANCE(71);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '"') ADVANCE(127);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(141);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '0') ADVANCE(86);
      if (lookahead == '1') ADVANCE(84);
      if (lookahead == '2') ADVANCE(83);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'n') ADVANCE(101);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == '{') ADVANCE(175);
      if (lookahead == '}') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(120);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(120);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(71);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(136);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '0') ADVANCE(86);
      if (lookahead == '1') ADVANCE(84);
      if (lookahead == '2') ADVANCE(83);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'n') ADVANCE(101);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == '{') ADVANCE(175);
      if (lookahead == '}') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(120);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(120);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(71);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(135);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == '}') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 3:
      if (lookahead == '\t') SKIP(16)
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '') ADVANCE(125);
      END_STATE();
    case 4:
      if (lookahead == '\t') SKIP(16)
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '') ADVANCE(125);
      END_STATE();
    case 5:
      if (lookahead == '\t') SKIP(5)
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == ' ') ADVANCE(170);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '}') ADVANCE(176);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(169);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(131);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '\'') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '') ADVANCE(139);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(134);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(134);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == 'U') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(66);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(73);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(136);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '0') ADVANCE(151);
      if (lookahead == '1') ADVANCE(149);
      if (lookahead == '2') ADVANCE(148);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == '{') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(24);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(140);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '0') ADVANCE(160);
      if (lookahead == '1') ADVANCE(158);
      if (lookahead == '2') ADVANCE(155);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '}') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(25);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(166);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '0') ADVANCE(160);
      if (lookahead == '1') ADVANCE(158);
      if (lookahead == '2') ADVANCE(155);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '}') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(25);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(166);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '}') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14)
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(28);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(173);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(128);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '\'') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '') ADVANCE(139);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(142);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == ':') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == '0') ADVANCE(159);
      if (lookahead == '1') ADVANCE(156);
      if (lookahead == '2') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(36);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 23:
      if (lookahead == '0') ADVANCE(171);
      END_STATE();
    case 24:
      if (lookahead == '0') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(36);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 25:
      if (lookahead == '0') ADVANCE(146);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 26:
      if (lookahead == '0') ADVANCE(52);
      if (lookahead == '1') ADVANCE(47);
      END_STATE();
    case 27:
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == '3') ADVANCE(46);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(59);
      END_STATE();
    case 28:
      if (lookahead == '2') ADVANCE(48);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(54);
      END_STATE();
    case 29:
      if (lookahead == '6') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(56);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == 'U') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(66);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 34:
      if (lookahead == ']') ADVANCE(78);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(164);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 45:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(163);
      END_STATE();
    case 46:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(168);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(21);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(32);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(61);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(55);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(162);
      END_STATE();
    case 52:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 53:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
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
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\r') ADVANCE(10);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == '_') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == ':') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '_') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(81);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '_') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '_') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(113);
      if (lookahead == 'x') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0') ADVANCE(117);
      if (lookahead == '1') ADVANCE(98);
      if (lookahead == '2') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'n') ADVANCE(101);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0') ADVANCE(115);
      if (lookahead == '1') ADVANCE(112);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0') ADVANCE(114);
      if (lookahead == '3') ADVANCE(110);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(116);
      if (lookahead == '-' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '_') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(111);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(94);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(92);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'l') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'u') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(120);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(94);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(88);
      if (lookahead == '-' ||
          ('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__bare_key);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__bare_key);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(15);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__singleline_basic_string_token1);
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '') ADVANCE(125);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__singleline_basic_string_token1);
      if ((0 <= lookahead && lookahead <= '\t') ||
          ('' <= lookahead && lookahead <= '') ||
          lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == '') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__singleline_basic_string_token1);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      if (lookahead == '"') ADVANCE(15);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__multiline_basic_string_token1);
      if (lookahead == '"') ADVANCE(132);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__multiline_basic_string_token1);
      if (lookahead == '"') ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__multiline_basic_string_token2);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '\r') ADVANCE(6);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE2);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__escape_line_ending);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(18);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__singleline_literal_string_token1);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '') ADVANCE(139);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__singleline_literal_string_token1);
      if ((0 <= lookahead && lookahead <= '') ||
          ('' <= lookahead && lookahead <= '') ||
          lookahead == '\'' ||
          lookahead == '') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__singleline_literal_string_token1);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          (lookahead < '\n' || '' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      if (lookahead == '\'') ADVANCE(18);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__multiline_literal_string_token1);
      if (lookahead == '\'') ADVANCE(145);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__multiline_literal_string_token1);
      if (lookahead == '\'') ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE2);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__decimal_integer);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__decimal_integer);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == '_') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__decimal_integer);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '_') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(147);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__decimal_integer);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '_') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__decimal_integer);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '_') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__decimal_integer);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == 'b') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 'x') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__decimal_integer);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == '_') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__decimal_integer);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '_') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__decimal_integer);
      if (lookahead == '_') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(153);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__decimal_integer);
      if (lookahead == '_') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(152);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__decimal_integer);
      if (lookahead == '_') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__decimal_integer);
      if (lookahead == '_') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__decimal_integer);
      if (lookahead == '_') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__decimal_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__decimal_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__hexadecimal_integer);
      if (lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__octal_integer);
      if (lookahead == '_') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__binary_integer);
      if (lookahead == '_') ADVANCE(45);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_float_token1);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__float_fractional_part);
      if (lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__float_exponent_part_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__rfc3339_date);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__rfc3339_delimiter);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__rfc3339_delimiter);
      if (lookahead == ' ') ADVANCE(170);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(169);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__rfc3339_time);
      if (lookahead == '.') ADVANCE(57);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__rfc3339_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__rfc3339_offset);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 176:
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
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 2, .external_lex_state = 1},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2, .external_lex_state = 1},
  [11] = {.lex_state = 2},
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
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 2, .external_lex_state = 1},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
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
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 2, .external_lex_state = 1},
  [49] = {.lex_state = 5, .external_lex_state = 1},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 2, .external_lex_state = 1},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 12, .external_lex_state = 1},
  [55] = {.lex_state = 2, .external_lex_state = 1},
  [56] = {.lex_state = 2, .external_lex_state = 1},
  [57] = {.lex_state = 2, .external_lex_state = 1},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2, .external_lex_state = 1},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 12},
  [64] = {.lex_state = 12},
  [65] = {.lex_state = 2, .external_lex_state = 1},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 2, .external_lex_state = 1},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 2, .external_lex_state = 1},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 12, .external_lex_state = 1},
  [72] = {.lex_state = 12},
  [73] = {.lex_state = 2, .external_lex_state = 1},
  [74] = {.lex_state = 2, .external_lex_state = 1},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 11},
  [77] = {.lex_state = 12},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 14, .external_lex_state = 1},
  [80] = {.lex_state = 2, .external_lex_state = 1},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 2, .external_lex_state = 1},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2, .external_lex_state = 1},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 2, .external_lex_state = 1},
  [88] = {.lex_state = 2, .external_lex_state = 1},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 2, .external_lex_state = 1},
  [91] = {.lex_state = 12},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 11},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 2, .external_lex_state = 1},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 2, .external_lex_state = 1},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 2, .external_lex_state = 1},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 11},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 12},
  [105] = {.lex_state = 12},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 2, .external_lex_state = 1},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 11},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 11},
  [112] = {.lex_state = 2, .external_lex_state = 1},
  [113] = {.lex_state = 11},
  [114] = {.lex_state = 2, .external_lex_state = 1},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 2, .external_lex_state = 1},
  [117] = {.lex_state = 2, .external_lex_state = 1},
  [118] = {.lex_state = 11},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2, .external_lex_state = 1},
  [121] = {.lex_state = 2, .external_lex_state = 1},
  [122] = {.lex_state = 12},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 12},
  [126] = {.lex_state = 12},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 12},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 12},
  [137] = {.lex_state = 14},
  [138] = {.lex_state = 12},
  [139] = {.lex_state = 12},
  [140] = {.lex_state = 12},
  [141] = {.lex_state = 12},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 12},
  [144] = {.lex_state = 12},
  [145] = {.lex_state = 12},
  [146] = {.lex_state = 12},
  [147] = {.lex_state = 12},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 12},
  [150] = {.lex_state = 11},
  [151] = {.lex_state = 11},
  [152] = {.lex_state = 11},
  [153] = {.lex_state = 11},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 17},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 11},
  [159] = {.lex_state = 11},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 3},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 11},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 3},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 12},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 11},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 11},
  [176] = {.lex_state = 12},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 11},
  [179] = {.lex_state = 11},
  [180] = {.lex_state = 11},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 11},
  [183] = {.lex_state = 11},
  [184] = {.lex_state = 11},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 17},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 12},
  [189] = {.lex_state = 0},
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
    [sym__rfc3339_offset] = ACTIONS(1),
    [sym__rfc3339_date] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [sym__bare_key] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [sym__hexadecimal_integer] = ACTIONS(1),
    [aux_sym__float_exponent_part_token1] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__octal_integer] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [aux_sym_float_token1] = ACTIONS(1),
    [sym__escape_line_ending] = ACTIONS(1),
    [sym__rfc3339_time] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym__binary_integer] = ACTIONS(1),
    [sym__decimal_integer] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [aux_sym_root_repeat1] = STATE(8),
    [sym__table_header] = STATE(9),
    [sym__loose_table_header] = STATE(9),
    [sym__inline_pair] = STATE(10),
    [sym__loose_pair] = STATE(11),
    [sym_table] = STATE(12),
    [sym__loose_table_array_header] = STATE(13),
    [sym_pair] = STATE(11),
    [sym_dotted_key] = STATE(14),
    [sym__quoted_key] = STATE(5),
    [sym__singleline_literal_string] = STATE(5),
    [sym_root] = STATE(15),
    [sym_table_array] = STATE(12),
    [sym__table_array_header] = STATE(13),
    [sym__pairs] = STATE(16),
    [sym_key] = STATE(14),
    [sym__singleline_basic_string] = STATE(5),
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
    [sym__singleline_literal_string] = STATE(5),
    [sym_key] = STATE(17),
    [sym__singleline_basic_string] = STATE(5),
    [sym_dotted_key] = STATE(17),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym__bare_key] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [4] = {
    [aux_sym__singleline_basic_string_repeat1] = STATE(19),
    [anon_sym_DQUOTE2] = ACTIONS(21),
    [sym_escape_sequence] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
    [aux_sym__singleline_basic_string_token1] = ACTIONS(27),
  },
  [5] = {
    [anon_sym_EQ] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(29),
    [anon_sym_DOT] = ACTIONS(29),
  },
  [6] = {
    [sym__quoted_key] = STATE(115),
    [sym__singleline_literal_string] = STATE(115),
    [sym_key] = STATE(20),
    [sym__singleline_basic_string] = STATE(115),
    [sym_dotted_key] = STATE(20),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym__bare_key] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(35),
  },
  [7] = {
    [anon_sym_SQUOTE2] = ACTIONS(37),
    [aux_sym__singleline_literal_string_token1] = ACTIONS(39),
    [sym_comment] = ACTIONS(25),
  },
  [8] = {
    [aux_sym_root_repeat1] = STATE(24),
    [sym__table_header] = STATE(9),
    [sym__loose_table_header] = STATE(9),
    [sym__inline_pair] = STATE(10),
    [sym__loose_pair] = STATE(25),
    [sym_table] = STATE(26),
    [sym__loose_table_array_header] = STATE(13),
    [sym_pair] = STATE(25),
    [sym_dotted_key] = STATE(14),
    [sym__quoted_key] = STATE(5),
    [sym__singleline_literal_string] = STATE(5),
    [sym_table_array] = STATE(26),
    [sym__table_array_header] = STATE(13),
    [sym__pairs] = STATE(27),
    [sym_key] = STATE(14),
    [sym__singleline_basic_string] = STATE(5),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym__eof] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(43),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [9] = {
    [sym__quoted_key] = STATE(5),
    [sym__singleline_literal_string] = STATE(5),
    [sym__inline_pair] = STATE(10),
    [sym__loose_pair] = STATE(29),
    [sym__pairs] = STATE(30),
    [sym_key] = STATE(14),
    [sym__singleline_basic_string] = STATE(5),
    [sym_pair] = STATE(29),
    [sym_dotted_key] = STATE(14),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(47),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [10] = {
    [sym__newline_or_eof] = STATE(31),
    [sym__eof] = ACTIONS(51),
    [sym__newline] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__table_header] = STATE(9),
    [sym__loose_table_header] = STATE(9),
    [sym__inline_pair] = STATE(10),
    [sym__loose_pair] = STATE(33),
    [sym_table] = STATE(34),
    [sym__loose_table_array_header] = STATE(13),
    [sym_pair] = STATE(33),
    [sym_dotted_key] = STATE(14),
    [sym__quoted_key] = STATE(5),
    [sym__singleline_literal_string] = STATE(5),
    [aux_sym_root_repeat2] = STATE(34),
    [sym_table_array] = STATE(34),
    [sym__table_array_header] = STATE(13),
    [sym_key] = STATE(14),
    [sym__singleline_basic_string] = STATE(5),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(53),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [12] = {
    [sym__table_array_header] = STATE(13),
    [sym__table_header] = STATE(9),
    [sym__loose_table_header] = STATE(9),
    [sym_table] = STATE(34),
    [sym__loose_table_array_header] = STATE(13),
    [aux_sym_root_repeat2] = STATE(34),
    [sym_table_array] = STATE(34),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [13] = {
    [sym__quoted_key] = STATE(5),
    [sym__singleline_literal_string] = STATE(5),
    [sym__inline_pair] = STATE(10),
    [sym__loose_pair] = STATE(36),
    [sym__pairs] = STATE(37),
    [sym_key] = STATE(14),
    [sym__singleline_basic_string] = STATE(5),
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
    [sym__table_header] = STATE(9),
    [sym__loose_table_header] = STATE(9),
    [sym__inline_pair] = STATE(10),
    [sym__loose_pair] = STATE(33),
    [sym_table] = STATE(34),
    [sym__loose_table_array_header] = STATE(13),
    [sym_pair] = STATE(33),
    [sym_dotted_key] = STATE(14),
    [sym__quoted_key] = STATE(5),
    [sym__singleline_literal_string] = STATE(5),
    [aux_sym_root_repeat2] = STATE(34),
    [sym_table_array] = STATE(34),
    [sym__table_array_header] = STATE(13),
    [sym_key] = STATE(14),
    [sym__singleline_basic_string] = STATE(5),
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
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(69),
  },
  [19] = {
    [aux_sym__singleline_basic_string_repeat1] = STATE(42),
    [anon_sym_DQUOTE2] = ACTIONS(71),
    [sym_escape_sequence] = ACTIONS(73),
    [sym_comment] = ACTIONS(25),
    [aux_sym__singleline_basic_string_token1] = ACTIONS(75),
  },
  [20] = {
    [anon_sym_DOT] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(79),
  },
  [21] = {
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(81),
    [anon_sym_DOT] = ACTIONS(81),
  },
  [22] = {
    [anon_sym_SQUOTE2] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(85),
  },
  [24] = {
    [aux_sym_root_repeat1] = STATE(24),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [sym__eof] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(89),
    [sym__bare_key] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(92),
    [anon_sym_SQUOTE] = ACTIONS(87),
  },
  [25] = {
    [sym__table_header] = STATE(9),
    [sym__loose_table_header] = STATE(9),
    [sym__inline_pair] = STATE(10),
    [sym__loose_pair] = STATE(33),
    [sym_table] = STATE(45),
    [sym__loose_table_array_header] = STATE(13),
    [sym_pair] = STATE(33),
    [sym_dotted_key] = STATE(14),
    [sym__quoted_key] = STATE(5),
    [sym__singleline_literal_string] = STATE(5),
    [aux_sym_root_repeat2] = STATE(45),
    [sym_table_array] = STATE(45),
    [sym__table_array_header] = STATE(13),
    [sym_key] = STATE(14),
    [sym__singleline_basic_string] = STATE(5),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(85),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(53),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [26] = {
    [sym__table_array_header] = STATE(13),
    [sym__table_header] = STATE(9),
    [sym__loose_table_header] = STATE(9),
    [sym_table] = STATE(45),
    [sym__loose_table_array_header] = STATE(13),
    [aux_sym_root_repeat2] = STATE(45),
    [sym_table_array] = STATE(45),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(85),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [27] = {
    [sym__table_header] = STATE(9),
    [sym__loose_table_header] = STATE(9),
    [sym__inline_pair] = STATE(10),
    [sym__loose_pair] = STATE(33),
    [sym_table] = STATE(45),
    [sym__loose_table_array_header] = STATE(13),
    [sym_pair] = STATE(33),
    [sym_dotted_key] = STATE(14),
    [sym__quoted_key] = STATE(5),
    [sym__singleline_literal_string] = STATE(5),
    [aux_sym_root_repeat2] = STATE(45),
    [sym_table_array] = STATE(45),
    [sym__table_array_header] = STATE(13),
    [sym_key] = STATE(14),
    [sym__singleline_basic_string] = STATE(5),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(85),
    [sym__bare_key] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [28] = {
    [anon_sym_LBRACK_LBRACK] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [ts_builtin_sym_end] = ACTIONS(94),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(94),
    [sym__bare_key] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(96),
    [anon_sym_SQUOTE] = ACTIONS(94),
  },
  [29] = {
    [sym__quoted_key] = STATE(5),
    [sym__singleline_literal_string] = STATE(5),
    [sym__inline_pair] = STATE(10),
    [sym__loose_pair] = STATE(33),
    [sym_key] = STATE(14),
    [sym__singleline_basic_string] = STATE(5),
    [sym_pair] = STATE(33),
    [sym_dotted_key] = STATE(14),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(98),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(98),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(53),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [30] = {
    [sym__quoted_key] = STATE(5),
    [sym__singleline_literal_string] = STATE(5),
    [sym__inline_pair] = STATE(10),
    [sym__loose_pair] = STATE(33),
    [sym_key] = STATE(14),
    [sym__singleline_basic_string] = STATE(5),
    [sym_pair] = STATE(33),
    [sym_dotted_key] = STATE(14),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(98),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(98),
    [sym__bare_key] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [31] = {
    [anon_sym_LBRACK_LBRACK] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(102),
    [ts_builtin_sym_end] = ACTIONS(102),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(102),
    [sym__bare_key] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(104),
    [anon_sym_SQUOTE] = ACTIONS(102),
  },
  [32] = {
    [anon_sym_LBRACK_LBRACK] = ACTIONS(106),
    [anon_sym_DQUOTE] = ACTIONS(106),
    [ts_builtin_sym_end] = ACTIONS(106),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(106),
    [sym__bare_key] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_SQUOTE] = ACTIONS(106),
  },
  [33] = {
    [anon_sym_LBRACK_LBRACK] = ACTIONS(110),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [ts_builtin_sym_end] = ACTIONS(110),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(53),
    [sym__bare_key] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_SQUOTE] = ACTIONS(110),
  },
  [34] = {
    [sym__table_array_header] = STATE(13),
    [sym__table_header] = STATE(9),
    [sym__loose_table_header] = STATE(9),
    [sym_table] = STATE(46),
    [sym__loose_table_array_header] = STATE(13),
    [aux_sym_root_repeat2] = STATE(46),
    [sym_table_array] = STATE(46),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(85),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(15),
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
    [sym__singleline_literal_string] = STATE(5),
    [sym__inline_pair] = STATE(10),
    [sym__loose_pair] = STATE(33),
    [sym_key] = STATE(14),
    [sym__singleline_basic_string] = STATE(5),
    [sym_pair] = STATE(33),
    [sym_dotted_key] = STATE(14),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(118),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(118),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(53),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [37] = {
    [sym__quoted_key] = STATE(5),
    [sym__singleline_literal_string] = STATE(5),
    [sym__inline_pair] = STATE(10),
    [sym__loose_pair] = STATE(33),
    [sym_key] = STATE(14),
    [sym__singleline_basic_string] = STATE(5),
    [sym_pair] = STATE(33),
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
    [sym__singleline_literal_string] = STATE(56),
    [sym__multiline_literal_string] = STATE(56),
    [sym_local_date_time] = STATE(57),
    [sym_local_date] = STATE(57),
    [sym__inline_value] = STATE(57),
    [sym_string] = STATE(57),
    [sym_integer] = STATE(57),
    [sym_float] = STATE(57),
    [sym_local_time] = STATE(57),
    [sym_array] = STATE(57),
    [sym__singleline_basic_string] = STATE(56),
    [sym__multiline_basic_string] = STATE(56),
    [sym_offset_date_time] = STATE(57),
    [sym_inline_table] = STATE(57),
    [anon_sym_DQUOTE] = ACTIONS(122),
    [sym__rfc3339_date] = ACTIONS(124),
    [anon_sym_LBRACE] = ACTIONS(126),
    [sym__octal_integer] = ACTIONS(128),
    [sym_boolean] = ACTIONS(130),
    [aux_sym_float_token1] = ACTIONS(132),
    [sym_comment] = ACTIONS(3),
    [sym__rfc3339_time] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(136),
    [sym__hexadecimal_integer] = ACTIONS(128),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(138),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(140),
    [sym__binary_integer] = ACTIONS(128),
    [sym__decimal_integer] = ACTIONS(142),
    [anon_sym_SQUOTE] = ACTIONS(144),
  },
  [39] = {
    [sym__quoted_key] = STATE(5),
    [sym__singleline_literal_string] = STATE(5),
    [sym_key] = STATE(58),
    [sym__singleline_basic_string] = STATE(5),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym__bare_key] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [40] = {
    [sym__newline_or_eof] = STATE(59),
    [sym__eof] = ACTIONS(146),
    [sym__newline] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_EQ] = ACTIONS(148),
    [anon_sym_RBRACE] = ACTIONS(148),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(148),
    [anon_sym_DOT] = ACTIONS(148),
  },
  [42] = {
    [aux_sym__singleline_basic_string_repeat1] = STATE(42),
    [anon_sym_DQUOTE2] = ACTIONS(150),
    [sym_escape_sequence] = ACTIONS(152),
    [sym_comment] = ACTIONS(25),
    [aux_sym__singleline_basic_string_token1] = ACTIONS(155),
  },
  [43] = {
    [sym__newline_or_eof] = STATE(60),
    [sym__eof] = ACTIONS(158),
    [sym__newline] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [anon_sym_COMMA] = ACTIONS(160),
    [anon_sym_EQ] = ACTIONS(160),
    [anon_sym_RBRACE] = ACTIONS(160),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(160),
    [anon_sym_DOT] = ACTIONS(160),
  },
  [45] = {
    [sym__table_array_header] = STATE(13),
    [sym__table_header] = STATE(9),
    [sym__loose_table_header] = STATE(9),
    [sym_table] = STATE(46),
    [sym__loose_table_array_header] = STATE(13),
    [aux_sym_root_repeat2] = STATE(46),
    [sym_table_array] = STATE(46),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(162),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [46] = {
    [sym__table_array_header] = STATE(13),
    [sym__table_header] = STATE(9),
    [sym__loose_table_header] = STATE(9),
    [sym_table] = STATE(46),
    [sym__loose_table_array_header] = STATE(13),
    [aux_sym_root_repeat2] = STATE(46),
    [sym_table_array] = STATE(46),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(164),
    [ts_builtin_sym_end] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(169),
  },
  [47] = {
    [aux_sym_root_repeat1] = STATE(62),
    [sym__inline_value] = STATE(63),
    [sym_string] = STATE(63),
    [sym_integer] = STATE(63),
    [sym_float] = STATE(63),
    [sym_local_time] = STATE(63),
    [sym_array] = STATE(63),
    [sym__singleline_literal_string] = STATE(127),
    [sym__multiline_literal_string] = STATE(127),
    [sym_local_date_time] = STATE(63),
    [sym_local_date] = STATE(63),
    [sym__singleline_basic_string] = STATE(127),
    [sym__multiline_basic_string] = STATE(127),
    [sym_offset_date_time] = STATE(63),
    [sym_inline_table] = STATE(63),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [anon_sym_RBRACK] = ACTIONS(174),
    [sym__rfc3339_date] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(178),
    [sym__octal_integer] = ACTIONS(180),
    [sym_boolean] = ACTIONS(182),
    [aux_sym_float_token1] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(186),
    [sym__rfc3339_time] = ACTIONS(188),
    [sym__hexadecimal_integer] = ACTIONS(180),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(192),
    [sym__newline] = ACTIONS(194),
    [sym__binary_integer] = ACTIONS(180),
    [sym__decimal_integer] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
  },
  [48] = {
    [sym__eof] = ACTIONS(200),
    [sym__newline] = ACTIONS(200),
    [sym_comment] = ACTIONS(3),
  },
  [49] = {
    [sym__eof] = ACTIONS(202),
    [sym__newline] = ACTIONS(204),
    [sym__rfc3339_delimiter] = ACTIONS(206),
    [sym_comment] = ACTIONS(25),
  },
  [50] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(66),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(208),
    [aux_sym__singleline_literal_string_token1] = ACTIONS(208),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(210),
    [sym_comment] = ACTIONS(25),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(212),
  },
  [51] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(68),
    [sym_comment] = ACTIONS(25),
    [sym__escape_line_ending] = ACTIONS(214),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(214),
    [sym_escape_sequence] = ACTIONS(214),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(216),
    [aux_sym__singleline_basic_string_token1] = ACTIONS(216),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(218),
  },
  [52] = {
    [sym__eof] = ACTIONS(220),
    [sym__newline] = ACTIONS(220),
    [sym_comment] = ACTIONS(3),
  },
  [53] = {
    [sym__quoted_key] = STATE(5),
    [sym__singleline_literal_string] = STATE(5),
    [sym_key] = STATE(189),
    [sym__singleline_basic_string] = STATE(5),
    [sym__inline_pair] = STATE(70),
    [sym_dotted_key] = STATE(189),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(222),
    [sym__bare_key] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [54] = {
    [sym__float_exponent_part] = STATE(73),
    [sym__eof] = ACTIONS(200),
    [sym__newline] = ACTIONS(200),
    [aux_sym__float_exponent_part_token1] = ACTIONS(224),
    [sym_comment] = ACTIONS(3),
    [sym__float_fractional_part] = ACTIONS(226),
  },
  [55] = {
    [sym__eof] = ACTIONS(228),
    [sym__newline] = ACTIONS(228),
    [sym_comment] = ACTIONS(3),
  },
  [56] = {
    [sym__eof] = ACTIONS(230),
    [sym__newline] = ACTIONS(230),
    [sym_comment] = ACTIONS(3),
  },
  [57] = {
    [sym__eof] = ACTIONS(232),
    [sym__newline] = ACTIONS(232),
    [sym_comment] = ACTIONS(3),
  },
  [58] = {
    [anon_sym_EQ] = ACTIONS(234),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(234),
    [anon_sym_DOT] = ACTIONS(234),
  },
  [59] = {
    [anon_sym_LBRACK_LBRACK] = ACTIONS(236),
    [anon_sym_DQUOTE] = ACTIONS(236),
    [ts_builtin_sym_end] = ACTIONS(236),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(236),
    [sym__bare_key] = ACTIONS(236),
    [anon_sym_LBRACK] = ACTIONS(238),
    [anon_sym_SQUOTE] = ACTIONS(236),
  },
  [60] = {
    [anon_sym_LBRACK_LBRACK] = ACTIONS(240),
    [anon_sym_DQUOTE] = ACTIONS(240),
    [ts_builtin_sym_end] = ACTIONS(240),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(240),
    [sym__bare_key] = ACTIONS(240),
    [anon_sym_LBRACK] = ACTIONS(242),
    [anon_sym_SQUOTE] = ACTIONS(240),
  },
  [61] = {
    [sym__eof] = ACTIONS(244),
    [sym__newline] = ACTIONS(244),
    [sym_comment] = ACTIONS(3),
  },
  [62] = {
    [aux_sym_root_repeat1] = STATE(118),
    [sym__inline_value] = STATE(75),
    [sym_string] = STATE(75),
    [sym_integer] = STATE(75),
    [sym_float] = STATE(75),
    [sym_local_time] = STATE(75),
    [sym_array] = STATE(75),
    [sym__singleline_literal_string] = STATE(127),
    [sym__multiline_literal_string] = STATE(127),
    [sym_local_date_time] = STATE(75),
    [sym_local_date] = STATE(75),
    [sym__singleline_basic_string] = STATE(127),
    [sym__multiline_basic_string] = STATE(127),
    [sym_offset_date_time] = STATE(75),
    [sym_inline_table] = STATE(75),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [anon_sym_RBRACK] = ACTIONS(246),
    [sym__rfc3339_date] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(178),
    [sym__octal_integer] = ACTIONS(180),
    [sym_boolean] = ACTIONS(248),
    [aux_sym_float_token1] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(186),
    [sym__rfc3339_time] = ACTIONS(188),
    [sym__hexadecimal_integer] = ACTIONS(180),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(192),
    [sym__newline] = ACTIONS(250),
    [sym__binary_integer] = ACTIONS(180),
    [sym__decimal_integer] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
  },
  [63] = {
    [aux_sym_root_repeat1] = STATE(77),
    [aux_sym_array_repeat1] = STATE(78),
    [anon_sym_COMMA] = ACTIONS(252),
    [sym__newline] = ACTIONS(254),
    [anon_sym_RBRACK] = ACTIONS(246),
    [sym_comment] = ACTIONS(3),
  },
  [64] = {
    [sym_comment] = ACTIONS(3),
    [sym__rfc3339_time] = ACTIONS(256),
  },
  [65] = {
    [sym__eof] = ACTIONS(258),
    [sym__newline] = ACTIONS(258),
    [sym_comment] = ACTIONS(3),
  },
  [66] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(81),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(260),
    [aux_sym__singleline_literal_string_token1] = ACTIONS(260),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(262),
    [sym_comment] = ACTIONS(25),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(264),
  },
  [67] = {
    [sym__eof] = ACTIONS(266),
    [sym__newline] = ACTIONS(266),
    [sym_comment] = ACTIONS(3),
  },
  [68] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(83),
    [sym_comment] = ACTIONS(25),
    [sym__escape_line_ending] = ACTIONS(268),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(268),
    [sym_escape_sequence] = ACTIONS(268),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(270),
    [aux_sym__singleline_basic_string_token1] = ACTIONS(270),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(272),
  },
  [69] = {
    [sym__eof] = ACTIONS(274),
    [sym__newline] = ACTIONS(274),
    [sym_comment] = ACTIONS(3),
  },
  [70] = {
    [aux_sym_inline_table_repeat1] = STATE(86),
    [anon_sym_COMMA] = ACTIONS(276),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(278),
  },
  [71] = {
    [sym__float_exponent_part] = STATE(87),
    [sym__eof] = ACTIONS(280),
    [sym__newline] = ACTIONS(280),
    [aux_sym__float_exponent_part_token1] = ACTIONS(224),
    [sym_comment] = ACTIONS(3),
  },
  [72] = {
    [sym__decimal_integer] = ACTIONS(282),
    [sym_comment] = ACTIONS(3),
  },
  [73] = {
    [sym__eof] = ACTIONS(280),
    [sym__newline] = ACTIONS(280),
    [sym_comment] = ACTIONS(3),
  },
  [74] = {
    [sym__eof] = ACTIONS(284),
    [sym__newline] = ACTIONS(284),
    [sym_comment] = ACTIONS(3),
  },
  [75] = {
    [aux_sym_root_repeat1] = STATE(91),
    [aux_sym_array_repeat1] = STATE(92),
    [anon_sym_COMMA] = ACTIONS(286),
    [sym__newline] = ACTIONS(288),
    [anon_sym_RBRACK] = ACTIONS(290),
    [sym_comment] = ACTIONS(3),
  },
  [76] = {
    [aux_sym_root_repeat1] = STATE(93),
    [sym__inline_value] = STATE(94),
    [sym_string] = STATE(94),
    [sym_integer] = STATE(94),
    [sym_float] = STATE(94),
    [sym_local_time] = STATE(94),
    [sym_array] = STATE(94),
    [sym__singleline_literal_string] = STATE(127),
    [sym__multiline_literal_string] = STATE(127),
    [sym_local_date_time] = STATE(94),
    [sym_local_date] = STATE(94),
    [sym__singleline_basic_string] = STATE(127),
    [sym__multiline_basic_string] = STATE(127),
    [sym_offset_date_time] = STATE(94),
    [sym_inline_table] = STATE(94),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [anon_sym_RBRACK] = ACTIONS(290),
    [sym__rfc3339_date] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(178),
    [sym__octal_integer] = ACTIONS(180),
    [sym_boolean] = ACTIONS(292),
    [aux_sym_float_token1] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(186),
    [sym__rfc3339_time] = ACTIONS(188),
    [sym__hexadecimal_integer] = ACTIONS(180),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(192),
    [sym__newline] = ACTIONS(294),
    [sym__binary_integer] = ACTIONS(180),
    [sym__decimal_integer] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
  },
  [77] = {
    [aux_sym_root_repeat1] = STATE(118),
    [aux_sym_array_repeat1] = STATE(92),
    [anon_sym_COMMA] = ACTIONS(286),
    [sym__newline] = ACTIONS(250),
    [anon_sym_RBRACK] = ACTIONS(290),
    [sym_comment] = ACTIONS(3),
  },
  [78] = {
    [aux_sym_array_repeat1] = STATE(95),
    [anon_sym_COMMA] = ACTIONS(286),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(290),
  },
  [79] = {
    [sym__eof] = ACTIONS(296),
    [sym__newline] = ACTIONS(296),
    [sym__rfc3339_offset] = ACTIONS(298),
    [sym_comment] = ACTIONS(3),
  },
  [80] = {
    [sym__eof] = ACTIONS(300),
    [sym__newline] = ACTIONS(300),
    [sym_comment] = ACTIONS(3),
  },
  [81] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(81),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(302),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(305),
    [aux_sym__singleline_literal_string_token1] = ACTIONS(302),
    [sym_comment] = ACTIONS(25),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(308),
  },
  [82] = {
    [sym__eof] = ACTIONS(310),
    [sym__newline] = ACTIONS(310),
    [sym_comment] = ACTIONS(3),
  },
  [83] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(83),
    [sym_comment] = ACTIONS(25),
    [sym__escape_line_ending] = ACTIONS(312),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(312),
    [sym_escape_sequence] = ACTIONS(312),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(315),
    [aux_sym__singleline_basic_string_token1] = ACTIONS(315),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(318),
  },
  [84] = {
    [sym__quoted_key] = STATE(5),
    [sym__singleline_literal_string] = STATE(5),
    [sym_key] = STATE(189),
    [sym__singleline_basic_string] = STATE(5),
    [sym__inline_pair] = STATE(97),
    [sym_dotted_key] = STATE(189),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym__bare_key] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [85] = {
    [sym__eof] = ACTIONS(320),
    [sym__newline] = ACTIONS(320),
    [sym_comment] = ACTIONS(3),
  },
  [86] = {
    [aux_sym_inline_table_repeat1] = STATE(99),
    [anon_sym_COMMA] = ACTIONS(276),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(322),
  },
  [87] = {
    [sym__eof] = ACTIONS(324),
    [sym__newline] = ACTIONS(324),
    [sym_comment] = ACTIONS(3),
  },
  [88] = {
    [sym__eof] = ACTIONS(326),
    [sym__newline] = ACTIONS(326),
    [sym_comment] = ACTIONS(3),
  },
  [89] = {
    [aux_sym_root_repeat1] = STATE(101),
    [sym__inline_value] = STATE(94),
    [sym_string] = STATE(94),
    [sym_integer] = STATE(94),
    [sym_float] = STATE(94),
    [sym_local_time] = STATE(94),
    [sym_array] = STATE(94),
    [sym__singleline_literal_string] = STATE(127),
    [sym__multiline_literal_string] = STATE(127),
    [sym_local_date_time] = STATE(94),
    [sym_local_date] = STATE(94),
    [sym__singleline_basic_string] = STATE(127),
    [sym__multiline_basic_string] = STATE(127),
    [sym_offset_date_time] = STATE(94),
    [sym_inline_table] = STATE(94),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [anon_sym_RBRACK] = ACTIONS(328),
    [sym__rfc3339_date] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(178),
    [sym__octal_integer] = ACTIONS(180),
    [sym_boolean] = ACTIONS(292),
    [aux_sym_float_token1] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(186),
    [sym__rfc3339_time] = ACTIONS(188),
    [sym__hexadecimal_integer] = ACTIONS(180),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(192),
    [sym__newline] = ACTIONS(330),
    [sym__binary_integer] = ACTIONS(180),
    [sym__decimal_integer] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
  },
  [90] = {
    [sym__eof] = ACTIONS(332),
    [sym__newline] = ACTIONS(332),
    [sym_comment] = ACTIONS(3),
  },
  [91] = {
    [aux_sym_root_repeat1] = STATE(118),
    [aux_sym_array_repeat1] = STATE(103),
    [anon_sym_COMMA] = ACTIONS(334),
    [sym__newline] = ACTIONS(250),
    [anon_sym_RBRACK] = ACTIONS(328),
    [sym_comment] = ACTIONS(3),
  },
  [92] = {
    [aux_sym_array_repeat1] = STATE(95),
    [anon_sym_COMMA] = ACTIONS(334),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(328),
  },
  [93] = {
    [aux_sym_root_repeat1] = STATE(118),
    [sym__inline_value] = STATE(104),
    [sym_string] = STATE(104),
    [sym_integer] = STATE(104),
    [sym_float] = STATE(104),
    [sym_local_time] = STATE(104),
    [sym_array] = STATE(104),
    [sym__singleline_literal_string] = STATE(127),
    [sym__multiline_literal_string] = STATE(127),
    [sym_local_date_time] = STATE(104),
    [sym_local_date] = STATE(104),
    [sym__singleline_basic_string] = STATE(127),
    [sym__multiline_basic_string] = STATE(127),
    [sym_offset_date_time] = STATE(104),
    [sym_inline_table] = STATE(104),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [anon_sym_RBRACK] = ACTIONS(328),
    [sym__rfc3339_date] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(178),
    [sym__octal_integer] = ACTIONS(180),
    [sym_boolean] = ACTIONS(336),
    [aux_sym_float_token1] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(186),
    [sym__rfc3339_time] = ACTIONS(188),
    [sym__hexadecimal_integer] = ACTIONS(180),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(192),
    [sym__newline] = ACTIONS(250),
    [sym__binary_integer] = ACTIONS(180),
    [sym__decimal_integer] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
  },
  [94] = {
    [aux_sym_root_repeat1] = STATE(105),
    [anon_sym_COMMA] = ACTIONS(338),
    [sym__newline] = ACTIONS(340),
    [anon_sym_RBRACK] = ACTIONS(338),
    [sym_comment] = ACTIONS(3),
  },
  [95] = {
    [aux_sym_array_repeat1] = STATE(95),
    [anon_sym_COMMA] = ACTIONS(342),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(338),
  },
  [96] = {
    [sym__eof] = ACTIONS(345),
    [sym__newline] = ACTIONS(345),
    [sym_comment] = ACTIONS(3),
  },
  [97] = {
    [anon_sym_COMMA] = ACTIONS(347),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(347),
  },
  [98] = {
    [sym__eof] = ACTIONS(349),
    [sym__newline] = ACTIONS(349),
    [sym_comment] = ACTIONS(3),
  },
  [99] = {
    [aux_sym_inline_table_repeat1] = STATE(99),
    [anon_sym_COMMA] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(354),
  },
  [100] = {
    [sym__eof] = ACTIONS(356),
    [sym__newline] = ACTIONS(356),
    [sym_comment] = ACTIONS(3),
  },
  [101] = {
    [aux_sym_root_repeat1] = STATE(118),
    [sym__inline_value] = STATE(104),
    [sym_string] = STATE(104),
    [sym_integer] = STATE(104),
    [sym_float] = STATE(104),
    [sym_local_time] = STATE(104),
    [sym_array] = STATE(104),
    [sym__singleline_literal_string] = STATE(127),
    [sym__multiline_literal_string] = STATE(127),
    [sym_local_date_time] = STATE(104),
    [sym_local_date] = STATE(104),
    [sym__singleline_basic_string] = STATE(127),
    [sym__multiline_basic_string] = STATE(127),
    [sym_offset_date_time] = STATE(104),
    [sym_inline_table] = STATE(104),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [anon_sym_RBRACK] = ACTIONS(358),
    [sym__rfc3339_date] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(178),
    [sym__octal_integer] = ACTIONS(180),
    [sym_boolean] = ACTIONS(336),
    [aux_sym_float_token1] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(186),
    [sym__rfc3339_time] = ACTIONS(188),
    [sym__hexadecimal_integer] = ACTIONS(180),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(192),
    [sym__newline] = ACTIONS(250),
    [sym__binary_integer] = ACTIONS(180),
    [sym__decimal_integer] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
  },
  [102] = {
    [aux_sym_root_repeat1] = STATE(108),
    [sym__inline_value] = STATE(94),
    [sym_string] = STATE(94),
    [sym_integer] = STATE(94),
    [sym_float] = STATE(94),
    [sym_local_time] = STATE(94),
    [sym_array] = STATE(94),
    [sym__singleline_literal_string] = STATE(127),
    [sym__multiline_literal_string] = STATE(127),
    [sym_local_date_time] = STATE(94),
    [sym_local_date] = STATE(94),
    [sym__singleline_basic_string] = STATE(127),
    [sym__multiline_basic_string] = STATE(127),
    [sym_offset_date_time] = STATE(94),
    [sym_inline_table] = STATE(94),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [anon_sym_RBRACK] = ACTIONS(358),
    [sym__rfc3339_date] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(178),
    [sym__octal_integer] = ACTIONS(180),
    [sym_boolean] = ACTIONS(292),
    [aux_sym_float_token1] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(186),
    [sym__rfc3339_time] = ACTIONS(188),
    [sym__hexadecimal_integer] = ACTIONS(180),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(192),
    [sym__newline] = ACTIONS(360),
    [sym__binary_integer] = ACTIONS(180),
    [sym__decimal_integer] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
  },
  [103] = {
    [aux_sym_array_repeat1] = STATE(95),
    [anon_sym_COMMA] = ACTIONS(362),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(358),
  },
  [104] = {
    [aux_sym_root_repeat1] = STATE(110),
    [anon_sym_COMMA] = ACTIONS(364),
    [sym__newline] = ACTIONS(366),
    [anon_sym_RBRACK] = ACTIONS(364),
    [sym_comment] = ACTIONS(3),
  },
  [105] = {
    [aux_sym_root_repeat1] = STATE(118),
    [anon_sym_COMMA] = ACTIONS(364),
    [sym__newline] = ACTIONS(250),
    [anon_sym_RBRACK] = ACTIONS(364),
    [sym_comment] = ACTIONS(3),
  },
  [106] = {
    [aux_sym_root_repeat1] = STATE(111),
    [sym__inline_value] = STATE(94),
    [sym_string] = STATE(94),
    [sym_integer] = STATE(94),
    [sym_float] = STATE(94),
    [sym_local_time] = STATE(94),
    [sym_array] = STATE(94),
    [sym__singleline_literal_string] = STATE(127),
    [sym__multiline_literal_string] = STATE(127),
    [sym_local_date_time] = STATE(94),
    [sym_local_date] = STATE(94),
    [sym__singleline_basic_string] = STATE(127),
    [sym__multiline_basic_string] = STATE(127),
    [sym_offset_date_time] = STATE(94),
    [sym_inline_table] = STATE(94),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [sym__rfc3339_date] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(178),
    [sym__octal_integer] = ACTIONS(180),
    [sym_boolean] = ACTIONS(292),
    [aux_sym_float_token1] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(186),
    [sym__rfc3339_time] = ACTIONS(188),
    [sym__hexadecimal_integer] = ACTIONS(180),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(192),
    [sym__newline] = ACTIONS(368),
    [sym__binary_integer] = ACTIONS(180),
    [sym__decimal_integer] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
  },
  [107] = {
    [sym__eof] = ACTIONS(370),
    [sym__newline] = ACTIONS(370),
    [sym_comment] = ACTIONS(3),
  },
  [108] = {
    [aux_sym_root_repeat1] = STATE(118),
    [sym__inline_value] = STATE(104),
    [sym_string] = STATE(104),
    [sym_integer] = STATE(104),
    [sym_float] = STATE(104),
    [sym_local_time] = STATE(104),
    [sym_array] = STATE(104),
    [sym__singleline_literal_string] = STATE(127),
    [sym__multiline_literal_string] = STATE(127),
    [sym_local_date_time] = STATE(104),
    [sym_local_date] = STATE(104),
    [sym__singleline_basic_string] = STATE(127),
    [sym__multiline_basic_string] = STATE(127),
    [sym_offset_date_time] = STATE(104),
    [sym_inline_table] = STATE(104),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [anon_sym_RBRACK] = ACTIONS(372),
    [sym__rfc3339_date] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(178),
    [sym__octal_integer] = ACTIONS(180),
    [sym_boolean] = ACTIONS(336),
    [aux_sym_float_token1] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(186),
    [sym__rfc3339_time] = ACTIONS(188),
    [sym__hexadecimal_integer] = ACTIONS(180),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(192),
    [sym__newline] = ACTIONS(250),
    [sym__binary_integer] = ACTIONS(180),
    [sym__decimal_integer] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
  },
  [109] = {
    [aux_sym_root_repeat1] = STATE(113),
    [sym__inline_value] = STATE(94),
    [sym_string] = STATE(94),
    [sym_integer] = STATE(94),
    [sym_float] = STATE(94),
    [sym_local_time] = STATE(94),
    [sym_array] = STATE(94),
    [sym__singleline_literal_string] = STATE(127),
    [sym__multiline_literal_string] = STATE(127),
    [sym_local_date_time] = STATE(94),
    [sym_local_date] = STATE(94),
    [sym__singleline_basic_string] = STATE(127),
    [sym__multiline_basic_string] = STATE(127),
    [sym_offset_date_time] = STATE(94),
    [sym_inline_table] = STATE(94),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [anon_sym_RBRACK] = ACTIONS(372),
    [sym__rfc3339_date] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(178),
    [sym__octal_integer] = ACTIONS(180),
    [sym_boolean] = ACTIONS(292),
    [aux_sym_float_token1] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(186),
    [sym__rfc3339_time] = ACTIONS(188),
    [sym__hexadecimal_integer] = ACTIONS(180),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(192),
    [sym__newline] = ACTIONS(374),
    [sym__binary_integer] = ACTIONS(180),
    [sym__decimal_integer] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
  },
  [110] = {
    [aux_sym_root_repeat1] = STATE(118),
    [anon_sym_COMMA] = ACTIONS(376),
    [sym__newline] = ACTIONS(250),
    [anon_sym_RBRACK] = ACTIONS(376),
    [sym_comment] = ACTIONS(3),
  },
  [111] = {
    [aux_sym_root_repeat1] = STATE(118),
    [sym__inline_value] = STATE(104),
    [sym_string] = STATE(104),
    [sym_integer] = STATE(104),
    [sym_float] = STATE(104),
    [sym_local_time] = STATE(104),
    [sym_array] = STATE(104),
    [sym__singleline_literal_string] = STATE(127),
    [sym__multiline_literal_string] = STATE(127),
    [sym_local_date_time] = STATE(104),
    [sym_local_date] = STATE(104),
    [sym__singleline_basic_string] = STATE(127),
    [sym__multiline_basic_string] = STATE(127),
    [sym_offset_date_time] = STATE(104),
    [sym_inline_table] = STATE(104),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [sym__rfc3339_date] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(178),
    [sym__octal_integer] = ACTIONS(180),
    [sym_boolean] = ACTIONS(336),
    [aux_sym_float_token1] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(186),
    [sym__rfc3339_time] = ACTIONS(188),
    [sym__hexadecimal_integer] = ACTIONS(180),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(192),
    [sym__newline] = ACTIONS(250),
    [sym__binary_integer] = ACTIONS(180),
    [sym__decimal_integer] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
  },
  [112] = {
    [sym__eof] = ACTIONS(378),
    [sym__newline] = ACTIONS(378),
    [sym_comment] = ACTIONS(3),
  },
  [113] = {
    [aux_sym_root_repeat1] = STATE(118),
    [sym__inline_value] = STATE(104),
    [sym_string] = STATE(104),
    [sym_integer] = STATE(104),
    [sym_float] = STATE(104),
    [sym_local_time] = STATE(104),
    [sym_array] = STATE(104),
    [sym__singleline_literal_string] = STATE(127),
    [sym__multiline_literal_string] = STATE(127),
    [sym_local_date_time] = STATE(104),
    [sym_local_date] = STATE(104),
    [sym__singleline_basic_string] = STATE(127),
    [sym__multiline_basic_string] = STATE(127),
    [sym_offset_date_time] = STATE(104),
    [sym_inline_table] = STATE(104),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [anon_sym_RBRACK] = ACTIONS(380),
    [sym__rfc3339_date] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(178),
    [sym__octal_integer] = ACTIONS(180),
    [sym_boolean] = ACTIONS(336),
    [aux_sym_float_token1] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(186),
    [sym__rfc3339_time] = ACTIONS(188),
    [sym__hexadecimal_integer] = ACTIONS(180),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(192),
    [sym__newline] = ACTIONS(250),
    [sym__binary_integer] = ACTIONS(180),
    [sym__decimal_integer] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
  },
  [114] = {
    [sym__eof] = ACTIONS(382),
    [sym__newline] = ACTIONS(382),
    [sym_comment] = ACTIONS(3),
  },
  [115] = {
    [anon_sym_DOT] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(29),
  },
  [116] = {
    [sym__eof] = ACTIONS(69),
    [sym__newline] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
  },
  [117] = {
    [sym__eof] = ACTIONS(81),
    [sym__newline] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
  },
  [118] = {
    [aux_sym_root_repeat1] = STATE(118),
    [anon_sym_DQUOTE] = ACTIONS(92),
    [anon_sym_RBRACK] = ACTIONS(87),
    [sym__rfc3339_date] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(87),
    [sym__octal_integer] = ACTIONS(87),
    [sym_boolean] = ACTIONS(87),
    [aux_sym_float_token1] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(87),
    [sym__rfc3339_time] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [sym__hexadecimal_integer] = ACTIONS(87),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(87),
    [sym__newline] = ACTIONS(384),
    [sym__binary_integer] = ACTIONS(87),
    [sym__decimal_integer] = ACTIONS(92),
    [anon_sym_SQUOTE] = ACTIONS(92),
  },
  [119] = {
    [sym__quoted_key] = STATE(115),
    [sym__singleline_literal_string] = STATE(115),
    [sym_key] = STATE(129),
    [sym__singleline_basic_string] = STATE(115),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym__bare_key] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(35),
  },
  [120] = {
    [sym__eof] = ACTIONS(148),
    [sym__newline] = ACTIONS(148),
    [sym_comment] = ACTIONS(3),
  },
  [121] = {
    [sym__eof] = ACTIONS(160),
    [sym__newline] = ACTIONS(160),
    [sym_comment] = ACTIONS(3),
  },
  [122] = {
    [anon_sym_COMMA] = ACTIONS(200),
    [sym__newline] = ACTIONS(200),
    [anon_sym_RBRACE] = ACTIONS(200),
    [anon_sym_RBRACK] = ACTIONS(200),
    [sym_comment] = ACTIONS(3),
  },
  [123] = {
    [anon_sym_COMMA] = ACTIONS(204),
    [sym__newline] = ACTIONS(204),
    [sym__rfc3339_delimiter] = ACTIONS(387),
    [anon_sym_RBRACK] = ACTIONS(204),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(204),
  },
  [124] = {
    [anon_sym_COMMA] = ACTIONS(220),
    [sym__newline] = ACTIONS(220),
    [anon_sym_RBRACE] = ACTIONS(220),
    [anon_sym_RBRACK] = ACTIONS(220),
    [sym_comment] = ACTIONS(3),
  },
  [125] = {
    [sym__float_exponent_part] = STATE(135),
    [anon_sym_COMMA] = ACTIONS(200),
    [aux_sym__float_exponent_part_token1] = ACTIONS(389),
    [anon_sym_RBRACK] = ACTIONS(200),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(200),
    [anon_sym_RBRACE] = ACTIONS(200),
    [sym__float_fractional_part] = ACTIONS(391),
  },
  [126] = {
    [anon_sym_COMMA] = ACTIONS(228),
    [sym__newline] = ACTIONS(228),
    [anon_sym_RBRACE] = ACTIONS(228),
    [anon_sym_RBRACK] = ACTIONS(228),
    [sym_comment] = ACTIONS(3),
  },
  [127] = {
    [anon_sym_COMMA] = ACTIONS(230),
    [sym__newline] = ACTIONS(230),
    [anon_sym_RBRACE] = ACTIONS(230),
    [anon_sym_RBRACK] = ACTIONS(230),
    [sym_comment] = ACTIONS(3),
  },
  [128] = {
    [anon_sym_COMMA] = ACTIONS(232),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(232),
  },
  [129] = {
    [anon_sym_DOT] = ACTIONS(234),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(234),
  },
  [130] = {
    [anon_sym_COMMA] = ACTIONS(244),
    [sym__newline] = ACTIONS(244),
    [anon_sym_RBRACE] = ACTIONS(244),
    [anon_sym_RBRACK] = ACTIONS(244),
    [sym_comment] = ACTIONS(3),
  },
  [131] = {
    [anon_sym_COMMA] = ACTIONS(258),
    [sym__newline] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(258),
    [anon_sym_RBRACK] = ACTIONS(258),
    [sym_comment] = ACTIONS(3),
  },
  [132] = {
    [anon_sym_COMMA] = ACTIONS(266),
    [sym__newline] = ACTIONS(266),
    [anon_sym_RBRACE] = ACTIONS(266),
    [anon_sym_RBRACK] = ACTIONS(266),
    [sym_comment] = ACTIONS(3),
  },
  [133] = {
    [anon_sym_COMMA] = ACTIONS(274),
    [sym__newline] = ACTIONS(274),
    [anon_sym_RBRACE] = ACTIONS(274),
    [anon_sym_RBRACK] = ACTIONS(274),
    [sym_comment] = ACTIONS(3),
  },
  [134] = {
    [sym__float_exponent_part] = STATE(141),
    [anon_sym_COMMA] = ACTIONS(280),
    [sym__newline] = ACTIONS(280),
    [aux_sym__float_exponent_part_token1] = ACTIONS(389),
    [anon_sym_RBRACK] = ACTIONS(280),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(280),
  },
  [135] = {
    [anon_sym_COMMA] = ACTIONS(280),
    [sym__newline] = ACTIONS(280),
    [anon_sym_RBRACE] = ACTIONS(280),
    [anon_sym_RBRACK] = ACTIONS(280),
    [sym_comment] = ACTIONS(3),
  },
  [136] = {
    [anon_sym_COMMA] = ACTIONS(284),
    [sym__newline] = ACTIONS(284),
    [anon_sym_RBRACE] = ACTIONS(284),
    [anon_sym_RBRACK] = ACTIONS(284),
    [sym_comment] = ACTIONS(3),
  },
  [137] = {
    [anon_sym_COMMA] = ACTIONS(296),
    [sym__newline] = ACTIONS(296),
    [anon_sym_RBRACE] = ACTIONS(296),
    [anon_sym_RBRACK] = ACTIONS(296),
    [sym__rfc3339_offset] = ACTIONS(393),
    [sym_comment] = ACTIONS(3),
  },
  [138] = {
    [anon_sym_COMMA] = ACTIONS(300),
    [sym__newline] = ACTIONS(300),
    [anon_sym_RBRACE] = ACTIONS(300),
    [anon_sym_RBRACK] = ACTIONS(300),
    [sym_comment] = ACTIONS(3),
  },
  [139] = {
    [anon_sym_COMMA] = ACTIONS(310),
    [sym__newline] = ACTIONS(310),
    [anon_sym_RBRACE] = ACTIONS(310),
    [anon_sym_RBRACK] = ACTIONS(310),
    [sym_comment] = ACTIONS(3),
  },
  [140] = {
    [anon_sym_COMMA] = ACTIONS(320),
    [sym__newline] = ACTIONS(320),
    [anon_sym_RBRACE] = ACTIONS(320),
    [anon_sym_RBRACK] = ACTIONS(320),
    [sym_comment] = ACTIONS(3),
  },
  [141] = {
    [anon_sym_COMMA] = ACTIONS(324),
    [sym__newline] = ACTIONS(324),
    [anon_sym_RBRACE] = ACTIONS(324),
    [anon_sym_RBRACK] = ACTIONS(324),
    [sym_comment] = ACTIONS(3),
  },
  [142] = {
    [anon_sym_COMMA] = ACTIONS(326),
    [sym__newline] = ACTIONS(326),
    [anon_sym_RBRACE] = ACTIONS(326),
    [anon_sym_RBRACK] = ACTIONS(326),
    [sym_comment] = ACTIONS(3),
  },
  [143] = {
    [anon_sym_COMMA] = ACTIONS(332),
    [sym__newline] = ACTIONS(332),
    [anon_sym_RBRACE] = ACTIONS(332),
    [anon_sym_RBRACK] = ACTIONS(332),
    [sym_comment] = ACTIONS(3),
  },
  [144] = {
    [anon_sym_COMMA] = ACTIONS(345),
    [sym__newline] = ACTIONS(345),
    [anon_sym_RBRACE] = ACTIONS(345),
    [anon_sym_RBRACK] = ACTIONS(345),
    [sym_comment] = ACTIONS(3),
  },
  [145] = {
    [anon_sym_COMMA] = ACTIONS(349),
    [sym__newline] = ACTIONS(349),
    [anon_sym_RBRACE] = ACTIONS(349),
    [anon_sym_RBRACK] = ACTIONS(349),
    [sym_comment] = ACTIONS(3),
  },
  [146] = {
    [anon_sym_COMMA] = ACTIONS(356),
    [sym__newline] = ACTIONS(356),
    [anon_sym_RBRACE] = ACTIONS(356),
    [anon_sym_RBRACK] = ACTIONS(356),
    [sym_comment] = ACTIONS(3),
  },
  [147] = {
    [anon_sym_COMMA] = ACTIONS(370),
    [sym__newline] = ACTIONS(370),
    [anon_sym_RBRACE] = ACTIONS(370),
    [anon_sym_RBRACK] = ACTIONS(370),
    [sym_comment] = ACTIONS(3),
  },
  [148] = {
    [anon_sym_COMMA] = ACTIONS(378),
    [sym__newline] = ACTIONS(378),
    [anon_sym_RBRACE] = ACTIONS(378),
    [anon_sym_RBRACK] = ACTIONS(378),
    [sym_comment] = ACTIONS(3),
  },
  [149] = {
    [anon_sym_COMMA] = ACTIONS(382),
    [sym__newline] = ACTIONS(382),
    [anon_sym_RBRACE] = ACTIONS(382),
    [anon_sym_RBRACK] = ACTIONS(382),
    [sym_comment] = ACTIONS(3),
  },
  [150] = {
    [anon_sym_COMMA] = ACTIONS(69),
    [sym__newline] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(69),
  },
  [151] = {
    [anon_sym_COMMA] = ACTIONS(81),
    [sym__newline] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(81),
  },
  [152] = {
    [anon_sym_COMMA] = ACTIONS(148),
    [sym__newline] = ACTIONS(148),
    [anon_sym_RBRACK] = ACTIONS(148),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(148),
  },
  [153] = {
    [anon_sym_COMMA] = ACTIONS(160),
    [sym__newline] = ACTIONS(160),
    [anon_sym_RBRACK] = ACTIONS(160),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(160),
  },
  [154] = {
    [aux_sym__singleline_basic_string_repeat1] = STATE(156),
    [anon_sym_DQUOTE2] = ACTIONS(395),
    [sym_escape_sequence] = ACTIONS(397),
    [sym_comment] = ACTIONS(25),
    [aux_sym__singleline_basic_string_token1] = ACTIONS(399),
  },
  [155] = {
    [anon_sym_SQUOTE2] = ACTIONS(401),
    [aux_sym__singleline_literal_string_token1] = ACTIONS(403),
    [sym_comment] = ACTIONS(25),
  },
  [156] = {
    [aux_sym__singleline_basic_string_repeat1] = STATE(42),
    [anon_sym_DQUOTE2] = ACTIONS(405),
    [sym_escape_sequence] = ACTIONS(73),
    [sym_comment] = ACTIONS(25),
    [aux_sym__singleline_basic_string_token1] = ACTIONS(75),
  },
  [157] = {
    [anon_sym_SQUOTE2] = ACTIONS(407),
    [sym_comment] = ACTIONS(3),
  },
  [158] = {
    [sym__singleline_literal_string] = STATE(127),
    [sym__multiline_literal_string] = STATE(127),
    [sym_local_date_time] = STATE(128),
    [sym_local_date] = STATE(128),
    [sym__inline_value] = STATE(128),
    [sym_string] = STATE(128),
    [sym_integer] = STATE(128),
    [sym_float] = STATE(128),
    [sym_local_time] = STATE(128),
    [sym_array] = STATE(128),
    [sym__singleline_basic_string] = STATE(127),
    [sym__multiline_basic_string] = STATE(127),
    [sym_offset_date_time] = STATE(128),
    [sym_inline_table] = STATE(128),
    [anon_sym_DQUOTE] = ACTIONS(409),
    [sym__rfc3339_date] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(178),
    [sym__octal_integer] = ACTIONS(180),
    [sym_boolean] = ACTIONS(411),
    [aux_sym_float_token1] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [sym__rfc3339_time] = ACTIONS(188),
    [anon_sym_LBRACK] = ACTIONS(186),
    [sym__hexadecimal_integer] = ACTIONS(180),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(192),
    [sym__binary_integer] = ACTIONS(180),
    [sym__decimal_integer] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(413),
  },
  [159] = {
    [aux_sym_root_repeat1] = STATE(163),
    [sym__inline_value] = STATE(164),
    [sym_string] = STATE(164),
    [sym_integer] = STATE(164),
    [sym_float] = STATE(164),
    [sym_local_time] = STATE(164),
    [sym_array] = STATE(164),
    [sym__singleline_literal_string] = STATE(127),
    [sym__multiline_literal_string] = STATE(127),
    [sym_local_date_time] = STATE(164),
    [sym_local_date] = STATE(164),
    [sym__singleline_basic_string] = STATE(127),
    [sym__multiline_basic_string] = STATE(127),
    [sym_offset_date_time] = STATE(164),
    [sym_inline_table] = STATE(164),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [anon_sym_RBRACK] = ACTIONS(415),
    [sym__rfc3339_date] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(178),
    [sym__octal_integer] = ACTIONS(180),
    [sym_boolean] = ACTIONS(417),
    [aux_sym_float_token1] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(186),
    [sym__rfc3339_time] = ACTIONS(188),
    [sym__hexadecimal_integer] = ACTIONS(180),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(192),
    [sym__newline] = ACTIONS(419),
    [sym__binary_integer] = ACTIONS(180),
    [sym__decimal_integer] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
  },
  [160] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(166),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(421),
    [aux_sym__singleline_literal_string_token1] = ACTIONS(423),
    [sym_comment] = ACTIONS(25),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(423),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(425),
  },
  [161] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(167),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(427),
    [sym_comment] = ACTIONS(25),
    [sym_escape_sequence] = ACTIONS(427),
    [aux_sym__singleline_basic_string_token1] = ACTIONS(429),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(431),
    [sym__escape_line_ending] = ACTIONS(427),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(429),
  },
  [162] = {
    [sym__quoted_key] = STATE(5),
    [sym__singleline_literal_string] = STATE(5),
    [sym__inline_pair] = STATE(168),
    [sym_key] = STATE(189),
    [sym__singleline_basic_string] = STATE(5),
    [sym_dotted_key] = STATE(189),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(433),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [163] = {
    [aux_sym_root_repeat1] = STATE(118),
    [sym__inline_value] = STATE(170),
    [sym_string] = STATE(170),
    [sym_integer] = STATE(170),
    [sym_float] = STATE(170),
    [sym_local_time] = STATE(170),
    [sym_array] = STATE(170),
    [sym__singleline_literal_string] = STATE(127),
    [sym__multiline_literal_string] = STATE(127),
    [sym_local_date_time] = STATE(170),
    [sym_local_date] = STATE(170),
    [sym__singleline_basic_string] = STATE(127),
    [sym__multiline_basic_string] = STATE(127),
    [sym_offset_date_time] = STATE(170),
    [sym_inline_table] = STATE(170),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [anon_sym_RBRACK] = ACTIONS(435),
    [sym__rfc3339_date] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(178),
    [sym__octal_integer] = ACTIONS(180),
    [sym_boolean] = ACTIONS(437),
    [aux_sym_float_token1] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(186),
    [sym__rfc3339_time] = ACTIONS(188),
    [sym__hexadecimal_integer] = ACTIONS(180),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(192),
    [sym__newline] = ACTIONS(250),
    [sym__binary_integer] = ACTIONS(180),
    [sym__decimal_integer] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
  },
  [164] = {
    [aux_sym_root_repeat1] = STATE(172),
    [aux_sym_array_repeat1] = STATE(173),
    [anon_sym_COMMA] = ACTIONS(439),
    [sym__newline] = ACTIONS(441),
    [anon_sym_RBRACK] = ACTIONS(435),
    [sym_comment] = ACTIONS(3),
  },
  [165] = {
    [sym_comment] = ACTIONS(3),
    [sym__rfc3339_time] = ACTIONS(443),
  },
  [166] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(81),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(262),
    [aux_sym__singleline_literal_string_token1] = ACTIONS(260),
    [sym_comment] = ACTIONS(25),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(260),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(445),
  },
  [167] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(83),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(268),
    [sym_comment] = ACTIONS(25),
    [sym_escape_sequence] = ACTIONS(268),
    [aux_sym__singleline_basic_string_token1] = ACTIONS(270),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(447),
    [sym__escape_line_ending] = ACTIONS(268),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(270),
  },
  [168] = {
    [aux_sym_inline_table_repeat1] = STATE(174),
    [anon_sym_COMMA] = ACTIONS(276),
    [anon_sym_RBRACE] = ACTIONS(449),
    [sym_comment] = ACTIONS(3),
  },
  [169] = {
    [sym__decimal_integer] = ACTIONS(451),
    [sym_comment] = ACTIONS(3),
  },
  [170] = {
    [aux_sym_root_repeat1] = STATE(176),
    [aux_sym_array_repeat1] = STATE(177),
    [anon_sym_COMMA] = ACTIONS(453),
    [sym__newline] = ACTIONS(455),
    [anon_sym_RBRACK] = ACTIONS(457),
    [sym_comment] = ACTIONS(3),
  },
  [171] = {
    [aux_sym_root_repeat1] = STATE(178),
    [sym__inline_value] = STATE(94),
    [sym_string] = STATE(94),
    [sym_integer] = STATE(94),
    [sym_float] = STATE(94),
    [sym_local_time] = STATE(94),
    [sym_array] = STATE(94),
    [sym__singleline_literal_string] = STATE(127),
    [sym__multiline_literal_string] = STATE(127),
    [sym_local_date_time] = STATE(94),
    [sym_local_date] = STATE(94),
    [sym__singleline_basic_string] = STATE(127),
    [sym__multiline_basic_string] = STATE(127),
    [sym_offset_date_time] = STATE(94),
    [sym_inline_table] = STATE(94),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [anon_sym_RBRACK] = ACTIONS(457),
    [sym__rfc3339_date] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(178),
    [sym__octal_integer] = ACTIONS(180),
    [sym_boolean] = ACTIONS(292),
    [aux_sym_float_token1] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(186),
    [sym__rfc3339_time] = ACTIONS(188),
    [sym__hexadecimal_integer] = ACTIONS(180),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(192),
    [sym__newline] = ACTIONS(459),
    [sym__binary_integer] = ACTIONS(180),
    [sym__decimal_integer] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
  },
  [172] = {
    [aux_sym_root_repeat1] = STATE(118),
    [aux_sym_array_repeat1] = STATE(177),
    [anon_sym_COMMA] = ACTIONS(453),
    [sym__newline] = ACTIONS(250),
    [anon_sym_RBRACK] = ACTIONS(457),
    [sym_comment] = ACTIONS(3),
  },
  [173] = {
    [aux_sym_array_repeat1] = STATE(95),
    [anon_sym_COMMA] = ACTIONS(453),
    [anon_sym_RBRACK] = ACTIONS(457),
    [sym_comment] = ACTIONS(3),
  },
  [174] = {
    [aux_sym_inline_table_repeat1] = STATE(99),
    [anon_sym_COMMA] = ACTIONS(276),
    [anon_sym_RBRACE] = ACTIONS(461),
    [sym_comment] = ACTIONS(3),
  },
  [175] = {
    [aux_sym_root_repeat1] = STATE(179),
    [sym__inline_value] = STATE(94),
    [sym_string] = STATE(94),
    [sym_integer] = STATE(94),
    [sym_float] = STATE(94),
    [sym_local_time] = STATE(94),
    [sym_array] = STATE(94),
    [sym__singleline_literal_string] = STATE(127),
    [sym__multiline_literal_string] = STATE(127),
    [sym_local_date_time] = STATE(94),
    [sym_local_date] = STATE(94),
    [sym__singleline_basic_string] = STATE(127),
    [sym__multiline_basic_string] = STATE(127),
    [sym_offset_date_time] = STATE(94),
    [sym_inline_table] = STATE(94),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [anon_sym_RBRACK] = ACTIONS(463),
    [sym__rfc3339_date] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(178),
    [sym__octal_integer] = ACTIONS(180),
    [sym_boolean] = ACTIONS(292),
    [aux_sym_float_token1] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(186),
    [sym__rfc3339_time] = ACTIONS(188),
    [sym__hexadecimal_integer] = ACTIONS(180),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(192),
    [sym__newline] = ACTIONS(465),
    [sym__binary_integer] = ACTIONS(180),
    [sym__decimal_integer] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
  },
  [176] = {
    [aux_sym_root_repeat1] = STATE(118),
    [aux_sym_array_repeat1] = STATE(181),
    [anon_sym_COMMA] = ACTIONS(467),
    [sym__newline] = ACTIONS(250),
    [anon_sym_RBRACK] = ACTIONS(463),
    [sym_comment] = ACTIONS(3),
  },
  [177] = {
    [aux_sym_array_repeat1] = STATE(95),
    [anon_sym_COMMA] = ACTIONS(467),
    [anon_sym_RBRACK] = ACTIONS(463),
    [sym_comment] = ACTIONS(3),
  },
  [178] = {
    [aux_sym_root_repeat1] = STATE(118),
    [sym__inline_value] = STATE(104),
    [sym_string] = STATE(104),
    [sym_integer] = STATE(104),
    [sym_float] = STATE(104),
    [sym_local_time] = STATE(104),
    [sym_array] = STATE(104),
    [sym__singleline_literal_string] = STATE(127),
    [sym__multiline_literal_string] = STATE(127),
    [sym_local_date_time] = STATE(104),
    [sym_local_date] = STATE(104),
    [sym__singleline_basic_string] = STATE(127),
    [sym__multiline_basic_string] = STATE(127),
    [sym_offset_date_time] = STATE(104),
    [sym_inline_table] = STATE(104),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [anon_sym_RBRACK] = ACTIONS(463),
    [sym__rfc3339_date] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(178),
    [sym__octal_integer] = ACTIONS(180),
    [sym_boolean] = ACTIONS(336),
    [aux_sym_float_token1] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(186),
    [sym__rfc3339_time] = ACTIONS(188),
    [sym__hexadecimal_integer] = ACTIONS(180),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(192),
    [sym__newline] = ACTIONS(250),
    [sym__binary_integer] = ACTIONS(180),
    [sym__decimal_integer] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
  },
  [179] = {
    [aux_sym_root_repeat1] = STATE(118),
    [sym__inline_value] = STATE(104),
    [sym_string] = STATE(104),
    [sym_integer] = STATE(104),
    [sym_float] = STATE(104),
    [sym_local_time] = STATE(104),
    [sym_array] = STATE(104),
    [sym__singleline_literal_string] = STATE(127),
    [sym__multiline_literal_string] = STATE(127),
    [sym_local_date_time] = STATE(104),
    [sym_local_date] = STATE(104),
    [sym__singleline_basic_string] = STATE(127),
    [sym__multiline_basic_string] = STATE(127),
    [sym_offset_date_time] = STATE(104),
    [sym_inline_table] = STATE(104),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [anon_sym_RBRACK] = ACTIONS(469),
    [sym__rfc3339_date] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(178),
    [sym__octal_integer] = ACTIONS(180),
    [sym_boolean] = ACTIONS(336),
    [aux_sym_float_token1] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(186),
    [sym__rfc3339_time] = ACTIONS(188),
    [sym__hexadecimal_integer] = ACTIONS(180),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(192),
    [sym__newline] = ACTIONS(250),
    [sym__binary_integer] = ACTIONS(180),
    [sym__decimal_integer] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
  },
  [180] = {
    [aux_sym_root_repeat1] = STATE(182),
    [sym__inline_value] = STATE(94),
    [sym_string] = STATE(94),
    [sym_integer] = STATE(94),
    [sym_float] = STATE(94),
    [sym_local_time] = STATE(94),
    [sym_array] = STATE(94),
    [sym__singleline_literal_string] = STATE(127),
    [sym__multiline_literal_string] = STATE(127),
    [sym_local_date_time] = STATE(94),
    [sym_local_date] = STATE(94),
    [sym__singleline_basic_string] = STATE(127),
    [sym__multiline_basic_string] = STATE(127),
    [sym_offset_date_time] = STATE(94),
    [sym_inline_table] = STATE(94),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [anon_sym_RBRACK] = ACTIONS(469),
    [sym__rfc3339_date] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(178),
    [sym__octal_integer] = ACTIONS(180),
    [sym_boolean] = ACTIONS(292),
    [aux_sym_float_token1] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(186),
    [sym__rfc3339_time] = ACTIONS(188),
    [sym__hexadecimal_integer] = ACTIONS(180),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(192),
    [sym__newline] = ACTIONS(471),
    [sym__binary_integer] = ACTIONS(180),
    [sym__decimal_integer] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
  },
  [181] = {
    [aux_sym_array_repeat1] = STATE(95),
    [anon_sym_COMMA] = ACTIONS(473),
    [anon_sym_RBRACK] = ACTIONS(469),
    [sym_comment] = ACTIONS(3),
  },
  [182] = {
    [aux_sym_root_repeat1] = STATE(118),
    [sym__inline_value] = STATE(104),
    [sym_string] = STATE(104),
    [sym_integer] = STATE(104),
    [sym_float] = STATE(104),
    [sym_local_time] = STATE(104),
    [sym_array] = STATE(104),
    [sym__singleline_literal_string] = STATE(127),
    [sym__multiline_literal_string] = STATE(127),
    [sym_local_date_time] = STATE(104),
    [sym_local_date] = STATE(104),
    [sym__singleline_basic_string] = STATE(127),
    [sym__multiline_basic_string] = STATE(127),
    [sym_offset_date_time] = STATE(104),
    [sym_inline_table] = STATE(104),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [anon_sym_RBRACK] = ACTIONS(475),
    [sym__rfc3339_date] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(178),
    [sym__octal_integer] = ACTIONS(180),
    [sym_boolean] = ACTIONS(336),
    [aux_sym_float_token1] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(186),
    [sym__rfc3339_time] = ACTIONS(188),
    [sym__hexadecimal_integer] = ACTIONS(180),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(192),
    [sym__newline] = ACTIONS(250),
    [sym__binary_integer] = ACTIONS(180),
    [sym__decimal_integer] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
  },
  [183] = {
    [aux_sym_root_repeat1] = STATE(184),
    [sym__inline_value] = STATE(94),
    [sym_string] = STATE(94),
    [sym_integer] = STATE(94),
    [sym_float] = STATE(94),
    [sym_local_time] = STATE(94),
    [sym_array] = STATE(94),
    [sym__singleline_literal_string] = STATE(127),
    [sym__multiline_literal_string] = STATE(127),
    [sym_local_date_time] = STATE(94),
    [sym_local_date] = STATE(94),
    [sym__singleline_basic_string] = STATE(127),
    [sym__multiline_basic_string] = STATE(127),
    [sym_offset_date_time] = STATE(94),
    [sym_inline_table] = STATE(94),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [anon_sym_RBRACK] = ACTIONS(475),
    [sym__rfc3339_date] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(178),
    [sym__octal_integer] = ACTIONS(180),
    [sym_boolean] = ACTIONS(292),
    [aux_sym_float_token1] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(186),
    [sym__rfc3339_time] = ACTIONS(188),
    [sym__hexadecimal_integer] = ACTIONS(180),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(192),
    [sym__newline] = ACTIONS(477),
    [sym__binary_integer] = ACTIONS(180),
    [sym__decimal_integer] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
  },
  [184] = {
    [aux_sym_root_repeat1] = STATE(118),
    [sym__inline_value] = STATE(104),
    [sym_string] = STATE(104),
    [sym_integer] = STATE(104),
    [sym_float] = STATE(104),
    [sym_local_time] = STATE(104),
    [sym_array] = STATE(104),
    [sym__singleline_literal_string] = STATE(127),
    [sym__multiline_literal_string] = STATE(127),
    [sym_local_date_time] = STATE(104),
    [sym_local_date] = STATE(104),
    [sym__singleline_basic_string] = STATE(127),
    [sym__multiline_basic_string] = STATE(127),
    [sym_offset_date_time] = STATE(104),
    [sym_inline_table] = STATE(104),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [anon_sym_RBRACK] = ACTIONS(479),
    [sym__rfc3339_date] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(178),
    [sym__octal_integer] = ACTIONS(180),
    [sym_boolean] = ACTIONS(336),
    [aux_sym_float_token1] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(186),
    [sym__rfc3339_time] = ACTIONS(188),
    [sym__hexadecimal_integer] = ACTIONS(180),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(192),
    [sym__newline] = ACTIONS(250),
    [sym__binary_integer] = ACTIONS(180),
    [sym__decimal_integer] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(198),
  },
  [185] = {
    [aux_sym__singleline_basic_string_repeat1] = STATE(187),
    [anon_sym_DQUOTE2] = ACTIONS(481),
    [sym_escape_sequence] = ACTIONS(483),
    [sym_comment] = ACTIONS(25),
    [aux_sym__singleline_basic_string_token1] = ACTIONS(485),
  },
  [186] = {
    [anon_sym_SQUOTE2] = ACTIONS(487),
    [sym_comment] = ACTIONS(25),
    [aux_sym__singleline_literal_string_token1] = ACTIONS(489),
  },
  [187] = {
    [aux_sym__singleline_basic_string_repeat1] = STATE(42),
    [anon_sym_DQUOTE2] = ACTIONS(491),
    [sym_escape_sequence] = ACTIONS(73),
    [sym_comment] = ACTIONS(25),
    [aux_sym__singleline_basic_string_token1] = ACTIONS(75),
  },
  [188] = {
    [anon_sym_SQUOTE2] = ACTIONS(493),
    [sym_comment] = ACTIONS(3),
  },
  [189] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(495),
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
  [11] = {.count = 1, .reusable = true}, SHIFT(8),
  [13] = {.count = 1, .reusable = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = false}, SHIFT(6),
  [17] = {.count = 1, .reusable = true}, SHIFT(7),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_root, 1),
  [21] = {.count = 1, .reusable = true}, SHIFT(18),
  [23] = {.count = 1, .reusable = true}, SHIFT(19),
  [25] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [27] = {.count = 1, .reusable = false}, SHIFT(19),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_key, 1),
  [31] = {.count = 1, .reusable = true}, SHIFT(154),
  [33] = {.count = 1, .reusable = true}, SHIFT(115),
  [35] = {.count = 1, .reusable = true}, SHIFT(155),
  [37] = {.count = 1, .reusable = true}, SHIFT(21),
  [39] = {.count = 1, .reusable = false}, SHIFT(22),
  [41] = {.count = 1, .reusable = true}, SHIFT(23),
  [43] = {.count = 1, .reusable = true}, SHIFT(24),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_table, 1),
  [47] = {.count = 1, .reusable = true}, SHIFT(28),
  [49] = {.count = 1, .reusable = false}, REDUCE(sym_table, 1),
  [51] = {.count = 1, .reusable = true}, SHIFT(31),
  [53] = {.count = 1, .reusable = true}, SHIFT(32),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_table_array, 1),
  [57] = {.count = 1, .reusable = true}, SHIFT(35),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym_table_array, 1),
  [61] = {.count = 1, .reusable = true}, SHIFT(38),
  [63] = {.count = 1, .reusable = true}, SHIFT(39),
  [65] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [67] = {.count = 1, .reusable = true}, SHIFT(40),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym__singleline_basic_string, 2),
  [71] = {.count = 1, .reusable = true}, SHIFT(41),
  [73] = {.count = 1, .reusable = true}, SHIFT(42),
  [75] = {.count = 1, .reusable = false}, SHIFT(42),
  [77] = {.count = 1, .reusable = true}, SHIFT(119),
  [79] = {.count = 1, .reusable = true}, SHIFT(43),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym__singleline_literal_string, 2),
  [83] = {.count = 1, .reusable = true}, SHIFT(44),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_root, 2),
  [87] = {.count = 1, .reusable = true}, REDUCE(aux_sym_root_repeat1, 2),
  [89] = {.count = 2, .reusable = true}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(24),
  [92] = {.count = 1, .reusable = false}, REDUCE(aux_sym_root_repeat1, 2),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym__loose_table_header, 2),
  [96] = {.count = 1, .reusable = false}, REDUCE(sym__loose_table_header, 2),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_table, 2),
  [100] = {.count = 1, .reusable = false}, REDUCE(sym_table, 2),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_pair, 2),
  [104] = {.count = 1, .reusable = false}, REDUCE(sym_pair, 2),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym__loose_pair, 2),
  [108] = {.count = 1, .reusable = false}, REDUCE(sym__loose_pair, 2),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym__pairs, 2),
  [112] = {.count = 1, .reusable = false}, REDUCE(sym__pairs, 2),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym__loose_table_array_header, 2),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym__loose_table_array_header, 2),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_table_array, 2),
  [120] = {.count = 1, .reusable = false}, REDUCE(sym_table_array, 2),
  [122] = {.count = 1, .reusable = false}, SHIFT(185),
  [124] = {.count = 1, .reusable = true}, SHIFT(49),
  [126] = {.count = 1, .reusable = true}, SHIFT(53),
  [128] = {.count = 1, .reusable = true}, SHIFT(48),
  [130] = {.count = 1, .reusable = true}, SHIFT(57),
  [132] = {.count = 1, .reusable = true}, SHIFT(52),
  [134] = {.count = 1, .reusable = true}, SHIFT(55),
  [136] = {.count = 1, .reusable = true}, SHIFT(47),
  [138] = {.count = 1, .reusable = true}, SHIFT(50),
  [140] = {.count = 1, .reusable = true}, SHIFT(51),
  [142] = {.count = 1, .reusable = false}, SHIFT(54),
  [144] = {.count = 1, .reusable = false}, SHIFT(186),
  [146] = {.count = 1, .reusable = true}, SHIFT(59),
  [148] = {.count = 1, .reusable = true}, REDUCE(sym__singleline_basic_string, 3),
  [150] = {.count = 1, .reusable = true}, REDUCE(aux_sym__singleline_basic_string_repeat1, 2),
  [152] = {.count = 2, .reusable = true}, REDUCE(aux_sym__singleline_basic_string_repeat1, 2), SHIFT_REPEAT(42),
  [155] = {.count = 2, .reusable = false}, REDUCE(aux_sym__singleline_basic_string_repeat1, 2), SHIFT_REPEAT(42),
  [158] = {.count = 1, .reusable = true}, SHIFT(60),
  [160] = {.count = 1, .reusable = true}, REDUCE(sym__singleline_literal_string, 3),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_root, 3),
  [164] = {.count = 2, .reusable = true}, REDUCE(aux_sym_root_repeat2, 2), SHIFT_REPEAT(3),
  [167] = {.count = 1, .reusable = true}, REDUCE(aux_sym_root_repeat2, 2),
  [169] = {.count = 2, .reusable = false}, REDUCE(aux_sym_root_repeat2, 2), SHIFT_REPEAT(6),
  [172] = {.count = 1, .reusable = false}, SHIFT(154),
  [174] = {.count = 1, .reusable = true}, SHIFT(61),
  [176] = {.count = 1, .reusable = true}, SHIFT(123),
  [178] = {.count = 1, .reusable = true}, SHIFT(162),
  [180] = {.count = 1, .reusable = true}, SHIFT(122),
  [182] = {.count = 1, .reusable = true}, SHIFT(63),
  [184] = {.count = 1, .reusable = true}, SHIFT(124),
  [186] = {.count = 1, .reusable = true}, SHIFT(159),
  [188] = {.count = 1, .reusable = true}, SHIFT(126),
  [190] = {.count = 1, .reusable = true}, SHIFT(160),
  [192] = {.count = 1, .reusable = true}, SHIFT(161),
  [194] = {.count = 1, .reusable = true}, SHIFT(62),
  [196] = {.count = 1, .reusable = false}, SHIFT(125),
  [198] = {.count = 1, .reusable = false}, SHIFT(155),
  [200] = {.count = 1, .reusable = true}, REDUCE(sym_integer, 1),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_local_date, 1),
  [204] = {.count = 1, .reusable = false}, REDUCE(sym_local_date, 1),
  [206] = {.count = 1, .reusable = true}, SHIFT(64),
  [208] = {.count = 1, .reusable = false}, SHIFT(66),
  [210] = {.count = 1, .reusable = true}, SHIFT(66),
  [212] = {.count = 1, .reusable = true}, SHIFT(65),
  [214] = {.count = 1, .reusable = true}, SHIFT(68),
  [216] = {.count = 1, .reusable = false}, SHIFT(68),
  [218] = {.count = 1, .reusable = true}, SHIFT(67),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym_float, 1),
  [222] = {.count = 1, .reusable = true}, SHIFT(69),
  [224] = {.count = 1, .reusable = true}, SHIFT(72),
  [226] = {.count = 1, .reusable = true}, SHIFT(71),
  [228] = {.count = 1, .reusable = true}, REDUCE(sym_local_time, 1),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym__inline_pair, 3),
  [234] = {.count = 1, .reusable = true}, REDUCE(sym_dotted_key, 3),
  [236] = {.count = 1, .reusable = true}, REDUCE(sym__table_array_header, 4),
  [238] = {.count = 1, .reusable = false}, REDUCE(sym__table_array_header, 4),
  [240] = {.count = 1, .reusable = true}, REDUCE(sym__table_header, 4),
  [242] = {.count = 1, .reusable = false}, REDUCE(sym__table_header, 4),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [246] = {.count = 1, .reusable = true}, SHIFT(74),
  [248] = {.count = 1, .reusable = true}, SHIFT(75),
  [250] = {.count = 1, .reusable = true}, SHIFT(118),
  [252] = {.count = 1, .reusable = true}, SHIFT(76),
  [254] = {.count = 1, .reusable = true}, SHIFT(77),
  [256] = {.count = 1, .reusable = true}, SHIFT(79),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym__multiline_literal_string, 2),
  [260] = {.count = 1, .reusable = false}, SHIFT(81),
  [262] = {.count = 1, .reusable = true}, SHIFT(81),
  [264] = {.count = 1, .reusable = true}, SHIFT(80),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym__multiline_basic_string, 2),
  [268] = {.count = 1, .reusable = true}, SHIFT(83),
  [270] = {.count = 1, .reusable = false}, SHIFT(83),
  [272] = {.count = 1, .reusable = true}, SHIFT(82),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym_inline_table, 2),
  [276] = {.count = 1, .reusable = true}, SHIFT(84),
  [278] = {.count = 1, .reusable = true}, SHIFT(85),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym_float, 2),
  [282] = {.count = 1, .reusable = true}, SHIFT(88),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [286] = {.count = 1, .reusable = true}, SHIFT(89),
  [288] = {.count = 1, .reusable = true}, SHIFT(91),
  [290] = {.count = 1, .reusable = true}, SHIFT(90),
  [292] = {.count = 1, .reusable = true}, SHIFT(94),
  [294] = {.count = 1, .reusable = true}, SHIFT(93),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym_local_date_time, 3),
  [298] = {.count = 1, .reusable = true}, SHIFT(96),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym__multiline_literal_string, 3),
  [302] = {.count = 2, .reusable = false}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2), SHIFT_REPEAT(81),
  [305] = {.count = 2, .reusable = true}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2), SHIFT_REPEAT(81),
  [308] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym__multiline_basic_string, 3),
  [312] = {.count = 2, .reusable = true}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2), SHIFT_REPEAT(83),
  [315] = {.count = 2, .reusable = false}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2), SHIFT_REPEAT(83),
  [318] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2),
  [320] = {.count = 1, .reusable = true}, REDUCE(sym_inline_table, 3, .production_id = 1),
  [322] = {.count = 1, .reusable = true}, SHIFT(98),
  [324] = {.count = 1, .reusable = true}, REDUCE(sym_float, 3),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym__float_exponent_part, 2),
  [328] = {.count = 1, .reusable = true}, SHIFT(100),
  [330] = {.count = 1, .reusable = true}, SHIFT(101),
  [332] = {.count = 1, .reusable = true}, REDUCE(sym_array, 4),
  [334] = {.count = 1, .reusable = true}, SHIFT(102),
  [336] = {.count = 1, .reusable = true}, SHIFT(104),
  [338] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2),
  [340] = {.count = 1, .reusable = true}, SHIFT(105),
  [342] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(106),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_offset_date_time, 4),
  [347] = {.count = 1, .reusable = true}, REDUCE(aux_sym_inline_table_repeat1, 2, .production_id = 1),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_inline_table, 4, .production_id = 1),
  [351] = {.count = 2, .reusable = true}, REDUCE(aux_sym_inline_table_repeat1, 2), SHIFT_REPEAT(84),
  [354] = {.count = 1, .reusable = true}, REDUCE(aux_sym_inline_table_repeat1, 2),
  [356] = {.count = 1, .reusable = true}, REDUCE(sym_array, 5),
  [358] = {.count = 1, .reusable = true}, SHIFT(107),
  [360] = {.count = 1, .reusable = true}, SHIFT(108),
  [362] = {.count = 1, .reusable = true}, SHIFT(109),
  [364] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat1, 3),
  [366] = {.count = 1, .reusable = true}, SHIFT(110),
  [368] = {.count = 1, .reusable = true}, SHIFT(111),
  [370] = {.count = 1, .reusable = true}, REDUCE(sym_array, 6),
  [372] = {.count = 1, .reusable = true}, SHIFT(112),
  [374] = {.count = 1, .reusable = true}, SHIFT(113),
  [376] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat1, 4),
  [378] = {.count = 1, .reusable = true}, REDUCE(sym_array, 7),
  [380] = {.count = 1, .reusable = true}, SHIFT(114),
  [382] = {.count = 1, .reusable = true}, REDUCE(sym_array, 8),
  [384] = {.count = 2, .reusable = true}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(118),
  [387] = {.count = 1, .reusable = true}, SHIFT(165),
  [389] = {.count = 1, .reusable = true}, SHIFT(169),
  [391] = {.count = 1, .reusable = true}, SHIFT(134),
  [393] = {.count = 1, .reusable = true}, SHIFT(144),
  [395] = {.count = 1, .reusable = true}, SHIFT(150),
  [397] = {.count = 1, .reusable = true}, SHIFT(156),
  [399] = {.count = 1, .reusable = false}, SHIFT(156),
  [401] = {.count = 1, .reusable = true}, SHIFT(151),
  [403] = {.count = 1, .reusable = false}, SHIFT(157),
  [405] = {.count = 1, .reusable = true}, SHIFT(152),
  [407] = {.count = 1, .reusable = true}, SHIFT(153),
  [409] = {.count = 1, .reusable = false}, SHIFT(4),
  [411] = {.count = 1, .reusable = true}, SHIFT(128),
  [413] = {.count = 1, .reusable = false}, SHIFT(7),
  [415] = {.count = 1, .reusable = true}, SHIFT(130),
  [417] = {.count = 1, .reusable = true}, SHIFT(164),
  [419] = {.count = 1, .reusable = true}, SHIFT(163),
  [421] = {.count = 1, .reusable = true}, SHIFT(166),
  [423] = {.count = 1, .reusable = false}, SHIFT(166),
  [425] = {.count = 1, .reusable = true}, SHIFT(131),
  [427] = {.count = 1, .reusable = true}, SHIFT(167),
  [429] = {.count = 1, .reusable = false}, SHIFT(167),
  [431] = {.count = 1, .reusable = true}, SHIFT(132),
  [433] = {.count = 1, .reusable = true}, SHIFT(133),
  [435] = {.count = 1, .reusable = true}, SHIFT(136),
  [437] = {.count = 1, .reusable = true}, SHIFT(170),
  [439] = {.count = 1, .reusable = true}, SHIFT(171),
  [441] = {.count = 1, .reusable = true}, SHIFT(172),
  [443] = {.count = 1, .reusable = true}, SHIFT(137),
  [445] = {.count = 1, .reusable = true}, SHIFT(138),
  [447] = {.count = 1, .reusable = true}, SHIFT(139),
  [449] = {.count = 1, .reusable = true}, SHIFT(140),
  [451] = {.count = 1, .reusable = true}, SHIFT(142),
  [453] = {.count = 1, .reusable = true}, SHIFT(175),
  [455] = {.count = 1, .reusable = true}, SHIFT(176),
  [457] = {.count = 1, .reusable = true}, SHIFT(143),
  [459] = {.count = 1, .reusable = true}, SHIFT(178),
  [461] = {.count = 1, .reusable = true}, SHIFT(145),
  [463] = {.count = 1, .reusable = true}, SHIFT(146),
  [465] = {.count = 1, .reusable = true}, SHIFT(179),
  [467] = {.count = 1, .reusable = true}, SHIFT(180),
  [469] = {.count = 1, .reusable = true}, SHIFT(147),
  [471] = {.count = 1, .reusable = true}, SHIFT(182),
  [473] = {.count = 1, .reusable = true}, SHIFT(183),
  [475] = {.count = 1, .reusable = true}, SHIFT(148),
  [477] = {.count = 1, .reusable = true}, SHIFT(184),
  [479] = {.count = 1, .reusable = true}, SHIFT(149),
  [481] = {.count = 1, .reusable = true}, SHIFT(116),
  [483] = {.count = 1, .reusable = true}, SHIFT(187),
  [485] = {.count = 1, .reusable = false}, SHIFT(187),
  [487] = {.count = 1, .reusable = true}, SHIFT(117),
  [489] = {.count = 1, .reusable = false}, SHIFT(188),
  [491] = {.count = 1, .reusable = true}, SHIFT(120),
  [493] = {.count = 1, .reusable = true}, SHIFT(121),
  [495] = {.count = 1, .reusable = true}, SHIFT(158),
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
