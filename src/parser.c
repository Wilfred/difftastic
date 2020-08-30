#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 188
#define LARGE_STATE_COUNT 29
#define SYMBOL_COUNT 217
#define ALIAS_COUNT 0
#define TOKEN_COUNT 157
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7

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
  anon_sym_is = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  anon_sym_struct = 22,
  anon_sym_enum = 23,
  anon_sym_EQ = 24,
  anon_sym_public = 25,
  anon_sym_internal = 26,
  anon_sym_private = 27,
  anon_sym_constant = 28,
  sym__immutable = 29,
  anon_sym_override = 30,
  anon_sym_modifier = 31,
  anon_sym_virtual = 32,
  anon_sym_function = 33,
  anon_sym_returns = 34,
  anon_sym_LBRACK = 35,
  anon_sym_RBRACK = 36,
  anon_sym_DOT = 37,
  anon_sym_mapping = 38,
  anon_sym_EQ_GT = 39,
  anon_sym_address = 40,
  anon_sym_payable = 41,
  anon_sym_bool = 42,
  anon_sym_string = 43,
  anon_sym_var = 44,
  anon_sym_int = 45,
  anon_sym_int8 = 46,
  anon_sym_int16 = 47,
  anon_sym_int24 = 48,
  anon_sym_int32 = 49,
  anon_sym_int40 = 50,
  anon_sym_int48 = 51,
  anon_sym_int56 = 52,
  anon_sym_int64 = 53,
  anon_sym_int72 = 54,
  anon_sym_int80 = 55,
  anon_sym_int88 = 56,
  anon_sym_int96 = 57,
  anon_sym_int104 = 58,
  anon_sym_int112 = 59,
  anon_sym_int120 = 60,
  anon_sym_int128 = 61,
  anon_sym_int136 = 62,
  anon_sym_int144 = 63,
  anon_sym_int152 = 64,
  anon_sym_int160 = 65,
  anon_sym_int168 = 66,
  anon_sym_int176 = 67,
  anon_sym_int184 = 68,
  anon_sym_int192 = 69,
  anon_sym_int200 = 70,
  anon_sym_int208 = 71,
  anon_sym_int216 = 72,
  anon_sym_int224 = 73,
  anon_sym_int232 = 74,
  anon_sym_int240 = 75,
  anon_sym_int248 = 76,
  anon_sym_int256 = 77,
  anon_sym_uint = 78,
  anon_sym_uint8 = 79,
  anon_sym_uint16 = 80,
  anon_sym_uint24 = 81,
  anon_sym_uint32 = 82,
  anon_sym_uint40 = 83,
  anon_sym_uint48 = 84,
  anon_sym_uint56 = 85,
  anon_sym_uint64 = 86,
  anon_sym_uint72 = 87,
  anon_sym_uint80 = 88,
  anon_sym_uint88 = 89,
  anon_sym_uint96 = 90,
  anon_sym_uint104 = 91,
  anon_sym_uint112 = 92,
  anon_sym_uint120 = 93,
  anon_sym_uint128 = 94,
  anon_sym_uint136 = 95,
  anon_sym_uint144 = 96,
  anon_sym_uint152 = 97,
  anon_sym_uint160 = 98,
  anon_sym_uint168 = 99,
  anon_sym_uint176 = 100,
  anon_sym_uint184 = 101,
  anon_sym_uint192 = 102,
  anon_sym_uint200 = 103,
  anon_sym_uint208 = 104,
  anon_sym_uint216 = 105,
  anon_sym_uint224 = 106,
  anon_sym_uint232 = 107,
  anon_sym_uint240 = 108,
  anon_sym_uint248 = 109,
  anon_sym_uint256 = 110,
  anon_sym_byte = 111,
  anon_sym_bytes = 112,
  anon_sym_bytes1 = 113,
  anon_sym_bytes2 = 114,
  anon_sym_bytes3 = 115,
  anon_sym_bytes4 = 116,
  anon_sym_bytes5 = 117,
  anon_sym_bytes6 = 118,
  anon_sym_bytes7 = 119,
  anon_sym_bytes8 = 120,
  anon_sym_bytes9 = 121,
  anon_sym_bytes10 = 122,
  anon_sym_bytes11 = 123,
  anon_sym_bytes12 = 124,
  anon_sym_bytes13 = 125,
  anon_sym_bytes14 = 126,
  anon_sym_bytes15 = 127,
  anon_sym_bytes16 = 128,
  anon_sym_bytes17 = 129,
  anon_sym_bytes18 = 130,
  anon_sym_bytes19 = 131,
  anon_sym_bytes20 = 132,
  anon_sym_bytes21 = 133,
  anon_sym_bytes22 = 134,
  anon_sym_bytes23 = 135,
  anon_sym_bytes24 = 136,
  anon_sym_bytes25 = 137,
  anon_sym_bytes26 = 138,
  anon_sym_bytes27 = 139,
  anon_sym_bytes28 = 140,
  anon_sym_bytes29 = 141,
  anon_sym_bytes30 = 142,
  anon_sym_bytes31 = 143,
  anon_sym_bytes32 = 144,
  anon_sym_fixed = 145,
  aux_sym__fixed_token1 = 146,
  anon_sym_ufixed = 147,
  aux_sym__ufixed_token1 = 148,
  sym__semicolon = 149,
  sym_number = 150,
  anon_sym_DQUOTE = 151,
  aux_sym_string_token1 = 152,
  anon_sym_SQUOTE = 153,
  aux_sym_string_token2 = 154,
  sym_escape_sequence = 155,
  sym_comment = 156,
  sym_program = 157,
  sym__statement = 158,
  sym_pragma_directive = 159,
  sym__pragma_version_constraint = 160,
  sym__solidity_version_comparison_operator = 161,
  sym_import_directive = 162,
  sym__source_import = 163,
  sym__import_clause = 164,
  sym__from_clause = 165,
  sym__single_import = 166,
  sym__multiple_import = 167,
  sym__import_declaration = 168,
  sym__declaration = 169,
  sym_contract_declaration = 170,
  sym_class_heritage = 171,
  sym__inheritance_specifier = 172,
  sym_contract_body = 173,
  sym_struct_declaration = 174,
  sym_struct_member = 175,
  sym_enum_declaration = 176,
  sym_field_definition = 177,
  sym_field_visibility = 178,
  sym_modifier_definition = 179,
  sym_modifier_body = 180,
  sym_function_definition = 181,
  sym__modifier_invocation = 182,
  sym__call_arguments = 183,
  sym_function_body = 184,
  sym__expression = 185,
  sym_type_name = 186,
  sym__function_type = 187,
  sym__parameter_list = 188,
  sym__return_parameters = 189,
  sym__nameless_parameter = 190,
  sym__parameter = 191,
  sym__storage_location = 192,
  sym__user_defined_type = 193,
  sym__mapping = 194,
  sym__mapping_key = 195,
  sym__primitive_type = 196,
  sym__int = 197,
  sym__uint = 198,
  sym__bytes = 199,
  sym__fixed = 200,
  sym__ufixed = 201,
  sym_string = 202,
  aux_sym_program_repeat1 = 203,
  aux_sym_pragma_directive_repeat1 = 204,
  aux_sym__multiple_import_repeat1 = 205,
  aux_sym_class_heritage_repeat1 = 206,
  aux_sym__inheritance_specifier_repeat1 = 207,
  aux_sym_contract_body_repeat1 = 208,
  aux_sym_struct_declaration_repeat1 = 209,
  aux_sym_enum_declaration_repeat1 = 210,
  aux_sym_function_definition_repeat1 = 211,
  aux_sym__parameter_list_repeat1 = 212,
  aux_sym__return_parameters_repeat1 = 213,
  aux_sym__user_defined_type_repeat1 = 214,
  aux_sym_string_repeat1 = 215,
  aux_sym_string_repeat2 = 216,
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
  [anon_sym_is] = "is",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_struct] = "struct",
  [anon_sym_enum] = "enum",
  [anon_sym_EQ] = "=",
  [anon_sym_public] = "public",
  [anon_sym_internal] = "internal",
  [anon_sym_private] = "private",
  [anon_sym_constant] = "constant",
  [sym__immutable] = "_immutable",
  [anon_sym_override] = "override",
  [anon_sym_modifier] = "modifier",
  [anon_sym_virtual] = "virtual",
  [anon_sym_function] = "function",
  [anon_sym_returns] = "returns",
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
  [sym__statement] = "_statement",
  [sym_pragma_directive] = "pragma_directive",
  [sym__pragma_version_constraint] = "_pragma_version_constraint",
  [sym__solidity_version_comparison_operator] = "_solidity_version_comparison_operator",
  [sym_import_directive] = "import_directive",
  [sym__source_import] = "_source_import",
  [sym__import_clause] = "_import_clause",
  [sym__from_clause] = "_from_clause",
  [sym__single_import] = "_single_import",
  [sym__multiple_import] = "_multiple_import",
  [sym__import_declaration] = "_import_declaration",
  [sym__declaration] = "_declaration",
  [sym_contract_declaration] = "contract_declaration",
  [sym_class_heritage] = "class_heritage",
  [sym__inheritance_specifier] = "_inheritance_specifier",
  [sym_contract_body] = "contract_body",
  [sym_struct_declaration] = "struct_declaration",
  [sym_struct_member] = "struct_member",
  [sym_enum_declaration] = "enum_declaration",
  [sym_field_definition] = "field_definition",
  [sym_field_visibility] = "field_visibility",
  [sym_modifier_definition] = "modifier_definition",
  [sym_modifier_body] = "modifier_body",
  [sym_function_definition] = "function_definition",
  [sym__modifier_invocation] = "_modifier_invocation",
  [sym__call_arguments] = "_call_arguments",
  [sym_function_body] = "function_body",
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
  [aux_sym_pragma_directive_repeat1] = "pragma_directive_repeat1",
  [aux_sym__multiple_import_repeat1] = "_multiple_import_repeat1",
  [aux_sym_class_heritage_repeat1] = "class_heritage_repeat1",
  [aux_sym__inheritance_specifier_repeat1] = "_inheritance_specifier_repeat1",
  [aux_sym_contract_body_repeat1] = "contract_body_repeat1",
  [aux_sym_struct_declaration_repeat1] = "struct_declaration_repeat1",
  [aux_sym_enum_declaration_repeat1] = "enum_declaration_repeat1",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
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
  [anon_sym_is] = anon_sym_is,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_internal] = anon_sym_internal,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_constant] = anon_sym_constant,
  [sym__immutable] = sym__immutable,
  [anon_sym_override] = anon_sym_override,
  [anon_sym_modifier] = anon_sym_modifier,
  [anon_sym_virtual] = anon_sym_virtual,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_returns] = anon_sym_returns,
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
  [sym__statement] = sym__statement,
  [sym_pragma_directive] = sym_pragma_directive,
  [sym__pragma_version_constraint] = sym__pragma_version_constraint,
  [sym__solidity_version_comparison_operator] = sym__solidity_version_comparison_operator,
  [sym_import_directive] = sym_import_directive,
  [sym__source_import] = sym__source_import,
  [sym__import_clause] = sym__import_clause,
  [sym__from_clause] = sym__from_clause,
  [sym__single_import] = sym__single_import,
  [sym__multiple_import] = sym__multiple_import,
  [sym__import_declaration] = sym__import_declaration,
  [sym__declaration] = sym__declaration,
  [sym_contract_declaration] = sym_contract_declaration,
  [sym_class_heritage] = sym_class_heritage,
  [sym__inheritance_specifier] = sym__inheritance_specifier,
  [sym_contract_body] = sym_contract_body,
  [sym_struct_declaration] = sym_struct_declaration,
  [sym_struct_member] = sym_struct_member,
  [sym_enum_declaration] = sym_enum_declaration,
  [sym_field_definition] = sym_field_definition,
  [sym_field_visibility] = sym_field_visibility,
  [sym_modifier_definition] = sym_modifier_definition,
  [sym_modifier_body] = sym_modifier_body,
  [sym_function_definition] = sym_function_definition,
  [sym__modifier_invocation] = sym__modifier_invocation,
  [sym__call_arguments] = sym__call_arguments,
  [sym_function_body] = sym_function_body,
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
  [aux_sym_pragma_directive_repeat1] = aux_sym_pragma_directive_repeat1,
  [aux_sym__multiple_import_repeat1] = aux_sym__multiple_import_repeat1,
  [aux_sym_class_heritage_repeat1] = aux_sym_class_heritage_repeat1,
  [aux_sym__inheritance_specifier_repeat1] = aux_sym__inheritance_specifier_repeat1,
  [aux_sym_contract_body_repeat1] = aux_sym_contract_body_repeat1,
  [aux_sym_struct_declaration_repeat1] = aux_sym_struct_declaration_repeat1,
  [aux_sym_enum_declaration_repeat1] = aux_sym_enum_declaration_repeat1,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
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
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
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
  [sym__immutable] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_override] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_modifier] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_virtual] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_returns] = {
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
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_pragma_directive] = {
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
  [sym_import_directive] = {
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
  [sym__declaration] = {
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
  [sym_struct_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_member] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_declaration] = {
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
  [sym_modifier_body] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__modifier_invocation] = {
    .visible = false,
    .named = true,
  },
  [sym__call_arguments] = {
    .visible = false,
    .named = true,
  },
  [sym_function_body] = {
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
  [aux_sym_pragma_directive_repeat1] = {
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
  [aux_sym_struct_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_definition_repeat1] = {
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

static const TSFieldMapSlice ts_field_map_slices[11] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 1},
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
  [12] =
    {field_body, 5},
  [13] =
    {field_body, 6},
};

static TSSymbol ts_alias_sequences[11][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'm') ADVANCE(7);
      if (lookahead == 'o') ADVANCE(8);
      if (lookahead == 'p') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 'u') ADVANCE(12);
      if (lookahead == 'v') ADVANCE(13);
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
      if (lookahead == 'b') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == 'y') ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(25);
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == 'v') ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(34);
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 21:
      if (lookahead == 'x') ADVANCE(46);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 24:
      if (lookahead == 'm') ADVANCE(49);
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 30:
      if (lookahead == 'y') ADVANCE(55);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(58);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(83);
      END_STATE();
    case 57:
      if (lookahead == 'v') ADVANCE(84);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 62:
      if (lookahead == 'x') ADVANCE(90);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 80:
      if (lookahead == 'f') ADVANCE(104);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 82:
      if (lookahead == 'b') ADVANCE(106);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(107);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 92:
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_fixed);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(133);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 114:
      if (lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 116:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 119:
      if (lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 121:
      if (lookahead == 'b') ADVANCE(142);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 124:
      if (lookahead == 'g') ADVANCE(144);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 126:
      if (lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_pragma);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_ufixed);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_address);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_mapping);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_payable);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 150:
      if (lookahead == 'y') ADVANCE(160);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_virtual);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_constant);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_contract);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_modifier);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_solidity);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__immutable);
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
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 7},
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
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 3},
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
  [110] = {.lex_state = 11},
  [111] = {.lex_state = 0},
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
  [131] = {.lex_state = 11},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
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
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 7},
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
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_internal] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_constant] = ACTIONS(1),
    [sym__immutable] = ACTIONS(1),
    [anon_sym_override] = ACTIONS(1),
    [anon_sym_modifier] = ACTIONS(1),
    [anon_sym_virtual] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_returns] = ACTIONS(1),
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
    [sym_program] = STATE(182),
    [sym__statement] = STATE(35),
    [sym_pragma_directive] = STATE(35),
    [sym_import_directive] = STATE(35),
    [sym__declaration] = STATE(35),
    [sym_contract_declaration] = STATE(35),
    [aux_sym_program_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_pragma] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_abstract] = ACTIONS(11),
    [anon_sym_contract] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_struct_declaration] = STATE(4),
    [sym_enum_declaration] = STATE(4),
    [sym_field_definition] = STATE(4),
    [sym_modifier_definition] = STATE(4),
    [sym_function_definition] = STATE(4),
    [sym_type_name] = STATE(52),
    [sym__function_type] = STATE(47),
    [sym__user_defined_type] = STATE(47),
    [sym__mapping] = STATE(47),
    [sym__primitive_type] = STATE(47),
    [sym__int] = STATE(47),
    [sym__uint] = STATE(47),
    [sym__bytes] = STATE(47),
    [sym__fixed] = STATE(47),
    [sym__ufixed] = STATE(47),
    [aux_sym_contract_body_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(17),
    [anon_sym_struct] = ACTIONS(19),
    [anon_sym_enum] = ACTIONS(21),
    [anon_sym_modifier] = ACTIONS(23),
    [anon_sym_function] = ACTIONS(25),
    [anon_sym_mapping] = ACTIONS(27),
    [anon_sym_address] = ACTIONS(29),
    [anon_sym_bool] = ACTIONS(31),
    [anon_sym_string] = ACTIONS(31),
    [anon_sym_var] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(31),
    [anon_sym_int8] = ACTIONS(31),
    [anon_sym_int16] = ACTIONS(31),
    [anon_sym_int24] = ACTIONS(31),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int40] = ACTIONS(33),
    [anon_sym_int48] = ACTIONS(33),
    [anon_sym_int56] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int72] = ACTIONS(33),
    [anon_sym_int80] = ACTIONS(33),
    [anon_sym_int88] = ACTIONS(33),
    [anon_sym_int96] = ACTIONS(33),
    [anon_sym_int104] = ACTIONS(33),
    [anon_sym_int112] = ACTIONS(33),
    [anon_sym_int120] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [anon_sym_int136] = ACTIONS(33),
    [anon_sym_int144] = ACTIONS(33),
    [anon_sym_int152] = ACTIONS(33),
    [anon_sym_int160] = ACTIONS(33),
    [anon_sym_int168] = ACTIONS(33),
    [anon_sym_int176] = ACTIONS(33),
    [anon_sym_int184] = ACTIONS(33),
    [anon_sym_int192] = ACTIONS(33),
    [anon_sym_int200] = ACTIONS(33),
    [anon_sym_int208] = ACTIONS(33),
    [anon_sym_int216] = ACTIONS(33),
    [anon_sym_int224] = ACTIONS(33),
    [anon_sym_int232] = ACTIONS(33),
    [anon_sym_int240] = ACTIONS(33),
    [anon_sym_int248] = ACTIONS(33),
    [anon_sym_int256] = ACTIONS(33),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint24] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(33),
    [anon_sym_uint40] = ACTIONS(33),
    [anon_sym_uint48] = ACTIONS(33),
    [anon_sym_uint56] = ACTIONS(33),
    [anon_sym_uint64] = ACTIONS(33),
    [anon_sym_uint72] = ACTIONS(33),
    [anon_sym_uint80] = ACTIONS(33),
    [anon_sym_uint88] = ACTIONS(33),
    [anon_sym_uint96] = ACTIONS(33),
    [anon_sym_uint104] = ACTIONS(33),
    [anon_sym_uint112] = ACTIONS(33),
    [anon_sym_uint120] = ACTIONS(33),
    [anon_sym_uint128] = ACTIONS(33),
    [anon_sym_uint136] = ACTIONS(33),
    [anon_sym_uint144] = ACTIONS(33),
    [anon_sym_uint152] = ACTIONS(33),
    [anon_sym_uint160] = ACTIONS(33),
    [anon_sym_uint168] = ACTIONS(33),
    [anon_sym_uint176] = ACTIONS(33),
    [anon_sym_uint184] = ACTIONS(33),
    [anon_sym_uint192] = ACTIONS(33),
    [anon_sym_uint200] = ACTIONS(33),
    [anon_sym_uint208] = ACTIONS(33),
    [anon_sym_uint216] = ACTIONS(33),
    [anon_sym_uint224] = ACTIONS(33),
    [anon_sym_uint232] = ACTIONS(33),
    [anon_sym_uint240] = ACTIONS(33),
    [anon_sym_uint248] = ACTIONS(33),
    [anon_sym_uint256] = ACTIONS(33),
    [anon_sym_byte] = ACTIONS(31),
    [anon_sym_bytes] = ACTIONS(31),
    [anon_sym_bytes1] = ACTIONS(31),
    [anon_sym_bytes2] = ACTIONS(31),
    [anon_sym_bytes3] = ACTIONS(31),
    [anon_sym_bytes4] = ACTIONS(33),
    [anon_sym_bytes5] = ACTIONS(33),
    [anon_sym_bytes6] = ACTIONS(33),
    [anon_sym_bytes7] = ACTIONS(33),
    [anon_sym_bytes8] = ACTIONS(33),
    [anon_sym_bytes9] = ACTIONS(33),
    [anon_sym_bytes10] = ACTIONS(33),
    [anon_sym_bytes11] = ACTIONS(33),
    [anon_sym_bytes12] = ACTIONS(33),
    [anon_sym_bytes13] = ACTIONS(33),
    [anon_sym_bytes14] = ACTIONS(33),
    [anon_sym_bytes15] = ACTIONS(33),
    [anon_sym_bytes16] = ACTIONS(33),
    [anon_sym_bytes17] = ACTIONS(33),
    [anon_sym_bytes18] = ACTIONS(33),
    [anon_sym_bytes19] = ACTIONS(33),
    [anon_sym_bytes20] = ACTIONS(33),
    [anon_sym_bytes21] = ACTIONS(33),
    [anon_sym_bytes22] = ACTIONS(33),
    [anon_sym_bytes23] = ACTIONS(33),
    [anon_sym_bytes24] = ACTIONS(33),
    [anon_sym_bytes25] = ACTIONS(33),
    [anon_sym_bytes26] = ACTIONS(33),
    [anon_sym_bytes27] = ACTIONS(33),
    [anon_sym_bytes28] = ACTIONS(33),
    [anon_sym_bytes29] = ACTIONS(33),
    [anon_sym_bytes30] = ACTIONS(33),
    [anon_sym_bytes31] = ACTIONS(33),
    [anon_sym_bytes32] = ACTIONS(33),
    [anon_sym_fixed] = ACTIONS(31),
    [aux_sym__fixed_token1] = ACTIONS(33),
    [anon_sym_ufixed] = ACTIONS(31),
    [aux_sym__ufixed_token1] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_struct_declaration] = STATE(3),
    [sym_enum_declaration] = STATE(3),
    [sym_field_definition] = STATE(3),
    [sym_modifier_definition] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_type_name] = STATE(52),
    [sym__function_type] = STATE(47),
    [sym__user_defined_type] = STATE(47),
    [sym__mapping] = STATE(47),
    [sym__primitive_type] = STATE(47),
    [sym__int] = STATE(47),
    [sym__uint] = STATE(47),
    [sym__bytes] = STATE(47),
    [sym__fixed] = STATE(47),
    [sym__ufixed] = STATE(47),
    [aux_sym_contract_body_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(38),
    [anon_sym_struct] = ACTIONS(40),
    [anon_sym_enum] = ACTIONS(43),
    [anon_sym_modifier] = ACTIONS(46),
    [anon_sym_function] = ACTIONS(49),
    [anon_sym_mapping] = ACTIONS(52),
    [anon_sym_address] = ACTIONS(55),
    [anon_sym_bool] = ACTIONS(58),
    [anon_sym_string] = ACTIONS(58),
    [anon_sym_var] = ACTIONS(58),
    [anon_sym_int] = ACTIONS(58),
    [anon_sym_int8] = ACTIONS(58),
    [anon_sym_int16] = ACTIONS(58),
    [anon_sym_int24] = ACTIONS(58),
    [anon_sym_int32] = ACTIONS(61),
    [anon_sym_int40] = ACTIONS(61),
    [anon_sym_int48] = ACTIONS(61),
    [anon_sym_int56] = ACTIONS(61),
    [anon_sym_int64] = ACTIONS(61),
    [anon_sym_int72] = ACTIONS(61),
    [anon_sym_int80] = ACTIONS(61),
    [anon_sym_int88] = ACTIONS(61),
    [anon_sym_int96] = ACTIONS(61),
    [anon_sym_int104] = ACTIONS(61),
    [anon_sym_int112] = ACTIONS(61),
    [anon_sym_int120] = ACTIONS(61),
    [anon_sym_int128] = ACTIONS(61),
    [anon_sym_int136] = ACTIONS(61),
    [anon_sym_int144] = ACTIONS(61),
    [anon_sym_int152] = ACTIONS(61),
    [anon_sym_int160] = ACTIONS(61),
    [anon_sym_int168] = ACTIONS(61),
    [anon_sym_int176] = ACTIONS(61),
    [anon_sym_int184] = ACTIONS(61),
    [anon_sym_int192] = ACTIONS(61),
    [anon_sym_int200] = ACTIONS(61),
    [anon_sym_int208] = ACTIONS(61),
    [anon_sym_int216] = ACTIONS(61),
    [anon_sym_int224] = ACTIONS(61),
    [anon_sym_int232] = ACTIONS(61),
    [anon_sym_int240] = ACTIONS(61),
    [anon_sym_int248] = ACTIONS(61),
    [anon_sym_int256] = ACTIONS(61),
    [anon_sym_uint] = ACTIONS(58),
    [anon_sym_uint8] = ACTIONS(58),
    [anon_sym_uint16] = ACTIONS(58),
    [anon_sym_uint24] = ACTIONS(58),
    [anon_sym_uint32] = ACTIONS(61),
    [anon_sym_uint40] = ACTIONS(61),
    [anon_sym_uint48] = ACTIONS(61),
    [anon_sym_uint56] = ACTIONS(61),
    [anon_sym_uint64] = ACTIONS(61),
    [anon_sym_uint72] = ACTIONS(61),
    [anon_sym_uint80] = ACTIONS(61),
    [anon_sym_uint88] = ACTIONS(61),
    [anon_sym_uint96] = ACTIONS(61),
    [anon_sym_uint104] = ACTIONS(61),
    [anon_sym_uint112] = ACTIONS(61),
    [anon_sym_uint120] = ACTIONS(61),
    [anon_sym_uint128] = ACTIONS(61),
    [anon_sym_uint136] = ACTIONS(61),
    [anon_sym_uint144] = ACTIONS(61),
    [anon_sym_uint152] = ACTIONS(61),
    [anon_sym_uint160] = ACTIONS(61),
    [anon_sym_uint168] = ACTIONS(61),
    [anon_sym_uint176] = ACTIONS(61),
    [anon_sym_uint184] = ACTIONS(61),
    [anon_sym_uint192] = ACTIONS(61),
    [anon_sym_uint200] = ACTIONS(61),
    [anon_sym_uint208] = ACTIONS(61),
    [anon_sym_uint216] = ACTIONS(61),
    [anon_sym_uint224] = ACTIONS(61),
    [anon_sym_uint232] = ACTIONS(61),
    [anon_sym_uint240] = ACTIONS(61),
    [anon_sym_uint248] = ACTIONS(61),
    [anon_sym_uint256] = ACTIONS(61),
    [anon_sym_byte] = ACTIONS(58),
    [anon_sym_bytes] = ACTIONS(58),
    [anon_sym_bytes1] = ACTIONS(58),
    [anon_sym_bytes2] = ACTIONS(58),
    [anon_sym_bytes3] = ACTIONS(58),
    [anon_sym_bytes4] = ACTIONS(61),
    [anon_sym_bytes5] = ACTIONS(61),
    [anon_sym_bytes6] = ACTIONS(61),
    [anon_sym_bytes7] = ACTIONS(61),
    [anon_sym_bytes8] = ACTIONS(61),
    [anon_sym_bytes9] = ACTIONS(61),
    [anon_sym_bytes10] = ACTIONS(61),
    [anon_sym_bytes11] = ACTIONS(61),
    [anon_sym_bytes12] = ACTIONS(61),
    [anon_sym_bytes13] = ACTIONS(61),
    [anon_sym_bytes14] = ACTIONS(61),
    [anon_sym_bytes15] = ACTIONS(61),
    [anon_sym_bytes16] = ACTIONS(61),
    [anon_sym_bytes17] = ACTIONS(61),
    [anon_sym_bytes18] = ACTIONS(61),
    [anon_sym_bytes19] = ACTIONS(61),
    [anon_sym_bytes20] = ACTIONS(61),
    [anon_sym_bytes21] = ACTIONS(61),
    [anon_sym_bytes22] = ACTIONS(61),
    [anon_sym_bytes23] = ACTIONS(61),
    [anon_sym_bytes24] = ACTIONS(61),
    [anon_sym_bytes25] = ACTIONS(61),
    [anon_sym_bytes26] = ACTIONS(61),
    [anon_sym_bytes27] = ACTIONS(61),
    [anon_sym_bytes28] = ACTIONS(61),
    [anon_sym_bytes29] = ACTIONS(61),
    [anon_sym_bytes30] = ACTIONS(61),
    [anon_sym_bytes31] = ACTIONS(61),
    [anon_sym_bytes32] = ACTIONS(61),
    [anon_sym_fixed] = ACTIONS(58),
    [aux_sym__fixed_token1] = ACTIONS(61),
    [anon_sym_ufixed] = ACTIONS(58),
    [aux_sym__ufixed_token1] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_struct_declaration] = STATE(3),
    [sym_enum_declaration] = STATE(3),
    [sym_field_definition] = STATE(3),
    [sym_modifier_definition] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_type_name] = STATE(52),
    [sym__function_type] = STATE(47),
    [sym__user_defined_type] = STATE(47),
    [sym__mapping] = STATE(47),
    [sym__primitive_type] = STATE(47),
    [sym__int] = STATE(47),
    [sym__uint] = STATE(47),
    [sym__bytes] = STATE(47),
    [sym__fixed] = STATE(47),
    [sym__ufixed] = STATE(47),
    [aux_sym_contract_body_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(64),
    [anon_sym_struct] = ACTIONS(19),
    [anon_sym_enum] = ACTIONS(21),
    [anon_sym_modifier] = ACTIONS(23),
    [anon_sym_function] = ACTIONS(25),
    [anon_sym_mapping] = ACTIONS(27),
    [anon_sym_address] = ACTIONS(29),
    [anon_sym_bool] = ACTIONS(31),
    [anon_sym_string] = ACTIONS(31),
    [anon_sym_var] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(31),
    [anon_sym_int8] = ACTIONS(31),
    [anon_sym_int16] = ACTIONS(31),
    [anon_sym_int24] = ACTIONS(31),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int40] = ACTIONS(33),
    [anon_sym_int48] = ACTIONS(33),
    [anon_sym_int56] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int72] = ACTIONS(33),
    [anon_sym_int80] = ACTIONS(33),
    [anon_sym_int88] = ACTIONS(33),
    [anon_sym_int96] = ACTIONS(33),
    [anon_sym_int104] = ACTIONS(33),
    [anon_sym_int112] = ACTIONS(33),
    [anon_sym_int120] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [anon_sym_int136] = ACTIONS(33),
    [anon_sym_int144] = ACTIONS(33),
    [anon_sym_int152] = ACTIONS(33),
    [anon_sym_int160] = ACTIONS(33),
    [anon_sym_int168] = ACTIONS(33),
    [anon_sym_int176] = ACTIONS(33),
    [anon_sym_int184] = ACTIONS(33),
    [anon_sym_int192] = ACTIONS(33),
    [anon_sym_int200] = ACTIONS(33),
    [anon_sym_int208] = ACTIONS(33),
    [anon_sym_int216] = ACTIONS(33),
    [anon_sym_int224] = ACTIONS(33),
    [anon_sym_int232] = ACTIONS(33),
    [anon_sym_int240] = ACTIONS(33),
    [anon_sym_int248] = ACTIONS(33),
    [anon_sym_int256] = ACTIONS(33),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint24] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(33),
    [anon_sym_uint40] = ACTIONS(33),
    [anon_sym_uint48] = ACTIONS(33),
    [anon_sym_uint56] = ACTIONS(33),
    [anon_sym_uint64] = ACTIONS(33),
    [anon_sym_uint72] = ACTIONS(33),
    [anon_sym_uint80] = ACTIONS(33),
    [anon_sym_uint88] = ACTIONS(33),
    [anon_sym_uint96] = ACTIONS(33),
    [anon_sym_uint104] = ACTIONS(33),
    [anon_sym_uint112] = ACTIONS(33),
    [anon_sym_uint120] = ACTIONS(33),
    [anon_sym_uint128] = ACTIONS(33),
    [anon_sym_uint136] = ACTIONS(33),
    [anon_sym_uint144] = ACTIONS(33),
    [anon_sym_uint152] = ACTIONS(33),
    [anon_sym_uint160] = ACTIONS(33),
    [anon_sym_uint168] = ACTIONS(33),
    [anon_sym_uint176] = ACTIONS(33),
    [anon_sym_uint184] = ACTIONS(33),
    [anon_sym_uint192] = ACTIONS(33),
    [anon_sym_uint200] = ACTIONS(33),
    [anon_sym_uint208] = ACTIONS(33),
    [anon_sym_uint216] = ACTIONS(33),
    [anon_sym_uint224] = ACTIONS(33),
    [anon_sym_uint232] = ACTIONS(33),
    [anon_sym_uint240] = ACTIONS(33),
    [anon_sym_uint248] = ACTIONS(33),
    [anon_sym_uint256] = ACTIONS(33),
    [anon_sym_byte] = ACTIONS(31),
    [anon_sym_bytes] = ACTIONS(31),
    [anon_sym_bytes1] = ACTIONS(31),
    [anon_sym_bytes2] = ACTIONS(31),
    [anon_sym_bytes3] = ACTIONS(31),
    [anon_sym_bytes4] = ACTIONS(33),
    [anon_sym_bytes5] = ACTIONS(33),
    [anon_sym_bytes6] = ACTIONS(33),
    [anon_sym_bytes7] = ACTIONS(33),
    [anon_sym_bytes8] = ACTIONS(33),
    [anon_sym_bytes9] = ACTIONS(33),
    [anon_sym_bytes10] = ACTIONS(33),
    [anon_sym_bytes11] = ACTIONS(33),
    [anon_sym_bytes12] = ACTIONS(33),
    [anon_sym_bytes13] = ACTIONS(33),
    [anon_sym_bytes14] = ACTIONS(33),
    [anon_sym_bytes15] = ACTIONS(33),
    [anon_sym_bytes16] = ACTIONS(33),
    [anon_sym_bytes17] = ACTIONS(33),
    [anon_sym_bytes18] = ACTIONS(33),
    [anon_sym_bytes19] = ACTIONS(33),
    [anon_sym_bytes20] = ACTIONS(33),
    [anon_sym_bytes21] = ACTIONS(33),
    [anon_sym_bytes22] = ACTIONS(33),
    [anon_sym_bytes23] = ACTIONS(33),
    [anon_sym_bytes24] = ACTIONS(33),
    [anon_sym_bytes25] = ACTIONS(33),
    [anon_sym_bytes26] = ACTIONS(33),
    [anon_sym_bytes27] = ACTIONS(33),
    [anon_sym_bytes28] = ACTIONS(33),
    [anon_sym_bytes29] = ACTIONS(33),
    [anon_sym_bytes30] = ACTIONS(33),
    [anon_sym_bytes31] = ACTIONS(33),
    [anon_sym_bytes32] = ACTIONS(33),
    [anon_sym_fixed] = ACTIONS(31),
    [aux_sym__fixed_token1] = ACTIONS(33),
    [anon_sym_ufixed] = ACTIONS(31),
    [aux_sym__ufixed_token1] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_struct_member] = STATE(6),
    [sym_type_name] = STATE(115),
    [sym__function_type] = STATE(47),
    [sym__user_defined_type] = STATE(47),
    [sym__mapping] = STATE(47),
    [sym__primitive_type] = STATE(47),
    [sym__int] = STATE(47),
    [sym__uint] = STATE(47),
    [sym__bytes] = STATE(47),
    [sym__fixed] = STATE(47),
    [sym__ufixed] = STATE(47),
    [aux_sym_struct_declaration_repeat1] = STATE(6),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(66),
    [anon_sym_function] = ACTIONS(68),
    [anon_sym_mapping] = ACTIONS(27),
    [anon_sym_address] = ACTIONS(29),
    [anon_sym_bool] = ACTIONS(31),
    [anon_sym_string] = ACTIONS(31),
    [anon_sym_var] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(31),
    [anon_sym_int8] = ACTIONS(31),
    [anon_sym_int16] = ACTIONS(31),
    [anon_sym_int24] = ACTIONS(31),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int40] = ACTIONS(33),
    [anon_sym_int48] = ACTIONS(33),
    [anon_sym_int56] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int72] = ACTIONS(33),
    [anon_sym_int80] = ACTIONS(33),
    [anon_sym_int88] = ACTIONS(33),
    [anon_sym_int96] = ACTIONS(33),
    [anon_sym_int104] = ACTIONS(33),
    [anon_sym_int112] = ACTIONS(33),
    [anon_sym_int120] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [anon_sym_int136] = ACTIONS(33),
    [anon_sym_int144] = ACTIONS(33),
    [anon_sym_int152] = ACTIONS(33),
    [anon_sym_int160] = ACTIONS(33),
    [anon_sym_int168] = ACTIONS(33),
    [anon_sym_int176] = ACTIONS(33),
    [anon_sym_int184] = ACTIONS(33),
    [anon_sym_int192] = ACTIONS(33),
    [anon_sym_int200] = ACTIONS(33),
    [anon_sym_int208] = ACTIONS(33),
    [anon_sym_int216] = ACTIONS(33),
    [anon_sym_int224] = ACTIONS(33),
    [anon_sym_int232] = ACTIONS(33),
    [anon_sym_int240] = ACTIONS(33),
    [anon_sym_int248] = ACTIONS(33),
    [anon_sym_int256] = ACTIONS(33),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint24] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(33),
    [anon_sym_uint40] = ACTIONS(33),
    [anon_sym_uint48] = ACTIONS(33),
    [anon_sym_uint56] = ACTIONS(33),
    [anon_sym_uint64] = ACTIONS(33),
    [anon_sym_uint72] = ACTIONS(33),
    [anon_sym_uint80] = ACTIONS(33),
    [anon_sym_uint88] = ACTIONS(33),
    [anon_sym_uint96] = ACTIONS(33),
    [anon_sym_uint104] = ACTIONS(33),
    [anon_sym_uint112] = ACTIONS(33),
    [anon_sym_uint120] = ACTIONS(33),
    [anon_sym_uint128] = ACTIONS(33),
    [anon_sym_uint136] = ACTIONS(33),
    [anon_sym_uint144] = ACTIONS(33),
    [anon_sym_uint152] = ACTIONS(33),
    [anon_sym_uint160] = ACTIONS(33),
    [anon_sym_uint168] = ACTIONS(33),
    [anon_sym_uint176] = ACTIONS(33),
    [anon_sym_uint184] = ACTIONS(33),
    [anon_sym_uint192] = ACTIONS(33),
    [anon_sym_uint200] = ACTIONS(33),
    [anon_sym_uint208] = ACTIONS(33),
    [anon_sym_uint216] = ACTIONS(33),
    [anon_sym_uint224] = ACTIONS(33),
    [anon_sym_uint232] = ACTIONS(33),
    [anon_sym_uint240] = ACTIONS(33),
    [anon_sym_uint248] = ACTIONS(33),
    [anon_sym_uint256] = ACTIONS(33),
    [anon_sym_byte] = ACTIONS(31),
    [anon_sym_bytes] = ACTIONS(31),
    [anon_sym_bytes1] = ACTIONS(31),
    [anon_sym_bytes2] = ACTIONS(31),
    [anon_sym_bytes3] = ACTIONS(31),
    [anon_sym_bytes4] = ACTIONS(33),
    [anon_sym_bytes5] = ACTIONS(33),
    [anon_sym_bytes6] = ACTIONS(33),
    [anon_sym_bytes7] = ACTIONS(33),
    [anon_sym_bytes8] = ACTIONS(33),
    [anon_sym_bytes9] = ACTIONS(33),
    [anon_sym_bytes10] = ACTIONS(33),
    [anon_sym_bytes11] = ACTIONS(33),
    [anon_sym_bytes12] = ACTIONS(33),
    [anon_sym_bytes13] = ACTIONS(33),
    [anon_sym_bytes14] = ACTIONS(33),
    [anon_sym_bytes15] = ACTIONS(33),
    [anon_sym_bytes16] = ACTIONS(33),
    [anon_sym_bytes17] = ACTIONS(33),
    [anon_sym_bytes18] = ACTIONS(33),
    [anon_sym_bytes19] = ACTIONS(33),
    [anon_sym_bytes20] = ACTIONS(33),
    [anon_sym_bytes21] = ACTIONS(33),
    [anon_sym_bytes22] = ACTIONS(33),
    [anon_sym_bytes23] = ACTIONS(33),
    [anon_sym_bytes24] = ACTIONS(33),
    [anon_sym_bytes25] = ACTIONS(33),
    [anon_sym_bytes26] = ACTIONS(33),
    [anon_sym_bytes27] = ACTIONS(33),
    [anon_sym_bytes28] = ACTIONS(33),
    [anon_sym_bytes29] = ACTIONS(33),
    [anon_sym_bytes30] = ACTIONS(33),
    [anon_sym_bytes31] = ACTIONS(33),
    [anon_sym_bytes32] = ACTIONS(33),
    [anon_sym_fixed] = ACTIONS(31),
    [aux_sym__fixed_token1] = ACTIONS(33),
    [anon_sym_ufixed] = ACTIONS(31),
    [aux_sym__ufixed_token1] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_struct_member] = STATE(6),
    [sym_type_name] = STATE(115),
    [sym__function_type] = STATE(47),
    [sym__user_defined_type] = STATE(47),
    [sym__mapping] = STATE(47),
    [sym__primitive_type] = STATE(47),
    [sym__int] = STATE(47),
    [sym__uint] = STATE(47),
    [sym__bytes] = STATE(47),
    [sym__fixed] = STATE(47),
    [sym__ufixed] = STATE(47),
    [aux_sym_struct_declaration_repeat1] = STATE(6),
    [sym_identifier] = ACTIONS(70),
    [anon_sym_RPAREN] = ACTIONS(73),
    [anon_sym_function] = ACTIONS(75),
    [anon_sym_mapping] = ACTIONS(78),
    [anon_sym_address] = ACTIONS(81),
    [anon_sym_bool] = ACTIONS(84),
    [anon_sym_string] = ACTIONS(84),
    [anon_sym_var] = ACTIONS(84),
    [anon_sym_int] = ACTIONS(84),
    [anon_sym_int8] = ACTIONS(84),
    [anon_sym_int16] = ACTIONS(84),
    [anon_sym_int24] = ACTIONS(84),
    [anon_sym_int32] = ACTIONS(87),
    [anon_sym_int40] = ACTIONS(87),
    [anon_sym_int48] = ACTIONS(87),
    [anon_sym_int56] = ACTIONS(87),
    [anon_sym_int64] = ACTIONS(87),
    [anon_sym_int72] = ACTIONS(87),
    [anon_sym_int80] = ACTIONS(87),
    [anon_sym_int88] = ACTIONS(87),
    [anon_sym_int96] = ACTIONS(87),
    [anon_sym_int104] = ACTIONS(87),
    [anon_sym_int112] = ACTIONS(87),
    [anon_sym_int120] = ACTIONS(87),
    [anon_sym_int128] = ACTIONS(87),
    [anon_sym_int136] = ACTIONS(87),
    [anon_sym_int144] = ACTIONS(87),
    [anon_sym_int152] = ACTIONS(87),
    [anon_sym_int160] = ACTIONS(87),
    [anon_sym_int168] = ACTIONS(87),
    [anon_sym_int176] = ACTIONS(87),
    [anon_sym_int184] = ACTIONS(87),
    [anon_sym_int192] = ACTIONS(87),
    [anon_sym_int200] = ACTIONS(87),
    [anon_sym_int208] = ACTIONS(87),
    [anon_sym_int216] = ACTIONS(87),
    [anon_sym_int224] = ACTIONS(87),
    [anon_sym_int232] = ACTIONS(87),
    [anon_sym_int240] = ACTIONS(87),
    [anon_sym_int248] = ACTIONS(87),
    [anon_sym_int256] = ACTIONS(87),
    [anon_sym_uint] = ACTIONS(84),
    [anon_sym_uint8] = ACTIONS(84),
    [anon_sym_uint16] = ACTIONS(84),
    [anon_sym_uint24] = ACTIONS(84),
    [anon_sym_uint32] = ACTIONS(87),
    [anon_sym_uint40] = ACTIONS(87),
    [anon_sym_uint48] = ACTIONS(87),
    [anon_sym_uint56] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(87),
    [anon_sym_uint72] = ACTIONS(87),
    [anon_sym_uint80] = ACTIONS(87),
    [anon_sym_uint88] = ACTIONS(87),
    [anon_sym_uint96] = ACTIONS(87),
    [anon_sym_uint104] = ACTIONS(87),
    [anon_sym_uint112] = ACTIONS(87),
    [anon_sym_uint120] = ACTIONS(87),
    [anon_sym_uint128] = ACTIONS(87),
    [anon_sym_uint136] = ACTIONS(87),
    [anon_sym_uint144] = ACTIONS(87),
    [anon_sym_uint152] = ACTIONS(87),
    [anon_sym_uint160] = ACTIONS(87),
    [anon_sym_uint168] = ACTIONS(87),
    [anon_sym_uint176] = ACTIONS(87),
    [anon_sym_uint184] = ACTIONS(87),
    [anon_sym_uint192] = ACTIONS(87),
    [anon_sym_uint200] = ACTIONS(87),
    [anon_sym_uint208] = ACTIONS(87),
    [anon_sym_uint216] = ACTIONS(87),
    [anon_sym_uint224] = ACTIONS(87),
    [anon_sym_uint232] = ACTIONS(87),
    [anon_sym_uint240] = ACTIONS(87),
    [anon_sym_uint248] = ACTIONS(87),
    [anon_sym_uint256] = ACTIONS(87),
    [anon_sym_byte] = ACTIONS(84),
    [anon_sym_bytes] = ACTIONS(84),
    [anon_sym_bytes1] = ACTIONS(84),
    [anon_sym_bytes2] = ACTIONS(84),
    [anon_sym_bytes3] = ACTIONS(84),
    [anon_sym_bytes4] = ACTIONS(87),
    [anon_sym_bytes5] = ACTIONS(87),
    [anon_sym_bytes6] = ACTIONS(87),
    [anon_sym_bytes7] = ACTIONS(87),
    [anon_sym_bytes8] = ACTIONS(87),
    [anon_sym_bytes9] = ACTIONS(87),
    [anon_sym_bytes10] = ACTIONS(87),
    [anon_sym_bytes11] = ACTIONS(87),
    [anon_sym_bytes12] = ACTIONS(87),
    [anon_sym_bytes13] = ACTIONS(87),
    [anon_sym_bytes14] = ACTIONS(87),
    [anon_sym_bytes15] = ACTIONS(87),
    [anon_sym_bytes16] = ACTIONS(87),
    [anon_sym_bytes17] = ACTIONS(87),
    [anon_sym_bytes18] = ACTIONS(87),
    [anon_sym_bytes19] = ACTIONS(87),
    [anon_sym_bytes20] = ACTIONS(87),
    [anon_sym_bytes21] = ACTIONS(87),
    [anon_sym_bytes22] = ACTIONS(87),
    [anon_sym_bytes23] = ACTIONS(87),
    [anon_sym_bytes24] = ACTIONS(87),
    [anon_sym_bytes25] = ACTIONS(87),
    [anon_sym_bytes26] = ACTIONS(87),
    [anon_sym_bytes27] = ACTIONS(87),
    [anon_sym_bytes28] = ACTIONS(87),
    [anon_sym_bytes29] = ACTIONS(87),
    [anon_sym_bytes30] = ACTIONS(87),
    [anon_sym_bytes31] = ACTIONS(87),
    [anon_sym_bytes32] = ACTIONS(87),
    [anon_sym_fixed] = ACTIONS(84),
    [aux_sym__fixed_token1] = ACTIONS(87),
    [anon_sym_ufixed] = ACTIONS(84),
    [aux_sym__ufixed_token1] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_struct_member] = STATE(5),
    [sym_type_name] = STATE(115),
    [sym__function_type] = STATE(47),
    [sym__user_defined_type] = STATE(47),
    [sym__mapping] = STATE(47),
    [sym__primitive_type] = STATE(47),
    [sym__int] = STATE(47),
    [sym__uint] = STATE(47),
    [sym__bytes] = STATE(47),
    [sym__fixed] = STATE(47),
    [sym__ufixed] = STATE(47),
    [aux_sym_struct_declaration_repeat1] = STATE(5),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(68),
    [anon_sym_mapping] = ACTIONS(27),
    [anon_sym_address] = ACTIONS(29),
    [anon_sym_bool] = ACTIONS(31),
    [anon_sym_string] = ACTIONS(31),
    [anon_sym_var] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(31),
    [anon_sym_int8] = ACTIONS(31),
    [anon_sym_int16] = ACTIONS(31),
    [anon_sym_int24] = ACTIONS(31),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int40] = ACTIONS(33),
    [anon_sym_int48] = ACTIONS(33),
    [anon_sym_int56] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int72] = ACTIONS(33),
    [anon_sym_int80] = ACTIONS(33),
    [anon_sym_int88] = ACTIONS(33),
    [anon_sym_int96] = ACTIONS(33),
    [anon_sym_int104] = ACTIONS(33),
    [anon_sym_int112] = ACTIONS(33),
    [anon_sym_int120] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [anon_sym_int136] = ACTIONS(33),
    [anon_sym_int144] = ACTIONS(33),
    [anon_sym_int152] = ACTIONS(33),
    [anon_sym_int160] = ACTIONS(33),
    [anon_sym_int168] = ACTIONS(33),
    [anon_sym_int176] = ACTIONS(33),
    [anon_sym_int184] = ACTIONS(33),
    [anon_sym_int192] = ACTIONS(33),
    [anon_sym_int200] = ACTIONS(33),
    [anon_sym_int208] = ACTIONS(33),
    [anon_sym_int216] = ACTIONS(33),
    [anon_sym_int224] = ACTIONS(33),
    [anon_sym_int232] = ACTIONS(33),
    [anon_sym_int240] = ACTIONS(33),
    [anon_sym_int248] = ACTIONS(33),
    [anon_sym_int256] = ACTIONS(33),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint24] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(33),
    [anon_sym_uint40] = ACTIONS(33),
    [anon_sym_uint48] = ACTIONS(33),
    [anon_sym_uint56] = ACTIONS(33),
    [anon_sym_uint64] = ACTIONS(33),
    [anon_sym_uint72] = ACTIONS(33),
    [anon_sym_uint80] = ACTIONS(33),
    [anon_sym_uint88] = ACTIONS(33),
    [anon_sym_uint96] = ACTIONS(33),
    [anon_sym_uint104] = ACTIONS(33),
    [anon_sym_uint112] = ACTIONS(33),
    [anon_sym_uint120] = ACTIONS(33),
    [anon_sym_uint128] = ACTIONS(33),
    [anon_sym_uint136] = ACTIONS(33),
    [anon_sym_uint144] = ACTIONS(33),
    [anon_sym_uint152] = ACTIONS(33),
    [anon_sym_uint160] = ACTIONS(33),
    [anon_sym_uint168] = ACTIONS(33),
    [anon_sym_uint176] = ACTIONS(33),
    [anon_sym_uint184] = ACTIONS(33),
    [anon_sym_uint192] = ACTIONS(33),
    [anon_sym_uint200] = ACTIONS(33),
    [anon_sym_uint208] = ACTIONS(33),
    [anon_sym_uint216] = ACTIONS(33),
    [anon_sym_uint224] = ACTIONS(33),
    [anon_sym_uint232] = ACTIONS(33),
    [anon_sym_uint240] = ACTIONS(33),
    [anon_sym_uint248] = ACTIONS(33),
    [anon_sym_uint256] = ACTIONS(33),
    [anon_sym_byte] = ACTIONS(31),
    [anon_sym_bytes] = ACTIONS(31),
    [anon_sym_bytes1] = ACTIONS(31),
    [anon_sym_bytes2] = ACTIONS(31),
    [anon_sym_bytes3] = ACTIONS(31),
    [anon_sym_bytes4] = ACTIONS(33),
    [anon_sym_bytes5] = ACTIONS(33),
    [anon_sym_bytes6] = ACTIONS(33),
    [anon_sym_bytes7] = ACTIONS(33),
    [anon_sym_bytes8] = ACTIONS(33),
    [anon_sym_bytes9] = ACTIONS(33),
    [anon_sym_bytes10] = ACTIONS(33),
    [anon_sym_bytes11] = ACTIONS(33),
    [anon_sym_bytes12] = ACTIONS(33),
    [anon_sym_bytes13] = ACTIONS(33),
    [anon_sym_bytes14] = ACTIONS(33),
    [anon_sym_bytes15] = ACTIONS(33),
    [anon_sym_bytes16] = ACTIONS(33),
    [anon_sym_bytes17] = ACTIONS(33),
    [anon_sym_bytes18] = ACTIONS(33),
    [anon_sym_bytes19] = ACTIONS(33),
    [anon_sym_bytes20] = ACTIONS(33),
    [anon_sym_bytes21] = ACTIONS(33),
    [anon_sym_bytes22] = ACTIONS(33),
    [anon_sym_bytes23] = ACTIONS(33),
    [anon_sym_bytes24] = ACTIONS(33),
    [anon_sym_bytes25] = ACTIONS(33),
    [anon_sym_bytes26] = ACTIONS(33),
    [anon_sym_bytes27] = ACTIONS(33),
    [anon_sym_bytes28] = ACTIONS(33),
    [anon_sym_bytes29] = ACTIONS(33),
    [anon_sym_bytes30] = ACTIONS(33),
    [anon_sym_bytes31] = ACTIONS(33),
    [anon_sym_bytes32] = ACTIONS(33),
    [anon_sym_fixed] = ACTIONS(31),
    [aux_sym__fixed_token1] = ACTIONS(33),
    [anon_sym_ufixed] = ACTIONS(31),
    [aux_sym__ufixed_token1] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_type_name] = STATE(71),
    [sym__function_type] = STATE(47),
    [sym__nameless_parameter] = STATE(116),
    [sym__user_defined_type] = STATE(47),
    [sym__mapping] = STATE(47),
    [sym__primitive_type] = STATE(47),
    [sym__int] = STATE(47),
    [sym__uint] = STATE(47),
    [sym__bytes] = STATE(47),
    [sym__fixed] = STATE(47),
    [sym__ufixed] = STATE(47),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(68),
    [anon_sym_mapping] = ACTIONS(27),
    [anon_sym_address] = ACTIONS(29),
    [anon_sym_bool] = ACTIONS(31),
    [anon_sym_string] = ACTIONS(31),
    [anon_sym_var] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(31),
    [anon_sym_int8] = ACTIONS(31),
    [anon_sym_int16] = ACTIONS(31),
    [anon_sym_int24] = ACTIONS(31),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int40] = ACTIONS(33),
    [anon_sym_int48] = ACTIONS(33),
    [anon_sym_int56] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int72] = ACTIONS(33),
    [anon_sym_int80] = ACTIONS(33),
    [anon_sym_int88] = ACTIONS(33),
    [anon_sym_int96] = ACTIONS(33),
    [anon_sym_int104] = ACTIONS(33),
    [anon_sym_int112] = ACTIONS(33),
    [anon_sym_int120] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [anon_sym_int136] = ACTIONS(33),
    [anon_sym_int144] = ACTIONS(33),
    [anon_sym_int152] = ACTIONS(33),
    [anon_sym_int160] = ACTIONS(33),
    [anon_sym_int168] = ACTIONS(33),
    [anon_sym_int176] = ACTIONS(33),
    [anon_sym_int184] = ACTIONS(33),
    [anon_sym_int192] = ACTIONS(33),
    [anon_sym_int200] = ACTIONS(33),
    [anon_sym_int208] = ACTIONS(33),
    [anon_sym_int216] = ACTIONS(33),
    [anon_sym_int224] = ACTIONS(33),
    [anon_sym_int232] = ACTIONS(33),
    [anon_sym_int240] = ACTIONS(33),
    [anon_sym_int248] = ACTIONS(33),
    [anon_sym_int256] = ACTIONS(33),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint24] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(33),
    [anon_sym_uint40] = ACTIONS(33),
    [anon_sym_uint48] = ACTIONS(33),
    [anon_sym_uint56] = ACTIONS(33),
    [anon_sym_uint64] = ACTIONS(33),
    [anon_sym_uint72] = ACTIONS(33),
    [anon_sym_uint80] = ACTIONS(33),
    [anon_sym_uint88] = ACTIONS(33),
    [anon_sym_uint96] = ACTIONS(33),
    [anon_sym_uint104] = ACTIONS(33),
    [anon_sym_uint112] = ACTIONS(33),
    [anon_sym_uint120] = ACTIONS(33),
    [anon_sym_uint128] = ACTIONS(33),
    [anon_sym_uint136] = ACTIONS(33),
    [anon_sym_uint144] = ACTIONS(33),
    [anon_sym_uint152] = ACTIONS(33),
    [anon_sym_uint160] = ACTIONS(33),
    [anon_sym_uint168] = ACTIONS(33),
    [anon_sym_uint176] = ACTIONS(33),
    [anon_sym_uint184] = ACTIONS(33),
    [anon_sym_uint192] = ACTIONS(33),
    [anon_sym_uint200] = ACTIONS(33),
    [anon_sym_uint208] = ACTIONS(33),
    [anon_sym_uint216] = ACTIONS(33),
    [anon_sym_uint224] = ACTIONS(33),
    [anon_sym_uint232] = ACTIONS(33),
    [anon_sym_uint240] = ACTIONS(33),
    [anon_sym_uint248] = ACTIONS(33),
    [anon_sym_uint256] = ACTIONS(33),
    [anon_sym_byte] = ACTIONS(31),
    [anon_sym_bytes] = ACTIONS(31),
    [anon_sym_bytes1] = ACTIONS(31),
    [anon_sym_bytes2] = ACTIONS(31),
    [anon_sym_bytes3] = ACTIONS(31),
    [anon_sym_bytes4] = ACTIONS(33),
    [anon_sym_bytes5] = ACTIONS(33),
    [anon_sym_bytes6] = ACTIONS(33),
    [anon_sym_bytes7] = ACTIONS(33),
    [anon_sym_bytes8] = ACTIONS(33),
    [anon_sym_bytes9] = ACTIONS(33),
    [anon_sym_bytes10] = ACTIONS(33),
    [anon_sym_bytes11] = ACTIONS(33),
    [anon_sym_bytes12] = ACTIONS(33),
    [anon_sym_bytes13] = ACTIONS(33),
    [anon_sym_bytes14] = ACTIONS(33),
    [anon_sym_bytes15] = ACTIONS(33),
    [anon_sym_bytes16] = ACTIONS(33),
    [anon_sym_bytes17] = ACTIONS(33),
    [anon_sym_bytes18] = ACTIONS(33),
    [anon_sym_bytes19] = ACTIONS(33),
    [anon_sym_bytes20] = ACTIONS(33),
    [anon_sym_bytes21] = ACTIONS(33),
    [anon_sym_bytes22] = ACTIONS(33),
    [anon_sym_bytes23] = ACTIONS(33),
    [anon_sym_bytes24] = ACTIONS(33),
    [anon_sym_bytes25] = ACTIONS(33),
    [anon_sym_bytes26] = ACTIONS(33),
    [anon_sym_bytes27] = ACTIONS(33),
    [anon_sym_bytes28] = ACTIONS(33),
    [anon_sym_bytes29] = ACTIONS(33),
    [anon_sym_bytes30] = ACTIONS(33),
    [anon_sym_bytes31] = ACTIONS(33),
    [anon_sym_bytes32] = ACTIONS(33),
    [anon_sym_fixed] = ACTIONS(31),
    [aux_sym__fixed_token1] = ACTIONS(33),
    [anon_sym_ufixed] = ACTIONS(31),
    [aux_sym__ufixed_token1] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_type_name] = STATE(65),
    [sym__function_type] = STATE(47),
    [sym__parameter] = STATE(141),
    [sym__user_defined_type] = STATE(47),
    [sym__mapping] = STATE(47),
    [sym__primitive_type] = STATE(47),
    [sym__int] = STATE(47),
    [sym__uint] = STATE(47),
    [sym__bytes] = STATE(47),
    [sym__fixed] = STATE(47),
    [sym__ufixed] = STATE(47),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(68),
    [anon_sym_mapping] = ACTIONS(27),
    [anon_sym_address] = ACTIONS(29),
    [anon_sym_bool] = ACTIONS(31),
    [anon_sym_string] = ACTIONS(31),
    [anon_sym_var] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(31),
    [anon_sym_int8] = ACTIONS(31),
    [anon_sym_int16] = ACTIONS(31),
    [anon_sym_int24] = ACTIONS(31),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int40] = ACTIONS(33),
    [anon_sym_int48] = ACTIONS(33),
    [anon_sym_int56] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int72] = ACTIONS(33),
    [anon_sym_int80] = ACTIONS(33),
    [anon_sym_int88] = ACTIONS(33),
    [anon_sym_int96] = ACTIONS(33),
    [anon_sym_int104] = ACTIONS(33),
    [anon_sym_int112] = ACTIONS(33),
    [anon_sym_int120] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [anon_sym_int136] = ACTIONS(33),
    [anon_sym_int144] = ACTIONS(33),
    [anon_sym_int152] = ACTIONS(33),
    [anon_sym_int160] = ACTIONS(33),
    [anon_sym_int168] = ACTIONS(33),
    [anon_sym_int176] = ACTIONS(33),
    [anon_sym_int184] = ACTIONS(33),
    [anon_sym_int192] = ACTIONS(33),
    [anon_sym_int200] = ACTIONS(33),
    [anon_sym_int208] = ACTIONS(33),
    [anon_sym_int216] = ACTIONS(33),
    [anon_sym_int224] = ACTIONS(33),
    [anon_sym_int232] = ACTIONS(33),
    [anon_sym_int240] = ACTIONS(33),
    [anon_sym_int248] = ACTIONS(33),
    [anon_sym_int256] = ACTIONS(33),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint24] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(33),
    [anon_sym_uint40] = ACTIONS(33),
    [anon_sym_uint48] = ACTIONS(33),
    [anon_sym_uint56] = ACTIONS(33),
    [anon_sym_uint64] = ACTIONS(33),
    [anon_sym_uint72] = ACTIONS(33),
    [anon_sym_uint80] = ACTIONS(33),
    [anon_sym_uint88] = ACTIONS(33),
    [anon_sym_uint96] = ACTIONS(33),
    [anon_sym_uint104] = ACTIONS(33),
    [anon_sym_uint112] = ACTIONS(33),
    [anon_sym_uint120] = ACTIONS(33),
    [anon_sym_uint128] = ACTIONS(33),
    [anon_sym_uint136] = ACTIONS(33),
    [anon_sym_uint144] = ACTIONS(33),
    [anon_sym_uint152] = ACTIONS(33),
    [anon_sym_uint160] = ACTIONS(33),
    [anon_sym_uint168] = ACTIONS(33),
    [anon_sym_uint176] = ACTIONS(33),
    [anon_sym_uint184] = ACTIONS(33),
    [anon_sym_uint192] = ACTIONS(33),
    [anon_sym_uint200] = ACTIONS(33),
    [anon_sym_uint208] = ACTIONS(33),
    [anon_sym_uint216] = ACTIONS(33),
    [anon_sym_uint224] = ACTIONS(33),
    [anon_sym_uint232] = ACTIONS(33),
    [anon_sym_uint240] = ACTIONS(33),
    [anon_sym_uint248] = ACTIONS(33),
    [anon_sym_uint256] = ACTIONS(33),
    [anon_sym_byte] = ACTIONS(31),
    [anon_sym_bytes] = ACTIONS(31),
    [anon_sym_bytes1] = ACTIONS(31),
    [anon_sym_bytes2] = ACTIONS(31),
    [anon_sym_bytes3] = ACTIONS(31),
    [anon_sym_bytes4] = ACTIONS(33),
    [anon_sym_bytes5] = ACTIONS(33),
    [anon_sym_bytes6] = ACTIONS(33),
    [anon_sym_bytes7] = ACTIONS(33),
    [anon_sym_bytes8] = ACTIONS(33),
    [anon_sym_bytes9] = ACTIONS(33),
    [anon_sym_bytes10] = ACTIONS(33),
    [anon_sym_bytes11] = ACTIONS(33),
    [anon_sym_bytes12] = ACTIONS(33),
    [anon_sym_bytes13] = ACTIONS(33),
    [anon_sym_bytes14] = ACTIONS(33),
    [anon_sym_bytes15] = ACTIONS(33),
    [anon_sym_bytes16] = ACTIONS(33),
    [anon_sym_bytes17] = ACTIONS(33),
    [anon_sym_bytes18] = ACTIONS(33),
    [anon_sym_bytes19] = ACTIONS(33),
    [anon_sym_bytes20] = ACTIONS(33),
    [anon_sym_bytes21] = ACTIONS(33),
    [anon_sym_bytes22] = ACTIONS(33),
    [anon_sym_bytes23] = ACTIONS(33),
    [anon_sym_bytes24] = ACTIONS(33),
    [anon_sym_bytes25] = ACTIONS(33),
    [anon_sym_bytes26] = ACTIONS(33),
    [anon_sym_bytes27] = ACTIONS(33),
    [anon_sym_bytes28] = ACTIONS(33),
    [anon_sym_bytes29] = ACTIONS(33),
    [anon_sym_bytes30] = ACTIONS(33),
    [anon_sym_bytes31] = ACTIONS(33),
    [anon_sym_bytes32] = ACTIONS(33),
    [anon_sym_fixed] = ACTIONS(31),
    [aux_sym__fixed_token1] = ACTIONS(33),
    [anon_sym_ufixed] = ACTIONS(31),
    [aux_sym__ufixed_token1] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_type_name] = STATE(71),
    [sym__function_type] = STATE(47),
    [sym__nameless_parameter] = STATE(94),
    [sym__user_defined_type] = STATE(47),
    [sym__mapping] = STATE(47),
    [sym__primitive_type] = STATE(47),
    [sym__int] = STATE(47),
    [sym__uint] = STATE(47),
    [sym__bytes] = STATE(47),
    [sym__fixed] = STATE(47),
    [sym__ufixed] = STATE(47),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(68),
    [anon_sym_mapping] = ACTIONS(27),
    [anon_sym_address] = ACTIONS(29),
    [anon_sym_bool] = ACTIONS(31),
    [anon_sym_string] = ACTIONS(31),
    [anon_sym_var] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(31),
    [anon_sym_int8] = ACTIONS(31),
    [anon_sym_int16] = ACTIONS(31),
    [anon_sym_int24] = ACTIONS(31),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int40] = ACTIONS(33),
    [anon_sym_int48] = ACTIONS(33),
    [anon_sym_int56] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int72] = ACTIONS(33),
    [anon_sym_int80] = ACTIONS(33),
    [anon_sym_int88] = ACTIONS(33),
    [anon_sym_int96] = ACTIONS(33),
    [anon_sym_int104] = ACTIONS(33),
    [anon_sym_int112] = ACTIONS(33),
    [anon_sym_int120] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [anon_sym_int136] = ACTIONS(33),
    [anon_sym_int144] = ACTIONS(33),
    [anon_sym_int152] = ACTIONS(33),
    [anon_sym_int160] = ACTIONS(33),
    [anon_sym_int168] = ACTIONS(33),
    [anon_sym_int176] = ACTIONS(33),
    [anon_sym_int184] = ACTIONS(33),
    [anon_sym_int192] = ACTIONS(33),
    [anon_sym_int200] = ACTIONS(33),
    [anon_sym_int208] = ACTIONS(33),
    [anon_sym_int216] = ACTIONS(33),
    [anon_sym_int224] = ACTIONS(33),
    [anon_sym_int232] = ACTIONS(33),
    [anon_sym_int240] = ACTIONS(33),
    [anon_sym_int248] = ACTIONS(33),
    [anon_sym_int256] = ACTIONS(33),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint24] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(33),
    [anon_sym_uint40] = ACTIONS(33),
    [anon_sym_uint48] = ACTIONS(33),
    [anon_sym_uint56] = ACTIONS(33),
    [anon_sym_uint64] = ACTIONS(33),
    [anon_sym_uint72] = ACTIONS(33),
    [anon_sym_uint80] = ACTIONS(33),
    [anon_sym_uint88] = ACTIONS(33),
    [anon_sym_uint96] = ACTIONS(33),
    [anon_sym_uint104] = ACTIONS(33),
    [anon_sym_uint112] = ACTIONS(33),
    [anon_sym_uint120] = ACTIONS(33),
    [anon_sym_uint128] = ACTIONS(33),
    [anon_sym_uint136] = ACTIONS(33),
    [anon_sym_uint144] = ACTIONS(33),
    [anon_sym_uint152] = ACTIONS(33),
    [anon_sym_uint160] = ACTIONS(33),
    [anon_sym_uint168] = ACTIONS(33),
    [anon_sym_uint176] = ACTIONS(33),
    [anon_sym_uint184] = ACTIONS(33),
    [anon_sym_uint192] = ACTIONS(33),
    [anon_sym_uint200] = ACTIONS(33),
    [anon_sym_uint208] = ACTIONS(33),
    [anon_sym_uint216] = ACTIONS(33),
    [anon_sym_uint224] = ACTIONS(33),
    [anon_sym_uint232] = ACTIONS(33),
    [anon_sym_uint240] = ACTIONS(33),
    [anon_sym_uint248] = ACTIONS(33),
    [anon_sym_uint256] = ACTIONS(33),
    [anon_sym_byte] = ACTIONS(31),
    [anon_sym_bytes] = ACTIONS(31),
    [anon_sym_bytes1] = ACTIONS(31),
    [anon_sym_bytes2] = ACTIONS(31),
    [anon_sym_bytes3] = ACTIONS(31),
    [anon_sym_bytes4] = ACTIONS(33),
    [anon_sym_bytes5] = ACTIONS(33),
    [anon_sym_bytes6] = ACTIONS(33),
    [anon_sym_bytes7] = ACTIONS(33),
    [anon_sym_bytes8] = ACTIONS(33),
    [anon_sym_bytes9] = ACTIONS(33),
    [anon_sym_bytes10] = ACTIONS(33),
    [anon_sym_bytes11] = ACTIONS(33),
    [anon_sym_bytes12] = ACTIONS(33),
    [anon_sym_bytes13] = ACTIONS(33),
    [anon_sym_bytes14] = ACTIONS(33),
    [anon_sym_bytes15] = ACTIONS(33),
    [anon_sym_bytes16] = ACTIONS(33),
    [anon_sym_bytes17] = ACTIONS(33),
    [anon_sym_bytes18] = ACTIONS(33),
    [anon_sym_bytes19] = ACTIONS(33),
    [anon_sym_bytes20] = ACTIONS(33),
    [anon_sym_bytes21] = ACTIONS(33),
    [anon_sym_bytes22] = ACTIONS(33),
    [anon_sym_bytes23] = ACTIONS(33),
    [anon_sym_bytes24] = ACTIONS(33),
    [anon_sym_bytes25] = ACTIONS(33),
    [anon_sym_bytes26] = ACTIONS(33),
    [anon_sym_bytes27] = ACTIONS(33),
    [anon_sym_bytes28] = ACTIONS(33),
    [anon_sym_bytes29] = ACTIONS(33),
    [anon_sym_bytes30] = ACTIONS(33),
    [anon_sym_bytes31] = ACTIONS(33),
    [anon_sym_bytes32] = ACTIONS(33),
    [anon_sym_fixed] = ACTIONS(31),
    [aux_sym__fixed_token1] = ACTIONS(33),
    [anon_sym_ufixed] = ACTIONS(31),
    [aux_sym__ufixed_token1] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_type_name] = STATE(65),
    [sym__function_type] = STATE(47),
    [sym__parameter] = STATE(100),
    [sym__user_defined_type] = STATE(47),
    [sym__mapping] = STATE(47),
    [sym__primitive_type] = STATE(47),
    [sym__int] = STATE(47),
    [sym__uint] = STATE(47),
    [sym__bytes] = STATE(47),
    [sym__fixed] = STATE(47),
    [sym__ufixed] = STATE(47),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(68),
    [anon_sym_mapping] = ACTIONS(27),
    [anon_sym_address] = ACTIONS(29),
    [anon_sym_bool] = ACTIONS(31),
    [anon_sym_string] = ACTIONS(31),
    [anon_sym_var] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(31),
    [anon_sym_int8] = ACTIONS(31),
    [anon_sym_int16] = ACTIONS(31),
    [anon_sym_int24] = ACTIONS(31),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int40] = ACTIONS(33),
    [anon_sym_int48] = ACTIONS(33),
    [anon_sym_int56] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int72] = ACTIONS(33),
    [anon_sym_int80] = ACTIONS(33),
    [anon_sym_int88] = ACTIONS(33),
    [anon_sym_int96] = ACTIONS(33),
    [anon_sym_int104] = ACTIONS(33),
    [anon_sym_int112] = ACTIONS(33),
    [anon_sym_int120] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [anon_sym_int136] = ACTIONS(33),
    [anon_sym_int144] = ACTIONS(33),
    [anon_sym_int152] = ACTIONS(33),
    [anon_sym_int160] = ACTIONS(33),
    [anon_sym_int168] = ACTIONS(33),
    [anon_sym_int176] = ACTIONS(33),
    [anon_sym_int184] = ACTIONS(33),
    [anon_sym_int192] = ACTIONS(33),
    [anon_sym_int200] = ACTIONS(33),
    [anon_sym_int208] = ACTIONS(33),
    [anon_sym_int216] = ACTIONS(33),
    [anon_sym_int224] = ACTIONS(33),
    [anon_sym_int232] = ACTIONS(33),
    [anon_sym_int240] = ACTIONS(33),
    [anon_sym_int248] = ACTIONS(33),
    [anon_sym_int256] = ACTIONS(33),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint24] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(33),
    [anon_sym_uint40] = ACTIONS(33),
    [anon_sym_uint48] = ACTIONS(33),
    [anon_sym_uint56] = ACTIONS(33),
    [anon_sym_uint64] = ACTIONS(33),
    [anon_sym_uint72] = ACTIONS(33),
    [anon_sym_uint80] = ACTIONS(33),
    [anon_sym_uint88] = ACTIONS(33),
    [anon_sym_uint96] = ACTIONS(33),
    [anon_sym_uint104] = ACTIONS(33),
    [anon_sym_uint112] = ACTIONS(33),
    [anon_sym_uint120] = ACTIONS(33),
    [anon_sym_uint128] = ACTIONS(33),
    [anon_sym_uint136] = ACTIONS(33),
    [anon_sym_uint144] = ACTIONS(33),
    [anon_sym_uint152] = ACTIONS(33),
    [anon_sym_uint160] = ACTIONS(33),
    [anon_sym_uint168] = ACTIONS(33),
    [anon_sym_uint176] = ACTIONS(33),
    [anon_sym_uint184] = ACTIONS(33),
    [anon_sym_uint192] = ACTIONS(33),
    [anon_sym_uint200] = ACTIONS(33),
    [anon_sym_uint208] = ACTIONS(33),
    [anon_sym_uint216] = ACTIONS(33),
    [anon_sym_uint224] = ACTIONS(33),
    [anon_sym_uint232] = ACTIONS(33),
    [anon_sym_uint240] = ACTIONS(33),
    [anon_sym_uint248] = ACTIONS(33),
    [anon_sym_uint256] = ACTIONS(33),
    [anon_sym_byte] = ACTIONS(31),
    [anon_sym_bytes] = ACTIONS(31),
    [anon_sym_bytes1] = ACTIONS(31),
    [anon_sym_bytes2] = ACTIONS(31),
    [anon_sym_bytes3] = ACTIONS(31),
    [anon_sym_bytes4] = ACTIONS(33),
    [anon_sym_bytes5] = ACTIONS(33),
    [anon_sym_bytes6] = ACTIONS(33),
    [anon_sym_bytes7] = ACTIONS(33),
    [anon_sym_bytes8] = ACTIONS(33),
    [anon_sym_bytes9] = ACTIONS(33),
    [anon_sym_bytes10] = ACTIONS(33),
    [anon_sym_bytes11] = ACTIONS(33),
    [anon_sym_bytes12] = ACTIONS(33),
    [anon_sym_bytes13] = ACTIONS(33),
    [anon_sym_bytes14] = ACTIONS(33),
    [anon_sym_bytes15] = ACTIONS(33),
    [anon_sym_bytes16] = ACTIONS(33),
    [anon_sym_bytes17] = ACTIONS(33),
    [anon_sym_bytes18] = ACTIONS(33),
    [anon_sym_bytes19] = ACTIONS(33),
    [anon_sym_bytes20] = ACTIONS(33),
    [anon_sym_bytes21] = ACTIONS(33),
    [anon_sym_bytes22] = ACTIONS(33),
    [anon_sym_bytes23] = ACTIONS(33),
    [anon_sym_bytes24] = ACTIONS(33),
    [anon_sym_bytes25] = ACTIONS(33),
    [anon_sym_bytes26] = ACTIONS(33),
    [anon_sym_bytes27] = ACTIONS(33),
    [anon_sym_bytes28] = ACTIONS(33),
    [anon_sym_bytes29] = ACTIONS(33),
    [anon_sym_bytes30] = ACTIONS(33),
    [anon_sym_bytes31] = ACTIONS(33),
    [anon_sym_bytes32] = ACTIONS(33),
    [anon_sym_fixed] = ACTIONS(31),
    [aux_sym__fixed_token1] = ACTIONS(33),
    [anon_sym_ufixed] = ACTIONS(31),
    [aux_sym__ufixed_token1] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_type_name] = STATE(134),
    [sym__function_type] = STATE(47),
    [sym__user_defined_type] = STATE(47),
    [sym__mapping] = STATE(47),
    [sym__primitive_type] = STATE(47),
    [sym__int] = STATE(47),
    [sym__uint] = STATE(47),
    [sym__bytes] = STATE(47),
    [sym__fixed] = STATE(47),
    [sym__ufixed] = STATE(47),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(68),
    [anon_sym_mapping] = ACTIONS(27),
    [anon_sym_address] = ACTIONS(29),
    [anon_sym_bool] = ACTIONS(31),
    [anon_sym_string] = ACTIONS(31),
    [anon_sym_var] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(31),
    [anon_sym_int8] = ACTIONS(31),
    [anon_sym_int16] = ACTIONS(31),
    [anon_sym_int24] = ACTIONS(31),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int40] = ACTIONS(33),
    [anon_sym_int48] = ACTIONS(33),
    [anon_sym_int56] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_int72] = ACTIONS(33),
    [anon_sym_int80] = ACTIONS(33),
    [anon_sym_int88] = ACTIONS(33),
    [anon_sym_int96] = ACTIONS(33),
    [anon_sym_int104] = ACTIONS(33),
    [anon_sym_int112] = ACTIONS(33),
    [anon_sym_int120] = ACTIONS(33),
    [anon_sym_int128] = ACTIONS(33),
    [anon_sym_int136] = ACTIONS(33),
    [anon_sym_int144] = ACTIONS(33),
    [anon_sym_int152] = ACTIONS(33),
    [anon_sym_int160] = ACTIONS(33),
    [anon_sym_int168] = ACTIONS(33),
    [anon_sym_int176] = ACTIONS(33),
    [anon_sym_int184] = ACTIONS(33),
    [anon_sym_int192] = ACTIONS(33),
    [anon_sym_int200] = ACTIONS(33),
    [anon_sym_int208] = ACTIONS(33),
    [anon_sym_int216] = ACTIONS(33),
    [anon_sym_int224] = ACTIONS(33),
    [anon_sym_int232] = ACTIONS(33),
    [anon_sym_int240] = ACTIONS(33),
    [anon_sym_int248] = ACTIONS(33),
    [anon_sym_int256] = ACTIONS(33),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint24] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(33),
    [anon_sym_uint40] = ACTIONS(33),
    [anon_sym_uint48] = ACTIONS(33),
    [anon_sym_uint56] = ACTIONS(33),
    [anon_sym_uint64] = ACTIONS(33),
    [anon_sym_uint72] = ACTIONS(33),
    [anon_sym_uint80] = ACTIONS(33),
    [anon_sym_uint88] = ACTIONS(33),
    [anon_sym_uint96] = ACTIONS(33),
    [anon_sym_uint104] = ACTIONS(33),
    [anon_sym_uint112] = ACTIONS(33),
    [anon_sym_uint120] = ACTIONS(33),
    [anon_sym_uint128] = ACTIONS(33),
    [anon_sym_uint136] = ACTIONS(33),
    [anon_sym_uint144] = ACTIONS(33),
    [anon_sym_uint152] = ACTIONS(33),
    [anon_sym_uint160] = ACTIONS(33),
    [anon_sym_uint168] = ACTIONS(33),
    [anon_sym_uint176] = ACTIONS(33),
    [anon_sym_uint184] = ACTIONS(33),
    [anon_sym_uint192] = ACTIONS(33),
    [anon_sym_uint200] = ACTIONS(33),
    [anon_sym_uint208] = ACTIONS(33),
    [anon_sym_uint216] = ACTIONS(33),
    [anon_sym_uint224] = ACTIONS(33),
    [anon_sym_uint232] = ACTIONS(33),
    [anon_sym_uint240] = ACTIONS(33),
    [anon_sym_uint248] = ACTIONS(33),
    [anon_sym_uint256] = ACTIONS(33),
    [anon_sym_byte] = ACTIONS(31),
    [anon_sym_bytes] = ACTIONS(31),
    [anon_sym_bytes1] = ACTIONS(31),
    [anon_sym_bytes2] = ACTIONS(31),
    [anon_sym_bytes3] = ACTIONS(31),
    [anon_sym_bytes4] = ACTIONS(33),
    [anon_sym_bytes5] = ACTIONS(33),
    [anon_sym_bytes6] = ACTIONS(33),
    [anon_sym_bytes7] = ACTIONS(33),
    [anon_sym_bytes8] = ACTIONS(33),
    [anon_sym_bytes9] = ACTIONS(33),
    [anon_sym_bytes10] = ACTIONS(33),
    [anon_sym_bytes11] = ACTIONS(33),
    [anon_sym_bytes12] = ACTIONS(33),
    [anon_sym_bytes13] = ACTIONS(33),
    [anon_sym_bytes14] = ACTIONS(33),
    [anon_sym_bytes15] = ACTIONS(33),
    [anon_sym_bytes16] = ACTIONS(33),
    [anon_sym_bytes17] = ACTIONS(33),
    [anon_sym_bytes18] = ACTIONS(33),
    [anon_sym_bytes19] = ACTIONS(33),
    [anon_sym_bytes20] = ACTIONS(33),
    [anon_sym_bytes21] = ACTIONS(33),
    [anon_sym_bytes22] = ACTIONS(33),
    [anon_sym_bytes23] = ACTIONS(33),
    [anon_sym_bytes24] = ACTIONS(33),
    [anon_sym_bytes25] = ACTIONS(33),
    [anon_sym_bytes26] = ACTIONS(33),
    [anon_sym_bytes27] = ACTIONS(33),
    [anon_sym_bytes28] = ACTIONS(33),
    [anon_sym_bytes29] = ACTIONS(33),
    [anon_sym_bytes30] = ACTIONS(33),
    [anon_sym_bytes31] = ACTIONS(33),
    [anon_sym_bytes32] = ACTIONS(33),
    [anon_sym_fixed] = ACTIONS(31),
    [aux_sym__fixed_token1] = ACTIONS(33),
    [anon_sym_ufixed] = ACTIONS(31),
    [aux_sym__ufixed_token1] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym__user_defined_type] = STATE(174),
    [sym__mapping_key] = STATE(174),
    [sym__primitive_type] = STATE(174),
    [sym__int] = STATE(174),
    [sym__uint] = STATE(174),
    [sym__bytes] = STATE(174),
    [sym__fixed] = STATE(174),
    [sym__ufixed] = STATE(174),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_address] = ACTIONS(29),
    [anon_sym_bool] = ACTIONS(90),
    [anon_sym_string] = ACTIONS(90),
    [anon_sym_var] = ACTIONS(90),
    [anon_sym_int] = ACTIONS(90),
    [anon_sym_int8] = ACTIONS(90),
    [anon_sym_int16] = ACTIONS(90),
    [anon_sym_int24] = ACTIONS(90),
    [anon_sym_int32] = ACTIONS(92),
    [anon_sym_int40] = ACTIONS(92),
    [anon_sym_int48] = ACTIONS(92),
    [anon_sym_int56] = ACTIONS(92),
    [anon_sym_int64] = ACTIONS(92),
    [anon_sym_int72] = ACTIONS(92),
    [anon_sym_int80] = ACTIONS(92),
    [anon_sym_int88] = ACTIONS(92),
    [anon_sym_int96] = ACTIONS(92),
    [anon_sym_int104] = ACTIONS(92),
    [anon_sym_int112] = ACTIONS(92),
    [anon_sym_int120] = ACTIONS(92),
    [anon_sym_int128] = ACTIONS(92),
    [anon_sym_int136] = ACTIONS(92),
    [anon_sym_int144] = ACTIONS(92),
    [anon_sym_int152] = ACTIONS(92),
    [anon_sym_int160] = ACTIONS(92),
    [anon_sym_int168] = ACTIONS(92),
    [anon_sym_int176] = ACTIONS(92),
    [anon_sym_int184] = ACTIONS(92),
    [anon_sym_int192] = ACTIONS(92),
    [anon_sym_int200] = ACTIONS(92),
    [anon_sym_int208] = ACTIONS(92),
    [anon_sym_int216] = ACTIONS(92),
    [anon_sym_int224] = ACTIONS(92),
    [anon_sym_int232] = ACTIONS(92),
    [anon_sym_int240] = ACTIONS(92),
    [anon_sym_int248] = ACTIONS(92),
    [anon_sym_int256] = ACTIONS(92),
    [anon_sym_uint] = ACTIONS(90),
    [anon_sym_uint8] = ACTIONS(90),
    [anon_sym_uint16] = ACTIONS(90),
    [anon_sym_uint24] = ACTIONS(90),
    [anon_sym_uint32] = ACTIONS(92),
    [anon_sym_uint40] = ACTIONS(92),
    [anon_sym_uint48] = ACTIONS(92),
    [anon_sym_uint56] = ACTIONS(92),
    [anon_sym_uint64] = ACTIONS(92),
    [anon_sym_uint72] = ACTIONS(92),
    [anon_sym_uint80] = ACTIONS(92),
    [anon_sym_uint88] = ACTIONS(92),
    [anon_sym_uint96] = ACTIONS(92),
    [anon_sym_uint104] = ACTIONS(92),
    [anon_sym_uint112] = ACTIONS(92),
    [anon_sym_uint120] = ACTIONS(92),
    [anon_sym_uint128] = ACTIONS(92),
    [anon_sym_uint136] = ACTIONS(92),
    [anon_sym_uint144] = ACTIONS(92),
    [anon_sym_uint152] = ACTIONS(92),
    [anon_sym_uint160] = ACTIONS(92),
    [anon_sym_uint168] = ACTIONS(92),
    [anon_sym_uint176] = ACTIONS(92),
    [anon_sym_uint184] = ACTIONS(92),
    [anon_sym_uint192] = ACTIONS(92),
    [anon_sym_uint200] = ACTIONS(92),
    [anon_sym_uint208] = ACTIONS(92),
    [anon_sym_uint216] = ACTIONS(92),
    [anon_sym_uint224] = ACTIONS(92),
    [anon_sym_uint232] = ACTIONS(92),
    [anon_sym_uint240] = ACTIONS(92),
    [anon_sym_uint248] = ACTIONS(92),
    [anon_sym_uint256] = ACTIONS(92),
    [anon_sym_byte] = ACTIONS(90),
    [anon_sym_bytes] = ACTIONS(90),
    [anon_sym_bytes1] = ACTIONS(90),
    [anon_sym_bytes2] = ACTIONS(90),
    [anon_sym_bytes3] = ACTIONS(90),
    [anon_sym_bytes4] = ACTIONS(92),
    [anon_sym_bytes5] = ACTIONS(92),
    [anon_sym_bytes6] = ACTIONS(92),
    [anon_sym_bytes7] = ACTIONS(92),
    [anon_sym_bytes8] = ACTIONS(92),
    [anon_sym_bytes9] = ACTIONS(92),
    [anon_sym_bytes10] = ACTIONS(92),
    [anon_sym_bytes11] = ACTIONS(92),
    [anon_sym_bytes12] = ACTIONS(92),
    [anon_sym_bytes13] = ACTIONS(92),
    [anon_sym_bytes14] = ACTIONS(92),
    [anon_sym_bytes15] = ACTIONS(92),
    [anon_sym_bytes16] = ACTIONS(92),
    [anon_sym_bytes17] = ACTIONS(92),
    [anon_sym_bytes18] = ACTIONS(92),
    [anon_sym_bytes19] = ACTIONS(92),
    [anon_sym_bytes20] = ACTIONS(92),
    [anon_sym_bytes21] = ACTIONS(92),
    [anon_sym_bytes22] = ACTIONS(92),
    [anon_sym_bytes23] = ACTIONS(92),
    [anon_sym_bytes24] = ACTIONS(92),
    [anon_sym_bytes25] = ACTIONS(92),
    [anon_sym_bytes26] = ACTIONS(92),
    [anon_sym_bytes27] = ACTIONS(92),
    [anon_sym_bytes28] = ACTIONS(92),
    [anon_sym_bytes29] = ACTIONS(92),
    [anon_sym_bytes30] = ACTIONS(92),
    [anon_sym_bytes31] = ACTIONS(92),
    [anon_sym_bytes32] = ACTIONS(92),
    [anon_sym_fixed] = ACTIONS(90),
    [aux_sym__fixed_token1] = ACTIONS(92),
    [anon_sym_ufixed] = ACTIONS(90),
    [aux_sym__ufixed_token1] = ACTIONS(92),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_identifier] = ACTIONS(94),
    [anon_sym_RBRACE] = ACTIONS(96),
    [anon_sym_struct] = ACTIONS(94),
    [anon_sym_enum] = ACTIONS(94),
    [anon_sym_modifier] = ACTIONS(94),
    [anon_sym_function] = ACTIONS(94),
    [anon_sym_mapping] = ACTIONS(94),
    [anon_sym_address] = ACTIONS(94),
    [anon_sym_bool] = ACTIONS(94),
    [anon_sym_string] = ACTIONS(94),
    [anon_sym_var] = ACTIONS(94),
    [anon_sym_int] = ACTIONS(94),
    [anon_sym_int8] = ACTIONS(94),
    [anon_sym_int16] = ACTIONS(94),
    [anon_sym_int24] = ACTIONS(94),
    [anon_sym_int32] = ACTIONS(96),
    [anon_sym_int40] = ACTIONS(96),
    [anon_sym_int48] = ACTIONS(96),
    [anon_sym_int56] = ACTIONS(96),
    [anon_sym_int64] = ACTIONS(96),
    [anon_sym_int72] = ACTIONS(96),
    [anon_sym_int80] = ACTIONS(96),
    [anon_sym_int88] = ACTIONS(96),
    [anon_sym_int96] = ACTIONS(96),
    [anon_sym_int104] = ACTIONS(96),
    [anon_sym_int112] = ACTIONS(96),
    [anon_sym_int120] = ACTIONS(96),
    [anon_sym_int128] = ACTIONS(96),
    [anon_sym_int136] = ACTIONS(96),
    [anon_sym_int144] = ACTIONS(96),
    [anon_sym_int152] = ACTIONS(96),
    [anon_sym_int160] = ACTIONS(96),
    [anon_sym_int168] = ACTIONS(96),
    [anon_sym_int176] = ACTIONS(96),
    [anon_sym_int184] = ACTIONS(96),
    [anon_sym_int192] = ACTIONS(96),
    [anon_sym_int200] = ACTIONS(96),
    [anon_sym_int208] = ACTIONS(96),
    [anon_sym_int216] = ACTIONS(96),
    [anon_sym_int224] = ACTIONS(96),
    [anon_sym_int232] = ACTIONS(96),
    [anon_sym_int240] = ACTIONS(96),
    [anon_sym_int248] = ACTIONS(96),
    [anon_sym_int256] = ACTIONS(96),
    [anon_sym_uint] = ACTIONS(94),
    [anon_sym_uint8] = ACTIONS(94),
    [anon_sym_uint16] = ACTIONS(94),
    [anon_sym_uint24] = ACTIONS(94),
    [anon_sym_uint32] = ACTIONS(96),
    [anon_sym_uint40] = ACTIONS(96),
    [anon_sym_uint48] = ACTIONS(96),
    [anon_sym_uint56] = ACTIONS(96),
    [anon_sym_uint64] = ACTIONS(96),
    [anon_sym_uint72] = ACTIONS(96),
    [anon_sym_uint80] = ACTIONS(96),
    [anon_sym_uint88] = ACTIONS(96),
    [anon_sym_uint96] = ACTIONS(96),
    [anon_sym_uint104] = ACTIONS(96),
    [anon_sym_uint112] = ACTIONS(96),
    [anon_sym_uint120] = ACTIONS(96),
    [anon_sym_uint128] = ACTIONS(96),
    [anon_sym_uint136] = ACTIONS(96),
    [anon_sym_uint144] = ACTIONS(96),
    [anon_sym_uint152] = ACTIONS(96),
    [anon_sym_uint160] = ACTIONS(96),
    [anon_sym_uint168] = ACTIONS(96),
    [anon_sym_uint176] = ACTIONS(96),
    [anon_sym_uint184] = ACTIONS(96),
    [anon_sym_uint192] = ACTIONS(96),
    [anon_sym_uint200] = ACTIONS(96),
    [anon_sym_uint208] = ACTIONS(96),
    [anon_sym_uint216] = ACTIONS(96),
    [anon_sym_uint224] = ACTIONS(96),
    [anon_sym_uint232] = ACTIONS(96),
    [anon_sym_uint240] = ACTIONS(96),
    [anon_sym_uint248] = ACTIONS(96),
    [anon_sym_uint256] = ACTIONS(96),
    [anon_sym_byte] = ACTIONS(94),
    [anon_sym_bytes] = ACTIONS(94),
    [anon_sym_bytes1] = ACTIONS(94),
    [anon_sym_bytes2] = ACTIONS(94),
    [anon_sym_bytes3] = ACTIONS(94),
    [anon_sym_bytes4] = ACTIONS(96),
    [anon_sym_bytes5] = ACTIONS(96),
    [anon_sym_bytes6] = ACTIONS(96),
    [anon_sym_bytes7] = ACTIONS(96),
    [anon_sym_bytes8] = ACTIONS(96),
    [anon_sym_bytes9] = ACTIONS(96),
    [anon_sym_bytes10] = ACTIONS(96),
    [anon_sym_bytes11] = ACTIONS(96),
    [anon_sym_bytes12] = ACTIONS(96),
    [anon_sym_bytes13] = ACTIONS(96),
    [anon_sym_bytes14] = ACTIONS(96),
    [anon_sym_bytes15] = ACTIONS(96),
    [anon_sym_bytes16] = ACTIONS(96),
    [anon_sym_bytes17] = ACTIONS(96),
    [anon_sym_bytes18] = ACTIONS(96),
    [anon_sym_bytes19] = ACTIONS(96),
    [anon_sym_bytes20] = ACTIONS(96),
    [anon_sym_bytes21] = ACTIONS(96),
    [anon_sym_bytes22] = ACTIONS(96),
    [anon_sym_bytes23] = ACTIONS(96),
    [anon_sym_bytes24] = ACTIONS(96),
    [anon_sym_bytes25] = ACTIONS(96),
    [anon_sym_bytes26] = ACTIONS(96),
    [anon_sym_bytes27] = ACTIONS(96),
    [anon_sym_bytes28] = ACTIONS(96),
    [anon_sym_bytes29] = ACTIONS(96),
    [anon_sym_bytes30] = ACTIONS(96),
    [anon_sym_bytes31] = ACTIONS(96),
    [anon_sym_bytes32] = ACTIONS(96),
    [anon_sym_fixed] = ACTIONS(94),
    [aux_sym__fixed_token1] = ACTIONS(96),
    [anon_sym_ufixed] = ACTIONS(94),
    [aux_sym__ufixed_token1] = ACTIONS(96),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_identifier] = ACTIONS(98),
    [anon_sym_RBRACE] = ACTIONS(100),
    [anon_sym_struct] = ACTIONS(98),
    [anon_sym_enum] = ACTIONS(98),
    [anon_sym_modifier] = ACTIONS(98),
    [anon_sym_function] = ACTIONS(98),
    [anon_sym_mapping] = ACTIONS(98),
    [anon_sym_address] = ACTIONS(98),
    [anon_sym_bool] = ACTIONS(98),
    [anon_sym_string] = ACTIONS(98),
    [anon_sym_var] = ACTIONS(98),
    [anon_sym_int] = ACTIONS(98),
    [anon_sym_int8] = ACTIONS(98),
    [anon_sym_int16] = ACTIONS(98),
    [anon_sym_int24] = ACTIONS(98),
    [anon_sym_int32] = ACTIONS(100),
    [anon_sym_int40] = ACTIONS(100),
    [anon_sym_int48] = ACTIONS(100),
    [anon_sym_int56] = ACTIONS(100),
    [anon_sym_int64] = ACTIONS(100),
    [anon_sym_int72] = ACTIONS(100),
    [anon_sym_int80] = ACTIONS(100),
    [anon_sym_int88] = ACTIONS(100),
    [anon_sym_int96] = ACTIONS(100),
    [anon_sym_int104] = ACTIONS(100),
    [anon_sym_int112] = ACTIONS(100),
    [anon_sym_int120] = ACTIONS(100),
    [anon_sym_int128] = ACTIONS(100),
    [anon_sym_int136] = ACTIONS(100),
    [anon_sym_int144] = ACTIONS(100),
    [anon_sym_int152] = ACTIONS(100),
    [anon_sym_int160] = ACTIONS(100),
    [anon_sym_int168] = ACTIONS(100),
    [anon_sym_int176] = ACTIONS(100),
    [anon_sym_int184] = ACTIONS(100),
    [anon_sym_int192] = ACTIONS(100),
    [anon_sym_int200] = ACTIONS(100),
    [anon_sym_int208] = ACTIONS(100),
    [anon_sym_int216] = ACTIONS(100),
    [anon_sym_int224] = ACTIONS(100),
    [anon_sym_int232] = ACTIONS(100),
    [anon_sym_int240] = ACTIONS(100),
    [anon_sym_int248] = ACTIONS(100),
    [anon_sym_int256] = ACTIONS(100),
    [anon_sym_uint] = ACTIONS(98),
    [anon_sym_uint8] = ACTIONS(98),
    [anon_sym_uint16] = ACTIONS(98),
    [anon_sym_uint24] = ACTIONS(98),
    [anon_sym_uint32] = ACTIONS(100),
    [anon_sym_uint40] = ACTIONS(100),
    [anon_sym_uint48] = ACTIONS(100),
    [anon_sym_uint56] = ACTIONS(100),
    [anon_sym_uint64] = ACTIONS(100),
    [anon_sym_uint72] = ACTIONS(100),
    [anon_sym_uint80] = ACTIONS(100),
    [anon_sym_uint88] = ACTIONS(100),
    [anon_sym_uint96] = ACTIONS(100),
    [anon_sym_uint104] = ACTIONS(100),
    [anon_sym_uint112] = ACTIONS(100),
    [anon_sym_uint120] = ACTIONS(100),
    [anon_sym_uint128] = ACTIONS(100),
    [anon_sym_uint136] = ACTIONS(100),
    [anon_sym_uint144] = ACTIONS(100),
    [anon_sym_uint152] = ACTIONS(100),
    [anon_sym_uint160] = ACTIONS(100),
    [anon_sym_uint168] = ACTIONS(100),
    [anon_sym_uint176] = ACTIONS(100),
    [anon_sym_uint184] = ACTIONS(100),
    [anon_sym_uint192] = ACTIONS(100),
    [anon_sym_uint200] = ACTIONS(100),
    [anon_sym_uint208] = ACTIONS(100),
    [anon_sym_uint216] = ACTIONS(100),
    [anon_sym_uint224] = ACTIONS(100),
    [anon_sym_uint232] = ACTIONS(100),
    [anon_sym_uint240] = ACTIONS(100),
    [anon_sym_uint248] = ACTIONS(100),
    [anon_sym_uint256] = ACTIONS(100),
    [anon_sym_byte] = ACTIONS(98),
    [anon_sym_bytes] = ACTIONS(98),
    [anon_sym_bytes1] = ACTIONS(98),
    [anon_sym_bytes2] = ACTIONS(98),
    [anon_sym_bytes3] = ACTIONS(98),
    [anon_sym_bytes4] = ACTIONS(100),
    [anon_sym_bytes5] = ACTIONS(100),
    [anon_sym_bytes6] = ACTIONS(100),
    [anon_sym_bytes7] = ACTIONS(100),
    [anon_sym_bytes8] = ACTIONS(100),
    [anon_sym_bytes9] = ACTIONS(100),
    [anon_sym_bytes10] = ACTIONS(100),
    [anon_sym_bytes11] = ACTIONS(100),
    [anon_sym_bytes12] = ACTIONS(100),
    [anon_sym_bytes13] = ACTIONS(100),
    [anon_sym_bytes14] = ACTIONS(100),
    [anon_sym_bytes15] = ACTIONS(100),
    [anon_sym_bytes16] = ACTIONS(100),
    [anon_sym_bytes17] = ACTIONS(100),
    [anon_sym_bytes18] = ACTIONS(100),
    [anon_sym_bytes19] = ACTIONS(100),
    [anon_sym_bytes20] = ACTIONS(100),
    [anon_sym_bytes21] = ACTIONS(100),
    [anon_sym_bytes22] = ACTIONS(100),
    [anon_sym_bytes23] = ACTIONS(100),
    [anon_sym_bytes24] = ACTIONS(100),
    [anon_sym_bytes25] = ACTIONS(100),
    [anon_sym_bytes26] = ACTIONS(100),
    [anon_sym_bytes27] = ACTIONS(100),
    [anon_sym_bytes28] = ACTIONS(100),
    [anon_sym_bytes29] = ACTIONS(100),
    [anon_sym_bytes30] = ACTIONS(100),
    [anon_sym_bytes31] = ACTIONS(100),
    [anon_sym_bytes32] = ACTIONS(100),
    [anon_sym_fixed] = ACTIONS(98),
    [aux_sym__fixed_token1] = ACTIONS(100),
    [anon_sym_ufixed] = ACTIONS(98),
    [aux_sym__ufixed_token1] = ACTIONS(100),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym_identifier] = ACTIONS(102),
    [anon_sym_RBRACE] = ACTIONS(104),
    [anon_sym_struct] = ACTIONS(102),
    [anon_sym_enum] = ACTIONS(102),
    [anon_sym_modifier] = ACTIONS(102),
    [anon_sym_function] = ACTIONS(102),
    [anon_sym_mapping] = ACTIONS(102),
    [anon_sym_address] = ACTIONS(102),
    [anon_sym_bool] = ACTIONS(102),
    [anon_sym_string] = ACTIONS(102),
    [anon_sym_var] = ACTIONS(102),
    [anon_sym_int] = ACTIONS(102),
    [anon_sym_int8] = ACTIONS(102),
    [anon_sym_int16] = ACTIONS(102),
    [anon_sym_int24] = ACTIONS(102),
    [anon_sym_int32] = ACTIONS(104),
    [anon_sym_int40] = ACTIONS(104),
    [anon_sym_int48] = ACTIONS(104),
    [anon_sym_int56] = ACTIONS(104),
    [anon_sym_int64] = ACTIONS(104),
    [anon_sym_int72] = ACTIONS(104),
    [anon_sym_int80] = ACTIONS(104),
    [anon_sym_int88] = ACTIONS(104),
    [anon_sym_int96] = ACTIONS(104),
    [anon_sym_int104] = ACTIONS(104),
    [anon_sym_int112] = ACTIONS(104),
    [anon_sym_int120] = ACTIONS(104),
    [anon_sym_int128] = ACTIONS(104),
    [anon_sym_int136] = ACTIONS(104),
    [anon_sym_int144] = ACTIONS(104),
    [anon_sym_int152] = ACTIONS(104),
    [anon_sym_int160] = ACTIONS(104),
    [anon_sym_int168] = ACTIONS(104),
    [anon_sym_int176] = ACTIONS(104),
    [anon_sym_int184] = ACTIONS(104),
    [anon_sym_int192] = ACTIONS(104),
    [anon_sym_int200] = ACTIONS(104),
    [anon_sym_int208] = ACTIONS(104),
    [anon_sym_int216] = ACTIONS(104),
    [anon_sym_int224] = ACTIONS(104),
    [anon_sym_int232] = ACTIONS(104),
    [anon_sym_int240] = ACTIONS(104),
    [anon_sym_int248] = ACTIONS(104),
    [anon_sym_int256] = ACTIONS(104),
    [anon_sym_uint] = ACTIONS(102),
    [anon_sym_uint8] = ACTIONS(102),
    [anon_sym_uint16] = ACTIONS(102),
    [anon_sym_uint24] = ACTIONS(102),
    [anon_sym_uint32] = ACTIONS(104),
    [anon_sym_uint40] = ACTIONS(104),
    [anon_sym_uint48] = ACTIONS(104),
    [anon_sym_uint56] = ACTIONS(104),
    [anon_sym_uint64] = ACTIONS(104),
    [anon_sym_uint72] = ACTIONS(104),
    [anon_sym_uint80] = ACTIONS(104),
    [anon_sym_uint88] = ACTIONS(104),
    [anon_sym_uint96] = ACTIONS(104),
    [anon_sym_uint104] = ACTIONS(104),
    [anon_sym_uint112] = ACTIONS(104),
    [anon_sym_uint120] = ACTIONS(104),
    [anon_sym_uint128] = ACTIONS(104),
    [anon_sym_uint136] = ACTIONS(104),
    [anon_sym_uint144] = ACTIONS(104),
    [anon_sym_uint152] = ACTIONS(104),
    [anon_sym_uint160] = ACTIONS(104),
    [anon_sym_uint168] = ACTIONS(104),
    [anon_sym_uint176] = ACTIONS(104),
    [anon_sym_uint184] = ACTIONS(104),
    [anon_sym_uint192] = ACTIONS(104),
    [anon_sym_uint200] = ACTIONS(104),
    [anon_sym_uint208] = ACTIONS(104),
    [anon_sym_uint216] = ACTIONS(104),
    [anon_sym_uint224] = ACTIONS(104),
    [anon_sym_uint232] = ACTIONS(104),
    [anon_sym_uint240] = ACTIONS(104),
    [anon_sym_uint248] = ACTIONS(104),
    [anon_sym_uint256] = ACTIONS(104),
    [anon_sym_byte] = ACTIONS(102),
    [anon_sym_bytes] = ACTIONS(102),
    [anon_sym_bytes1] = ACTIONS(102),
    [anon_sym_bytes2] = ACTIONS(102),
    [anon_sym_bytes3] = ACTIONS(102),
    [anon_sym_bytes4] = ACTIONS(104),
    [anon_sym_bytes5] = ACTIONS(104),
    [anon_sym_bytes6] = ACTIONS(104),
    [anon_sym_bytes7] = ACTIONS(104),
    [anon_sym_bytes8] = ACTIONS(104),
    [anon_sym_bytes9] = ACTIONS(104),
    [anon_sym_bytes10] = ACTIONS(104),
    [anon_sym_bytes11] = ACTIONS(104),
    [anon_sym_bytes12] = ACTIONS(104),
    [anon_sym_bytes13] = ACTIONS(104),
    [anon_sym_bytes14] = ACTIONS(104),
    [anon_sym_bytes15] = ACTIONS(104),
    [anon_sym_bytes16] = ACTIONS(104),
    [anon_sym_bytes17] = ACTIONS(104),
    [anon_sym_bytes18] = ACTIONS(104),
    [anon_sym_bytes19] = ACTIONS(104),
    [anon_sym_bytes20] = ACTIONS(104),
    [anon_sym_bytes21] = ACTIONS(104),
    [anon_sym_bytes22] = ACTIONS(104),
    [anon_sym_bytes23] = ACTIONS(104),
    [anon_sym_bytes24] = ACTIONS(104),
    [anon_sym_bytes25] = ACTIONS(104),
    [anon_sym_bytes26] = ACTIONS(104),
    [anon_sym_bytes27] = ACTIONS(104),
    [anon_sym_bytes28] = ACTIONS(104),
    [anon_sym_bytes29] = ACTIONS(104),
    [anon_sym_bytes30] = ACTIONS(104),
    [anon_sym_bytes31] = ACTIONS(104),
    [anon_sym_bytes32] = ACTIONS(104),
    [anon_sym_fixed] = ACTIONS(102),
    [aux_sym__fixed_token1] = ACTIONS(104),
    [anon_sym_ufixed] = ACTIONS(102),
    [aux_sym__ufixed_token1] = ACTIONS(104),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym_identifier] = ACTIONS(106),
    [anon_sym_RBRACE] = ACTIONS(108),
    [anon_sym_struct] = ACTIONS(106),
    [anon_sym_enum] = ACTIONS(106),
    [anon_sym_modifier] = ACTIONS(106),
    [anon_sym_function] = ACTIONS(106),
    [anon_sym_mapping] = ACTIONS(106),
    [anon_sym_address] = ACTIONS(106),
    [anon_sym_bool] = ACTIONS(106),
    [anon_sym_string] = ACTIONS(106),
    [anon_sym_var] = ACTIONS(106),
    [anon_sym_int] = ACTIONS(106),
    [anon_sym_int8] = ACTIONS(106),
    [anon_sym_int16] = ACTIONS(106),
    [anon_sym_int24] = ACTIONS(106),
    [anon_sym_int32] = ACTIONS(108),
    [anon_sym_int40] = ACTIONS(108),
    [anon_sym_int48] = ACTIONS(108),
    [anon_sym_int56] = ACTIONS(108),
    [anon_sym_int64] = ACTIONS(108),
    [anon_sym_int72] = ACTIONS(108),
    [anon_sym_int80] = ACTIONS(108),
    [anon_sym_int88] = ACTIONS(108),
    [anon_sym_int96] = ACTIONS(108),
    [anon_sym_int104] = ACTIONS(108),
    [anon_sym_int112] = ACTIONS(108),
    [anon_sym_int120] = ACTIONS(108),
    [anon_sym_int128] = ACTIONS(108),
    [anon_sym_int136] = ACTIONS(108),
    [anon_sym_int144] = ACTIONS(108),
    [anon_sym_int152] = ACTIONS(108),
    [anon_sym_int160] = ACTIONS(108),
    [anon_sym_int168] = ACTIONS(108),
    [anon_sym_int176] = ACTIONS(108),
    [anon_sym_int184] = ACTIONS(108),
    [anon_sym_int192] = ACTIONS(108),
    [anon_sym_int200] = ACTIONS(108),
    [anon_sym_int208] = ACTIONS(108),
    [anon_sym_int216] = ACTIONS(108),
    [anon_sym_int224] = ACTIONS(108),
    [anon_sym_int232] = ACTIONS(108),
    [anon_sym_int240] = ACTIONS(108),
    [anon_sym_int248] = ACTIONS(108),
    [anon_sym_int256] = ACTIONS(108),
    [anon_sym_uint] = ACTIONS(106),
    [anon_sym_uint8] = ACTIONS(106),
    [anon_sym_uint16] = ACTIONS(106),
    [anon_sym_uint24] = ACTIONS(106),
    [anon_sym_uint32] = ACTIONS(108),
    [anon_sym_uint40] = ACTIONS(108),
    [anon_sym_uint48] = ACTIONS(108),
    [anon_sym_uint56] = ACTIONS(108),
    [anon_sym_uint64] = ACTIONS(108),
    [anon_sym_uint72] = ACTIONS(108),
    [anon_sym_uint80] = ACTIONS(108),
    [anon_sym_uint88] = ACTIONS(108),
    [anon_sym_uint96] = ACTIONS(108),
    [anon_sym_uint104] = ACTIONS(108),
    [anon_sym_uint112] = ACTIONS(108),
    [anon_sym_uint120] = ACTIONS(108),
    [anon_sym_uint128] = ACTIONS(108),
    [anon_sym_uint136] = ACTIONS(108),
    [anon_sym_uint144] = ACTIONS(108),
    [anon_sym_uint152] = ACTIONS(108),
    [anon_sym_uint160] = ACTIONS(108),
    [anon_sym_uint168] = ACTIONS(108),
    [anon_sym_uint176] = ACTIONS(108),
    [anon_sym_uint184] = ACTIONS(108),
    [anon_sym_uint192] = ACTIONS(108),
    [anon_sym_uint200] = ACTIONS(108),
    [anon_sym_uint208] = ACTIONS(108),
    [anon_sym_uint216] = ACTIONS(108),
    [anon_sym_uint224] = ACTIONS(108),
    [anon_sym_uint232] = ACTIONS(108),
    [anon_sym_uint240] = ACTIONS(108),
    [anon_sym_uint248] = ACTIONS(108),
    [anon_sym_uint256] = ACTIONS(108),
    [anon_sym_byte] = ACTIONS(106),
    [anon_sym_bytes] = ACTIONS(106),
    [anon_sym_bytes1] = ACTIONS(106),
    [anon_sym_bytes2] = ACTIONS(106),
    [anon_sym_bytes3] = ACTIONS(106),
    [anon_sym_bytes4] = ACTIONS(108),
    [anon_sym_bytes5] = ACTIONS(108),
    [anon_sym_bytes6] = ACTIONS(108),
    [anon_sym_bytes7] = ACTIONS(108),
    [anon_sym_bytes8] = ACTIONS(108),
    [anon_sym_bytes9] = ACTIONS(108),
    [anon_sym_bytes10] = ACTIONS(108),
    [anon_sym_bytes11] = ACTIONS(108),
    [anon_sym_bytes12] = ACTIONS(108),
    [anon_sym_bytes13] = ACTIONS(108),
    [anon_sym_bytes14] = ACTIONS(108),
    [anon_sym_bytes15] = ACTIONS(108),
    [anon_sym_bytes16] = ACTIONS(108),
    [anon_sym_bytes17] = ACTIONS(108),
    [anon_sym_bytes18] = ACTIONS(108),
    [anon_sym_bytes19] = ACTIONS(108),
    [anon_sym_bytes20] = ACTIONS(108),
    [anon_sym_bytes21] = ACTIONS(108),
    [anon_sym_bytes22] = ACTIONS(108),
    [anon_sym_bytes23] = ACTIONS(108),
    [anon_sym_bytes24] = ACTIONS(108),
    [anon_sym_bytes25] = ACTIONS(108),
    [anon_sym_bytes26] = ACTIONS(108),
    [anon_sym_bytes27] = ACTIONS(108),
    [anon_sym_bytes28] = ACTIONS(108),
    [anon_sym_bytes29] = ACTIONS(108),
    [anon_sym_bytes30] = ACTIONS(108),
    [anon_sym_bytes31] = ACTIONS(108),
    [anon_sym_bytes32] = ACTIONS(108),
    [anon_sym_fixed] = ACTIONS(106),
    [aux_sym__fixed_token1] = ACTIONS(108),
    [anon_sym_ufixed] = ACTIONS(106),
    [aux_sym__ufixed_token1] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_identifier] = ACTIONS(110),
    [anon_sym_RBRACE] = ACTIONS(112),
    [anon_sym_struct] = ACTIONS(110),
    [anon_sym_enum] = ACTIONS(110),
    [anon_sym_modifier] = ACTIONS(110),
    [anon_sym_function] = ACTIONS(110),
    [anon_sym_mapping] = ACTIONS(110),
    [anon_sym_address] = ACTIONS(110),
    [anon_sym_bool] = ACTIONS(110),
    [anon_sym_string] = ACTIONS(110),
    [anon_sym_var] = ACTIONS(110),
    [anon_sym_int] = ACTIONS(110),
    [anon_sym_int8] = ACTIONS(110),
    [anon_sym_int16] = ACTIONS(110),
    [anon_sym_int24] = ACTIONS(110),
    [anon_sym_int32] = ACTIONS(112),
    [anon_sym_int40] = ACTIONS(112),
    [anon_sym_int48] = ACTIONS(112),
    [anon_sym_int56] = ACTIONS(112),
    [anon_sym_int64] = ACTIONS(112),
    [anon_sym_int72] = ACTIONS(112),
    [anon_sym_int80] = ACTIONS(112),
    [anon_sym_int88] = ACTIONS(112),
    [anon_sym_int96] = ACTIONS(112),
    [anon_sym_int104] = ACTIONS(112),
    [anon_sym_int112] = ACTIONS(112),
    [anon_sym_int120] = ACTIONS(112),
    [anon_sym_int128] = ACTIONS(112),
    [anon_sym_int136] = ACTIONS(112),
    [anon_sym_int144] = ACTIONS(112),
    [anon_sym_int152] = ACTIONS(112),
    [anon_sym_int160] = ACTIONS(112),
    [anon_sym_int168] = ACTIONS(112),
    [anon_sym_int176] = ACTIONS(112),
    [anon_sym_int184] = ACTIONS(112),
    [anon_sym_int192] = ACTIONS(112),
    [anon_sym_int200] = ACTIONS(112),
    [anon_sym_int208] = ACTIONS(112),
    [anon_sym_int216] = ACTIONS(112),
    [anon_sym_int224] = ACTIONS(112),
    [anon_sym_int232] = ACTIONS(112),
    [anon_sym_int240] = ACTIONS(112),
    [anon_sym_int248] = ACTIONS(112),
    [anon_sym_int256] = ACTIONS(112),
    [anon_sym_uint] = ACTIONS(110),
    [anon_sym_uint8] = ACTIONS(110),
    [anon_sym_uint16] = ACTIONS(110),
    [anon_sym_uint24] = ACTIONS(110),
    [anon_sym_uint32] = ACTIONS(112),
    [anon_sym_uint40] = ACTIONS(112),
    [anon_sym_uint48] = ACTIONS(112),
    [anon_sym_uint56] = ACTIONS(112),
    [anon_sym_uint64] = ACTIONS(112),
    [anon_sym_uint72] = ACTIONS(112),
    [anon_sym_uint80] = ACTIONS(112),
    [anon_sym_uint88] = ACTIONS(112),
    [anon_sym_uint96] = ACTIONS(112),
    [anon_sym_uint104] = ACTIONS(112),
    [anon_sym_uint112] = ACTIONS(112),
    [anon_sym_uint120] = ACTIONS(112),
    [anon_sym_uint128] = ACTIONS(112),
    [anon_sym_uint136] = ACTIONS(112),
    [anon_sym_uint144] = ACTIONS(112),
    [anon_sym_uint152] = ACTIONS(112),
    [anon_sym_uint160] = ACTIONS(112),
    [anon_sym_uint168] = ACTIONS(112),
    [anon_sym_uint176] = ACTIONS(112),
    [anon_sym_uint184] = ACTIONS(112),
    [anon_sym_uint192] = ACTIONS(112),
    [anon_sym_uint200] = ACTIONS(112),
    [anon_sym_uint208] = ACTIONS(112),
    [anon_sym_uint216] = ACTIONS(112),
    [anon_sym_uint224] = ACTIONS(112),
    [anon_sym_uint232] = ACTIONS(112),
    [anon_sym_uint240] = ACTIONS(112),
    [anon_sym_uint248] = ACTIONS(112),
    [anon_sym_uint256] = ACTIONS(112),
    [anon_sym_byte] = ACTIONS(110),
    [anon_sym_bytes] = ACTIONS(110),
    [anon_sym_bytes1] = ACTIONS(110),
    [anon_sym_bytes2] = ACTIONS(110),
    [anon_sym_bytes3] = ACTIONS(110),
    [anon_sym_bytes4] = ACTIONS(112),
    [anon_sym_bytes5] = ACTIONS(112),
    [anon_sym_bytes6] = ACTIONS(112),
    [anon_sym_bytes7] = ACTIONS(112),
    [anon_sym_bytes8] = ACTIONS(112),
    [anon_sym_bytes9] = ACTIONS(112),
    [anon_sym_bytes10] = ACTIONS(112),
    [anon_sym_bytes11] = ACTIONS(112),
    [anon_sym_bytes12] = ACTIONS(112),
    [anon_sym_bytes13] = ACTIONS(112),
    [anon_sym_bytes14] = ACTIONS(112),
    [anon_sym_bytes15] = ACTIONS(112),
    [anon_sym_bytes16] = ACTIONS(112),
    [anon_sym_bytes17] = ACTIONS(112),
    [anon_sym_bytes18] = ACTIONS(112),
    [anon_sym_bytes19] = ACTIONS(112),
    [anon_sym_bytes20] = ACTIONS(112),
    [anon_sym_bytes21] = ACTIONS(112),
    [anon_sym_bytes22] = ACTIONS(112),
    [anon_sym_bytes23] = ACTIONS(112),
    [anon_sym_bytes24] = ACTIONS(112),
    [anon_sym_bytes25] = ACTIONS(112),
    [anon_sym_bytes26] = ACTIONS(112),
    [anon_sym_bytes27] = ACTIONS(112),
    [anon_sym_bytes28] = ACTIONS(112),
    [anon_sym_bytes29] = ACTIONS(112),
    [anon_sym_bytes30] = ACTIONS(112),
    [anon_sym_bytes31] = ACTIONS(112),
    [anon_sym_bytes32] = ACTIONS(112),
    [anon_sym_fixed] = ACTIONS(110),
    [aux_sym__fixed_token1] = ACTIONS(112),
    [anon_sym_ufixed] = ACTIONS(110),
    [aux_sym__ufixed_token1] = ACTIONS(112),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym_identifier] = ACTIONS(114),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_struct] = ACTIONS(114),
    [anon_sym_enum] = ACTIONS(114),
    [anon_sym_modifier] = ACTIONS(114),
    [anon_sym_function] = ACTIONS(114),
    [anon_sym_mapping] = ACTIONS(114),
    [anon_sym_address] = ACTIONS(114),
    [anon_sym_bool] = ACTIONS(114),
    [anon_sym_string] = ACTIONS(114),
    [anon_sym_var] = ACTIONS(114),
    [anon_sym_int] = ACTIONS(114),
    [anon_sym_int8] = ACTIONS(114),
    [anon_sym_int16] = ACTIONS(114),
    [anon_sym_int24] = ACTIONS(114),
    [anon_sym_int32] = ACTIONS(116),
    [anon_sym_int40] = ACTIONS(116),
    [anon_sym_int48] = ACTIONS(116),
    [anon_sym_int56] = ACTIONS(116),
    [anon_sym_int64] = ACTIONS(116),
    [anon_sym_int72] = ACTIONS(116),
    [anon_sym_int80] = ACTIONS(116),
    [anon_sym_int88] = ACTIONS(116),
    [anon_sym_int96] = ACTIONS(116),
    [anon_sym_int104] = ACTIONS(116),
    [anon_sym_int112] = ACTIONS(116),
    [anon_sym_int120] = ACTIONS(116),
    [anon_sym_int128] = ACTIONS(116),
    [anon_sym_int136] = ACTIONS(116),
    [anon_sym_int144] = ACTIONS(116),
    [anon_sym_int152] = ACTIONS(116),
    [anon_sym_int160] = ACTIONS(116),
    [anon_sym_int168] = ACTIONS(116),
    [anon_sym_int176] = ACTIONS(116),
    [anon_sym_int184] = ACTIONS(116),
    [anon_sym_int192] = ACTIONS(116),
    [anon_sym_int200] = ACTIONS(116),
    [anon_sym_int208] = ACTIONS(116),
    [anon_sym_int216] = ACTIONS(116),
    [anon_sym_int224] = ACTIONS(116),
    [anon_sym_int232] = ACTIONS(116),
    [anon_sym_int240] = ACTIONS(116),
    [anon_sym_int248] = ACTIONS(116),
    [anon_sym_int256] = ACTIONS(116),
    [anon_sym_uint] = ACTIONS(114),
    [anon_sym_uint8] = ACTIONS(114),
    [anon_sym_uint16] = ACTIONS(114),
    [anon_sym_uint24] = ACTIONS(114),
    [anon_sym_uint32] = ACTIONS(116),
    [anon_sym_uint40] = ACTIONS(116),
    [anon_sym_uint48] = ACTIONS(116),
    [anon_sym_uint56] = ACTIONS(116),
    [anon_sym_uint64] = ACTIONS(116),
    [anon_sym_uint72] = ACTIONS(116),
    [anon_sym_uint80] = ACTIONS(116),
    [anon_sym_uint88] = ACTIONS(116),
    [anon_sym_uint96] = ACTIONS(116),
    [anon_sym_uint104] = ACTIONS(116),
    [anon_sym_uint112] = ACTIONS(116),
    [anon_sym_uint120] = ACTIONS(116),
    [anon_sym_uint128] = ACTIONS(116),
    [anon_sym_uint136] = ACTIONS(116),
    [anon_sym_uint144] = ACTIONS(116),
    [anon_sym_uint152] = ACTIONS(116),
    [anon_sym_uint160] = ACTIONS(116),
    [anon_sym_uint168] = ACTIONS(116),
    [anon_sym_uint176] = ACTIONS(116),
    [anon_sym_uint184] = ACTIONS(116),
    [anon_sym_uint192] = ACTIONS(116),
    [anon_sym_uint200] = ACTIONS(116),
    [anon_sym_uint208] = ACTIONS(116),
    [anon_sym_uint216] = ACTIONS(116),
    [anon_sym_uint224] = ACTIONS(116),
    [anon_sym_uint232] = ACTIONS(116),
    [anon_sym_uint240] = ACTIONS(116),
    [anon_sym_uint248] = ACTIONS(116),
    [anon_sym_uint256] = ACTIONS(116),
    [anon_sym_byte] = ACTIONS(114),
    [anon_sym_bytes] = ACTIONS(114),
    [anon_sym_bytes1] = ACTIONS(114),
    [anon_sym_bytes2] = ACTIONS(114),
    [anon_sym_bytes3] = ACTIONS(114),
    [anon_sym_bytes4] = ACTIONS(116),
    [anon_sym_bytes5] = ACTIONS(116),
    [anon_sym_bytes6] = ACTIONS(116),
    [anon_sym_bytes7] = ACTIONS(116),
    [anon_sym_bytes8] = ACTIONS(116),
    [anon_sym_bytes9] = ACTIONS(116),
    [anon_sym_bytes10] = ACTIONS(116),
    [anon_sym_bytes11] = ACTIONS(116),
    [anon_sym_bytes12] = ACTIONS(116),
    [anon_sym_bytes13] = ACTIONS(116),
    [anon_sym_bytes14] = ACTIONS(116),
    [anon_sym_bytes15] = ACTIONS(116),
    [anon_sym_bytes16] = ACTIONS(116),
    [anon_sym_bytes17] = ACTIONS(116),
    [anon_sym_bytes18] = ACTIONS(116),
    [anon_sym_bytes19] = ACTIONS(116),
    [anon_sym_bytes20] = ACTIONS(116),
    [anon_sym_bytes21] = ACTIONS(116),
    [anon_sym_bytes22] = ACTIONS(116),
    [anon_sym_bytes23] = ACTIONS(116),
    [anon_sym_bytes24] = ACTIONS(116),
    [anon_sym_bytes25] = ACTIONS(116),
    [anon_sym_bytes26] = ACTIONS(116),
    [anon_sym_bytes27] = ACTIONS(116),
    [anon_sym_bytes28] = ACTIONS(116),
    [anon_sym_bytes29] = ACTIONS(116),
    [anon_sym_bytes30] = ACTIONS(116),
    [anon_sym_bytes31] = ACTIONS(116),
    [anon_sym_bytes32] = ACTIONS(116),
    [anon_sym_fixed] = ACTIONS(114),
    [aux_sym__fixed_token1] = ACTIONS(116),
    [anon_sym_ufixed] = ACTIONS(114),
    [aux_sym__ufixed_token1] = ACTIONS(116),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_identifier] = ACTIONS(118),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_struct] = ACTIONS(118),
    [anon_sym_enum] = ACTIONS(118),
    [anon_sym_modifier] = ACTIONS(118),
    [anon_sym_function] = ACTIONS(118),
    [anon_sym_mapping] = ACTIONS(118),
    [anon_sym_address] = ACTIONS(118),
    [anon_sym_bool] = ACTIONS(118),
    [anon_sym_string] = ACTIONS(118),
    [anon_sym_var] = ACTIONS(118),
    [anon_sym_int] = ACTIONS(118),
    [anon_sym_int8] = ACTIONS(118),
    [anon_sym_int16] = ACTIONS(118),
    [anon_sym_int24] = ACTIONS(118),
    [anon_sym_int32] = ACTIONS(120),
    [anon_sym_int40] = ACTIONS(120),
    [anon_sym_int48] = ACTIONS(120),
    [anon_sym_int56] = ACTIONS(120),
    [anon_sym_int64] = ACTIONS(120),
    [anon_sym_int72] = ACTIONS(120),
    [anon_sym_int80] = ACTIONS(120),
    [anon_sym_int88] = ACTIONS(120),
    [anon_sym_int96] = ACTIONS(120),
    [anon_sym_int104] = ACTIONS(120),
    [anon_sym_int112] = ACTIONS(120),
    [anon_sym_int120] = ACTIONS(120),
    [anon_sym_int128] = ACTIONS(120),
    [anon_sym_int136] = ACTIONS(120),
    [anon_sym_int144] = ACTIONS(120),
    [anon_sym_int152] = ACTIONS(120),
    [anon_sym_int160] = ACTIONS(120),
    [anon_sym_int168] = ACTIONS(120),
    [anon_sym_int176] = ACTIONS(120),
    [anon_sym_int184] = ACTIONS(120),
    [anon_sym_int192] = ACTIONS(120),
    [anon_sym_int200] = ACTIONS(120),
    [anon_sym_int208] = ACTIONS(120),
    [anon_sym_int216] = ACTIONS(120),
    [anon_sym_int224] = ACTIONS(120),
    [anon_sym_int232] = ACTIONS(120),
    [anon_sym_int240] = ACTIONS(120),
    [anon_sym_int248] = ACTIONS(120),
    [anon_sym_int256] = ACTIONS(120),
    [anon_sym_uint] = ACTIONS(118),
    [anon_sym_uint8] = ACTIONS(118),
    [anon_sym_uint16] = ACTIONS(118),
    [anon_sym_uint24] = ACTIONS(118),
    [anon_sym_uint32] = ACTIONS(120),
    [anon_sym_uint40] = ACTIONS(120),
    [anon_sym_uint48] = ACTIONS(120),
    [anon_sym_uint56] = ACTIONS(120),
    [anon_sym_uint64] = ACTIONS(120),
    [anon_sym_uint72] = ACTIONS(120),
    [anon_sym_uint80] = ACTIONS(120),
    [anon_sym_uint88] = ACTIONS(120),
    [anon_sym_uint96] = ACTIONS(120),
    [anon_sym_uint104] = ACTIONS(120),
    [anon_sym_uint112] = ACTIONS(120),
    [anon_sym_uint120] = ACTIONS(120),
    [anon_sym_uint128] = ACTIONS(120),
    [anon_sym_uint136] = ACTIONS(120),
    [anon_sym_uint144] = ACTIONS(120),
    [anon_sym_uint152] = ACTIONS(120),
    [anon_sym_uint160] = ACTIONS(120),
    [anon_sym_uint168] = ACTIONS(120),
    [anon_sym_uint176] = ACTIONS(120),
    [anon_sym_uint184] = ACTIONS(120),
    [anon_sym_uint192] = ACTIONS(120),
    [anon_sym_uint200] = ACTIONS(120),
    [anon_sym_uint208] = ACTIONS(120),
    [anon_sym_uint216] = ACTIONS(120),
    [anon_sym_uint224] = ACTIONS(120),
    [anon_sym_uint232] = ACTIONS(120),
    [anon_sym_uint240] = ACTIONS(120),
    [anon_sym_uint248] = ACTIONS(120),
    [anon_sym_uint256] = ACTIONS(120),
    [anon_sym_byte] = ACTIONS(118),
    [anon_sym_bytes] = ACTIONS(118),
    [anon_sym_bytes1] = ACTIONS(118),
    [anon_sym_bytes2] = ACTIONS(118),
    [anon_sym_bytes3] = ACTIONS(118),
    [anon_sym_bytes4] = ACTIONS(120),
    [anon_sym_bytes5] = ACTIONS(120),
    [anon_sym_bytes6] = ACTIONS(120),
    [anon_sym_bytes7] = ACTIONS(120),
    [anon_sym_bytes8] = ACTIONS(120),
    [anon_sym_bytes9] = ACTIONS(120),
    [anon_sym_bytes10] = ACTIONS(120),
    [anon_sym_bytes11] = ACTIONS(120),
    [anon_sym_bytes12] = ACTIONS(120),
    [anon_sym_bytes13] = ACTIONS(120),
    [anon_sym_bytes14] = ACTIONS(120),
    [anon_sym_bytes15] = ACTIONS(120),
    [anon_sym_bytes16] = ACTIONS(120),
    [anon_sym_bytes17] = ACTIONS(120),
    [anon_sym_bytes18] = ACTIONS(120),
    [anon_sym_bytes19] = ACTIONS(120),
    [anon_sym_bytes20] = ACTIONS(120),
    [anon_sym_bytes21] = ACTIONS(120),
    [anon_sym_bytes22] = ACTIONS(120),
    [anon_sym_bytes23] = ACTIONS(120),
    [anon_sym_bytes24] = ACTIONS(120),
    [anon_sym_bytes25] = ACTIONS(120),
    [anon_sym_bytes26] = ACTIONS(120),
    [anon_sym_bytes27] = ACTIONS(120),
    [anon_sym_bytes28] = ACTIONS(120),
    [anon_sym_bytes29] = ACTIONS(120),
    [anon_sym_bytes30] = ACTIONS(120),
    [anon_sym_bytes31] = ACTIONS(120),
    [anon_sym_bytes32] = ACTIONS(120),
    [anon_sym_fixed] = ACTIONS(118),
    [aux_sym__fixed_token1] = ACTIONS(120),
    [anon_sym_ufixed] = ACTIONS(118),
    [aux_sym__ufixed_token1] = ACTIONS(120),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym_identifier] = ACTIONS(122),
    [anon_sym_RBRACE] = ACTIONS(124),
    [anon_sym_struct] = ACTIONS(122),
    [anon_sym_enum] = ACTIONS(122),
    [anon_sym_modifier] = ACTIONS(122),
    [anon_sym_function] = ACTIONS(122),
    [anon_sym_mapping] = ACTIONS(122),
    [anon_sym_address] = ACTIONS(122),
    [anon_sym_bool] = ACTIONS(122),
    [anon_sym_string] = ACTIONS(122),
    [anon_sym_var] = ACTIONS(122),
    [anon_sym_int] = ACTIONS(122),
    [anon_sym_int8] = ACTIONS(122),
    [anon_sym_int16] = ACTIONS(122),
    [anon_sym_int24] = ACTIONS(122),
    [anon_sym_int32] = ACTIONS(124),
    [anon_sym_int40] = ACTIONS(124),
    [anon_sym_int48] = ACTIONS(124),
    [anon_sym_int56] = ACTIONS(124),
    [anon_sym_int64] = ACTIONS(124),
    [anon_sym_int72] = ACTIONS(124),
    [anon_sym_int80] = ACTIONS(124),
    [anon_sym_int88] = ACTIONS(124),
    [anon_sym_int96] = ACTIONS(124),
    [anon_sym_int104] = ACTIONS(124),
    [anon_sym_int112] = ACTIONS(124),
    [anon_sym_int120] = ACTIONS(124),
    [anon_sym_int128] = ACTIONS(124),
    [anon_sym_int136] = ACTIONS(124),
    [anon_sym_int144] = ACTIONS(124),
    [anon_sym_int152] = ACTIONS(124),
    [anon_sym_int160] = ACTIONS(124),
    [anon_sym_int168] = ACTIONS(124),
    [anon_sym_int176] = ACTIONS(124),
    [anon_sym_int184] = ACTIONS(124),
    [anon_sym_int192] = ACTIONS(124),
    [anon_sym_int200] = ACTIONS(124),
    [anon_sym_int208] = ACTIONS(124),
    [anon_sym_int216] = ACTIONS(124),
    [anon_sym_int224] = ACTIONS(124),
    [anon_sym_int232] = ACTIONS(124),
    [anon_sym_int240] = ACTIONS(124),
    [anon_sym_int248] = ACTIONS(124),
    [anon_sym_int256] = ACTIONS(124),
    [anon_sym_uint] = ACTIONS(122),
    [anon_sym_uint8] = ACTIONS(122),
    [anon_sym_uint16] = ACTIONS(122),
    [anon_sym_uint24] = ACTIONS(122),
    [anon_sym_uint32] = ACTIONS(124),
    [anon_sym_uint40] = ACTIONS(124),
    [anon_sym_uint48] = ACTIONS(124),
    [anon_sym_uint56] = ACTIONS(124),
    [anon_sym_uint64] = ACTIONS(124),
    [anon_sym_uint72] = ACTIONS(124),
    [anon_sym_uint80] = ACTIONS(124),
    [anon_sym_uint88] = ACTIONS(124),
    [anon_sym_uint96] = ACTIONS(124),
    [anon_sym_uint104] = ACTIONS(124),
    [anon_sym_uint112] = ACTIONS(124),
    [anon_sym_uint120] = ACTIONS(124),
    [anon_sym_uint128] = ACTIONS(124),
    [anon_sym_uint136] = ACTIONS(124),
    [anon_sym_uint144] = ACTIONS(124),
    [anon_sym_uint152] = ACTIONS(124),
    [anon_sym_uint160] = ACTIONS(124),
    [anon_sym_uint168] = ACTIONS(124),
    [anon_sym_uint176] = ACTIONS(124),
    [anon_sym_uint184] = ACTIONS(124),
    [anon_sym_uint192] = ACTIONS(124),
    [anon_sym_uint200] = ACTIONS(124),
    [anon_sym_uint208] = ACTIONS(124),
    [anon_sym_uint216] = ACTIONS(124),
    [anon_sym_uint224] = ACTIONS(124),
    [anon_sym_uint232] = ACTIONS(124),
    [anon_sym_uint240] = ACTIONS(124),
    [anon_sym_uint248] = ACTIONS(124),
    [anon_sym_uint256] = ACTIONS(124),
    [anon_sym_byte] = ACTIONS(122),
    [anon_sym_bytes] = ACTIONS(122),
    [anon_sym_bytes1] = ACTIONS(122),
    [anon_sym_bytes2] = ACTIONS(122),
    [anon_sym_bytes3] = ACTIONS(122),
    [anon_sym_bytes4] = ACTIONS(124),
    [anon_sym_bytes5] = ACTIONS(124),
    [anon_sym_bytes6] = ACTIONS(124),
    [anon_sym_bytes7] = ACTIONS(124),
    [anon_sym_bytes8] = ACTIONS(124),
    [anon_sym_bytes9] = ACTIONS(124),
    [anon_sym_bytes10] = ACTIONS(124),
    [anon_sym_bytes11] = ACTIONS(124),
    [anon_sym_bytes12] = ACTIONS(124),
    [anon_sym_bytes13] = ACTIONS(124),
    [anon_sym_bytes14] = ACTIONS(124),
    [anon_sym_bytes15] = ACTIONS(124),
    [anon_sym_bytes16] = ACTIONS(124),
    [anon_sym_bytes17] = ACTIONS(124),
    [anon_sym_bytes18] = ACTIONS(124),
    [anon_sym_bytes19] = ACTIONS(124),
    [anon_sym_bytes20] = ACTIONS(124),
    [anon_sym_bytes21] = ACTIONS(124),
    [anon_sym_bytes22] = ACTIONS(124),
    [anon_sym_bytes23] = ACTIONS(124),
    [anon_sym_bytes24] = ACTIONS(124),
    [anon_sym_bytes25] = ACTIONS(124),
    [anon_sym_bytes26] = ACTIONS(124),
    [anon_sym_bytes27] = ACTIONS(124),
    [anon_sym_bytes28] = ACTIONS(124),
    [anon_sym_bytes29] = ACTIONS(124),
    [anon_sym_bytes30] = ACTIONS(124),
    [anon_sym_bytes31] = ACTIONS(124),
    [anon_sym_bytes32] = ACTIONS(124),
    [anon_sym_fixed] = ACTIONS(122),
    [aux_sym__fixed_token1] = ACTIONS(124),
    [anon_sym_ufixed] = ACTIONS(122),
    [aux_sym__ufixed_token1] = ACTIONS(124),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym_identifier] = ACTIONS(126),
    [anon_sym_RBRACE] = ACTIONS(128),
    [anon_sym_struct] = ACTIONS(126),
    [anon_sym_enum] = ACTIONS(126),
    [anon_sym_modifier] = ACTIONS(126),
    [anon_sym_function] = ACTIONS(126),
    [anon_sym_mapping] = ACTIONS(126),
    [anon_sym_address] = ACTIONS(126),
    [anon_sym_bool] = ACTIONS(126),
    [anon_sym_string] = ACTIONS(126),
    [anon_sym_var] = ACTIONS(126),
    [anon_sym_int] = ACTIONS(126),
    [anon_sym_int8] = ACTIONS(126),
    [anon_sym_int16] = ACTIONS(126),
    [anon_sym_int24] = ACTIONS(126),
    [anon_sym_int32] = ACTIONS(128),
    [anon_sym_int40] = ACTIONS(128),
    [anon_sym_int48] = ACTIONS(128),
    [anon_sym_int56] = ACTIONS(128),
    [anon_sym_int64] = ACTIONS(128),
    [anon_sym_int72] = ACTIONS(128),
    [anon_sym_int80] = ACTIONS(128),
    [anon_sym_int88] = ACTIONS(128),
    [anon_sym_int96] = ACTIONS(128),
    [anon_sym_int104] = ACTIONS(128),
    [anon_sym_int112] = ACTIONS(128),
    [anon_sym_int120] = ACTIONS(128),
    [anon_sym_int128] = ACTIONS(128),
    [anon_sym_int136] = ACTIONS(128),
    [anon_sym_int144] = ACTIONS(128),
    [anon_sym_int152] = ACTIONS(128),
    [anon_sym_int160] = ACTIONS(128),
    [anon_sym_int168] = ACTIONS(128),
    [anon_sym_int176] = ACTIONS(128),
    [anon_sym_int184] = ACTIONS(128),
    [anon_sym_int192] = ACTIONS(128),
    [anon_sym_int200] = ACTIONS(128),
    [anon_sym_int208] = ACTIONS(128),
    [anon_sym_int216] = ACTIONS(128),
    [anon_sym_int224] = ACTIONS(128),
    [anon_sym_int232] = ACTIONS(128),
    [anon_sym_int240] = ACTIONS(128),
    [anon_sym_int248] = ACTIONS(128),
    [anon_sym_int256] = ACTIONS(128),
    [anon_sym_uint] = ACTIONS(126),
    [anon_sym_uint8] = ACTIONS(126),
    [anon_sym_uint16] = ACTIONS(126),
    [anon_sym_uint24] = ACTIONS(126),
    [anon_sym_uint32] = ACTIONS(128),
    [anon_sym_uint40] = ACTIONS(128),
    [anon_sym_uint48] = ACTIONS(128),
    [anon_sym_uint56] = ACTIONS(128),
    [anon_sym_uint64] = ACTIONS(128),
    [anon_sym_uint72] = ACTIONS(128),
    [anon_sym_uint80] = ACTIONS(128),
    [anon_sym_uint88] = ACTIONS(128),
    [anon_sym_uint96] = ACTIONS(128),
    [anon_sym_uint104] = ACTIONS(128),
    [anon_sym_uint112] = ACTIONS(128),
    [anon_sym_uint120] = ACTIONS(128),
    [anon_sym_uint128] = ACTIONS(128),
    [anon_sym_uint136] = ACTIONS(128),
    [anon_sym_uint144] = ACTIONS(128),
    [anon_sym_uint152] = ACTIONS(128),
    [anon_sym_uint160] = ACTIONS(128),
    [anon_sym_uint168] = ACTIONS(128),
    [anon_sym_uint176] = ACTIONS(128),
    [anon_sym_uint184] = ACTIONS(128),
    [anon_sym_uint192] = ACTIONS(128),
    [anon_sym_uint200] = ACTIONS(128),
    [anon_sym_uint208] = ACTIONS(128),
    [anon_sym_uint216] = ACTIONS(128),
    [anon_sym_uint224] = ACTIONS(128),
    [anon_sym_uint232] = ACTIONS(128),
    [anon_sym_uint240] = ACTIONS(128),
    [anon_sym_uint248] = ACTIONS(128),
    [anon_sym_uint256] = ACTIONS(128),
    [anon_sym_byte] = ACTIONS(126),
    [anon_sym_bytes] = ACTIONS(126),
    [anon_sym_bytes1] = ACTIONS(126),
    [anon_sym_bytes2] = ACTIONS(126),
    [anon_sym_bytes3] = ACTIONS(126),
    [anon_sym_bytes4] = ACTIONS(128),
    [anon_sym_bytes5] = ACTIONS(128),
    [anon_sym_bytes6] = ACTIONS(128),
    [anon_sym_bytes7] = ACTIONS(128),
    [anon_sym_bytes8] = ACTIONS(128),
    [anon_sym_bytes9] = ACTIONS(128),
    [anon_sym_bytes10] = ACTIONS(128),
    [anon_sym_bytes11] = ACTIONS(128),
    [anon_sym_bytes12] = ACTIONS(128),
    [anon_sym_bytes13] = ACTIONS(128),
    [anon_sym_bytes14] = ACTIONS(128),
    [anon_sym_bytes15] = ACTIONS(128),
    [anon_sym_bytes16] = ACTIONS(128),
    [anon_sym_bytes17] = ACTIONS(128),
    [anon_sym_bytes18] = ACTIONS(128),
    [anon_sym_bytes19] = ACTIONS(128),
    [anon_sym_bytes20] = ACTIONS(128),
    [anon_sym_bytes21] = ACTIONS(128),
    [anon_sym_bytes22] = ACTIONS(128),
    [anon_sym_bytes23] = ACTIONS(128),
    [anon_sym_bytes24] = ACTIONS(128),
    [anon_sym_bytes25] = ACTIONS(128),
    [anon_sym_bytes26] = ACTIONS(128),
    [anon_sym_bytes27] = ACTIONS(128),
    [anon_sym_bytes28] = ACTIONS(128),
    [anon_sym_bytes29] = ACTIONS(128),
    [anon_sym_bytes30] = ACTIONS(128),
    [anon_sym_bytes31] = ACTIONS(128),
    [anon_sym_bytes32] = ACTIONS(128),
    [anon_sym_fixed] = ACTIONS(126),
    [aux_sym__fixed_token1] = ACTIONS(128),
    [anon_sym_ufixed] = ACTIONS(126),
    [aux_sym__ufixed_token1] = ACTIONS(128),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym_identifier] = ACTIONS(130),
    [anon_sym_RBRACE] = ACTIONS(132),
    [anon_sym_struct] = ACTIONS(130),
    [anon_sym_enum] = ACTIONS(130),
    [anon_sym_modifier] = ACTIONS(130),
    [anon_sym_function] = ACTIONS(130),
    [anon_sym_mapping] = ACTIONS(130),
    [anon_sym_address] = ACTIONS(130),
    [anon_sym_bool] = ACTIONS(130),
    [anon_sym_string] = ACTIONS(130),
    [anon_sym_var] = ACTIONS(130),
    [anon_sym_int] = ACTIONS(130),
    [anon_sym_int8] = ACTIONS(130),
    [anon_sym_int16] = ACTIONS(130),
    [anon_sym_int24] = ACTIONS(130),
    [anon_sym_int32] = ACTIONS(132),
    [anon_sym_int40] = ACTIONS(132),
    [anon_sym_int48] = ACTIONS(132),
    [anon_sym_int56] = ACTIONS(132),
    [anon_sym_int64] = ACTIONS(132),
    [anon_sym_int72] = ACTIONS(132),
    [anon_sym_int80] = ACTIONS(132),
    [anon_sym_int88] = ACTIONS(132),
    [anon_sym_int96] = ACTIONS(132),
    [anon_sym_int104] = ACTIONS(132),
    [anon_sym_int112] = ACTIONS(132),
    [anon_sym_int120] = ACTIONS(132),
    [anon_sym_int128] = ACTIONS(132),
    [anon_sym_int136] = ACTIONS(132),
    [anon_sym_int144] = ACTIONS(132),
    [anon_sym_int152] = ACTIONS(132),
    [anon_sym_int160] = ACTIONS(132),
    [anon_sym_int168] = ACTIONS(132),
    [anon_sym_int176] = ACTIONS(132),
    [anon_sym_int184] = ACTIONS(132),
    [anon_sym_int192] = ACTIONS(132),
    [anon_sym_int200] = ACTIONS(132),
    [anon_sym_int208] = ACTIONS(132),
    [anon_sym_int216] = ACTIONS(132),
    [anon_sym_int224] = ACTIONS(132),
    [anon_sym_int232] = ACTIONS(132),
    [anon_sym_int240] = ACTIONS(132),
    [anon_sym_int248] = ACTIONS(132),
    [anon_sym_int256] = ACTIONS(132),
    [anon_sym_uint] = ACTIONS(130),
    [anon_sym_uint8] = ACTIONS(130),
    [anon_sym_uint16] = ACTIONS(130),
    [anon_sym_uint24] = ACTIONS(130),
    [anon_sym_uint32] = ACTIONS(132),
    [anon_sym_uint40] = ACTIONS(132),
    [anon_sym_uint48] = ACTIONS(132),
    [anon_sym_uint56] = ACTIONS(132),
    [anon_sym_uint64] = ACTIONS(132),
    [anon_sym_uint72] = ACTIONS(132),
    [anon_sym_uint80] = ACTIONS(132),
    [anon_sym_uint88] = ACTIONS(132),
    [anon_sym_uint96] = ACTIONS(132),
    [anon_sym_uint104] = ACTIONS(132),
    [anon_sym_uint112] = ACTIONS(132),
    [anon_sym_uint120] = ACTIONS(132),
    [anon_sym_uint128] = ACTIONS(132),
    [anon_sym_uint136] = ACTIONS(132),
    [anon_sym_uint144] = ACTIONS(132),
    [anon_sym_uint152] = ACTIONS(132),
    [anon_sym_uint160] = ACTIONS(132),
    [anon_sym_uint168] = ACTIONS(132),
    [anon_sym_uint176] = ACTIONS(132),
    [anon_sym_uint184] = ACTIONS(132),
    [anon_sym_uint192] = ACTIONS(132),
    [anon_sym_uint200] = ACTIONS(132),
    [anon_sym_uint208] = ACTIONS(132),
    [anon_sym_uint216] = ACTIONS(132),
    [anon_sym_uint224] = ACTIONS(132),
    [anon_sym_uint232] = ACTIONS(132),
    [anon_sym_uint240] = ACTIONS(132),
    [anon_sym_uint248] = ACTIONS(132),
    [anon_sym_uint256] = ACTIONS(132),
    [anon_sym_byte] = ACTIONS(130),
    [anon_sym_bytes] = ACTIONS(130),
    [anon_sym_bytes1] = ACTIONS(130),
    [anon_sym_bytes2] = ACTIONS(130),
    [anon_sym_bytes3] = ACTIONS(130),
    [anon_sym_bytes4] = ACTIONS(132),
    [anon_sym_bytes5] = ACTIONS(132),
    [anon_sym_bytes6] = ACTIONS(132),
    [anon_sym_bytes7] = ACTIONS(132),
    [anon_sym_bytes8] = ACTIONS(132),
    [anon_sym_bytes9] = ACTIONS(132),
    [anon_sym_bytes10] = ACTIONS(132),
    [anon_sym_bytes11] = ACTIONS(132),
    [anon_sym_bytes12] = ACTIONS(132),
    [anon_sym_bytes13] = ACTIONS(132),
    [anon_sym_bytes14] = ACTIONS(132),
    [anon_sym_bytes15] = ACTIONS(132),
    [anon_sym_bytes16] = ACTIONS(132),
    [anon_sym_bytes17] = ACTIONS(132),
    [anon_sym_bytes18] = ACTIONS(132),
    [anon_sym_bytes19] = ACTIONS(132),
    [anon_sym_bytes20] = ACTIONS(132),
    [anon_sym_bytes21] = ACTIONS(132),
    [anon_sym_bytes22] = ACTIONS(132),
    [anon_sym_bytes23] = ACTIONS(132),
    [anon_sym_bytes24] = ACTIONS(132),
    [anon_sym_bytes25] = ACTIONS(132),
    [anon_sym_bytes26] = ACTIONS(132),
    [anon_sym_bytes27] = ACTIONS(132),
    [anon_sym_bytes28] = ACTIONS(132),
    [anon_sym_bytes29] = ACTIONS(132),
    [anon_sym_bytes30] = ACTIONS(132),
    [anon_sym_bytes31] = ACTIONS(132),
    [anon_sym_bytes32] = ACTIONS(132),
    [anon_sym_fixed] = ACTIONS(130),
    [aux_sym__fixed_token1] = ACTIONS(132),
    [anon_sym_ufixed] = ACTIONS(130),
    [aux_sym__ufixed_token1] = ACTIONS(132),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym_identifier] = ACTIONS(134),
    [anon_sym_RBRACE] = ACTIONS(136),
    [anon_sym_struct] = ACTIONS(134),
    [anon_sym_enum] = ACTIONS(134),
    [anon_sym_modifier] = ACTIONS(134),
    [anon_sym_function] = ACTIONS(134),
    [anon_sym_mapping] = ACTIONS(134),
    [anon_sym_address] = ACTIONS(134),
    [anon_sym_bool] = ACTIONS(134),
    [anon_sym_string] = ACTIONS(134),
    [anon_sym_var] = ACTIONS(134),
    [anon_sym_int] = ACTIONS(134),
    [anon_sym_int8] = ACTIONS(134),
    [anon_sym_int16] = ACTIONS(134),
    [anon_sym_int24] = ACTIONS(134),
    [anon_sym_int32] = ACTIONS(136),
    [anon_sym_int40] = ACTIONS(136),
    [anon_sym_int48] = ACTIONS(136),
    [anon_sym_int56] = ACTIONS(136),
    [anon_sym_int64] = ACTIONS(136),
    [anon_sym_int72] = ACTIONS(136),
    [anon_sym_int80] = ACTIONS(136),
    [anon_sym_int88] = ACTIONS(136),
    [anon_sym_int96] = ACTIONS(136),
    [anon_sym_int104] = ACTIONS(136),
    [anon_sym_int112] = ACTIONS(136),
    [anon_sym_int120] = ACTIONS(136),
    [anon_sym_int128] = ACTIONS(136),
    [anon_sym_int136] = ACTIONS(136),
    [anon_sym_int144] = ACTIONS(136),
    [anon_sym_int152] = ACTIONS(136),
    [anon_sym_int160] = ACTIONS(136),
    [anon_sym_int168] = ACTIONS(136),
    [anon_sym_int176] = ACTIONS(136),
    [anon_sym_int184] = ACTIONS(136),
    [anon_sym_int192] = ACTIONS(136),
    [anon_sym_int200] = ACTIONS(136),
    [anon_sym_int208] = ACTIONS(136),
    [anon_sym_int216] = ACTIONS(136),
    [anon_sym_int224] = ACTIONS(136),
    [anon_sym_int232] = ACTIONS(136),
    [anon_sym_int240] = ACTIONS(136),
    [anon_sym_int248] = ACTIONS(136),
    [anon_sym_int256] = ACTIONS(136),
    [anon_sym_uint] = ACTIONS(134),
    [anon_sym_uint8] = ACTIONS(134),
    [anon_sym_uint16] = ACTIONS(134),
    [anon_sym_uint24] = ACTIONS(134),
    [anon_sym_uint32] = ACTIONS(136),
    [anon_sym_uint40] = ACTIONS(136),
    [anon_sym_uint48] = ACTIONS(136),
    [anon_sym_uint56] = ACTIONS(136),
    [anon_sym_uint64] = ACTIONS(136),
    [anon_sym_uint72] = ACTIONS(136),
    [anon_sym_uint80] = ACTIONS(136),
    [anon_sym_uint88] = ACTIONS(136),
    [anon_sym_uint96] = ACTIONS(136),
    [anon_sym_uint104] = ACTIONS(136),
    [anon_sym_uint112] = ACTIONS(136),
    [anon_sym_uint120] = ACTIONS(136),
    [anon_sym_uint128] = ACTIONS(136),
    [anon_sym_uint136] = ACTIONS(136),
    [anon_sym_uint144] = ACTIONS(136),
    [anon_sym_uint152] = ACTIONS(136),
    [anon_sym_uint160] = ACTIONS(136),
    [anon_sym_uint168] = ACTIONS(136),
    [anon_sym_uint176] = ACTIONS(136),
    [anon_sym_uint184] = ACTIONS(136),
    [anon_sym_uint192] = ACTIONS(136),
    [anon_sym_uint200] = ACTIONS(136),
    [anon_sym_uint208] = ACTIONS(136),
    [anon_sym_uint216] = ACTIONS(136),
    [anon_sym_uint224] = ACTIONS(136),
    [anon_sym_uint232] = ACTIONS(136),
    [anon_sym_uint240] = ACTIONS(136),
    [anon_sym_uint248] = ACTIONS(136),
    [anon_sym_uint256] = ACTIONS(136),
    [anon_sym_byte] = ACTIONS(134),
    [anon_sym_bytes] = ACTIONS(134),
    [anon_sym_bytes1] = ACTIONS(134),
    [anon_sym_bytes2] = ACTIONS(134),
    [anon_sym_bytes3] = ACTIONS(134),
    [anon_sym_bytes4] = ACTIONS(136),
    [anon_sym_bytes5] = ACTIONS(136),
    [anon_sym_bytes6] = ACTIONS(136),
    [anon_sym_bytes7] = ACTIONS(136),
    [anon_sym_bytes8] = ACTIONS(136),
    [anon_sym_bytes9] = ACTIONS(136),
    [anon_sym_bytes10] = ACTIONS(136),
    [anon_sym_bytes11] = ACTIONS(136),
    [anon_sym_bytes12] = ACTIONS(136),
    [anon_sym_bytes13] = ACTIONS(136),
    [anon_sym_bytes14] = ACTIONS(136),
    [anon_sym_bytes15] = ACTIONS(136),
    [anon_sym_bytes16] = ACTIONS(136),
    [anon_sym_bytes17] = ACTIONS(136),
    [anon_sym_bytes18] = ACTIONS(136),
    [anon_sym_bytes19] = ACTIONS(136),
    [anon_sym_bytes20] = ACTIONS(136),
    [anon_sym_bytes21] = ACTIONS(136),
    [anon_sym_bytes22] = ACTIONS(136),
    [anon_sym_bytes23] = ACTIONS(136),
    [anon_sym_bytes24] = ACTIONS(136),
    [anon_sym_bytes25] = ACTIONS(136),
    [anon_sym_bytes26] = ACTIONS(136),
    [anon_sym_bytes27] = ACTIONS(136),
    [anon_sym_bytes28] = ACTIONS(136),
    [anon_sym_bytes29] = ACTIONS(136),
    [anon_sym_bytes30] = ACTIONS(136),
    [anon_sym_bytes31] = ACTIONS(136),
    [anon_sym_bytes32] = ACTIONS(136),
    [anon_sym_fixed] = ACTIONS(134),
    [aux_sym__fixed_token1] = ACTIONS(136),
    [anon_sym_ufixed] = ACTIONS(134),
    [aux_sym__ufixed_token1] = ACTIONS(136),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym_identifier] = ACTIONS(138),
    [anon_sym_RBRACE] = ACTIONS(140),
    [anon_sym_struct] = ACTIONS(138),
    [anon_sym_enum] = ACTIONS(138),
    [anon_sym_modifier] = ACTIONS(138),
    [anon_sym_function] = ACTIONS(138),
    [anon_sym_mapping] = ACTIONS(138),
    [anon_sym_address] = ACTIONS(138),
    [anon_sym_bool] = ACTIONS(138),
    [anon_sym_string] = ACTIONS(138),
    [anon_sym_var] = ACTIONS(138),
    [anon_sym_int] = ACTIONS(138),
    [anon_sym_int8] = ACTIONS(138),
    [anon_sym_int16] = ACTIONS(138),
    [anon_sym_int24] = ACTIONS(138),
    [anon_sym_int32] = ACTIONS(140),
    [anon_sym_int40] = ACTIONS(140),
    [anon_sym_int48] = ACTIONS(140),
    [anon_sym_int56] = ACTIONS(140),
    [anon_sym_int64] = ACTIONS(140),
    [anon_sym_int72] = ACTIONS(140),
    [anon_sym_int80] = ACTIONS(140),
    [anon_sym_int88] = ACTIONS(140),
    [anon_sym_int96] = ACTIONS(140),
    [anon_sym_int104] = ACTIONS(140),
    [anon_sym_int112] = ACTIONS(140),
    [anon_sym_int120] = ACTIONS(140),
    [anon_sym_int128] = ACTIONS(140),
    [anon_sym_int136] = ACTIONS(140),
    [anon_sym_int144] = ACTIONS(140),
    [anon_sym_int152] = ACTIONS(140),
    [anon_sym_int160] = ACTIONS(140),
    [anon_sym_int168] = ACTIONS(140),
    [anon_sym_int176] = ACTIONS(140),
    [anon_sym_int184] = ACTIONS(140),
    [anon_sym_int192] = ACTIONS(140),
    [anon_sym_int200] = ACTIONS(140),
    [anon_sym_int208] = ACTIONS(140),
    [anon_sym_int216] = ACTIONS(140),
    [anon_sym_int224] = ACTIONS(140),
    [anon_sym_int232] = ACTIONS(140),
    [anon_sym_int240] = ACTIONS(140),
    [anon_sym_int248] = ACTIONS(140),
    [anon_sym_int256] = ACTIONS(140),
    [anon_sym_uint] = ACTIONS(138),
    [anon_sym_uint8] = ACTIONS(138),
    [anon_sym_uint16] = ACTIONS(138),
    [anon_sym_uint24] = ACTIONS(138),
    [anon_sym_uint32] = ACTIONS(140),
    [anon_sym_uint40] = ACTIONS(140),
    [anon_sym_uint48] = ACTIONS(140),
    [anon_sym_uint56] = ACTIONS(140),
    [anon_sym_uint64] = ACTIONS(140),
    [anon_sym_uint72] = ACTIONS(140),
    [anon_sym_uint80] = ACTIONS(140),
    [anon_sym_uint88] = ACTIONS(140),
    [anon_sym_uint96] = ACTIONS(140),
    [anon_sym_uint104] = ACTIONS(140),
    [anon_sym_uint112] = ACTIONS(140),
    [anon_sym_uint120] = ACTIONS(140),
    [anon_sym_uint128] = ACTIONS(140),
    [anon_sym_uint136] = ACTIONS(140),
    [anon_sym_uint144] = ACTIONS(140),
    [anon_sym_uint152] = ACTIONS(140),
    [anon_sym_uint160] = ACTIONS(140),
    [anon_sym_uint168] = ACTIONS(140),
    [anon_sym_uint176] = ACTIONS(140),
    [anon_sym_uint184] = ACTIONS(140),
    [anon_sym_uint192] = ACTIONS(140),
    [anon_sym_uint200] = ACTIONS(140),
    [anon_sym_uint208] = ACTIONS(140),
    [anon_sym_uint216] = ACTIONS(140),
    [anon_sym_uint224] = ACTIONS(140),
    [anon_sym_uint232] = ACTIONS(140),
    [anon_sym_uint240] = ACTIONS(140),
    [anon_sym_uint248] = ACTIONS(140),
    [anon_sym_uint256] = ACTIONS(140),
    [anon_sym_byte] = ACTIONS(138),
    [anon_sym_bytes] = ACTIONS(138),
    [anon_sym_bytes1] = ACTIONS(138),
    [anon_sym_bytes2] = ACTIONS(138),
    [anon_sym_bytes3] = ACTIONS(138),
    [anon_sym_bytes4] = ACTIONS(140),
    [anon_sym_bytes5] = ACTIONS(140),
    [anon_sym_bytes6] = ACTIONS(140),
    [anon_sym_bytes7] = ACTIONS(140),
    [anon_sym_bytes8] = ACTIONS(140),
    [anon_sym_bytes9] = ACTIONS(140),
    [anon_sym_bytes10] = ACTIONS(140),
    [anon_sym_bytes11] = ACTIONS(140),
    [anon_sym_bytes12] = ACTIONS(140),
    [anon_sym_bytes13] = ACTIONS(140),
    [anon_sym_bytes14] = ACTIONS(140),
    [anon_sym_bytes15] = ACTIONS(140),
    [anon_sym_bytes16] = ACTIONS(140),
    [anon_sym_bytes17] = ACTIONS(140),
    [anon_sym_bytes18] = ACTIONS(140),
    [anon_sym_bytes19] = ACTIONS(140),
    [anon_sym_bytes20] = ACTIONS(140),
    [anon_sym_bytes21] = ACTIONS(140),
    [anon_sym_bytes22] = ACTIONS(140),
    [anon_sym_bytes23] = ACTIONS(140),
    [anon_sym_bytes24] = ACTIONS(140),
    [anon_sym_bytes25] = ACTIONS(140),
    [anon_sym_bytes26] = ACTIONS(140),
    [anon_sym_bytes27] = ACTIONS(140),
    [anon_sym_bytes28] = ACTIONS(140),
    [anon_sym_bytes29] = ACTIONS(140),
    [anon_sym_bytes30] = ACTIONS(140),
    [anon_sym_bytes31] = ACTIONS(140),
    [anon_sym_bytes32] = ACTIONS(140),
    [anon_sym_fixed] = ACTIONS(138),
    [aux_sym__fixed_token1] = ACTIONS(140),
    [anon_sym_ufixed] = ACTIONS(138),
    [aux_sym__ufixed_token1] = ACTIONS(140),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [sym_identifier] = ACTIONS(142),
    [anon_sym_RBRACE] = ACTIONS(144),
    [anon_sym_struct] = ACTIONS(142),
    [anon_sym_enum] = ACTIONS(142),
    [anon_sym_modifier] = ACTIONS(142),
    [anon_sym_function] = ACTIONS(142),
    [anon_sym_mapping] = ACTIONS(142),
    [anon_sym_address] = ACTIONS(142),
    [anon_sym_bool] = ACTIONS(142),
    [anon_sym_string] = ACTIONS(142),
    [anon_sym_var] = ACTIONS(142),
    [anon_sym_int] = ACTIONS(142),
    [anon_sym_int8] = ACTIONS(142),
    [anon_sym_int16] = ACTIONS(142),
    [anon_sym_int24] = ACTIONS(142),
    [anon_sym_int32] = ACTIONS(144),
    [anon_sym_int40] = ACTIONS(144),
    [anon_sym_int48] = ACTIONS(144),
    [anon_sym_int56] = ACTIONS(144),
    [anon_sym_int64] = ACTIONS(144),
    [anon_sym_int72] = ACTIONS(144),
    [anon_sym_int80] = ACTIONS(144),
    [anon_sym_int88] = ACTIONS(144),
    [anon_sym_int96] = ACTIONS(144),
    [anon_sym_int104] = ACTIONS(144),
    [anon_sym_int112] = ACTIONS(144),
    [anon_sym_int120] = ACTIONS(144),
    [anon_sym_int128] = ACTIONS(144),
    [anon_sym_int136] = ACTIONS(144),
    [anon_sym_int144] = ACTIONS(144),
    [anon_sym_int152] = ACTIONS(144),
    [anon_sym_int160] = ACTIONS(144),
    [anon_sym_int168] = ACTIONS(144),
    [anon_sym_int176] = ACTIONS(144),
    [anon_sym_int184] = ACTIONS(144),
    [anon_sym_int192] = ACTIONS(144),
    [anon_sym_int200] = ACTIONS(144),
    [anon_sym_int208] = ACTIONS(144),
    [anon_sym_int216] = ACTIONS(144),
    [anon_sym_int224] = ACTIONS(144),
    [anon_sym_int232] = ACTIONS(144),
    [anon_sym_int240] = ACTIONS(144),
    [anon_sym_int248] = ACTIONS(144),
    [anon_sym_int256] = ACTIONS(144),
    [anon_sym_uint] = ACTIONS(142),
    [anon_sym_uint8] = ACTIONS(142),
    [anon_sym_uint16] = ACTIONS(142),
    [anon_sym_uint24] = ACTIONS(142),
    [anon_sym_uint32] = ACTIONS(144),
    [anon_sym_uint40] = ACTIONS(144),
    [anon_sym_uint48] = ACTIONS(144),
    [anon_sym_uint56] = ACTIONS(144),
    [anon_sym_uint64] = ACTIONS(144),
    [anon_sym_uint72] = ACTIONS(144),
    [anon_sym_uint80] = ACTIONS(144),
    [anon_sym_uint88] = ACTIONS(144),
    [anon_sym_uint96] = ACTIONS(144),
    [anon_sym_uint104] = ACTIONS(144),
    [anon_sym_uint112] = ACTIONS(144),
    [anon_sym_uint120] = ACTIONS(144),
    [anon_sym_uint128] = ACTIONS(144),
    [anon_sym_uint136] = ACTIONS(144),
    [anon_sym_uint144] = ACTIONS(144),
    [anon_sym_uint152] = ACTIONS(144),
    [anon_sym_uint160] = ACTIONS(144),
    [anon_sym_uint168] = ACTIONS(144),
    [anon_sym_uint176] = ACTIONS(144),
    [anon_sym_uint184] = ACTIONS(144),
    [anon_sym_uint192] = ACTIONS(144),
    [anon_sym_uint200] = ACTIONS(144),
    [anon_sym_uint208] = ACTIONS(144),
    [anon_sym_uint216] = ACTIONS(144),
    [anon_sym_uint224] = ACTIONS(144),
    [anon_sym_uint232] = ACTIONS(144),
    [anon_sym_uint240] = ACTIONS(144),
    [anon_sym_uint248] = ACTIONS(144),
    [anon_sym_uint256] = ACTIONS(144),
    [anon_sym_byte] = ACTIONS(142),
    [anon_sym_bytes] = ACTIONS(142),
    [anon_sym_bytes1] = ACTIONS(142),
    [anon_sym_bytes2] = ACTIONS(142),
    [anon_sym_bytes3] = ACTIONS(142),
    [anon_sym_bytes4] = ACTIONS(144),
    [anon_sym_bytes5] = ACTIONS(144),
    [anon_sym_bytes6] = ACTIONS(144),
    [anon_sym_bytes7] = ACTIONS(144),
    [anon_sym_bytes8] = ACTIONS(144),
    [anon_sym_bytes9] = ACTIONS(144),
    [anon_sym_bytes10] = ACTIONS(144),
    [anon_sym_bytes11] = ACTIONS(144),
    [anon_sym_bytes12] = ACTIONS(144),
    [anon_sym_bytes13] = ACTIONS(144),
    [anon_sym_bytes14] = ACTIONS(144),
    [anon_sym_bytes15] = ACTIONS(144),
    [anon_sym_bytes16] = ACTIONS(144),
    [anon_sym_bytes17] = ACTIONS(144),
    [anon_sym_bytes18] = ACTIONS(144),
    [anon_sym_bytes19] = ACTIONS(144),
    [anon_sym_bytes20] = ACTIONS(144),
    [anon_sym_bytes21] = ACTIONS(144),
    [anon_sym_bytes22] = ACTIONS(144),
    [anon_sym_bytes23] = ACTIONS(144),
    [anon_sym_bytes24] = ACTIONS(144),
    [anon_sym_bytes25] = ACTIONS(144),
    [anon_sym_bytes26] = ACTIONS(144),
    [anon_sym_bytes27] = ACTIONS(144),
    [anon_sym_bytes28] = ACTIONS(144),
    [anon_sym_bytes29] = ACTIONS(144),
    [anon_sym_bytes30] = ACTIONS(144),
    [anon_sym_bytes31] = ACTIONS(144),
    [anon_sym_bytes32] = ACTIONS(144),
    [anon_sym_fixed] = ACTIONS(142),
    [aux_sym__fixed_token1] = ACTIONS(144),
    [anon_sym_ufixed] = ACTIONS(142),
    [aux_sym__ufixed_token1] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym_identifier] = ACTIONS(146),
    [anon_sym_RBRACE] = ACTIONS(148),
    [anon_sym_struct] = ACTIONS(146),
    [anon_sym_enum] = ACTIONS(146),
    [anon_sym_modifier] = ACTIONS(146),
    [anon_sym_function] = ACTIONS(146),
    [anon_sym_mapping] = ACTIONS(146),
    [anon_sym_address] = ACTIONS(146),
    [anon_sym_bool] = ACTIONS(146),
    [anon_sym_string] = ACTIONS(146),
    [anon_sym_var] = ACTIONS(146),
    [anon_sym_int] = ACTIONS(146),
    [anon_sym_int8] = ACTIONS(146),
    [anon_sym_int16] = ACTIONS(146),
    [anon_sym_int24] = ACTIONS(146),
    [anon_sym_int32] = ACTIONS(148),
    [anon_sym_int40] = ACTIONS(148),
    [anon_sym_int48] = ACTIONS(148),
    [anon_sym_int56] = ACTIONS(148),
    [anon_sym_int64] = ACTIONS(148),
    [anon_sym_int72] = ACTIONS(148),
    [anon_sym_int80] = ACTIONS(148),
    [anon_sym_int88] = ACTIONS(148),
    [anon_sym_int96] = ACTIONS(148),
    [anon_sym_int104] = ACTIONS(148),
    [anon_sym_int112] = ACTIONS(148),
    [anon_sym_int120] = ACTIONS(148),
    [anon_sym_int128] = ACTIONS(148),
    [anon_sym_int136] = ACTIONS(148),
    [anon_sym_int144] = ACTIONS(148),
    [anon_sym_int152] = ACTIONS(148),
    [anon_sym_int160] = ACTIONS(148),
    [anon_sym_int168] = ACTIONS(148),
    [anon_sym_int176] = ACTIONS(148),
    [anon_sym_int184] = ACTIONS(148),
    [anon_sym_int192] = ACTIONS(148),
    [anon_sym_int200] = ACTIONS(148),
    [anon_sym_int208] = ACTIONS(148),
    [anon_sym_int216] = ACTIONS(148),
    [anon_sym_int224] = ACTIONS(148),
    [anon_sym_int232] = ACTIONS(148),
    [anon_sym_int240] = ACTIONS(148),
    [anon_sym_int248] = ACTIONS(148),
    [anon_sym_int256] = ACTIONS(148),
    [anon_sym_uint] = ACTIONS(146),
    [anon_sym_uint8] = ACTIONS(146),
    [anon_sym_uint16] = ACTIONS(146),
    [anon_sym_uint24] = ACTIONS(146),
    [anon_sym_uint32] = ACTIONS(148),
    [anon_sym_uint40] = ACTIONS(148),
    [anon_sym_uint48] = ACTIONS(148),
    [anon_sym_uint56] = ACTIONS(148),
    [anon_sym_uint64] = ACTIONS(148),
    [anon_sym_uint72] = ACTIONS(148),
    [anon_sym_uint80] = ACTIONS(148),
    [anon_sym_uint88] = ACTIONS(148),
    [anon_sym_uint96] = ACTIONS(148),
    [anon_sym_uint104] = ACTIONS(148),
    [anon_sym_uint112] = ACTIONS(148),
    [anon_sym_uint120] = ACTIONS(148),
    [anon_sym_uint128] = ACTIONS(148),
    [anon_sym_uint136] = ACTIONS(148),
    [anon_sym_uint144] = ACTIONS(148),
    [anon_sym_uint152] = ACTIONS(148),
    [anon_sym_uint160] = ACTIONS(148),
    [anon_sym_uint168] = ACTIONS(148),
    [anon_sym_uint176] = ACTIONS(148),
    [anon_sym_uint184] = ACTIONS(148),
    [anon_sym_uint192] = ACTIONS(148),
    [anon_sym_uint200] = ACTIONS(148),
    [anon_sym_uint208] = ACTIONS(148),
    [anon_sym_uint216] = ACTIONS(148),
    [anon_sym_uint224] = ACTIONS(148),
    [anon_sym_uint232] = ACTIONS(148),
    [anon_sym_uint240] = ACTIONS(148),
    [anon_sym_uint248] = ACTIONS(148),
    [anon_sym_uint256] = ACTIONS(148),
    [anon_sym_byte] = ACTIONS(146),
    [anon_sym_bytes] = ACTIONS(146),
    [anon_sym_bytes1] = ACTIONS(146),
    [anon_sym_bytes2] = ACTIONS(146),
    [anon_sym_bytes3] = ACTIONS(146),
    [anon_sym_bytes4] = ACTIONS(148),
    [anon_sym_bytes5] = ACTIONS(148),
    [anon_sym_bytes6] = ACTIONS(148),
    [anon_sym_bytes7] = ACTIONS(148),
    [anon_sym_bytes8] = ACTIONS(148),
    [anon_sym_bytes9] = ACTIONS(148),
    [anon_sym_bytes10] = ACTIONS(148),
    [anon_sym_bytes11] = ACTIONS(148),
    [anon_sym_bytes12] = ACTIONS(148),
    [anon_sym_bytes13] = ACTIONS(148),
    [anon_sym_bytes14] = ACTIONS(148),
    [anon_sym_bytes15] = ACTIONS(148),
    [anon_sym_bytes16] = ACTIONS(148),
    [anon_sym_bytes17] = ACTIONS(148),
    [anon_sym_bytes18] = ACTIONS(148),
    [anon_sym_bytes19] = ACTIONS(148),
    [anon_sym_bytes20] = ACTIONS(148),
    [anon_sym_bytes21] = ACTIONS(148),
    [anon_sym_bytes22] = ACTIONS(148),
    [anon_sym_bytes23] = ACTIONS(148),
    [anon_sym_bytes24] = ACTIONS(148),
    [anon_sym_bytes25] = ACTIONS(148),
    [anon_sym_bytes26] = ACTIONS(148),
    [anon_sym_bytes27] = ACTIONS(148),
    [anon_sym_bytes28] = ACTIONS(148),
    [anon_sym_bytes29] = ACTIONS(148),
    [anon_sym_bytes30] = ACTIONS(148),
    [anon_sym_bytes31] = ACTIONS(148),
    [anon_sym_bytes32] = ACTIONS(148),
    [anon_sym_fixed] = ACTIONS(146),
    [aux_sym__fixed_token1] = ACTIONS(148),
    [anon_sym_ufixed] = ACTIONS(146),
    [aux_sym__ufixed_token1] = ACTIONS(148),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym_identifier] = ACTIONS(150),
    [anon_sym_RPAREN] = ACTIONS(152),
    [anon_sym_function] = ACTIONS(150),
    [anon_sym_mapping] = ACTIONS(150),
    [anon_sym_address] = ACTIONS(150),
    [anon_sym_bool] = ACTIONS(150),
    [anon_sym_string] = ACTIONS(150),
    [anon_sym_var] = ACTIONS(150),
    [anon_sym_int] = ACTIONS(150),
    [anon_sym_int8] = ACTIONS(150),
    [anon_sym_int16] = ACTIONS(150),
    [anon_sym_int24] = ACTIONS(150),
    [anon_sym_int32] = ACTIONS(152),
    [anon_sym_int40] = ACTIONS(152),
    [anon_sym_int48] = ACTIONS(152),
    [anon_sym_int56] = ACTIONS(152),
    [anon_sym_int64] = ACTIONS(152),
    [anon_sym_int72] = ACTIONS(152),
    [anon_sym_int80] = ACTIONS(152),
    [anon_sym_int88] = ACTIONS(152),
    [anon_sym_int96] = ACTIONS(152),
    [anon_sym_int104] = ACTIONS(152),
    [anon_sym_int112] = ACTIONS(152),
    [anon_sym_int120] = ACTIONS(152),
    [anon_sym_int128] = ACTIONS(152),
    [anon_sym_int136] = ACTIONS(152),
    [anon_sym_int144] = ACTIONS(152),
    [anon_sym_int152] = ACTIONS(152),
    [anon_sym_int160] = ACTIONS(152),
    [anon_sym_int168] = ACTIONS(152),
    [anon_sym_int176] = ACTIONS(152),
    [anon_sym_int184] = ACTIONS(152),
    [anon_sym_int192] = ACTIONS(152),
    [anon_sym_int200] = ACTIONS(152),
    [anon_sym_int208] = ACTIONS(152),
    [anon_sym_int216] = ACTIONS(152),
    [anon_sym_int224] = ACTIONS(152),
    [anon_sym_int232] = ACTIONS(152),
    [anon_sym_int240] = ACTIONS(152),
    [anon_sym_int248] = ACTIONS(152),
    [anon_sym_int256] = ACTIONS(152),
    [anon_sym_uint] = ACTIONS(150),
    [anon_sym_uint8] = ACTIONS(150),
    [anon_sym_uint16] = ACTIONS(150),
    [anon_sym_uint24] = ACTIONS(150),
    [anon_sym_uint32] = ACTIONS(152),
    [anon_sym_uint40] = ACTIONS(152),
    [anon_sym_uint48] = ACTIONS(152),
    [anon_sym_uint56] = ACTIONS(152),
    [anon_sym_uint64] = ACTIONS(152),
    [anon_sym_uint72] = ACTIONS(152),
    [anon_sym_uint80] = ACTIONS(152),
    [anon_sym_uint88] = ACTIONS(152),
    [anon_sym_uint96] = ACTIONS(152),
    [anon_sym_uint104] = ACTIONS(152),
    [anon_sym_uint112] = ACTIONS(152),
    [anon_sym_uint120] = ACTIONS(152),
    [anon_sym_uint128] = ACTIONS(152),
    [anon_sym_uint136] = ACTIONS(152),
    [anon_sym_uint144] = ACTIONS(152),
    [anon_sym_uint152] = ACTIONS(152),
    [anon_sym_uint160] = ACTIONS(152),
    [anon_sym_uint168] = ACTIONS(152),
    [anon_sym_uint176] = ACTIONS(152),
    [anon_sym_uint184] = ACTIONS(152),
    [anon_sym_uint192] = ACTIONS(152),
    [anon_sym_uint200] = ACTIONS(152),
    [anon_sym_uint208] = ACTIONS(152),
    [anon_sym_uint216] = ACTIONS(152),
    [anon_sym_uint224] = ACTIONS(152),
    [anon_sym_uint232] = ACTIONS(152),
    [anon_sym_uint240] = ACTIONS(152),
    [anon_sym_uint248] = ACTIONS(152),
    [anon_sym_uint256] = ACTIONS(152),
    [anon_sym_byte] = ACTIONS(150),
    [anon_sym_bytes] = ACTIONS(150),
    [anon_sym_bytes1] = ACTIONS(150),
    [anon_sym_bytes2] = ACTIONS(150),
    [anon_sym_bytes3] = ACTIONS(150),
    [anon_sym_bytes4] = ACTIONS(152),
    [anon_sym_bytes5] = ACTIONS(152),
    [anon_sym_bytes6] = ACTIONS(152),
    [anon_sym_bytes7] = ACTIONS(152),
    [anon_sym_bytes8] = ACTIONS(152),
    [anon_sym_bytes9] = ACTIONS(152),
    [anon_sym_bytes10] = ACTIONS(152),
    [anon_sym_bytes11] = ACTIONS(152),
    [anon_sym_bytes12] = ACTIONS(152),
    [anon_sym_bytes13] = ACTIONS(152),
    [anon_sym_bytes14] = ACTIONS(152),
    [anon_sym_bytes15] = ACTIONS(152),
    [anon_sym_bytes16] = ACTIONS(152),
    [anon_sym_bytes17] = ACTIONS(152),
    [anon_sym_bytes18] = ACTIONS(152),
    [anon_sym_bytes19] = ACTIONS(152),
    [anon_sym_bytes20] = ACTIONS(152),
    [anon_sym_bytes21] = ACTIONS(152),
    [anon_sym_bytes22] = ACTIONS(152),
    [anon_sym_bytes23] = ACTIONS(152),
    [anon_sym_bytes24] = ACTIONS(152),
    [anon_sym_bytes25] = ACTIONS(152),
    [anon_sym_bytes26] = ACTIONS(152),
    [anon_sym_bytes27] = ACTIONS(152),
    [anon_sym_bytes28] = ACTIONS(152),
    [anon_sym_bytes29] = ACTIONS(152),
    [anon_sym_bytes30] = ACTIONS(152),
    [anon_sym_bytes31] = ACTIONS(152),
    [anon_sym_bytes32] = ACTIONS(152),
    [anon_sym_fixed] = ACTIONS(150),
    [aux_sym__fixed_token1] = ACTIONS(152),
    [anon_sym_ufixed] = ACTIONS(150),
    [aux_sym__ufixed_token1] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__semicolon,
    ACTIONS(154), 8,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      anon_sym_override,
      anon_sym_virtual,
      anon_sym_returns,
      sym_identifier,
  [21] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__semicolon,
    ACTIONS(158), 8,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      anon_sym_override,
      anon_sym_virtual,
      anon_sym_returns,
      sym_identifier,
  [42] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_DOT,
    STATE(31), 1,
      aux_sym__user_defined_type_repeat1,
    ACTIONS(162), 5,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      sym_identifier,
    ACTIONS(164), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
  [66] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_DOT,
    STATE(33), 1,
      aux_sym__user_defined_type_repeat1,
    ACTIONS(169), 5,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      sym_identifier,
    ACTIONS(171), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
  [90] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_DOT,
    STATE(31), 1,
      aux_sym__user_defined_type_repeat1,
    ACTIONS(175), 5,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      sym_identifier,
    ACTIONS(177), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
  [114] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(181), 1,
      anon_sym_pragma,
    ACTIONS(184), 1,
      anon_sym_import,
    ACTIONS(187), 1,
      anon_sym_abstract,
    ACTIONS(190), 1,
      anon_sym_contract,
    STATE(34), 6,
      sym__statement,
      sym_pragma_directive,
      sym_import_directive,
      sym__declaration,
      sym_contract_declaration,
      aux_sym_program_repeat1,
  [141] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_pragma,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_abstract,
    ACTIONS(13), 1,
      anon_sym_contract,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    STATE(34), 6,
      sym__statement,
      sym_pragma_directive,
      sym_import_directive,
      sym__declaration,
      sym_contract_declaration,
      aux_sym_program_repeat1,
  [168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 5,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      sym_identifier,
    ACTIONS(164), 6,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_EQ_GT,
  [187] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym__solidity_version,
    ACTIONS(201), 1,
      sym__semicolon,
    STATE(170), 1,
      sym__solidity_version_comparison_operator,
    ACTIONS(199), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(42), 2,
      sym__pragma_version_constraint,
      aux_sym_pragma_directive_repeat1,
    ACTIONS(197), 3,
      anon_sym_LT_EQ,
      anon_sym_CARET,
      anon_sym_GT_EQ,
  [213] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      sym__return_parameters,
    ACTIONS(205), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    ACTIONS(203), 5,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      sym_identifier,
  [235] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym__solidity_version,
    ACTIONS(218), 1,
      sym__semicolon,
    STATE(170), 1,
      sym__solidity_version_comparison_operator,
    ACTIONS(215), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(39), 2,
      sym__pragma_version_constraint,
      aux_sym_pragma_directive_repeat1,
    ACTIONS(212), 3,
      anon_sym_LT_EQ,
      anon_sym_CARET,
      anon_sym_GT_EQ,
  [261] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      anon_sym_SQUOTE,
    STATE(127), 1,
      sym_string,
    STATE(177), 1,
      sym__source_import,
    ACTIONS(220), 2,
      anon_sym_STAR,
      sym_identifier,
    STATE(108), 3,
      sym__import_clause,
      sym__single_import,
      sym__multiple_import,
  [289] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_payable,
    ACTIONS(230), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(228), 5,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      sym_identifier,
  [309] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym__solidity_version,
    ACTIONS(236), 1,
      sym__semicolon,
    STATE(170), 1,
      sym__solidity_version_comparison_operator,
    ACTIONS(199), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(39), 2,
      sym__pragma_version_constraint,
      aux_sym_pragma_directive_repeat1,
    ACTIONS(197), 3,
      anon_sym_LT_EQ,
      anon_sym_CARET,
      anon_sym_GT_EQ,
  [335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_GT,
    ACTIONS(238), 5,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      sym_identifier,
  [352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    ACTIONS(242), 5,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      sym_identifier,
  [368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    ACTIONS(246), 5,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      sym_identifier,
  [384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    ACTIONS(250), 5,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      sym_identifier,
  [400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    ACTIONS(254), 5,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      sym_identifier,
  [416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    ACTIONS(258), 5,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      sym_identifier,
  [432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    ACTIONS(262), 5,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      sym_identifier,
  [448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    ACTIONS(266), 5,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
      sym_identifier,
  [464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(270), 5,
      sym__solidity_version,
      anon_sym_LT_EQ,
      anon_sym_CARET,
      anon_sym_GT_EQ,
      sym__semicolon,
  [479] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_LBRACK,
    STATE(130), 1,
      sym_field_visibility,
    ACTIONS(274), 4,
      anon_sym_public,
      anon_sym_internal,
      anon_sym_private,
      anon_sym_constant,
  [495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 5,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
  [506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 5,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
  [517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 5,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
  [528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 5,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
  [539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 5,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
  [550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 5,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
  [561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 5,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
  [572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 5,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
  [583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 5,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
  [594] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym__parameter_list,
    STATE(75), 2,
      sym__modifier_invocation,
      aux_sym_function_definition_repeat1,
  [611] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    STATE(144), 1,
      sym__parameter_list,
    STATE(62), 2,
      sym__modifier_invocation,
      aux_sym_function_definition_repeat1,
  [628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 5,
      ts_builtin_sym_end,
      anon_sym_pragma,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
  [639] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 1,
      sym_identifier,
    STATE(98), 1,
      sym__storage_location,
    ACTIONS(304), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [656] = 5,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_string_token1,
    ACTIONS(310), 1,
      sym_escape_sequence,
    ACTIONS(312), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_string_repeat1,
  [672] = 5,
    ACTIONS(312), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_SQUOTE,
    ACTIONS(316), 1,
      aux_sym_string_token2,
    ACTIONS(318), 1,
      sym_escape_sequence,
    STATE(74), 1,
      aux_sym_string_repeat2,
  [688] = 5,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(312), 1,
      sym_comment,
    ACTIONS(320), 1,
      aux_sym_string_token2,
    ACTIONS(322), 1,
      sym_escape_sequence,
    STATE(67), 1,
      aux_sym_string_repeat2,
  [704] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_override,
    ACTIONS(326), 1,
      anon_sym_virtual,
    ACTIONS(328), 1,
      sym__semicolon,
    STATE(16), 1,
      sym_modifier_body,
  [720] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      sym_identifier,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym__import_declaration,
  [736] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_LBRACK,
    STATE(146), 1,
      sym__storage_location,
    ACTIONS(336), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [750] = 5,
    ACTIONS(312), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_DQUOTE,
    ACTIONS(338), 1,
      aux_sym_string_token1,
    ACTIONS(340), 1,
      sym_escape_sequence,
    STATE(73), 1,
      aux_sym_string_repeat1,
  [766] = 5,
    ACTIONS(312), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_string_token1,
    ACTIONS(347), 1,
      sym_escape_sequence,
    STATE(73), 1,
      aux_sym_string_repeat1,
  [782] = 5,
    ACTIONS(312), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(352), 1,
      aux_sym_string_token2,
    ACTIONS(355), 1,
      sym_escape_sequence,
    STATE(74), 1,
      aux_sym_string_repeat2,
  [798] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym_identifier,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    STATE(75), 2,
      sym__modifier_invocation,
      aux_sym_function_definition_repeat1,
  [812] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    ACTIONS(365), 1,
      anon_sym_is,
    STATE(56), 1,
      sym_contract_body,
    STATE(137), 1,
      sym_class_heritage,
  [828] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    ACTIONS(365), 1,
      anon_sym_is,
    STATE(54), 1,
      sym_contract_body,
    STATE(123), 1,
      sym_class_heritage,
  [844] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_enum_declaration_repeat1,
  [857] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      sym_identifier,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      sym__import_declaration,
  [870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      sym_identifier,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      sym__import_declaration,
  [883] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym__multiple_import_repeat1,
  [896] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    ACTIONS(382), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym__multiple_import_repeat1,
  [909] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      aux_sym__inheritance_specifier_repeat1,
  [922] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      anon_sym_SQUOTE,
    STATE(162), 1,
      sym_string,
  [935] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym__parameter_list_repeat1,
  [948] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym_identifier,
    STATE(103), 1,
      sym__inheritance_specifier,
    STATE(175), 1,
      sym__user_defined_type,
  [961] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      aux_sym__inheritance_specifier_repeat1,
  [974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_as,
    ACTIONS(399), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [985] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      aux_sym__return_parameters_repeat1,
  [998] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym_identifier,
    STATE(111), 1,
      sym__inheritance_specifier,
    STATE(175), 1,
      sym__user_defined_type,
  [1011] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_LBRACE,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      aux_sym_class_heritage_repeat1,
  [1024] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    ACTIONS(409), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym__multiple_import_repeat1,
  [1037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym__inheritance_specifier_repeat1,
  [1050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      aux_sym__return_parameters_repeat1,
  [1063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_COMMA,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym__parameter_list_repeat1,
  [1076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      aux_sym__inheritance_specifier_repeat1,
  [1089] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      aux_sym__return_parameters_repeat1,
  [1102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      sym_identifier,
    ACTIONS(431), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_override,
    ACTIONS(435), 1,
      sym__semicolon,
    STATE(27), 1,
      sym_modifier_body,
  [1126] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_COMMA,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      aux_sym__parameter_list_repeat1,
  [1139] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_enum_declaration_repeat1,
  [1152] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_COMMA,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_enum_declaration_repeat1,
  [1165] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      aux_sym_class_heritage_repeat1,
  [1178] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym__inheritance_specifier_repeat1,
  [1191] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LBRACE,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      aux_sym_class_heritage_repeat1,
  [1204] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(455), 1,
      sym_identifier,
    STATE(38), 1,
      sym__parameter_list,
  [1217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 2,
      anon_sym_as,
      sym__semicolon,
  [1225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_from,
    STATE(153), 1,
      sym__from_clause,
  [1235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      sym__expression,
  [1245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_EQ,
    ACTIONS(465), 1,
      sym__semicolon,
  [1255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [1263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      sym__expression,
  [1281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym__semicolon,
    STATE(25), 1,
      sym_function_body,
  [1291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_LBRACK,
    ACTIONS(471), 1,
      sym_identifier,
  [1301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1309] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      sym_identifier,
    STATE(112), 1,
      sym__import_declaration,
  [1319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym__semicolon,
    STATE(27), 1,
      sym_modifier_body,
  [1329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym__parameter_list,
  [1363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_contract_body,
  [1373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_as,
    ACTIONS(477), 1,
      anon_sym_from,
  [1383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [1391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [1399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_as,
    ACTIONS(485), 1,
      sym__semicolon,
  [1409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [1417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [1425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_identifier,
    ACTIONS(493), 1,
      sym__immutable,
  [1435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      sym__semicolon,
  [1445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_RBRACK,
    STATE(172), 1,
      sym__expression,
  [1463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_LBRACK,
    ACTIONS(501), 1,
      anon_sym_RPAREN,
  [1473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [1481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 2,
      sym__immutable,
      sym_identifier,
  [1489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_contract_body,
  [1499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [1507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      sym__semicolon,
    STATE(18), 1,
      sym_modifier_body,
  [1517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    STATE(176), 1,
      sym__parameter_list,
  [1543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    STATE(128), 1,
      sym__call_arguments,
  [1553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym__semicolon,
    STATE(15), 1,
      sym_function_body,
  [1563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym__parameter_list,
  [1573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 2,
      anon_sym_as,
      sym__semicolon,
  [1589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [1597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
  [1604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_from,
  [1611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      sym_identifier,
  [1618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      sym__semicolon,
  [1625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym__semicolon,
  [1632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_from,
  [1639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      sym_identifier,
  [1646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_LPAREN,
  [1653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    STATE(178), 1,
      sym__expression,
  [1660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    STATE(132), 1,
      sym__expression,
  [1667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      sym__semicolon,
  [1674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      sym_identifier,
  [1681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    STATE(159), 1,
      sym__expression,
  [1688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      sym__semicolon,
  [1695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_from,
  [1702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      sym__semicolon,
  [1709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_RBRACE,
  [1716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym_identifier,
  [1723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      sym_identifier,
  [1730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      sym_identifier,
  [1737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      sym_identifier,
  [1744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      sym__solidity_version,
  [1751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      sym_identifier,
  [1758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_RBRACK,
  [1765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym_identifier,
  [1772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_EQ_GT,
  [1779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_LPAREN,
  [1786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_returns,
  [1793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      sym__semicolon,
  [1800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      sym__semicolon,
  [1807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_from,
  [1814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym_identifier,
  [1821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_solidity,
  [1828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      ts_builtin_sym_end,
  [1835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      sym_identifier,
  [1842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_contract,
  [1849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_from,
  [1856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym_identifier,
  [1863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_LPAREN,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(29)] = 0,
  [SMALL_STATE(30)] = 21,
  [SMALL_STATE(31)] = 42,
  [SMALL_STATE(32)] = 66,
  [SMALL_STATE(33)] = 90,
  [SMALL_STATE(34)] = 114,
  [SMALL_STATE(35)] = 141,
  [SMALL_STATE(36)] = 168,
  [SMALL_STATE(37)] = 187,
  [SMALL_STATE(38)] = 213,
  [SMALL_STATE(39)] = 235,
  [SMALL_STATE(40)] = 261,
  [SMALL_STATE(41)] = 289,
  [SMALL_STATE(42)] = 309,
  [SMALL_STATE(43)] = 335,
  [SMALL_STATE(44)] = 352,
  [SMALL_STATE(45)] = 368,
  [SMALL_STATE(46)] = 384,
  [SMALL_STATE(47)] = 400,
  [SMALL_STATE(48)] = 416,
  [SMALL_STATE(49)] = 432,
  [SMALL_STATE(50)] = 448,
  [SMALL_STATE(51)] = 464,
  [SMALL_STATE(52)] = 479,
  [SMALL_STATE(53)] = 495,
  [SMALL_STATE(54)] = 506,
  [SMALL_STATE(55)] = 517,
  [SMALL_STATE(56)] = 528,
  [SMALL_STATE(57)] = 539,
  [SMALL_STATE(58)] = 550,
  [SMALL_STATE(59)] = 561,
  [SMALL_STATE(60)] = 572,
  [SMALL_STATE(61)] = 583,
  [SMALL_STATE(62)] = 594,
  [SMALL_STATE(63)] = 611,
  [SMALL_STATE(64)] = 628,
  [SMALL_STATE(65)] = 639,
  [SMALL_STATE(66)] = 656,
  [SMALL_STATE(67)] = 672,
  [SMALL_STATE(68)] = 688,
  [SMALL_STATE(69)] = 704,
  [SMALL_STATE(70)] = 720,
  [SMALL_STATE(71)] = 736,
  [SMALL_STATE(72)] = 750,
  [SMALL_STATE(73)] = 766,
  [SMALL_STATE(74)] = 782,
  [SMALL_STATE(75)] = 798,
  [SMALL_STATE(76)] = 812,
  [SMALL_STATE(77)] = 828,
  [SMALL_STATE(78)] = 844,
  [SMALL_STATE(79)] = 857,
  [SMALL_STATE(80)] = 870,
  [SMALL_STATE(81)] = 883,
  [SMALL_STATE(82)] = 896,
  [SMALL_STATE(83)] = 909,
  [SMALL_STATE(84)] = 922,
  [SMALL_STATE(85)] = 935,
  [SMALL_STATE(86)] = 948,
  [SMALL_STATE(87)] = 961,
  [SMALL_STATE(88)] = 974,
  [SMALL_STATE(89)] = 985,
  [SMALL_STATE(90)] = 998,
  [SMALL_STATE(91)] = 1011,
  [SMALL_STATE(92)] = 1024,
  [SMALL_STATE(93)] = 1037,
  [SMALL_STATE(94)] = 1050,
  [SMALL_STATE(95)] = 1063,
  [SMALL_STATE(96)] = 1076,
  [SMALL_STATE(97)] = 1089,
  [SMALL_STATE(98)] = 1102,
  [SMALL_STATE(99)] = 1113,
  [SMALL_STATE(100)] = 1126,
  [SMALL_STATE(101)] = 1139,
  [SMALL_STATE(102)] = 1152,
  [SMALL_STATE(103)] = 1165,
  [SMALL_STATE(104)] = 1178,
  [SMALL_STATE(105)] = 1191,
  [SMALL_STATE(106)] = 1204,
  [SMALL_STATE(107)] = 1217,
  [SMALL_STATE(108)] = 1225,
  [SMALL_STATE(109)] = 1235,
  [SMALL_STATE(110)] = 1245,
  [SMALL_STATE(111)] = 1255,
  [SMALL_STATE(112)] = 1263,
  [SMALL_STATE(113)] = 1271,
  [SMALL_STATE(114)] = 1281,
  [SMALL_STATE(115)] = 1291,
  [SMALL_STATE(116)] = 1301,
  [SMALL_STATE(117)] = 1309,
  [SMALL_STATE(118)] = 1319,
  [SMALL_STATE(119)] = 1329,
  [SMALL_STATE(120)] = 1337,
  [SMALL_STATE(121)] = 1345,
  [SMALL_STATE(122)] = 1353,
  [SMALL_STATE(123)] = 1363,
  [SMALL_STATE(124)] = 1373,
  [SMALL_STATE(125)] = 1383,
  [SMALL_STATE(126)] = 1391,
  [SMALL_STATE(127)] = 1399,
  [SMALL_STATE(128)] = 1409,
  [SMALL_STATE(129)] = 1417,
  [SMALL_STATE(130)] = 1425,
  [SMALL_STATE(131)] = 1435,
  [SMALL_STATE(132)] = 1445,
  [SMALL_STATE(133)] = 1453,
  [SMALL_STATE(134)] = 1463,
  [SMALL_STATE(135)] = 1473,
  [SMALL_STATE(136)] = 1481,
  [SMALL_STATE(137)] = 1489,
  [SMALL_STATE(138)] = 1499,
  [SMALL_STATE(139)] = 1507,
  [SMALL_STATE(140)] = 1517,
  [SMALL_STATE(141)] = 1525,
  [SMALL_STATE(142)] = 1533,
  [SMALL_STATE(143)] = 1543,
  [SMALL_STATE(144)] = 1553,
  [SMALL_STATE(145)] = 1563,
  [SMALL_STATE(146)] = 1573,
  [SMALL_STATE(147)] = 1581,
  [SMALL_STATE(148)] = 1589,
  [SMALL_STATE(149)] = 1597,
  [SMALL_STATE(150)] = 1604,
  [SMALL_STATE(151)] = 1611,
  [SMALL_STATE(152)] = 1618,
  [SMALL_STATE(153)] = 1625,
  [SMALL_STATE(154)] = 1632,
  [SMALL_STATE(155)] = 1639,
  [SMALL_STATE(156)] = 1646,
  [SMALL_STATE(157)] = 1653,
  [SMALL_STATE(158)] = 1660,
  [SMALL_STATE(159)] = 1667,
  [SMALL_STATE(160)] = 1674,
  [SMALL_STATE(161)] = 1681,
  [SMALL_STATE(162)] = 1688,
  [SMALL_STATE(163)] = 1695,
  [SMALL_STATE(164)] = 1702,
  [SMALL_STATE(165)] = 1709,
  [SMALL_STATE(166)] = 1716,
  [SMALL_STATE(167)] = 1723,
  [SMALL_STATE(168)] = 1730,
  [SMALL_STATE(169)] = 1737,
  [SMALL_STATE(170)] = 1744,
  [SMALL_STATE(171)] = 1751,
  [SMALL_STATE(172)] = 1758,
  [SMALL_STATE(173)] = 1765,
  [SMALL_STATE(174)] = 1772,
  [SMALL_STATE(175)] = 1779,
  [SMALL_STATE(176)] = 1786,
  [SMALL_STATE(177)] = 1793,
  [SMALL_STATE(178)] = 1800,
  [SMALL_STATE(179)] = 1807,
  [SMALL_STATE(180)] = 1814,
  [SMALL_STATE(181)] = 1821,
  [SMALL_STATE(182)] = 1828,
  [SMALL_STATE(183)] = 1835,
  [SMALL_STATE(184)] = 1842,
  [SMALL_STATE(185)] = 1849,
  [SMALL_STATE(186)] = 1856,
  [SMALL_STATE(187)] = 1863,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2), SHIFT_REPEAT(32),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contract_body_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2), SHIFT_REPEAT(166),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2), SHIFT_REPEAT(168),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2), SHIFT_REPEAT(173),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2), SHIFT_REPEAT(106),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2), SHIFT_REPEAT(149),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2), SHIFT_REPEAT(41),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_body_repeat1, 2), SHIFT_REPEAT(47),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contract_body_repeat1, 2), SHIFT_REPEAT(47),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(32),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(122),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(149),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(41),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(47),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(47),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6, .production_id = 9),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 9),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_definition, 4),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_definition, 4),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_definition, 7),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 7),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_definition, 6),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_definition, 6),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 6),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 6),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_definition, 5),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 5),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_definition, 6),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 6),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 7),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_definition, 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 4),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_declaration, 5),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 5),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 7, .production_id = 10),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 10),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 5),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 5),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_definition, 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_definition, 5),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_member, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_member, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_list, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_list, 4),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 4),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__user_defined_type_repeat1, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_defined_type_repeat1, 2),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_defined_type_repeat1, 2), SHIFT_REPEAT(186),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__user_defined_type, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_defined_type, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__user_defined_type, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_defined_type, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(181),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(40),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(184),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(183),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_type, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_type, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pragma_directive_repeat1, 2), SHIFT_REPEAT(39),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pragma_directive_repeat1, 2), SHIFT_REPEAT(170),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pragma_directive_repeat1, 2), SHIFT_REPEAT(170),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pragma_directive_repeat1, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive_type, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive_type, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive_type, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive_type, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mapping, 6),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mapping, 6),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 4),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__return_parameters, 4),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_parameters, 4),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_type, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_type, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__return_parameters, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_parameters, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pragma_version_constraint, 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pragma_version_constraint, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_body, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_declaration, 4, .production_id = 6),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_body, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_declaration, 3, .production_id = 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_directive, 3, .production_id = 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_declaration, 5, .production_id = 8),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_directive, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_directive, 4, .production_id = 5),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_directive, 4),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_declaration, 4, .production_id = 7),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nameless_parameter, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(73),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(73),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(74),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(74),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(143),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multiple_import_repeat1, 2), SHIFT_REPEAT(117),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multiple_import_repeat1, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameter_list_repeat1, 2), SHIFT_REPEAT(9),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameter_list_repeat1, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_declaration, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_heritage, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__inheritance_specifier_repeat1, 2), SHIFT_REPEAT(158),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__inheritance_specifier_repeat1, 2),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__return_parameters_repeat1, 2), SHIFT_REPEAT(8),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__return_parameters_repeat1, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_declaration_repeat1, 2), SHIFT_REPEAT(151),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_declaration_repeat1, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_heritage, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_heritage_repeat1, 2),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_heritage_repeat1, 2), SHIFT_REPEAT(90),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_declaration, 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_import, 1),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_arguments, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inheritance_specifier, 5),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_import, 1, .production_id = 1),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__modifier_invocation, 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inheritance_specifier, 3),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inheritance_specifier, 4),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_visibility, 1),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_arguments, 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nameless_parameter, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_arguments, 4),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_import, 3),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiple_import, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__from_clause, 2, .production_id = 4),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiple_import, 2),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_import, 3, .production_id = 1),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiple_import, 4),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [581] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiple_import, 5),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
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
