#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 101
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 190
#define ALIAS_COUNT 0
#define TOKEN_COUNT 151
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  sym_identifier = 1,
  anon_sym_pragma = 2,
  anon_sym_solidity = 3,
  sym__solidity_version = 4,
  anon_sym_LT_EQ = 5,
  anon_sym_LT = 6,
  anon_sym_CARET = 7,
  anon_sym_GT = 8,
  anon_sym_GT_EQ = 9,
  anon_sym_import = 10,
  anon_sym_as = 11,
  anon_sym_from = 12,
  anon_sym_STAR = 13,
  anon_sym_LBRACE = 14,
  anon_sym_COMMA = 15,
  anon_sym_RBRACE = 16,
  anon_sym_abstract = 17,
  anon_sym_contract = 18,
  anon_sym_interface = 19,
  anon_sym_library = 20,
  anon_sym_is = 21,
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  anon_sym_EQ = 24,
  anon_sym_public = 25,
  anon_sym_internal = 26,
  anon_sym_private = 27,
  anon_sym_constant = 28,
  anon_sym_immutable = 29,
  anon_sym_override = 30,
  anon_sym_modifier = 31,
  anon_sym_function = 32,
  anon_sym_DOT = 33,
  anon_sym_address = 34,
  anon_sym_payable = 35,
  anon_sym_bool = 36,
  anon_sym_string = 37,
  anon_sym_var = 38,
  anon_sym_int = 39,
  anon_sym_int8 = 40,
  anon_sym_int16 = 41,
  anon_sym_int24 = 42,
  anon_sym_int32 = 43,
  anon_sym_int40 = 44,
  anon_sym_int48 = 45,
  anon_sym_int56 = 46,
  anon_sym_int64 = 47,
  anon_sym_int72 = 48,
  anon_sym_int80 = 49,
  anon_sym_int88 = 50,
  anon_sym_int96 = 51,
  anon_sym_int104 = 52,
  anon_sym_int112 = 53,
  anon_sym_int120 = 54,
  anon_sym_int128 = 55,
  anon_sym_int136 = 56,
  anon_sym_int144 = 57,
  anon_sym_int152 = 58,
  anon_sym_int160 = 59,
  anon_sym_int168 = 60,
  anon_sym_int176 = 61,
  anon_sym_int184 = 62,
  anon_sym_int192 = 63,
  anon_sym_int200 = 64,
  anon_sym_int208 = 65,
  anon_sym_int216 = 66,
  anon_sym_int224 = 67,
  anon_sym_int232 = 68,
  anon_sym_int240 = 69,
  anon_sym_int248 = 70,
  anon_sym_int256 = 71,
  anon_sym_uint = 72,
  anon_sym_uint8 = 73,
  anon_sym_uint16 = 74,
  anon_sym_uint24 = 75,
  anon_sym_uint32 = 76,
  anon_sym_uint40 = 77,
  anon_sym_uint48 = 78,
  anon_sym_uint56 = 79,
  anon_sym_uint64 = 80,
  anon_sym_uint72 = 81,
  anon_sym_uint80 = 82,
  anon_sym_uint88 = 83,
  anon_sym_uint96 = 84,
  anon_sym_uint104 = 85,
  anon_sym_uint112 = 86,
  anon_sym_uint120 = 87,
  anon_sym_uint128 = 88,
  anon_sym_uint136 = 89,
  anon_sym_uint144 = 90,
  anon_sym_uint152 = 91,
  anon_sym_uint160 = 92,
  anon_sym_uint168 = 93,
  anon_sym_uint176 = 94,
  anon_sym_uint184 = 95,
  anon_sym_uint192 = 96,
  anon_sym_uint200 = 97,
  anon_sym_uint208 = 98,
  anon_sym_uint216 = 99,
  anon_sym_uint224 = 100,
  anon_sym_uint232 = 101,
  anon_sym_uint240 = 102,
  anon_sym_uint248 = 103,
  anon_sym_uint256 = 104,
  anon_sym_byte = 105,
  anon_sym_bytes = 106,
  anon_sym_bytes1 = 107,
  anon_sym_bytes2 = 108,
  anon_sym_bytes3 = 109,
  anon_sym_bytes4 = 110,
  anon_sym_bytes5 = 111,
  anon_sym_bytes6 = 112,
  anon_sym_bytes7 = 113,
  anon_sym_bytes8 = 114,
  anon_sym_bytes9 = 115,
  anon_sym_bytes10 = 116,
  anon_sym_bytes11 = 117,
  anon_sym_bytes12 = 118,
  anon_sym_bytes13 = 119,
  anon_sym_bytes14 = 120,
  anon_sym_bytes15 = 121,
  anon_sym_bytes16 = 122,
  anon_sym_bytes17 = 123,
  anon_sym_bytes18 = 124,
  anon_sym_bytes19 = 125,
  anon_sym_bytes20 = 126,
  anon_sym_bytes21 = 127,
  anon_sym_bytes22 = 128,
  anon_sym_bytes23 = 129,
  anon_sym_bytes24 = 130,
  anon_sym_bytes25 = 131,
  anon_sym_bytes26 = 132,
  anon_sym_bytes27 = 133,
  anon_sym_bytes28 = 134,
  anon_sym_bytes29 = 135,
  anon_sym_bytes30 = 136,
  anon_sym_bytes31 = 137,
  anon_sym_bytes32 = 138,
  anon_sym_fixed = 139,
  aux_sym__fixed_token1 = 140,
  anon_sym_ufixed = 141,
  aux_sym__ufixed_token1 = 142,
  sym__semicolon = 143,
  sym_number = 144,
  anon_sym_DQUOTE = 145,
  aux_sym_string_token1 = 146,
  anon_sym_SQUOTE = 147,
  aux_sym_string_token2 = 148,
  sym_escape_sequence = 149,
  sym_comment = 150,
  sym_program = 151,
  sym_pragmaDirective = 152,
  sym__pragma_version_constraint = 153,
  sym__solidity_version_comparison_operator = 154,
  sym_import_statement = 155,
  sym__source_import = 156,
  sym__import_clause = 157,
  sym__from_clause = 158,
  sym__single_import = 159,
  sym__multiple_import = 160,
  sym__import_declaration = 161,
  sym__statement = 162,
  sym_contract_declaration = 163,
  sym_class_heritage = 164,
  sym__inheritance_specifier = 165,
  sym_contract_body = 166,
  sym_field_definition = 167,
  sym_field_visibility = 168,
  sym_modifier_definition = 169,
  sym_method_definition = 170,
  sym__expression = 171,
  sym_type_name = 172,
  sym__user_defined_type_name = 173,
  sym__primitive_type = 174,
  sym__int = 175,
  sym__uint = 176,
  sym__bytes = 177,
  sym__fixed = 178,
  sym__ufixed = 179,
  sym_string = 180,
  aux_sym_program_repeat1 = 181,
  aux_sym_pragmaDirective_repeat1 = 182,
  aux_sym__multiple_import_repeat1 = 183,
  aux_sym_class_heritage_repeat1 = 184,
  aux_sym__inheritance_specifier_repeat1 = 185,
  aux_sym_contract_body_repeat1 = 186,
  aux_sym__user_defined_type_name_repeat1 = 187,
  aux_sym_string_repeat1 = 188,
  aux_sym_string_repeat2 = 189,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_pragma] = "pragma",
  [anon_sym_solidity] = "solidity",
  [sym__solidity_version] = "_solidity_version",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT] = "<",
  [anon_sym_CARET] = "^",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_import] = "import",
  [anon_sym_as] = "as",
  [anon_sym_from] = "from",
  [anon_sym_STAR] = "*",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_abstract] = "abstract",
  [anon_sym_contract] = "contract",
  [anon_sym_interface] = "interface",
  [anon_sym_library] = "library",
  [anon_sym_is] = "is",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [anon_sym_public] = "public",
  [anon_sym_internal] = "internal",
  [anon_sym_private] = "private",
  [anon_sym_constant] = "constant",
  [anon_sym_immutable] = "immutable",
  [anon_sym_override] = "override",
  [anon_sym_modifier] = "modifier",
  [anon_sym_function] = "function",
  [anon_sym_DOT] = ".",
  [anon_sym_address] = "address",
  [anon_sym_payable] = "payable",
  [anon_sym_bool] = "bool",
  [anon_sym_string] = "string",
  [anon_sym_var] = "var",
  [anon_sym_int] = "int",
  [anon_sym_int8] = "int8",
  [anon_sym_int16] = "int16",
  [anon_sym_int24] = "int24",
  [anon_sym_int32] = "int32",
  [anon_sym_int40] = "int40",
  [anon_sym_int48] = "int48",
  [anon_sym_int56] = "int56",
  [anon_sym_int64] = "int64",
  [anon_sym_int72] = "int72",
  [anon_sym_int80] = "int80",
  [anon_sym_int88] = "int88",
  [anon_sym_int96] = "int96",
  [anon_sym_int104] = "int104",
  [anon_sym_int112] = "int112",
  [anon_sym_int120] = "int120",
  [anon_sym_int128] = "int128",
  [anon_sym_int136] = "int136",
  [anon_sym_int144] = "int144",
  [anon_sym_int152] = "int152",
  [anon_sym_int160] = "int160",
  [anon_sym_int168] = "int168",
  [anon_sym_int176] = "int176",
  [anon_sym_int184] = "int184",
  [anon_sym_int192] = "int192",
  [anon_sym_int200] = "int200",
  [anon_sym_int208] = "int208",
  [anon_sym_int216] = "int216",
  [anon_sym_int224] = "int224",
  [anon_sym_int232] = "int232",
  [anon_sym_int240] = "int240",
  [anon_sym_int248] = "int248",
  [anon_sym_int256] = "int256",
  [anon_sym_uint] = "uint",
  [anon_sym_uint8] = "uint8",
  [anon_sym_uint16] = "uint16",
  [anon_sym_uint24] = "uint24",
  [anon_sym_uint32] = "uint32",
  [anon_sym_uint40] = "uint40",
  [anon_sym_uint48] = "uint48",
  [anon_sym_uint56] = "uint56",
  [anon_sym_uint64] = "uint64",
  [anon_sym_uint72] = "uint72",
  [anon_sym_uint80] = "uint80",
  [anon_sym_uint88] = "uint88",
  [anon_sym_uint96] = "uint96",
  [anon_sym_uint104] = "uint104",
  [anon_sym_uint112] = "uint112",
  [anon_sym_uint120] = "uint120",
  [anon_sym_uint128] = "uint128",
  [anon_sym_uint136] = "uint136",
  [anon_sym_uint144] = "uint144",
  [anon_sym_uint152] = "uint152",
  [anon_sym_uint160] = "uint160",
  [anon_sym_uint168] = "uint168",
  [anon_sym_uint176] = "uint176",
  [anon_sym_uint184] = "uint184",
  [anon_sym_uint192] = "uint192",
  [anon_sym_uint200] = "uint200",
  [anon_sym_uint208] = "uint208",
  [anon_sym_uint216] = "uint216",
  [anon_sym_uint224] = "uint224",
  [anon_sym_uint232] = "uint232",
  [anon_sym_uint240] = "uint240",
  [anon_sym_uint248] = "uint248",
  [anon_sym_uint256] = "uint256",
  [anon_sym_byte] = "byte",
  [anon_sym_bytes] = "bytes",
  [anon_sym_bytes1] = "bytes1",
  [anon_sym_bytes2] = "bytes2",
  [anon_sym_bytes3] = "bytes3",
  [anon_sym_bytes4] = "bytes4",
  [anon_sym_bytes5] = "bytes5",
  [anon_sym_bytes6] = "bytes6",
  [anon_sym_bytes7] = "bytes7",
  [anon_sym_bytes8] = "bytes8",
  [anon_sym_bytes9] = "bytes9",
  [anon_sym_bytes10] = "bytes10",
  [anon_sym_bytes11] = "bytes11",
  [anon_sym_bytes12] = "bytes12",
  [anon_sym_bytes13] = "bytes13",
  [anon_sym_bytes14] = "bytes14",
  [anon_sym_bytes15] = "bytes15",
  [anon_sym_bytes16] = "bytes16",
  [anon_sym_bytes17] = "bytes17",
  [anon_sym_bytes18] = "bytes18",
  [anon_sym_bytes19] = "bytes19",
  [anon_sym_bytes20] = "bytes20",
  [anon_sym_bytes21] = "bytes21",
  [anon_sym_bytes22] = "bytes22",
  [anon_sym_bytes23] = "bytes23",
  [anon_sym_bytes24] = "bytes24",
  [anon_sym_bytes25] = "bytes25",
  [anon_sym_bytes26] = "bytes26",
  [anon_sym_bytes27] = "bytes27",
  [anon_sym_bytes28] = "bytes28",
  [anon_sym_bytes29] = "bytes29",
  [anon_sym_bytes30] = "bytes30",
  [anon_sym_bytes31] = "bytes31",
  [anon_sym_bytes32] = "bytes32",
  [anon_sym_fixed] = "fixed",
  [aux_sym__fixed_token1] = "_fixed_token1",
  [anon_sym_ufixed] = "ufixed",
  [aux_sym__ufixed_token1] = "_ufixed_token1",
  [sym__semicolon] = "_semicolon",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token2] = "string_token2",
  [sym_escape_sequence] = "escape_sequence",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym_pragmaDirective] = "pragmaDirective",
  [sym__pragma_version_constraint] = "_pragma_version_constraint",
  [sym__solidity_version_comparison_operator] = "_solidity_version_comparison_operator",
  [sym_import_statement] = "import_statement",
  [sym__source_import] = "_source_import",
  [sym__import_clause] = "_import_clause",
  [sym__from_clause] = "_from_clause",
  [sym__single_import] = "_single_import",
  [sym__multiple_import] = "_multiple_import",
  [sym__import_declaration] = "_import_declaration",
  [sym__statement] = "_statement",
  [sym_contract_declaration] = "contract_declaration",
  [sym_class_heritage] = "class_heritage",
  [sym__inheritance_specifier] = "_inheritance_specifier",
  [sym_contract_body] = "contract_body",
  [sym_field_definition] = "field_definition",
  [sym_field_visibility] = "field_visibility",
  [sym_modifier_definition] = "modifier_definition",
  [sym_method_definition] = "method_definition",
  [sym__expression] = "_expression",
  [sym_type_name] = "type_name",
  [sym__user_defined_type_name] = "_user_defined_type_name",
  [sym__primitive_type] = "_primitive_type",
  [sym__int] = "_int",
  [sym__uint] = "_uint",
  [sym__bytes] = "_bytes",
  [sym__fixed] = "_fixed",
  [sym__ufixed] = "_ufixed",
  [sym_string] = "string",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_pragmaDirective_repeat1] = "pragmaDirective_repeat1",
  [aux_sym__multiple_import_repeat1] = "_multiple_import_repeat1",
  [aux_sym_class_heritage_repeat1] = "class_heritage_repeat1",
  [aux_sym__inheritance_specifier_repeat1] = "_inheritance_specifier_repeat1",
  [aux_sym_contract_body_repeat1] = "contract_body_repeat1",
  [aux_sym__user_defined_type_name_repeat1] = "_user_defined_type_name_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_pragma] = anon_sym_pragma,
  [anon_sym_solidity] = anon_sym_solidity,
  [sym__solidity_version] = sym__solidity_version,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_contract] = anon_sym_contract,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_library] = anon_sym_library,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_internal] = anon_sym_internal,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_constant] = anon_sym_constant,
  [anon_sym_immutable] = anon_sym_immutable,
  [anon_sym_override] = anon_sym_override,
  [anon_sym_modifier] = anon_sym_modifier,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_address] = anon_sym_address,
  [anon_sym_payable] = anon_sym_payable,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_int8] = anon_sym_int8,
  [anon_sym_int16] = anon_sym_int16,
  [anon_sym_int24] = anon_sym_int24,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int40] = anon_sym_int40,
  [anon_sym_int48] = anon_sym_int48,
  [anon_sym_int56] = anon_sym_int56,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_int72] = anon_sym_int72,
  [anon_sym_int80] = anon_sym_int80,
  [anon_sym_int88] = anon_sym_int88,
  [anon_sym_int96] = anon_sym_int96,
  [anon_sym_int104] = anon_sym_int104,
  [anon_sym_int112] = anon_sym_int112,
  [anon_sym_int120] = anon_sym_int120,
  [anon_sym_int128] = anon_sym_int128,
  [anon_sym_int136] = anon_sym_int136,
  [anon_sym_int144] = anon_sym_int144,
  [anon_sym_int152] = anon_sym_int152,
  [anon_sym_int160] = anon_sym_int160,
  [anon_sym_int168] = anon_sym_int168,
  [anon_sym_int176] = anon_sym_int176,
  [anon_sym_int184] = anon_sym_int184,
  [anon_sym_int192] = anon_sym_int192,
  [anon_sym_int200] = anon_sym_int200,
  [anon_sym_int208] = anon_sym_int208,
  [anon_sym_int216] = anon_sym_int216,
  [anon_sym_int224] = anon_sym_int224,
  [anon_sym_int232] = anon_sym_int232,
  [anon_sym_int240] = anon_sym_int240,
  [anon_sym_int248] = anon_sym_int248,
  [anon_sym_int256] = anon_sym_int256,
  [anon_sym_uint] = anon_sym_uint,
  [anon_sym_uint8] = anon_sym_uint8,
  [anon_sym_uint16] = anon_sym_uint16,
  [anon_sym_uint24] = anon_sym_uint24,
  [anon_sym_uint32] = anon_sym_uint32,
  [anon_sym_uint40] = anon_sym_uint40,
  [anon_sym_uint48] = anon_sym_uint48,
  [anon_sym_uint56] = anon_sym_uint56,
  [anon_sym_uint64] = anon_sym_uint64,
  [anon_sym_uint72] = anon_sym_uint72,
  [anon_sym_uint80] = anon_sym_uint80,
  [anon_sym_uint88] = anon_sym_uint88,
  [anon_sym_uint96] = anon_sym_uint96,
  [anon_sym_uint104] = anon_sym_uint104,
  [anon_sym_uint112] = anon_sym_uint112,
  [anon_sym_uint120] = anon_sym_uint120,
  [anon_sym_uint128] = anon_sym_uint128,
  [anon_sym_uint136] = anon_sym_uint136,
  [anon_sym_uint144] = anon_sym_uint144,
  [anon_sym_uint152] = anon_sym_uint152,
  [anon_sym_uint160] = anon_sym_uint160,
  [anon_sym_uint168] = anon_sym_uint168,
  [anon_sym_uint176] = anon_sym_uint176,
  [anon_sym_uint184] = anon_sym_uint184,
  [anon_sym_uint192] = anon_sym_uint192,
  [anon_sym_uint200] = anon_sym_uint200,
  [anon_sym_uint208] = anon_sym_uint208,
  [anon_sym_uint216] = anon_sym_uint216,
  [anon_sym_uint224] = anon_sym_uint224,
  [anon_sym_uint232] = anon_sym_uint232,
  [anon_sym_uint240] = anon_sym_uint240,
  [anon_sym_uint248] = anon_sym_uint248,
  [anon_sym_uint256] = anon_sym_uint256,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_bytes1] = anon_sym_bytes1,
  [anon_sym_bytes2] = anon_sym_bytes2,
  [anon_sym_bytes3] = anon_sym_bytes3,
  [anon_sym_bytes4] = anon_sym_bytes4,
  [anon_sym_bytes5] = anon_sym_bytes5,
  [anon_sym_bytes6] = anon_sym_bytes6,
  [anon_sym_bytes7] = anon_sym_bytes7,
  [anon_sym_bytes8] = anon_sym_bytes8,
  [anon_sym_bytes9] = anon_sym_bytes9,
  [anon_sym_bytes10] = anon_sym_bytes10,
  [anon_sym_bytes11] = anon_sym_bytes11,
  [anon_sym_bytes12] = anon_sym_bytes12,
  [anon_sym_bytes13] = anon_sym_bytes13,
  [anon_sym_bytes14] = anon_sym_bytes14,
  [anon_sym_bytes15] = anon_sym_bytes15,
  [anon_sym_bytes16] = anon_sym_bytes16,
  [anon_sym_bytes17] = anon_sym_bytes17,
  [anon_sym_bytes18] = anon_sym_bytes18,
  [anon_sym_bytes19] = anon_sym_bytes19,
  [anon_sym_bytes20] = anon_sym_bytes20,
  [anon_sym_bytes21] = anon_sym_bytes21,
  [anon_sym_bytes22] = anon_sym_bytes22,
  [anon_sym_bytes23] = anon_sym_bytes23,
  [anon_sym_bytes24] = anon_sym_bytes24,
  [anon_sym_bytes25] = anon_sym_bytes25,
  [anon_sym_bytes26] = anon_sym_bytes26,
  [anon_sym_bytes27] = anon_sym_bytes27,
  [anon_sym_bytes28] = anon_sym_bytes28,
  [anon_sym_bytes29] = anon_sym_bytes29,
  [anon_sym_bytes30] = anon_sym_bytes30,
  [anon_sym_bytes31] = anon_sym_bytes31,
  [anon_sym_bytes32] = anon_sym_bytes32,
  [anon_sym_fixed] = anon_sym_fixed,
  [aux_sym__fixed_token1] = aux_sym__fixed_token1,
  [anon_sym_ufixed] = anon_sym_ufixed,
  [aux_sym__ufixed_token1] = aux_sym__ufixed_token1,
  [sym__semicolon] = sym__semicolon,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_comment] = sym_comment,
  [sym_program] = sym_program,
  [sym_pragmaDirective] = sym_pragmaDirective,
  [sym__pragma_version_constraint] = sym__pragma_version_constraint,
  [sym__solidity_version_comparison_operator] = sym__solidity_version_comparison_operator,
  [sym_import_statement] = sym_import_statement,
  [sym__source_import] = sym__source_import,
  [sym__import_clause] = sym__import_clause,
  [sym__from_clause] = sym__from_clause,
  [sym__single_import] = sym__single_import,
  [sym__multiple_import] = sym__multiple_import,
  [sym__import_declaration] = sym__import_declaration,
  [sym__statement] = sym__statement,
  [sym_contract_declaration] = sym_contract_declaration,
  [sym_class_heritage] = sym_class_heritage,
  [sym__inheritance_specifier] = sym__inheritance_specifier,
  [sym_contract_body] = sym_contract_body,
  [sym_field_definition] = sym_field_definition,
  [sym_field_visibility] = sym_field_visibility,
  [sym_modifier_definition] = sym_modifier_definition,
  [sym_method_definition] = sym_method_definition,
  [sym__expression] = sym__expression,
  [sym_type_name] = sym_type_name,
  [sym__user_defined_type_name] = sym__user_defined_type_name,
  [sym__primitive_type] = sym__primitive_type,
  [sym__int] = sym__int,
  [sym__uint] = sym__uint,
  [sym__bytes] = sym__bytes,
  [sym__fixed] = sym__fixed,
  [sym__ufixed] = sym__ufixed,
  [sym_string] = sym_string,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_pragmaDirective_repeat1] = aux_sym_pragmaDirective_repeat1,
  [aux_sym__multiple_import_repeat1] = aux_sym__multiple_import_repeat1,
  [aux_sym_class_heritage_repeat1] = aux_sym_class_heritage_repeat1,
  [aux_sym__inheritance_specifier_repeat1] = aux_sym__inheritance_specifier_repeat1,
  [aux_sym_contract_body_repeat1] = aux_sym_contract_body_repeat1,
  [aux_sym__user_defined_type_name_repeat1] = aux_sym__user_defined_type_name_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_pragma] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_solidity] = {
    .visible = true,
    .named = false,
  },
  [sym__solidity_version] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_library] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_internal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_immutable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_override] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_modifier] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_address] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_payable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int24] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int40] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int48] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int56] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int72] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int80] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int88] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int96] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int104] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int112] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int120] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int136] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int144] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int152] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int160] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int168] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int176] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int184] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int192] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int200] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int208] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int216] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int224] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int232] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int240] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int248] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int256] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint24] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint40] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint48] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint56] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint72] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint80] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint88] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint96] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint104] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint112] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint120] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint136] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint144] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint152] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint160] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint168] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint176] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint184] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint192] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint200] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint208] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint216] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint224] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint232] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint240] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint248] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint256] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes15] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes17] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes18] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes19] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes20] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes21] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes22] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes23] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes24] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes25] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes26] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes27] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes28] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes29] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes30] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes31] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixed] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__fixed_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_ufixed] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ufixed_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__semicolon] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_pragmaDirective] = {
    .visible = true,
    .named = true,
  },
  [sym__pragma_version_constraint] = {
    .visible = false,
    .named = true,
  },
  [sym__solidity_version_comparison_operator] = {
    .visible = false,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__source_import] = {
    .visible = false,
    .named = true,
  },
  [sym__import_clause] = {
    .visible = false,
    .named = true,
  },
  [sym__from_clause] = {
    .visible = false,
    .named = true,
  },
  [sym__single_import] = {
    .visible = false,
    .named = true,
  },
  [sym__multiple_import] = {
    .visible = false,
    .named = true,
  },
  [sym__import_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_contract_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_class_heritage] = {
    .visible = true,
    .named = true,
  },
  [sym__inheritance_specifier] = {
    .visible = false,
    .named = true,
  },
  [sym_contract_body] = {
    .visible = true,
    .named = true,
  },
  [sym_field_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_field_visibility] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_method_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym__user_defined_type_name] = {
    .visible = false,
    .named = true,
  },
  [sym__primitive_type] = {
    .visible = false,
    .named = true,
  },
  [sym__int] = {
    .visible = false,
    .named = true,
  },
  [sym__uint] = {
    .visible = false,
    .named = true,
  },
  [sym__bytes] = {
    .visible = false,
    .named = true,
  },
  [sym__fixed] = {
    .visible = false,
    .named = true,
  },
  [sym__ufixed] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pragmaDirective_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__multiple_import_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_heritage_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__inheritance_specifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_contract_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__user_defined_type_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_name = 2,
  field_source = 3,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_name] = "name",
  [field_source] = "source",
};

