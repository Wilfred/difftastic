#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 192
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 13
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
  sym_escape_sequence = 10,
  sym__escape_line_ending = 11,
  sym__decimal_integer = 12,
  sym__hexadecimal_integer = 13,
  sym__octal_integer = 14,
  sym__binary_integer = 15,
  aux_sym_float_token1 = 16,
  sym__float_fractional_part = 17,
  aux_sym__float_exponent_part_token1 = 18,
  sym_boolean = 19,
  sym__rfc3339_date = 20,
  sym__rfc3339_delimiter = 21,
  sym__rfc3339_time = 22,
  sym__rfc3339_offset = 23,
  anon_sym_COMMA = 24,
  anon_sym_LBRACE = 25,
  anon_sym_RBRACE = 26,
  sym__eof = 27,
  sym__basic_string_start = 28,
  sym__basic_string_content = 29,
  sym__basic_string_end = 30,
  sym__multiline_basic_string_start = 31,
  sym__multiline_basic_string_content = 32,
  sym__multiline_basic_string_end = 33,
  sym__literal_string_start = 34,
  sym__literal_string_content = 35,
  sym__literal_string_end = 36,
  sym__multiline_literal_string_start = 37,
  sym__multiline_literal_string_content = 38,
  sym__multiline_literal_string_end = 39,
  sym_root = 40,
  sym__newline_or_eof = 41,
  sym_table = 42,
  sym__table_header = 43,
  sym__loose_table_header = 44,
  sym_table_array = 45,
  sym__table_array_header = 46,
  sym__loose_table_array_header = 47,
  sym_pair = 48,
  sym__inline_pair = 49,
  sym__loose_pair = 50,
  sym__pairs = 51,
  sym_key = 52,
  sym_dotted_key = 53,
  sym__quoted_key = 54,
  sym__inline_value = 55,
  sym_string = 56,
  sym__basic_string = 57,
  sym__multiline_basic_string = 58,
  sym__literal_string = 59,
  sym__multiline_literal_string = 60,
  sym_integer = 61,
  sym_float = 62,
  sym__float_exponent_part = 63,
  sym_offset_date_time = 64,
  sym_local_date_time = 65,
  sym_local_date = 66,
  sym_local_time = 67,
  sym_array = 68,
  sym_inline_table = 69,
  aux_sym_root_repeat1 = 70,
  aux_sym_root_repeat2 = 71,
  aux_sym__basic_string_repeat1 = 72,
  aux_sym__multiline_basic_string_repeat1 = 73,
  aux_sym__literal_string_repeat1 = 74,
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
  [sym_escape_sequence] = "escape_sequence",
  [sym__escape_line_ending] = "escape_sequence",
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
  [sym__basic_string_start] = "_basic_string_start",
  [sym__basic_string_content] = "_basic_string_content",
  [sym__basic_string_end] = "_basic_string_end",
  [sym__multiline_basic_string_start] = "_multiline_basic_string_start",
  [sym__multiline_basic_string_content] = "_multiline_basic_string_content",
  [sym__multiline_basic_string_end] = "_multiline_basic_string_end",
  [sym__literal_string_start] = "_literal_string_start",
  [sym__literal_string_content] = "_literal_string_content",
  [sym__literal_string_end] = "_literal_string_end",
  [sym__multiline_literal_string_start] = "_multiline_literal_string_start",
  [sym__multiline_literal_string_content] = "_multiline_literal_string_content",
  [sym__multiline_literal_string_end] = "_multiline_literal_string_end",
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
  [sym__float_exponent_part] = "_float_exponent_part",
  [sym_offset_date_time] = "offset_date_time",
  [sym_local_date_time] = "local_date_time",
  [sym_local_date] = "local_date",
  [sym_local_time] = "local_time",
  [sym_array] = "array",
  [sym_inline_table] = "inline_table",
  [aux_sym_root_repeat1] = "root_repeat1",
  [aux_sym_root_repeat2] = "root_repeat2",
  [aux_sym__basic_string_repeat1] = "_basic_string_repeat1",
  [aux_sym__multiline_basic_string_repeat1] = "_multiline_basic_string_repeat1",
  [aux_sym__literal_string_repeat1] = "_literal_string_repeat1",
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
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__escape_line_ending] = {
    .visible = true,
    .named = true,
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
  [sym__basic_string_start] = {
    .visible = false,
    .named = true,
  },
  [sym__basic_string_content] = {
    .visible = false,
    .named = true,
  },
  [sym__basic_string_end] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_basic_string_start] = {
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
  [sym__literal_string_start] = {
    .visible = false,
    .named = true,
  },
  [sym__literal_string_content] = {
    .visible = false,
    .named = true,
  },
  [sym__literal_string_end] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_literal_string_start] = {
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
  [aux_sym__basic_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__multiline_basic_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__literal_string_repeat1] = {
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
      if (lookahead == 0) ADVANCE(58);
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == ',') ADVANCE(134);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == '1') ADVANCE(71);
      if (lookahead == '2') ADVANCE(70);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == ']') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '}') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(107);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(107);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(58);
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == ',') ADVANCE(134);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == '1') ADVANCE(71);
      if (lookahead == '2') ADVANCE(70);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '}') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(107);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(107);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(58);
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == ',') ADVANCE(134);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == '}') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 3:
      if (lookahead == '\t') SKIP(3)
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == ',') ADVANCE(134);
      if (lookahead == ']') ADVANCE(63);
      if (lookahead == '}') ADVANCE(136);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(60);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == ',') ADVANCE(134);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '0') ADVANCE(115);
      if (lookahead == '1') ADVANCE(113);
      if (lookahead == '2') ADVANCE(112);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == ']') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(27);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '}') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(14);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == ',') ADVANCE(134);
      if (lookahead == ']') ADVANCE(63);
      if (lookahead == '}') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(17);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(133);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(109);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == 'U') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(53);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(120);
      if (lookahead == '1') ADVANCE(118);
      if (lookahead == '2') ADVANCE(117);
      if (lookahead == 'i') ADVANCE(27);
      if (lookahead == 'n') ADVANCE(23);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(131);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(27);
      if (lookahead == 'n') ADVANCE(23);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(39);
      if (lookahead == '1') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == '3') ADVANCE(33);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(46);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(35);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == '6') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead == ']') ADVANCE(65);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(124);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 32:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(123);
      END_STATE();
    case 33:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(128);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(11);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(20);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(48);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(42);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(122);
      END_STATE();
    case 39:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 40:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '\r') ADVANCE(4);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '_') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '_') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(68);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '_') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '_') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(100);
      if (lookahead == 'x') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0') ADVANCE(104);
      if (lookahead == '1') ADVANCE(85);
      if (lookahead == '2') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(88);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0') ADVANCE(102);
      if (lookahead == '1') ADVANCE(99);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0') ADVANCE(101);
      if (lookahead == '3') ADVANCE(97);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(103);
      if (lookahead == '-' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == '_') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(98);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(81);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(79);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'n') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'n') ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'u') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(107);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(81);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(75);
      if (lookahead == '-' ||
          ('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__bare_key);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__bare_key);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead == '-' ||
          lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__escape_line_ending);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__decimal_integer);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__decimal_integer);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__decimal_integer);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(111);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__decimal_integer);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__decimal_integer);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__decimal_integer);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == 'b') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(38);
      if (lookahead == 'x') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__decimal_integer);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__decimal_integer);
      if (lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(116);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__decimal_integer);
      if (lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__decimal_integer);
      if (lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__decimal_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__hexadecimal_integer);
      if (lookahead == '_') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__octal_integer);
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__binary_integer);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_float_token1);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__float_fractional_part);
      if (lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__float_exponent_part_token1);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__rfc3339_date);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__rfc3339_delimiter);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__rfc3339_delimiter);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__rfc3339_time);
      if (lookahead == '.') ADVANCE(44);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__rfc3339_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__rfc3339_offset);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 2, .external_lex_state = 2},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 2, .external_lex_state = 3},
  [4] = {.lex_state = 0, .external_lex_state = 4},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 0, .external_lex_state = 5},
  [7] = {.lex_state = 2, .external_lex_state = 3},
  [8] = {.lex_state = 2, .external_lex_state = 2},
  [9] = {.lex_state = 2, .external_lex_state = 3},
  [10] = {.lex_state = 0, .external_lex_state = 6},
  [11] = {.lex_state = 2, .external_lex_state = 3},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 2, .external_lex_state = 3},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 2, .external_lex_state = 3},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 4},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 0, .external_lex_state = 5},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 2, .external_lex_state = 2},
  [25] = {.lex_state = 2, .external_lex_state = 3},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 2, .external_lex_state = 3},
  [28] = {.lex_state = 2, .external_lex_state = 3},
  [29] = {.lex_state = 2, .external_lex_state = 3},
  [30] = {.lex_state = 2, .external_lex_state = 3},
  [31] = {.lex_state = 2, .external_lex_state = 3},
  [32] = {.lex_state = 2, .external_lex_state = 3},
  [33] = {.lex_state = 2, .external_lex_state = 3},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 2, .external_lex_state = 3},
  [36] = {.lex_state = 2, .external_lex_state = 3},
  [37] = {.lex_state = 2, .external_lex_state = 3},
  [38] = {.lex_state = 5, .external_lex_state = 7},
  [39] = {.lex_state = 2, .external_lex_state = 3},
  [40] = {.lex_state = 0, .external_lex_state = 6},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 0, .external_lex_state = 4},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 0, .external_lex_state = 5},
  [45] = {.lex_state = 0, .external_lex_state = 6},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0, .external_lex_state = 8},
  [49] = {.lex_state = 0, .external_lex_state = 9},
  [50] = {.lex_state = 0, .external_lex_state = 6},
  [51] = {.lex_state = 0, .external_lex_state = 6},
  [52] = {.lex_state = 3, .external_lex_state = 6},
  [53] = {.lex_state = 0, .external_lex_state = 6},
  [54] = {.lex_state = 5, .external_lex_state = 6},
  [55] = {.lex_state = 2, .external_lex_state = 3},
  [56] = {.lex_state = 5, .external_lex_state = 7},
  [57] = {.lex_state = 0, .external_lex_state = 6},
  [58] = {.lex_state = 0, .external_lex_state = 6},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2, .external_lex_state = 3},
  [61] = {.lex_state = 2, .external_lex_state = 3},
  [62] = {.lex_state = 0, .external_lex_state = 6},
  [63] = {.lex_state = 0, .external_lex_state = 8},
  [64] = {.lex_state = 0, .external_lex_state = 6},
  [65] = {.lex_state = 0, .external_lex_state = 9},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5, .external_lex_state = 6},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 0, .external_lex_state = 6},
  [70] = {.lex_state = 0, .external_lex_state = 6},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0, .external_lex_state = 6},
  [73] = {.lex_state = 5, .external_lex_state = 7},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0, .external_lex_state = 6},
  [76] = {.lex_state = 0, .external_lex_state = 8},
  [77] = {.lex_state = 0, .external_lex_state = 6},
  [78] = {.lex_state = 0, .external_lex_state = 9},
  [79] = {.lex_state = 6, .external_lex_state = 6},
  [80] = {.lex_state = 0, .external_lex_state = 6},
  [81] = {.lex_state = 0, .external_lex_state = 6},
  [82] = {.lex_state = 0, .external_lex_state = 6},
  [83] = {.lex_state = 2, .external_lex_state = 3},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0, .external_lex_state = 6},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 5, .external_lex_state = 7},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0, .external_lex_state = 6},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0, .external_lex_state = 6},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0, .external_lex_state = 6},
  [95] = {.lex_state = 5, .external_lex_state = 7},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 5, .external_lex_state = 7},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0, .external_lex_state = 6},
  [102] = {.lex_state = 5, .external_lex_state = 7},
  [103] = {.lex_state = 5, .external_lex_state = 7},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 5, .external_lex_state = 7},
  [108] = {.lex_state = 0, .external_lex_state = 6},
  [109] = {.lex_state = 5, .external_lex_state = 7},
  [110] = {.lex_state = 5, .external_lex_state = 7},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 5, .external_lex_state = 7},
  [113] = {.lex_state = 0, .external_lex_state = 6},
  [114] = {.lex_state = 5, .external_lex_state = 7},
  [115] = {.lex_state = 0, .external_lex_state = 6},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0, .external_lex_state = 6},
  [118] = {.lex_state = 0, .external_lex_state = 6},
  [119] = {.lex_state = 5, .external_lex_state = 7},
  [120] = {.lex_state = 2, .external_lex_state = 3},
  [121] = {.lex_state = 0, .external_lex_state = 6},
  [122] = {.lex_state = 0, .external_lex_state = 6},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0, .external_lex_state = 4},
  [157] = {.lex_state = 0, .external_lex_state = 5},
  [158] = {.lex_state = 0, .external_lex_state = 4},
  [159] = {.lex_state = 0, .external_lex_state = 5},
  [160] = {.lex_state = 5, .external_lex_state = 7},
  [161] = {.lex_state = 0, .external_lex_state = 8},
  [162] = {.lex_state = 0, .external_lex_state = 9},
  [163] = {.lex_state = 2, .external_lex_state = 3},
  [164] = {.lex_state = 5, .external_lex_state = 7},
  [165] = {.lex_state = 0, .external_lex_state = 8},
  [166] = {.lex_state = 0, .external_lex_state = 9},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 5, .external_lex_state = 7},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 5, .external_lex_state = 7},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 5, .external_lex_state = 7},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 5, .external_lex_state = 7},
  [181] = {.lex_state = 5, .external_lex_state = 7},
  [182] = {.lex_state = 5, .external_lex_state = 7},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 5, .external_lex_state = 7},
  [185] = {.lex_state = 5, .external_lex_state = 7},
  [186] = {.lex_state = 5, .external_lex_state = 7},
  [187] = {.lex_state = 0, .external_lex_state = 4},
  [188] = {.lex_state = 0, .external_lex_state = 5},
  [189] = {.lex_state = 0, .external_lex_state = 4},
  [190] = {.lex_state = 0, .external_lex_state = 5},
  [191] = {.lex_state = 0},
};

