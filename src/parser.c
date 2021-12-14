#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 229
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 90
#define ALIAS_COUNT 5
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 19

enum {
  aux_sym_source_file_token1 = 1,
  anon_sym_if = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_erlang = 5,
  anon_sym_javascript = 6,
  anon_sym_import = 7,
  anon_sym_DOT = 8,
  anon_sym_COMMA = 9,
  anon_sym_as = 10,
  anon_sym_SLASH = 11,
  anon_sym_pub = 12,
  anon_sym_const = 13,
  anon_sym_EQ = 14,
  anon_sym_POUND = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_LBRACK = 18,
  anon_sym_RBRACK = 19,
  anon_sym_LT_LT = 20,
  anon_sym_GT_GT = 21,
  anon_sym_COLON = 22,
  anon_sym_DASH = 23,
  anon_sym_size = 24,
  sym_string = 25,
  sym_float = 26,
  sym_integer = 27,
  anon_sym_unit = 28,
  anon_sym_binary = 29,
  anon_sym_bytes = 30,
  anon_sym_int = 31,
  anon_sym_float = 32,
  anon_sym_bit_string = 33,
  anon_sym_bits = 34,
  anon_sym_utf8 = 35,
  anon_sym_utf16 = 36,
  anon_sym_utf32 = 37,
  anon_sym_utf8_codepoint = 38,
  anon_sym_utf16_codepoint = 39,
  anon_sym_utf32_codepoint = 40,
  anon_sym_signed = 41,
  anon_sym_unsigned = 42,
  anon_sym_big = 43,
  anon_sym_little = 44,
  anon_sym_native = 45,
  sym__discard_name = 46,
  sym__name = 47,
  sym__upname = 48,
  sym_source_file = 49,
  sym__statement = 50,
  sym_target_group = 51,
  sym_target = 52,
  sym_import = 53,
  sym_module = 54,
  sym_unqualified_import = 55,
  sym_alias = 56,
  sym_public_constant = 57,
  sym_constant = 58,
  sym__constant = 59,
  sym__constant_value = 60,
  sym__constant_tuple = 61,
  sym__constant_list = 62,
  sym__constant_bit_string = 63,
  sym__constant_bit_string_segment = 64,
  sym__constant_bit_string_segment_options = 65,
  sym__constant_bit_string_segment_option = 66,
  sym__constant_bit_string_named_segment_option = 67,
  sym__constant_bit_string_segment_option_size = 68,
  sym__constant_record = 69,
  sym__constant_record_arg = 70,
  sym__constant_remote_record = 71,
  sym__constant_type_annotation = 72,
  sym__constant_type = 73,
  sym_constant_tuple_type = 74,
  sym_constant_type_constructor = 75,
  sym_constant_remote_type_constructor = 76,
  sym__constant_type_constructor = 77,
  sym__bit_string_segment_option_unit = 78,
  sym__bit_string_segment_option_literal = 79,
  sym_type_hole = 80,
  aux_sym_source_file_repeat1 = 81,
  aux_sym_target_group_repeat1 = 82,
  aux_sym_import_repeat1 = 83,
  aux_sym_module_repeat1 = 84,
  aux_sym__constant_tuple_repeat1 = 85,
  aux_sym__constant_bit_string_repeat1 = 86,
  aux_sym__constant_bit_string_segment_options_repeat1 = 87,
  aux_sym__constant_record_repeat1 = 88,
  aux_sym_constant_tuple_type_repeat1 = 89,
  alias_sym_bit_string_segment_option_size = 90,
  alias_sym_bit_string_segment_option_unit = 91,
  alias_sym_constant_int = 92,
  alias_sym_identifier = 93,
  alias_sym_record = 94,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [anon_sym_if] = "if",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_erlang] = "erlang",
  [anon_sym_javascript] = "javascript",
  [anon_sym_import] = "import",
  [anon_sym_DOT] = ".",
  [anon_sym_COMMA] = ",",
  [anon_sym_as] = "as",
  [anon_sym_SLASH] = "/",
  [anon_sym_pub] = "pub",
  [anon_sym_const] = "const",
  [anon_sym_EQ] = "=",
  [anon_sym_POUND] = "#",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_COLON] = ":",
  [anon_sym_DASH] = "-",
  [anon_sym_size] = "size",
  [sym_string] = "string",
  [sym_float] = "float",
  [sym_integer] = "integer",
  [anon_sym_unit] = "unit",
  [anon_sym_binary] = "bit_string_segment_option_binary",
  [anon_sym_bytes] = "bit_string_segment_option_binary",
  [anon_sym_int] = "bit_string_segment_option_int",
  [anon_sym_float] = "bit_string_segment_option_float",
  [anon_sym_bit_string] = "bit_string_segment_option_bit_string",
  [anon_sym_bits] = "bit_string_segment_option_bit_string",
  [anon_sym_utf8] = "bit_string_segment_option_utf8",
  [anon_sym_utf16] = "bit_string_segment_option_utf16",
  [anon_sym_utf32] = "bit_string_segment_option_utf32",
  [anon_sym_utf8_codepoint] = "bit_string_segment_option_utf8_codepoint",
  [anon_sym_utf16_codepoint] = "bit_string_segment_option_utf16_codepoint",
  [anon_sym_utf32_codepoint] = "bit_string_segment_option_utf32_codepoint",
  [anon_sym_signed] = "bit_string_segment_option_signed",
  [anon_sym_unsigned] = "bit_string_segment_option_unsigned",
  [anon_sym_big] = "bit_string_segment_option_big",
  [anon_sym_little] = "bit_string_segment_option_little",
  [anon_sym_native] = "bit_string_segment_option_native",
  [sym__discard_name] = "_discard_name",
  [sym__name] = "_name",
  [sym__upname] = "_upname",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_target_group] = "target_group",
  [sym_target] = "target",
  [sym_import] = "import",
  [sym_module] = "module",
  [sym_unqualified_import] = "unqualified_import",
  [sym_alias] = "alias",
  [sym_public_constant] = "public_constant",
  [sym_constant] = "constant",
  [sym__constant] = "_constant",
  [sym__constant_value] = "_constant_value",
  [sym__constant_tuple] = "tuple",
  [sym__constant_list] = "list",
  [sym__constant_bit_string] = "bit_string",
  [sym__constant_bit_string_segment] = "bit_string_segment",
  [sym__constant_bit_string_segment_options] = "bit_string_segment_options",
  [sym__constant_bit_string_segment_option] = "_constant_bit_string_segment_option",
  [sym__constant_bit_string_named_segment_option] = "_constant_bit_string_named_segment_option",
  [sym__constant_bit_string_segment_option_size] = "_constant_bit_string_segment_option_size",
  [sym__constant_record] = "_constant_record",
  [sym__constant_record_arg] = "record_arg",
  [sym__constant_remote_record] = "remote_record",
  [sym__constant_type_annotation] = "_constant_type_annotation",
  [sym__constant_type] = "_constant_type",
  [sym_constant_tuple_type] = "tuple_type",
  [sym_constant_type_constructor] = "type_constructor",
  [sym_constant_remote_type_constructor] = "remote_type_constructor",
  [sym__constant_type_constructor] = "_constant_type_constructor",
  [sym__bit_string_segment_option_unit] = "_bit_string_segment_option_unit",
  [sym__bit_string_segment_option_literal] = "_bit_string_segment_option_literal",
  [sym_type_hole] = "type_hole",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_target_group_repeat1] = "target_group_repeat1",
  [aux_sym_import_repeat1] = "import_repeat1",
  [aux_sym_module_repeat1] = "module_repeat1",
  [aux_sym__constant_tuple_repeat1] = "_constant_tuple_repeat1",
  [aux_sym__constant_bit_string_repeat1] = "_constant_bit_string_repeat1",
  [aux_sym__constant_bit_string_segment_options_repeat1] = "_constant_bit_string_segment_options_repeat1",
  [aux_sym__constant_record_repeat1] = "_constant_record_repeat1",
  [aux_sym_constant_tuple_type_repeat1] = "constant_tuple_type_repeat1",
  [alias_sym_bit_string_segment_option_size] = "bit_string_segment_option_size",
  [alias_sym_bit_string_segment_option_unit] = "bit_string_segment_option_unit",
  [alias_sym_constant_int] = "constant_int",
  [alias_sym_identifier] = "identifier",
  [alias_sym_record] = "record",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_erlang] = anon_sym_erlang,
  [anon_sym_javascript] = anon_sym_javascript,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_pub] = anon_sym_pub,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_size] = anon_sym_size,
  [sym_string] = sym_string,
  [sym_float] = sym_float,
  [sym_integer] = sym_integer,
  [anon_sym_unit] = anon_sym_unit,
  [anon_sym_binary] = anon_sym_binary,
  [anon_sym_bytes] = anon_sym_binary,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_bit_string] = anon_sym_bit_string,
  [anon_sym_bits] = anon_sym_bit_string,
  [anon_sym_utf8] = anon_sym_utf8,
  [anon_sym_utf16] = anon_sym_utf16,
  [anon_sym_utf32] = anon_sym_utf32,
  [anon_sym_utf8_codepoint] = anon_sym_utf8_codepoint,
  [anon_sym_utf16_codepoint] = anon_sym_utf16_codepoint,
  [anon_sym_utf32_codepoint] = anon_sym_utf32_codepoint,
  [anon_sym_signed] = anon_sym_signed,
  [anon_sym_unsigned] = anon_sym_unsigned,
  [anon_sym_big] = anon_sym_big,
  [anon_sym_little] = anon_sym_little,
  [anon_sym_native] = anon_sym_native,
  [sym__discard_name] = sym__discard_name,
  [sym__name] = sym__name,
  [sym__upname] = sym__upname,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_target_group] = sym_target_group,
  [sym_target] = sym_target,
  [sym_import] = sym_import,
  [sym_module] = sym_module,
  [sym_unqualified_import] = sym_unqualified_import,
  [sym_alias] = sym_alias,
  [sym_public_constant] = sym_public_constant,
  [sym_constant] = sym_constant,
  [sym__constant] = sym__constant,
  [sym__constant_value] = sym__constant_value,
  [sym__constant_tuple] = sym__constant_tuple,
  [sym__constant_list] = sym__constant_list,
  [sym__constant_bit_string] = sym__constant_bit_string,
  [sym__constant_bit_string_segment] = sym__constant_bit_string_segment,
  [sym__constant_bit_string_segment_options] = sym__constant_bit_string_segment_options,
  [sym__constant_bit_string_segment_option] = sym__constant_bit_string_segment_option,
  [sym__constant_bit_string_named_segment_option] = sym__constant_bit_string_named_segment_option,
  [sym__constant_bit_string_segment_option_size] = sym__constant_bit_string_segment_option_size,
  [sym__constant_record] = sym__constant_record,
  [sym__constant_record_arg] = sym__constant_record_arg,
  [sym__constant_remote_record] = sym__constant_remote_record,
  [sym__constant_type_annotation] = sym__constant_type_annotation,
  [sym__constant_type] = sym__constant_type,
  [sym_constant_tuple_type] = sym_constant_tuple_type,
  [sym_constant_type_constructor] = sym_constant_type_constructor,
  [sym_constant_remote_type_constructor] = sym_constant_remote_type_constructor,
  [sym__constant_type_constructor] = sym__constant_type_constructor,
  [sym__bit_string_segment_option_unit] = sym__bit_string_segment_option_unit,
  [sym__bit_string_segment_option_literal] = sym__bit_string_segment_option_literal,
  [sym_type_hole] = sym_type_hole,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_target_group_repeat1] = aux_sym_target_group_repeat1,
  [aux_sym_import_repeat1] = aux_sym_import_repeat1,
  [aux_sym_module_repeat1] = aux_sym_module_repeat1,
  [aux_sym__constant_tuple_repeat1] = aux_sym__constant_tuple_repeat1,
  [aux_sym__constant_bit_string_repeat1] = aux_sym__constant_bit_string_repeat1,
  [aux_sym__constant_bit_string_segment_options_repeat1] = aux_sym__constant_bit_string_segment_options_repeat1,
  [aux_sym__constant_record_repeat1] = aux_sym__constant_record_repeat1,
  [aux_sym_constant_tuple_type_repeat1] = aux_sym_constant_tuple_type_repeat1,
  [alias_sym_bit_string_segment_option_size] = alias_sym_bit_string_segment_option_size,
  [alias_sym_bit_string_segment_option_unit] = alias_sym_bit_string_segment_option_unit,
  [alias_sym_constant_int] = alias_sym_constant_int,
  [alias_sym_identifier] = alias_sym_identifier,
  [alias_sym_record] = alias_sym_record,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_if] = {
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
  [anon_sym_erlang] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_javascript] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_size] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_binary] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_bit_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_bits] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_utf8] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_utf16] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_utf32] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_utf8_codepoint] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_utf16_codepoint] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_utf32_codepoint] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_signed] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unsigned] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_big] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_little] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_native] = {
    .visible = true,
    .named = true,
  },
  [sym__discard_name] = {
    .visible = false,
    .named = true,
  },
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [sym__upname] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_target_group] = {
    .visible = true,
    .named = true,
  },
  [sym_target] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_unqualified_import] = {
    .visible = true,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_public_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym__constant] = {
    .visible = false,
    .named = true,
  },
  [sym__constant_value] = {
    .visible = false,
    .named = true,
  },
  [sym__constant_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym__constant_list] = {
    .visible = true,
    .named = true,
  },
  [sym__constant_bit_string] = {
    .visible = true,
    .named = true,
  },
  [sym__constant_bit_string_segment] = {
    .visible = true,
    .named = true,
  },
  [sym__constant_bit_string_segment_options] = {
    .visible = true,
    .named = true,
  },
  [sym__constant_bit_string_segment_option] = {
    .visible = false,
    .named = true,
  },
  [sym__constant_bit_string_named_segment_option] = {
    .visible = false,
    .named = true,
  },
  [sym__constant_bit_string_segment_option_size] = {
    .visible = false,
    .named = true,
  },
  [sym__constant_record] = {
    .visible = false,
    .named = true,
  },
  [sym__constant_record_arg] = {
    .visible = true,
    .named = true,
  },
  [sym__constant_remote_record] = {
    .visible = true,
    .named = true,
  },
  [sym__constant_type_annotation] = {
    .visible = false,
    .named = true,
  },
  [sym__constant_type] = {
    .visible = false,
    .named = true,
  },
  [sym_constant_tuple_type] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_type_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_remote_type_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym__constant_type_constructor] = {
    .visible = false,
    .named = true,
  },
  [sym__bit_string_segment_option_unit] = {
    .visible = false,
    .named = true,
  },
  [sym__bit_string_segment_option_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_type_hole] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_target_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__constant_tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__constant_bit_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__constant_bit_string_segment_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__constant_record_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_tuple_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_bit_string_segment_option_size] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_bit_string_segment_option_unit] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_constant_int] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_record] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_alias = 1,
  field_module = 2,
  field_name = 3,
  field_options = 4,
  field_target = 5,
  field_type = 6,
  field_value = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_module] = "module",
  [field_name] = "name",
  [field_options] = "options",
  [field_target] = "target",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 1},
  [3] = {.index = 4, .length = 3},
  [4] = {.index = 7, .length = 1},
  [5] = {.index = 8, .length = 2},
  [6] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 1},
  [9] = {.index = 13, .length = 1},
  [10] = {.index = 14, .length = 3},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 1},
  [14] = {.index = 20, .length = 3},
  [15] = {.index = 23, .length = 2},
  [16] = {.index = 25, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0, .inherited = true},
    {field_type, 0, .inherited = true},
    {field_value, 0, .inherited = true},
  [3] =
    {field_module, 1},
  [4] =
    {field_name, 1, .inherited = true},
    {field_type, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [7] =
    {field_target, 1},
  [8] =
    {field_alias, 3},
    {field_module, 1},
  [10] =
    {field_name, 1},
    {field_value, 3},
  [12] =
    {field_type, 1},
  [13] =
    {field_value, 0},
  [14] =
    {field_name, 1},
    {field_type, 2, .inherited = true},
    {field_value, 4},
  [17] =
    {field_options, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [19] =
    {field_alias, 2},
  [20] =
    {field_options, 1},
    {field_options, 2},
    {field_value, 0},
  [23] =
    {field_alias, 7},
    {field_module, 1},
  [25] =
    {field_alias, 8},
    {field_module, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [6] = {
    [1] = alias_sym_identifier,
  },
  [7] = {
    [0] = alias_sym_record,
  },
  [10] = {
    [1] = alias_sym_identifier,
  },
  [12] = {
    [2] = sym_alias,
  },
  [13] = {
    [0] = alias_sym_constant_int,
  },
  [17] = {
    [2] = alias_sym_bit_string_segment_option_size,
  },
  [18] = {
    [2] = alias_sym_bit_string_segment_option_unit,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__constant_record, 2,
    sym__constant_record,
    alias_sym_record,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(115);
      if (lookahead == '\n') ADVANCE(116);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(134);
      if (lookahead == '(') ADVANCE(135);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == ':') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ';') SKIP(0)
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == '>') ADVANCE(12);
      if (lookahead == '[') ADVANCE(137);
      if (lookahead == ']') ADVANCE(138);
      if (lookahead == '_') ADVANCE(168);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'b') ADVANCE(46);
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'j') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(108);
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == '{') ADVANCE(122);
      if (lookahead == '}') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(170);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(116);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(134);
      if (lookahead == '(') ADVANCE(135);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == ':') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ';') SKIP(1)
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == '>') ADVANCE(12);
      if (lookahead == '[') ADVANCE(137);
      if (lookahead == ']') ADVANCE(138);
      if (lookahead == '_') ADVANCE(168);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'b') ADVANCE(46);
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'j') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(108);
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == '{') ADVANCE(122);
      if (lookahead == '}') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(170);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ';') SKIP(2)
      if (lookahead == 'b') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(149);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(134);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ';') SKIP(3)
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '>') ADVANCE(12);
      if (lookahead == '[') ADVANCE(137);
      if (lookahead == '_') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '#') ADVANCE(134);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ';') SKIP(4)
      if (lookahead == '_') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(120);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ';') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(170);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(144);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(10);
      if (lookahead == '3') ADVANCE(9);
      if (lookahead == '8') ADVANCE(157);
      END_STATE();
    case 9:
      if (lookahead == '2') ADVANCE(159);
      END_STATE();
    case 10:
      if (lookahead == '6') ADVANCE(158);
      END_STATE();
    case 11:
      if (lookahead == '<') ADVANCE(139);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(140);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(93);
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(131);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(164);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'm') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 40:
      if (lookahead == 'f') ADVANCE(8);
      END_STATE();
    case 41:
      if (lookahead == 'g') ADVANCE(165);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 42:
      if (lookahead == 'g') ADVANCE(124);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(155);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(64);
      if (lookahead == 'z') ADVANCE(30);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 79:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 80:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 81:
      if (lookahead == 'p') ADVANCE(100);
      END_STATE();
    case 82:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 83:
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 108:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 109:
      if (lookahead == 'v') ADVANCE(17);
      END_STATE();
    case 110:
      if (lookahead == 'v') ADVANCE(33);
      END_STATE();
    case 111:
      if (lookahead == 'y') ADVANCE(151);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(149);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(148);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(146);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(116);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '\r') ADVANCE(3);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '\r') ADVANCE(4);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(120);
      if (lookahead == '\r') ADVANCE(5);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_erlang);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_javascript);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_pub);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(144);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(147);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_unit);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_binary);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_bit_string);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_bits);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_utf8);
      if (lookahead == '_') ADVANCE(21);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_utf16);
      if (lookahead == '_') ADVANCE(23);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_utf32);
      if (lookahead == '_') ADVANCE(24);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_utf8_codepoint);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_utf16_codepoint);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_utf32_codepoint);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_big);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_little);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__discard_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__name);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__upname);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 0},
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
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 5},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 5},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 5},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 5},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_file_token1] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_erlang] = ACTIONS(1),
    [anon_sym_javascript] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_pub] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_size] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_unit] = ACTIONS(1),
    [anon_sym_binary] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_bit_string] = ACTIONS(1),
    [anon_sym_bits] = ACTIONS(1),
    [anon_sym_utf8] = ACTIONS(1),
    [anon_sym_utf16] = ACTIONS(1),
    [anon_sym_utf32] = ACTIONS(1),
    [anon_sym_utf8_codepoint] = ACTIONS(1),
    [anon_sym_utf16_codepoint] = ACTIONS(1),
    [anon_sym_utf32_codepoint] = ACTIONS(1),
    [anon_sym_signed] = ACTIONS(1),
    [anon_sym_unsigned] = ACTIONS(1),
    [anon_sym_big] = ACTIONS(1),
    [anon_sym_little] = ACTIONS(1),
    [anon_sym_native] = ACTIONS(1),
    [sym__discard_name] = ACTIONS(1),
    [sym__upname] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(222),
    [sym__statement] = STATE(124),
    [sym_target_group] = STATE(124),
    [sym_import] = STATE(124),
    [sym_public_constant] = STATE(124),
    [sym_constant] = STATE(124),
    [sym__constant] = STATE(220),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_source_file_token1] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_pub] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(15), 1,
      anon_sym_size,
    ACTIONS(17), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_unit,
    STATE(135), 1,
      sym__constant_bit_string_segment_options,
    STATE(56), 5,
      sym__constant_bit_string_segment_option,
      sym__constant_bit_string_named_segment_option,
      sym__constant_bit_string_segment_option_size,
      sym__bit_string_segment_option_unit,
      sym__bit_string_segment_option_literal,
    ACTIONS(21), 17,
      anon_sym_binary,
      anon_sym_bytes,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bit_string,
      anon_sym_bits,
      anon_sym_utf8,
      anon_sym_utf16,
      anon_sym_utf32,
      anon_sym_utf8_codepoint,
      anon_sym_utf16_codepoint,
      anon_sym_utf32_codepoint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_big,
      anon_sym_little,
      anon_sym_native,
  [42] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(15), 1,
      anon_sym_size,
    ACTIONS(17), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_unit,
    STATE(104), 5,
      sym__constant_bit_string_segment_option,
      sym__constant_bit_string_named_segment_option,
      sym__constant_bit_string_segment_option_size,
      sym__bit_string_segment_option_unit,
      sym__bit_string_segment_option_literal,
    ACTIONS(23), 17,
      anon_sym_binary,
      anon_sym_bytes,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bit_string,
      anon_sym_bits,
      anon_sym_utf8,
      anon_sym_utf16,
      anon_sym_utf32,
      anon_sym_utf8_codepoint,
      anon_sym_utf16_codepoint,
      anon_sym_utf32_codepoint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_big,
      anon_sym_little,
      anon_sym_native,
  [81] = 11,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_GT_GT,
    ACTIONS(35), 1,
      sym__name,
    ACTIONS(37), 1,
      sym__upname,
    STATE(40), 1,
      sym__constant_record,
    STATE(85), 1,
      sym__constant_bit_string_segment,
    ACTIONS(33), 3,
      sym_string,
      sym_float,
      sym_integer,
    STATE(57), 5,
      sym__constant_value,
      sym__constant_tuple,
      sym__constant_list,
      sym__constant_bit_string,
      sym__constant_remote_record,
  [121] = 11,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      sym__name,
    ACTIONS(37), 1,
      sym__upname,
    ACTIONS(39), 1,
      anon_sym_GT_GT,
    STATE(40), 1,
      sym__constant_record,
    STATE(60), 1,
      sym__constant_bit_string_segment,
    ACTIONS(33), 3,
      sym_string,
      sym_float,
      sym_integer,
    STATE(57), 5,
      sym__constant_value,
      sym__constant_tuple,
      sym__constant_list,
      sym__constant_bit_string,
      sym__constant_remote_record,
  [161] = 11,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      sym__name,
    ACTIONS(37), 1,
      sym__upname,
    ACTIONS(41), 1,
      anon_sym_GT_GT,
    STATE(40), 1,
      sym__constant_record,
    STATE(69), 1,
      sym__constant_bit_string_segment,
    ACTIONS(33), 3,
      sym_string,
      sym_float,
      sym_integer,
    STATE(57), 5,
      sym__constant_value,
      sym__constant_tuple,
      sym__constant_list,
      sym__constant_bit_string,
      sym__constant_remote_record,
  [201] = 10,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      sym__name,
    ACTIONS(37), 1,
      sym__upname,
    STATE(40), 1,
      sym__constant_record,
    STATE(134), 1,
      sym__constant_bit_string_segment,
    ACTIONS(33), 3,
      sym_string,
      sym_float,
      sym_integer,
    STATE(57), 5,
      sym__constant_value,
      sym__constant_tuple,
      sym__constant_list,
      sym__constant_bit_string,
      sym__constant_remote_record,
  [238] = 9,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_LT_LT,
    ACTIONS(51), 1,
      sym__name,
    ACTIONS(53), 1,
      sym__upname,
    STATE(200), 1,
      sym__constant_record,
    ACTIONS(49), 3,
      sym_string,
      sym_float,
      sym_integer,
    STATE(172), 5,
      sym__constant_value,
      sym__constant_tuple,
      sym__constant_list,
      sym__constant_bit_string,
      sym__constant_remote_record,
  [272] = 9,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      sym__name,
    ACTIONS(37), 1,
      sym__upname,
    STATE(40), 1,
      sym__constant_record,
    ACTIONS(55), 3,
      sym_string,
      sym_float,
      sym_integer,
    STATE(76), 5,
      sym__constant_value,
      sym__constant_tuple,
      sym__constant_list,
      sym__constant_bit_string,
      sym__constant_remote_record,
  [306] = 9,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_LT_LT,
    ACTIONS(65), 1,
      sym__name,
    ACTIONS(67), 1,
      sym__upname,
    STATE(176), 1,
      sym__constant_record,
    ACTIONS(63), 3,
      sym_string,
      sym_float,
      sym_integer,
    STATE(163), 5,
      sym__constant_value,
      sym__constant_tuple,
      sym__constant_list,
      sym__constant_bit_string,
      sym__constant_remote_record,
  [340] = 9,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      sym__name,
    ACTIONS(37), 1,
      sym__upname,
    STATE(40), 1,
      sym__constant_record,
    ACTIONS(69), 3,
      sym_string,
      sym_float,
      sym_integer,
    STATE(101), 5,
      sym__constant_value,
      sym__constant_tuple,
      sym__constant_list,
      sym__constant_bit_string,
      sym__constant_remote_record,
  [374] = 9,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      sym__name,
    ACTIONS(37), 1,
      sym__upname,
    STATE(40), 1,
      sym__constant_record,
    ACTIONS(71), 3,
      sym_string,
      sym_float,
      sym_integer,
    STATE(128), 5,
      sym__constant_value,
      sym__constant_tuple,
      sym__constant_list,
      sym__constant_bit_string,
      sym__constant_remote_record,
  [408] = 9,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_LT_LT,
    ACTIONS(65), 1,
      sym__name,
    ACTIONS(67), 1,
      sym__upname,
    STATE(176), 1,
      sym__constant_record,
    ACTIONS(73), 3,
      sym_string,
      sym_float,
      sym_integer,
    STATE(167), 5,
      sym__constant_value,
      sym__constant_tuple,
      sym__constant_list,
      sym__constant_bit_string,
      sym__constant_remote_record,
  [442] = 9,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      sym__name,
    ACTIONS(37), 1,
      sym__upname,
    STATE(40), 1,
      sym__constant_record,
    ACTIONS(75), 3,
      sym_string,
      sym_float,
      sym_integer,
    STATE(59), 5,
      sym__constant_value,
      sym__constant_tuple,
      sym__constant_list,
      sym__constant_bit_string,
      sym__constant_remote_record,
  [476] = 9,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      sym__name,
    ACTIONS(37), 1,
      sym__upname,
    STATE(40), 1,
      sym__constant_record,
    ACTIONS(77), 3,
      sym_string,
      sym_float,
      sym_integer,
    STATE(84), 5,
      sym__constant_value,
      sym__constant_tuple,
      sym__constant_list,
      sym__constant_bit_string,
      sym__constant_remote_record,
  [510] = 9,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      sym__name,
    ACTIONS(37), 1,
      sym__upname,
    STATE(40), 1,
      sym__constant_record,
    ACTIONS(79), 3,
      sym_string,
      sym_float,
      sym_integer,
    STATE(93), 5,
      sym__constant_value,
      sym__constant_tuple,
      sym__constant_list,
      sym__constant_bit_string,
      sym__constant_remote_record,
  [544] = 9,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      sym__name,
    ACTIONS(37), 1,
      sym__upname,
    STATE(40), 1,
      sym__constant_record,
    ACTIONS(81), 3,
      sym_string,
      sym_float,
      sym_integer,
    STATE(72), 5,
      sym__constant_value,
      sym__constant_tuple,
      sym__constant_list,
      sym__constant_bit_string,
      sym__constant_remote_record,
  [578] = 9,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      sym__name,
    ACTIONS(37), 1,
      sym__upname,
    STATE(40), 1,
      sym__constant_record,
    ACTIONS(83), 3,
      sym_string,
      sym_float,
      sym_integer,
    STATE(68), 5,
      sym__constant_value,
      sym__constant_tuple,
      sym__constant_list,
      sym__constant_bit_string,
      sym__constant_remote_record,
  [612] = 9,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_LT_LT,
    ACTIONS(51), 1,
      sym__name,
    ACTIONS(53), 1,
      sym__upname,
    STATE(200), 1,
      sym__constant_record,
    ACTIONS(85), 3,
      sym_string,
      sym_float,
      sym_integer,
    STATE(201), 5,
      sym__constant_value,
      sym__constant_tuple,
      sym__constant_list,
      sym__constant_bit_string,
      sym__constant_remote_record,
  [646] = 8,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_pub,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    STATE(220), 1,
      sym__constant,
    STATE(211), 5,
      sym__statement,
      sym_target_group,
      sym_import,
      sym_public_constant,
      sym_constant,
  [675] = 8,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(89), 1,
      anon_sym_POUND,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(93), 1,
      sym__discard_name,
    ACTIONS(95), 1,
      sym__name,
    ACTIONS(97), 1,
      sym__upname,
    STATE(65), 1,
      sym__constant_type_constructor,
    STATE(89), 5,
      sym__constant_type,
      sym_constant_tuple_type,
      sym_constant_type_constructor,
      sym_constant_remote_type_constructor,
      sym_type_hole,
  [704] = 8,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_pub,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    STATE(220), 1,
      sym__constant,
    STATE(211), 5,
      sym__statement,
      sym_target_group,
      sym_import,
      sym_public_constant,
      sym_constant,
  [733] = 7,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_pub,
    ACTIONS(13), 1,
      anon_sym_const,
    STATE(220), 1,
      sym__constant,
    STATE(211), 5,
      sym__statement,
      sym_target_group,
      sym_import,
      sym_public_constant,
      sym_constant,
  [759] = 7,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(89), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      sym__discard_name,
    ACTIONS(95), 1,
      sym__name,
    ACTIONS(97), 1,
      sym__upname,
    STATE(65), 1,
      sym__constant_type_constructor,
    STATE(132), 5,
      sym__constant_type,
      sym_constant_tuple_type,
      sym_constant_type_constructor,
      sym_constant_remote_type_constructor,
      sym_type_hole,
  [785] = 7,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(89), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      sym__discard_name,
    ACTIONS(95), 1,
      sym__name,
    ACTIONS(97), 1,
      sym__upname,
    STATE(65), 1,
      sym__constant_type_constructor,
    STATE(197), 5,
      sym__constant_type,
      sym_constant_tuple_type,
      sym_constant_type_constructor,
      sym_constant_remote_type_constructor,
      sym_type_hole,
  [811] = 7,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(89), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      sym__discard_name,
    ACTIONS(95), 1,
      sym__name,
    ACTIONS(97), 1,
      sym__upname,
    STATE(65), 1,
      sym__constant_type_constructor,
    STATE(91), 5,
      sym__constant_type,
      sym_constant_tuple_type,
      sym_constant_type_constructor,
      sym_constant_remote_type_constructor,
      sym_type_hole,
  [837] = 7,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    ACTIONS(103), 1,
      anon_sym_import,
    ACTIONS(105), 1,
      anon_sym_pub,
    ACTIONS(107), 1,
      anon_sym_const,
    STATE(157), 1,
      sym__constant,
    STATE(170), 4,
      sym__statement,
      sym_import,
      sym_public_constant,
      sym_constant,
  [862] = 7,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(103), 1,
      anon_sym_import,
    ACTIONS(105), 1,
      anon_sym_pub,
    ACTIONS(107), 1,
      anon_sym_const,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(157), 1,
      sym__constant,
    STATE(170), 4,
      sym__statement,
      sym_import,
      sym_public_constant,
      sym_constant,
  [887] = 7,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(103), 1,
      anon_sym_import,
    ACTIONS(105), 1,
      anon_sym_pub,
    ACTIONS(107), 1,
      anon_sym_const,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    STATE(157), 1,
      sym__constant,
    STATE(130), 4,
      sym__statement,
      sym_import,
      sym_public_constant,
      sym_constant,
  [912] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(103), 1,
      anon_sym_import,
    ACTIONS(105), 1,
      anon_sym_pub,
    ACTIONS(107), 1,
      anon_sym_const,
    STATE(157), 1,
      sym__constant,
    STATE(170), 4,
      sym__statement,
      sym_import,
      sym_public_constant,
      sym_constant,
  [934] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_GT_GT,
      anon_sym_COLON,
  [948] = 4,
    ACTIONS(117), 1,
      aux_sym_source_file_token1,
    ACTIONS(121), 1,
      anon_sym_SLASH,
    STATE(49), 1,
      aux_sym_module_repeat1,
    ACTIONS(119), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [963] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(123), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_GT_GT,
      anon_sym_COLON,
  [974] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(125), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_GT_GT,
      anon_sym_COLON,
  [985] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(127), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_GT_GT,
      anon_sym_COLON,
  [996] = 4,
    ACTIONS(133), 1,
      anon_sym_SLASH,
    STATE(36), 1,
      aux_sym_module_repeat1,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(131), 2,
      anon_sym_DOT,
      anon_sym_as,
  [1011] = 4,
    ACTIONS(136), 1,
      anon_sym_SLASH,
    STATE(48), 1,
      aux_sym_module_repeat1,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(119), 2,
      anon_sym_DOT,
      anon_sym_as,
  [1026] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(138), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_GT_GT,
      anon_sym_COLON,
  [1037] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(140), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_GT_GT,
      anon_sym_COLON,
  [1048] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(142), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_GT_GT,
      anon_sym_COLON,
  [1059] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(144), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_GT_GT,
      anon_sym_COLON,
  [1070] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(146), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_GT_GT,
      anon_sym_COLON,
  [1081] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(148), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_GT_GT,
      anon_sym_COLON,
  [1092] = 4,
    ACTIONS(129), 1,
      aux_sym_source_file_token1,
    ACTIONS(150), 1,
      anon_sym_SLASH,
    STATE(44), 1,
      aux_sym_module_repeat1,
    ACTIONS(131), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [1107] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(153), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_GT_GT,
      anon_sym_COLON,
  [1118] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(155), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_GT_GT,
      anon_sym_COLON,
  [1129] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(157), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_GT_GT,
      anon_sym_COLON,
  [1140] = 4,
    ACTIONS(136), 1,
      anon_sym_SLASH,
    STATE(36), 1,
      aux_sym_module_repeat1,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(161), 2,
      anon_sym_DOT,
      anon_sym_as,
  [1155] = 4,
    ACTIONS(121), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      aux_sym_source_file_token1,
    STATE(44), 1,
      aux_sym_module_repeat1,
    ACTIONS(161), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [1170] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 3,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [1182] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(169), 1,
      anon_sym_DASH,
    STATE(51), 1,
      aux_sym__constant_bit_string_segment_options_repeat1,
    ACTIONS(167), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1196] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(174), 1,
      anon_sym_DASH,
    STATE(51), 1,
      aux_sym__constant_bit_string_segment_options_repeat1,
    ACTIONS(172), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1210] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym__constant_tuple_repeat1,
    ACTIONS(179), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1224] = 2,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(131), 3,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_SLASH,
  [1234] = 2,
    ACTIONS(129), 1,
      aux_sym_source_file_token1,
    ACTIONS(131), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_SLASH,
  [1244] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(174), 1,
      anon_sym_DASH,
    STATE(52), 1,
      aux_sym__constant_bit_string_segment_options_repeat1,
    ACTIONS(181), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1258] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(185), 1,
      anon_sym_COLON,
    ACTIONS(183), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1269] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(187), 3,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [1278] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym__constant_tuple_repeat1,
  [1291] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_GT_GT,
    STATE(83), 1,
      aux_sym__constant_bit_string_repeat1,
  [1304] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    STATE(218), 1,
      sym_target,
    ACTIONS(197), 2,
      anon_sym_erlang,
      anon_sym_javascript,
  [1315] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    ACTIONS(201), 1,
      sym__name,
    STATE(87), 1,
      sym__constant_record_arg,
  [1328] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(205), 1,
      anon_sym_as,
    ACTIONS(203), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1339] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(207), 1,
      anon_sym_as,
    ACTIONS(203), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1350] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(209), 3,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [1359] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_import_repeat1,
  [1372] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(215), 3,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [1381] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      aux_sym__constant_tuple_repeat1,
  [1394] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(219), 1,
      anon_sym_GT_GT,
    STATE(77), 1,
      aux_sym__constant_bit_string_repeat1,
  [1407] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(201), 1,
      sym__name,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym__constant_record_arg,
  [1420] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      aux_sym_import_repeat1,
  [1433] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym__constant_tuple_repeat1,
  [1446] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      aux_sym__constant_tuple_repeat1,
  [1459] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(229), 1,
      sym__name,
    ACTIONS(231), 1,
      sym__upname,
    STATE(145), 1,
      sym_unqualified_import,
  [1472] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      aux_sym_import_repeat1,
  [1485] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym__constant_tuple_repeat1,
  [1498] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_GT_GT,
    STATE(111), 1,
      aux_sym__constant_bit_string_repeat1,
  [1511] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym__constant_record_repeat1,
  [1524] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      aux_sym__constant_tuple_repeat1,
  [1537] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(229), 1,
      sym__name,
    ACTIONS(231), 1,
      sym__upname,
    STATE(88), 1,
      sym_unqualified_import,
  [1550] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      aux_sym__constant_tuple_repeat1,
  [1563] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym__constant_record_repeat1,
  [1576] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_GT_GT,
    STATE(111), 1,
      aux_sym__constant_bit_string_repeat1,
  [1589] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_RBRACK,
    STATE(94), 1,
      aux_sym__constant_tuple_repeat1,
  [1602] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(253), 1,
      anon_sym_GT_GT,
    STATE(96), 1,
      aux_sym__constant_bit_string_repeat1,
  [1615] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(257), 1,
      anon_sym_COLON,
    ACTIONS(255), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1626] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym__constant_record_repeat1,
  [1639] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_import_repeat1,
  [1652] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      aux_sym_constant_tuple_type_repeat1,
  [1665] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(267), 3,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [1674] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym_constant_tuple_type_repeat1,
  [1687] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(201), 1,
      sym__name,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      sym__constant_record_arg,
  [1700] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym__constant_tuple_repeat1,
  [1713] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      aux_sym__constant_tuple_repeat1,
  [1726] = 4,
    ACTIONS(277), 1,
      aux_sym_source_file_token1,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    ACTIONS(281), 1,
      anon_sym_DOT,
    ACTIONS(283), 1,
      anon_sym_as,
  [1739] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_GT_GT,
    STATE(111), 1,
      aux_sym__constant_bit_string_repeat1,
  [1752] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(287), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DASH,
  [1761] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym_import_repeat1,
  [1774] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(294), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DASH,
  [1783] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      aux_sym__constant_tuple_repeat1,
  [1796] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(179), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1805] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(298), 1,
      anon_sym_EQ,
    ACTIONS(300), 1,
      anon_sym_COLON,
    STATE(212), 1,
      sym__constant_type_annotation,
  [1818] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      aux_sym__constant_record_repeat1,
  [1831] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(167), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DASH,
  [1840] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(304), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DASH,
  [1849] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(306), 3,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [1858] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(308), 1,
      anon_sym_COMMA,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      aux_sym_constant_tuple_type_repeat1,
  [1871] = 3,
    ACTIONS(313), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      anon_sym_as,
    ACTIONS(277), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1882] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(317), 3,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [1891] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    ACTIONS(322), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym__constant_record_repeat1,
  [1904] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_GT_GT,
    STATE(111), 1,
      aux_sym__constant_bit_string_repeat1,
  [1917] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      aux_sym__constant_tuple_repeat1,
  [1930] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym__constant_record_repeat1,
  [1943] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym__constant_record_repeat1,
  [1956] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(300), 1,
      anon_sym_COLON,
    ACTIONS(335), 1,
      anon_sym_EQ,
    STATE(194), 1,
      sym__constant_type_annotation,
  [1969] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(337), 3,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [1978] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      aux_sym_constant_tuple_type_repeat1,
  [1991] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(341), 3,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [2000] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      aux_sym_constant_tuple_type_repeat1,
  [2013] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(229), 1,
      sym__name,
    ACTIONS(231), 1,
      sym__upname,
    STATE(66), 1,
      sym_unqualified_import,
  [2026] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(201), 1,
      sym__name,
    STATE(129), 1,
      sym__constant_record_arg,
  [2036] = 3,
    ACTIONS(345), 1,
      aux_sym_source_file_token1,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    ACTIONS(349), 1,
      anon_sym_as,
  [2046] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(13), 1,
      anon_sym_const,
    STATE(217), 1,
      sym__constant,
  [2056] = 3,
    ACTIONS(351), 1,
      ts_builtin_sym_end,
    ACTIONS(353), 1,
      aux_sym_source_file_token1,
    STATE(125), 1,
      aux_sym_source_file_repeat1,
  [2066] = 3,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(355), 1,
      aux_sym_source_file_token1,
    STATE(127), 1,
      aux_sym_source_file_repeat1,
  [2076] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(357), 1,
      sym__name,
    STATE(205), 1,
      sym_alias,
  [2086] = 3,
    ACTIONS(359), 1,
      ts_builtin_sym_end,
    ACTIONS(361), 1,
      aux_sym_source_file_token1,
    STATE(127), 1,
      aux_sym_source_file_repeat1,
  [2096] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(364), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2104] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(322), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2112] = 3,
    ACTIONS(366), 1,
      aux_sym_source_file_token1,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
    STATE(136), 1,
      aux_sym_target_group_repeat1,
  [2122] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(370), 1,
      sym__name,
    STATE(108), 1,
      sym_module,
  [2132] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(311), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2140] = 2,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [2148] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(376), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [2156] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(378), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [2164] = 3,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    ACTIONS(380), 1,
      aux_sym_source_file_token1,
    STATE(153), 1,
      aux_sym_target_group_repeat1,
  [2174] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(382), 1,
      sym__name,
    STATE(161), 1,
      sym_alias,
  [2184] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(107), 1,
      anon_sym_const,
    STATE(158), 1,
      sym__constant,
  [2194] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(384), 1,
      sym__name,
    STATE(95), 1,
      sym_module,
  [2204] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(67), 1,
      sym__upname,
    STATE(181), 1,
      sym__constant_record,
  [2214] = 3,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    ACTIONS(372), 1,
      aux_sym_source_file_token1,
    ACTIONS(386), 1,
      anon_sym_LPAREN,
  [2224] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(357), 1,
      sym__name,
    STATE(202), 1,
      sym_alias,
  [2234] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(37), 1,
      sym__upname,
    STATE(39), 1,
      sym__constant_record,
  [2244] = 2,
    ACTIONS(388), 1,
      anon_sym_as,
    ACTIONS(345), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [2252] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(289), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2260] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(382), 1,
      sym__name,
    STATE(174), 1,
      sym_alias,
  [2270] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(357), 1,
      sym__name,
    STATE(213), 1,
      sym_alias,
  [2280] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(390), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2288] = 3,
    ACTIONS(392), 1,
      aux_sym_source_file_token1,
    ACTIONS(394), 1,
      anon_sym_RBRACE,
    ACTIONS(396), 1,
      anon_sym_as,
  [2298] = 2,
    ACTIONS(398), 1,
      anon_sym_as,
    ACTIONS(392), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [2306] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(53), 1,
      sym__upname,
    STATE(164), 1,
      sym__constant_record,
  [2316] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(97), 1,
      sym__upname,
    STATE(90), 1,
      sym__constant_type_constructor,
  [2326] = 3,
    ACTIONS(400), 1,
      aux_sym_source_file_token1,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
    STATE(153), 1,
      aux_sym_target_group_repeat1,
  [2336] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(382), 1,
      sym__name,
    STATE(173), 1,
      sym_alias,
  [2346] = 1,
    ACTIONS(405), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [2351] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
  [2358] = 2,
    ACTIONS(409), 1,
      aux_sym_source_file_token1,
    ACTIONS(411), 1,
      anon_sym_RBRACE,
  [2365] = 2,
    ACTIONS(413), 1,
      aux_sym_source_file_token1,
    ACTIONS(415), 1,
      anon_sym_RBRACE,
  [2372] = 1,
    ACTIONS(417), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [2377] = 2,
    ACTIONS(419), 1,
      aux_sym_source_file_token1,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
  [2384] = 2,
    ACTIONS(423), 1,
      aux_sym_source_file_token1,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
  [2391] = 1,
    ACTIONS(427), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [2396] = 2,
    ACTIONS(429), 1,
      aux_sym_source_file_token1,
    ACTIONS(431), 1,
      anon_sym_RBRACE,
  [2403] = 1,
    ACTIONS(433), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [2408] = 1,
    ACTIONS(435), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [2413] = 1,
    ACTIONS(437), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [2418] = 2,
    ACTIONS(439), 1,
      aux_sym_source_file_token1,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
  [2425] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(443), 1,
      sym__upname,
  [2432] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(443), 1,
      sym__name,
  [2439] = 2,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
    ACTIONS(445), 1,
      aux_sym_source_file_token1,
  [2446] = 1,
    ACTIONS(447), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [2451] = 1,
    ACTIONS(439), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [2456] = 2,
    ACTIONS(449), 1,
      aux_sym_source_file_token1,
    ACTIONS(451), 1,
      anon_sym_RBRACE,
  [2463] = 2,
    ACTIONS(453), 1,
      aux_sym_source_file_token1,
    ACTIONS(455), 1,
      anon_sym_RBRACE,
  [2470] = 1,
    ACTIONS(457), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [2475] = 2,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    ACTIONS(459), 1,
      aux_sym_source_file_token1,
  [2482] = 2,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    ACTIONS(405), 1,
      aux_sym_source_file_token1,
  [2489] = 1,
    ACTIONS(461), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [2494] = 2,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    ACTIONS(437), 1,
      aux_sym_source_file_token1,
  [2501] = 2,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    ACTIONS(435), 1,
      aux_sym_source_file_token1,
  [2508] = 2,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    ACTIONS(433), 1,
      aux_sym_source_file_token1,
  [2515] = 2,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    ACTIONS(427), 1,
      aux_sym_source_file_token1,
  [2522] = 2,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    ACTIONS(463), 1,
      aux_sym_source_file_token1,
  [2529] = 2,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    ACTIONS(461), 1,
      aux_sym_source_file_token1,
  [2536] = 2,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    ACTIONS(465), 1,
      aux_sym_source_file_token1,
  [2543] = 2,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    ACTIONS(467), 1,
      aux_sym_source_file_token1,
  [2550] = 2,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    ACTIONS(457), 1,
      aux_sym_source_file_token1,
  [2557] = 2,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    ACTIONS(469), 1,
      aux_sym_source_file_token1,
  [2564] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
  [2571] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(473), 1,
      anon_sym_LPAREN,
  [2578] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(475), 1,
      sym__name,
  [2585] = 1,
    ACTIONS(463), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [2590] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
  [2597] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(479), 1,
      anon_sym_EQ,
  [2604] = 1,
    ACTIONS(481), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [2609] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(483), 1,
      anon_sym_DOT,
  [2616] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(485), 1,
      anon_sym_EQ,
  [2623] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(487), 1,
      anon_sym_DOT,
  [2630] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
  [2637] = 1,
    ACTIONS(459), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [2642] = 1,
    ACTIONS(429), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [2647] = 1,
    ACTIONS(453), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [2652] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(491), 1,
      anon_sym_DOT,
  [2659] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
  [2666] = 1,
    ACTIONS(423), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [2671] = 1,
    ACTIONS(419), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [2676] = 1,
    ACTIONS(465), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [2681] = 1,
    ACTIONS(495), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [2686] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(497), 1,
      anon_sym_DOT,
  [2693] = 1,
    ACTIONS(469), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [2698] = 1,
    ACTIONS(359), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [2703] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(499), 1,
      anon_sym_EQ,
  [2710] = 1,
    ACTIONS(449), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [2715] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
  [2722] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(503), 1,
      sym__name,
  [2729] = 1,
    ACTIONS(467), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [2734] = 1,
    ACTIONS(413), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [2739] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
  [2746] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(507), 1,
      anon_sym_LBRACE,
  [2753] = 1,
    ACTIONS(409), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [2758] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(509), 1,
      sym_integer,
  [2765] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(511), 1,
      ts_builtin_sym_end,
  [2772] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(513), 1,
      sym__name,
  [2779] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(515), 1,
      sym_integer,
  [2786] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(517), 1,
      sym__name,
  [2793] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(519), 1,
      anon_sym_LBRACE,
  [2800] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
  [2807] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 81,
  [SMALL_STATE(5)] = 121,
  [SMALL_STATE(6)] = 161,
  [SMALL_STATE(7)] = 201,
  [SMALL_STATE(8)] = 238,
  [SMALL_STATE(9)] = 272,
  [SMALL_STATE(10)] = 306,
  [SMALL_STATE(11)] = 340,
  [SMALL_STATE(12)] = 374,
  [SMALL_STATE(13)] = 408,
  [SMALL_STATE(14)] = 442,
  [SMALL_STATE(15)] = 476,
  [SMALL_STATE(16)] = 510,
  [SMALL_STATE(17)] = 544,
  [SMALL_STATE(18)] = 578,
  [SMALL_STATE(19)] = 612,
  [SMALL_STATE(20)] = 646,
  [SMALL_STATE(21)] = 675,
  [SMALL_STATE(22)] = 704,
  [SMALL_STATE(23)] = 733,
  [SMALL_STATE(24)] = 759,
  [SMALL_STATE(25)] = 785,
  [SMALL_STATE(26)] = 811,
  [SMALL_STATE(27)] = 837,
  [SMALL_STATE(28)] = 862,
  [SMALL_STATE(29)] = 887,
  [SMALL_STATE(30)] = 912,
  [SMALL_STATE(31)] = 934,
  [SMALL_STATE(32)] = 948,
  [SMALL_STATE(33)] = 963,
  [SMALL_STATE(34)] = 974,
  [SMALL_STATE(35)] = 985,
  [SMALL_STATE(36)] = 996,
  [SMALL_STATE(37)] = 1011,
  [SMALL_STATE(38)] = 1026,
  [SMALL_STATE(39)] = 1037,
  [SMALL_STATE(40)] = 1048,
  [SMALL_STATE(41)] = 1059,
  [SMALL_STATE(42)] = 1070,
  [SMALL_STATE(43)] = 1081,
  [SMALL_STATE(44)] = 1092,
  [SMALL_STATE(45)] = 1107,
  [SMALL_STATE(46)] = 1118,
  [SMALL_STATE(47)] = 1129,
  [SMALL_STATE(48)] = 1140,
  [SMALL_STATE(49)] = 1155,
  [SMALL_STATE(50)] = 1170,
  [SMALL_STATE(51)] = 1182,
  [SMALL_STATE(52)] = 1196,
  [SMALL_STATE(53)] = 1210,
  [SMALL_STATE(54)] = 1224,
  [SMALL_STATE(55)] = 1234,
  [SMALL_STATE(56)] = 1244,
  [SMALL_STATE(57)] = 1258,
  [SMALL_STATE(58)] = 1269,
  [SMALL_STATE(59)] = 1278,
  [SMALL_STATE(60)] = 1291,
  [SMALL_STATE(61)] = 1304,
  [SMALL_STATE(62)] = 1315,
  [SMALL_STATE(63)] = 1328,
  [SMALL_STATE(64)] = 1339,
  [SMALL_STATE(65)] = 1350,
  [SMALL_STATE(66)] = 1359,
  [SMALL_STATE(67)] = 1372,
  [SMALL_STATE(68)] = 1381,
  [SMALL_STATE(69)] = 1394,
  [SMALL_STATE(70)] = 1407,
  [SMALL_STATE(71)] = 1420,
  [SMALL_STATE(72)] = 1433,
  [SMALL_STATE(73)] = 1446,
  [SMALL_STATE(74)] = 1459,
  [SMALL_STATE(75)] = 1472,
  [SMALL_STATE(76)] = 1485,
  [SMALL_STATE(77)] = 1498,
  [SMALL_STATE(78)] = 1511,
  [SMALL_STATE(79)] = 1524,
  [SMALL_STATE(80)] = 1537,
  [SMALL_STATE(81)] = 1550,
  [SMALL_STATE(82)] = 1563,
  [SMALL_STATE(83)] = 1576,
  [SMALL_STATE(84)] = 1589,
  [SMALL_STATE(85)] = 1602,
  [SMALL_STATE(86)] = 1615,
  [SMALL_STATE(87)] = 1626,
  [SMALL_STATE(88)] = 1639,
  [SMALL_STATE(89)] = 1652,
  [SMALL_STATE(90)] = 1665,
  [SMALL_STATE(91)] = 1674,
  [SMALL_STATE(92)] = 1687,
  [SMALL_STATE(93)] = 1700,
  [SMALL_STATE(94)] = 1713,
  [SMALL_STATE(95)] = 1726,
  [SMALL_STATE(96)] = 1739,
  [SMALL_STATE(97)] = 1752,
  [SMALL_STATE(98)] = 1761,
  [SMALL_STATE(99)] = 1774,
  [SMALL_STATE(100)] = 1783,
  [SMALL_STATE(101)] = 1796,
  [SMALL_STATE(102)] = 1805,
  [SMALL_STATE(103)] = 1818,
  [SMALL_STATE(104)] = 1831,
  [SMALL_STATE(105)] = 1840,
  [SMALL_STATE(106)] = 1849,
  [SMALL_STATE(107)] = 1858,
  [SMALL_STATE(108)] = 1871,
  [SMALL_STATE(109)] = 1882,
  [SMALL_STATE(110)] = 1891,
  [SMALL_STATE(111)] = 1904,
  [SMALL_STATE(112)] = 1917,
  [SMALL_STATE(113)] = 1930,
  [SMALL_STATE(114)] = 1943,
  [SMALL_STATE(115)] = 1956,
  [SMALL_STATE(116)] = 1969,
  [SMALL_STATE(117)] = 1978,
  [SMALL_STATE(118)] = 1991,
  [SMALL_STATE(119)] = 2000,
  [SMALL_STATE(120)] = 2013,
  [SMALL_STATE(121)] = 2026,
  [SMALL_STATE(122)] = 2036,
  [SMALL_STATE(123)] = 2046,
  [SMALL_STATE(124)] = 2056,
  [SMALL_STATE(125)] = 2066,
  [SMALL_STATE(126)] = 2076,
  [SMALL_STATE(127)] = 2086,
  [SMALL_STATE(128)] = 2096,
  [SMALL_STATE(129)] = 2104,
  [SMALL_STATE(130)] = 2112,
  [SMALL_STATE(131)] = 2122,
  [SMALL_STATE(132)] = 2132,
  [SMALL_STATE(133)] = 2140,
  [SMALL_STATE(134)] = 2148,
  [SMALL_STATE(135)] = 2156,
  [SMALL_STATE(136)] = 2164,
  [SMALL_STATE(137)] = 2174,
  [SMALL_STATE(138)] = 2184,
  [SMALL_STATE(139)] = 2194,
  [SMALL_STATE(140)] = 2204,
  [SMALL_STATE(141)] = 2214,
  [SMALL_STATE(142)] = 2224,
  [SMALL_STATE(143)] = 2234,
  [SMALL_STATE(144)] = 2244,
  [SMALL_STATE(145)] = 2252,
  [SMALL_STATE(146)] = 2260,
  [SMALL_STATE(147)] = 2270,
  [SMALL_STATE(148)] = 2280,
  [SMALL_STATE(149)] = 2288,
  [SMALL_STATE(150)] = 2298,
  [SMALL_STATE(151)] = 2306,
  [SMALL_STATE(152)] = 2316,
  [SMALL_STATE(153)] = 2326,
  [SMALL_STATE(154)] = 2336,
  [SMALL_STATE(155)] = 2346,
  [SMALL_STATE(156)] = 2351,
  [SMALL_STATE(157)] = 2358,
  [SMALL_STATE(158)] = 2365,
  [SMALL_STATE(159)] = 2372,
  [SMALL_STATE(160)] = 2377,
  [SMALL_STATE(161)] = 2384,
  [SMALL_STATE(162)] = 2391,
  [SMALL_STATE(163)] = 2396,
  [SMALL_STATE(164)] = 2403,
  [SMALL_STATE(165)] = 2408,
  [SMALL_STATE(166)] = 2413,
  [SMALL_STATE(167)] = 2418,
  [SMALL_STATE(168)] = 2425,
  [SMALL_STATE(169)] = 2432,
  [SMALL_STATE(170)] = 2439,
  [SMALL_STATE(171)] = 2446,
  [SMALL_STATE(172)] = 2451,
  [SMALL_STATE(173)] = 2456,
  [SMALL_STATE(174)] = 2463,
  [SMALL_STATE(175)] = 2470,
  [SMALL_STATE(176)] = 2475,
  [SMALL_STATE(177)] = 2482,
  [SMALL_STATE(178)] = 2489,
  [SMALL_STATE(179)] = 2494,
  [SMALL_STATE(180)] = 2501,
  [SMALL_STATE(181)] = 2508,
  [SMALL_STATE(182)] = 2515,
  [SMALL_STATE(183)] = 2522,
  [SMALL_STATE(184)] = 2529,
  [SMALL_STATE(185)] = 2536,
  [SMALL_STATE(186)] = 2543,
  [SMALL_STATE(187)] = 2550,
  [SMALL_STATE(188)] = 2557,
  [SMALL_STATE(189)] = 2564,
  [SMALL_STATE(190)] = 2571,
  [SMALL_STATE(191)] = 2578,
  [SMALL_STATE(192)] = 2585,
  [SMALL_STATE(193)] = 2590,
  [SMALL_STATE(194)] = 2597,
  [SMALL_STATE(195)] = 2604,
  [SMALL_STATE(196)] = 2609,
  [SMALL_STATE(197)] = 2616,
  [SMALL_STATE(198)] = 2623,
  [SMALL_STATE(199)] = 2630,
  [SMALL_STATE(200)] = 2637,
  [SMALL_STATE(201)] = 2642,
  [SMALL_STATE(202)] = 2647,
  [SMALL_STATE(203)] = 2652,
  [SMALL_STATE(204)] = 2659,
  [SMALL_STATE(205)] = 2666,
  [SMALL_STATE(206)] = 2671,
  [SMALL_STATE(207)] = 2676,
  [SMALL_STATE(208)] = 2681,
  [SMALL_STATE(209)] = 2686,
  [SMALL_STATE(210)] = 2693,
  [SMALL_STATE(211)] = 2698,
  [SMALL_STATE(212)] = 2703,
  [SMALL_STATE(213)] = 2710,
  [SMALL_STATE(214)] = 2715,
  [SMALL_STATE(215)] = 2722,
  [SMALL_STATE(216)] = 2729,
  [SMALL_STATE(217)] = 2734,
  [SMALL_STATE(218)] = 2739,
  [SMALL_STATE(219)] = 2746,
  [SMALL_STATE(220)] = 2753,
  [SMALL_STATE(221)] = 2758,
  [SMALL_STATE(222)] = 2765,
  [SMALL_STATE(223)] = 2772,
  [SMALL_STATE(224)] = 2779,
  [SMALL_STATE(225)] = 2786,
  [SMALL_STATE(226)] = 2793,
  [SMALL_STATE(227)] = 2800,
  [SMALL_STATE(228)] = 2807,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant_record, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant_record, 5),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant_bit_string, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant_list, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(215),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant_bit_string, 3, .production_id = 11),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant_remote_record, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant_value, 1, .production_id = 7),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant_record, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant_tuple, 4),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant_list, 4),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(191),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant_tuple, 5),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant_record, 4),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant_bit_string, 4, .production_id = 11),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant_type_constructor, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__constant_bit_string_segment_options_repeat1, 2),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__constant_bit_string_segment_options_repeat1, 2), SHIFT_REPEAT(3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant_bit_string_segment_options, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__constant_tuple_repeat1, 2), SHIFT_REPEAT(11),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__constant_tuple_repeat1, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant_bit_string_segment_options, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant_bit_string_segment, 1, .production_id = 9),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_tuple_type, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unqualified_import, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_type_constructor, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_hole, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant_record_arg, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_remote_type_constructor, 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, .production_id = 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2, .production_id = 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bit_string_segment_option_unit, 4, .production_id = 18),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_import_repeat1, 2),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_import_repeat1, 2), SHIFT_REPEAT(74),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant_bit_string_segment_option_size, 4, .production_id = 17),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant_bit_string_segment_option, 1, .production_id = 13),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant_type_constructor, 5),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constant_tuple_type_repeat1, 2), SHIFT_REPEAT(24),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_constant_tuple_type_repeat1, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_tuple_type, 5),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__constant_record_repeat1, 2), SHIFT_REPEAT(121),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__constant_record_repeat1, 2),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__constant_bit_string_repeat1, 2), SHIFT_REPEAT(7),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__constant_bit_string_repeat1, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_tuple_type, 4),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant_type_constructor, 4),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 7, .production_id = 2),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 7, .production_id = 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant_record_arg, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_record, 1),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__constant_bit_string_repeat1, 2, .production_id = 11),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant_bit_string_segment, 3, .production_id = 14),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unqualified_import, 3, .production_id = 12),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 6, .production_id = 2),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 6, .production_id = 2),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_group_repeat1, 2), SHIFT_REPEAT(30),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_target_group_repeat1, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_bit_string, 2),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, .production_id = 1),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1, .production_id = 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_public_constant, 2, .production_id = 3),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_public_constant, 2, .production_id = 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_group, 7, .production_id = 4),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, .production_id = 5),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 4, .production_id = 5),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_record, 3),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant, 4, .production_id = 6),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant, 4, .production_id = 6),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_remote_record, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_bit_string, 3, .production_id = 11),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_list, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant, 5, .production_id = 10),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant, 5, .production_id = 10),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_group_repeat1, 2),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_group, 6, .production_id = 4),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 8, .production_id = 15),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 8, .production_id = 15),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 9, .production_id = 16),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 9, .production_id = 16),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_tuple, 5),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_value, 1, .production_id = 7),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_list, 4),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_tuple, 4),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_bit_string, 4, .production_id = 11),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_record, 4),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_record, 5),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_group, 5, .production_id = 4),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant_type_annotation, 2, .production_id = 8),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_group, 4, .production_id = 4),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 1),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [511] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gleam(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
