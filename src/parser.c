#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 136
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 204
#define ALIAS_COUNT 0
#define TOKEN_COUNT 155
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
  anon_sym_LBRACK = 33,
  anon_sym_RBRACK = 34,
  anon_sym_DOT = 35,
  anon_sym_mapping = 36,
  anon_sym_EQ_GT = 37,
  anon_sym_address = 38,
  anon_sym_payable = 39,
  anon_sym_bool = 40,
  anon_sym_string = 41,
  anon_sym_var = 42,
  anon_sym_int = 43,
  anon_sym_int8 = 44,
  anon_sym_int16 = 45,
  anon_sym_int24 = 46,
  anon_sym_int32 = 47,
  anon_sym_int40 = 48,
  anon_sym_int48 = 49,
  anon_sym_int56 = 50,
  anon_sym_int64 = 51,
  anon_sym_int72 = 52,
  anon_sym_int80 = 53,
  anon_sym_int88 = 54,
  anon_sym_int96 = 55,
  anon_sym_int104 = 56,
  anon_sym_int112 = 57,
  anon_sym_int120 = 58,
  anon_sym_int128 = 59,
  anon_sym_int136 = 60,
  anon_sym_int144 = 61,
  anon_sym_int152 = 62,
  anon_sym_int160 = 63,
  anon_sym_int168 = 64,
  anon_sym_int176 = 65,
  anon_sym_int184 = 66,
  anon_sym_int192 = 67,
  anon_sym_int200 = 68,
  anon_sym_int208 = 69,
  anon_sym_int216 = 70,
  anon_sym_int224 = 71,
  anon_sym_int232 = 72,
  anon_sym_int240 = 73,
  anon_sym_int248 = 74,
  anon_sym_int256 = 75,
  anon_sym_uint = 76,
  anon_sym_uint8 = 77,
  anon_sym_uint16 = 78,
  anon_sym_uint24 = 79,
  anon_sym_uint32 = 80,
  anon_sym_uint40 = 81,
  anon_sym_uint48 = 82,
  anon_sym_uint56 = 83,
  anon_sym_uint64 = 84,
  anon_sym_uint72 = 85,
  anon_sym_uint80 = 86,
  anon_sym_uint88 = 87,
  anon_sym_uint96 = 88,
  anon_sym_uint104 = 89,
  anon_sym_uint112 = 90,
  anon_sym_uint120 = 91,
  anon_sym_uint128 = 92,
  anon_sym_uint136 = 93,
  anon_sym_uint144 = 94,
  anon_sym_uint152 = 95,
  anon_sym_uint160 = 96,
  anon_sym_uint168 = 97,
  anon_sym_uint176 = 98,
  anon_sym_uint184 = 99,
  anon_sym_uint192 = 100,
  anon_sym_uint200 = 101,
  anon_sym_uint208 = 102,
  anon_sym_uint216 = 103,
  anon_sym_uint224 = 104,
  anon_sym_uint232 = 105,
  anon_sym_uint240 = 106,
  anon_sym_uint248 = 107,
  anon_sym_uint256 = 108,
  anon_sym_byte = 109,
  anon_sym_bytes = 110,
  anon_sym_bytes1 = 111,
  anon_sym_bytes2 = 112,
  anon_sym_bytes3 = 113,
  anon_sym_bytes4 = 114,
  anon_sym_bytes5 = 115,
  anon_sym_bytes6 = 116,
  anon_sym_bytes7 = 117,
  anon_sym_bytes8 = 118,
  anon_sym_bytes9 = 119,
  anon_sym_bytes10 = 120,
  anon_sym_bytes11 = 121,
  anon_sym_bytes12 = 122,
  anon_sym_bytes13 = 123,
  anon_sym_bytes14 = 124,
  anon_sym_bytes15 = 125,
  anon_sym_bytes16 = 126,
  anon_sym_bytes17 = 127,
  anon_sym_bytes18 = 128,
  anon_sym_bytes19 = 129,
  anon_sym_bytes20 = 130,
  anon_sym_bytes21 = 131,
  anon_sym_bytes22 = 132,
  anon_sym_bytes23 = 133,
  anon_sym_bytes24 = 134,
  anon_sym_bytes25 = 135,
  anon_sym_bytes26 = 136,
  anon_sym_bytes27 = 137,
  anon_sym_bytes28 = 138,
  anon_sym_bytes29 = 139,
  anon_sym_bytes30 = 140,
  anon_sym_bytes31 = 141,
  anon_sym_bytes32 = 142,
  anon_sym_fixed = 143,
  aux_sym__fixed_token1 = 144,
  anon_sym_ufixed = 145,
  aux_sym__ufixed_token1 = 146,
  sym__semicolon = 147,
  sym_number = 148,
  anon_sym_DQUOTE = 149,
  aux_sym_string_token1 = 150,
  anon_sym_SQUOTE = 151,
  aux_sym_string_token2 = 152,
  sym_escape_sequence = 153,
  sym_comment = 154,
  sym_program = 155,
  sym_pragmaDirective = 156,
  sym__pragma_version_constraint = 157,
  sym__solidity_version_comparison_operator = 158,
  sym_import_statement = 159,
  sym__source_import = 160,
  sym__import_clause = 161,
  sym__from_clause = 162,
  sym__single_import = 163,
  sym__multiple_import = 164,
  sym__import_declaration = 165,
  sym__statement = 166,
  sym_contract_declaration = 167,
  sym_class_heritage = 168,
  sym__inheritance_specifier = 169,
  sym_contract_body = 170,
  sym_field_definition = 171,
  sym_field_visibility = 172,
  sym_modifier_definition = 173,
  sym_method_definition = 174,
  sym__expression = 175,
  sym_type_name = 176,
  sym__function_type = 177,
  sym__parameter_list = 178,
  sym__return_parameters = 179,
  sym__nameless_parameter = 180,
  sym__parameter = 181,
  sym__storage_location = 182,
  sym__user_defined_type = 183,
  sym__mapping = 184,
  sym__mapping_key = 185,
  sym__primitive_type = 186,
  sym__int = 187,
  sym__uint = 188,
  sym__bytes = 189,
  sym__fixed = 190,
  sym__ufixed = 191,
  sym_string = 192,
  aux_sym_program_repeat1 = 193,
  aux_sym_pragmaDirective_repeat1 = 194,
  aux_sym__multiple_import_repeat1 = 195,
  aux_sym_class_heritage_repeat1 = 196,
  aux_sym__inheritance_specifier_repeat1 = 197,
  aux_sym_contract_body_repeat1 = 198,
  aux_sym__parameter_list_repeat1 = 199,
  aux_sym__return_parameters_repeat1 = 200,
  aux_sym__user_defined_type_repeat1 = 201,
  aux_sym_string_repeat1 = 202,
  aux_sym_string_repeat2 = 203,
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT] = ".",
  [anon_sym_mapping] = "mapping",
  [anon_sym_EQ_GT] = "=>",
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
  [sym__function_type] = "_function_type",
  [sym__parameter_list] = "_parameter_list",
  [sym__return_parameters] = "_return_parameters",
  [sym__nameless_parameter] = "_nameless_parameter",
  [sym__parameter] = "_parameter",
  [sym__storage_location] = "_storage_location",
  [sym__user_defined_type] = "_user_defined_type",
  [sym__mapping] = "_mapping",
  [sym__mapping_key] = "_mapping_key",
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
  [aux_sym__parameter_list_repeat1] = "_parameter_list_repeat1",
  [aux_sym__return_parameters_repeat1] = "_return_parameters_repeat1",
  [aux_sym__user_defined_type_repeat1] = "_user_defined_type_repeat1",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_mapping] = anon_sym_mapping,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
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
  [sym__function_type] = sym__function_type,
  [sym__parameter_list] = sym__parameter_list,
  [sym__return_parameters] = sym__return_parameters,
  [sym__nameless_parameter] = sym__nameless_parameter,
  [sym__parameter] = sym__parameter,
  [sym__storage_location] = sym__storage_location,
  [sym__user_defined_type] = sym__user_defined_type,
  [sym__mapping] = sym__mapping,
  [sym__mapping_key] = sym__mapping_key,
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
  [aux_sym__parameter_list_repeat1] = aux_sym__parameter_list_repeat1,
  [aux_sym__return_parameters_repeat1] = aux_sym__return_parameters_repeat1,
  [aux_sym__user_defined_type_repeat1] = aux_sym__user_defined_type_repeat1,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mapping] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
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
  [sym__function_type] = {
    .visible = false,
    .named = true,
  },
  [sym__parameter_list] = {
    .visible = false,
    .named = true,
  },
  [sym__return_parameters] = {
    .visible = false,
    .named = true,
  },
  [sym__nameless_parameter] = {
    .visible = false,
    .named = true,
  },
  [sym__parameter] = {
    .visible = false,
    .named = true,
  },
  [sym__storage_location] = {
    .visible = false,
    .named = true,
  },
  [sym__user_defined_type] = {
    .visible = false,
    .named = true,
  },
  [sym__mapping] = {
    .visible = false,
    .named = true,
  },
  [sym__mapping_key] = {
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
  [aux_sym__parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__return_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__user_defined_type_repeat1] = {
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
      if (eof) ADVANCE(71);
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == '\'') ADVANCE(221);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(190);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(77);
      if (lookahead == 'b') ADVANCE(210);
      if (lookahead == 'f') ADVANCE(200);
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == 'u') ADVANCE(199);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(70)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(219);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\r') ADVANCE(229);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == 'x') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(232);
      if (lookahead != 0) ADVANCE(228);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\'') ADVANCE(221);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(226);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(230);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == 'x') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(232);
      if (lookahead != 0) ADVANCE(228);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == '/') ADVANCE(8);
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
      if (lookahead == '\'') ADVANCE(221);
      if (lookahead == '/') ADVANCE(8);
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
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(190);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == '^') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(234);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(233);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(190);
      if (lookahead == '=') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(96);
      if (lookahead == '8') ADVANCE(97);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(106);
      if (lookahead == '8') ADVANCE(107);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(116);
      if (lookahead == '8') ADVANCE(117);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(128);
      if (lookahead == '8') ADVANCE(129);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(138);
      if (lookahead == '8') ADVANCE(139);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(148);
      if (lookahead == '8') ADVANCE(149);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(35);
      if (lookahead == '1') ADVANCE(24);
      if (lookahead == '2') ADVANCE(13);
      if (lookahead == '3') ADVANCE(46);
      if (lookahead == '4') ADVANCE(36);
      if (lookahead == '5') ADVANCE(25);
      if (lookahead == '6') ADVANCE(93);
      if (lookahead == '7') ADVANCE(47);
      if (lookahead == '8') ADVANCE(37);
      if (lookahead == '9') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == '0') ADVANCE(14);
      if (lookahead == '1') ADVANCE(48);
      if (lookahead == '2') ADVANCE(38);
      if (lookahead == '3') ADVANCE(27);
      if (lookahead == '4') ADVANCE(94);
      if (lookahead == '5') ADVANCE(49);
      END_STATE();
    case 20:
      if (lookahead == '0') ADVANCE(17);
      if (lookahead == '1') ADVANCE(54);
      if (lookahead == '2') ADVANCE(43);
      if (lookahead == '3') ADVANCE(33);
      if (lookahead == '4') ADVANCE(126);
      if (lookahead == '5') ADVANCE(55);
      END_STATE();
    case 21:
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == '1') ADVANCE(30);
      if (lookahead == '2') ADVANCE(16);
      if (lookahead == '3') ADVANCE(52);
      if (lookahead == '4') ADVANCE(41);
      if (lookahead == '5') ADVANCE(31);
      if (lookahead == '6') ADVANCE(125);
      if (lookahead == '7') ADVANCE(53);
      if (lookahead == '8') ADVANCE(42);
      if (lookahead == '9') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(95);
      END_STATE();
    case 23:
      if (lookahead == '2') ADVANCE(100);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(105);
      END_STATE();
    case 25:
      if (lookahead == '2') ADVANCE(110);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(115);
      END_STATE();
    case 27:
      if (lookahead == '2') ADVANCE(120);
      END_STATE();
    case 28:
      if (lookahead == '2') ADVANCE(127);
      END_STATE();
    case 29:
      if (lookahead == '2') ADVANCE(132);
      END_STATE();
    case 30:
      if (lookahead == '2') ADVANCE(137);
      END_STATE();
    case 31:
      if (lookahead == '2') ADVANCE(142);
      END_STATE();
    case 32:
      if (lookahead == '2') ADVANCE(147);
      END_STATE();
    case 33:
      if (lookahead == '2') ADVANCE(152);
      END_STATE();
    case 34:
      if (lookahead == '4') ADVANCE(99);
      END_STATE();
    case 35:
      if (lookahead == '4') ADVANCE(104);
      END_STATE();
    case 36:
      if (lookahead == '4') ADVANCE(109);
      END_STATE();
    case 37:
      if (lookahead == '4') ADVANCE(114);
      END_STATE();
    case 38:
      if (lookahead == '4') ADVANCE(119);
      END_STATE();
    case 39:
      if (lookahead == '4') ADVANCE(131);
      END_STATE();
    case 40:
      if (lookahead == '4') ADVANCE(136);
      END_STATE();
    case 41:
      if (lookahead == '4') ADVANCE(141);
      END_STATE();
    case 42:
      if (lookahead == '4') ADVANCE(146);
      END_STATE();
    case 43:
      if (lookahead == '4') ADVANCE(151);
      END_STATE();
    case 44:
      if (lookahead == '6') ADVANCE(98);
      END_STATE();
    case 45:
      if (lookahead == '6') ADVANCE(103);
      END_STATE();
    case 46:
      if (lookahead == '6') ADVANCE(108);
      END_STATE();
    case 47:
      if (lookahead == '6') ADVANCE(113);
      END_STATE();
    case 48:
      if (lookahead == '6') ADVANCE(118);
      END_STATE();
    case 49:
      if (lookahead == '6') ADVANCE(123);
      END_STATE();
    case 50:
      if (lookahead == '6') ADVANCE(130);
      END_STATE();
    case 51:
      if (lookahead == '6') ADVANCE(135);
      END_STATE();
    case 52:
      if (lookahead == '6') ADVANCE(140);
      END_STATE();
    case 53:
      if (lookahead == '6') ADVANCE(145);
      END_STATE();
    case 54:
      if (lookahead == '6') ADVANCE(150);
      END_STATE();
    case 55:
      if (lookahead == '6') ADVANCE(155);
      END_STATE();
    case 56:
      if (lookahead == '>') ADVANCE(91);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == 'x') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(232);
      if (lookahead != 0) ADVANCE(228);
      END_STATE();
    case 58:
      if (lookahead == 'x') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      if (lookahead == 'x') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      if (lookahead == '{') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 61:
      if (lookahead == '}') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 70:
      if (eof) ADVANCE(71);
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == '\'') ADVANCE(221);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(190);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(77);
      if (lookahead == 'b') ADVANCE(210);
      if (lookahead == 'f') ADVANCE(200);
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == 'u') ADVANCE(199);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(70)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__solidity_version);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__solidity_version);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__solidity_version);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_int8);
      if (lookahead == '0') ADVANCE(101);
      if (lookahead == '8') ADVANCE(102);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_int16);
      if (lookahead == '0') ADVANCE(111);
      if (lookahead == '8') ADVANCE(112);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_int24);
      if (lookahead == '0') ADVANCE(121);
      if (lookahead == '8') ADVANCE(122);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_int40);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_int48);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_int56);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_int72);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_int80);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_int88);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_int96);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_int104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_int112);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_int120);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_int128);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_int136);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_int144);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_int152);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_int160);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_int168);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_int176);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_int184);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_int192);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_int200);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_int208);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_int216);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_int224);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_int232);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_int240);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_int248);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_int256);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_uint8);
      if (lookahead == '0') ADVANCE(133);
      if (lookahead == '8') ADVANCE(134);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (lookahead == '0') ADVANCE(143);
      if (lookahead == '8') ADVANCE(144);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_uint24);
      if (lookahead == '0') ADVANCE(153);
      if (lookahead == '8') ADVANCE(154);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_uint40);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_uint48);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_uint56);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_uint72);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_uint80);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_uint88);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_uint96);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_uint104);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_uint112);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_uint120);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_uint128);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_uint136);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_uint144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_uint152);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_uint160);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_uint168);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_uint176);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_uint184);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_uint192);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_uint200);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_uint208);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_uint216);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_uint224);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_uint232);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_uint240);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_uint248);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_uint256);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_bytes1);
      if (lookahead == '0') ADVANCE(165);
      if (lookahead == '1') ADVANCE(166);
      if (lookahead == '2') ADVANCE(167);
      if (lookahead == '3') ADVANCE(168);
      if (lookahead == '4') ADVANCE(169);
      if (lookahead == '5') ADVANCE(170);
      if (lookahead == '6') ADVANCE(171);
      if (lookahead == '7') ADVANCE(172);
      if (lookahead == '8') ADVANCE(173);
      if (lookahead == '9') ADVANCE(174);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_bytes2);
      if (lookahead == '0') ADVANCE(175);
      if (lookahead == '1') ADVANCE(176);
      if (lookahead == '2') ADVANCE(177);
      if (lookahead == '3') ADVANCE(178);
      if (lookahead == '4') ADVANCE(179);
      if (lookahead == '5') ADVANCE(180);
      if (lookahead == '6') ADVANCE(181);
      if (lookahead == '7') ADVANCE(182);
      if (lookahead == '8') ADVANCE(183);
      if (lookahead == '9') ADVANCE(184);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_bytes3);
      if (lookahead == '0') ADVANCE(185);
      if (lookahead == '1') ADVANCE(186);
      if (lookahead == '2') ADVANCE(187);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_bytes4);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_bytes5);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_bytes6);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_bytes7);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_bytes8);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_bytes9);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_bytes10);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_bytes11);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_bytes12);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_bytes13);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_bytes14);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_bytes15);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_bytes16);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_bytes17);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_bytes18);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_bytes19);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_bytes20);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_bytes21);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_bytes22);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_bytes23);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_bytes24);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_bytes25);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_bytes26);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_bytes27);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_bytes28);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_bytes29);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_bytes30);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_bytes31);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_bytes32);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__fixed_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
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
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == '2') ADVANCE(19);
      if (lookahead == '3') ADVANCE(22);
      if (lookahead == '4') ADVANCE(12);
      if (lookahead == '5') ADVANCE(44);
      if (lookahead == '6') ADVANCE(34);
      if (lookahead == '7') ADVANCE(23);
      if (lookahead == '8') ADVANCE(92);
      if (lookahead == '9') ADVANCE(45);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(156);
      if (lookahead == '2') ADVANCE(157);
      if (lookahead == '3') ADVANCE(158);
      if (lookahead == '4') ADVANCE(159);
      if (lookahead == '5') ADVANCE(160);
      if (lookahead == '6') ADVANCE(161);
      if (lookahead == '7') ADVANCE(162);
      if (lookahead == '8') ADVANCE(163);
      if (lookahead == '9') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(21);
      if (lookahead == '2') ADVANCE(20);
      if (lookahead == '3') ADVANCE(28);
      if (lookahead == '4') ADVANCE(15);
      if (lookahead == '5') ADVANCE(50);
      if (lookahead == '6') ADVANCE(39);
      if (lookahead == '7') ADVANCE(29);
      if (lookahead == '8') ADVANCE(124);
      if (lookahead == '9') ADVANCE(51);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(204);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(194);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(195);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(203);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(208);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(209);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(207);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(192);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(196);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(191);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(193);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(197);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(198);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(205);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(218);
      if (lookahead == '/') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(220);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(217);
      if (lookahead == '/') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '/') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(227);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == '/') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(215);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(222);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(228);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(231);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
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
      if (lookahead == 'u') ADVANCE(11);
      if (lookahead == 'v') ADVANCE(12);
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
      if (lookahead == 'b') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(14);
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(16);
      if (lookahead == 'y') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == 'm') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == 'v') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 19:
      if (lookahead == 'x') ADVANCE(42);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(48);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 29:
      if (lookahead == 'y') ADVANCE(52);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(55);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 53:
      if (lookahead == 'g') ADVANCE(78);
      END_STATE();
    case 54:
      if (lookahead == 'v') ADVANCE(79);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 58:
      if (lookahead == 'x') ADVANCE(83);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 75:
      if (lookahead == 'f') ADVANCE(97);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 77:
      if (lookahead == 'b') ADVANCE(99);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 86:
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_fixed);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 94:
      if (lookahead == 'f') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 104:
      if (lookahead == 'g') ADVANCE(124);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 111:
      if (lookahead == 'b') ADVANCE(131);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 115:
      if (lookahead == 'y') ADVANCE(134);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(135);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 118:
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_pragma);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_ufixed);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_address);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_library);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_mapping);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_payable);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 140:
      if (lookahead == 'y') ADVANCE(150);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_constant);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_contract);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_modifier);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_solidity);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_immutable);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 7},
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
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
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
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 11},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_mapping] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
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
    [sym_program] = STATE(132),
    [sym_pragmaDirective] = STATE(20),
    [sym_import_statement] = STATE(20),
    [sym__statement] = STATE(20),
    [sym_contract_declaration] = STATE(20),
    [aux_sym_program_repeat1] = STATE(20),
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
    [sym_field_definition] = STATE(3),
    [sym_modifier_definition] = STATE(3),
    [sym_method_definition] = STATE(3),
    [sym_type_name] = STATE(38),
    [sym__function_type] = STATE(32),
    [sym__user_defined_type] = STATE(32),
    [sym__mapping] = STATE(32),
    [sym__primitive_type] = STATE(32),
    [sym__int] = STATE(32),
    [sym__uint] = STATE(32),
    [sym__bytes] = STATE(32),
    [sym__fixed] = STATE(32),
    [sym__ufixed] = STATE(32),
    [aux_sym_contract_body_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(17),
    [anon_sym_modifier] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_mapping] = ACTIONS(23),
    [anon_sym_address] = ACTIONS(25),
    [anon_sym_bool] = ACTIONS(27),
    [anon_sym_string] = ACTIONS(27),
    [anon_sym_var] = ACTIONS(27),
    [anon_sym_int] = ACTIONS(27),
    [anon_sym_int8] = ACTIONS(27),
    [anon_sym_int16] = ACTIONS(27),
    [anon_sym_int24] = ACTIONS(27),
    [anon_sym_int32] = ACTIONS(29),
    [anon_sym_int40] = ACTIONS(29),
    [anon_sym_int48] = ACTIONS(29),
    [anon_sym_int56] = ACTIONS(29),
    [anon_sym_int64] = ACTIONS(29),
    [anon_sym_int72] = ACTIONS(29),
    [anon_sym_int80] = ACTIONS(29),
    [anon_sym_int88] = ACTIONS(29),
    [anon_sym_int96] = ACTIONS(29),
    [anon_sym_int104] = ACTIONS(29),
    [anon_sym_int112] = ACTIONS(29),
    [anon_sym_int120] = ACTIONS(29),
    [anon_sym_int128] = ACTIONS(29),
    [anon_sym_int136] = ACTIONS(29),
    [anon_sym_int144] = ACTIONS(29),
    [anon_sym_int152] = ACTIONS(29),
    [anon_sym_int160] = ACTIONS(29),
    [anon_sym_int168] = ACTIONS(29),
    [anon_sym_int176] = ACTIONS(29),
    [anon_sym_int184] = ACTIONS(29),
    [anon_sym_int192] = ACTIONS(29),
    [anon_sym_int200] = ACTIONS(29),
    [anon_sym_int208] = ACTIONS(29),
    [anon_sym_int216] = ACTIONS(29),
    [anon_sym_int224] = ACTIONS(29),
    [anon_sym_int232] = ACTIONS(29),
    [anon_sym_int240] = ACTIONS(29),
    [anon_sym_int248] = ACTIONS(29),
    [anon_sym_int256] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(27),
    [anon_sym_uint8] = ACTIONS(27),
    [anon_sym_uint16] = ACTIONS(27),
    [anon_sym_uint24] = ACTIONS(27),
    [anon_sym_uint32] = ACTIONS(29),
    [anon_sym_uint40] = ACTIONS(29),
    [anon_sym_uint48] = ACTIONS(29),
    [anon_sym_uint56] = ACTIONS(29),
    [anon_sym_uint64] = ACTIONS(29),
    [anon_sym_uint72] = ACTIONS(29),
    [anon_sym_uint80] = ACTIONS(29),
    [anon_sym_uint88] = ACTIONS(29),
    [anon_sym_uint96] = ACTIONS(29),
    [anon_sym_uint104] = ACTIONS(29),
    [anon_sym_uint112] = ACTIONS(29),
    [anon_sym_uint120] = ACTIONS(29),
    [anon_sym_uint128] = ACTIONS(29),
    [anon_sym_uint136] = ACTIONS(29),
    [anon_sym_uint144] = ACTIONS(29),
    [anon_sym_uint152] = ACTIONS(29),
    [anon_sym_uint160] = ACTIONS(29),
    [anon_sym_uint168] = ACTIONS(29),
    [anon_sym_uint176] = ACTIONS(29),
    [anon_sym_uint184] = ACTIONS(29),
    [anon_sym_uint192] = ACTIONS(29),
    [anon_sym_uint200] = ACTIONS(29),
    [anon_sym_uint208] = ACTIONS(29),
    [anon_sym_uint216] = ACTIONS(29),
    [anon_sym_uint224] = ACTIONS(29),
    [anon_sym_uint232] = ACTIONS(29),
    [anon_sym_uint240] = ACTIONS(29),
    [anon_sym_uint248] = ACTIONS(29),
    [anon_sym_uint256] = ACTIONS(29),
    [anon_sym_byte] = ACTIONS(27),
    [anon_sym_bytes] = ACTIONS(27),
    [anon_sym_bytes1] = ACTIONS(27),
    [anon_sym_bytes2] = ACTIONS(27),
    [anon_sym_bytes3] = ACTIONS(27),
    [anon_sym_bytes4] = ACTIONS(29),
    [anon_sym_bytes5] = ACTIONS(29),
    [anon_sym_bytes6] = ACTIONS(29),
    [anon_sym_bytes7] = ACTIONS(29),
    [anon_sym_bytes8] = ACTIONS(29),
    [anon_sym_bytes9] = ACTIONS(29),
    [anon_sym_bytes10] = ACTIONS(29),
    [anon_sym_bytes11] = ACTIONS(29),
    [anon_sym_bytes12] = ACTIONS(29),
    [anon_sym_bytes13] = ACTIONS(29),
    [anon_sym_bytes14] = ACTIONS(29),
    [anon_sym_bytes15] = ACTIONS(29),
    [anon_sym_bytes16] = ACTIONS(29),
    [anon_sym_bytes17] = ACTIONS(29),
    [anon_sym_bytes18] = ACTIONS(29),
    [anon_sym_bytes19] = ACTIONS(29),
    [anon_sym_bytes20] = ACTIONS(29),
    [anon_sym_bytes21] = ACTIONS(29),
    [anon_sym_bytes22] = ACTIONS(29),
    [anon_sym_bytes23] = ACTIONS(29),
    [anon_sym_bytes24] = ACTIONS(29),
    [anon_sym_bytes25] = ACTIONS(29),
    [anon_sym_bytes26] = ACTIONS(29),
    [anon_sym_bytes27] = ACTIONS(29),
    [anon_sym_bytes28] = ACTIONS(29),
    [anon_sym_bytes29] = ACTIONS(29),
    [anon_sym_bytes30] = ACTIONS(29),
    [anon_sym_bytes31] = ACTIONS(29),
    [anon_sym_bytes32] = ACTIONS(29),
    [anon_sym_fixed] = ACTIONS(27),
    [aux_sym__fixed_token1] = ACTIONS(29),
    [anon_sym_ufixed] = ACTIONS(27),
    [aux_sym__ufixed_token1] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_field_definition] = STATE(3),
    [sym_modifier_definition] = STATE(3),
    [sym_method_definition] = STATE(3),
    [sym_type_name] = STATE(38),
    [sym__function_type] = STATE(32),
    [sym__user_defined_type] = STATE(32),
    [sym__mapping] = STATE(32),
    [sym__primitive_type] = STATE(32),
    [sym__int] = STATE(32),
    [sym__uint] = STATE(32),
    [sym__bytes] = STATE(32),
    [sym__fixed] = STATE(32),
    [sym__ufixed] = STATE(32),
    [aux_sym_contract_body_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(34),
    [anon_sym_modifier] = ACTIONS(36),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_mapping] = ACTIONS(42),
    [anon_sym_address] = ACTIONS(45),
    [anon_sym_bool] = ACTIONS(48),
    [anon_sym_string] = ACTIONS(48),
    [anon_sym_var] = ACTIONS(48),
    [anon_sym_int] = ACTIONS(48),
    [anon_sym_int8] = ACTIONS(48),
    [anon_sym_int16] = ACTIONS(48),
    [anon_sym_int24] = ACTIONS(48),
    [anon_sym_int32] = ACTIONS(51),
    [anon_sym_int40] = ACTIONS(51),
    [anon_sym_int48] = ACTIONS(51),
    [anon_sym_int56] = ACTIONS(51),
    [anon_sym_int64] = ACTIONS(51),
    [anon_sym_int72] = ACTIONS(51),
    [anon_sym_int80] = ACTIONS(51),
    [anon_sym_int88] = ACTIONS(51),
    [anon_sym_int96] = ACTIONS(51),
    [anon_sym_int104] = ACTIONS(51),
    [anon_sym_int112] = ACTIONS(51),
    [anon_sym_int120] = ACTIONS(51),
    [anon_sym_int128] = ACTIONS(51),
    [anon_sym_int136] = ACTIONS(51),
    [anon_sym_int144] = ACTIONS(51),
    [anon_sym_int152] = ACTIONS(51),
    [anon_sym_int160] = ACTIONS(51),
    [anon_sym_int168] = ACTIONS(51),
    [anon_sym_int176] = ACTIONS(51),
    [anon_sym_int184] = ACTIONS(51),
    [anon_sym_int192] = ACTIONS(51),
    [anon_sym_int200] = ACTIONS(51),
    [anon_sym_int208] = ACTIONS(51),
    [anon_sym_int216] = ACTIONS(51),
    [anon_sym_int224] = ACTIONS(51),
    [anon_sym_int232] = ACTIONS(51),
    [anon_sym_int240] = ACTIONS(51),
    [anon_sym_int248] = ACTIONS(51),
    [anon_sym_int256] = ACTIONS(51),
    [anon_sym_uint] = ACTIONS(48),
    [anon_sym_uint8] = ACTIONS(48),
    [anon_sym_uint16] = ACTIONS(48),
    [anon_sym_uint24] = ACTIONS(48),
    [anon_sym_uint32] = ACTIONS(51),
    [anon_sym_uint40] = ACTIONS(51),
    [anon_sym_uint48] = ACTIONS(51),
    [anon_sym_uint56] = ACTIONS(51),
    [anon_sym_uint64] = ACTIONS(51),
    [anon_sym_uint72] = ACTIONS(51),
    [anon_sym_uint80] = ACTIONS(51),
    [anon_sym_uint88] = ACTIONS(51),
    [anon_sym_uint96] = ACTIONS(51),
    [anon_sym_uint104] = ACTIONS(51),
    [anon_sym_uint112] = ACTIONS(51),
    [anon_sym_uint120] = ACTIONS(51),
    [anon_sym_uint128] = ACTIONS(51),
    [anon_sym_uint136] = ACTIONS(51),
    [anon_sym_uint144] = ACTIONS(51),
    [anon_sym_uint152] = ACTIONS(51),
    [anon_sym_uint160] = ACTIONS(51),
    [anon_sym_uint168] = ACTIONS(51),
    [anon_sym_uint176] = ACTIONS(51),
    [anon_sym_uint184] = ACTIONS(51),
    [anon_sym_uint192] = ACTIONS(51),
    [anon_sym_uint200] = ACTIONS(51),
    [anon_sym_uint208] = ACTIONS(51),
    [anon_sym_uint216] = ACTIONS(51),
    [anon_sym_uint224] = ACTIONS(51),
    [anon_sym_uint232] = ACTIONS(51),
    [anon_sym_uint240] = ACTIONS(51),
    [anon_sym_uint248] = ACTIONS(51),
    [anon_sym_uint256] = ACTIONS(51),
    [anon_sym_byte] = ACTIONS(48),
    [anon_sym_bytes] = ACTIONS(48),
    [anon_sym_bytes1] = ACTIONS(48),
    [anon_sym_bytes2] = ACTIONS(48),
    [anon_sym_bytes3] = ACTIONS(48),
    [anon_sym_bytes4] = ACTIONS(51),
    [anon_sym_bytes5] = ACTIONS(51),
    [anon_sym_bytes6] = ACTIONS(51),
    [anon_sym_bytes7] = ACTIONS(51),
    [anon_sym_bytes8] = ACTIONS(51),
    [anon_sym_bytes9] = ACTIONS(51),
    [anon_sym_bytes10] = ACTIONS(51),
    [anon_sym_bytes11] = ACTIONS(51),
    [anon_sym_bytes12] = ACTIONS(51),
    [anon_sym_bytes13] = ACTIONS(51),
    [anon_sym_bytes14] = ACTIONS(51),
    [anon_sym_bytes15] = ACTIONS(51),
    [anon_sym_bytes16] = ACTIONS(51),
    [anon_sym_bytes17] = ACTIONS(51),
    [anon_sym_bytes18] = ACTIONS(51),
    [anon_sym_bytes19] = ACTIONS(51),
    [anon_sym_bytes20] = ACTIONS(51),
    [anon_sym_bytes21] = ACTIONS(51),
    [anon_sym_bytes22] = ACTIONS(51),
    [anon_sym_bytes23] = ACTIONS(51),
    [anon_sym_bytes24] = ACTIONS(51),
    [anon_sym_bytes25] = ACTIONS(51),
    [anon_sym_bytes26] = ACTIONS(51),
    [anon_sym_bytes27] = ACTIONS(51),
    [anon_sym_bytes28] = ACTIONS(51),
    [anon_sym_bytes29] = ACTIONS(51),
    [anon_sym_bytes30] = ACTIONS(51),
    [anon_sym_bytes31] = ACTIONS(51),
    [anon_sym_bytes32] = ACTIONS(51),
    [anon_sym_fixed] = ACTIONS(48),
    [aux_sym__fixed_token1] = ACTIONS(51),
    [anon_sym_ufixed] = ACTIONS(48),
    [aux_sym__ufixed_token1] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_field_definition] = STATE(2),
    [sym_modifier_definition] = STATE(2),
    [sym_method_definition] = STATE(2),
    [sym_type_name] = STATE(38),
    [sym__function_type] = STATE(32),
    [sym__user_defined_type] = STATE(32),
    [sym__mapping] = STATE(32),
    [sym__primitive_type] = STATE(32),
    [sym__int] = STATE(32),
    [sym__uint] = STATE(32),
    [sym__bytes] = STATE(32),
    [sym__fixed] = STATE(32),
    [sym__ufixed] = STATE(32),
    [aux_sym_contract_body_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(54),
    [anon_sym_modifier] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_mapping] = ACTIONS(23),
    [anon_sym_address] = ACTIONS(25),
    [anon_sym_bool] = ACTIONS(27),
    [anon_sym_string] = ACTIONS(27),
    [anon_sym_var] = ACTIONS(27),
    [anon_sym_int] = ACTIONS(27),
    [anon_sym_int8] = ACTIONS(27),
    [anon_sym_int16] = ACTIONS(27),
    [anon_sym_int24] = ACTIONS(27),
    [anon_sym_int32] = ACTIONS(29),
    [anon_sym_int40] = ACTIONS(29),
    [anon_sym_int48] = ACTIONS(29),
    [anon_sym_int56] = ACTIONS(29),
    [anon_sym_int64] = ACTIONS(29),
    [anon_sym_int72] = ACTIONS(29),
    [anon_sym_int80] = ACTIONS(29),
    [anon_sym_int88] = ACTIONS(29),
    [anon_sym_int96] = ACTIONS(29),
    [anon_sym_int104] = ACTIONS(29),
    [anon_sym_int112] = ACTIONS(29),
    [anon_sym_int120] = ACTIONS(29),
    [anon_sym_int128] = ACTIONS(29),
    [anon_sym_int136] = ACTIONS(29),
    [anon_sym_int144] = ACTIONS(29),
    [anon_sym_int152] = ACTIONS(29),
    [anon_sym_int160] = ACTIONS(29),
    [anon_sym_int168] = ACTIONS(29),
    [anon_sym_int176] = ACTIONS(29),
    [anon_sym_int184] = ACTIONS(29),
    [anon_sym_int192] = ACTIONS(29),
    [anon_sym_int200] = ACTIONS(29),
    [anon_sym_int208] = ACTIONS(29),
    [anon_sym_int216] = ACTIONS(29),
    [anon_sym_int224] = ACTIONS(29),
    [anon_sym_int232] = ACTIONS(29),
    [anon_sym_int240] = ACTIONS(29),
    [anon_sym_int248] = ACTIONS(29),
    [anon_sym_int256] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(27),
    [anon_sym_uint8] = ACTIONS(27),
    [anon_sym_uint16] = ACTIONS(27),
    [anon_sym_uint24] = ACTIONS(27),
    [anon_sym_uint32] = ACTIONS(29),
    [anon_sym_uint40] = ACTIONS(29),
    [anon_sym_uint48] = ACTIONS(29),
    [anon_sym_uint56] = ACTIONS(29),
    [anon_sym_uint64] = ACTIONS(29),
    [anon_sym_uint72] = ACTIONS(29),
    [anon_sym_uint80] = ACTIONS(29),
    [anon_sym_uint88] = ACTIONS(29),
    [anon_sym_uint96] = ACTIONS(29),
    [anon_sym_uint104] = ACTIONS(29),
    [anon_sym_uint112] = ACTIONS(29),
    [anon_sym_uint120] = ACTIONS(29),
    [anon_sym_uint128] = ACTIONS(29),
    [anon_sym_uint136] = ACTIONS(29),
    [anon_sym_uint144] = ACTIONS(29),
    [anon_sym_uint152] = ACTIONS(29),
    [anon_sym_uint160] = ACTIONS(29),
    [anon_sym_uint168] = ACTIONS(29),
    [anon_sym_uint176] = ACTIONS(29),
    [anon_sym_uint184] = ACTIONS(29),
    [anon_sym_uint192] = ACTIONS(29),
    [anon_sym_uint200] = ACTIONS(29),
    [anon_sym_uint208] = ACTIONS(29),
    [anon_sym_uint216] = ACTIONS(29),
    [anon_sym_uint224] = ACTIONS(29),
    [anon_sym_uint232] = ACTIONS(29),
    [anon_sym_uint240] = ACTIONS(29),
    [anon_sym_uint248] = ACTIONS(29),
    [anon_sym_uint256] = ACTIONS(29),
    [anon_sym_byte] = ACTIONS(27),
    [anon_sym_bytes] = ACTIONS(27),
    [anon_sym_bytes1] = ACTIONS(27),
    [anon_sym_bytes2] = ACTIONS(27),
    [anon_sym_bytes3] = ACTIONS(27),
    [anon_sym_bytes4] = ACTIONS(29),
    [anon_sym_bytes5] = ACTIONS(29),
    [anon_sym_bytes6] = ACTIONS(29),
    [anon_sym_bytes7] = ACTIONS(29),
    [anon_sym_bytes8] = ACTIONS(29),
    [anon_sym_bytes9] = ACTIONS(29),
    [anon_sym_bytes10] = ACTIONS(29),
    [anon_sym_bytes11] = ACTIONS(29),
    [anon_sym_bytes12] = ACTIONS(29),
    [anon_sym_bytes13] = ACTIONS(29),
    [anon_sym_bytes14] = ACTIONS(29),
    [anon_sym_bytes15] = ACTIONS(29),
    [anon_sym_bytes16] = ACTIONS(29),
    [anon_sym_bytes17] = ACTIONS(29),
    [anon_sym_bytes18] = ACTIONS(29),
    [anon_sym_bytes19] = ACTIONS(29),
    [anon_sym_bytes20] = ACTIONS(29),
    [anon_sym_bytes21] = ACTIONS(29),
    [anon_sym_bytes22] = ACTIONS(29),
    [anon_sym_bytes23] = ACTIONS(29),
    [anon_sym_bytes24] = ACTIONS(29),
    [anon_sym_bytes25] = ACTIONS(29),
    [anon_sym_bytes26] = ACTIONS(29),
    [anon_sym_bytes27] = ACTIONS(29),
    [anon_sym_bytes28] = ACTIONS(29),
    [anon_sym_bytes29] = ACTIONS(29),
    [anon_sym_bytes30] = ACTIONS(29),
    [anon_sym_bytes31] = ACTIONS(29),
    [anon_sym_bytes32] = ACTIONS(29),
    [anon_sym_fixed] = ACTIONS(27),
    [aux_sym__fixed_token1] = ACTIONS(29),
    [anon_sym_ufixed] = ACTIONS(27),
    [aux_sym__ufixed_token1] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_type_name] = STATE(49),
    [sym__function_type] = STATE(32),
    [sym__parameter] = STATE(81),
    [sym__user_defined_type] = STATE(32),
    [sym__mapping] = STATE(32),
    [sym__primitive_type] = STATE(32),
    [sym__int] = STATE(32),
    [sym__uint] = STATE(32),
    [sym__bytes] = STATE(32),
    [sym__fixed] = STATE(32),
    [sym__ufixed] = STATE(32),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(56),
    [anon_sym_mapping] = ACTIONS(23),
    [anon_sym_address] = ACTIONS(25),
    [anon_sym_bool] = ACTIONS(27),
    [anon_sym_string] = ACTIONS(27),
    [anon_sym_var] = ACTIONS(27),
    [anon_sym_int] = ACTIONS(27),
    [anon_sym_int8] = ACTIONS(27),
    [anon_sym_int16] = ACTIONS(27),
    [anon_sym_int24] = ACTIONS(27),
    [anon_sym_int32] = ACTIONS(29),
    [anon_sym_int40] = ACTIONS(29),
    [anon_sym_int48] = ACTIONS(29),
    [anon_sym_int56] = ACTIONS(29),
    [anon_sym_int64] = ACTIONS(29),
    [anon_sym_int72] = ACTIONS(29),
    [anon_sym_int80] = ACTIONS(29),
    [anon_sym_int88] = ACTIONS(29),
    [anon_sym_int96] = ACTIONS(29),
    [anon_sym_int104] = ACTIONS(29),
    [anon_sym_int112] = ACTIONS(29),
    [anon_sym_int120] = ACTIONS(29),
    [anon_sym_int128] = ACTIONS(29),
    [anon_sym_int136] = ACTIONS(29),
    [anon_sym_int144] = ACTIONS(29),
    [anon_sym_int152] = ACTIONS(29),
    [anon_sym_int160] = ACTIONS(29),
    [anon_sym_int168] = ACTIONS(29),
    [anon_sym_int176] = ACTIONS(29),
    [anon_sym_int184] = ACTIONS(29),
    [anon_sym_int192] = ACTIONS(29),
    [anon_sym_int200] = ACTIONS(29),
    [anon_sym_int208] = ACTIONS(29),
    [anon_sym_int216] = ACTIONS(29),
    [anon_sym_int224] = ACTIONS(29),
    [anon_sym_int232] = ACTIONS(29),
    [anon_sym_int240] = ACTIONS(29),
    [anon_sym_int248] = ACTIONS(29),
    [anon_sym_int256] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(27),
    [anon_sym_uint8] = ACTIONS(27),
    [anon_sym_uint16] = ACTIONS(27),
    [anon_sym_uint24] = ACTIONS(27),
    [anon_sym_uint32] = ACTIONS(29),
    [anon_sym_uint40] = ACTIONS(29),
    [anon_sym_uint48] = ACTIONS(29),
    [anon_sym_uint56] = ACTIONS(29),
    [anon_sym_uint64] = ACTIONS(29),
    [anon_sym_uint72] = ACTIONS(29),
    [anon_sym_uint80] = ACTIONS(29),
    [anon_sym_uint88] = ACTIONS(29),
    [anon_sym_uint96] = ACTIONS(29),
    [anon_sym_uint104] = ACTIONS(29),
    [anon_sym_uint112] = ACTIONS(29),
    [anon_sym_uint120] = ACTIONS(29),
    [anon_sym_uint128] = ACTIONS(29),
    [anon_sym_uint136] = ACTIONS(29),
    [anon_sym_uint144] = ACTIONS(29),
    [anon_sym_uint152] = ACTIONS(29),
    [anon_sym_uint160] = ACTIONS(29),
    [anon_sym_uint168] = ACTIONS(29),
    [anon_sym_uint176] = ACTIONS(29),
    [anon_sym_uint184] = ACTIONS(29),
    [anon_sym_uint192] = ACTIONS(29),
    [anon_sym_uint200] = ACTIONS(29),
    [anon_sym_uint208] = ACTIONS(29),
    [anon_sym_uint216] = ACTIONS(29),
    [anon_sym_uint224] = ACTIONS(29),
    [anon_sym_uint232] = ACTIONS(29),
    [anon_sym_uint240] = ACTIONS(29),
    [anon_sym_uint248] = ACTIONS(29),
    [anon_sym_uint256] = ACTIONS(29),
    [anon_sym_byte] = ACTIONS(27),
    [anon_sym_bytes] = ACTIONS(27),
    [anon_sym_bytes1] = ACTIONS(27),
    [anon_sym_bytes2] = ACTIONS(27),
    [anon_sym_bytes3] = ACTIONS(27),
    [anon_sym_bytes4] = ACTIONS(29),
    [anon_sym_bytes5] = ACTIONS(29),
    [anon_sym_bytes6] = ACTIONS(29),
    [anon_sym_bytes7] = ACTIONS(29),
    [anon_sym_bytes8] = ACTIONS(29),
    [anon_sym_bytes9] = ACTIONS(29),
    [anon_sym_bytes10] = ACTIONS(29),
    [anon_sym_bytes11] = ACTIONS(29),
    [anon_sym_bytes12] = ACTIONS(29),
    [anon_sym_bytes13] = ACTIONS(29),
    [anon_sym_bytes14] = ACTIONS(29),
    [anon_sym_bytes15] = ACTIONS(29),
    [anon_sym_bytes16] = ACTIONS(29),
    [anon_sym_bytes17] = ACTIONS(29),
    [anon_sym_bytes18] = ACTIONS(29),
    [anon_sym_bytes19] = ACTIONS(29),
    [anon_sym_bytes20] = ACTIONS(29),
    [anon_sym_bytes21] = ACTIONS(29),
    [anon_sym_bytes22] = ACTIONS(29),
    [anon_sym_bytes23] = ACTIONS(29),
    [anon_sym_bytes24] = ACTIONS(29),
    [anon_sym_bytes25] = ACTIONS(29),
    [anon_sym_bytes26] = ACTIONS(29),
    [anon_sym_bytes27] = ACTIONS(29),
    [anon_sym_bytes28] = ACTIONS(29),
    [anon_sym_bytes29] = ACTIONS(29),
    [anon_sym_bytes30] = ACTIONS(29),
    [anon_sym_bytes31] = ACTIONS(29),
    [anon_sym_bytes32] = ACTIONS(29),
    [anon_sym_fixed] = ACTIONS(27),
    [aux_sym__fixed_token1] = ACTIONS(29),
    [anon_sym_ufixed] = ACTIONS(27),
    [aux_sym__ufixed_token1] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_type_name] = STATE(57),
    [sym__function_type] = STATE(32),
    [sym__nameless_parameter] = STATE(69),
    [sym__user_defined_type] = STATE(32),
    [sym__mapping] = STATE(32),
    [sym__primitive_type] = STATE(32),
    [sym__int] = STATE(32),
    [sym__uint] = STATE(32),
    [sym__bytes] = STATE(32),
    [sym__fixed] = STATE(32),
    [sym__ufixed] = STATE(32),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(56),
    [anon_sym_mapping] = ACTIONS(23),
    [anon_sym_address] = ACTIONS(25),
    [anon_sym_bool] = ACTIONS(27),
    [anon_sym_string] = ACTIONS(27),
    [anon_sym_var] = ACTIONS(27),
    [anon_sym_int] = ACTIONS(27),
    [anon_sym_int8] = ACTIONS(27),
    [anon_sym_int16] = ACTIONS(27),
    [anon_sym_int24] = ACTIONS(27),
    [anon_sym_int32] = ACTIONS(29),
    [anon_sym_int40] = ACTIONS(29),
    [anon_sym_int48] = ACTIONS(29),
    [anon_sym_int56] = ACTIONS(29),
    [anon_sym_int64] = ACTIONS(29),
    [anon_sym_int72] = ACTIONS(29),
    [anon_sym_int80] = ACTIONS(29),
    [anon_sym_int88] = ACTIONS(29),
    [anon_sym_int96] = ACTIONS(29),
    [anon_sym_int104] = ACTIONS(29),
    [anon_sym_int112] = ACTIONS(29),
    [anon_sym_int120] = ACTIONS(29),
    [anon_sym_int128] = ACTIONS(29),
    [anon_sym_int136] = ACTIONS(29),
    [anon_sym_int144] = ACTIONS(29),
    [anon_sym_int152] = ACTIONS(29),
    [anon_sym_int160] = ACTIONS(29),
    [anon_sym_int168] = ACTIONS(29),
    [anon_sym_int176] = ACTIONS(29),
    [anon_sym_int184] = ACTIONS(29),
    [anon_sym_int192] = ACTIONS(29),
    [anon_sym_int200] = ACTIONS(29),
    [anon_sym_int208] = ACTIONS(29),
    [anon_sym_int216] = ACTIONS(29),
    [anon_sym_int224] = ACTIONS(29),
    [anon_sym_int232] = ACTIONS(29),
    [anon_sym_int240] = ACTIONS(29),
    [anon_sym_int248] = ACTIONS(29),
    [anon_sym_int256] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(27),
    [anon_sym_uint8] = ACTIONS(27),
    [anon_sym_uint16] = ACTIONS(27),
    [anon_sym_uint24] = ACTIONS(27),
    [anon_sym_uint32] = ACTIONS(29),
    [anon_sym_uint40] = ACTIONS(29),
    [anon_sym_uint48] = ACTIONS(29),
    [anon_sym_uint56] = ACTIONS(29),
    [anon_sym_uint64] = ACTIONS(29),
    [anon_sym_uint72] = ACTIONS(29),
    [anon_sym_uint80] = ACTIONS(29),
    [anon_sym_uint88] = ACTIONS(29),
    [anon_sym_uint96] = ACTIONS(29),
    [anon_sym_uint104] = ACTIONS(29),
    [anon_sym_uint112] = ACTIONS(29),
    [anon_sym_uint120] = ACTIONS(29),
    [anon_sym_uint128] = ACTIONS(29),
    [anon_sym_uint136] = ACTIONS(29),
    [anon_sym_uint144] = ACTIONS(29),
    [anon_sym_uint152] = ACTIONS(29),
    [anon_sym_uint160] = ACTIONS(29),
    [anon_sym_uint168] = ACTIONS(29),
    [anon_sym_uint176] = ACTIONS(29),
    [anon_sym_uint184] = ACTIONS(29),
    [anon_sym_uint192] = ACTIONS(29),
    [anon_sym_uint200] = ACTIONS(29),
    [anon_sym_uint208] = ACTIONS(29),
    [anon_sym_uint216] = ACTIONS(29),
    [anon_sym_uint224] = ACTIONS(29),
    [anon_sym_uint232] = ACTIONS(29),
    [anon_sym_uint240] = ACTIONS(29),
    [anon_sym_uint248] = ACTIONS(29),
    [anon_sym_uint256] = ACTIONS(29),
    [anon_sym_byte] = ACTIONS(27),
    [anon_sym_bytes] = ACTIONS(27),
    [anon_sym_bytes1] = ACTIONS(27),
    [anon_sym_bytes2] = ACTIONS(27),
    [anon_sym_bytes3] = ACTIONS(27),
    [anon_sym_bytes4] = ACTIONS(29),
    [anon_sym_bytes5] = ACTIONS(29),
    [anon_sym_bytes6] = ACTIONS(29),
    [anon_sym_bytes7] = ACTIONS(29),
    [anon_sym_bytes8] = ACTIONS(29),
    [anon_sym_bytes9] = ACTIONS(29),
    [anon_sym_bytes10] = ACTIONS(29),
    [anon_sym_bytes11] = ACTIONS(29),
    [anon_sym_bytes12] = ACTIONS(29),
    [anon_sym_bytes13] = ACTIONS(29),
    [anon_sym_bytes14] = ACTIONS(29),
    [anon_sym_bytes15] = ACTIONS(29),
    [anon_sym_bytes16] = ACTIONS(29),
    [anon_sym_bytes17] = ACTIONS(29),
    [anon_sym_bytes18] = ACTIONS(29),
    [anon_sym_bytes19] = ACTIONS(29),
    [anon_sym_bytes20] = ACTIONS(29),
    [anon_sym_bytes21] = ACTIONS(29),
    [anon_sym_bytes22] = ACTIONS(29),
    [anon_sym_bytes23] = ACTIONS(29),
    [anon_sym_bytes24] = ACTIONS(29),
    [anon_sym_bytes25] = ACTIONS(29),
    [anon_sym_bytes26] = ACTIONS(29),
    [anon_sym_bytes27] = ACTIONS(29),
    [anon_sym_bytes28] = ACTIONS(29),
    [anon_sym_bytes29] = ACTIONS(29),
    [anon_sym_bytes30] = ACTIONS(29),
    [anon_sym_bytes31] = ACTIONS(29),
    [anon_sym_bytes32] = ACTIONS(29),
    [anon_sym_fixed] = ACTIONS(27),
    [aux_sym__fixed_token1] = ACTIONS(29),
    [anon_sym_ufixed] = ACTIONS(27),
    [aux_sym__ufixed_token1] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_type_name] = STATE(57),
    [sym__function_type] = STATE(32),
    [sym__nameless_parameter] = STATE(87),
    [sym__user_defined_type] = STATE(32),
    [sym__mapping] = STATE(32),
    [sym__primitive_type] = STATE(32),
    [sym__int] = STATE(32),
    [sym__uint] = STATE(32),
    [sym__bytes] = STATE(32),
    [sym__fixed] = STATE(32),
    [sym__ufixed] = STATE(32),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(56),
    [anon_sym_mapping] = ACTIONS(23),
    [anon_sym_address] = ACTIONS(25),
    [anon_sym_bool] = ACTIONS(27),
    [anon_sym_string] = ACTIONS(27),
    [anon_sym_var] = ACTIONS(27),
    [anon_sym_int] = ACTIONS(27),
    [anon_sym_int8] = ACTIONS(27),
    [anon_sym_int16] = ACTIONS(27),
    [anon_sym_int24] = ACTIONS(27),
    [anon_sym_int32] = ACTIONS(29),
    [anon_sym_int40] = ACTIONS(29),
    [anon_sym_int48] = ACTIONS(29),
    [anon_sym_int56] = ACTIONS(29),
    [anon_sym_int64] = ACTIONS(29),
    [anon_sym_int72] = ACTIONS(29),
    [anon_sym_int80] = ACTIONS(29),
    [anon_sym_int88] = ACTIONS(29),
    [anon_sym_int96] = ACTIONS(29),
    [anon_sym_int104] = ACTIONS(29),
    [anon_sym_int112] = ACTIONS(29),
    [anon_sym_int120] = ACTIONS(29),
    [anon_sym_int128] = ACTIONS(29),
    [anon_sym_int136] = ACTIONS(29),
    [anon_sym_int144] = ACTIONS(29),
    [anon_sym_int152] = ACTIONS(29),
    [anon_sym_int160] = ACTIONS(29),
    [anon_sym_int168] = ACTIONS(29),
    [anon_sym_int176] = ACTIONS(29),
    [anon_sym_int184] = ACTIONS(29),
    [anon_sym_int192] = ACTIONS(29),
    [anon_sym_int200] = ACTIONS(29),
    [anon_sym_int208] = ACTIONS(29),
    [anon_sym_int216] = ACTIONS(29),
    [anon_sym_int224] = ACTIONS(29),
    [anon_sym_int232] = ACTIONS(29),
    [anon_sym_int240] = ACTIONS(29),
    [anon_sym_int248] = ACTIONS(29),
    [anon_sym_int256] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(27),
    [anon_sym_uint8] = ACTIONS(27),
    [anon_sym_uint16] = ACTIONS(27),
    [anon_sym_uint24] = ACTIONS(27),
    [anon_sym_uint32] = ACTIONS(29),
    [anon_sym_uint40] = ACTIONS(29),
    [anon_sym_uint48] = ACTIONS(29),
    [anon_sym_uint56] = ACTIONS(29),
    [anon_sym_uint64] = ACTIONS(29),
    [anon_sym_uint72] = ACTIONS(29),
    [anon_sym_uint80] = ACTIONS(29),
    [anon_sym_uint88] = ACTIONS(29),
    [anon_sym_uint96] = ACTIONS(29),
    [anon_sym_uint104] = ACTIONS(29),
    [anon_sym_uint112] = ACTIONS(29),
    [anon_sym_uint120] = ACTIONS(29),
    [anon_sym_uint128] = ACTIONS(29),
    [anon_sym_uint136] = ACTIONS(29),
    [anon_sym_uint144] = ACTIONS(29),
    [anon_sym_uint152] = ACTIONS(29),
    [anon_sym_uint160] = ACTIONS(29),
    [anon_sym_uint168] = ACTIONS(29),
    [anon_sym_uint176] = ACTIONS(29),
    [anon_sym_uint184] = ACTIONS(29),
    [anon_sym_uint192] = ACTIONS(29),
    [anon_sym_uint200] = ACTIONS(29),
    [anon_sym_uint208] = ACTIONS(29),
    [anon_sym_uint216] = ACTIONS(29),
    [anon_sym_uint224] = ACTIONS(29),
    [anon_sym_uint232] = ACTIONS(29),
    [anon_sym_uint240] = ACTIONS(29),
    [anon_sym_uint248] = ACTIONS(29),
    [anon_sym_uint256] = ACTIONS(29),
    [anon_sym_byte] = ACTIONS(27),
    [anon_sym_bytes] = ACTIONS(27),
    [anon_sym_bytes1] = ACTIONS(27),
    [anon_sym_bytes2] = ACTIONS(27),
    [anon_sym_bytes3] = ACTIONS(27),
    [anon_sym_bytes4] = ACTIONS(29),
    [anon_sym_bytes5] = ACTIONS(29),
    [anon_sym_bytes6] = ACTIONS(29),
    [anon_sym_bytes7] = ACTIONS(29),
    [anon_sym_bytes8] = ACTIONS(29),
    [anon_sym_bytes9] = ACTIONS(29),
    [anon_sym_bytes10] = ACTIONS(29),
    [anon_sym_bytes11] = ACTIONS(29),
    [anon_sym_bytes12] = ACTIONS(29),
    [anon_sym_bytes13] = ACTIONS(29),
    [anon_sym_bytes14] = ACTIONS(29),
    [anon_sym_bytes15] = ACTIONS(29),
    [anon_sym_bytes16] = ACTIONS(29),
    [anon_sym_bytes17] = ACTIONS(29),
    [anon_sym_bytes18] = ACTIONS(29),
    [anon_sym_bytes19] = ACTIONS(29),
    [anon_sym_bytes20] = ACTIONS(29),
    [anon_sym_bytes21] = ACTIONS(29),
    [anon_sym_bytes22] = ACTIONS(29),
    [anon_sym_bytes23] = ACTIONS(29),
    [anon_sym_bytes24] = ACTIONS(29),
    [anon_sym_bytes25] = ACTIONS(29),
    [anon_sym_bytes26] = ACTIONS(29),
    [anon_sym_bytes27] = ACTIONS(29),
    [anon_sym_bytes28] = ACTIONS(29),
    [anon_sym_bytes29] = ACTIONS(29),
    [anon_sym_bytes30] = ACTIONS(29),
    [anon_sym_bytes31] = ACTIONS(29),
    [anon_sym_bytes32] = ACTIONS(29),
    [anon_sym_fixed] = ACTIONS(27),
    [aux_sym__fixed_token1] = ACTIONS(29),
    [anon_sym_ufixed] = ACTIONS(27),
    [aux_sym__ufixed_token1] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_type_name] = STATE(49),
    [sym__function_type] = STATE(32),
    [sym__parameter] = STATE(103),
    [sym__user_defined_type] = STATE(32),
    [sym__mapping] = STATE(32),
    [sym__primitive_type] = STATE(32),
    [sym__int] = STATE(32),
    [sym__uint] = STATE(32),
    [sym__bytes] = STATE(32),
    [sym__fixed] = STATE(32),
    [sym__ufixed] = STATE(32),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(56),
    [anon_sym_mapping] = ACTIONS(23),
    [anon_sym_address] = ACTIONS(25),
    [anon_sym_bool] = ACTIONS(27),
    [anon_sym_string] = ACTIONS(27),
    [anon_sym_var] = ACTIONS(27),
    [anon_sym_int] = ACTIONS(27),
    [anon_sym_int8] = ACTIONS(27),
    [anon_sym_int16] = ACTIONS(27),
    [anon_sym_int24] = ACTIONS(27),
    [anon_sym_int32] = ACTIONS(29),
    [anon_sym_int40] = ACTIONS(29),
    [anon_sym_int48] = ACTIONS(29),
    [anon_sym_int56] = ACTIONS(29),
    [anon_sym_int64] = ACTIONS(29),
    [anon_sym_int72] = ACTIONS(29),
    [anon_sym_int80] = ACTIONS(29),
    [anon_sym_int88] = ACTIONS(29),
    [anon_sym_int96] = ACTIONS(29),
    [anon_sym_int104] = ACTIONS(29),
    [anon_sym_int112] = ACTIONS(29),
    [anon_sym_int120] = ACTIONS(29),
    [anon_sym_int128] = ACTIONS(29),
    [anon_sym_int136] = ACTIONS(29),
    [anon_sym_int144] = ACTIONS(29),
    [anon_sym_int152] = ACTIONS(29),
    [anon_sym_int160] = ACTIONS(29),
    [anon_sym_int168] = ACTIONS(29),
    [anon_sym_int176] = ACTIONS(29),
    [anon_sym_int184] = ACTIONS(29),
    [anon_sym_int192] = ACTIONS(29),
    [anon_sym_int200] = ACTIONS(29),
    [anon_sym_int208] = ACTIONS(29),
    [anon_sym_int216] = ACTIONS(29),
    [anon_sym_int224] = ACTIONS(29),
    [anon_sym_int232] = ACTIONS(29),
    [anon_sym_int240] = ACTIONS(29),
    [anon_sym_int248] = ACTIONS(29),
    [anon_sym_int256] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(27),
    [anon_sym_uint8] = ACTIONS(27),
    [anon_sym_uint16] = ACTIONS(27),
    [anon_sym_uint24] = ACTIONS(27),
    [anon_sym_uint32] = ACTIONS(29),
    [anon_sym_uint40] = ACTIONS(29),
    [anon_sym_uint48] = ACTIONS(29),
    [anon_sym_uint56] = ACTIONS(29),
    [anon_sym_uint64] = ACTIONS(29),
    [anon_sym_uint72] = ACTIONS(29),
    [anon_sym_uint80] = ACTIONS(29),
    [anon_sym_uint88] = ACTIONS(29),
    [anon_sym_uint96] = ACTIONS(29),
    [anon_sym_uint104] = ACTIONS(29),
    [anon_sym_uint112] = ACTIONS(29),
    [anon_sym_uint120] = ACTIONS(29),
    [anon_sym_uint128] = ACTIONS(29),
    [anon_sym_uint136] = ACTIONS(29),
    [anon_sym_uint144] = ACTIONS(29),
    [anon_sym_uint152] = ACTIONS(29),
    [anon_sym_uint160] = ACTIONS(29),
    [anon_sym_uint168] = ACTIONS(29),
    [anon_sym_uint176] = ACTIONS(29),
    [anon_sym_uint184] = ACTIONS(29),
    [anon_sym_uint192] = ACTIONS(29),
    [anon_sym_uint200] = ACTIONS(29),
    [anon_sym_uint208] = ACTIONS(29),
    [anon_sym_uint216] = ACTIONS(29),
    [anon_sym_uint224] = ACTIONS(29),
    [anon_sym_uint232] = ACTIONS(29),
    [anon_sym_uint240] = ACTIONS(29),
    [anon_sym_uint248] = ACTIONS(29),
    [anon_sym_uint256] = ACTIONS(29),
    [anon_sym_byte] = ACTIONS(27),
    [anon_sym_bytes] = ACTIONS(27),
    [anon_sym_bytes1] = ACTIONS(27),
    [anon_sym_bytes2] = ACTIONS(27),
    [anon_sym_bytes3] = ACTIONS(27),
    [anon_sym_bytes4] = ACTIONS(29),
    [anon_sym_bytes5] = ACTIONS(29),
    [anon_sym_bytes6] = ACTIONS(29),
    [anon_sym_bytes7] = ACTIONS(29),
    [anon_sym_bytes8] = ACTIONS(29),
    [anon_sym_bytes9] = ACTIONS(29),
    [anon_sym_bytes10] = ACTIONS(29),
    [anon_sym_bytes11] = ACTIONS(29),
    [anon_sym_bytes12] = ACTIONS(29),
    [anon_sym_bytes13] = ACTIONS(29),
    [anon_sym_bytes14] = ACTIONS(29),
    [anon_sym_bytes15] = ACTIONS(29),
    [anon_sym_bytes16] = ACTIONS(29),
    [anon_sym_bytes17] = ACTIONS(29),
    [anon_sym_bytes18] = ACTIONS(29),
    [anon_sym_bytes19] = ACTIONS(29),
    [anon_sym_bytes20] = ACTIONS(29),
    [anon_sym_bytes21] = ACTIONS(29),
    [anon_sym_bytes22] = ACTIONS(29),
    [anon_sym_bytes23] = ACTIONS(29),
    [anon_sym_bytes24] = ACTIONS(29),
    [anon_sym_bytes25] = ACTIONS(29),
    [anon_sym_bytes26] = ACTIONS(29),
    [anon_sym_bytes27] = ACTIONS(29),
    [anon_sym_bytes28] = ACTIONS(29),
    [anon_sym_bytes29] = ACTIONS(29),
    [anon_sym_bytes30] = ACTIONS(29),
    [anon_sym_bytes31] = ACTIONS(29),
    [anon_sym_bytes32] = ACTIONS(29),
    [anon_sym_fixed] = ACTIONS(27),
    [aux_sym__fixed_token1] = ACTIONS(29),
    [anon_sym_ufixed] = ACTIONS(27),
    [aux_sym__ufixed_token1] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_type_name] = STATE(94),
    [sym__function_type] = STATE(32),
    [sym__user_defined_type] = STATE(32),
    [sym__mapping] = STATE(32),
    [sym__primitive_type] = STATE(32),
    [sym__int] = STATE(32),
    [sym__uint] = STATE(32),
    [sym__bytes] = STATE(32),
    [sym__fixed] = STATE(32),
    [sym__ufixed] = STATE(32),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(56),
    [anon_sym_mapping] = ACTIONS(23),
    [anon_sym_address] = ACTIONS(25),
    [anon_sym_bool] = ACTIONS(27),
    [anon_sym_string] = ACTIONS(27),
    [anon_sym_var] = ACTIONS(27),
    [anon_sym_int] = ACTIONS(27),
    [anon_sym_int8] = ACTIONS(27),
    [anon_sym_int16] = ACTIONS(27),
    [anon_sym_int24] = ACTIONS(27),
    [anon_sym_int32] = ACTIONS(29),
    [anon_sym_int40] = ACTIONS(29),
    [anon_sym_int48] = ACTIONS(29),
    [anon_sym_int56] = ACTIONS(29),
    [anon_sym_int64] = ACTIONS(29),
    [anon_sym_int72] = ACTIONS(29),
    [anon_sym_int80] = ACTIONS(29),
    [anon_sym_int88] = ACTIONS(29),
    [anon_sym_int96] = ACTIONS(29),
    [anon_sym_int104] = ACTIONS(29),
    [anon_sym_int112] = ACTIONS(29),
    [anon_sym_int120] = ACTIONS(29),
    [anon_sym_int128] = ACTIONS(29),
    [anon_sym_int136] = ACTIONS(29),
    [anon_sym_int144] = ACTIONS(29),
    [anon_sym_int152] = ACTIONS(29),
    [anon_sym_int160] = ACTIONS(29),
    [anon_sym_int168] = ACTIONS(29),
    [anon_sym_int176] = ACTIONS(29),
    [anon_sym_int184] = ACTIONS(29),
    [anon_sym_int192] = ACTIONS(29),
    [anon_sym_int200] = ACTIONS(29),
    [anon_sym_int208] = ACTIONS(29),
    [anon_sym_int216] = ACTIONS(29),
    [anon_sym_int224] = ACTIONS(29),
    [anon_sym_int232] = ACTIONS(29),
    [anon_sym_int240] = ACTIONS(29),
    [anon_sym_int248] = ACTIONS(29),
    [anon_sym_int256] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(27),
    [anon_sym_uint8] = ACTIONS(27),
    [anon_sym_uint16] = ACTIONS(27),
    [anon_sym_uint24] = ACTIONS(27),
    [anon_sym_uint32] = ACTIONS(29),
    [anon_sym_uint40] = ACTIONS(29),
    [anon_sym_uint48] = ACTIONS(29),
    [anon_sym_uint56] = ACTIONS(29),
    [anon_sym_uint64] = ACTIONS(29),
    [anon_sym_uint72] = ACTIONS(29),
    [anon_sym_uint80] = ACTIONS(29),
    [anon_sym_uint88] = ACTIONS(29),
    [anon_sym_uint96] = ACTIONS(29),
    [anon_sym_uint104] = ACTIONS(29),
    [anon_sym_uint112] = ACTIONS(29),
    [anon_sym_uint120] = ACTIONS(29),
    [anon_sym_uint128] = ACTIONS(29),
    [anon_sym_uint136] = ACTIONS(29),
    [anon_sym_uint144] = ACTIONS(29),
    [anon_sym_uint152] = ACTIONS(29),
    [anon_sym_uint160] = ACTIONS(29),
    [anon_sym_uint168] = ACTIONS(29),
    [anon_sym_uint176] = ACTIONS(29),
    [anon_sym_uint184] = ACTIONS(29),
    [anon_sym_uint192] = ACTIONS(29),
    [anon_sym_uint200] = ACTIONS(29),
    [anon_sym_uint208] = ACTIONS(29),
    [anon_sym_uint216] = ACTIONS(29),
    [anon_sym_uint224] = ACTIONS(29),
    [anon_sym_uint232] = ACTIONS(29),
    [anon_sym_uint240] = ACTIONS(29),
    [anon_sym_uint248] = ACTIONS(29),
    [anon_sym_uint256] = ACTIONS(29),
    [anon_sym_byte] = ACTIONS(27),
    [anon_sym_bytes] = ACTIONS(27),
    [anon_sym_bytes1] = ACTIONS(27),
    [anon_sym_bytes2] = ACTIONS(27),
    [anon_sym_bytes3] = ACTIONS(27),
    [anon_sym_bytes4] = ACTIONS(29),
    [anon_sym_bytes5] = ACTIONS(29),
    [anon_sym_bytes6] = ACTIONS(29),
    [anon_sym_bytes7] = ACTIONS(29),
    [anon_sym_bytes8] = ACTIONS(29),
    [anon_sym_bytes9] = ACTIONS(29),
    [anon_sym_bytes10] = ACTIONS(29),
    [anon_sym_bytes11] = ACTIONS(29),
    [anon_sym_bytes12] = ACTIONS(29),
    [anon_sym_bytes13] = ACTIONS(29),
    [anon_sym_bytes14] = ACTIONS(29),
    [anon_sym_bytes15] = ACTIONS(29),
    [anon_sym_bytes16] = ACTIONS(29),
    [anon_sym_bytes17] = ACTIONS(29),
    [anon_sym_bytes18] = ACTIONS(29),
    [anon_sym_bytes19] = ACTIONS(29),
    [anon_sym_bytes20] = ACTIONS(29),
    [anon_sym_bytes21] = ACTIONS(29),
    [anon_sym_bytes22] = ACTIONS(29),
    [anon_sym_bytes23] = ACTIONS(29),
    [anon_sym_bytes24] = ACTIONS(29),
    [anon_sym_bytes25] = ACTIONS(29),
    [anon_sym_bytes26] = ACTIONS(29),
    [anon_sym_bytes27] = ACTIONS(29),
    [anon_sym_bytes28] = ACTIONS(29),
    [anon_sym_bytes29] = ACTIONS(29),
    [anon_sym_bytes30] = ACTIONS(29),
    [anon_sym_bytes31] = ACTIONS(29),
    [anon_sym_bytes32] = ACTIONS(29),
    [anon_sym_fixed] = ACTIONS(27),
    [aux_sym__fixed_token1] = ACTIONS(29),
    [anon_sym_ufixed] = ACTIONS(27),
    [aux_sym__ufixed_token1] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__user_defined_type] = STATE(108),
    [sym__mapping_key] = STATE(108),
    [sym__primitive_type] = STATE(108),
    [sym__int] = STATE(108),
    [sym__uint] = STATE(108),
    [sym__bytes] = STATE(108),
    [sym__fixed] = STATE(108),
    [sym__ufixed] = STATE(108),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_address] = ACTIONS(25),
    [anon_sym_bool] = ACTIONS(58),
    [anon_sym_string] = ACTIONS(58),
    [anon_sym_var] = ACTIONS(58),
    [anon_sym_int] = ACTIONS(58),
    [anon_sym_int8] = ACTIONS(58),
    [anon_sym_int16] = ACTIONS(58),
    [anon_sym_int24] = ACTIONS(58),
    [anon_sym_int32] = ACTIONS(60),
    [anon_sym_int40] = ACTIONS(60),
    [anon_sym_int48] = ACTIONS(60),
    [anon_sym_int56] = ACTIONS(60),
    [anon_sym_int64] = ACTIONS(60),
    [anon_sym_int72] = ACTIONS(60),
    [anon_sym_int80] = ACTIONS(60),
    [anon_sym_int88] = ACTIONS(60),
    [anon_sym_int96] = ACTIONS(60),
    [anon_sym_int104] = ACTIONS(60),
    [anon_sym_int112] = ACTIONS(60),
    [anon_sym_int120] = ACTIONS(60),
    [anon_sym_int128] = ACTIONS(60),
    [anon_sym_int136] = ACTIONS(60),
    [anon_sym_int144] = ACTIONS(60),
    [anon_sym_int152] = ACTIONS(60),
    [anon_sym_int160] = ACTIONS(60),
    [anon_sym_int168] = ACTIONS(60),
    [anon_sym_int176] = ACTIONS(60),
    [anon_sym_int184] = ACTIONS(60),
    [anon_sym_int192] = ACTIONS(60),
    [anon_sym_int200] = ACTIONS(60),
    [anon_sym_int208] = ACTIONS(60),
    [anon_sym_int216] = ACTIONS(60),
    [anon_sym_int224] = ACTIONS(60),
    [anon_sym_int232] = ACTIONS(60),
    [anon_sym_int240] = ACTIONS(60),
    [anon_sym_int248] = ACTIONS(60),
    [anon_sym_int256] = ACTIONS(60),
    [anon_sym_uint] = ACTIONS(58),
    [anon_sym_uint8] = ACTIONS(58),
    [anon_sym_uint16] = ACTIONS(58),
    [anon_sym_uint24] = ACTIONS(58),
    [anon_sym_uint32] = ACTIONS(60),
    [anon_sym_uint40] = ACTIONS(60),
    [anon_sym_uint48] = ACTIONS(60),
    [anon_sym_uint56] = ACTIONS(60),
    [anon_sym_uint64] = ACTIONS(60),
    [anon_sym_uint72] = ACTIONS(60),
    [anon_sym_uint80] = ACTIONS(60),
    [anon_sym_uint88] = ACTIONS(60),
    [anon_sym_uint96] = ACTIONS(60),
    [anon_sym_uint104] = ACTIONS(60),
    [anon_sym_uint112] = ACTIONS(60),
    [anon_sym_uint120] = ACTIONS(60),
    [anon_sym_uint128] = ACTIONS(60),
    [anon_sym_uint136] = ACTIONS(60),
    [anon_sym_uint144] = ACTIONS(60),
    [anon_sym_uint152] = ACTIONS(60),
    [anon_sym_uint160] = ACTIONS(60),
    [anon_sym_uint168] = ACTIONS(60),
    [anon_sym_uint176] = ACTIONS(60),
    [anon_sym_uint184] = ACTIONS(60),
    [anon_sym_uint192] = ACTIONS(60),
    [anon_sym_uint200] = ACTIONS(60),
    [anon_sym_uint208] = ACTIONS(60),
    [anon_sym_uint216] = ACTIONS(60),
    [anon_sym_uint224] = ACTIONS(60),
    [anon_sym_uint232] = ACTIONS(60),
    [anon_sym_uint240] = ACTIONS(60),
    [anon_sym_uint248] = ACTIONS(60),
    [anon_sym_uint256] = ACTIONS(60),
    [anon_sym_byte] = ACTIONS(58),
    [anon_sym_bytes] = ACTIONS(58),
    [anon_sym_bytes1] = ACTIONS(58),
    [anon_sym_bytes2] = ACTIONS(58),
    [anon_sym_bytes3] = ACTIONS(58),
    [anon_sym_bytes4] = ACTIONS(60),
    [anon_sym_bytes5] = ACTIONS(60),
    [anon_sym_bytes6] = ACTIONS(60),
    [anon_sym_bytes7] = ACTIONS(60),
    [anon_sym_bytes8] = ACTIONS(60),
    [anon_sym_bytes9] = ACTIONS(60),
    [anon_sym_bytes10] = ACTIONS(60),
    [anon_sym_bytes11] = ACTIONS(60),
    [anon_sym_bytes12] = ACTIONS(60),
    [anon_sym_bytes13] = ACTIONS(60),
    [anon_sym_bytes14] = ACTIONS(60),
    [anon_sym_bytes15] = ACTIONS(60),
    [anon_sym_bytes16] = ACTIONS(60),
    [anon_sym_bytes17] = ACTIONS(60),
    [anon_sym_bytes18] = ACTIONS(60),
    [anon_sym_bytes19] = ACTIONS(60),
    [anon_sym_bytes20] = ACTIONS(60),
    [anon_sym_bytes21] = ACTIONS(60),
    [anon_sym_bytes22] = ACTIONS(60),
    [anon_sym_bytes23] = ACTIONS(60),
    [anon_sym_bytes24] = ACTIONS(60),
    [anon_sym_bytes25] = ACTIONS(60),
    [anon_sym_bytes26] = ACTIONS(60),
    [anon_sym_bytes27] = ACTIONS(60),
    [anon_sym_bytes28] = ACTIONS(60),
    [anon_sym_bytes29] = ACTIONS(60),
    [anon_sym_bytes30] = ACTIONS(60),
    [anon_sym_bytes31] = ACTIONS(60),
    [anon_sym_bytes32] = ACTIONS(60),
    [anon_sym_fixed] = ACTIONS(58),
    [aux_sym__fixed_token1] = ACTIONS(60),
    [anon_sym_ufixed] = ACTIONS(58),
    [aux_sym__ufixed_token1] = ACTIONS(60),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__parameter_list] = STATE(22),
    [sym_identifier] = ACTIONS(62),
    [anon_sym_RBRACE] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(66),
    [anon_sym_modifier] = ACTIONS(62),
    [anon_sym_function] = ACTIONS(62),
    [anon_sym_mapping] = ACTIONS(62),
    [anon_sym_address] = ACTIONS(62),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [anon_sym_var] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_int8] = ACTIONS(62),
    [anon_sym_int16] = ACTIONS(62),
    [anon_sym_int24] = ACTIONS(62),
    [anon_sym_int32] = ACTIONS(64),
    [anon_sym_int40] = ACTIONS(64),
    [anon_sym_int48] = ACTIONS(64),
    [anon_sym_int56] = ACTIONS(64),
    [anon_sym_int64] = ACTIONS(64),
    [anon_sym_int72] = ACTIONS(64),
    [anon_sym_int80] = ACTIONS(64),
    [anon_sym_int88] = ACTIONS(64),
    [anon_sym_int96] = ACTIONS(64),
    [anon_sym_int104] = ACTIONS(64),
    [anon_sym_int112] = ACTIONS(64),
    [anon_sym_int120] = ACTIONS(64),
    [anon_sym_int128] = ACTIONS(64),
    [anon_sym_int136] = ACTIONS(64),
    [anon_sym_int144] = ACTIONS(64),
    [anon_sym_int152] = ACTIONS(64),
    [anon_sym_int160] = ACTIONS(64),
    [anon_sym_int168] = ACTIONS(64),
    [anon_sym_int176] = ACTIONS(64),
    [anon_sym_int184] = ACTIONS(64),
    [anon_sym_int192] = ACTIONS(64),
    [anon_sym_int200] = ACTIONS(64),
    [anon_sym_int208] = ACTIONS(64),
    [anon_sym_int216] = ACTIONS(64),
    [anon_sym_int224] = ACTIONS(64),
    [anon_sym_int232] = ACTIONS(64),
    [anon_sym_int240] = ACTIONS(64),
    [anon_sym_int248] = ACTIONS(64),
    [anon_sym_int256] = ACTIONS(64),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_uint8] = ACTIONS(62),
    [anon_sym_uint16] = ACTIONS(62),
    [anon_sym_uint24] = ACTIONS(62),
    [anon_sym_uint32] = ACTIONS(64),
    [anon_sym_uint40] = ACTIONS(64),
    [anon_sym_uint48] = ACTIONS(64),
    [anon_sym_uint56] = ACTIONS(64),
    [anon_sym_uint64] = ACTIONS(64),
    [anon_sym_uint72] = ACTIONS(64),
    [anon_sym_uint80] = ACTIONS(64),
    [anon_sym_uint88] = ACTIONS(64),
    [anon_sym_uint96] = ACTIONS(64),
    [anon_sym_uint104] = ACTIONS(64),
    [anon_sym_uint112] = ACTIONS(64),
    [anon_sym_uint120] = ACTIONS(64),
    [anon_sym_uint128] = ACTIONS(64),
    [anon_sym_uint136] = ACTIONS(64),
    [anon_sym_uint144] = ACTIONS(64),
    [anon_sym_uint152] = ACTIONS(64),
    [anon_sym_uint160] = ACTIONS(64),
    [anon_sym_uint168] = ACTIONS(64),
    [anon_sym_uint176] = ACTIONS(64),
    [anon_sym_uint184] = ACTIONS(64),
    [anon_sym_uint192] = ACTIONS(64),
    [anon_sym_uint200] = ACTIONS(64),
    [anon_sym_uint208] = ACTIONS(64),
    [anon_sym_uint216] = ACTIONS(64),
    [anon_sym_uint224] = ACTIONS(64),
    [anon_sym_uint232] = ACTIONS(64),
    [anon_sym_uint240] = ACTIONS(64),
    [anon_sym_uint248] = ACTIONS(64),
    [anon_sym_uint256] = ACTIONS(64),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_bytes] = ACTIONS(62),
    [anon_sym_bytes1] = ACTIONS(62),
    [anon_sym_bytes2] = ACTIONS(62),
    [anon_sym_bytes3] = ACTIONS(62),
    [anon_sym_bytes4] = ACTIONS(64),
    [anon_sym_bytes5] = ACTIONS(64),
    [anon_sym_bytes6] = ACTIONS(64),
    [anon_sym_bytes7] = ACTIONS(64),
    [anon_sym_bytes8] = ACTIONS(64),
    [anon_sym_bytes9] = ACTIONS(64),
    [anon_sym_bytes10] = ACTIONS(64),
    [anon_sym_bytes11] = ACTIONS(64),
    [anon_sym_bytes12] = ACTIONS(64),
    [anon_sym_bytes13] = ACTIONS(64),
    [anon_sym_bytes14] = ACTIONS(64),
    [anon_sym_bytes15] = ACTIONS(64),
    [anon_sym_bytes16] = ACTIONS(64),
    [anon_sym_bytes17] = ACTIONS(64),
    [anon_sym_bytes18] = ACTIONS(64),
    [anon_sym_bytes19] = ACTIONS(64),
    [anon_sym_bytes20] = ACTIONS(64),
    [anon_sym_bytes21] = ACTIONS(64),
    [anon_sym_bytes22] = ACTIONS(64),
    [anon_sym_bytes23] = ACTIONS(64),
    [anon_sym_bytes24] = ACTIONS(64),
    [anon_sym_bytes25] = ACTIONS(64),
    [anon_sym_bytes26] = ACTIONS(64),
    [anon_sym_bytes27] = ACTIONS(64),
    [anon_sym_bytes28] = ACTIONS(64),
    [anon_sym_bytes29] = ACTIONS(64),
    [anon_sym_bytes30] = ACTIONS(64),
    [anon_sym_bytes31] = ACTIONS(64),
    [anon_sym_bytes32] = ACTIONS(64),
    [anon_sym_fixed] = ACTIONS(62),
    [aux_sym__fixed_token1] = ACTIONS(64),
    [anon_sym_ufixed] = ACTIONS(62),
    [aux_sym__ufixed_token1] = ACTIONS(64),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_identifier] = ACTIONS(68),
    [anon_sym_RBRACE] = ACTIONS(70),
    [anon_sym_modifier] = ACTIONS(68),
    [anon_sym_function] = ACTIONS(68),
    [anon_sym_mapping] = ACTIONS(68),
    [anon_sym_address] = ACTIONS(68),
    [anon_sym_bool] = ACTIONS(68),
    [anon_sym_string] = ACTIONS(68),
    [anon_sym_var] = ACTIONS(68),
    [anon_sym_int] = ACTIONS(68),
    [anon_sym_int8] = ACTIONS(68),
    [anon_sym_int16] = ACTIONS(68),
    [anon_sym_int24] = ACTIONS(68),
    [anon_sym_int32] = ACTIONS(70),
    [anon_sym_int40] = ACTIONS(70),
    [anon_sym_int48] = ACTIONS(70),
    [anon_sym_int56] = ACTIONS(70),
    [anon_sym_int64] = ACTIONS(70),
    [anon_sym_int72] = ACTIONS(70),
    [anon_sym_int80] = ACTIONS(70),
    [anon_sym_int88] = ACTIONS(70),
    [anon_sym_int96] = ACTIONS(70),
    [anon_sym_int104] = ACTIONS(70),
    [anon_sym_int112] = ACTIONS(70),
    [anon_sym_int120] = ACTIONS(70),
    [anon_sym_int128] = ACTIONS(70),
    [anon_sym_int136] = ACTIONS(70),
    [anon_sym_int144] = ACTIONS(70),
    [anon_sym_int152] = ACTIONS(70),
    [anon_sym_int160] = ACTIONS(70),
    [anon_sym_int168] = ACTIONS(70),
    [anon_sym_int176] = ACTIONS(70),
    [anon_sym_int184] = ACTIONS(70),
    [anon_sym_int192] = ACTIONS(70),
    [anon_sym_int200] = ACTIONS(70),
    [anon_sym_int208] = ACTIONS(70),
    [anon_sym_int216] = ACTIONS(70),
    [anon_sym_int224] = ACTIONS(70),
    [anon_sym_int232] = ACTIONS(70),
    [anon_sym_int240] = ACTIONS(70),
    [anon_sym_int248] = ACTIONS(70),
    [anon_sym_int256] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(68),
    [anon_sym_uint8] = ACTIONS(68),
    [anon_sym_uint16] = ACTIONS(68),
    [anon_sym_uint24] = ACTIONS(68),
    [anon_sym_uint32] = ACTIONS(70),
    [anon_sym_uint40] = ACTIONS(70),
    [anon_sym_uint48] = ACTIONS(70),
    [anon_sym_uint56] = ACTIONS(70),
    [anon_sym_uint64] = ACTIONS(70),
    [anon_sym_uint72] = ACTIONS(70),
    [anon_sym_uint80] = ACTIONS(70),
    [anon_sym_uint88] = ACTIONS(70),
    [anon_sym_uint96] = ACTIONS(70),
    [anon_sym_uint104] = ACTIONS(70),
    [anon_sym_uint112] = ACTIONS(70),
    [anon_sym_uint120] = ACTIONS(70),
    [anon_sym_uint128] = ACTIONS(70),
    [anon_sym_uint136] = ACTIONS(70),
    [anon_sym_uint144] = ACTIONS(70),
    [anon_sym_uint152] = ACTIONS(70),
    [anon_sym_uint160] = ACTIONS(70),
    [anon_sym_uint168] = ACTIONS(70),
    [anon_sym_uint176] = ACTIONS(70),
    [anon_sym_uint184] = ACTIONS(70),
    [anon_sym_uint192] = ACTIONS(70),
    [anon_sym_uint200] = ACTIONS(70),
    [anon_sym_uint208] = ACTIONS(70),
    [anon_sym_uint216] = ACTIONS(70),
    [anon_sym_uint224] = ACTIONS(70),
    [anon_sym_uint232] = ACTIONS(70),
    [anon_sym_uint240] = ACTIONS(70),
    [anon_sym_uint248] = ACTIONS(70),
    [anon_sym_uint256] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(68),
    [anon_sym_bytes] = ACTIONS(68),
    [anon_sym_bytes1] = ACTIONS(68),
    [anon_sym_bytes2] = ACTIONS(68),
    [anon_sym_bytes3] = ACTIONS(68),
    [anon_sym_bytes4] = ACTIONS(70),
    [anon_sym_bytes5] = ACTIONS(70),
    [anon_sym_bytes6] = ACTIONS(70),
    [anon_sym_bytes7] = ACTIONS(70),
    [anon_sym_bytes8] = ACTIONS(70),
    [anon_sym_bytes9] = ACTIONS(70),
    [anon_sym_bytes10] = ACTIONS(70),
    [anon_sym_bytes11] = ACTIONS(70),
    [anon_sym_bytes12] = ACTIONS(70),
    [anon_sym_bytes13] = ACTIONS(70),
    [anon_sym_bytes14] = ACTIONS(70),
    [anon_sym_bytes15] = ACTIONS(70),
    [anon_sym_bytes16] = ACTIONS(70),
    [anon_sym_bytes17] = ACTIONS(70),
    [anon_sym_bytes18] = ACTIONS(70),
    [anon_sym_bytes19] = ACTIONS(70),
    [anon_sym_bytes20] = ACTIONS(70),
    [anon_sym_bytes21] = ACTIONS(70),
    [anon_sym_bytes22] = ACTIONS(70),
    [anon_sym_bytes23] = ACTIONS(70),
    [anon_sym_bytes24] = ACTIONS(70),
    [anon_sym_bytes25] = ACTIONS(70),
    [anon_sym_bytes26] = ACTIONS(70),
    [anon_sym_bytes27] = ACTIONS(70),
    [anon_sym_bytes28] = ACTIONS(70),
    [anon_sym_bytes29] = ACTIONS(70),
    [anon_sym_bytes30] = ACTIONS(70),
    [anon_sym_bytes31] = ACTIONS(70),
    [anon_sym_bytes32] = ACTIONS(70),
    [anon_sym_fixed] = ACTIONS(68),
    [aux_sym__fixed_token1] = ACTIONS(70),
    [anon_sym_ufixed] = ACTIONS(68),
    [aux_sym__ufixed_token1] = ACTIONS(70),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_identifier] = ACTIONS(72),
    [anon_sym_RBRACE] = ACTIONS(74),
    [anon_sym_modifier] = ACTIONS(72),
    [anon_sym_function] = ACTIONS(72),
    [anon_sym_mapping] = ACTIONS(72),
    [anon_sym_address] = ACTIONS(72),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [anon_sym_var] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_int8] = ACTIONS(72),
    [anon_sym_int16] = ACTIONS(72),
    [anon_sym_int24] = ACTIONS(72),
    [anon_sym_int32] = ACTIONS(74),
    [anon_sym_int40] = ACTIONS(74),
    [anon_sym_int48] = ACTIONS(74),
    [anon_sym_int56] = ACTIONS(74),
    [anon_sym_int64] = ACTIONS(74),
    [anon_sym_int72] = ACTIONS(74),
    [anon_sym_int80] = ACTIONS(74),
    [anon_sym_int88] = ACTIONS(74),
    [anon_sym_int96] = ACTIONS(74),
    [anon_sym_int104] = ACTIONS(74),
    [anon_sym_int112] = ACTIONS(74),
    [anon_sym_int120] = ACTIONS(74),
    [anon_sym_int128] = ACTIONS(74),
    [anon_sym_int136] = ACTIONS(74),
    [anon_sym_int144] = ACTIONS(74),
    [anon_sym_int152] = ACTIONS(74),
    [anon_sym_int160] = ACTIONS(74),
    [anon_sym_int168] = ACTIONS(74),
    [anon_sym_int176] = ACTIONS(74),
    [anon_sym_int184] = ACTIONS(74),
    [anon_sym_int192] = ACTIONS(74),
    [anon_sym_int200] = ACTIONS(74),
    [anon_sym_int208] = ACTIONS(74),
    [anon_sym_int216] = ACTIONS(74),
    [anon_sym_int224] = ACTIONS(74),
    [anon_sym_int232] = ACTIONS(74),
    [anon_sym_int240] = ACTIONS(74),
    [anon_sym_int248] = ACTIONS(74),
    [anon_sym_int256] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_uint8] = ACTIONS(72),
    [anon_sym_uint16] = ACTIONS(72),
    [anon_sym_uint24] = ACTIONS(72),
    [anon_sym_uint32] = ACTIONS(74),
    [anon_sym_uint40] = ACTIONS(74),
    [anon_sym_uint48] = ACTIONS(74),
    [anon_sym_uint56] = ACTIONS(74),
    [anon_sym_uint64] = ACTIONS(74),
    [anon_sym_uint72] = ACTIONS(74),
    [anon_sym_uint80] = ACTIONS(74),
    [anon_sym_uint88] = ACTIONS(74),
    [anon_sym_uint96] = ACTIONS(74),
    [anon_sym_uint104] = ACTIONS(74),
    [anon_sym_uint112] = ACTIONS(74),
    [anon_sym_uint120] = ACTIONS(74),
    [anon_sym_uint128] = ACTIONS(74),
    [anon_sym_uint136] = ACTIONS(74),
    [anon_sym_uint144] = ACTIONS(74),
    [anon_sym_uint152] = ACTIONS(74),
    [anon_sym_uint160] = ACTIONS(74),
    [anon_sym_uint168] = ACTIONS(74),
    [anon_sym_uint176] = ACTIONS(74),
    [anon_sym_uint184] = ACTIONS(74),
    [anon_sym_uint192] = ACTIONS(74),
    [anon_sym_uint200] = ACTIONS(74),
    [anon_sym_uint208] = ACTIONS(74),
    [anon_sym_uint216] = ACTIONS(74),
    [anon_sym_uint224] = ACTIONS(74),
    [anon_sym_uint232] = ACTIONS(74),
    [anon_sym_uint240] = ACTIONS(74),
    [anon_sym_uint248] = ACTIONS(74),
    [anon_sym_uint256] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_bytes] = ACTIONS(72),
    [anon_sym_bytes1] = ACTIONS(72),
    [anon_sym_bytes2] = ACTIONS(72),
    [anon_sym_bytes3] = ACTIONS(72),
    [anon_sym_bytes4] = ACTIONS(74),
    [anon_sym_bytes5] = ACTIONS(74),
    [anon_sym_bytes6] = ACTIONS(74),
    [anon_sym_bytes7] = ACTIONS(74),
    [anon_sym_bytes8] = ACTIONS(74),
    [anon_sym_bytes9] = ACTIONS(74),
    [anon_sym_bytes10] = ACTIONS(74),
    [anon_sym_bytes11] = ACTIONS(74),
    [anon_sym_bytes12] = ACTIONS(74),
    [anon_sym_bytes13] = ACTIONS(74),
    [anon_sym_bytes14] = ACTIONS(74),
    [anon_sym_bytes15] = ACTIONS(74),
    [anon_sym_bytes16] = ACTIONS(74),
    [anon_sym_bytes17] = ACTIONS(74),
    [anon_sym_bytes18] = ACTIONS(74),
    [anon_sym_bytes19] = ACTIONS(74),
    [anon_sym_bytes20] = ACTIONS(74),
    [anon_sym_bytes21] = ACTIONS(74),
    [anon_sym_bytes22] = ACTIONS(74),
    [anon_sym_bytes23] = ACTIONS(74),
    [anon_sym_bytes24] = ACTIONS(74),
    [anon_sym_bytes25] = ACTIONS(74),
    [anon_sym_bytes26] = ACTIONS(74),
    [anon_sym_bytes27] = ACTIONS(74),
    [anon_sym_bytes28] = ACTIONS(74),
    [anon_sym_bytes29] = ACTIONS(74),
    [anon_sym_bytes30] = ACTIONS(74),
    [anon_sym_bytes31] = ACTIONS(74),
    [anon_sym_bytes32] = ACTIONS(74),
    [anon_sym_fixed] = ACTIONS(72),
    [aux_sym__fixed_token1] = ACTIONS(74),
    [anon_sym_ufixed] = ACTIONS(72),
    [aux_sym__ufixed_token1] = ACTIONS(74),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_identifier] = ACTIONS(76),
    [anon_sym_RBRACE] = ACTIONS(78),
    [anon_sym_modifier] = ACTIONS(76),
    [anon_sym_function] = ACTIONS(76),
    [anon_sym_mapping] = ACTIONS(76),
    [anon_sym_address] = ACTIONS(76),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [anon_sym_var] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_int8] = ACTIONS(76),
    [anon_sym_int16] = ACTIONS(76),
    [anon_sym_int24] = ACTIONS(76),
    [anon_sym_int32] = ACTIONS(78),
    [anon_sym_int40] = ACTIONS(78),
    [anon_sym_int48] = ACTIONS(78),
    [anon_sym_int56] = ACTIONS(78),
    [anon_sym_int64] = ACTIONS(78),
    [anon_sym_int72] = ACTIONS(78),
    [anon_sym_int80] = ACTIONS(78),
    [anon_sym_int88] = ACTIONS(78),
    [anon_sym_int96] = ACTIONS(78),
    [anon_sym_int104] = ACTIONS(78),
    [anon_sym_int112] = ACTIONS(78),
    [anon_sym_int120] = ACTIONS(78),
    [anon_sym_int128] = ACTIONS(78),
    [anon_sym_int136] = ACTIONS(78),
    [anon_sym_int144] = ACTIONS(78),
    [anon_sym_int152] = ACTIONS(78),
    [anon_sym_int160] = ACTIONS(78),
    [anon_sym_int168] = ACTIONS(78),
    [anon_sym_int176] = ACTIONS(78),
    [anon_sym_int184] = ACTIONS(78),
    [anon_sym_int192] = ACTIONS(78),
    [anon_sym_int200] = ACTIONS(78),
    [anon_sym_int208] = ACTIONS(78),
    [anon_sym_int216] = ACTIONS(78),
    [anon_sym_int224] = ACTIONS(78),
    [anon_sym_int232] = ACTIONS(78),
    [anon_sym_int240] = ACTIONS(78),
    [anon_sym_int248] = ACTIONS(78),
    [anon_sym_int256] = ACTIONS(78),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_uint8] = ACTIONS(76),
    [anon_sym_uint16] = ACTIONS(76),
    [anon_sym_uint24] = ACTIONS(76),
    [anon_sym_uint32] = ACTIONS(78),
    [anon_sym_uint40] = ACTIONS(78),
    [anon_sym_uint48] = ACTIONS(78),
    [anon_sym_uint56] = ACTIONS(78),
    [anon_sym_uint64] = ACTIONS(78),
    [anon_sym_uint72] = ACTIONS(78),
    [anon_sym_uint80] = ACTIONS(78),
    [anon_sym_uint88] = ACTIONS(78),
    [anon_sym_uint96] = ACTIONS(78),
    [anon_sym_uint104] = ACTIONS(78),
    [anon_sym_uint112] = ACTIONS(78),
    [anon_sym_uint120] = ACTIONS(78),
    [anon_sym_uint128] = ACTIONS(78),
    [anon_sym_uint136] = ACTIONS(78),
    [anon_sym_uint144] = ACTIONS(78),
    [anon_sym_uint152] = ACTIONS(78),
    [anon_sym_uint160] = ACTIONS(78),
    [anon_sym_uint168] = ACTIONS(78),
    [anon_sym_uint176] = ACTIONS(78),
    [anon_sym_uint184] = ACTIONS(78),
    [anon_sym_uint192] = ACTIONS(78),
    [anon_sym_uint200] = ACTIONS(78),
    [anon_sym_uint208] = ACTIONS(78),
    [anon_sym_uint216] = ACTIONS(78),
    [anon_sym_uint224] = ACTIONS(78),
    [anon_sym_uint232] = ACTIONS(78),
    [anon_sym_uint240] = ACTIONS(78),
    [anon_sym_uint248] = ACTIONS(78),
    [anon_sym_uint256] = ACTIONS(78),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_bytes] = ACTIONS(76),
    [anon_sym_bytes1] = ACTIONS(76),
    [anon_sym_bytes2] = ACTIONS(76),
    [anon_sym_bytes3] = ACTIONS(76),
    [anon_sym_bytes4] = ACTIONS(78),
    [anon_sym_bytes5] = ACTIONS(78),
    [anon_sym_bytes6] = ACTIONS(78),
    [anon_sym_bytes7] = ACTIONS(78),
    [anon_sym_bytes8] = ACTIONS(78),
    [anon_sym_bytes9] = ACTIONS(78),
    [anon_sym_bytes10] = ACTIONS(78),
    [anon_sym_bytes11] = ACTIONS(78),
    [anon_sym_bytes12] = ACTIONS(78),
    [anon_sym_bytes13] = ACTIONS(78),
    [anon_sym_bytes14] = ACTIONS(78),
    [anon_sym_bytes15] = ACTIONS(78),
    [anon_sym_bytes16] = ACTIONS(78),
    [anon_sym_bytes17] = ACTIONS(78),
    [anon_sym_bytes18] = ACTIONS(78),
    [anon_sym_bytes19] = ACTIONS(78),
    [anon_sym_bytes20] = ACTIONS(78),
    [anon_sym_bytes21] = ACTIONS(78),
    [anon_sym_bytes22] = ACTIONS(78),
    [anon_sym_bytes23] = ACTIONS(78),
    [anon_sym_bytes24] = ACTIONS(78),
    [anon_sym_bytes25] = ACTIONS(78),
    [anon_sym_bytes26] = ACTIONS(78),
    [anon_sym_bytes27] = ACTIONS(78),
    [anon_sym_bytes28] = ACTIONS(78),
    [anon_sym_bytes29] = ACTIONS(78),
    [anon_sym_bytes30] = ACTIONS(78),
    [anon_sym_bytes31] = ACTIONS(78),
    [anon_sym_bytes32] = ACTIONS(78),
    [anon_sym_fixed] = ACTIONS(76),
    [aux_sym__fixed_token1] = ACTIONS(78),
    [anon_sym_ufixed] = ACTIONS(76),
    [aux_sym__ufixed_token1] = ACTIONS(78),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym__user_defined_type_repeat1,
    ACTIONS(82), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(80), 6,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      anon_sym_immutable,
      sym_identifier,
  [25] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_DOT,
    STATE(17), 1,
      aux_sym__user_defined_type_repeat1,
    ACTIONS(88), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(86), 6,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      anon_sym_immutable,
      sym_identifier,
  [50] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_DOT,
    STATE(17), 1,
      aux_sym__user_defined_type_repeat1,
    ACTIONS(92), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(90), 6,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      anon_sym_immutable,
      sym_identifier,
  [75] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 6,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      anon_sym_immutable,
      sym_identifier,
    ACTIONS(92), 6,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_EQ_GT,
  [95] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      anon_sym_pragma,
    ACTIONS(102), 1,
      anon_sym_import,
    ACTIONS(105), 1,
      anon_sym_abstract,
    ACTIONS(108), 3,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
    STATE(19), 5,
      sym_pragmaDirective,
      sym_import_statement,
      sym__statement,
      sym_contract_declaration,
      aux_sym_program_repeat1,
  [123] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_pragma,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_abstract,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 3,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
    STATE(19), 5,
      sym_pragmaDirective,
      sym_import_statement,
      sym__statement,
      sym_contract_declaration,
      aux_sym_program_repeat1,
  [151] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_payable,
    ACTIONS(115), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(113), 6,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      anon_sym_immutable,
      sym_identifier,
  [172] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym__return_parameters,
    ACTIONS(121), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    ACTIONS(119), 6,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      anon_sym_immutable,
      sym_identifier,
  [195] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym__solidity_version,
    ACTIONS(131), 1,
      sym__semicolon,
    STATE(111), 1,
      sym__solidity_version_comparison_operator,
    ACTIONS(129), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(27), 2,
      sym__pragma_version_constraint,
      aux_sym_pragmaDirective_repeat1,
    ACTIONS(127), 3,
      anon_sym_LT_EQ,
      anon_sym_CARET,
      anon_sym_GT_EQ,
  [221] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym__solidity_version,
    ACTIONS(142), 1,
      sym__semicolon,
    STATE(111), 1,
      sym__solidity_version_comparison_operator,
    ACTIONS(139), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(24), 2,
      sym__pragma_version_constraint,
      aux_sym_pragmaDirective_repeat1,
    ACTIONS(136), 3,
      anon_sym_LT_EQ,
      anon_sym_CARET,
      anon_sym_GT_EQ,
  [247] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE,
    STATE(107), 1,
      sym_string,
    STATE(123), 1,
      sym__source_import,
    ACTIONS(144), 2,
      anon_sym_STAR,
      sym_identifier,
    STATE(101), 3,
      sym__import_clause,
      sym__single_import,
      sym__multiple_import,
  [275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    ACTIONS(152), 6,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      anon_sym_immutable,
      sym_identifier,
  [293] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym__solidity_version,
    ACTIONS(158), 1,
      sym__semicolon,
    STATE(111), 1,
      sym__solidity_version_comparison_operator,
    ACTIONS(129), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(24), 2,
      sym__pragma_version_constraint,
      aux_sym_pragmaDirective_repeat1,
    ACTIONS(127), 3,
      anon_sym_LT_EQ,
      anon_sym_CARET,
      anon_sym_GT_EQ,
  [319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    ACTIONS(160), 6,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      anon_sym_immutable,
      sym_identifier,
  [337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(164), 6,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      anon_sym_immutable,
      sym_identifier,
  [355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    ACTIONS(168), 6,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      anon_sym_immutable,
      sym_identifier,
  [372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    ACTIONS(172), 6,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      anon_sym_immutable,
      sym_identifier,
  [389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    ACTIONS(176), 6,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      anon_sym_immutable,
      sym_identifier,
  [406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    ACTIONS(180), 6,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      anon_sym_immutable,
      sym_identifier,
  [423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    ACTIONS(184), 6,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      anon_sym_immutable,
      sym_identifier,
  [440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    ACTIONS(188), 6,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      anon_sym_immutable,
      sym_identifier,
  [457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    ACTIONS(192), 6,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      anon_sym_immutable,
      sym_identifier,
  [474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 7,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [487] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    STATE(135), 1,
      sym_field_visibility,
    ACTIONS(198), 5,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      anon_sym_immutable,
  [504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(202), 5,
      sym__solidity_version,
      anon_sym_LT_EQ,
      anon_sym_CARET,
      anon_sym_GT_EQ,
      sym__semicolon,
  [519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 7,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 7,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 7,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 7,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 7,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 7,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 7,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 7,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 7,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [636] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(224), 1,
      sym_identifier,
    STATE(73), 1,
      sym__storage_location,
    ACTIONS(226), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [653] = 5,
    ACTIONS(228), 1,
      anon_sym_DQUOTE,
    ACTIONS(230), 1,
      aux_sym_string_token1,
    ACTIONS(233), 1,
      sym_escape_sequence,
    ACTIONS(236), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_string_repeat1,
  [669] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    ACTIONS(240), 1,
      anon_sym_is,
    STATE(47), 1,
      sym_contract_body,
    STATE(89), 1,
      sym_class_heritage,
  [685] = 5,
    ACTIONS(236), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      aux_sym_string_token1,
    ACTIONS(246), 1,
      sym_escape_sequence,
    STATE(56), 1,
      aux_sym_string_repeat1,
  [701] = 5,
    ACTIONS(236), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(250), 1,
      aux_sym_string_token2,
    ACTIONS(252), 1,
      sym_escape_sequence,
    STATE(54), 1,
      aux_sym_string_repeat2,
  [717] = 5,
    ACTIONS(236), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    ACTIONS(256), 1,
      aux_sym_string_token2,
    ACTIONS(259), 1,
      sym_escape_sequence,
    STATE(54), 1,
      aux_sym_string_repeat2,
  [733] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    ACTIONS(240), 1,
      anon_sym_is,
    STATE(45), 1,
      sym_contract_body,
    STATE(85), 1,
      sym_class_heritage,
  [749] = 5,
    ACTIONS(236), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      aux_sym_string_token1,
    ACTIONS(264), 1,
      sym_escape_sequence,
    STATE(50), 1,
      aux_sym_string_repeat1,
  [765] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    STATE(98), 1,
      sym__storage_location,
    ACTIONS(266), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [779] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym_identifier,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym__import_declaration,
  [795] = 5,
    ACTIONS(236), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(274), 1,
      aux_sym_string_token2,
    ACTIONS(276), 1,
      sym_escape_sequence,
    STATE(53), 1,
      aux_sym_string_repeat2,
  [811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym__inheritance_specifier_repeat1,
  [824] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE,
    STATE(116), 1,
      sym_string,
  [837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 3,
      anon_sym_contract,
      anon_sym_interface,
      anon_sym_library,
  [846] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym__return_parameters_repeat1,
  [859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym__inheritance_specifier_repeat1,
  [872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LBRACE,
    ACTIONS(296), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      aux_sym_class_heritage_repeat1,
  [885] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym__return_parameters_repeat1,
  [898] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym__parameter_list_repeat1,
  [911] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym__inheritance_specifier_repeat1,
  [924] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      aux_sym__return_parameters_repeat1,
  [937] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym_identifier,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      sym__import_declaration,
  [950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym__multiple_import_repeat1,
  [963] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym__parameter_list_repeat1,
  [976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_identifier,
    ACTIONS(324), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [987] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    ACTIONS(328), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym__multiple_import_repeat1,
  [1000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym_identifier,
    ACTIONS(328), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      sym__import_declaration,
  [1013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_as,
    ACTIONS(332), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1024] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_class_heritage_repeat1,
  [1037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_identifier,
    STATE(100), 1,
      sym__inheritance_specifier,
    STATE(130), 1,
      sym__user_defined_type,
  [1050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_COMMA,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      aux_sym_class_heritage_repeat1,
  [1063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_identifier,
    STATE(65), 1,
      sym__inheritance_specifier,
    STATE(130), 1,
      sym__user_defined_type,
  [1076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      aux_sym__parameter_list_repeat1,
  [1089] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym__multiple_import_repeat1,
  [1102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [1110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 2,
      anon_sym_as,
      sym__semicolon,
  [1118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_contract_body,
  [1128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_RBRACK,
    STATE(124), 1,
      sym__expression,
  [1138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [1154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_contract_body,
  [1164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym__expression,
  [1174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym_identifier,
    STATE(106), 1,
      sym__import_declaration,
  [1192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym__parameter_list,
  [1202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
  [1212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_as,
    ACTIONS(365), 1,
      anon_sym_from,
  [1230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 2,
      anon_sym_as,
      sym__semicolon,
  [1238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_EQ,
    ACTIONS(373), 1,
      sym__semicolon,
  [1256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [1264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_from,
    STATE(126), 1,
      sym__from_clause,
  [1274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [1282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_as,
    ACTIONS(383), 1,
      sym__semicolon,
  [1324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_EQ_GT,
  [1331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_from,
  [1338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_solidity,
  [1345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      sym__solidity_version,
  [1352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym_identifier,
  [1359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    STATE(127), 1,
      sym__expression,
  [1366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_identifier,
  [1373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    STATE(91), 1,
      sym__expression,
  [1380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      sym__semicolon,
  [1387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
  [1394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_from,
  [1401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      sym_identifier,
  [1408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      sym_identifier,
  [1415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      sym_identifier,
  [1422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      sym__semicolon,
  [1429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym__semicolon,
  [1436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_RBRACK,
  [1443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_from,
  [1450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym__semicolon,
  [1457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      sym__semicolon,
  [1464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      sym_identifier,
  [1471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_from,
  [1478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
  [1485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_from,
  [1492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      ts_builtin_sym_end,
  [1499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
  [1506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      sym_identifier,
  [1513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      sym_identifier,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
  [SMALL_STATE(16)] = 25,
  [SMALL_STATE(17)] = 50,
  [SMALL_STATE(18)] = 75,
  [SMALL_STATE(19)] = 95,
  [SMALL_STATE(20)] = 123,
  [SMALL_STATE(21)] = 151,
  [SMALL_STATE(22)] = 172,
  [SMALL_STATE(23)] = 195,
  [SMALL_STATE(24)] = 221,
  [SMALL_STATE(25)] = 247,
  [SMALL_STATE(26)] = 275,
  [SMALL_STATE(27)] = 293,
  [SMALL_STATE(28)] = 319,
  [SMALL_STATE(29)] = 337,
  [SMALL_STATE(30)] = 355,
  [SMALL_STATE(31)] = 372,
  [SMALL_STATE(32)] = 389,
  [SMALL_STATE(33)] = 406,
  [SMALL_STATE(34)] = 423,
  [SMALL_STATE(35)] = 440,
  [SMALL_STATE(36)] = 457,
  [SMALL_STATE(37)] = 474,
  [SMALL_STATE(38)] = 487,
  [SMALL_STATE(39)] = 504,
  [SMALL_STATE(40)] = 519,
  [SMALL_STATE(41)] = 532,
  [SMALL_STATE(42)] = 545,
  [SMALL_STATE(43)] = 558,
  [SMALL_STATE(44)] = 571,
  [SMALL_STATE(45)] = 584,
  [SMALL_STATE(46)] = 597,
  [SMALL_STATE(47)] = 610,
  [SMALL_STATE(48)] = 623,
  [SMALL_STATE(49)] = 636,
  [SMALL_STATE(50)] = 653,
  [SMALL_STATE(51)] = 669,
  [SMALL_STATE(52)] = 685,
  [SMALL_STATE(53)] = 701,
  [SMALL_STATE(54)] = 717,
  [SMALL_STATE(55)] = 733,
  [SMALL_STATE(56)] = 749,
  [SMALL_STATE(57)] = 765,
  [SMALL_STATE(58)] = 779,
  [SMALL_STATE(59)] = 795,
  [SMALL_STATE(60)] = 811,
  [SMALL_STATE(61)] = 824,
  [SMALL_STATE(62)] = 837,
  [SMALL_STATE(63)] = 846,
  [SMALL_STATE(64)] = 859,
  [SMALL_STATE(65)] = 872,
  [SMALL_STATE(66)] = 885,
  [SMALL_STATE(67)] = 898,
  [SMALL_STATE(68)] = 911,
  [SMALL_STATE(69)] = 924,
  [SMALL_STATE(70)] = 937,
  [SMALL_STATE(71)] = 950,
  [SMALL_STATE(72)] = 963,
  [SMALL_STATE(73)] = 976,
  [SMALL_STATE(74)] = 987,
  [SMALL_STATE(75)] = 1000,
  [SMALL_STATE(76)] = 1013,
  [SMALL_STATE(77)] = 1024,
  [SMALL_STATE(78)] = 1037,
  [SMALL_STATE(79)] = 1050,
  [SMALL_STATE(80)] = 1063,
  [SMALL_STATE(81)] = 1076,
  [SMALL_STATE(82)] = 1089,
  [SMALL_STATE(83)] = 1102,
  [SMALL_STATE(84)] = 1110,
  [SMALL_STATE(85)] = 1118,
  [SMALL_STATE(86)] = 1128,
  [SMALL_STATE(87)] = 1138,
  [SMALL_STATE(88)] = 1146,
  [SMALL_STATE(89)] = 1154,
  [SMALL_STATE(90)] = 1164,
  [SMALL_STATE(91)] = 1174,
  [SMALL_STATE(92)] = 1182,
  [SMALL_STATE(93)] = 1192,
  [SMALL_STATE(94)] = 1202,
  [SMALL_STATE(95)] = 1212,
  [SMALL_STATE(96)] = 1220,
  [SMALL_STATE(97)] = 1230,
  [SMALL_STATE(98)] = 1238,
  [SMALL_STATE(99)] = 1246,
  [SMALL_STATE(100)] = 1256,
  [SMALL_STATE(101)] = 1264,
  [SMALL_STATE(102)] = 1274,
  [SMALL_STATE(103)] = 1282,
  [SMALL_STATE(104)] = 1290,
  [SMALL_STATE(105)] = 1298,
  [SMALL_STATE(106)] = 1306,
  [SMALL_STATE(107)] = 1314,
  [SMALL_STATE(108)] = 1324,
  [SMALL_STATE(109)] = 1331,
  [SMALL_STATE(110)] = 1338,
  [SMALL_STATE(111)] = 1345,
  [SMALL_STATE(112)] = 1352,
  [SMALL_STATE(113)] = 1359,
  [SMALL_STATE(114)] = 1366,
  [SMALL_STATE(115)] = 1373,
  [SMALL_STATE(116)] = 1380,
  [SMALL_STATE(117)] = 1387,
  [SMALL_STATE(118)] = 1394,
  [SMALL_STATE(119)] = 1401,
  [SMALL_STATE(120)] = 1408,
  [SMALL_STATE(121)] = 1415,
  [SMALL_STATE(122)] = 1422,
  [SMALL_STATE(123)] = 1429,
  [SMALL_STATE(124)] = 1436,
  [SMALL_STATE(125)] = 1443,
  [SMALL_STATE(126)] = 1450,
  [SMALL_STATE(127)] = 1457,
  [SMALL_STATE(128)] = 1464,
  [SMALL_STATE(129)] = 1471,
  [SMALL_STATE(130)] = 1478,
  [SMALL_STATE(131)] = 1485,
  [SMALL_STATE(132)] = 1492,
  [SMALL_STATE(133)] = 1499,
  [SMALL_STATE(134)] = 1506,
  [SMALL_STATE(135)] = 1513,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2), SHIFT_REPEAT(15),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contract_body_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2), SHIFT_REPEAT(13),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2), SHIFT_REPEAT(11),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2), SHIFT_REPEAT(133),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2), SHIFT_REPEAT(21),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2), SHIFT_REPEAT(32),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contract_body_repeat1, 2), SHIFT_REPEAT(32),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_definition, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_definition, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_definition, 4),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 4),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_definition, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_definition, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_definition, 6),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 6),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__user_defined_type, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_defined_type, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__user_defined_type, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_defined_type, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__user_defined_type_repeat1, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_defined_type_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_defined_type_repeat1, 2), SHIFT_REPEAT(120),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(110),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(25),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(62),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(134),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive_type, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive_type, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_type, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_type, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pragmaDirective_repeat1, 2), SHIFT_REPEAT(24),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pragmaDirective_repeat1, 2), SHIFT_REPEAT(111),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pragmaDirective_repeat1, 2), SHIFT_REPEAT(111),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pragmaDirective_repeat1, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_list, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_list, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive_type, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive_type, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mapping, 6),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mapping, 6),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__return_parameters, 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_parameters, 4),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_type, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_type, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 4),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 4),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__return_parameters, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_parameters, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4, .production_id = 5),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pragma_version_constraint, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pragma_version_constraint, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragmaDirective, 4),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragmaDirective, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_declaration, 4, .production_id = 7),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_body, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_body, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_declaration, 4, .production_id = 6),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_declaration, 5, .production_id = 8),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_declaration, 3, .production_id = 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3, .production_id = 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(50),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(50),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(54),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(54),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nameless_parameter, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__return_parameters_repeat1, 2), SHIFT_REPEAT(7),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__return_parameters_repeat1, 2),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__inheritance_specifier_repeat1, 2), SHIFT_REPEAT(115),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__inheritance_specifier_repeat1, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_heritage, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameter_list_repeat1, 2), SHIFT_REPEAT(8),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameter_list_repeat1, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multiple_import_repeat1, 2), SHIFT_REPEAT(92),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multiple_import_repeat1, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_declaration, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_heritage_repeat1, 2),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_heritage_repeat1, 2), SHIFT_REPEAT(78),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_heritage, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inheritance_specifier, 4),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inheritance_specifier, 5),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_declaration, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_import, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nameless_parameter, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inheritance_specifier, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_import, 1, .production_id = 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiple_import, 4),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_visibility, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__from_clause, 2, .production_id = 4),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiple_import, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_import, 3, .production_id = 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiple_import, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiple_import, 5),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_import, 3),
  [427] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
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