enum {
  ts_external_token__eof = 0,
  ts_external_token__basic_string_start = 1,
  ts_external_token__basic_string_content = 2,
  ts_external_token__basic_string_end = 3,
  ts_external_token__multiline_basic_string_start = 4,
  ts_external_token__multiline_basic_string_content = 5,
  ts_external_token__multiline_basic_string_end = 6,
  ts_external_token__literal_string_start = 7,
  ts_external_token__literal_string_content = 8,
  ts_external_token__literal_string_end = 9,
  ts_external_token__multiline_literal_string_start = 10,
  ts_external_token__multiline_literal_string_content = 11,
  ts_external_token__multiline_literal_string_end = 12,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__eof] = sym__eof,
  [ts_external_token__basic_string_start] = sym__basic_string_start,
  [ts_external_token__basic_string_content] = sym__basic_string_content,
  [ts_external_token__basic_string_end] = sym__basic_string_end,
  [ts_external_token__multiline_basic_string_start] = sym__multiline_basic_string_start,
  [ts_external_token__multiline_basic_string_content] = sym__multiline_basic_string_content,
  [ts_external_token__multiline_basic_string_end] = sym__multiline_basic_string_end,
  [ts_external_token__literal_string_start] = sym__literal_string_start,
  [ts_external_token__literal_string_content] = sym__literal_string_content,
  [ts_external_token__literal_string_end] = sym__literal_string_end,
  [ts_external_token__multiline_literal_string_start] = sym__multiline_literal_string_start,
  [ts_external_token__multiline_literal_string_content] = sym__multiline_literal_string_content,
  [ts_external_token__multiline_literal_string_end] = sym__multiline_literal_string_end,
};