static const TSFieldMapSlice ts_field_map_slices[9] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_source, 0},
  [1] =
    {field_source, 1, .inherited = true},
  [2] =
    {field_body, 2},
    {field_name, 1},
  [4] =
    {field_source, 1},
  [5] =
    {field_source, 2, .inherited = true},
  [6] =
    {field_body, 3},
    {field_name, 2},
  [8] =
    {field_body, 3},
    {field_name, 1},
  [10] =
    {field_body, 4},
    {field_name, 2},
};

static TSSymbol ts_alias_sequences[9][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(69);
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(190);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(206);
      if (lookahead == 'f') ADVANCE(197);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == 'u') ADVANCE(196);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(67)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(220);
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(216);
      if (lookahead == '\r') ADVANCE(223);
      if (lookahead == 'u') ADVANCE(57);
      if (lookahead == 'x') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(226);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(213);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(209);
      if (lookahead == '\r') ADVANCE(224);
      if (lookahead == 'u') ADVANCE(57);
      if (lookahead == 'x') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(226);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(228);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(227);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(91);
      if (lookahead == '8') ADVANCE(92);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(101);
      if (lookahead == '8') ADVANCE(102);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(111);
      if (lookahead == '8') ADVANCE(112);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(124);
      if (lookahead == '8') ADVANCE(125);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(134);
      if (lookahead == '8') ADVANCE(135);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(144);
      if (lookahead == '8') ADVANCE(145);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(33);
      if (lookahead == '1') ADVANCE(22);
      if (lookahead == '2') ADVANCE(11);
      if (lookahead == '3') ADVANCE(44);
      if (lookahead == '4') ADVANCE(34);
      if (lookahead == '5') ADVANCE(23);
      if (lookahead == '6') ADVANCE(88);
      if (lookahead == '7') ADVANCE(45);
      if (lookahead == '8') ADVANCE(35);
      if (lookahead == '9') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(12);
      if (lookahead == '1') ADVANCE(46);
      if (lookahead == '2') ADVANCE(36);
      if (lookahead == '3') ADVANCE(25);
      if (lookahead == '4') ADVANCE(89);
      if (lookahead == '5') ADVANCE(47);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == '1') ADVANCE(52);
      if (lookahead == '2') ADVANCE(41);
      if (lookahead == '3') ADVANCE(31);
      if (lookahead == '4') ADVANCE(122);
      if (lookahead == '5') ADVANCE(53);
      END_STATE();
    case 19:
      if (lookahead == '0') ADVANCE(38);
      if (lookahead == '1') ADVANCE(28);
      if (lookahead == '2') ADVANCE(14);
      if (lookahead == '3') ADVANCE(50);
      if (lookahead == '4') ADVANCE(39);
      if (lookahead == '5') ADVANCE(29);
      if (lookahead == '6') ADVANCE(121);
      if (lookahead == '7') ADVANCE(51);
      if (lookahead == '8') ADVANCE(40);
      if (lookahead == '9') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(90);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(95);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(100);
      END_STATE();
    case 23:
      if (lookahead == '2') ADVANCE(105);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(110);
      END_STATE();
    case 25:
      if (lookahead == '2') ADVANCE(115);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(123);
      END_STATE();
    case 27:
      if (lookahead == '2') ADVANCE(128);
      END_STATE();
    case 28:
      if (lookahead == '2') ADVANCE(133);
      END_STATE();
    case 29:
      if (lookahead == '2') ADVANCE(138);
      END_STATE();
    case 30:
      if (lookahead == '2') ADVANCE(143);
      END_STATE();
    case 31:
      if (lookahead == '2') ADVANCE(148);
      END_STATE();
    case 32:
      if (lookahead == '4') ADVANCE(94);
      END_STATE();
    case 33:
      if (lookahead == '4') ADVANCE(99);
      END_STATE();
    case 34:
      if (lookahead == '4') ADVANCE(104);
      END_STATE();
    case 35:
      if (lookahead == '4') ADVANCE(109);
      END_STATE();
    case 36:
      if (lookahead == '4') ADVANCE(114);
      END_STATE();
    case 37:
      if (lookahead == '4') ADVANCE(127);
      END_STATE();
    case 38:
      if (lookahead == '4') ADVANCE(132);
      END_STATE();
    case 39:
      if (lookahead == '4') ADVANCE(137);
      END_STATE();
    case 40:
      if (lookahead == '4') ADVANCE(142);
      END_STATE();
    case 41:
      if (lookahead == '4') ADVANCE(147);
      END_STATE();
    case 42:
      if (lookahead == '6') ADVANCE(93);
      END_STATE();
    case 43:
      if (lookahead == '6') ADVANCE(98);
      END_STATE();
    case 44:
      if (lookahead == '6') ADVANCE(103);
      END_STATE();
    case 45:
      if (lookahead == '6') ADVANCE(108);
      END_STATE();
    case 46:
      if (lookahead == '6') ADVANCE(113);
      END_STATE();
    case 47:
      if (lookahead == '6') ADVANCE(118);
      END_STATE();
    case 48:
      if (lookahead == '6') ADVANCE(126);
      END_STATE();
    case 49:
      if (lookahead == '6') ADVANCE(131);
      END_STATE();
    case 50:
      if (lookahead == '6') ADVANCE(136);
      END_STATE();
    case 51:
      if (lookahead == '6') ADVANCE(141);
      END_STATE();
    case 52:
      if (lookahead == '6') ADVANCE(146);
      END_STATE();
    case 53:
      if (lookahead == '6') ADVANCE(151);
      END_STATE();
    case 54:
      if (lookahead == 'u') ADVANCE(57);
      if (lookahead == 'x') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(226);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 55:
      if (lookahead == 'x') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      if (lookahead == 'x') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
      if (lookahead == '{') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 58:
      if (lookahead == '}') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 67:
      if (eof) ADVANCE(69);
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(190);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(206);
      if (lookahead == 'f') ADVANCE(197);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == 'u') ADVANCE(196);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(67)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 68:
      if (eof) ADVANCE(69);
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(190);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(68)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__solidity_version);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__solidity_version);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__solidity_version);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(16);
      if (lookahead == '2') ADVANCE(17);
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == '4') ADVANCE(10);
      if (lookahead == '5') ADVANCE(42);
      if (lookahead == '6') ADVANCE(32);
      if (lookahead == '7') ADVANCE(21);
      if (lookahead == '8') ADVANCE(87);
      if (lookahead == '9') ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_int8);
      if (lookahead == '0') ADVANCE(96);
      if (lookahead == '8') ADVANCE(97);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_int16);
      if (lookahead == '0') ADVANCE(106);
      if (lookahead == '8') ADVANCE(107);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_int24);
      if (lookahead == '0') ADVANCE(116);
      if (lookahead == '8') ADVANCE(117);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_int40);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_int48);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_int56);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_int72);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_int80);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_int88);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_int96);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_int104);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_int112);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_int120);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_int128);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_int136);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_int144);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_int152);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_int160);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_int168);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_int176);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_int184);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_int192);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_int200);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_int208);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_int216);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_int224);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_int232);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_int240);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_int248);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_int256);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '1') ADVANCE(19);
      if (lookahead == '2') ADVANCE(18);
      if (lookahead == '3') ADVANCE(26);
      if (lookahead == '4') ADVANCE(13);
      if (lookahead == '5') ADVANCE(48);
      if (lookahead == '6') ADVANCE(37);
      if (lookahead == '7') ADVANCE(27);
      if (lookahead == '8') ADVANCE(120);
      if (lookahead == '9') ADVANCE(49);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_uint8);
      if (lookahead == '0') ADVANCE(129);
      if (lookahead == '8') ADVANCE(130);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (lookahead == '0') ADVANCE(139);
      if (lookahead == '8') ADVANCE(140);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_uint24);
      if (lookahead == '0') ADVANCE(149);
      if (lookahead == '8') ADVANCE(150);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_uint40);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_uint48);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_uint56);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_uint72);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_uint80);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_uint88);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_uint96);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_uint104);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_uint112);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_uint120);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_uint128);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_uint136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_uint144);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_uint152);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_uint160);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_uint168);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_uint176);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_uint184);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_uint192);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_uint200);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_uint208);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_uint216);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_uint224);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_uint232);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_uint240);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_uint248);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_uint256);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == 's') ADVANCE(153);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (lookahead == '1') ADVANCE(154);
      if (lookahead == '2') ADVANCE(155);
      if (lookahead == '3') ADVANCE(156);
      if (lookahead == '4') ADVANCE(157);
      if (lookahead == '5') ADVANCE(158);
      if (lookahead == '6') ADVANCE(159);
      if (lookahead == '7') ADVANCE(160);
      if (lookahead == '8') ADVANCE(161);
      if (lookahead == '9') ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_bytes1);
      if (lookahead == '0') ADVANCE(163);
      if (lookahead == '1') ADVANCE(164);
      if (lookahead == '2') ADVANCE(165);
      if (lookahead == '3') ADVANCE(166);
      if (lookahead == '4') ADVANCE(167);
      if (lookahead == '5') ADVANCE(168);
      if (lookahead == '6') ADVANCE(169);
      if (lookahead == '7') ADVANCE(170);
      if (lookahead == '8') ADVANCE(171);
      if (lookahead == '9') ADVANCE(172);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_bytes2);
      if (lookahead == '0') ADVANCE(173);
      if (lookahead == '1') ADVANCE(174);
      if (lookahead == '2') ADVANCE(175);
      if (lookahead == '3') ADVANCE(176);
      if (lookahead == '4') ADVANCE(177);
      if (lookahead == '5') ADVANCE(178);
      if (lookahead == '6') ADVANCE(179);
      if (lookahead == '7') ADVANCE(180);
      if (lookahead == '8') ADVANCE(181);
      if (lookahead == '9') ADVANCE(182);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_bytes3);
      if (lookahead == '0') ADVANCE(183);
      if (lookahead == '1') ADVANCE(184);
      if (lookahead == '2') ADVANCE(185);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_bytes4);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_bytes5);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_bytes6);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_bytes7);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_bytes8);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_bytes9);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_bytes10);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_bytes11);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_bytes12);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_bytes13);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_bytes14);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_bytes15);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_bytes16);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_bytes17);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_bytes18);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_bytes19);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_bytes20);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_bytes21);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_bytes22);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_bytes23);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_bytes24);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_bytes25);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_bytes26);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_bytes27);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_bytes28);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_bytes29);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_bytes30);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_bytes31);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_bytes32);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_fixed);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__fixed_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_ufixed);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__ufixed_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__semicolon);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(186);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(188);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(191);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(192);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(200);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(204);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(205);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(202);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(203);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(193);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(119);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(194);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(195);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(201);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(212);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(214);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(211);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(219);
      if (lookahead == '/') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(221);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(218);
      if (lookahead == '/') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(216);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(209);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(222);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(225);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(228);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 'm') ADVANCE(7);
      if (lookahead == 'o') ADVANCE(8);
      if (lookahead == 'p') ADVANCE(9);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 'v') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'b') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'm') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == 'v') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'm') ADVANCE(37);
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(40);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 25:
      if (lookahead == 'y') ADVANCE(43);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(53);
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(64);
      END_STATE();
    case 45:
      if (lookahead == 'v') ADVANCE(65);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 61:
      if (lookahead == 'f') ADVANCE(78);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 63:
      if (lookahead == 'b') ADVANCE(80);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 76:
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 85:
      if (lookahead == 'g') ADVANCE(103);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 91:
      if (lookahead == 'b') ADVANCE(109);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 95:
      if (lookahead == 'y') ADVANCE(112);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_pragma);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_address);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 110:
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_library);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_payable);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 117:
      if (lookahead == 'y') ADVANCE(127);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_constant);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_contract);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_modifier);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_solidity);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_immutable);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 68},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 68},
  [10] = {.lex_state = 68},
  [11] = {.lex_state = 68},
  [12] = {.lex_state = 68},
  [13] = {.lex_state = 68},
  [14] = {.lex_state = 68},
  [15] = {.lex_state = 68},
  [16] = {.lex_state = 68},
  [17] = {.lex_state = 68},
  [18] = {.lex_state = 68},
  [19] = {.lex_state = 68},
  [20] = {.lex_state = 68},
  [21] = {.lex_state = 68},
  [22] = {.lex_state = 68},
  [23] = {.lex_state = 68},
  [24] = {.lex_state = 68},
  [25] = {.lex_state = 68},
  [26] = {.lex_state = 68},
  [27] = {.lex_state = 68},
  [28] = {.lex_state = 68},
  [29] = {.lex_state = 68},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 68},
  [32] = {.lex_state = 68},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 68},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 68},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 68},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 68},
  [49] = {.lex_state = 68},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 68},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 68},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 68},
  [63] = {.lex_state = 68},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 68},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 68},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 68},
  [75] = {.lex_state = 68},
  [76] = {.lex_state = 68},
  [77] = {.lex_state = 68},
  [78] = {.lex_state = 68},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 68},
  [82] = {.lex_state = 68},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 68},
  [86] = {.lex_state = 68},
  [87] = {.lex_state = 68},
  [88] = {.lex_state = 68},
  [89] = {.lex_state = 68},
  [90] = {.lex_state = 68},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 68},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 68},
  [98] = {.lex_state = 68},
  [99] = {.lex_state = 68},
  [100] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_pragma] = ACTIONS(1),
    [anon_sym_solidity] = ACTIONS(1),
    [sym__solidity_version] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_contract] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_library] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_internal] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_constant] = ACTIONS(1),
    [anon_sym_immutable] = ACTIONS(1),
    [anon_sym_override] = ACTIONS(1),
    [anon_sym_modifier] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_address] = ACTIONS(1),
    [anon_sym_payable] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_int8] = ACTIONS(1),
    [anon_sym_int16] = ACTIONS(1),
    [anon_sym_int24] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int40] = ACTIONS(1),
    [anon_sym_int48] = ACTIONS(1),
    [anon_sym_int56] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_int72] = ACTIONS(1),
    [anon_sym_int80] = ACTIONS(1),
    [anon_sym_int88] = ACTIONS(1),
    [anon_sym_int96] = ACTIONS(1),
    [anon_sym_int104] = ACTIONS(1),
    [anon_sym_int112] = ACTIONS(1),
    [anon_sym_int120] = ACTIONS(1),
    [anon_sym_int128] = ACTIONS(1),
    [anon_sym_int136] = ACTIONS(1),
    [anon_sym_int144] = ACTIONS(1),
    [anon_sym_int152] = ACTIONS(1),
    [anon_sym_int160] = ACTIONS(1),
    [anon_sym_int168] = ACTIONS(1),
    [anon_sym_int176] = ACTIONS(1),
    [anon_sym_int184] = ACTIONS(1),
    [anon_sym_int192] = ACTIONS(1),
    [anon_sym_int200] = ACTIONS(1),
    [anon_sym_int208] = ACTIONS(1),
    [anon_sym_int216] = ACTIONS(1),
    [anon_sym_int224] = ACTIONS(1),
    [anon_sym_int232] = ACTIONS(1),
    [anon_sym_int240] = ACTIONS(1),
    [anon_sym_int248] = ACTIONS(1),
    [anon_sym_int256] = ACTIONS(1),
    [anon_sym_uint] = ACTIONS(1),
    [anon_sym_uint8] = ACTIONS(1),
    [anon_sym_uint16] = ACTIONS(1),
    [anon_sym_uint24] = ACTIONS(1),
    [anon_sym_uint32] = ACTIONS(1),
    [anon_sym_uint40] = ACTIONS(1),
    [anon_sym_uint48] = ACTIONS(1),
    [anon_sym_uint56] = ACTIONS(1),
    [anon_sym_uint64] = ACTIONS(1),
    [anon_sym_uint72] = ACTIONS(1),
    [anon_sym_uint80] = ACTIONS(1),
    [anon_sym_uint88] = ACTIONS(1),
    [anon_sym_uint96] = ACTIONS(1),
    [anon_sym_uint104] = ACTIONS(1),
    [anon_sym_uint112] = ACTIONS(1),
    [anon_sym_uint120] = ACTIONS(1),
    [anon_sym_uint128] = ACTIONS(1),
    [anon_sym_uint136] = ACTIONS(1),
    [anon_sym_uint144] = ACTIONS(1),
    [anon_sym_uint152] = ACTIONS(1),
    [anon_sym_uint160] = ACTIONS(1),
    [anon_sym_uint168] = ACTIONS(1),
    [anon_sym_uint176] = ACTIONS(1),
    [anon_sym_uint184] = ACTIONS(1),
    [anon_sym_uint192] = ACTIONS(1),
    [anon_sym_uint200] = ACTIONS(1),
    [anon_sym_uint208] = ACTIONS(1),
    [anon_sym_uint216] = ACTIONS(1),
    [anon_sym_uint224] = ACTIONS(1),
    [anon_sym_uint232] = ACTIONS(1),
    [anon_sym_uint240] = ACTIONS(1),
    [anon_sym_uint248] = ACTIONS(1),
    [anon_sym_uint256] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [anon_sym_bytes1] = ACTIONS(1),
    [anon_sym_bytes2] = ACTIONS(1),
    [anon_sym_bytes3] = ACTIONS(1),
    [anon_sym_bytes4] = ACTIONS(1),
    [anon_sym_bytes5] = ACTIONS(1),
    [anon_sym_bytes6] = ACTIONS(1),
    [anon_sym_bytes7] = ACTIONS(1),
    [anon_sym_bytes8] = ACTIONS(1),
    [anon_sym_bytes9] = ACTIONS(1),
    [anon_sym_bytes10] = ACTIONS(1),
    [anon_sym_bytes11] = ACTIONS(1),
    [anon_sym_bytes12] = ACTIONS(1),
    [anon_sym_bytes13] = ACTIONS(1),
    [anon_sym_bytes14] = ACTIONS(1),
    [anon_sym_bytes15] = ACTIONS(1),
    [anon_sym_bytes16] = ACTIONS(1),
    [anon_sym_bytes17] = ACTIONS(1),
    [anon_sym_bytes18] = ACTIONS(1),
    [anon_sym_bytes19] = ACTIONS(1),
    [anon_sym_bytes20] = ACTIONS(1),
    [anon_sym_bytes21] = ACTIONS(1),
    [anon_sym_bytes22] = ACTIONS(1),
    [anon_sym_bytes23] = ACTIONS(1),
    [anon_sym_bytes24] = ACTIONS(1),
    [anon_sym_bytes25] = ACTIONS(1),
    [anon_sym_bytes26] = ACTIONS(1),
    [anon_sym_bytes27] = ACTIONS(1),
    [anon_sym_bytes28] = ACTIONS(1),
    [anon_sym_bytes29] = ACTIONS(1),
    [anon_sym_bytes30] = ACTIONS(1),
    [anon_sym_bytes31] = ACTIONS(1),
    [anon_sym_bytes32] = ACTIONS(1),
    [anon_sym_fixed] = ACTIONS(1),
    [aux_sym__fixed_token1] = ACTIONS(1),
    [anon_sym_ufixed] = ACTIONS(1),
    [aux_sym__ufixed_token1] = ACTIONS(1),
    [sym__semicolon] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(80),
    [sym_pragmaDirective] = STATE(9),
    [sym_import_statement] = STATE(9),
    [sym__statement] = STATE(9),
    [sym_contract_declaration] = STATE(9),
    [aux_sym_program_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_pragma] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_abstract] = ACTIONS(11),
    [anon_sym_contract] = ACTIONS(13),
    [anon_sym_interface] = ACTIONS(13),
    [anon_sym_library] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_field_definition] = STATE(4),
    [sym_modifier_definition] = STATE(4),
    [sym_method_definition] = STATE(4),
    [sym_type_name] = STATE(26),
    [sym__primitive_type] = STATE(28),
    [sym__int] = STATE(28),
    [sym__uint] = STATE(28),
    [sym__bytes] = STATE(28),
    [sym__fixed] = STATE(28),
    [sym__ufixed] = STATE(28),
    [aux_sym_contract_body_repeat1] = STATE(4),
    [anon_sym_RBRACE] = ACTIONS(15),
    [anon_sym_modifier] = ACTIONS(17),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_address] = ACTIONS(21),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
    [anon_sym_var] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(25),
    [anon_sym_int8] = ACTIONS(25),
    [anon_sym_int16] = ACTIONS(25),
    [anon_sym_int24] = ACTIONS(25),
    [anon_sym_int32] = ACTIONS(23),
    [anon_sym_int40] = ACTIONS(23),
    [anon_sym_int48] = ACTIONS(23),
    [anon_sym_int56] = ACTIONS(23),
    [anon_sym_int64] = ACTIONS(23),
    [anon_sym_int72] = ACTIONS(23),
    [anon_sym_int80] = ACTIONS(23),
    [anon_sym_int88] = ACTIONS(23),
    [anon_sym_int96] = ACTIONS(23),
    [anon_sym_int104] = ACTIONS(23),
    [anon_sym_int112] = ACTIONS(23),
    [anon_sym_int120] = ACTIONS(23),
    [anon_sym_int128] = ACTIONS(23),
    [anon_sym_int136] = ACTIONS(23),
    [anon_sym_int144] = ACTIONS(23),
    [anon_sym_int152] = ACTIONS(23),
    [anon_sym_int160] = ACTIONS(23),
    [anon_sym_int168] = ACTIONS(23),
    [anon_sym_int176] = ACTIONS(23),
    [anon_sym_int184] = ACTIONS(23),
    [anon_sym_int192] = ACTIONS(23),
    [anon_sym_int200] = ACTIONS(23),
    [anon_sym_int208] = ACTIONS(23),
    [anon_sym_int216] = ACTIONS(23),
    [anon_sym_int224] = ACTIONS(23),
    [anon_sym_int232] = ACTIONS(23),
    [anon_sym_int240] = ACTIONS(23),
    [anon_sym_int248] = ACTIONS(23),
    [anon_sym_int256] = ACTIONS(23),
    [anon_sym_uint] = ACTIONS(25),
    [anon_sym_uint8] = ACTIONS(25),
    [anon_sym_uint16] = ACTIONS(25),
    [anon_sym_uint24] = ACTIONS(25),
    [anon_sym_uint32] = ACTIONS(23),
    [anon_sym_uint40] = ACTIONS(23),
    [anon_sym_uint48] = ACTIONS(23),
    [anon_sym_uint56] = ACTIONS(23),
    [anon_sym_uint64] = ACTIONS(23),
    [anon_sym_uint72] = ACTIONS(23),
    [anon_sym_uint80] = ACTIONS(23),
    [anon_sym_uint88] = ACTIONS(23),
    [anon_sym_uint96] = ACTIONS(23),
    [anon_sym_uint104] = ACTIONS(23),
    [anon_sym_uint112] = ACTIONS(23),
    [anon_sym_uint120] = ACTIONS(23),
    [anon_sym_uint128] = ACTIONS(23),
    [anon_sym_uint136] = ACTIONS(23),
    [anon_sym_uint144] = ACTIONS(23),
    [anon_sym_uint152] = ACTIONS(23),
    [anon_sym_uint160] = ACTIONS(23),
    [anon_sym_uint168] = ACTIONS(23),
    [anon_sym_uint176] = ACTIONS(23),
    [anon_sym_uint184] = ACTIONS(23),
    [anon_sym_uint192] = ACTIONS(23),
    [anon_sym_uint200] = ACTIONS(23),
    [anon_sym_uint208] = ACTIONS(23),
    [anon_sym_uint216] = ACTIONS(23),
    [anon_sym_uint224] = ACTIONS(23),
    [anon_sym_uint232] = ACTIONS(23),
    [anon_sym_uint240] = ACTIONS(23),
    [anon_sym_uint248] = ACTIONS(23),
    [anon_sym_uint256] = ACTIONS(23),
    [anon_sym_byte] = ACTIONS(25),
    [anon_sym_bytes] = ACTIONS(25),
    [anon_sym_bytes1] = ACTIONS(25),
    [anon_sym_bytes2] = ACTIONS(25),
    [anon_sym_bytes3] = ACTIONS(25),
    [anon_sym_bytes4] = ACTIONS(23),
    [anon_sym_bytes5] = ACTIONS(23),
    [anon_sym_bytes6] = ACTIONS(23),
    [anon_sym_bytes7] = ACTIONS(23),
    [anon_sym_bytes8] = ACTIONS(23),
    [anon_sym_bytes9] = ACTIONS(23),
    [anon_sym_bytes10] = ACTIONS(23),
    [anon_sym_bytes11] = ACTIONS(23),
    [anon_sym_bytes12] = ACTIONS(23),
    [anon_sym_bytes13] = ACTIONS(23),
    [anon_sym_bytes14] = ACTIONS(23),
    [anon_sym_bytes15] = ACTIONS(23),
    [anon_sym_bytes16] = ACTIONS(23),
    [anon_sym_bytes17] = ACTIONS(23),
    [anon_sym_bytes18] = ACTIONS(23),
    [anon_sym_bytes19] = ACTIONS(23),
    [anon_sym_bytes20] = ACTIONS(23),
    [anon_sym_bytes21] = ACTIONS(23),
    [anon_sym_bytes22] = ACTIONS(23),
    [anon_sym_bytes23] = ACTIONS(23),
    [anon_sym_bytes24] = ACTIONS(23),
    [anon_sym_bytes25] = ACTIONS(23),
    [anon_sym_bytes26] = ACTIONS(23),
    [anon_sym_bytes27] = ACTIONS(23),
    [anon_sym_bytes28] = ACTIONS(23),
    [anon_sym_bytes29] = ACTIONS(23),
    [anon_sym_bytes30] = ACTIONS(23),
    [anon_sym_bytes31] = ACTIONS(23),
    [anon_sym_bytes32] = ACTIONS(23),
    [anon_sym_fixed] = ACTIONS(25),
    [aux_sym__fixed_token1] = ACTIONS(23),
    [anon_sym_ufixed] = ACTIONS(25),
    [aux_sym__ufixed_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_field_definition] = STATE(2),
    [sym_modifier_definition] = STATE(2),
    [sym_method_definition] = STATE(2),
    [sym_type_name] = STATE(26),
    [sym__primitive_type] = STATE(28),
    [sym__int] = STATE(28),
    [sym__uint] = STATE(28),
    [sym__bytes] = STATE(28),
    [sym__fixed] = STATE(28),
    [sym__ufixed] = STATE(28),
    [aux_sym_contract_body_repeat1] = STATE(2),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_modifier] = ACTIONS(17),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_address] = ACTIONS(21),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
    [anon_sym_var] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(25),
    [anon_sym_int8] = ACTIONS(25),
    [anon_sym_int16] = ACTIONS(25),
    [anon_sym_int24] = ACTIONS(25),
    [anon_sym_int32] = ACTIONS(23),
    [anon_sym_int40] = ACTIONS(23),
    [anon_sym_int48] = ACTIONS(23),
    [anon_sym_int56] = ACTIONS(23),
    [anon_sym_int64] = ACTIONS(23),
    [anon_sym_int72] = ACTIONS(23),
    [anon_sym_int80] = ACTIONS(23),
    [anon_sym_int88] = ACTIONS(23),
    [anon_sym_int96] = ACTIONS(23),
    [anon_sym_int104] = ACTIONS(23),
    [anon_sym_int112] = ACTIONS(23),
    [anon_sym_int120] = ACTIONS(23),
    [anon_sym_int128] = ACTIONS(23),
    [anon_sym_int136] = ACTIONS(23),
    [anon_sym_int144] = ACTIONS(23),
    [anon_sym_int152] = ACTIONS(23),
    [anon_sym_int160] = ACTIONS(23),
    [anon_sym_int168] = ACTIONS(23),
    [anon_sym_int176] = ACTIONS(23),
    [anon_sym_int184] = ACTIONS(23),
    [anon_sym_int192] = ACTIONS(23),
    [anon_sym_int200] = ACTIONS(23),
    [anon_sym_int208] = ACTIONS(23),
    [anon_sym_int216] = ACTIONS(23),
    [anon_sym_int224] = ACTIONS(23),
    [anon_sym_int232] = ACTIONS(23),
    [anon_sym_int240] = ACTIONS(23),
    [anon_sym_int248] = ACTIONS(23),
    [anon_sym_int256] = ACTIONS(23),
    [anon_sym_uint] = ACTIONS(25),
    [anon_sym_uint8] = ACTIONS(25),
    [anon_sym_uint16] = ACTIONS(25),
    [anon_sym_uint24] = ACTIONS(25),
    [anon_sym_uint32] = ACTIONS(23),
    [anon_sym_uint40] = ACTIONS(23),
    [anon_sym_uint48] = ACTIONS(23),
    [anon_sym_uint56] = ACTIONS(23),
    [anon_sym_uint64] = ACTIONS(23),
    [anon_sym_uint72] = ACTIONS(23),
    [anon_sym_uint80] = ACTIONS(23),
    [anon_sym_uint88] = ACTIONS(23),
    [anon_sym_uint96] = ACTIONS(23),
    [anon_sym_uint104] = ACTIONS(23),
    [anon_sym_uint112] = ACTIONS(23),
    [anon_sym_uint120] = ACTIONS(23),
    [anon_sym_uint128] = ACTIONS(23),
    [anon_sym_uint136] = ACTIONS(23),
    [anon_sym_uint144] = ACTIONS(23),
    [anon_sym_uint152] = ACTIONS(23),
    [anon_sym_uint160] = ACTIONS(23),
    [anon_sym_uint168] = ACTIONS(23),
    [anon_sym_uint176] = ACTIONS(23),
    [anon_sym_uint184] = ACTIONS(23),
    [anon_sym_uint192] = ACTIONS(23),
    [anon_sym_uint200] = ACTIONS(23),
    [anon_sym_uint208] = ACTIONS(23),
    [anon_sym_uint216] = ACTIONS(23),
    [anon_sym_uint224] = ACTIONS(23),
    [anon_sym_uint232] = ACTIONS(23),
    [anon_sym_uint240] = ACTIONS(23),
    [anon_sym_uint248] = ACTIONS(23),
    [anon_sym_uint256] = ACTIONS(23),
    [anon_sym_byte] = ACTIONS(25),
    [anon_sym_bytes] = ACTIONS(25),
    [anon_sym_bytes1] = ACTIONS(25),
    [anon_sym_bytes2] = ACTIONS(25),
    [anon_sym_bytes3] = ACTIONS(25),
    [anon_sym_bytes4] = ACTIONS(23),
    [anon_sym_bytes5] = ACTIONS(23),
    [anon_sym_bytes6] = ACTIONS(23),
    [anon_sym_bytes7] = ACTIONS(23),
    [anon_sym_bytes8] = ACTIONS(23),
    [anon_sym_bytes9] = ACTIONS(23),
    [anon_sym_bytes10] = ACTIONS(23),
    [anon_sym_bytes11] = ACTIONS(23),
    [anon_sym_bytes12] = ACTIONS(23),
    [anon_sym_bytes13] = ACTIONS(23),
    [anon_sym_bytes14] = ACTIONS(23),
    [anon_sym_bytes15] = ACTIONS(23),
    [anon_sym_bytes16] = ACTIONS(23),
    [anon_sym_bytes17] = ACTIONS(23),
    [anon_sym_bytes18] = ACTIONS(23),
    [anon_sym_bytes19] = ACTIONS(23),
    [anon_sym_bytes20] = ACTIONS(23),
    [anon_sym_bytes21] = ACTIONS(23),
    [anon_sym_bytes22] = ACTIONS(23),
    [anon_sym_bytes23] = ACTIONS(23),
    [anon_sym_bytes24] = ACTIONS(23),
    [anon_sym_bytes25] = ACTIONS(23),
    [anon_sym_bytes26] = ACTIONS(23),
    [anon_sym_bytes27] = ACTIONS(23),
    [anon_sym_bytes28] = ACTIONS(23),
    [anon_sym_bytes29] = ACTIONS(23),
    [anon_sym_bytes30] = ACTIONS(23),
    [anon_sym_bytes31] = ACTIONS(23),
    [anon_sym_bytes32] = ACTIONS(23),
    [anon_sym_fixed] = ACTIONS(25),
    [aux_sym__fixed_token1] = ACTIONS(23),
    [anon_sym_ufixed] = ACTIONS(25),
    [aux_sym__ufixed_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_field_definition] = STATE(4),
    [sym_modifier_definition] = STATE(4),
    [sym_method_definition] = STATE(4),
    [sym_type_name] = STATE(26),
    [sym__primitive_type] = STATE(28),
    [sym__int] = STATE(28),
    [sym__uint] = STATE(28),
    [sym__bytes] = STATE(28),
    [sym__fixed] = STATE(28),
    [sym__ufixed] = STATE(28),
    [aux_sym_contract_body_repeat1] = STATE(4),
    [anon_sym_RBRACE] = ACTIONS(29),
    [anon_sym_modifier] = ACTIONS(31),
    [anon_sym_function] = ACTIONS(34),
    [anon_sym_address] = ACTIONS(37),
    [anon_sym_bool] = ACTIONS(40),
    [anon_sym_string] = ACTIONS(40),
    [anon_sym_var] = ACTIONS(40),
    [anon_sym_int] = ACTIONS(43),
    [anon_sym_int8] = ACTIONS(43),
    [anon_sym_int16] = ACTIONS(43),
    [anon_sym_int24] = ACTIONS(43),
    [anon_sym_int32] = ACTIONS(40),
    [anon_sym_int40] = ACTIONS(40),
    [anon_sym_int48] = ACTIONS(40),
    [anon_sym_int56] = ACTIONS(40),
    [anon_sym_int64] = ACTIONS(40),
    [anon_sym_int72] = ACTIONS(40),
    [anon_sym_int80] = ACTIONS(40),
    [anon_sym_int88] = ACTIONS(40),
    [anon_sym_int96] = ACTIONS(40),
    [anon_sym_int104] = ACTIONS(40),
    [anon_sym_int112] = ACTIONS(40),
    [anon_sym_int120] = ACTIONS(40),
    [anon_sym_int128] = ACTIONS(40),
    [anon_sym_int136] = ACTIONS(40),
    [anon_sym_int144] = ACTIONS(40),
    [anon_sym_int152] = ACTIONS(40),
    [anon_sym_int160] = ACTIONS(40),
    [anon_sym_int168] = ACTIONS(40),
    [anon_sym_int176] = ACTIONS(40),
    [anon_sym_int184] = ACTIONS(40),
    [anon_sym_int192] = ACTIONS(40),
    [anon_sym_int200] = ACTIONS(40),
    [anon_sym_int208] = ACTIONS(40),
    [anon_sym_int216] = ACTIONS(40),
    [anon_sym_int224] = ACTIONS(40),
    [anon_sym_int232] = ACTIONS(40),
    [anon_sym_int240] = ACTIONS(40),
    [anon_sym_int248] = ACTIONS(40),
    [anon_sym_int256] = ACTIONS(40),
    [anon_sym_uint] = ACTIONS(43),
    [anon_sym_uint8] = ACTIONS(43),
    [anon_sym_uint16] = ACTIONS(43),
    [anon_sym_uint24] = ACTIONS(43),
    [anon_sym_uint32] = ACTIONS(40),
    [anon_sym_uint40] = ACTIONS(40),
    [anon_sym_uint48] = ACTIONS(40),
    [anon_sym_uint56] = ACTIONS(40),
    [anon_sym_uint64] = ACTIONS(40),
    [anon_sym_uint72] = ACTIONS(40),
    [anon_sym_uint80] = ACTIONS(40),
    [anon_sym_uint88] = ACTIONS(40),
    [anon_sym_uint96] = ACTIONS(40),
    [anon_sym_uint104] = ACTIONS(40),
    [anon_sym_uint112] = ACTIONS(40),
    [anon_sym_uint120] = ACTIONS(40),
    [anon_sym_uint128] = ACTIONS(40),
    [anon_sym_uint136] = ACTIONS(40),
    [anon_sym_uint144] = ACTIONS(40),
    [anon_sym_uint152] = ACTIONS(40),
    [anon_sym_uint160] = ACTIONS(40),
    [anon_sym_uint168] = ACTIONS(40),
    [anon_sym_uint176] = ACTIONS(40),
    [anon_sym_uint184] = ACTIONS(40),
    [anon_sym_uint192] = ACTIONS(40),
    [anon_sym_uint200] = ACTIONS(40),
    [anon_sym_uint208] = ACTIONS(40),
    [anon_sym_uint216] = ACTIONS(40),
    [anon_sym_uint224] = ACTIONS(40),
    [anon_sym_uint232] = ACTIONS(40),
    [anon_sym_uint240] = ACTIONS(40),
    [anon_sym_uint248] = ACTIONS(40),
    [anon_sym_uint256] = ACTIONS(40),
    [anon_sym_byte] = ACTIONS(43),
    [anon_sym_bytes] = ACTIONS(43),
    [anon_sym_bytes1] = ACTIONS(43),
    [anon_sym_bytes2] = ACTIONS(43),
    [anon_sym_bytes3] = ACTIONS(43),
    [anon_sym_bytes4] = ACTIONS(40),
    [anon_sym_bytes5] = ACTIONS(40),
    [anon_sym_bytes6] = ACTIONS(40),
    [anon_sym_bytes7] = ACTIONS(40),
    [anon_sym_bytes8] = ACTIONS(40),
    [anon_sym_bytes9] = ACTIONS(40),
    [anon_sym_bytes10] = ACTIONS(40),
    [anon_sym_bytes11] = ACTIONS(40),
    [anon_sym_bytes12] = ACTIONS(40),
    [anon_sym_bytes13] = ACTIONS(40),
    [anon_sym_bytes14] = ACTIONS(40),
    [anon_sym_bytes15] = ACTIONS(40),
    [anon_sym_bytes16] = ACTIONS(40),
    [anon_sym_bytes17] = ACTIONS(40),
    [anon_sym_bytes18] = ACTIONS(40),
    [anon_sym_bytes19] = ACTIONS(40),
    [anon_sym_bytes20] = ACTIONS(40),
    [anon_sym_bytes21] = ACTIONS(40),
    [anon_sym_bytes22] = ACTIONS(40),
    [anon_sym_bytes23] = ACTIONS(40),
    [anon_sym_bytes24] = ACTIONS(40),
    [anon_sym_bytes25] = ACTIONS(40),
    [anon_sym_bytes26] = ACTIONS(40),
    [anon_sym_bytes27] = ACTIONS(40),
    [anon_sym_bytes28] = ACTIONS(40),
    [anon_sym_bytes29] = ACTIONS(40),
    [anon_sym_bytes30] = ACTIONS(40),
    [anon_sym_bytes31] = ACTIONS(40),
    [anon_sym_bytes32] = ACTIONS(40),
    [anon_sym_fixed] = ACTIONS(43),
    [aux_sym__fixed_token1] = ACTIONS(40),
    [anon_sym_ufixed] = ACTIONS(43),
    [aux_sym__ufixed_token1] = ACTIONS(40),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [anon_sym_RBRACE] = ACTIONS(46),
    [anon_sym_modifier] = ACTIONS(46),
    [anon_sym_function] = ACTIONS(46),
    [anon_sym_address] = ACTIONS(46),
    [anon_sym_bool] = ACTIONS(46),
    [anon_sym_string] = ACTIONS(46),
    [anon_sym_var] = ACTIONS(46),
    [anon_sym_int] = ACTIONS(48),
    [anon_sym_int8] = ACTIONS(48),
    [anon_sym_int16] = ACTIONS(48),
    [anon_sym_int24] = ACTIONS(48),
    [anon_sym_int32] = ACTIONS(46),
    [anon_sym_int40] = ACTIONS(46),
    [anon_sym_int48] = ACTIONS(46),
    [anon_sym_int56] = ACTIONS(46),
    [anon_sym_int64] = ACTIONS(46),
    [anon_sym_int72] = ACTIONS(46),
    [anon_sym_int80] = ACTIONS(46),
    [anon_sym_int88] = ACTIONS(46),
    [anon_sym_int96] = ACTIONS(46),
    [anon_sym_int104] = ACTIONS(46),
    [anon_sym_int112] = ACTIONS(46),
    [anon_sym_int120] = ACTIONS(46),
    [anon_sym_int128] = ACTIONS(46),
    [anon_sym_int136] = ACTIONS(46),
    [anon_sym_int144] = ACTIONS(46),
    [anon_sym_int152] = ACTIONS(46),
    [anon_sym_int160] = ACTIONS(46),
    [anon_sym_int168] = ACTIONS(46),
    [anon_sym_int176] = ACTIONS(46),
    [anon_sym_int184] = ACTIONS(46),
    [anon_sym_int192] = ACTIONS(46),
    [anon_sym_int200] = ACTIONS(46),
    [anon_sym_int208] = ACTIONS(46),
    [anon_sym_int216] = ACTIONS(46),
    [anon_sym_int224] = ACTIONS(46),
    [anon_sym_int232] = ACTIONS(46),
    [anon_sym_int240] = ACTIONS(46),
    [anon_sym_int248] = ACTIONS(46),
    [anon_sym_int256] = ACTIONS(46),
    [anon_sym_uint] = ACTIONS(48),
    [anon_sym_uint8] = ACTIONS(48),
    [anon_sym_uint16] = ACTIONS(48),
    [anon_sym_uint24] = ACTIONS(48),
    [anon_sym_uint32] = ACTIONS(46),
    [anon_sym_uint40] = ACTIONS(46),
    [anon_sym_uint48] = ACTIONS(46),
    [anon_sym_uint56] = ACTIONS(46),
    [anon_sym_uint64] = ACTIONS(46),
    [anon_sym_uint72] = ACTIONS(46),
    [anon_sym_uint80] = ACTIONS(46),
    [anon_sym_uint88] = ACTIONS(46),
    [anon_sym_uint96] = ACTIONS(46),
    [anon_sym_uint104] = ACTIONS(46),
    [anon_sym_uint112] = ACTIONS(46),
    [anon_sym_uint120] = ACTIONS(46),
    [anon_sym_uint128] = ACTIONS(46),
    [anon_sym_uint136] = ACTIONS(46),
    [anon_sym_uint144] = ACTIONS(46),
    [anon_sym_uint152] = ACTIONS(46),
    [anon_sym_uint160] = ACTIONS(46),
    [anon_sym_uint168] = ACTIONS(46),
    [anon_sym_uint176] = ACTIONS(46),
    [anon_sym_uint184] = ACTIONS(46),
    [anon_sym_uint192] = ACTIONS(46),
    [anon_sym_uint200] = ACTIONS(46),
    [anon_sym_uint208] = ACTIONS(46),
    [anon_sym_uint216] = ACTIONS(46),
    [anon_sym_uint224] = ACTIONS(46),
    [anon_sym_uint232] = ACTIONS(46),
    [anon_sym_uint240] = ACTIONS(46),
    [anon_sym_uint248] = ACTIONS(46),
    [anon_sym_uint256] = ACTIONS(46),
    [anon_sym_byte] = ACTIONS(48),
    [anon_sym_bytes] = ACTIONS(48),
    [anon_sym_bytes1] = ACTIONS(48),
    [anon_sym_bytes2] = ACTIONS(48),
    [anon_sym_bytes3] = ACTIONS(48),
    [anon_sym_bytes4] = ACTIONS(46),
    [anon_sym_bytes5] = ACTIONS(46),
    [anon_sym_bytes6] = ACTIONS(46),
    [anon_sym_bytes7] = ACTIONS(46),
    [anon_sym_bytes8] = ACTIONS(46),
    [anon_sym_bytes9] = ACTIONS(46),
    [anon_sym_bytes10] = ACTIONS(46),
    [anon_sym_bytes11] = ACTIONS(46),
    [anon_sym_bytes12] = ACTIONS(46),
    [anon_sym_bytes13] = ACTIONS(46),
    [anon_sym_bytes14] = ACTIONS(46),
    [anon_sym_bytes15] = ACTIONS(46),
    [anon_sym_bytes16] = ACTIONS(46),
    [anon_sym_bytes17] = ACTIONS(46),
    [anon_sym_bytes18] = ACTIONS(46),
    [anon_sym_bytes19] = ACTIONS(46),
    [anon_sym_bytes20] = ACTIONS(46),
    [anon_sym_bytes21] = ACTIONS(46),
    [anon_sym_bytes22] = ACTIONS(46),
    [anon_sym_bytes23] = ACTIONS(46),
    [anon_sym_bytes24] = ACTIONS(46),
    [anon_sym_bytes25] = ACTIONS(46),
    [anon_sym_bytes26] = ACTIONS(46),
    [anon_sym_bytes27] = ACTIONS(46),
    [anon_sym_bytes28] = ACTIONS(46),
    [anon_sym_bytes29] = ACTIONS(46),
    [anon_sym_bytes30] = ACTIONS(46),
    [anon_sym_bytes31] = ACTIONS(46),
    [anon_sym_bytes32] = ACTIONS(46),
    [anon_sym_fixed] = ACTIONS(48),
    [aux_sym__fixed_token1] = ACTIONS(46),
    [anon_sym_ufixed] = ACTIONS(48),
    [aux_sym__ufixed_token1] = ACTIONS(46),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [anon_sym_RBRACE] = ACTIONS(50),
    [anon_sym_modifier] = ACTIONS(50),
    [anon_sym_function] = ACTIONS(50),
    [anon_sym_address] = ACTIONS(50),
    [anon_sym_bool] = ACTIONS(50),
    [anon_sym_string] = ACTIONS(50),
    [anon_sym_var] = ACTIONS(50),
    [anon_sym_int] = ACTIONS(52),
    [anon_sym_int8] = ACTIONS(52),
    [anon_sym_int16] = ACTIONS(52),
    [anon_sym_int24] = ACTIONS(52),
    [anon_sym_int32] = ACTIONS(50),
    [anon_sym_int40] = ACTIONS(50),
    [anon_sym_int48] = ACTIONS(50),
    [anon_sym_int56] = ACTIONS(50),
    [anon_sym_int64] = ACTIONS(50),
    [anon_sym_int72] = ACTIONS(50),
    [anon_sym_int80] = ACTIONS(50),
    [anon_sym_int88] = ACTIONS(50),
    [anon_sym_int96] = ACTIONS(50),
    [anon_sym_int104] = ACTIONS(50),
    [anon_sym_int112] = ACTIONS(50),
    [anon_sym_int120] = ACTIONS(50),
    [anon_sym_int128] = ACTIONS(50),
    [anon_sym_int136] = ACTIONS(50),
    [anon_sym_int144] = ACTIONS(50),
    [anon_sym_int152] = ACTIONS(50),
    [anon_sym_int160] = ACTIONS(50),
    [anon_sym_int168] = ACTIONS(50),
    [anon_sym_int176] = ACTIONS(50),
    [anon_sym_int184] = ACTIONS(50),
    [anon_sym_int192] = ACTIONS(50),
    [anon_sym_int200] = ACTIONS(50),
    [anon_sym_int208] = ACTIONS(50),
    [anon_sym_int216] = ACTIONS(50),
    [anon_sym_int224] = ACTIONS(50),
    [anon_sym_int232] = ACTIONS(50),
    [anon_sym_int240] = ACTIONS(50),
    [anon_sym_int248] = ACTIONS(50),
    [anon_sym_int256] = ACTIONS(50),
    [anon_sym_uint] = ACTIONS(52),
    [anon_sym_uint8] = ACTIONS(52),
    [anon_sym_uint16] = ACTIONS(52),
    [anon_sym_uint24] = ACTIONS(52),
    [anon_sym_uint32] = ACTIONS(50),
    [anon_sym_uint40] = ACTIONS(50),
    [anon_sym_uint48] = ACTIONS(50),
    [anon_sym_uint56] = ACTIONS(50),
    [anon_sym_uint64] = ACTIONS(50),
    [anon_sym_uint72] = ACTIONS(50),
    [anon_sym_uint80] = ACTIONS(50),
    [anon_sym_uint88] = ACTIONS(50),
    [anon_sym_uint96] = ACTIONS(50),
    [anon_sym_uint104] = ACTIONS(50),
    [anon_sym_uint112] = ACTIONS(50),
    [anon_sym_uint120] = ACTIONS(50),
    [anon_sym_uint128] = ACTIONS(50),
    [anon_sym_uint136] = ACTIONS(50),
    [anon_sym_uint144] = ACTIONS(50),
    [anon_sym_uint152] = ACTIONS(50),
    [anon_sym_uint160] = ACTIONS(50),
    [anon_sym_uint168] = ACTIONS(50),
    [anon_sym_uint176] = ACTIONS(50),
    [anon_sym_uint184] = ACTIONS(50),
    [anon_sym_uint192] = ACTIONS(50),
    [anon_sym_uint200] = ACTIONS(50),
    [anon_sym_uint208] = ACTIONS(50),
    [anon_sym_uint216] = ACTIONS(50),
    [anon_sym_uint224] = ACTIONS(50),
    [anon_sym_uint232] = ACTIONS(50),
    [anon_sym_uint240] = ACTIONS(50),
    [anon_sym_uint248] = ACTIONS(50),
    [anon_sym_uint256] = ACTIONS(50),
    [anon_sym_byte] = ACTIONS(52),
    [anon_sym_bytes] = ACTIONS(52),
    [anon_sym_bytes1] = ACTIONS(52),
    [anon_sym_bytes2] = ACTIONS(52),
    [anon_sym_bytes3] = ACTIONS(52),
    [anon_sym_bytes4] = ACTIONS(50),
    [anon_sym_bytes5] = ACTIONS(50),
    [anon_sym_bytes6] = ACTIONS(50),
    [anon_sym_bytes7] = ACTIONS(50),
    [anon_sym_bytes8] = ACTIONS(50),
    [anon_sym_bytes9] = ACTIONS(50),
    [anon_sym_bytes10] = ACTIONS(50),
    [anon_sym_bytes11] = ACTIONS(50),
    [anon_sym_bytes12] = ACTIONS(50),
    [anon_sym_bytes13] = ACTIONS(50),
    [anon_sym_bytes14] = ACTIONS(50),
    [anon_sym_bytes15] = ACTIONS(50),
    [anon_sym_bytes16] = ACTIONS(50),
    [anon_sym_bytes17] = ACTIONS(50),
    [anon_sym_bytes18] = ACTIONS(50),
    [anon_sym_bytes19] = ACTIONS(50),
    [anon_sym_bytes20] = ACTIONS(50),
    [anon_sym_bytes21] = ACTIONS(50),
    [anon_sym_bytes22] = ACTIONS(50),
    [anon_sym_bytes23] = ACTIONS(50),
    [anon_sym_bytes24] = ACTIONS(50),
    [anon_sym_bytes25] = ACTIONS(50),
    [anon_sym_bytes26] = ACTIONS(50),
    [anon_sym_bytes27] = ACTIONS(50),
    [anon_sym_bytes28] = ACTIONS(50),
    [anon_sym_bytes29] = ACTIONS(50),
    [anon_sym_bytes30] = ACTIONS(50),
    [anon_sym_bytes31] = ACTIONS(50),
    [anon_sym_bytes32] = ACTIONS(50),
    [anon_sym_fixed] = ACTIONS(52),
    [aux_sym__fixed_token1] = ACTIONS(50),
    [anon_sym_ufixed] = ACTIONS(52),
    [aux_sym__ufixed_token1] = ACTIONS(50),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [anon_sym_RBRACE] = ACTIONS(54),
    [anon_sym_modifier] = ACTIONS(54),
    [anon_sym_function] = ACTIONS(54),
    [anon_sym_address] = ACTIONS(54),
    [anon_sym_bool] = ACTIONS(54),
    [anon_sym_string] = ACTIONS(54),
    [anon_sym_var] = ACTIONS(54),
    [anon_sym_int] = ACTIONS(56),
    [anon_sym_int8] = ACTIONS(56),
    [anon_sym_int16] = ACTIONS(56),
    [anon_sym_int24] = ACTIONS(56),
    [anon_sym_int32] = ACTIONS(54),
    [anon_sym_int40] = ACTIONS(54),
    [anon_sym_int48] = ACTIONS(54),
    [anon_sym_int56] = ACTIONS(54),
    [anon_sym_int64] = ACTIONS(54),
    [anon_sym_int72] = ACTIONS(54),
    [anon_sym_int80] = ACTIONS(54),
    [anon_sym_int88] = ACTIONS(54),
    [anon_sym_int96] = ACTIONS(54),
    [anon_sym_int104] = ACTIONS(54),
    [anon_sym_int112] = ACTIONS(54),
    [anon_sym_int120] = ACTIONS(54),
    [anon_sym_int128] = ACTIONS(54),
    [anon_sym_int136] = ACTIONS(54),
    [anon_sym_int144] = ACTIONS(54),
    [anon_sym_int152] = ACTIONS(54),
    [anon_sym_int160] = ACTIONS(54),
    [anon_sym_int168] = ACTIONS(54),
    [anon_sym_int176] = ACTIONS(54),
    [anon_sym_int184] = ACTIONS(54),
    [anon_sym_int192] = ACTIONS(54),
    [anon_sym_int200] = ACTIONS(54),
    [anon_sym_int208] = ACTIONS(54),
    [anon_sym_int216] = ACTIONS(54),
    [anon_sym_int224] = ACTIONS(54),
    [anon_sym_int232] = ACTIONS(54),
    [anon_sym_int240] = ACTIONS(54),
    [anon_sym_int248] = ACTIONS(54),
    [anon_sym_int256] = ACTIONS(54),
    [anon_sym_uint] = ACTIONS(56),
    [anon_sym_uint8] = ACTIONS(56),
    [anon_sym_uint16] = ACTIONS(56),
    [anon_sym_uint24] = ACTIONS(56),
    [anon_sym_uint32] = ACTIONS(54),
    [anon_sym_uint40] = ACTIONS(54),
    [anon_sym_uint48] = ACTIONS(54),
    [anon_sym_uint56] = ACTIONS(54),
    [anon_sym_uint64] = ACTIONS(54),
    [anon_sym_uint72] = ACTIONS(54),
    [anon_sym_uint80] = ACTIONS(54),
    [anon_sym_uint88] = ACTIONS(54),
    [anon_sym_uint96] = ACTIONS(54),
    [anon_sym_uint104] = ACTIONS(54),
    [anon_sym_uint112] = ACTIONS(54),
    [anon_sym_uint120] = ACTIONS(54),
    [anon_sym_uint128] = ACTIONS(54),
    [anon_sym_uint136] = ACTIONS(54),
    [anon_sym_uint144] = ACTIONS(54),
    [anon_sym_uint152] = ACTIONS(54),
    [anon_sym_uint160] = ACTIONS(54),
    [anon_sym_uint168] = ACTIONS(54),
    [anon_sym_uint176] = ACTIONS(54),
    [anon_sym_uint184] = ACTIONS(54),
    [anon_sym_uint192] = ACTIONS(54),
    [anon_sym_uint200] = ACTIONS(54),
    [anon_sym_uint208] = ACTIONS(54),
    [anon_sym_uint216] = ACTIONS(54),
    [anon_sym_uint224] = ACTIONS(54),
    [anon_sym_uint232] = ACTIONS(54),
    [anon_sym_uint240] = ACTIONS(54),
    [anon_sym_uint248] = ACTIONS(54),
    [anon_sym_uint256] = ACTIONS(54),
    [anon_sym_byte] = ACTIONS(56),
    [anon_sym_bytes] = ACTIONS(56),
    [anon_sym_bytes1] = ACTIONS(56),
    [anon_sym_bytes2] = ACTIONS(56),
    [anon_sym_bytes3] = ACTIONS(56),
    [anon_sym_bytes4] = ACTIONS(54),
    [anon_sym_bytes5] = ACTIONS(54),
    [anon_sym_bytes6] = ACTIONS(54),
    [anon_sym_bytes7] = ACTIONS(54),
    [anon_sym_bytes8] = ACTIONS(54),
    [anon_sym_bytes9] = ACTIONS(54),
    [anon_sym_bytes10] = ACTIONS(54),
    [anon_sym_bytes11] = ACTIONS(54),
    [anon_sym_bytes12] = ACTIONS(54),
    [anon_sym_bytes13] = ACTIONS(54),
    [anon_sym_bytes14] = ACTIONS(54),
    [anon_sym_bytes15] = ACTIONS(54),
    [anon_sym_bytes16] = ACTIONS(54),
    [anon_sym_bytes17] = ACTIONS(54),
    [anon_sym_bytes18] = ACTIONS(54),
    [anon_sym_bytes19] = ACTIONS(54),
    [anon_sym_bytes20] = ACTIONS(54),
    [anon_sym_bytes21] = ACTIONS(54),
    [anon_sym_bytes22] = ACTIONS(54),
    [anon_sym_bytes23] = ACTIONS(54),
    [anon_sym_bytes24] = ACTIONS(54),
    [anon_sym_bytes25] = ACTIONS(54),
    [anon_sym_bytes26] = ACTIONS(54),
    [anon_sym_bytes27] = ACTIONS(54),
    [anon_sym_bytes28] = ACTIONS(54),
    [anon_sym_bytes29] = ACTIONS(54),
    [anon_sym_bytes30] = ACTIONS(54),
    [anon_sym_bytes31] = ACTIONS(54),
    [anon_sym_bytes32] = ACTIONS(54),
    [anon_sym_fixed] = ACTIONS(56),
    [aux_sym__fixed_token1] = ACTIONS(54),
    [anon_sym_ufixed] = ACTIONS(56),
    [aux_sym__ufixed_token1] = ACTIONS(54),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [anon_sym_RBRACE] = ACTIONS(58),
    [anon_sym_modifier] = ACTIONS(58),
    [anon_sym_function] = ACTIONS(58),
    [anon_sym_address] = ACTIONS(58),
    [anon_sym_bool] = ACTIONS(58),
    [anon_sym_string] = ACTIONS(58),
    [anon_sym_var] = ACTIONS(58),
    [anon_sym_int] = ACTIONS(60),
    [anon_sym_int8] = ACTIONS(60),
    [anon_sym_int16] = ACTIONS(60),
    [anon_sym_int24] = ACTIONS(60),
    [anon_sym_int32] = ACTIONS(58),
    [anon_sym_int40] = ACTIONS(58),
    [anon_sym_int48] = ACTIONS(58),
    [anon_sym_int56] = ACTIONS(58),
    [anon_sym_int64] = ACTIONS(58),
    [anon_sym_int72] = ACTIONS(58),
    [anon_sym_int80] = ACTIONS(58),
    [anon_sym_int88] = ACTIONS(58),
    [anon_sym_int96] = ACTIONS(58),
    [anon_sym_int104] = ACTIONS(58),
    [anon_sym_int112] = ACTIONS(58),
    [anon_sym_int120] = ACTIONS(58),
    [anon_sym_int128] = ACTIONS(58),
    [anon_sym_int136] = ACTIONS(58),
    [anon_sym_int144] = ACTIONS(58),
    [anon_sym_int152] = ACTIONS(58),
    [anon_sym_int160] = ACTIONS(58),
    [anon_sym_int168] = ACTIONS(58),
    [anon_sym_int176] = ACTIONS(58),
    [anon_sym_int184] = ACTIONS(58),
    [anon_sym_int192] = ACTIONS(58),
    [anon_sym_int200] = ACTIONS(58),
    [anon_sym_int208] = ACTIONS(58),
    [anon_sym_int216] = ACTIONS(58),
    [anon_sym_int224] = ACTIONS(58),
    [anon_sym_int232] = ACTIONS(58),
    [anon_sym_int240] = ACTIONS(58),
    [anon_sym_int248] = ACTIONS(58),
    [anon_sym_int256] = ACTIONS(58),
    [anon_sym_uint] = ACTIONS(60),
    [anon_sym_uint8] = ACTIONS(60),
    [anon_sym_uint16] = ACTIONS(60),
    [anon_sym_uint24] = ACTIONS(60),
    [anon_sym_uint32] = ACTIONS(58),
    [anon_sym_uint40] = ACTIONS(58),
    [anon_sym_uint48] = ACTIONS(58),
    [anon_sym_uint56] = ACTIONS(58),
    [anon_sym_uint64] = ACTIONS(58),
    [anon_sym_uint72] = ACTIONS(58),
    [anon_sym_uint80] = ACTIONS(58),
    [anon_sym_uint88] = ACTIONS(58),
    [anon_sym_uint96] = ACTIONS(58),
    [anon_sym_uint104] = ACTIONS(58),
    [anon_sym_uint112] = ACTIONS(58),
    [anon_sym_uint120] = ACTIONS(58),
    [anon_sym_uint128] = ACTIONS(58),
    [anon_sym_uint136] = ACTIONS(58),
    [anon_sym_uint144] = ACTIONS(58),
    [anon_sym_uint152] = ACTIONS(58),
    [anon_sym_uint160] = ACTIONS(58),
    [anon_sym_uint168] = ACTIONS(58),
    [anon_sym_uint176] = ACTIONS(58),
    [anon_sym_uint184] = ACTIONS(58),
    [anon_sym_uint192] = ACTIONS(58),
    [anon_sym_uint200] = ACTIONS(58),
    [anon_sym_uint208] = ACTIONS(58),
    [anon_sym_uint216] = ACTIONS(58),
    [anon_sym_uint224] = ACTIONS(58),
    [anon_sym_uint232] = ACTIONS(58),
    [anon_sym_uint240] = ACTIONS(58),
    [anon_sym_uint248] = ACTIONS(58),
    [anon_sym_uint256] = ACTIONS(58),
    [anon_sym_byte] = ACTIONS(60),
    [anon_sym_bytes] = ACTIONS(60),
    [anon_sym_bytes1] = ACTIONS(60),
    [anon_sym_bytes2] = ACTIONS(60),
    [anon_sym_bytes3] = ACTIONS(60),
    [anon_sym_bytes4] = ACTIONS(58),
    [anon_sym_bytes5] = ACTIONS(58),
    [anon_sym_bytes6] = ACTIONS(58),
    [anon_sym_bytes7] = ACTIONS(58),
    [anon_sym_bytes8] = ACTIONS(58),
    [anon_sym_bytes9] = ACTIONS(58),
    [anon_sym_bytes10] = ACTIONS(58),
    [anon_sym_bytes11] = ACTIONS(58),
    [anon_sym_bytes12] = ACTIONS(58),
    [anon_sym_bytes13] = ACTIONS(58),
    [anon_sym_bytes14] = ACTIONS(58),
    [anon_sym_bytes15] = ACTIONS(58),
    [anon_sym_bytes16] = ACTIONS(58),
    [anon_sym_bytes17] = ACTIONS(58),
    [anon_sym_bytes18] = ACTIONS(58),
    [anon_sym_bytes19] = ACTIONS(58),
    [anon_sym_bytes20] = ACTIONS(58),
    [anon_sym_bytes21] = ACTIONS(58),
    [anon_sym_bytes22] = ACTIONS(58),
    [anon_sym_bytes23] = ACTIONS(58),
    [anon_sym_bytes24] = ACTIONS(58),
    [anon_sym_bytes25] = ACTIONS(58),
    [anon_sym_bytes26] = ACTIONS(58),
    [anon_sym_bytes27] = ACTIONS(58),
    [anon_sym_bytes28] = ACTIONS(58),
    [anon_sym_bytes29] = ACTIONS(58),
    [anon_sym_bytes30] = ACTIONS(58),
    [anon_sym_bytes31] = ACTIONS(58),
    [anon_sym_bytes32] = ACTIONS(58),
    [anon_sym_fixed] = ACTIONS(60),
    [aux_sym__fixed_token1] = ACTIONS(58),
    [anon_sym_ufixed] = ACTIONS(60),
    [aux_sym__ufixed_token1] = ACTIONS(58),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_pragma,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_abstract,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 3,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
    STATE(10), 5,
      sym_pragmaDirective,
      sym_import_statement,
      sym__statement,
      sym_contract_declaration,
      aux_sym_program_repeat1,
  [28] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      anon_sym_pragma,
    ACTIONS(69), 1,
      anon_sym_import,
    ACTIONS(72), 1,
      anon_sym_abstract,
    ACTIONS(75), 3,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
    STATE(10), 5,
      sym_pragmaDirective,
      sym_import_statement,
      sym__statement,
      sym_contract_declaration,
      aux_sym_program_repeat1,
  [56] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__solidity_version,
    ACTIONS(84), 1,
      sym__semicolon,
    STATE(98), 1,
      sym__solidity_version_comparison_operator,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(14), 2,
      sym__pragma_version_constraint,
      aux_sym_pragmaDirective_repeat1,
    ACTIONS(80), 3,
      anon_sym_LT_EQ,
      anon_sym_CARET,
      anon_sym_GT_EQ,
  [82] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LBRACE,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      anon_sym_SQUOTE,
    STATE(62), 1,
      sym_string,
    STATE(95), 1,
      sym__source_import,
    ACTIONS(86), 2,
      anon_sym_STAR,
      sym_identifier,
    STATE(63), 3,
      sym__import_clause,
      sym__single_import,
      sym__multiple_import,
  [110] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym__solidity_version,
    ACTIONS(96), 1,
      sym__semicolon,
    STATE(98), 1,
      sym__solidity_version_comparison_operator,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(11), 2,
      sym__pragma_version_constraint,
      aux_sym_pragmaDirective_repeat1,
    ACTIONS(80), 3,
      anon_sym_LT_EQ,
      anon_sym_CARET,
      anon_sym_GT_EQ,
  [136] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      sym__solidity_version,
    ACTIONS(107), 1,
      sym__semicolon,
    STATE(98), 1,
      sym__solidity_version_comparison_operator,
    ACTIONS(104), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(14), 2,
      sym__pragma_version_constraint,
      aux_sym_pragmaDirective_repeat1,
    ACTIONS(101), 3,
      anon_sym_LT_EQ,
      anon_sym_CARET,
      anon_sym_GT_EQ,
  [162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 7,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 7,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 7,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 7,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 7,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 7,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 7,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 7,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 5,
      sym__solidity_version,
      anon_sym_LT_EQ,
      anon_sym_CARET,
      anon_sym_GT_EQ,
      sym__semicolon,
  [281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 7,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 7,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(88), 1,
      sym_field_visibility,
    ACTIONS(133), 5,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      anon_sym_immutable,
  [321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_payable,
    ACTIONS(135), 5,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      anon_sym_immutable,
  [335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 5,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      anon_sym_immutable,
  [346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 5,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      anon_sym_immutable,
  [357] = 5,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      aux_sym_string_token2,
    ACTIONS(148), 1,
      sym_escape_sequence,
    ACTIONS(151), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_string_repeat2,
  [373] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      anon_sym_is,
    STATE(20), 1,
      sym_contract_body,
    STATE(71), 1,
      sym_class_heritage,
  [389] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      anon_sym_is,
    STATE(22), 1,
      sym_contract_body,
    STATE(64), 1,
      sym_class_heritage,
  [405] = 5,
    ACTIONS(151), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      aux_sym_string_token1,
    ACTIONS(161), 1,
      sym_escape_sequence,
    STATE(35), 1,
      aux_sym_string_repeat1,
  [421] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      sym__import_declaration,
  [437] = 5,
    ACTIONS(151), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      aux_sym_string_token1,
    ACTIONS(173), 1,
      sym_escape_sequence,
    STATE(38), 1,
      aux_sym_string_repeat1,
  [453] = 5,
    ACTIONS(151), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym_string_token2,
    ACTIONS(177), 1,
      sym_escape_sequence,
    STATE(30), 1,
      aux_sym_string_repeat2,
  [469] = 5,
    ACTIONS(151), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      aux_sym_string_token2,
    ACTIONS(181), 1,
      sym_escape_sequence,
    STATE(36), 1,
      aux_sym_string_repeat2,
  [485] = 5,
    ACTIONS(151), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(185), 1,
      aux_sym_string_token1,
    ACTIONS(188), 1,
      sym_escape_sequence,
    STATE(38), 1,
      aux_sym_string_repeat1,
  [501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      anon_sym_SQUOTE,
    STATE(79), 1,
      sym_string,
  [514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      aux_sym__inheritance_specifier_repeat1,
  [527] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_identifier,
    STATE(56), 1,
      sym__inheritance_specifier,
    STATE(94), 1,
      sym__user_defined_type_name,
  [540] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      aux_sym__inheritance_specifier_repeat1,
  [553] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      aux_sym_class_heritage_repeat1,
  [566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_DOT,
    STATE(44), 1,
      aux_sym__user_defined_type_name_repeat1,
  [579] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_LBRACE,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      aux_sym_class_heritage_repeat1,
  [592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      sym__import_declaration,
  [605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym__multiple_import_repeat1,
  [618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_identifier,
    STATE(66), 1,
      sym__inheritance_specifier,
    STATE(94), 1,
      sym__user_defined_type_name,
  [631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_as,
    ACTIONS(219), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [642] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_DOT,
    STATE(44), 1,
      aux_sym__user_defined_type_name_repeat1,
  [655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      aux_sym__inheritance_specifier_repeat1,
  [668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 3,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [677] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      aux_sym__multiple_import_repeat1,
  [690] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      sym__import_declaration,
  [703] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_DOT,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      aux_sym__user_defined_type_name_repeat1,
  [716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      aux_sym_class_heritage_repeat1,
  [729] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym__multiple_import_repeat1,
  [742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_as,
    ACTIONS(255), 1,
      sym__semicolon,
  [784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_from,
    STATE(100), 1,
      sym__from_clause,
  [794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_contract_body,
  [804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
  [828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_as,
      sym__semicolon,
  [844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_EQ,
    ACTIONS(265), 1,
      sym__semicolon,
  [854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_contract_body,
  [864] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(68), 1,
      sym__import_declaration,
  [874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      sym__expression,
  [884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 2,
      anon_sym_as,
      sym__semicolon,
  [892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_as,
    ACTIONS(273), 1,
      anon_sym_from,
  [902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_from,
  [909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_identifier,
  [916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_solidity,
  [923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      sym__semicolon,
  [930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
  [937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      sym_identifier,
  [944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_from,
  [951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      sym__semicolon,
  [958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
  [965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_from,
  [972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym_identifier,
  [979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_from,
  [986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_identifier,
  [993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym_identifier,
  [1000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_from,
  [1007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    STATE(96), 1,
      sym__expression,
  [1014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      sym_identifier,
  [1021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    STATE(61), 1,
      sym__expression,
  [1028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
  [1035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym__semicolon,
  [1042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym__semicolon,
  [1049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      sym_identifier,
  [1056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym__solidity_version,
  [1063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      sym_identifier,
  [1070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym__semicolon,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 28,
  [SMALL_STATE(11)] = 56,
  [SMALL_STATE(12)] = 82,
  [SMALL_STATE(13)] = 110,
  [SMALL_STATE(14)] = 136,
  [SMALL_STATE(15)] = 162,
  [SMALL_STATE(16)] = 175,
  [SMALL_STATE(17)] = 188,
  [SMALL_STATE(18)] = 201,
  [SMALL_STATE(19)] = 214,
  [SMALL_STATE(20)] = 227,
  [SMALL_STATE(21)] = 240,
  [SMALL_STATE(22)] = 253,
  [SMALL_STATE(23)] = 266,
  [SMALL_STATE(24)] = 281,
  [SMALL_STATE(25)] = 294,
  [SMALL_STATE(26)] = 307,
  [SMALL_STATE(27)] = 321,
  [SMALL_STATE(28)] = 335,
  [SMALL_STATE(29)] = 346,
  [SMALL_STATE(30)] = 357,
  [SMALL_STATE(31)] = 373,
  [SMALL_STATE(32)] = 389,
  [SMALL_STATE(33)] = 405,
  [SMALL_STATE(34)] = 421,
  [SMALL_STATE(35)] = 437,
  [SMALL_STATE(36)] = 453,
  [SMALL_STATE(37)] = 469,
  [SMALL_STATE(38)] = 485,
  [SMALL_STATE(39)] = 501,
  [SMALL_STATE(40)] = 514,
  [SMALL_STATE(41)] = 527,
  [SMALL_STATE(42)] = 540,
  [SMALL_STATE(43)] = 553,
  [SMALL_STATE(44)] = 566,
  [SMALL_STATE(45)] = 579,
  [SMALL_STATE(46)] = 592,
  [SMALL_STATE(47)] = 605,
  [SMALL_STATE(48)] = 618,
  [SMALL_STATE(49)] = 631,
  [SMALL_STATE(50)] = 642,
  [SMALL_STATE(51)] = 655,
  [SMALL_STATE(52)] = 668,
  [SMALL_STATE(53)] = 677,
  [SMALL_STATE(54)] = 690,
  [SMALL_STATE(55)] = 703,
  [SMALL_STATE(56)] = 716,
  [SMALL_STATE(57)] = 729,
  [SMALL_STATE(58)] = 742,
  [SMALL_STATE(59)] = 750,
  [SMALL_STATE(60)] = 758,
  [SMALL_STATE(61)] = 766,
  [SMALL_STATE(62)] = 774,
  [SMALL_STATE(63)] = 784,
  [SMALL_STATE(64)] = 794,
  [SMALL_STATE(65)] = 804,
  [SMALL_STATE(66)] = 812,
  [SMALL_STATE(67)] = 820,
  [SMALL_STATE(68)] = 828,
  [SMALL_STATE(69)] = 836,
  [SMALL_STATE(70)] = 844,
  [SMALL_STATE(71)] = 854,
  [SMALL_STATE(72)] = 864,
  [SMALL_STATE(73)] = 874,
  [SMALL_STATE(74)] = 884,
  [SMALL_STATE(75)] = 892,
  [SMALL_STATE(76)] = 902,
  [SMALL_STATE(77)] = 909,
  [SMALL_STATE(78)] = 916,
  [SMALL_STATE(79)] = 923,
  [SMALL_STATE(80)] = 930,
  [SMALL_STATE(81)] = 937,
  [SMALL_STATE(82)] = 944,
  [SMALL_STATE(83)] = 951,
  [SMALL_STATE(84)] = 958,
  [SMALL_STATE(85)] = 965,
  [SMALL_STATE(86)] = 972,
  [SMALL_STATE(87)] = 979,
  [SMALL_STATE(88)] = 986,
  [SMALL_STATE(89)] = 993,
  [SMALL_STATE(90)] = 1000,
  [SMALL_STATE(91)] = 1007,
  [SMALL_STATE(92)] = 1014,
  [SMALL_STATE(93)] = 1021,
  [SMALL_STATE(94)] = 1028,
  [SMALL_STATE(95)] = 1035,
  [SMALL_STATE(96)] = 1042,
  [SMALL_STATE(97)] = 1049,
  [SMALL_STATE(98)] = 1056,
  [SMALL_STATE(99)] = 1063,
  [SMALL_STATE(100)] = 1070,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contract_body_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contract_body_repeat1, 2), SHIFT_REPEAT(7),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contract_body_repeat1, 2), SHIFT_REPEAT(8),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contract_body_repeat1, 2), SHIFT_REPEAT(27),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contract_body_repeat1, 2), SHIFT_REPEAT(28),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2), SHIFT_REPEAT(28),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 6),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_definition, 6),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 4),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_definition, 4),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_definition, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_definition, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_definition, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_definition, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(78),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(52),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(92),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pragmaDirective_repeat1, 2), SHIFT_REPEAT(14),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pragmaDirective_repeat1, 2), SHIFT_REPEAT(98),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pragmaDirective_repeat1, 2), SHIFT_REPEAT(98),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pragmaDirective_repeat1, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_declaration, 4, .production_id = 7),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_declaration, 5, .production_id = 8),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragmaDirective, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_body, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3, .production_id = 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_declaration, 4, .production_id = 6),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4, .production_id = 5),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_declaration, 3, .production_id = 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pragma_version_constraint, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pragma_version_constraint, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragmaDirective, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_body, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive_type, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive_type, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(30),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(30),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(38),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(38),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_heritage_repeat1, 2),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_heritage_repeat1, 2), SHIFT_REPEAT(48),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_defined_type_name_repeat1, 2),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_defined_type_name_repeat1, 2), SHIFT_REPEAT(77),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_heritage, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_declaration, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_defined_type_name, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__inheritance_specifier_repeat1, 2), SHIFT_REPEAT(93),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__inheritance_specifier_repeat1, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multiple_import_repeat1, 2), SHIFT_REPEAT(72),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multiple_import_repeat1, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_defined_type_name, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_heritage, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_declaration, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inheritance_specifier, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inheritance_specifier, 5),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_import, 1, .production_id = 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inheritance_specifier, 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_import, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiple_import, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__from_clause, 2, .production_id = 4),
  [283] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_visibility, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiple_import, 5),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_import, 3, .production_id = 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_import, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiple_import, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiple_import, 4),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Solidity(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