static bool ts_external_scanner_states[10][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__eof] = true,
    [ts_external_token__multiline_literal_string_start] = true,
    [ts_external_token__literal_string_start] = true,
    [ts_external_token__multiline_basic_string_start] = true,
    [ts_external_token__basic_string_start] = true,
    [ts_external_token__multiline_literal_string_content] = true,
    [ts_external_token__literal_string_content] = true,
    [ts_external_token__multiline_basic_string_content] = true,
    [ts_external_token__basic_string_content] = true,
    [ts_external_token__multiline_literal_string_end] = true,
    [ts_external_token__literal_string_end] = true,
    [ts_external_token__multiline_basic_string_end] = true,
    [ts_external_token__basic_string_end] = true,
  },
  [2] = {
    [ts_external_token__eof] = true,
    [ts_external_token__basic_string_start] = true,
    [ts_external_token__literal_string_start] = true,
  },
  [3] = {
    [ts_external_token__basic_string_start] = true,
    [ts_external_token__literal_string_start] = true,
  },
  [4] = {
    [ts_external_token__literal_string_content] = true,
    [ts_external_token__literal_string_end] = true,
  },
  [5] = {
    [ts_external_token__basic_string_content] = true,
    [ts_external_token__basic_string_end] = true,
  },
  [6] = {
    [ts_external_token__eof] = true,
  },
  [7] = {
    [ts_external_token__multiline_literal_string_start] = true,
    [ts_external_token__literal_string_start] = true,
    [ts_external_token__multiline_basic_string_start] = true,
    [ts_external_token__basic_string_start] = true,
  },
  [8] = {
    [ts_external_token__multiline_literal_string_end] = true,
    [ts_external_token__multiline_literal_string_content] = true,
  },
  [9] = {
    [ts_external_token__multiline_basic_string_content] = true,
    [ts_external_token__multiline_basic_string_end] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__eof] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym__multiline_basic_string_end] = ACTIONS(1),
    [sym__multiline_literal_string_end] = ACTIONS(1),
    [sym__decimal_integer] = ACTIONS(1),
    [sym__bare_key] = ACTIONS(1),
    [sym__octal_integer] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__multiline_literal_string_start] = ACTIONS(1),
    [sym__rfc3339_date] = ACTIONS(1),
    [sym__multiline_basic_string_start] = ACTIONS(1),
    [sym__rfc3339_time] = ACTIONS(1),
    [sym__basic_string_start] = ACTIONS(1),
    [sym__literal_string_start] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym__binary_integer] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__multiline_literal_string_content] = ACTIONS(1),
    [sym__literal_string_content] = ACTIONS(1),
    [aux_sym__float_exponent_part_token1] = ACTIONS(1),
    [sym__rfc3339_offset] = ACTIONS(1),
    [sym__basic_string_content] = ACTIONS(1),
    [sym__multiline_basic_string_content] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__escape_line_ending] = ACTIONS(1),
    [aux_sym_float_token1] = ACTIONS(1),
    [sym__hexadecimal_integer] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [sym__literal_string_end] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym__basic_string_end] = ACTIONS(1),
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
    [sym__literal_string] = STATE(5),
    [sym_root] = STATE(15),
    [sym_table_array] = STATE(12),
    [sym__table_array_header] = STATE(13),
    [sym__pairs] = STATE(16),
    [sym_key] = STATE(14),
    [sym__basic_string] = STATE(5),
    [sym__eof] = ACTIONS(5),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [sym__literal_string_start] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__basic_string_start] = ACTIONS(11),
    [sym__newline] = ACTIONS(13),
    [sym__bare_key] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
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
    [sym__literal_string_start] = ACTIONS(9),
    [sym__bare_key] = ACTIONS(15),
    [sym__basic_string_start] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [aux_sym__literal_string_repeat1] = STATE(19),
    [sym__literal_string_content] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [sym__literal_string_end] = ACTIONS(23),
  },
  [5] = {
    [anon_sym_EQ] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(25),
  },
  [6] = {
    [aux_sym__basic_string_repeat1] = STATE(21),
    [sym_escape_sequence] = ACTIONS(27),
    [sym__basic_string_content] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [sym__basic_string_end] = ACTIONS(29),
  },
  [7] = {
    [sym__quoted_key] = STATE(116),
    [sym__literal_string] = STATE(116),
    [sym_key] = STATE(22),
    [sym__basic_string] = STATE(116),
    [sym_dotted_key] = STATE(22),
    [sym__literal_string_start] = ACTIONS(31),
    [sym__bare_key] = ACTIONS(33),
    [sym__basic_string_start] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
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
    [sym__literal_string] = STATE(5),
    [sym_table_array] = STATE(26),
    [sym__table_array_header] = STATE(13),
    [sym__pairs] = STATE(27),
    [sym_key] = STATE(14),
    [sym__basic_string] = STATE(5),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [sym__eof] = ACTIONS(37),
    [sym__literal_string_start] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__basic_string_start] = ACTIONS(11),
    [sym__newline] = ACTIONS(39),
    [sym__bare_key] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
  },
  [9] = {
    [sym__quoted_key] = STATE(5),
    [sym__literal_string] = STATE(5),
    [sym__inline_pair] = STATE(10),
    [sym__loose_pair] = STATE(29),
    [sym__pairs] = STATE(30),
    [sym_key] = STATE(14),
    [sym__basic_string] = STATE(5),
    [sym_pair] = STATE(29),
    [sym_dotted_key] = STATE(14),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(41),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym__literal_string_start] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__basic_string_start] = ACTIONS(11),
    [sym__newline] = ACTIONS(43),
    [sym__bare_key] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(45),
  },
  [10] = {
    [sym__newline_or_eof] = STATE(31),
    [sym__eof] = ACTIONS(47),
    [sym__newline] = ACTIONS(47),
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
    [sym__literal_string] = STATE(5),
    [aux_sym_root_repeat2] = STATE(34),
    [sym_table_array] = STATE(34),
    [sym__table_array_header] = STATE(13),
    [sym_key] = STATE(14),
    [sym__basic_string] = STATE(5),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym__literal_string_start] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__basic_string_start] = ACTIONS(11),
    [sym__newline] = ACTIONS(49),
    [sym__bare_key] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
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
    [anon_sym_LBRACK] = ACTIONS(17),
  },
  [13] = {
    [sym__quoted_key] = STATE(5),
    [sym__literal_string] = STATE(5),
    [sym__inline_pair] = STATE(10),
    [sym__loose_pair] = STATE(36),
    [sym__pairs] = STATE(37),
    [sym_key] = STATE(14),
    [sym__basic_string] = STATE(5),
    [sym_pair] = STATE(36),
    [sym_dotted_key] = STATE(14),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(51),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym__literal_string_start] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__basic_string_start] = ACTIONS(11),
    [sym__newline] = ACTIONS(53),
    [sym__bare_key] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(55),
  },
  [14] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(59),
  },
  [15] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(61),
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
    [sym__literal_string] = STATE(5),
    [aux_sym_root_repeat2] = STATE(34),
    [sym_table_array] = STATE(34),
    [sym__table_array_header] = STATE(13),
    [sym_key] = STATE(14),
    [sym__basic_string] = STATE(5),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym__literal_string_start] = ACTIONS(9),
    [sym__bare_key] = ACTIONS(15),
    [sym__basic_string_start] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(63),
    [anon_sym_DOT] = ACTIONS(59),
  },
  [18] = {
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(65),
    [anon_sym_DOT] = ACTIONS(65),
  },
  [19] = {
    [aux_sym__literal_string_repeat1] = STATE(42),
    [sym__literal_string_content] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [sym__literal_string_end] = ACTIONS(69),
  },
  [20] = {
    [anon_sym_COMMA] = ACTIONS(71),
    [anon_sym_RBRACE] = ACTIONS(71),
    [anon_sym_EQ] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(71),
    [anon_sym_DOT] = ACTIONS(71),
  },
  [21] = {
    [aux_sym__basic_string_repeat1] = STATE(44),
    [sym_escape_sequence] = ACTIONS(73),
    [sym__basic_string_content] = ACTIONS(73),
    [sym_comment] = ACTIONS(3),
    [sym__basic_string_end] = ACTIONS(75),
  },
  [22] = {
    [anon_sym_DOT] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(79),
  },
  [23] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(81),
  },
  [24] = {
    [aux_sym_root_repeat1] = STATE(24),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(83),
    [sym__eof] = ACTIONS(83),
    [sym__literal_string_start] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [sym__basic_string_start] = ACTIONS(83),
    [sym__newline] = ACTIONS(85),
    [sym__bare_key] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(88),
  },
  [25] = {
    [sym__table_header] = STATE(9),
    [sym__loose_table_header] = STATE(9),
    [sym__inline_pair] = STATE(10),
    [sym__loose_pair] = STATE(33),
    [sym_table] = STATE(46),
    [sym__loose_table_array_header] = STATE(13),
    [sym_pair] = STATE(33),
    [sym_dotted_key] = STATE(14),
    [sym__quoted_key] = STATE(5),
    [sym__literal_string] = STATE(5),
    [aux_sym_root_repeat2] = STATE(46),
    [sym_table_array] = STATE(46),
    [sym__table_array_header] = STATE(13),
    [sym_key] = STATE(14),
    [sym__basic_string] = STATE(5),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym__literal_string_start] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__basic_string_start] = ACTIONS(11),
    [sym__newline] = ACTIONS(49),
    [sym__bare_key] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
  },
  [26] = {
    [sym__table_array_header] = STATE(13),
    [sym__table_header] = STATE(9),
    [sym__loose_table_header] = STATE(9),
    [sym_table] = STATE(46),
    [sym__loose_table_array_header] = STATE(13),
    [aux_sym_root_repeat2] = STATE(46),
    [sym_table_array] = STATE(46),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(17),
  },
  [27] = {
    [sym__table_header] = STATE(9),
    [sym__loose_table_header] = STATE(9),
    [sym__inline_pair] = STATE(10),
    [sym__loose_pair] = STATE(33),
    [sym_table] = STATE(46),
    [sym__loose_table_array_header] = STATE(13),
    [sym_pair] = STATE(33),
    [sym_dotted_key] = STATE(14),
    [sym__quoted_key] = STATE(5),
    [sym__literal_string] = STATE(5),
    [aux_sym_root_repeat2] = STATE(46),
    [sym_table_array] = STATE(46),
    [sym__table_array_header] = STATE(13),
    [sym_key] = STATE(14),
    [sym__basic_string] = STATE(5),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym__literal_string_start] = ACTIONS(9),
    [sym__bare_key] = ACTIONS(15),
    [sym__basic_string_start] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [anon_sym_LBRACK_LBRACK] = ACTIONS(90),
    [ts_builtin_sym_end] = ACTIONS(90),
    [sym__literal_string_start] = ACTIONS(90),
    [sym_comment] = ACTIONS(3),
    [sym__basic_string_start] = ACTIONS(90),
    [sym__newline] = ACTIONS(90),
    [sym__bare_key] = ACTIONS(90),
    [anon_sym_LBRACK] = ACTIONS(92),
  },
  [29] = {
    [sym__quoted_key] = STATE(5),
    [sym__literal_string] = STATE(5),
    [sym__inline_pair] = STATE(10),
    [sym__loose_pair] = STATE(33),
    [sym_key] = STATE(14),
    [sym__basic_string] = STATE(5),
    [sym_pair] = STATE(33),
    [sym_dotted_key] = STATE(14),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(94),
    [ts_builtin_sym_end] = ACTIONS(94),
    [sym__literal_string_start] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__basic_string_start] = ACTIONS(11),
    [sym__newline] = ACTIONS(49),
    [sym__bare_key] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(96),
  },
  [30] = {
    [sym__quoted_key] = STATE(5),
    [sym__literal_string] = STATE(5),
    [sym__inline_pair] = STATE(10),
    [sym__loose_pair] = STATE(33),
    [sym_key] = STATE(14),
    [sym__basic_string] = STATE(5),
    [sym_pair] = STATE(33),
    [sym_dotted_key] = STATE(14),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(94),
    [ts_builtin_sym_end] = ACTIONS(94),
    [sym__literal_string_start] = ACTIONS(9),
    [sym__bare_key] = ACTIONS(15),
    [sym__basic_string_start] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(96),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [anon_sym_LBRACK_LBRACK] = ACTIONS(98),
    [ts_builtin_sym_end] = ACTIONS(98),
    [sym__literal_string_start] = ACTIONS(98),
    [sym_comment] = ACTIONS(3),
    [sym__basic_string_start] = ACTIONS(98),
    [sym__newline] = ACTIONS(98),
    [sym__bare_key] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(100),
  },
  [32] = {
    [anon_sym_LBRACK_LBRACK] = ACTIONS(102),
    [ts_builtin_sym_end] = ACTIONS(102),
    [sym__literal_string_start] = ACTIONS(102),
    [sym_comment] = ACTIONS(3),
    [sym__basic_string_start] = ACTIONS(102),
    [sym__newline] = ACTIONS(102),
    [sym__bare_key] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(104),
  },
  [33] = {
    [anon_sym_LBRACK_LBRACK] = ACTIONS(106),
    [ts_builtin_sym_end] = ACTIONS(106),
    [sym__literal_string_start] = ACTIONS(106),
    [sym_comment] = ACTIONS(3),
    [sym__basic_string_start] = ACTIONS(106),
    [sym__newline] = ACTIONS(49),
    [sym__bare_key] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(108),
  },
  [34] = {
    [sym__table_array_header] = STATE(13),
    [sym__table_header] = STATE(9),
    [sym__loose_table_header] = STATE(9),
    [sym_table] = STATE(47),
    [sym__loose_table_array_header] = STATE(13),
    [aux_sym_root_repeat2] = STATE(47),
    [sym_table_array] = STATE(47),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(17),
  },
  [35] = {
    [anon_sym_LBRACK_LBRACK] = ACTIONS(110),
    [ts_builtin_sym_end] = ACTIONS(110),
    [sym__literal_string_start] = ACTIONS(110),
    [sym_comment] = ACTIONS(3),
    [sym__basic_string_start] = ACTIONS(110),
    [sym__newline] = ACTIONS(110),
    [sym__bare_key] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(112),
  },
  [36] = {
    [sym__quoted_key] = STATE(5),
    [sym__literal_string] = STATE(5),
    [sym__inline_pair] = STATE(10),
    [sym__loose_pair] = STATE(33),
    [sym_key] = STATE(14),
    [sym__basic_string] = STATE(5),
    [sym_pair] = STATE(33),
    [sym_dotted_key] = STATE(14),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(114),
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym__literal_string_start] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__basic_string_start] = ACTIONS(11),
    [sym__newline] = ACTIONS(49),
    [sym__bare_key] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(116),
  },
  [37] = {
    [sym__quoted_key] = STATE(5),
    [sym__literal_string] = STATE(5),
    [sym__inline_pair] = STATE(10),
    [sym__loose_pair] = STATE(33),
    [sym_key] = STATE(14),
    [sym__basic_string] = STATE(5),
    [sym_pair] = STATE(33),
    [sym_dotted_key] = STATE(14),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(114),
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym__literal_string_start] = ACTIONS(9),
    [sym__bare_key] = ACTIONS(15),
    [sym__basic_string_start] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [sym__literal_string] = STATE(57),
    [sym__multiline_literal_string] = STATE(57),
    [sym_local_date_time] = STATE(58),
    [sym_local_date] = STATE(58),
    [sym__inline_value] = STATE(58),
    [sym_string] = STATE(58),
    [sym_integer] = STATE(58),
    [sym_float] = STATE(58),
    [sym_local_time] = STATE(58),
    [sym_array] = STATE(58),
    [sym__basic_string] = STATE(57),
    [sym__multiline_basic_string] = STATE(57),
    [sym_offset_date_time] = STATE(58),
    [sym_inline_table] = STATE(58),
    [sym__binary_integer] = ACTIONS(118),
    [sym_comment] = ACTIONS(3),
    [sym__decimal_integer] = ACTIONS(120),
    [sym__octal_integer] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(122),
    [sym__multiline_literal_string_start] = ACTIONS(124),
    [sym__literal_string_start] = ACTIONS(126),
    [sym__multiline_basic_string_start] = ACTIONS(128),
    [sym__basic_string_start] = ACTIONS(130),
    [sym__rfc3339_date] = ACTIONS(132),
    [aux_sym_float_token1] = ACTIONS(134),
    [sym__hexadecimal_integer] = ACTIONS(118),
    [sym__rfc3339_time] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(138),
    [sym_boolean] = ACTIONS(140),
  },
  [39] = {
    [sym__quoted_key] = STATE(5),
    [sym__literal_string] = STATE(5),
    [sym_key] = STATE(59),
    [sym__basic_string] = STATE(5),
    [sym__literal_string_start] = ACTIONS(9),
    [sym__bare_key] = ACTIONS(15),
    [sym__basic_string_start] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [40] = {
    [sym__newline_or_eof] = STATE(60),
    [sym__eof] = ACTIONS(142),
    [sym__newline] = ACTIONS(142),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [anon_sym_COMMA] = ACTIONS(144),
    [anon_sym_RBRACE] = ACTIONS(144),
    [anon_sym_EQ] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(144),
    [anon_sym_DOT] = ACTIONS(144),
  },
  [42] = {
    [aux_sym__literal_string_repeat1] = STATE(42),
    [sym__literal_string_content] = ACTIONS(146),
    [sym__literal_string_end] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
  },
  [43] = {
    [anon_sym_COMMA] = ACTIONS(151),
    [anon_sym_RBRACE] = ACTIONS(151),
    [anon_sym_EQ] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(151),
    [anon_sym_DOT] = ACTIONS(151),
  },
  [44] = {
    [aux_sym__basic_string_repeat1] = STATE(44),
    [sym_escape_sequence] = ACTIONS(153),
    [sym__basic_string_content] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [sym__basic_string_end] = ACTIONS(156),
  },
  [45] = {
    [sym__newline_or_eof] = STATE(61),
    [sym__eof] = ACTIONS(158),
    [sym__newline] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [sym__table_array_header] = STATE(13),
    [sym__table_header] = STATE(9),
    [sym__loose_table_header] = STATE(9),
    [sym_table] = STATE(47),
    [sym__loose_table_array_header] = STATE(13),
    [aux_sym_root_repeat2] = STATE(47),
    [sym_table_array] = STATE(47),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(160),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(17),
  },
  [47] = {
    [sym__table_array_header] = STATE(13),
    [sym__table_header] = STATE(9),
    [sym__loose_table_header] = STATE(9),
    [sym_table] = STATE(47),
    [sym__loose_table_array_header] = STATE(13),
    [aux_sym_root_repeat2] = STATE(47),
    [sym_table_array] = STATE(47),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(162),
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(167),
  },
  [48] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(63),
    [sym__multiline_literal_string_end] = ACTIONS(170),
    [sym_comment] = ACTIONS(3),
    [sym__multiline_literal_string_content] = ACTIONS(172),
  },
  [49] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(65),
    [sym__multiline_basic_string_content] = ACTIONS(174),
    [sym_escape_sequence] = ACTIONS(174),
    [sym_comment] = ACTIONS(3),
    [sym__escape_line_ending] = ACTIONS(174),
    [sym__multiline_basic_string_end] = ACTIONS(176),
  },
  [50] = {
    [sym__eof] = ACTIONS(178),
    [sym__newline] = ACTIONS(178),
    [sym_comment] = ACTIONS(3),
  },
  [51] = {
    [sym__eof] = ACTIONS(180),
    [sym__newline] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
  },
  [52] = {
    [sym__eof] = ACTIONS(182),
    [sym__newline] = ACTIONS(184),
    [sym__rfc3339_delimiter] = ACTIONS(186),
    [sym_comment] = ACTIONS(188),
  },
  [53] = {
    [sym__eof] = ACTIONS(190),
    [sym__newline] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
  },
  [54] = {
    [sym__float_exponent_part] = STATE(69),
    [sym__eof] = ACTIONS(178),
    [sym__newline] = ACTIONS(178),
    [aux_sym__float_exponent_part_token1] = ACTIONS(192),
    [sym__float_fractional_part] = ACTIONS(194),
    [sym_comment] = ACTIONS(3),
  },
  [55] = {
    [sym__quoted_key] = STATE(5),
    [sym__literal_string] = STATE(5),
    [sym_key] = STATE(191),
    [sym__basic_string] = STATE(5),
    [sym__inline_pair] = STATE(71),
    [sym_dotted_key] = STATE(191),
    [anon_sym_RBRACE] = ACTIONS(196),
    [sym__literal_string_start] = ACTIONS(9),
    [sym__bare_key] = ACTIONS(15),
    [sym__basic_string_start] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [56] = {
    [aux_sym_root_repeat1] = STATE(73),
    [sym__inline_value] = STATE(74),
    [sym_string] = STATE(74),
    [sym_integer] = STATE(74),
    [sym_float] = STATE(74),
    [sym_local_time] = STATE(74),
    [sym_array] = STATE(74),
    [sym__literal_string] = STATE(128),
    [sym__multiline_literal_string] = STATE(128),
    [sym_local_date_time] = STATE(74),
    [sym_local_date] = STATE(74),
    [sym__basic_string] = STATE(128),
    [sym__multiline_basic_string] = STATE(128),
    [sym_offset_date_time] = STATE(74),
    [sym_inline_table] = STATE(74),
    [sym__binary_integer] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(200),
    [sym_comment] = ACTIONS(3),
    [sym__decimal_integer] = ACTIONS(202),
    [sym__octal_integer] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(204),
    [sym__multiline_literal_string_start] = ACTIONS(206),
    [sym__literal_string_start] = ACTIONS(31),
    [sym__multiline_basic_string_start] = ACTIONS(208),
    [sym__basic_string_start] = ACTIONS(35),
    [sym__rfc3339_date] = ACTIONS(210),
    [aux_sym_float_token1] = ACTIONS(212),
    [sym__hexadecimal_integer] = ACTIONS(198),
    [sym__rfc3339_time] = ACTIONS(214),
    [sym__newline] = ACTIONS(216),
    [anon_sym_LBRACE] = ACTIONS(218),
    [sym_boolean] = ACTIONS(220),
  },
  [57] = {
    [sym__eof] = ACTIONS(222),
    [sym__newline] = ACTIONS(222),
    [sym_comment] = ACTIONS(3),
  },
  [58] = {
    [sym__eof] = ACTIONS(224),
    [sym__newline] = ACTIONS(224),
    [sym_comment] = ACTIONS(3),
  },
  [59] = {
    [anon_sym_EQ] = ACTIONS(226),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(226),
    [anon_sym_DOT] = ACTIONS(226),
  },
  [60] = {
    [anon_sym_LBRACK_LBRACK] = ACTIONS(228),
    [ts_builtin_sym_end] = ACTIONS(228),
    [sym__literal_string_start] = ACTIONS(228),
    [sym_comment] = ACTIONS(3),
    [sym__basic_string_start] = ACTIONS(228),
    [sym__newline] = ACTIONS(228),
    [sym__bare_key] = ACTIONS(228),
    [anon_sym_LBRACK] = ACTIONS(230),
  },
  [61] = {
    [anon_sym_LBRACK_LBRACK] = ACTIONS(232),
    [ts_builtin_sym_end] = ACTIONS(232),
    [sym__literal_string_start] = ACTIONS(232),
    [sym_comment] = ACTIONS(3),
    [sym__basic_string_start] = ACTIONS(232),
    [sym__newline] = ACTIONS(232),
    [sym__bare_key] = ACTIONS(232),
    [anon_sym_LBRACK] = ACTIONS(234),
  },
  [62] = {
    [sym__eof] = ACTIONS(236),
    [sym__newline] = ACTIONS(236),
    [sym_comment] = ACTIONS(3),
  },
  [63] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(76),
    [sym__multiline_literal_string_end] = ACTIONS(238),
    [sym_comment] = ACTIONS(3),
    [sym__multiline_literal_string_content] = ACTIONS(240),
  },
  [64] = {
    [sym__eof] = ACTIONS(242),
    [sym__newline] = ACTIONS(242),
    [sym_comment] = ACTIONS(3),
  },
  [65] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(78),
    [sym__multiline_basic_string_content] = ACTIONS(244),
    [sym_escape_sequence] = ACTIONS(244),
    [sym_comment] = ACTIONS(3),
    [sym__escape_line_ending] = ACTIONS(244),
    [sym__multiline_basic_string_end] = ACTIONS(246),
  },
  [66] = {
    [sym_comment] = ACTIONS(3),
    [sym__rfc3339_time] = ACTIONS(248),
  },
  [67] = {
    [sym__float_exponent_part] = STATE(80),
    [sym__eof] = ACTIONS(250),
    [sym__newline] = ACTIONS(250),
    [aux_sym__float_exponent_part_token1] = ACTIONS(192),
    [sym_comment] = ACTIONS(3),
  },
  [68] = {
    [sym_comment] = ACTIONS(3),
    [sym__decimal_integer] = ACTIONS(252),
  },
  [69] = {
    [sym__eof] = ACTIONS(250),
    [sym__newline] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
  },
  [70] = {
    [sym__eof] = ACTIONS(254),
    [sym__newline] = ACTIONS(254),
    [sym_comment] = ACTIONS(3),
  },
  [71] = {
    [aux_sym_inline_table_repeat1] = STATE(84),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(256),
    [anon_sym_COMMA] = ACTIONS(258),
  },
  [72] = {
    [sym__eof] = ACTIONS(260),
    [sym__newline] = ACTIONS(260),
    [sym_comment] = ACTIONS(3),
  },
  [73] = {
    [aux_sym_root_repeat1] = STATE(119),
    [sym__inline_value] = STATE(86),
    [sym_string] = STATE(86),
    [sym_integer] = STATE(86),
    [sym_float] = STATE(86),
    [sym_local_time] = STATE(86),
    [sym_array] = STATE(86),
    [sym__literal_string] = STATE(128),
    [sym__multiline_literal_string] = STATE(128),
    [sym_local_date_time] = STATE(86),
    [sym_local_date] = STATE(86),
    [sym__basic_string] = STATE(128),
    [sym__multiline_basic_string] = STATE(128),
    [sym_offset_date_time] = STATE(86),
    [sym_inline_table] = STATE(86),
    [sym__binary_integer] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(262),
    [sym_comment] = ACTIONS(3),
    [sym__decimal_integer] = ACTIONS(202),
    [sym__octal_integer] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(204),
    [sym__multiline_literal_string_start] = ACTIONS(206),
    [sym__literal_string_start] = ACTIONS(31),
    [sym__multiline_basic_string_start] = ACTIONS(208),
    [sym__basic_string_start] = ACTIONS(35),
    [sym__rfc3339_date] = ACTIONS(210),
    [aux_sym_float_token1] = ACTIONS(212),
    [sym__hexadecimal_integer] = ACTIONS(198),
    [sym__rfc3339_time] = ACTIONS(214),
    [sym__newline] = ACTIONS(264),
    [anon_sym_LBRACE] = ACTIONS(218),
    [sym_boolean] = ACTIONS(266),
  },
  [74] = {
    [aux_sym_root_repeat1] = STATE(88),
    [aux_sym_array_repeat1] = STATE(89),
    [sym__newline] = ACTIONS(268),
    [anon_sym_RBRACK] = ACTIONS(262),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(270),
  },
  [75] = {
    [sym__eof] = ACTIONS(272),
    [sym__newline] = ACTIONS(272),
    [sym_comment] = ACTIONS(3),
  },
  [76] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(76),
    [sym__multiline_literal_string_end] = ACTIONS(274),
    [sym_comment] = ACTIONS(3),
    [sym__multiline_literal_string_content] = ACTIONS(276),
  },
  [77] = {
    [sym__eof] = ACTIONS(279),
    [sym__newline] = ACTIONS(279),
    [sym_comment] = ACTIONS(3),
  },
  [78] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(78),
    [sym_escape_sequence] = ACTIONS(281),
    [sym__multiline_basic_string_content] = ACTIONS(281),
    [sym_comment] = ACTIONS(3),
    [sym__escape_line_ending] = ACTIONS(281),
    [sym__multiline_basic_string_end] = ACTIONS(284),
  },
  [79] = {
    [sym__eof] = ACTIONS(286),
    [sym__newline] = ACTIONS(286),
    [sym__rfc3339_offset] = ACTIONS(288),
    [sym_comment] = ACTIONS(3),
  },
  [80] = {
    [sym__eof] = ACTIONS(290),
    [sym__newline] = ACTIONS(290),
    [sym_comment] = ACTIONS(3),
  },
  [81] = {
    [sym__eof] = ACTIONS(292),
    [sym__newline] = ACTIONS(292),
    [sym_comment] = ACTIONS(3),
  },
  [82] = {
    [sym__eof] = ACTIONS(294),
    [sym__newline] = ACTIONS(294),
    [sym_comment] = ACTIONS(3),
  },
  [83] = {
    [sym__quoted_key] = STATE(5),
    [sym__literal_string] = STATE(5),
    [sym_key] = STATE(191),
    [sym__basic_string] = STATE(5),
    [sym__inline_pair] = STATE(91),
    [sym_dotted_key] = STATE(191),
    [sym__literal_string_start] = ACTIONS(9),
    [sym__bare_key] = ACTIONS(15),
    [sym__basic_string_start] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [84] = {
    [aux_sym_inline_table_repeat1] = STATE(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(296),
    [anon_sym_COMMA] = ACTIONS(258),
  },
  [85] = {
    [sym__eof] = ACTIONS(298),
    [sym__newline] = ACTIONS(298),
    [sym_comment] = ACTIONS(3),
  },
  [86] = {
    [aux_sym_root_repeat1] = STATE(96),
    [aux_sym_array_repeat1] = STATE(97),
    [sym__newline] = ACTIONS(300),
    [anon_sym_RBRACK] = ACTIONS(302),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(304),
  },
  [87] = {
    [aux_sym_root_repeat1] = STATE(98),
    [sym__inline_value] = STATE(99),
    [sym_string] = STATE(99),
    [sym_integer] = STATE(99),
    [sym_float] = STATE(99),
    [sym_local_time] = STATE(99),
    [sym_array] = STATE(99),
    [sym__literal_string] = STATE(128),
    [sym__multiline_literal_string] = STATE(128),
    [sym_local_date_time] = STATE(99),
    [sym_local_date] = STATE(99),
    [sym__basic_string] = STATE(128),
    [sym__multiline_basic_string] = STATE(128),
    [sym_offset_date_time] = STATE(99),
    [sym_inline_table] = STATE(99),
    [sym__binary_integer] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(302),
    [sym_comment] = ACTIONS(3),
    [sym__decimal_integer] = ACTIONS(202),
    [sym__octal_integer] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(204),
    [sym__multiline_literal_string_start] = ACTIONS(206),
    [sym__literal_string_start] = ACTIONS(31),
    [sym__multiline_basic_string_start] = ACTIONS(208),
    [sym__basic_string_start] = ACTIONS(35),
    [sym__rfc3339_date] = ACTIONS(210),
    [aux_sym_float_token1] = ACTIONS(212),
    [sym__hexadecimal_integer] = ACTIONS(198),
    [sym__rfc3339_time] = ACTIONS(214),
    [sym__newline] = ACTIONS(306),
    [anon_sym_LBRACE] = ACTIONS(218),
    [sym_boolean] = ACTIONS(308),
  },
  [88] = {
    [aux_sym_root_repeat1] = STATE(153),
    [aux_sym_array_repeat1] = STATE(97),
    [sym__newline] = ACTIONS(310),
    [anon_sym_RBRACK] = ACTIONS(302),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(304),
  },
  [89] = {
    [aux_sym_array_repeat1] = STATE(100),
    [anon_sym_COMMA] = ACTIONS(304),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(302),
  },
  [90] = {
    [sym__eof] = ACTIONS(312),
    [sym__newline] = ACTIONS(312),
    [sym_comment] = ACTIONS(3),
  },
  [91] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(314),
    [anon_sym_COMMA] = ACTIONS(314),
  },
  [92] = {
    [sym__eof] = ACTIONS(316),
    [sym__newline] = ACTIONS(316),
    [sym_comment] = ACTIONS(3),
  },
  [93] = {
    [aux_sym_inline_table_repeat1] = STATE(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(318),
    [anon_sym_COMMA] = ACTIONS(320),
  },
  [94] = {
    [sym__eof] = ACTIONS(323),
    [sym__newline] = ACTIONS(323),
    [sym_comment] = ACTIONS(3),
  },
  [95] = {
    [aux_sym_root_repeat1] = STATE(102),
    [sym__inline_value] = STATE(99),
    [sym_string] = STATE(99),
    [sym_integer] = STATE(99),
    [sym_float] = STATE(99),
    [sym_local_time] = STATE(99),
    [sym_array] = STATE(99),
    [sym__literal_string] = STATE(128),
    [sym__multiline_literal_string] = STATE(128),
    [sym_local_date_time] = STATE(99),
    [sym_local_date] = STATE(99),
    [sym__basic_string] = STATE(128),
    [sym__multiline_basic_string] = STATE(128),
    [sym_offset_date_time] = STATE(99),
    [sym_inline_table] = STATE(99),
    [sym__binary_integer] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(325),
    [sym_comment] = ACTIONS(3),
    [sym__decimal_integer] = ACTIONS(202),
    [sym__octal_integer] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(204),
    [sym__multiline_literal_string_start] = ACTIONS(206),
    [sym__literal_string_start] = ACTIONS(31),
    [sym__multiline_basic_string_start] = ACTIONS(208),
    [sym__basic_string_start] = ACTIONS(35),
    [sym__rfc3339_date] = ACTIONS(210),
    [aux_sym_float_token1] = ACTIONS(212),
    [sym__hexadecimal_integer] = ACTIONS(198),
    [sym__rfc3339_time] = ACTIONS(214),
    [sym__newline] = ACTIONS(327),
    [anon_sym_LBRACE] = ACTIONS(218),
    [sym_boolean] = ACTIONS(308),
  },
  [96] = {
    [aux_sym_root_repeat1] = STATE(153),
    [aux_sym_array_repeat1] = STATE(104),
    [sym__newline] = ACTIONS(310),
    [anon_sym_RBRACK] = ACTIONS(325),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(329),
  },
  [97] = {
    [aux_sym_array_repeat1] = STATE(100),
    [anon_sym_COMMA] = ACTIONS(329),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(325),
  },
  [98] = {
    [aux_sym_root_repeat1] = STATE(119),
    [sym__inline_value] = STATE(105),
    [sym_string] = STATE(105),
    [sym_integer] = STATE(105),
    [sym_float] = STATE(105),
    [sym_local_time] = STATE(105),
    [sym_array] = STATE(105),
    [sym__literal_string] = STATE(128),
    [sym__multiline_literal_string] = STATE(128),
    [sym_local_date_time] = STATE(105),
    [sym_local_date] = STATE(105),
    [sym__basic_string] = STATE(128),
    [sym__multiline_basic_string] = STATE(128),
    [sym_offset_date_time] = STATE(105),
    [sym_inline_table] = STATE(105),
    [sym__binary_integer] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(325),
    [sym_comment] = ACTIONS(3),
    [sym__decimal_integer] = ACTIONS(202),
    [sym__octal_integer] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(204),
    [sym__multiline_literal_string_start] = ACTIONS(206),
    [sym__literal_string_start] = ACTIONS(31),
    [sym__multiline_basic_string_start] = ACTIONS(208),
    [sym__basic_string_start] = ACTIONS(35),
    [sym__rfc3339_date] = ACTIONS(210),
    [aux_sym_float_token1] = ACTIONS(212),
    [sym__hexadecimal_integer] = ACTIONS(198),
    [sym__rfc3339_time] = ACTIONS(214),
    [sym__newline] = ACTIONS(264),
    [anon_sym_LBRACE] = ACTIONS(218),
    [sym_boolean] = ACTIONS(331),
  },
  [99] = {
    [aux_sym_root_repeat1] = STATE(106),
    [sym__newline] = ACTIONS(333),
    [anon_sym_RBRACK] = ACTIONS(335),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(335),
  },
  [100] = {
    [aux_sym_array_repeat1] = STATE(100),
    [anon_sym_COMMA] = ACTIONS(337),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(335),
  },
  [101] = {
    [sym__eof] = ACTIONS(340),
    [sym__newline] = ACTIONS(340),
    [sym_comment] = ACTIONS(3),
  },
  [102] = {
    [aux_sym_root_repeat1] = STATE(119),
    [sym__inline_value] = STATE(105),
    [sym_string] = STATE(105),
    [sym_integer] = STATE(105),
    [sym_float] = STATE(105),
    [sym_local_time] = STATE(105),
    [sym_array] = STATE(105),
    [sym__literal_string] = STATE(128),
    [sym__multiline_literal_string] = STATE(128),
    [sym_local_date_time] = STATE(105),
    [sym_local_date] = STATE(105),
    [sym__basic_string] = STATE(128),
    [sym__multiline_basic_string] = STATE(128),
    [sym_offset_date_time] = STATE(105),
    [sym_inline_table] = STATE(105),
    [sym__binary_integer] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(342),
    [sym_comment] = ACTIONS(3),
    [sym__decimal_integer] = ACTIONS(202),
    [sym__octal_integer] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(204),
    [sym__multiline_literal_string_start] = ACTIONS(206),
    [sym__literal_string_start] = ACTIONS(31),
    [sym__multiline_basic_string_start] = ACTIONS(208),
    [sym__basic_string_start] = ACTIONS(35),
    [sym__rfc3339_date] = ACTIONS(210),
    [aux_sym_float_token1] = ACTIONS(212),
    [sym__hexadecimal_integer] = ACTIONS(198),
    [sym__rfc3339_time] = ACTIONS(214),
    [sym__newline] = ACTIONS(264),
    [anon_sym_LBRACE] = ACTIONS(218),
    [sym_boolean] = ACTIONS(331),
  },
  [103] = {
    [aux_sym_root_repeat1] = STATE(109),
    [sym__inline_value] = STATE(99),
    [sym_string] = STATE(99),
    [sym_integer] = STATE(99),
    [sym_float] = STATE(99),
    [sym_local_time] = STATE(99),
    [sym_array] = STATE(99),
    [sym__literal_string] = STATE(128),
    [sym__multiline_literal_string] = STATE(128),
    [sym_local_date_time] = STATE(99),
    [sym_local_date] = STATE(99),
    [sym__basic_string] = STATE(128),
    [sym__multiline_basic_string] = STATE(128),
    [sym_offset_date_time] = STATE(99),
    [sym_inline_table] = STATE(99),
    [sym__binary_integer] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(342),
    [sym_comment] = ACTIONS(3),
    [sym__decimal_integer] = ACTIONS(202),
    [sym__octal_integer] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(204),
    [sym__multiline_literal_string_start] = ACTIONS(206),
    [sym__literal_string_start] = ACTIONS(31),
    [sym__multiline_basic_string_start] = ACTIONS(208),
    [sym__basic_string_start] = ACTIONS(35),
    [sym__rfc3339_date] = ACTIONS(210),
    [aux_sym_float_token1] = ACTIONS(212),
    [sym__hexadecimal_integer] = ACTIONS(198),
    [sym__rfc3339_time] = ACTIONS(214),
    [sym__newline] = ACTIONS(344),
    [anon_sym_LBRACE] = ACTIONS(218),
    [sym_boolean] = ACTIONS(308),
  },
  [104] = {
    [aux_sym_array_repeat1] = STATE(100),
    [anon_sym_COMMA] = ACTIONS(346),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(342),
  },
  [105] = {
    [aux_sym_root_repeat1] = STATE(111),
    [sym__newline] = ACTIONS(348),
    [anon_sym_RBRACK] = ACTIONS(350),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(350),
  },
  [106] = {
    [aux_sym_root_repeat1] = STATE(153),
    [sym__newline] = ACTIONS(310),
    [anon_sym_RBRACK] = ACTIONS(350),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(350),
  },
  [107] = {
    [aux_sym_root_repeat1] = STATE(112),
    [sym__inline_value] = STATE(99),
    [sym_string] = STATE(99),
    [sym_integer] = STATE(99),
    [sym_float] = STATE(99),
    [sym_local_time] = STATE(99),
    [sym_array] = STATE(99),
    [sym__literal_string] = STATE(128),
    [sym__multiline_literal_string] = STATE(128),
    [sym_local_date_time] = STATE(99),
    [sym_local_date] = STATE(99),
    [sym__basic_string] = STATE(128),
    [sym__multiline_basic_string] = STATE(128),
    [sym_offset_date_time] = STATE(99),
    [sym_inline_table] = STATE(99),
    [sym__binary_integer] = ACTIONS(198),
    [sym_comment] = ACTIONS(3),
    [sym__decimal_integer] = ACTIONS(202),
    [sym__octal_integer] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(204),
    [sym__multiline_literal_string_start] = ACTIONS(206),
    [sym__literal_string_start] = ACTIONS(31),
    [sym__multiline_basic_string_start] = ACTIONS(208),
    [sym__basic_string_start] = ACTIONS(35),
    [sym__rfc3339_date] = ACTIONS(210),
    [aux_sym_float_token1] = ACTIONS(212),
    [sym__hexadecimal_integer] = ACTIONS(198),
    [sym__rfc3339_time] = ACTIONS(214),
    [sym__newline] = ACTIONS(352),
    [anon_sym_LBRACE] = ACTIONS(218),
    [sym_boolean] = ACTIONS(308),
  },
  [108] = {
    [sym__eof] = ACTIONS(354),
    [sym__newline] = ACTIONS(354),
    [sym_comment] = ACTIONS(3),
  },
  [109] = {
    [aux_sym_root_repeat1] = STATE(119),
    [sym__inline_value] = STATE(105),
    [sym_string] = STATE(105),
    [sym_integer] = STATE(105),
    [sym_float] = STATE(105),
    [sym_local_time] = STATE(105),
    [sym_array] = STATE(105),
    [sym__literal_string] = STATE(128),
    [sym__multiline_literal_string] = STATE(128),
    [sym_local_date_time] = STATE(105),
    [sym_local_date] = STATE(105),
    [sym__basic_string] = STATE(128),
    [sym__multiline_basic_string] = STATE(128),
    [sym_offset_date_time] = STATE(105),
    [sym_inline_table] = STATE(105),
    [sym__binary_integer] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(356),
    [sym_comment] = ACTIONS(3),
    [sym__decimal_integer] = ACTIONS(202),
    [sym__octal_integer] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(204),
    [sym__multiline_literal_string_start] = ACTIONS(206),
    [sym__literal_string_start] = ACTIONS(31),
    [sym__multiline_basic_string_start] = ACTIONS(208),
    [sym__basic_string_start] = ACTIONS(35),
    [sym__rfc3339_date] = ACTIONS(210),
    [aux_sym_float_token1] = ACTIONS(212),
    [sym__hexadecimal_integer] = ACTIONS(198),
    [sym__rfc3339_time] = ACTIONS(214),
    [sym__newline] = ACTIONS(264),
    [anon_sym_LBRACE] = ACTIONS(218),
    [sym_boolean] = ACTIONS(331),
  },
  [110] = {
    [aux_sym_root_repeat1] = STATE(114),
    [sym__inline_value] = STATE(99),
    [sym_string] = STATE(99),
    [sym_integer] = STATE(99),
    [sym_float] = STATE(99),
    [sym_local_time] = STATE(99),
    [sym_array] = STATE(99),
    [sym__literal_string] = STATE(128),
    [sym__multiline_literal_string] = STATE(128),
    [sym_local_date_time] = STATE(99),
    [sym_local_date] = STATE(99),
    [sym__basic_string] = STATE(128),
    [sym__multiline_basic_string] = STATE(128),
    [sym_offset_date_time] = STATE(99),
    [sym_inline_table] = STATE(99),
    [sym__binary_integer] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(356),
    [sym_comment] = ACTIONS(3),
    [sym__decimal_integer] = ACTIONS(202),
    [sym__octal_integer] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(204),
    [sym__multiline_literal_string_start] = ACTIONS(206),
    [sym__literal_string_start] = ACTIONS(31),
    [sym__multiline_basic_string_start] = ACTIONS(208),
    [sym__basic_string_start] = ACTIONS(35),
    [sym__rfc3339_date] = ACTIONS(210),
    [aux_sym_float_token1] = ACTIONS(212),
    [sym__hexadecimal_integer] = ACTIONS(198),
    [sym__rfc3339_time] = ACTIONS(214),
    [sym__newline] = ACTIONS(358),
    [anon_sym_LBRACE] = ACTIONS(218),
    [sym_boolean] = ACTIONS(308),
  },
  [111] = {
    [aux_sym_root_repeat1] = STATE(153),
    [sym__newline] = ACTIONS(310),
    [anon_sym_RBRACK] = ACTIONS(360),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(360),
  },
  [112] = {
    [aux_sym_root_repeat1] = STATE(119),
    [sym__inline_value] = STATE(105),
    [sym_string] = STATE(105),
    [sym_integer] = STATE(105),
    [sym_float] = STATE(105),
    [sym_local_time] = STATE(105),
    [sym_array] = STATE(105),
    [sym__literal_string] = STATE(128),
    [sym__multiline_literal_string] = STATE(128),
    [sym_local_date_time] = STATE(105),
    [sym_local_date] = STATE(105),
    [sym__basic_string] = STATE(128),
    [sym__multiline_basic_string] = STATE(128),
    [sym_offset_date_time] = STATE(105),
    [sym_inline_table] = STATE(105),
    [sym__binary_integer] = ACTIONS(198),
    [sym_comment] = ACTIONS(3),
    [sym__decimal_integer] = ACTIONS(202),
    [sym__octal_integer] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(204),
    [sym__multiline_literal_string_start] = ACTIONS(206),
    [sym__literal_string_start] = ACTIONS(31),
    [sym__multiline_basic_string_start] = ACTIONS(208),
    [sym__basic_string_start] = ACTIONS(35),
    [sym__rfc3339_date] = ACTIONS(210),
    [aux_sym_float_token1] = ACTIONS(212),
    [sym__hexadecimal_integer] = ACTIONS(198),
    [sym__rfc3339_time] = ACTIONS(214),
    [sym__newline] = ACTIONS(264),
    [anon_sym_LBRACE] = ACTIONS(218),
    [sym_boolean] = ACTIONS(331),
  },
  [113] = {
    [sym__eof] = ACTIONS(362),
    [sym__newline] = ACTIONS(362),
    [sym_comment] = ACTIONS(3),
  },
  [114] = {
    [aux_sym_root_repeat1] = STATE(119),
    [sym__inline_value] = STATE(105),
    [sym_string] = STATE(105),
    [sym_integer] = STATE(105),
    [sym_float] = STATE(105),
    [sym_local_time] = STATE(105),
    [sym_array] = STATE(105),
    [sym__literal_string] = STATE(128),
    [sym__multiline_literal_string] = STATE(128),
    [sym_local_date_time] = STATE(105),
    [sym_local_date] = STATE(105),
    [sym__basic_string] = STATE(128),
    [sym__multiline_basic_string] = STATE(128),
    [sym_offset_date_time] = STATE(105),
    [sym_inline_table] = STATE(105),
    [sym__binary_integer] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(364),
    [sym_comment] = ACTIONS(3),
    [sym__decimal_integer] = ACTIONS(202),
    [sym__octal_integer] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(204),
    [sym__multiline_literal_string_start] = ACTIONS(206),
    [sym__literal_string_start] = ACTIONS(31),
    [sym__multiline_basic_string_start] = ACTIONS(208),
    [sym__basic_string_start] = ACTIONS(35),
    [sym__rfc3339_date] = ACTIONS(210),
    [aux_sym_float_token1] = ACTIONS(212),
    [sym__hexadecimal_integer] = ACTIONS(198),
    [sym__rfc3339_time] = ACTIONS(214),
    [sym__newline] = ACTIONS(264),
    [anon_sym_LBRACE] = ACTIONS(218),
    [sym_boolean] = ACTIONS(331),
  },
  [115] = {
    [sym__eof] = ACTIONS(366),
    [sym__newline] = ACTIONS(366),
    [sym_comment] = ACTIONS(3),
  },
  [116] = {
    [anon_sym_DOT] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(25),
  },
  [117] = {
    [sym__eof] = ACTIONS(65),
    [sym__newline] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
  },
  [118] = {
    [sym__eof] = ACTIONS(71),
    [sym__newline] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [119] = {
    [aux_sym_root_repeat1] = STATE(119),
    [sym__binary_integer] = ACTIONS(83),
    [anon_sym_RBRACK] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [sym__decimal_integer] = ACTIONS(88),
    [sym__octal_integer] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(83),
    [sym__multiline_literal_string_start] = ACTIONS(83),
    [sym__rfc3339_date] = ACTIONS(83),
    [sym__multiline_basic_string_start] = ACTIONS(83),
    [sym__rfc3339_time] = ACTIONS(83),
    [sym__basic_string_start] = ACTIONS(83),
    [aux_sym_float_token1] = ACTIONS(83),
    [sym__hexadecimal_integer] = ACTIONS(83),
    [sym__newline] = ACTIONS(368),
    [sym__literal_string_start] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [sym_boolean] = ACTIONS(83),
  },
  [120] = {
    [sym__quoted_key] = STATE(116),
    [sym__literal_string] = STATE(116),
    [sym_key] = STATE(130),
    [sym__basic_string] = STATE(116),
    [sym__literal_string_start] = ACTIONS(31),
    [sym__bare_key] = ACTIONS(33),
    [sym__basic_string_start] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
  [121] = {
    [sym__eof] = ACTIONS(144),
    [sym__newline] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
  },
  [122] = {
    [sym__eof] = ACTIONS(151),
    [sym__newline] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
  },
  [123] = {
    [sym__newline] = ACTIONS(178),
    [anon_sym_RBRACE] = ACTIONS(178),
    [anon_sym_RBRACK] = ACTIONS(178),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(178),
  },
  [124] = {
    [sym__newline] = ACTIONS(180),
    [anon_sym_RBRACE] = ACTIONS(180),
    [anon_sym_RBRACK] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(180),
  },
  [125] = {
    [sym__rfc3339_delimiter] = ACTIONS(371),
    [sym__newline] = ACTIONS(184),
    [anon_sym_RBRACE] = ACTIONS(184),
    [anon_sym_RBRACK] = ACTIONS(184),
    [sym_comment] = ACTIONS(188),
    [anon_sym_COMMA] = ACTIONS(184),
  },
  [126] = {
    [sym__newline] = ACTIONS(190),
    [anon_sym_RBRACE] = ACTIONS(190),
    [anon_sym_RBRACK] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(190),
  },
  [127] = {
    [sym__float_exponent_part] = STATE(134),
    [anon_sym_RBRACE] = ACTIONS(178),
    [anon_sym_RBRACK] = ACTIONS(178),
    [sym__float_fractional_part] = ACTIONS(373),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(178),
    [aux_sym__float_exponent_part_token1] = ACTIONS(375),
    [anon_sym_COMMA] = ACTIONS(178),
  },
  [128] = {
    [sym__newline] = ACTIONS(222),
    [anon_sym_RBRACE] = ACTIONS(222),
    [anon_sym_RBRACK] = ACTIONS(222),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(222),
  },
  [129] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(224),
    [anon_sym_COMMA] = ACTIONS(224),
  },
  [130] = {
    [anon_sym_DOT] = ACTIONS(226),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(226),
  },
  [131] = {
    [sym__newline] = ACTIONS(236),
    [anon_sym_RBRACE] = ACTIONS(236),
    [anon_sym_RBRACK] = ACTIONS(236),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(236),
  },
  [132] = {
    [sym__newline] = ACTIONS(242),
    [anon_sym_RBRACE] = ACTIONS(242),
    [anon_sym_RBRACK] = ACTIONS(242),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(242),
  },
  [133] = {
    [sym__float_exponent_part] = STATE(140),
    [sym__newline] = ACTIONS(250),
    [aux_sym__float_exponent_part_token1] = ACTIONS(375),
    [anon_sym_RBRACK] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(250),
    [anon_sym_COMMA] = ACTIONS(250),
  },
  [134] = {
    [sym__newline] = ACTIONS(250),
    [anon_sym_RBRACE] = ACTIONS(250),
    [anon_sym_RBRACK] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(250),
  },
  [135] = {
    [sym__newline] = ACTIONS(254),
    [anon_sym_RBRACE] = ACTIONS(254),
    [anon_sym_RBRACK] = ACTIONS(254),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(254),
  },
  [136] = {
    [sym__newline] = ACTIONS(260),
    [anon_sym_RBRACE] = ACTIONS(260),
    [anon_sym_RBRACK] = ACTIONS(260),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(260),
  },
  [137] = {
    [sym__newline] = ACTIONS(272),
    [anon_sym_RBRACE] = ACTIONS(272),
    [anon_sym_RBRACK] = ACTIONS(272),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(272),
  },
  [138] = {
    [sym__newline] = ACTIONS(279),
    [anon_sym_RBRACE] = ACTIONS(279),
    [anon_sym_RBRACK] = ACTIONS(279),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(279),
  },
  [139] = {
    [sym__newline] = ACTIONS(286),
    [sym__rfc3339_offset] = ACTIONS(377),
    [anon_sym_RBRACK] = ACTIONS(286),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(286),
    [anon_sym_COMMA] = ACTIONS(286),
  },
  [140] = {
    [sym__newline] = ACTIONS(290),
    [anon_sym_RBRACE] = ACTIONS(290),
    [anon_sym_RBRACK] = ACTIONS(290),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(290),
  },
  [141] = {
    [sym__newline] = ACTIONS(292),
    [anon_sym_RBRACE] = ACTIONS(292),
    [anon_sym_RBRACK] = ACTIONS(292),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(292),
  },
  [142] = {
    [sym__newline] = ACTIONS(294),
    [anon_sym_RBRACE] = ACTIONS(294),
    [anon_sym_RBRACK] = ACTIONS(294),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(294),
  },
  [143] = {
    [sym__newline] = ACTIONS(298),
    [anon_sym_RBRACE] = ACTIONS(298),
    [anon_sym_RBRACK] = ACTIONS(298),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(298),
  },
  [144] = {
    [sym__newline] = ACTIONS(312),
    [anon_sym_RBRACE] = ACTIONS(312),
    [anon_sym_RBRACK] = ACTIONS(312),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(312),
  },
  [145] = {
    [sym__newline] = ACTIONS(316),
    [anon_sym_RBRACE] = ACTIONS(316),
    [anon_sym_RBRACK] = ACTIONS(316),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(316),
  },
  [146] = {
    [sym__newline] = ACTIONS(323),
    [anon_sym_RBRACE] = ACTIONS(323),
    [anon_sym_RBRACK] = ACTIONS(323),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(323),
  },
  [147] = {
    [sym__newline] = ACTIONS(340),
    [anon_sym_RBRACE] = ACTIONS(340),
    [anon_sym_RBRACK] = ACTIONS(340),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(340),
  },
  [148] = {
    [sym__newline] = ACTIONS(354),
    [anon_sym_RBRACE] = ACTIONS(354),
    [anon_sym_RBRACK] = ACTIONS(354),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(354),
  },
  [149] = {
    [sym__newline] = ACTIONS(362),
    [anon_sym_RBRACE] = ACTIONS(362),
    [anon_sym_RBRACK] = ACTIONS(362),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(362),
  },
  [150] = {
    [sym__newline] = ACTIONS(366),
    [anon_sym_RBRACE] = ACTIONS(366),
    [anon_sym_RBRACK] = ACTIONS(366),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(366),
  },
  [151] = {
    [anon_sym_COMMA] = ACTIONS(65),
    [sym__newline] = ACTIONS(65),
    [anon_sym_RBRACK] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(65),
  },
  [152] = {
    [anon_sym_COMMA] = ACTIONS(71),
    [sym__newline] = ACTIONS(71),
    [anon_sym_RBRACK] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(71),
  },
  [153] = {
    [aux_sym_root_repeat1] = STATE(153),
    [sym__newline] = ACTIONS(379),
    [anon_sym_RBRACK] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(83),
  },
  [154] = {
    [anon_sym_COMMA] = ACTIONS(144),
    [sym__newline] = ACTIONS(144),
    [anon_sym_RBRACK] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(144),
  },
  [155] = {
    [anon_sym_COMMA] = ACTIONS(151),
    [sym__newline] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(151),
  },
  [156] = {
    [aux_sym__literal_string_repeat1] = STATE(158),
    [sym__literal_string_content] = ACTIONS(382),
    [sym_comment] = ACTIONS(3),
    [sym__literal_string_end] = ACTIONS(384),
  },
  [157] = {
    [aux_sym__basic_string_repeat1] = STATE(159),
    [sym_escape_sequence] = ACTIONS(386),
    [sym__basic_string_content] = ACTIONS(386),
    [sym_comment] = ACTIONS(3),
    [sym__basic_string_end] = ACTIONS(388),
  },
  [158] = {
    [aux_sym__literal_string_repeat1] = STATE(42),
    [sym__literal_string_content] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [sym__literal_string_end] = ACTIONS(390),
  },
  [159] = {
    [aux_sym__basic_string_repeat1] = STATE(44),
    [sym_escape_sequence] = ACTIONS(73),
    [sym__basic_string_content] = ACTIONS(73),
    [sym_comment] = ACTIONS(3),
    [sym__basic_string_end] = ACTIONS(392),
  },
  [160] = {
    [sym__literal_string] = STATE(128),
    [sym__multiline_literal_string] = STATE(128),
    [sym_local_date_time] = STATE(129),
    [sym_local_date] = STATE(129),
    [sym__inline_value] = STATE(129),
    [sym_string] = STATE(129),
    [sym_integer] = STATE(129),
    [sym_float] = STATE(129),
    [sym_local_time] = STATE(129),
    [sym_array] = STATE(129),
    [sym__basic_string] = STATE(128),
    [sym__multiline_basic_string] = STATE(128),
    [sym_offset_date_time] = STATE(129),
    [sym_inline_table] = STATE(129),
    [sym__binary_integer] = ACTIONS(198),
    [sym_comment] = ACTIONS(3),
    [sym__decimal_integer] = ACTIONS(202),
    [sym__octal_integer] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(204),
    [sym__multiline_literal_string_start] = ACTIONS(206),
    [sym__literal_string_start] = ACTIONS(9),
    [sym__multiline_basic_string_start] = ACTIONS(208),
    [sym__basic_string_start] = ACTIONS(11),
    [sym__rfc3339_date] = ACTIONS(210),
    [aux_sym_float_token1] = ACTIONS(212),
    [sym__hexadecimal_integer] = ACTIONS(198),
    [sym__rfc3339_time] = ACTIONS(214),
    [anon_sym_LBRACE] = ACTIONS(218),
    [sym_boolean] = ACTIONS(394),
  },
  [161] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(165),
    [sym__multiline_literal_string_end] = ACTIONS(396),
    [sym_comment] = ACTIONS(3),
    [sym__multiline_literal_string_content] = ACTIONS(398),
  },
  [162] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(166),
    [sym_escape_sequence] = ACTIONS(400),
    [sym_comment] = ACTIONS(3),
    [sym__escape_line_ending] = ACTIONS(400),
    [sym__multiline_basic_string_content] = ACTIONS(400),
    [sym__multiline_basic_string_end] = ACTIONS(402),
  },
  [163] = {
    [sym__quoted_key] = STATE(5),
    [sym__literal_string] = STATE(5),
    [sym__inline_pair] = STATE(169),
    [sym_key] = STATE(191),
    [sym__basic_string] = STATE(5),
    [sym_dotted_key] = STATE(191),
    [anon_sym_RBRACE] = ACTIONS(404),
    [sym__literal_string_start] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__basic_string_start] = ACTIONS(11),
    [sym__bare_key] = ACTIONS(15),
  },
  [164] = {
    [aux_sym_root_repeat1] = STATE(170),
    [sym__inline_value] = STATE(171),
    [sym_string] = STATE(171),
    [sym_integer] = STATE(171),
    [sym_float] = STATE(171),
    [sym_local_time] = STATE(171),
    [sym_array] = STATE(171),
    [sym__literal_string] = STATE(128),
    [sym__multiline_literal_string] = STATE(128),
    [sym_local_date_time] = STATE(171),
    [sym_local_date] = STATE(171),
    [sym__basic_string] = STATE(128),
    [sym__multiline_basic_string] = STATE(128),
    [sym_offset_date_time] = STATE(171),
    [sym_inline_table] = STATE(171),
    [sym__binary_integer] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(406),
    [sym_comment] = ACTIONS(3),
    [sym__decimal_integer] = ACTIONS(202),
    [sym__octal_integer] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(204),
    [sym__multiline_literal_string_start] = ACTIONS(206),
    [sym__literal_string_start] = ACTIONS(31),
    [sym__multiline_basic_string_start] = ACTIONS(208),
    [sym__basic_string_start] = ACTIONS(35),
    [sym__rfc3339_date] = ACTIONS(210),
    [aux_sym_float_token1] = ACTIONS(212),
    [sym__hexadecimal_integer] = ACTIONS(198),
    [sym__rfc3339_time] = ACTIONS(214),
    [sym__newline] = ACTIONS(408),
    [anon_sym_LBRACE] = ACTIONS(218),
    [sym_boolean] = ACTIONS(410),
  },
  [165] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(76),
    [sym__multiline_literal_string_end] = ACTIONS(412),
    [sym_comment] = ACTIONS(3),
    [sym__multiline_literal_string_content] = ACTIONS(240),
  },
  [166] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(78),
    [sym_escape_sequence] = ACTIONS(244),
    [sym_comment] = ACTIONS(3),
    [sym__escape_line_ending] = ACTIONS(244),
    [sym__multiline_basic_string_content] = ACTIONS(244),
    [sym__multiline_basic_string_end] = ACTIONS(414),
  },
  [167] = {
    [sym_comment] = ACTIONS(3),
    [sym__rfc3339_time] = ACTIONS(416),
  },
  [168] = {
    [sym_comment] = ACTIONS(3),
    [sym__decimal_integer] = ACTIONS(418),
  },
  [169] = {
    [aux_sym_inline_table_repeat1] = STATE(172),
    [anon_sym_RBRACE] = ACTIONS(420),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(258),
  },
  [170] = {
    [aux_sym_root_repeat1] = STATE(119),
    [sym__inline_value] = STATE(173),
    [sym_string] = STATE(173),
    [sym_integer] = STATE(173),
    [sym_float] = STATE(173),
    [sym_local_time] = STATE(173),
    [sym_array] = STATE(173),
    [sym__literal_string] = STATE(128),
    [sym__multiline_literal_string] = STATE(128),
    [sym_local_date_time] = STATE(173),
    [sym_local_date] = STATE(173),
    [sym__basic_string] = STATE(128),
    [sym__multiline_basic_string] = STATE(128),
    [sym_offset_date_time] = STATE(173),
    [sym_inline_table] = STATE(173),
    [sym__binary_integer] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(422),
    [sym_comment] = ACTIONS(3),
    [sym__decimal_integer] = ACTIONS(202),
    [sym__octal_integer] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(204),
    [sym__multiline_literal_string_start] = ACTIONS(206),
    [sym__literal_string_start] = ACTIONS(31),
    [sym__multiline_basic_string_start] = ACTIONS(208),
    [sym__basic_string_start] = ACTIONS(35),
    [sym__rfc3339_date] = ACTIONS(210),
    [aux_sym_float_token1] = ACTIONS(212),
    [sym__hexadecimal_integer] = ACTIONS(198),
    [sym__rfc3339_time] = ACTIONS(214),
    [sym__newline] = ACTIONS(264),
    [anon_sym_LBRACE] = ACTIONS(218),
    [sym_boolean] = ACTIONS(424),
  },
  [171] = {
    [aux_sym_root_repeat1] = STATE(175),
    [aux_sym_array_repeat1] = STATE(176),
    [sym__newline] = ACTIONS(426),
    [anon_sym_RBRACK] = ACTIONS(422),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(428),
  },
  [172] = {
    [aux_sym_inline_table_repeat1] = STATE(93),
    [anon_sym_RBRACE] = ACTIONS(430),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(258),
  },
  [173] = {
    [aux_sym_root_repeat1] = STATE(178),
    [aux_sym_array_repeat1] = STATE(179),
    [sym__newline] = ACTIONS(432),
    [anon_sym_RBRACK] = ACTIONS(434),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(436),
  },
  [174] = {
    [aux_sym_root_repeat1] = STATE(180),
    [sym__inline_value] = STATE(99),
    [sym_string] = STATE(99),
    [sym_integer] = STATE(99),
    [sym_float] = STATE(99),
    [sym_local_time] = STATE(99),
    [sym_array] = STATE(99),
    [sym__literal_string] = STATE(128),
    [sym__multiline_literal_string] = STATE(128),
    [sym_local_date_time] = STATE(99),
    [sym_local_date] = STATE(99),
    [sym__basic_string] = STATE(128),
    [sym__multiline_basic_string] = STATE(128),
    [sym_offset_date_time] = STATE(99),
    [sym_inline_table] = STATE(99),
    [sym__binary_integer] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(434),
    [sym_comment] = ACTIONS(3),
    [sym__decimal_integer] = ACTIONS(202),
    [sym__octal_integer] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(204),
    [sym__multiline_literal_string_start] = ACTIONS(206),
    [sym__literal_string_start] = ACTIONS(31),
    [sym__multiline_basic_string_start] = ACTIONS(208),
    [sym__basic_string_start] = ACTIONS(35),
    [sym__rfc3339_date] = ACTIONS(210),
    [aux_sym_float_token1] = ACTIONS(212),
    [sym__hexadecimal_integer] = ACTIONS(198),
    [sym__rfc3339_time] = ACTIONS(214),
    [sym__newline] = ACTIONS(438),
    [anon_sym_LBRACE] = ACTIONS(218),
    [sym_boolean] = ACTIONS(308),
  },
  [175] = {
    [aux_sym_root_repeat1] = STATE(153),
    [aux_sym_array_repeat1] = STATE(179),
    [sym__newline] = ACTIONS(310),
    [anon_sym_RBRACK] = ACTIONS(434),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(436),
  },
  [176] = {
    [aux_sym_array_repeat1] = STATE(100),
    [anon_sym_RBRACK] = ACTIONS(434),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(436),
  },
  [177] = {
    [aux_sym_root_repeat1] = STATE(181),
    [sym__inline_value] = STATE(99),
    [sym_string] = STATE(99),
    [sym_integer] = STATE(99),
    [sym_float] = STATE(99),
    [sym_local_time] = STATE(99),
    [sym_array] = STATE(99),
    [sym__literal_string] = STATE(128),
    [sym__multiline_literal_string] = STATE(128),
    [sym_local_date_time] = STATE(99),
    [sym_local_date] = STATE(99),
    [sym__basic_string] = STATE(128),
    [sym__multiline_basic_string] = STATE(128),
    [sym_offset_date_time] = STATE(99),
    [sym_inline_table] = STATE(99),
    [sym__binary_integer] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(440),
    [sym_comment] = ACTIONS(3),
    [sym__decimal_integer] = ACTIONS(202),
    [sym__octal_integer] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(204),
    [sym__multiline_literal_string_start] = ACTIONS(206),
    [sym__literal_string_start] = ACTIONS(31),
    [sym__multiline_basic_string_start] = ACTIONS(208),
    [sym__basic_string_start] = ACTIONS(35),
    [sym__rfc3339_date] = ACTIONS(210),
    [aux_sym_float_token1] = ACTIONS(212),
    [sym__hexadecimal_integer] = ACTIONS(198),
    [sym__rfc3339_time] = ACTIONS(214),
    [sym__newline] = ACTIONS(442),
    [anon_sym_LBRACE] = ACTIONS(218),
    [sym_boolean] = ACTIONS(308),
  },
  [178] = {
    [aux_sym_root_repeat1] = STATE(153),
    [aux_sym_array_repeat1] = STATE(183),
    [sym__newline] = ACTIONS(310),
    [anon_sym_RBRACK] = ACTIONS(440),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(444),
  },
  [179] = {
    [aux_sym_array_repeat1] = STATE(100),
    [anon_sym_RBRACK] = ACTIONS(440),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(444),
  },
  [180] = {
    [aux_sym_root_repeat1] = STATE(119),
    [sym__inline_value] = STATE(105),
    [sym_string] = STATE(105),
    [sym_integer] = STATE(105),
    [sym_float] = STATE(105),
    [sym_local_time] = STATE(105),
    [sym_array] = STATE(105),
    [sym__literal_string] = STATE(128),
    [sym__multiline_literal_string] = STATE(128),
    [sym_local_date_time] = STATE(105),
    [sym_local_date] = STATE(105),
    [sym__basic_string] = STATE(128),
    [sym__multiline_basic_string] = STATE(128),
    [sym_offset_date_time] = STATE(105),
    [sym_inline_table] = STATE(105),
    [sym__binary_integer] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(440),
    [sym_comment] = ACTIONS(3),
    [sym__decimal_integer] = ACTIONS(202),
    [sym__octal_integer] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(204),
    [sym__multiline_literal_string_start] = ACTIONS(206),
    [sym__literal_string_start] = ACTIONS(31),
    [sym__multiline_basic_string_start] = ACTIONS(208),
    [sym__basic_string_start] = ACTIONS(35),
    [sym__rfc3339_date] = ACTIONS(210),
    [aux_sym_float_token1] = ACTIONS(212),
    [sym__hexadecimal_integer] = ACTIONS(198),
    [sym__rfc3339_time] = ACTIONS(214),
    [sym__newline] = ACTIONS(264),
    [anon_sym_LBRACE] = ACTIONS(218),
    [sym_boolean] = ACTIONS(331),
  },
  [181] = {
    [aux_sym_root_repeat1] = STATE(119),
    [sym__inline_value] = STATE(105),
    [sym_string] = STATE(105),
    [sym_integer] = STATE(105),
    [sym_float] = STATE(105),
    [sym_local_time] = STATE(105),
    [sym_array] = STATE(105),
    [sym__literal_string] = STATE(128),
    [sym__multiline_literal_string] = STATE(128),
    [sym_local_date_time] = STATE(105),
    [sym_local_date] = STATE(105),
    [sym__basic_string] = STATE(128),
    [sym__multiline_basic_string] = STATE(128),
    [sym_offset_date_time] = STATE(105),
    [sym_inline_table] = STATE(105),
    [sym__binary_integer] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(446),
    [sym_comment] = ACTIONS(3),
    [sym__decimal_integer] = ACTIONS(202),
    [sym__octal_integer] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(204),
    [sym__multiline_literal_string_start] = ACTIONS(206),
    [sym__literal_string_start] = ACTIONS(31),
    [sym__multiline_basic_string_start] = ACTIONS(208),
    [sym__basic_string_start] = ACTIONS(35),
    [sym__rfc3339_date] = ACTIONS(210),
    [aux_sym_float_token1] = ACTIONS(212),
    [sym__hexadecimal_integer] = ACTIONS(198),
    [sym__rfc3339_time] = ACTIONS(214),
    [sym__newline] = ACTIONS(264),
    [anon_sym_LBRACE] = ACTIONS(218),
    [sym_boolean] = ACTIONS(331),
  },
  [182] = {
    [aux_sym_root_repeat1] = STATE(184),
    [sym__inline_value] = STATE(99),
    [sym_string] = STATE(99),
    [sym_integer] = STATE(99),
    [sym_float] = STATE(99),
    [sym_local_time] = STATE(99),
    [sym_array] = STATE(99),
    [sym__literal_string] = STATE(128),
    [sym__multiline_literal_string] = STATE(128),
    [sym_local_date_time] = STATE(99),
    [sym_local_date] = STATE(99),
    [sym__basic_string] = STATE(128),
    [sym__multiline_basic_string] = STATE(128),
    [sym_offset_date_time] = STATE(99),
    [sym_inline_table] = STATE(99),
    [sym__binary_integer] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(446),
    [sym_comment] = ACTIONS(3),
    [sym__decimal_integer] = ACTIONS(202),
    [sym__octal_integer] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(204),
    [sym__multiline_literal_string_start] = ACTIONS(206),
    [sym__literal_string_start] = ACTIONS(31),
    [sym__multiline_basic_string_start] = ACTIONS(208),
    [sym__basic_string_start] = ACTIONS(35),
    [sym__rfc3339_date] = ACTIONS(210),
    [aux_sym_float_token1] = ACTIONS(212),
    [sym__hexadecimal_integer] = ACTIONS(198),
    [sym__rfc3339_time] = ACTIONS(214),
    [sym__newline] = ACTIONS(448),
    [anon_sym_LBRACE] = ACTIONS(218),
    [sym_boolean] = ACTIONS(308),
  },
  [183] = {
    [aux_sym_array_repeat1] = STATE(100),
    [anon_sym_RBRACK] = ACTIONS(446),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(450),
  },
  [184] = {
    [aux_sym_root_repeat1] = STATE(119),
    [sym__inline_value] = STATE(105),
    [sym_string] = STATE(105),
    [sym_integer] = STATE(105),
    [sym_float] = STATE(105),
    [sym_local_time] = STATE(105),
    [sym_array] = STATE(105),
    [sym__literal_string] = STATE(128),
    [sym__multiline_literal_string] = STATE(128),
    [sym_local_date_time] = STATE(105),
    [sym_local_date] = STATE(105),
    [sym__basic_string] = STATE(128),
    [sym__multiline_basic_string] = STATE(128),
    [sym_offset_date_time] = STATE(105),
    [sym_inline_table] = STATE(105),
    [sym__binary_integer] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(452),
    [sym_comment] = ACTIONS(3),
    [sym__decimal_integer] = ACTIONS(202),
    [sym__octal_integer] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(204),
    [sym__multiline_literal_string_start] = ACTIONS(206),
    [sym__literal_string_start] = ACTIONS(31),
    [sym__multiline_basic_string_start] = ACTIONS(208),
    [sym__basic_string_start] = ACTIONS(35),
    [sym__rfc3339_date] = ACTIONS(210),
    [aux_sym_float_token1] = ACTIONS(212),
    [sym__hexadecimal_integer] = ACTIONS(198),
    [sym__rfc3339_time] = ACTIONS(214),
    [sym__newline] = ACTIONS(264),
    [anon_sym_LBRACE] = ACTIONS(218),
    [sym_boolean] = ACTIONS(331),
  },
  [185] = {
    [aux_sym_root_repeat1] = STATE(186),
    [sym__inline_value] = STATE(99),
    [sym_string] = STATE(99),
    [sym_integer] = STATE(99),
    [sym_float] = STATE(99),
    [sym_local_time] = STATE(99),
    [sym_array] = STATE(99),
    [sym__literal_string] = STATE(128),
    [sym__multiline_literal_string] = STATE(128),
    [sym_local_date_time] = STATE(99),
    [sym_local_date] = STATE(99),
    [sym__basic_string] = STATE(128),
    [sym__multiline_basic_string] = STATE(128),
    [sym_offset_date_time] = STATE(99),
    [sym_inline_table] = STATE(99),
    [sym__binary_integer] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(452),
    [sym_comment] = ACTIONS(3),
    [sym__decimal_integer] = ACTIONS(202),
    [sym__octal_integer] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(204),
    [sym__multiline_literal_string_start] = ACTIONS(206),
    [sym__literal_string_start] = ACTIONS(31),
    [sym__multiline_basic_string_start] = ACTIONS(208),
    [sym__basic_string_start] = ACTIONS(35),
    [sym__rfc3339_date] = ACTIONS(210),
    [aux_sym_float_token1] = ACTIONS(212),
    [sym__hexadecimal_integer] = ACTIONS(198),
    [sym__rfc3339_time] = ACTIONS(214),
    [sym__newline] = ACTIONS(454),
    [anon_sym_LBRACE] = ACTIONS(218),
    [sym_boolean] = ACTIONS(308),
  },
  [186] = {
    [aux_sym_root_repeat1] = STATE(119),
    [sym__inline_value] = STATE(105),
    [sym_string] = STATE(105),
    [sym_integer] = STATE(105),
    [sym_float] = STATE(105),
    [sym_local_time] = STATE(105),
    [sym_array] = STATE(105),
    [sym__literal_string] = STATE(128),
    [sym__multiline_literal_string] = STATE(128),
    [sym_local_date_time] = STATE(105),
    [sym_local_date] = STATE(105),
    [sym__basic_string] = STATE(128),
    [sym__multiline_basic_string] = STATE(128),
    [sym_offset_date_time] = STATE(105),
    [sym_inline_table] = STATE(105),
    [sym__binary_integer] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(456),
    [sym_comment] = ACTIONS(3),
    [sym__decimal_integer] = ACTIONS(202),
    [sym__octal_integer] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(204),
    [sym__multiline_literal_string_start] = ACTIONS(206),
    [sym__literal_string_start] = ACTIONS(31),
    [sym__multiline_basic_string_start] = ACTIONS(208),
    [sym__basic_string_start] = ACTIONS(35),
    [sym__rfc3339_date] = ACTIONS(210),
    [aux_sym_float_token1] = ACTIONS(212),
    [sym__hexadecimal_integer] = ACTIONS(198),
    [sym__rfc3339_time] = ACTIONS(214),
    [sym__newline] = ACTIONS(264),
    [anon_sym_LBRACE] = ACTIONS(218),
    [sym_boolean] = ACTIONS(331),
  },
  [187] = {
    [aux_sym__literal_string_repeat1] = STATE(189),
    [sym__literal_string_content] = ACTIONS(458),
    [sym__literal_string_end] = ACTIONS(460),
    [sym_comment] = ACTIONS(3),
  },
  [188] = {
    [aux_sym__basic_string_repeat1] = STATE(190),
    [sym_escape_sequence] = ACTIONS(462),
    [sym__basic_string_content] = ACTIONS(462),
    [sym_comment] = ACTIONS(3),
    [sym__basic_string_end] = ACTIONS(464),
  },
  [189] = {
    [aux_sym__literal_string_repeat1] = STATE(42),
    [sym__literal_string_content] = ACTIONS(67),
    [sym__literal_string_end] = ACTIONS(466),
    [sym_comment] = ACTIONS(3),
  },
  [190] = {
    [aux_sym__basic_string_repeat1] = STATE(44),
    [sym_escape_sequence] = ACTIONS(73),
    [sym__basic_string_content] = ACTIONS(73),
    [sym_comment] = ACTIONS(3),
    [sym__basic_string_end] = ACTIONS(468),
  },
  [191] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(470),
    [anon_sym_DOT] = ACTIONS(59),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(6),
  [13] = {.count = 1, .reusable = true}, SHIFT(8),
  [15] = {.count = 1, .reusable = true}, SHIFT(5),
  [17] = {.count = 1, .reusable = false}, SHIFT(7),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_root, 1),
  [21] = {.count = 1, .reusable = true}, SHIFT(19),
  [23] = {.count = 1, .reusable = true}, SHIFT(18),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_key, 1),
  [27] = {.count = 1, .reusable = true}, SHIFT(21),
  [29] = {.count = 1, .reusable = true}, SHIFT(20),
  [31] = {.count = 1, .reusable = true}, SHIFT(156),
  [33] = {.count = 1, .reusable = true}, SHIFT(116),
  [35] = {.count = 1, .reusable = true}, SHIFT(157),
  [37] = {.count = 1, .reusable = true}, SHIFT(23),
  [39] = {.count = 1, .reusable = true}, SHIFT(24),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_table, 1),
  [43] = {.count = 1, .reusable = true}, SHIFT(28),
  [45] = {.count = 1, .reusable = false}, REDUCE(sym_table, 1),
  [47] = {.count = 1, .reusable = true}, SHIFT(31),
  [49] = {.count = 1, .reusable = true}, SHIFT(32),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_table_array, 1),
  [53] = {.count = 1, .reusable = true}, SHIFT(35),
  [55] = {.count = 1, .reusable = false}, REDUCE(sym_table_array, 1),
  [57] = {.count = 1, .reusable = true}, SHIFT(38),
  [59] = {.count = 1, .reusable = true}, SHIFT(39),
  [61] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [63] = {.count = 1, .reusable = true}, SHIFT(40),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym__literal_string, 2),
  [67] = {.count = 1, .reusable = true}, SHIFT(42),
  [69] = {.count = 1, .reusable = true}, SHIFT(41),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym__basic_string, 2),
  [73] = {.count = 1, .reusable = true}, SHIFT(44),
  [75] = {.count = 1, .reusable = true}, SHIFT(43),
  [77] = {.count = 1, .reusable = true}, SHIFT(120),
  [79] = {.count = 1, .reusable = true}, SHIFT(45),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_root, 2),
  [83] = {.count = 1, .reusable = true}, REDUCE(aux_sym_root_repeat1, 2),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(24),
  [88] = {.count = 1, .reusable = false}, REDUCE(aux_sym_root_repeat1, 2),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym__loose_table_header, 2),
  [92] = {.count = 1, .reusable = false}, REDUCE(sym__loose_table_header, 2),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_table, 2),
  [96] = {.count = 1, .reusable = false}, REDUCE(sym_table, 2),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_pair, 2),
  [100] = {.count = 1, .reusable = false}, REDUCE(sym_pair, 2),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym__loose_pair, 2),
  [104] = {.count = 1, .reusable = false}, REDUCE(sym__loose_pair, 2),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym__pairs, 2),
  [108] = {.count = 1, .reusable = false}, REDUCE(sym__pairs, 2),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym__loose_table_array_header, 2),
  [112] = {.count = 1, .reusable = false}, REDUCE(sym__loose_table_array_header, 2),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_table_array, 2),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym_table_array, 2),
  [118] = {.count = 1, .reusable = true}, SHIFT(50),
  [120] = {.count = 1, .reusable = false}, SHIFT(54),
  [122] = {.count = 1, .reusable = true}, SHIFT(56),
  [124] = {.count = 1, .reusable = true}, SHIFT(48),
  [126] = {.count = 1, .reusable = true}, SHIFT(187),
  [128] = {.count = 1, .reusable = true}, SHIFT(49),
  [130] = {.count = 1, .reusable = true}, SHIFT(188),
  [132] = {.count = 1, .reusable = true}, SHIFT(52),
  [134] = {.count = 1, .reusable = true}, SHIFT(51),
  [136] = {.count = 1, .reusable = true}, SHIFT(53),
  [138] = {.count = 1, .reusable = true}, SHIFT(55),
  [140] = {.count = 1, .reusable = true}, SHIFT(58),
  [142] = {.count = 1, .reusable = true}, SHIFT(60),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym__literal_string, 3),
  [146] = {.count = 2, .reusable = true}, REDUCE(aux_sym__literal_string_repeat1, 2), SHIFT_REPEAT(42),
  [149] = {.count = 1, .reusable = true}, REDUCE(aux_sym__literal_string_repeat1, 2),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym__basic_string, 3),
  [153] = {.count = 2, .reusable = true}, REDUCE(aux_sym__basic_string_repeat1, 2), SHIFT_REPEAT(44),
  [156] = {.count = 1, .reusable = true}, REDUCE(aux_sym__basic_string_repeat1, 2),
  [158] = {.count = 1, .reusable = true}, SHIFT(61),
  [160] = {.count = 1, .reusable = true}, REDUCE(sym_root, 3),
  [162] = {.count = 2, .reusable = true}, REDUCE(aux_sym_root_repeat2, 2), SHIFT_REPEAT(3),
  [165] = {.count = 1, .reusable = true}, REDUCE(aux_sym_root_repeat2, 2),
  [167] = {.count = 2, .reusable = false}, REDUCE(aux_sym_root_repeat2, 2), SHIFT_REPEAT(7),
  [170] = {.count = 1, .reusable = true}, SHIFT(62),
  [172] = {.count = 1, .reusable = true}, SHIFT(63),
  [174] = {.count = 1, .reusable = true}, SHIFT(65),
  [176] = {.count = 1, .reusable = true}, SHIFT(64),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_integer, 1),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_float, 1),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_local_date, 1),
  [184] = {.count = 1, .reusable = false}, REDUCE(sym_local_date, 1),
  [186] = {.count = 1, .reusable = true}, SHIFT(66),
  [188] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_local_time, 1),
  [192] = {.count = 1, .reusable = true}, SHIFT(68),
  [194] = {.count = 1, .reusable = true}, SHIFT(67),
  [196] = {.count = 1, .reusable = true}, SHIFT(70),
  [198] = {.count = 1, .reusable = true}, SHIFT(123),
  [200] = {.count = 1, .reusable = true}, SHIFT(72),
  [202] = {.count = 1, .reusable = false}, SHIFT(127),
  [204] = {.count = 1, .reusable = true}, SHIFT(164),
  [206] = {.count = 1, .reusable = true}, SHIFT(161),
  [208] = {.count = 1, .reusable = true}, SHIFT(162),
  [210] = {.count = 1, .reusable = true}, SHIFT(125),
  [212] = {.count = 1, .reusable = true}, SHIFT(124),
  [214] = {.count = 1, .reusable = true}, SHIFT(126),
  [216] = {.count = 1, .reusable = true}, SHIFT(73),
  [218] = {.count = 1, .reusable = true}, SHIFT(163),
  [220] = {.count = 1, .reusable = true}, SHIFT(74),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym__inline_pair, 3),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym_dotted_key, 3),
  [228] = {.count = 1, .reusable = true}, REDUCE(sym__table_array_header, 4),
  [230] = {.count = 1, .reusable = false}, REDUCE(sym__table_array_header, 4),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym__table_header, 4),
  [234] = {.count = 1, .reusable = false}, REDUCE(sym__table_header, 4),
  [236] = {.count = 1, .reusable = true}, REDUCE(sym__multiline_literal_string, 2),
  [238] = {.count = 1, .reusable = true}, SHIFT(75),
  [240] = {.count = 1, .reusable = true}, SHIFT(76),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym__multiline_basic_string, 2),
  [244] = {.count = 1, .reusable = true}, SHIFT(78),
  [246] = {.count = 1, .reusable = true}, SHIFT(77),
  [248] = {.count = 1, .reusable = true}, SHIFT(79),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym_float, 2),
  [252] = {.count = 1, .reusable = true}, SHIFT(81),
  [254] = {.count = 1, .reusable = true}, REDUCE(sym_inline_table, 2),
  [256] = {.count = 1, .reusable = true}, SHIFT(82),
  [258] = {.count = 1, .reusable = true}, SHIFT(83),
  [260] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [262] = {.count = 1, .reusable = true}, SHIFT(85),
  [264] = {.count = 1, .reusable = true}, SHIFT(119),
  [266] = {.count = 1, .reusable = true}, SHIFT(86),
  [268] = {.count = 1, .reusable = true}, SHIFT(88),
  [270] = {.count = 1, .reusable = true}, SHIFT(87),
  [272] = {.count = 1, .reusable = true}, REDUCE(sym__multiline_literal_string, 3),
  [274] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2),
  [276] = {.count = 2, .reusable = true}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2), SHIFT_REPEAT(76),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym__multiline_basic_string, 3),
  [281] = {.count = 2, .reusable = true}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2), SHIFT_REPEAT(78),
  [284] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym_local_date_time, 3),
  [288] = {.count = 1, .reusable = true}, SHIFT(90),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym_float, 3),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym__float_exponent_part, 2),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_inline_table, 3, .production_id = 1),
  [296] = {.count = 1, .reusable = true}, SHIFT(92),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [300] = {.count = 1, .reusable = true}, SHIFT(96),
  [302] = {.count = 1, .reusable = true}, SHIFT(94),
  [304] = {.count = 1, .reusable = true}, SHIFT(95),
  [306] = {.count = 1, .reusable = true}, SHIFT(98),
  [308] = {.count = 1, .reusable = true}, SHIFT(99),
  [310] = {.count = 1, .reusable = true}, SHIFT(153),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_offset_date_time, 4),
  [314] = {.count = 1, .reusable = true}, REDUCE(aux_sym_inline_table_repeat1, 2, .production_id = 1),
  [316] = {.count = 1, .reusable = true}, REDUCE(sym_inline_table, 4, .production_id = 1),
  [318] = {.count = 1, .reusable = true}, REDUCE(aux_sym_inline_table_repeat1, 2),
  [320] = {.count = 2, .reusable = true}, REDUCE(aux_sym_inline_table_repeat1, 2), SHIFT_REPEAT(83),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_array, 4),
  [325] = {.count = 1, .reusable = true}, SHIFT(101),
  [327] = {.count = 1, .reusable = true}, SHIFT(102),
  [329] = {.count = 1, .reusable = true}, SHIFT(103),
  [331] = {.count = 1, .reusable = true}, SHIFT(105),
  [333] = {.count = 1, .reusable = true}, SHIFT(106),
  [335] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2),
  [337] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(107),
  [340] = {.count = 1, .reusable = true}, REDUCE(sym_array, 5),
  [342] = {.count = 1, .reusable = true}, SHIFT(108),
  [344] = {.count = 1, .reusable = true}, SHIFT(109),
  [346] = {.count = 1, .reusable = true}, SHIFT(110),
  [348] = {.count = 1, .reusable = true}, SHIFT(111),
  [350] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat1, 3),
  [352] = {.count = 1, .reusable = true}, SHIFT(112),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_array, 6),
  [356] = {.count = 1, .reusable = true}, SHIFT(113),
  [358] = {.count = 1, .reusable = true}, SHIFT(114),
  [360] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat1, 4),
  [362] = {.count = 1, .reusable = true}, REDUCE(sym_array, 7),
  [364] = {.count = 1, .reusable = true}, SHIFT(115),
  [366] = {.count = 1, .reusable = true}, REDUCE(sym_array, 8),
  [368] = {.count = 2, .reusable = true}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(119),
  [371] = {.count = 1, .reusable = true}, SHIFT(167),
  [373] = {.count = 1, .reusable = true}, SHIFT(133),
  [375] = {.count = 1, .reusable = true}, SHIFT(168),
  [377] = {.count = 1, .reusable = true}, SHIFT(144),
  [379] = {.count = 2, .reusable = true}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(153),
  [382] = {.count = 1, .reusable = true}, SHIFT(158),
  [384] = {.count = 1, .reusable = true}, SHIFT(151),
  [386] = {.count = 1, .reusable = true}, SHIFT(159),
  [388] = {.count = 1, .reusable = true}, SHIFT(152),
  [390] = {.count = 1, .reusable = true}, SHIFT(154),
  [392] = {.count = 1, .reusable = true}, SHIFT(155),
  [394] = {.count = 1, .reusable = true}, SHIFT(129),
  [396] = {.count = 1, .reusable = true}, SHIFT(131),
  [398] = {.count = 1, .reusable = true}, SHIFT(165),
  [400] = {.count = 1, .reusable = true}, SHIFT(166),
  [402] = {.count = 1, .reusable = true}, SHIFT(132),
  [404] = {.count = 1, .reusable = true}, SHIFT(135),
  [406] = {.count = 1, .reusable = true}, SHIFT(136),
  [408] = {.count = 1, .reusable = true}, SHIFT(170),
  [410] = {.count = 1, .reusable = true}, SHIFT(171),
  [412] = {.count = 1, .reusable = true}, SHIFT(137),
  [414] = {.count = 1, .reusable = true}, SHIFT(138),
  [416] = {.count = 1, .reusable = true}, SHIFT(139),
  [418] = {.count = 1, .reusable = true}, SHIFT(141),
  [420] = {.count = 1, .reusable = true}, SHIFT(142),
  [422] = {.count = 1, .reusable = true}, SHIFT(143),
  [424] = {.count = 1, .reusable = true}, SHIFT(173),
  [426] = {.count = 1, .reusable = true}, SHIFT(175),
  [428] = {.count = 1, .reusable = true}, SHIFT(174),
  [430] = {.count = 1, .reusable = true}, SHIFT(145),
  [432] = {.count = 1, .reusable = true}, SHIFT(178),
  [434] = {.count = 1, .reusable = true}, SHIFT(146),
  [436] = {.count = 1, .reusable = true}, SHIFT(177),
  [438] = {.count = 1, .reusable = true}, SHIFT(180),
  [440] = {.count = 1, .reusable = true}, SHIFT(147),
  [442] = {.count = 1, .reusable = true}, SHIFT(181),
  [444] = {.count = 1, .reusable = true}, SHIFT(182),
  [446] = {.count = 1, .reusable = true}, SHIFT(148),
  [448] = {.count = 1, .reusable = true}, SHIFT(184),
  [450] = {.count = 1, .reusable = true}, SHIFT(185),
  [452] = {.count = 1, .reusable = true}, SHIFT(149),
  [454] = {.count = 1, .reusable = true}, SHIFT(186),
  [456] = {.count = 1, .reusable = true}, SHIFT(150),
  [458] = {.count = 1, .reusable = true}, SHIFT(189),
  [460] = {.count = 1, .reusable = true}, SHIFT(117),
  [462] = {.count = 1, .reusable = true}, SHIFT(190),
  [464] = {.count = 1, .reusable = true}, SHIFT(118),
  [466] = {.count = 1, .reusable = true}, SHIFT(121),
  [468] = {.count = 1, .reusable = true}, SHIFT(122),
  [470] = {.count = 1, .reusable = true}, SHIFT(160),
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
