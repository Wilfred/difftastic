#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 582
#define SYMBOL_COUNT 239
#define ALIAS_COUNT 2
#define TOKEN_COUNT 132
#define EXTERNAL_TOKEN_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym__layout_semicolon = 1,
  sym__layout_open_brace = 2,
  sym__layout_close_brace = 3,
  anon_sym_module = 4,
  anon_sym_where = 5,
  anon_sym_SEMI = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_LPAREN = 9,
  anon_sym_COMMA = 10,
  anon_sym_RPAREN = 11,
  anon_sym_DOT_DOT = 12,
  anon_sym_import = 13,
  anon_sym_qualified = 14,
  anon_sym_as = 15,
  anon_sym_hiding = 16,
  anon_sym_EQ = 17,
  anon_sym_DASH = 18,
  anon_sym_AT = 19,
  anon_sym__ = 20,
  anon_sym_foreign = 21,
  sym_foreign_export = 22,
  anon_sym_ccall = 23,
  anon_sym_stdcall = 24,
  anon_sym_cplusplus = 25,
  anon_sym_jvm = 26,
  anon_sym_dotnet = 27,
  anon_sym_unsafe = 28,
  anon_sym_safe = 29,
  anon_sym_default = 30,
  anon_sym_do = 31,
  anon_sym_class = 32,
  anon_sym_instance = 33,
  anon_sym_infixl = 34,
  anon_sym_infixr = 35,
  anon_sym_infix = 36,
  anon_sym_BQUOTE = 37,
  anon_sym_COLON = 38,
  anon_sym_COLON_COLON = 39,
  anon_sym_DASH_GT = 40,
  sym_unit_type = 41,
  sym_list_constructor = 42,
  sym_function_constructor = 43,
  anon_sym_LBRACK = 44,
  anon_sym_RBRACK = 45,
  anon_sym_data = 46,
  anon_sym_EQ_GT = 47,
  anon_sym_PIPE = 48,
  anon_sym_deriving = 49,
  anon_sym_newtype = 50,
  anon_sym_BANG = 51,
  anon_sym_type = 52,
  sym__variable_pattern = 53,
  sym__constructor_pattern = 54,
  anon_sym_DOT = 55,
  sym_module_identifier = 56,
  sym_comment = 57,
  sym_float = 58,
  anon_sym_SQUOTE = 59,
  anon_sym_DQUOTE = 60,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH = 61,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH = 62,
  sym__ascii_large = 63,
  anon_sym_POUND = 64,
  anon_sym_DOLLAR = 65,
  anon_sym_PERCENT = 66,
  anon_sym_AMP = 67,
  anon_sym_1 = 68,
  anon_sym_PLUS = 69,
  anon_sym_SLASH = 70,
  anon_sym_LT = 71,
  anon_sym_GT = 72,
  anon_sym_QMARK = 73,
  anon_sym_CARET = 74,
  anon_sym_TILDE = 75,
  anon_sym_BSLASH = 76,
  anon_sym_LT_DASH = 77,
  sym__space = 78,
  sym__newline = 79,
  sym__tab = 80,
  sym__vertical_tab = 81,
  anon_sym_x = 82,
  anon_sym_X = 83,
  aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 84,
  anon_sym_o = 85,
  anon_sym_O = 86,
  aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH = 87,
  anon_sym_a = 88,
  anon_sym_b = 89,
  anon_sym_f = 90,
  anon_sym_n = 91,
  anon_sym_r = 92,
  anon_sym_t = 93,
  anon_sym_v = 94,
  anon_sym_NUL = 95,
  anon_sym_SOH = 96,
  anon_sym_STX = 97,
  anon_sym_ETX = 98,
  anon_sym_EOT = 99,
  anon_sym_ENQ = 100,
  anon_sym_ACK = 101,
  anon_sym_BEL = 102,
  anon_sym_BS = 103,
  anon_sym_HT = 104,
  anon_sym_LF = 105,
  anon_sym_VT = 106,
  anon_sym_FF = 107,
  anon_sym_CR = 108,
  anon_sym_SO = 109,
  anon_sym_SI = 110,
  anon_sym_DLE = 111,
  anon_sym_DC1 = 112,
  anon_sym_DC2 = 113,
  anon_sym_DC3 = 114,
  anon_sym_DC4 = 115,
  anon_sym_NAK = 116,
  anon_sym_SYN = 117,
  anon_sym_ETB = 118,
  anon_sym_CAN = 119,
  anon_sym_EM = 120,
  anon_sym_SUB = 121,
  anon_sym_ESC = 122,
  anon_sym_FS = 123,
  anon_sym_GS = 124,
  anon_sym_RS = 125,
  anon_sym_US = 126,
  anon_sym_SP = 127,
  anon_sym_DEL = 128,
  sym__integer_literal = 129,
  sym__octal_literal = 130,
  sym__hexidecimal_literal = 131,
  sym_module = 132,
  sym_declarations = 133,
  sym_module_exports = 134,
  sym_export = 135,
  sym_import = 136,
  sym_import_specification = 137,
  sym__declaration = 138,
  sym_function_declaration = 139,
  sym_function_head = 140,
  sym_function_body = 141,
  sym__function_pattern = 142,
  sym_tuple_pattern = 143,
  sym_parenthesized_pattern = 144,
  sym__pattern = 145,
  sym_negative_literal = 146,
  sym_general_constructor = 147,
  sym_as_pattern = 148,
  sym_labels = 149,
  sym_label = 150,
  sym_wildcard = 151,
  sym__variable = 152,
  sym_qualified_variable_identifier = 153,
  sym__expression = 154,
  sym_foreign = 155,
  sym_foreign_import = 156,
  sym_calling_convention = 157,
  sym_safety = 158,
  sym_default = 159,
  sym_do_expression = 160,
  sym_statement_list = 161,
  sym__statement = 162,
  sym_type_class = 163,
  sym_general_declarations = 164,
  sym_type_class_instance = 165,
  sym__general_declaration = 166,
  sym_fixity = 167,
  sym__op = 168,
  sym_variable_symbol = 169,
  sym_constructor_symbol = 170,
  sym_type_signature = 171,
  sym_type = 172,
  sym__generic_type_constructor = 173,
  sym_tupling_constructor = 174,
  sym_tuple = 175,
  sym_list = 176,
  sym_parenthesized_constructor = 177,
  sym_algebraic_datatype = 178,
  sym_context = 179,
  sym_class = 180,
  sym_constructors = 181,
  sym_constructor = 182,
  sym_deriving = 183,
  sym_newtype = 184,
  sym_new_constructor = 185,
  sym_field = 186,
  sym_strict = 187,
  sym_type_synonym = 188,
  sym__literal = 189,
  sym__identifier = 190,
  sym_simple_type = 191,
  sym_variable_identifier = 192,
  sym_constructor_identifier = 193,
  sym__type_constructors = 194,
  sym_qualified_type_constructor = 195,
  sym_integer = 196,
  sym_char = 197,
  sym_string = 198,
  sym__gap = 199,
  sym__graphic = 200,
  sym__small = 201,
  sym__large = 202,
  sym__symbol = 203,
  sym__variable_symbol = 204,
  sym__constructor_symbol = 205,
  sym__special = 206,
  sym__escape = 207,
  sym__char_escape = 208,
  sym__ascii = 209,
  sym__cntrl = 210,
  sym_fields = 211,
  aux_sym_module_repeat1 = 212,
  aux_sym_module_exports_repeat1 = 213,
  aux_sym_export_repeat1 = 214,
  aux_sym_import_specification_repeat1 = 215,
  aux_sym_function_head_repeat1 = 216,
  aux_sym_function_body_repeat1 = 217,
  aux_sym_tuple_pattern_repeat1 = 218,
  aux_sym_general_constructor_repeat1 = 219,
  aux_sym_labels_repeat1 = 220,
  aux_sym_statement_list_repeat1 = 221,
  aux_sym_type_class_repeat1 = 222,
  aux_sym_general_declarations_repeat1 = 223,
  aux_sym_fixity_repeat1 = 224,
  aux_sym_variable_symbol_repeat1 = 225,
  aux_sym_constructor_symbol_repeat1 = 226,
  aux_sym_tupling_constructor_repeat1 = 227,
  aux_sym_tuple_repeat1 = 228,
  aux_sym_list_repeat1 = 229,
  aux_sym_context_repeat1 = 230,
  aux_sym_constructors_repeat1 = 231,
  aux_sym_constructor_repeat1 = 232,
  aux_sym_field_repeat1 = 233,
  aux_sym_qualified_type_constructor_repeat1 = 234,
  aux_sym_string_repeat1 = 235,
  aux_sym__escape_repeat1 = 236,
  aux_sym__escape_repeat2 = 237,
  aux_sym_fields_repeat1 = 238,
  alias_sym_type_constructor = 239,
  alias_sym_type_variable = 240,
};

static const char *ts_symbol_names[] = {
  [sym__layout_semicolon] = "_layout_semicolon",
  [sym__layout_open_brace] = "_layout_open_brace",
  [sym__layout_close_brace] = "_layout_close_brace",
  [ts_builtin_sym_end] = "END",
  [anon_sym_module] = "module",
  [anon_sym_where] = "where",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_import] = "import",
  [anon_sym_qualified] = "qualified",
  [anon_sym_as] = "as",
  [anon_sym_hiding] = "hiding",
  [anon_sym_EQ] = "=",
  [anon_sym_DASH] = "-",
  [anon_sym_AT] = "@",
  [anon_sym__] = "_",
  [anon_sym_foreign] = "foreign",
  [sym_foreign_export] = "foreign_export",
  [anon_sym_ccall] = "ccall",
  [anon_sym_stdcall] = "stdcall",
  [anon_sym_cplusplus] = "cplusplus",
  [anon_sym_jvm] = "jvm",
  [anon_sym_dotnet] = "dotnet",
  [anon_sym_unsafe] = "unsafe",
  [anon_sym_safe] = "safe",
  [anon_sym_default] = "default",
  [anon_sym_do] = "do",
  [anon_sym_class] = "class",
  [anon_sym_instance] = "instance",
  [anon_sym_infixl] = "infixl",
  [anon_sym_infixr] = "infixr",
  [anon_sym_infix] = "infix",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_DASH_GT] = "->",
  [sym_unit_type] = "unit_type",
  [sym_list_constructor] = "list_constructor",
  [sym_function_constructor] = "function_constructor",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_data] = "data",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_PIPE] = "|",
  [anon_sym_deriving] = "deriving",
  [anon_sym_newtype] = "newtype",
  [anon_sym_BANG] = "!",
  [anon_sym_type] = "type",
  [sym__variable_pattern] = "_variable_pattern",
  [sym__constructor_pattern] = "_constructor_pattern",
  [anon_sym_DOT] = ".",
  [sym_module_identifier] = "module_identifier",
  [sym_comment] = "comment",
  [sym_float] = "float",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = "/[0-9]/",
  [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = "/[a-z]/",
  [sym__ascii_large] = "_ascii_large",
  [anon_sym_POUND] = "#",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_PERCENT] = "%",
  [anon_sym_AMP] = "&",
  [anon_sym_1] = "⋆",
  [anon_sym_PLUS] = "+",
  [anon_sym_SLASH] = "/",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_QMARK] = "?",
  [anon_sym_CARET] = "^",
  [anon_sym_TILDE] = "~",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_LT_DASH] = "<-",
  [sym__space] = "_space",
  [sym__newline] = "_newline",
  [sym__tab] = "_tab",
  [sym__vertical_tab] = "_vertical_tab",
  [anon_sym_x] = "x",
  [anon_sym_X] = "X",
  [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = "/[0-9a-fA-F]/",
  [anon_sym_o] = "o",
  [anon_sym_O] = "O",
  [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = "/[0-7]/",
  [anon_sym_a] = "a",
  [anon_sym_b] = "b",
  [anon_sym_f] = "f",
  [anon_sym_n] = "n",
  [anon_sym_r] = "r",
  [anon_sym_t] = "t",
  [anon_sym_v] = "v",
  [anon_sym_NUL] = "NUL",
  [anon_sym_SOH] = "SOH",
  [anon_sym_STX] = "STX",
  [anon_sym_ETX] = "ETX",
  [anon_sym_EOT] = "EOT",
  [anon_sym_ENQ] = "ENQ",
  [anon_sym_ACK] = "ACK",
  [anon_sym_BEL] = "BEL",
  [anon_sym_BS] = "BS",
  [anon_sym_HT] = "HT",
  [anon_sym_LF] = "LF",
  [anon_sym_VT] = "VT",
  [anon_sym_FF] = "FF",
  [anon_sym_CR] = "CR",
  [anon_sym_SO] = "SO",
  [anon_sym_SI] = "SI",
  [anon_sym_DLE] = "DLE",
  [anon_sym_DC1] = "DC1",
  [anon_sym_DC2] = "DC2",
  [anon_sym_DC3] = "DC3",
  [anon_sym_DC4] = "DC4",
  [anon_sym_NAK] = "NAK",
  [anon_sym_SYN] = "SYN",
  [anon_sym_ETB] = "ETB",
  [anon_sym_CAN] = "CAN",
  [anon_sym_EM] = "EM",
  [anon_sym_SUB] = "SUB",
  [anon_sym_ESC] = "ESC",
  [anon_sym_FS] = "FS",
  [anon_sym_GS] = "GS",
  [anon_sym_RS] = "RS",
  [anon_sym_US] = "US",
  [anon_sym_SP] = "SP",
  [anon_sym_DEL] = "DEL",
  [sym__integer_literal] = "_integer_literal",
  [sym__octal_literal] = "_octal_literal",
  [sym__hexidecimal_literal] = "_hexidecimal_literal",
  [sym_module] = "module",
  [sym_declarations] = "declarations",
  [sym_module_exports] = "module_exports",
  [sym_export] = "export",
  [sym_import] = "import",
  [sym_import_specification] = "import_specification",
  [sym__declaration] = "_declaration",
  [sym_function_declaration] = "function_declaration",
  [sym_function_head] = "function_head",
  [sym_function_body] = "function_body",
  [sym__function_pattern] = "_function_pattern",
  [sym_tuple_pattern] = "tuple_pattern",
  [sym_parenthesized_pattern] = "parenthesized_pattern",
  [sym__pattern] = "_pattern",
  [sym_negative_literal] = "negative_literal",
  [sym_general_constructor] = "general_constructor",
  [sym_as_pattern] = "as_pattern",
  [sym_labels] = "labels",
  [sym_label] = "label",
  [sym_wildcard] = "wildcard",
  [sym__variable] = "_variable",
  [sym_qualified_variable_identifier] = "qualified_variable_identifier",
  [sym__expression] = "_expression",
  [sym_foreign] = "foreign",
  [sym_foreign_import] = "foreign_import",
  [sym_calling_convention] = "calling_convention",
  [sym_safety] = "safety",
  [sym_default] = "default",
  [sym_do_expression] = "do_expression",
  [sym_statement_list] = "statement_list",
  [sym__statement] = "_statement",
  [sym_type_class] = "type_class",
  [sym_general_declarations] = "general_declarations",
  [sym_type_class_instance] = "type_class_instance",
  [sym__general_declaration] = "_general_declaration",
  [sym_fixity] = "fixity",
  [sym__op] = "_op",
  [sym_variable_symbol] = "variable_symbol",
  [sym_constructor_symbol] = "constructor_symbol",
  [sym_type_signature] = "type_signature",
  [sym_type] = "type",
  [sym__generic_type_constructor] = "_generic_type_constructor",
  [sym_tupling_constructor] = "tupling_constructor",
  [sym_tuple] = "tuple",
  [sym_list] = "list",
  [sym_parenthesized_constructor] = "parenthesized_constructor",
  [sym_algebraic_datatype] = "algebraic_datatype",
  [sym_context] = "context",
  [sym_class] = "class",
  [sym_constructors] = "constructors",
  [sym_constructor] = "constructor",
  [sym_deriving] = "deriving",
  [sym_newtype] = "newtype",
  [sym_new_constructor] = "new_constructor",
  [sym_field] = "field",
  [sym_strict] = "strict",
  [sym_type_synonym] = "type_synonym",
  [sym__literal] = "_literal",
  [sym__identifier] = "_identifier",
  [sym_simple_type] = "simple_type",
  [sym_variable_identifier] = "variable_identifier",
  [sym_constructor_identifier] = "constructor_identifier",
  [sym__type_constructors] = "_type_constructors",
  [sym_qualified_type_constructor] = "qualified_type_constructor",
  [sym_integer] = "integer",
  [sym_char] = "char",
  [sym_string] = "string",
  [sym__gap] = "_gap",
  [sym__graphic] = "_graphic",
  [sym__small] = "_small",
  [sym__large] = "_large",
  [sym__symbol] = "_symbol",
  [sym__variable_symbol] = "_variable_symbol",
  [sym__constructor_symbol] = "_constructor_symbol",
  [sym__special] = "_special",
  [sym__escape] = "_escape",
  [sym__char_escape] = "_char_escape",
  [sym__ascii] = "_ascii",
  [sym__cntrl] = "_cntrl",
  [sym_fields] = "fields",
  [aux_sym_module_repeat1] = "module_repeat1",
  [aux_sym_module_exports_repeat1] = "module_exports_repeat1",
  [aux_sym_export_repeat1] = "export_repeat1",
  [aux_sym_import_specification_repeat1] = "import_specification_repeat1",
  [aux_sym_function_head_repeat1] = "function_head_repeat1",
  [aux_sym_function_body_repeat1] = "function_body_repeat1",
  [aux_sym_tuple_pattern_repeat1] = "tuple_pattern_repeat1",
  [aux_sym_general_constructor_repeat1] = "general_constructor_repeat1",
  [aux_sym_labels_repeat1] = "labels_repeat1",
  [aux_sym_statement_list_repeat1] = "statement_list_repeat1",
  [aux_sym_type_class_repeat1] = "type_class_repeat1",
  [aux_sym_general_declarations_repeat1] = "general_declarations_repeat1",
  [aux_sym_fixity_repeat1] = "fixity_repeat1",
  [aux_sym_variable_symbol_repeat1] = "variable_symbol_repeat1",
  [aux_sym_constructor_symbol_repeat1] = "constructor_symbol_repeat1",
  [aux_sym_tupling_constructor_repeat1] = "tupling_constructor_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_context_repeat1] = "context_repeat1",
  [aux_sym_constructors_repeat1] = "constructors_repeat1",
  [aux_sym_constructor_repeat1] = "constructor_repeat1",
  [aux_sym_field_repeat1] = "field_repeat1",
  [aux_sym_qualified_type_constructor_repeat1] = "qualified_type_constructor_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym__escape_repeat1] = "_escape_repeat1",
  [aux_sym__escape_repeat2] = "_escape_repeat2",
  [aux_sym_fields_repeat1] = "fields_repeat1",
  [alias_sym_type_constructor] = "type_constructor",
  [alias_sym_type_variable] = "type_variable",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [sym__layout_semicolon] = {
    .visible = false,
    .named = true,
  },
  [sym__layout_open_brace] = {
    .visible = false,
    .named = true,
  },
  [sym__layout_close_brace] = {
    .visible = false,
    .named = true,
  },
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_qualified] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hiding] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreign] = {
    .visible = true,
    .named = false,
  },
  [sym_foreign_export] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ccall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stdcall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cplusplus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jvm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dotnet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsafe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_safe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_instance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_infixl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_infixr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_infix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_unit_type] = {
    .visible = true,
    .named = true,
  },
  [sym_list_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_function_constructor] = {
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
  [anon_sym_data] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deriving] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_newtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [sym__variable_pattern] = {
    .visible = false,
    .named = true,
  },
  [sym__constructor_pattern] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_module_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym__ascii_large] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__tab] = {
    .visible = false,
    .named = true,
  },
  [sym__vertical_tab] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_X] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_o] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_O] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_a] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_n] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_v] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NUL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SOH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ETX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BEL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DC1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DC2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DC3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DC4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NAK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SYN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ETB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CAN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ESC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_US] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEL] = {
    .visible = true,
    .named = false,
  },
  [sym__integer_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__octal_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__hexidecimal_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym_module_exports] = {
    .visible = true,
    .named = true,
  },
  [sym_export] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_import_specification] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_head] = {
    .visible = true,
    .named = true,
  },
  [sym_function_body] = {
    .visible = true,
    .named = true,
  },
  [sym__function_pattern] = {
    .visible = false,
    .named = true,
  },
  [sym_tuple_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym__pattern] = {
    .visible = false,
    .named = true,
  },
  [sym_negative_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_general_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_as_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_labels] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_wildcard] = {
    .visible = true,
    .named = true,
  },
  [sym__variable] = {
    .visible = false,
    .named = true,
  },
  [sym_qualified_variable_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_foreign] = {
    .visible = true,
    .named = true,
  },
  [sym_foreign_import] = {
    .visible = true,
    .named = true,
  },
  [sym_calling_convention] = {
    .visible = true,
    .named = true,
  },
  [sym_safety] = {
    .visible = true,
    .named = true,
  },
  [sym_default] = {
    .visible = true,
    .named = true,
  },
  [sym_do_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_list] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_type_class] = {
    .visible = true,
    .named = true,
  },
  [sym_general_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym_type_class_instance] = {
    .visible = true,
    .named = true,
  },
  [sym__general_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_fixity] = {
    .visible = true,
    .named = true,
  },
  [sym__op] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_type_signature] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__generic_type_constructor] = {
    .visible = false,
    .named = true,
  },
  [sym_tupling_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_algebraic_datatype] = {
    .visible = true,
    .named = true,
  },
  [sym_context] = {
    .visible = true,
    .named = true,
  },
  [sym_class] = {
    .visible = true,
    .named = true,
  },
  [sym_constructors] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_deriving] = {
    .visible = true,
    .named = true,
  },
  [sym_newtype] = {
    .visible = true,
    .named = true,
  },
  [sym_new_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_strict] = {
    .visible = true,
    .named = true,
  },
  [sym_type_synonym] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_simple_type] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__type_constructors] = {
    .visible = false,
    .named = true,
  },
  [sym_qualified_type_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__gap] = {
    .visible = false,
    .named = true,
  },
  [sym__graphic] = {
    .visible = false,
    .named = true,
  },
  [sym__small] = {
    .visible = false,
    .named = true,
  },
  [sym__large] = {
    .visible = false,
    .named = true,
  },
  [sym__symbol] = {
    .visible = false,
    .named = true,
  },
  [sym__variable_symbol] = {
    .visible = false,
    .named = true,
  },
  [sym__constructor_symbol] = {
    .visible = false,
    .named = true,
  },
  [sym__special] = {
    .visible = false,
    .named = true,
  },
  [sym__escape] = {
    .visible = false,
    .named = true,
  },
  [sym__char_escape] = {
    .visible = false,
    .named = true,
  },
  [sym__ascii] = {
    .visible = false,
    .named = true,
  },
  [sym__cntrl] = {
    .visible = false,
    .named = true,
  },
  [sym_fields] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_module_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_exports_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_export_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_specification_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_head_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_general_constructor_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_labels_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statement_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_class_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_general_declarations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fixity_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_symbol_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constructor_symbol_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tupling_constructor_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_context_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constructors_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constructor_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_qualified_type_constructor_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__escape_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__escape_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fields_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_type_constructor] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_type_variable] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_type_constructor,
  },
  [2] = {
    [0] = alias_sym_type_constructor,
    [1] = alias_sym_type_variable,
  },
  [3] = {
    [0] = alias_sym_type_variable,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(98);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(114);
      if (lookahead == '.')
        ADVANCE(116);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(119);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(122);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == 'G')
        ADVANCE(129);
      if (lookahead == 'H')
        ADVANCE(131);
      if (lookahead == 'L')
        ADVANCE(133);
      if (lookahead == 'N')
        ADVANCE(135);
      if (lookahead == 'R')
        ADVANCE(140);
      if (lookahead == 'S')
        ADVANCE(142);
      if (lookahead == 'U')
        ADVANCE(153);
      if (lookahead == 'V')
        ADVANCE(155);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(159);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(2);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(24);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(74);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      ADVANCE(8);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym__vertical_tab);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '\r')
        ADVANCE(7);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 7:
      if (lookahead == '\n')
        ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(18);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_unit_type);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 18:
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 19:
      if (lookahead == ')')
        ADVANCE(20);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_function_constructor);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(30);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(26);
      if (lookahead != 0)
        ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '}')
        ADVANCE(27);
      if (lookahead != 0)
        ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '\r')
        ADVANCE(28);
      if (lookahead != 0)
        ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead != 0)
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(32);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(35);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-')
        ADVANCE(38);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(45);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_GS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(47);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_HT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(49);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(51);
      if (lookahead == 'U')
        ADVANCE(53);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 51:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(52);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_NAK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 53:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(54);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_NUL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'I')
        ADVANCE(58);
      if (lookahead == 'O')
        ADVANCE(59);
      if (lookahead == 'P')
        ADVANCE(61);
      if (lookahead == 'T')
        ADVANCE(62);
      if (lookahead == 'U')
        ADVANCE(64);
      if (lookahead == 'Y')
        ADVANCE(66);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SI);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'H')
        ADVANCE(60);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SOH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_SP);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 62:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'X')
        ADVANCE(63);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_STX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 64:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(65);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SUB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 66:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(67);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_SYN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(69);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_US);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(71);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_VT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ']')
        ADVANCE(73);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_list_constructor);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 74:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(2);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_v);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(89);
      if (lookahead == 'E')
        ADVANCE(90);
      if (lookahead == 'e')
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(90);
      if (lookahead == 'e')
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 90:
      if (lookahead == '+')
        ADVANCE(91);
      if (lookahead == '-')
        ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(92);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 91:
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(92);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(92);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 93:
      if (lookahead == '}')
        ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(92);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(89);
      if (lookahead == 'E')
        ADVANCE(90);
      if (lookahead == 'e')
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__vertical_tab);
      END_STATE();
    case 98:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(98);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(114);
      if (lookahead == '.')
        ADVANCE(116);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(119);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(122);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == 'G')
        ADVANCE(129);
      if (lookahead == 'H')
        ADVANCE(131);
      if (lookahead == 'L')
        ADVANCE(133);
      if (lookahead == 'N')
        ADVANCE(135);
      if (lookahead == 'R')
        ADVANCE(140);
      if (lookahead == 'S')
        ADVANCE(142);
      if (lookahead == 'U')
        ADVANCE(153);
      if (lookahead == 'V')
        ADVANCE(155);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(159);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')')
        ADVANCE(107);
      if (lookahead == '-')
        ADVANCE(108);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_unit_type);
      END_STATE();
    case 108:
      if (lookahead == '>')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == ')')
        ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_function_constructor);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-')
        ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>')
        ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_GS);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_HT);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(136);
      if (lookahead == 'U')
        ADVANCE(138);
      END_STATE();
    case 136:
      if (lookahead == 'K')
        ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_NAK);
      END_STATE();
    case 138:
      if (lookahead == 'L')
        ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_NUL);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_RS);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'I')
        ADVANCE(143);
      if (lookahead == 'O')
        ADVANCE(144);
      if (lookahead == 'P')
        ADVANCE(146);
      if (lookahead == 'T')
        ADVANCE(147);
      if (lookahead == 'U')
        ADVANCE(149);
      if (lookahead == 'Y')
        ADVANCE(151);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_SI);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H')
        ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_SOH);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_SP);
      END_STATE();
    case 147:
      if (lookahead == 'X')
        ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_STX);
      END_STATE();
    case 149:
      if (lookahead == 'B')
        ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_SUB);
      END_STATE();
    case 151:
      if (lookahead == 'N')
        ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_SYN);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_US);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_VT);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']')
        ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_list_constructor);
      END_STATE();
    case 159:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_v);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'E')
        ADVANCE(175);
      if (lookahead == 'e')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E')
        ADVANCE(175);
      if (lookahead == 'e')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(174);
      END_STATE();
    case 175:
      if (lookahead == '+')
        ADVANCE(176);
      if (lookahead == '-')
        ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(177);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'E')
        ADVANCE(175);
      if (lookahead == 'e')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__ascii_large);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH);
      END_STATE();
    case 181:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(182);
      if (lookahead == '\r')
        ADVANCE(254);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '\\')
        SKIP(265);
      if (lookahead == 'c')
        ADVANCE(266);
      if (lookahead == 'd')
        ADVANCE(272);
      if (lookahead == 'f')
        ADVANCE(283);
      if (lookahead == 'i')
        ADVANCE(290);
      if (lookahead == 'm')
        ADVANCE(308);
      if (lookahead == 'n')
        ADVANCE(314);
      if (lookahead == 't')
        ADVANCE(321);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(181);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 182:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(182);
      if (lookahead == '\r')
        ADVANCE(182);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(193);
      if (lookahead == 'c')
        ADVANCE(194);
      if (lookahead == 'd')
        ADVANCE(200);
      if (lookahead == 'f')
        ADVANCE(211);
      if (lookahead == 'i')
        ADVANCE(218);
      if (lookahead == 'm')
        ADVANCE(236);
      if (lookahead == 'n')
        ADVANCE(242);
      if (lookahead == 't')
        ADVANCE(249);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(182);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      ADVANCE(8);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 184:
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(89);
      if (lookahead == 'E')
        ADVANCE(90);
      if (lookahead == 'O')
        ADVANCE(187);
      if (lookahead == 'X')
        ADVANCE(189);
      if (lookahead == 'e')
        ADVANCE(90);
      if (lookahead == 'o')
        ADVANCE(187);
      if (lookahead == 'x')
        ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 187:
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(188);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__octal_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(188);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 189:
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(190);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(190);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 191:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(35);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 193:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(201);
      if (lookahead == 'e')
        ADVANCE(204);
      if (lookahead == 'o')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(219);
      if (lookahead == 'n')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(225);
      if (lookahead == 's')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(228);
      if (lookahead == 'r')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'w')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 254:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(182);
      if (lookahead == '\r')
        ADVANCE(254);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '\\')
        SKIP(265);
      if (lookahead == 'c')
        ADVANCE(266);
      if (lookahead == 'd')
        ADVANCE(272);
      if (lookahead == 'f')
        ADVANCE(283);
      if (lookahead == 'i')
        ADVANCE(290);
      if (lookahead == 'm')
        ADVANCE(308);
      if (lookahead == 'n')
        ADVANCE(314);
      if (lookahead == 't')
        ADVANCE(321);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(181);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 256:
      if (lookahead == '-')
        ADVANCE(29);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'E')
        ADVANCE(175);
      if (lookahead == 'O')
        ADVANCE(259);
      if (lookahead == 'X')
        ADVANCE(261);
      if (lookahead == 'e')
        ADVANCE(175);
      if (lookahead == 'o')
        ADVANCE(259);
      if (lookahead == 'x')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      END_STATE();
    case 259:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(260);
      END_STATE();
    case 261:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(262);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(262);
      END_STATE();
    case 263:
      if (lookahead == ':')
        ADVANCE(120);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 265:
      if (lookahead == 'n')
        SKIP(181);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'l')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'a')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 's')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 's')
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'a')
        ADVANCE(273);
      if (lookahead == 'e')
        ADVANCE(276);
      if (lookahead == 'o')
        ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 't')
        ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'a')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'f')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'a')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'u')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'l')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 't')
        ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'o')
        ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'r')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'i')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'g')
        ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'n')
        ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'm')
        ADVANCE(291);
      if (lookahead == 'n')
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'p')
        ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'o')
        ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'r')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 't')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'f')
        ADVANCE(297);
      if (lookahead == 's')
        ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'i')
        ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'x')
        ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'l')
        ADVANCE(300);
      if (lookahead == 'r')
        ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 't')
        ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'a')
        ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'n')
        ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'c')
        ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'o')
        ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'd')
        ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'u')
        ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'l')
        ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'w')
        ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 't')
        ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'y')
        ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'p')
        ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'y')
        ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'p')
        ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(325);
      END_STATE();
    case 326:
      if (lookahead == '\n')
        ADVANCE(327);
      if (lookahead == '\r')
        ADVANCE(339);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(340);
      if (lookahead == 'q')
        ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(326);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(350);
      END_STATE();
    case 327:
      if (lookahead == '\n')
        ADVANCE(327);
      if (lookahead == '\r')
        ADVANCE(327);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(328);
      if (lookahead == 'q')
        ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(338);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 328:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(327);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 329:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(330);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 330:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(331);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 331:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(332);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 332:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(333);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 333:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(334);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 334:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(335);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 335:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(336);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 336:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(337);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(338);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(338);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 339:
      if (lookahead == '\n')
        ADVANCE(327);
      if (lookahead == '\r')
        ADVANCE(339);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(340);
      if (lookahead == 'q')
        ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(326);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(350);
      END_STATE();
    case 340:
      if (lookahead == 'n')
        SKIP(326);
      END_STATE();
    case 341:
      if (lookahead == 'u')
        ADVANCE(342);
      END_STATE();
    case 342:
      if (lookahead == 'a')
        ADVANCE(343);
      END_STATE();
    case 343:
      if (lookahead == 'l')
        ADVANCE(344);
      END_STATE();
    case 344:
      if (lookahead == 'i')
        ADVANCE(345);
      END_STATE();
    case 345:
      if (lookahead == 'f')
        ADVANCE(346);
      END_STATE();
    case 346:
      if (lookahead == 'i')
        ADVANCE(347);
      END_STATE();
    case 347:
      if (lookahead == 'e')
        ADVANCE(348);
      END_STATE();
    case 348:
      if (lookahead == 'd')
        ADVANCE(349);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_qualified);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(350);
      if (lookahead == '.')
        ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(350);
      END_STATE();
    case 351:
      if (lookahead == '\n')
        ADVANCE(352);
      if (lookahead == '\r')
        ADVANCE(404);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(408);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(409);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'c')
        ADVANCE(410);
      if (lookahead == 'd')
        ADVANCE(423);
      if (lookahead == 'e')
        ADVANCE(429);
      if (lookahead == 'i')
        ADVANCE(435);
      if (lookahead == 'j')
        ADVANCE(441);
      if (lookahead == 's')
        ADVANCE(444);
      if (lookahead == 'w')
        ADVANCE(451);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(351);
      END_STATE();
    case 352:
      if (lookahead == '\n')
        ADVANCE(352);
      if (lookahead == '\r')
        ADVANCE(352);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(356);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(357);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'c')
        ADVANCE(358);
      if (lookahead == 'd')
        ADVANCE(371);
      if (lookahead == 'e')
        ADVANCE(377);
      if (lookahead == 'i')
        ADVANCE(383);
      if (lookahead == 'j')
        ADVANCE(389);
      if (lookahead == 's')
        ADVANCE(392);
      if (lookahead == 'w')
        ADVANCE(399);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(352);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 356:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 357:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(352);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 358:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(359);
      if (lookahead == 'p')
        ADVANCE(363);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 359:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(360);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 360:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(361);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 361:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(362);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_ccall);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 363:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(364);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 364:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(365);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 365:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(366);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 366:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(367);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 367:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(368);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 368:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 369:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(370);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_cplusplus);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 371:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(372);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 372:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(373);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 373:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(374);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 374:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 375:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(376);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_dotnet);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 377:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 378:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(379);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 379:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(380);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 380:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(381);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 381:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(382);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_foreign_export);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 383:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(384);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 384:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(385);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 385:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(386);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 386:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(387);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 387:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(388);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 389:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(390);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 390:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(391);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_jvm);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 392:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(393);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 393:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(394);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 394:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(395);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 395:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(396);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 396:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(397);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 397:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(398);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_stdcall);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 399:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(400);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 400:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(401);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 401:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(402);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 402:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(403);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 404:
      if (lookahead == '\n')
        ADVANCE(352);
      if (lookahead == '\r')
        ADVANCE(404);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(408);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(409);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'c')
        ADVANCE(410);
      if (lookahead == 'd')
        ADVANCE(423);
      if (lookahead == 'e')
        ADVANCE(429);
      if (lookahead == 'i')
        ADVANCE(435);
      if (lookahead == 'j')
        ADVANCE(441);
      if (lookahead == 's')
        ADVANCE(444);
      if (lookahead == 'w')
        ADVANCE(451);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(351);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(29);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 408:
      if (lookahead == '>')
        ADVANCE(125);
      END_STATE();
    case 409:
      if (lookahead == 'n')
        SKIP(351);
      END_STATE();
    case 410:
      if (lookahead == 'c')
        ADVANCE(411);
      if (lookahead == 'p')
        ADVANCE(415);
      END_STATE();
    case 411:
      if (lookahead == 'a')
        ADVANCE(412);
      END_STATE();
    case 412:
      if (lookahead == 'l')
        ADVANCE(413);
      END_STATE();
    case 413:
      if (lookahead == 'l')
        ADVANCE(414);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_ccall);
      END_STATE();
    case 415:
      if (lookahead == 'l')
        ADVANCE(416);
      END_STATE();
    case 416:
      if (lookahead == 'u')
        ADVANCE(417);
      END_STATE();
    case 417:
      if (lookahead == 's')
        ADVANCE(418);
      END_STATE();
    case 418:
      if (lookahead == 'p')
        ADVANCE(419);
      END_STATE();
    case 419:
      if (lookahead == 'l')
        ADVANCE(420);
      END_STATE();
    case 420:
      if (lookahead == 'u')
        ADVANCE(421);
      END_STATE();
    case 421:
      if (lookahead == 's')
        ADVANCE(422);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_cplusplus);
      END_STATE();
    case 423:
      if (lookahead == 'o')
        ADVANCE(424);
      END_STATE();
    case 424:
      if (lookahead == 't')
        ADVANCE(425);
      END_STATE();
    case 425:
      if (lookahead == 'n')
        ADVANCE(426);
      END_STATE();
    case 426:
      if (lookahead == 'e')
        ADVANCE(427);
      END_STATE();
    case 427:
      if (lookahead == 't')
        ADVANCE(428);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_dotnet);
      END_STATE();
    case 429:
      if (lookahead == 'x')
        ADVANCE(430);
      END_STATE();
    case 430:
      if (lookahead == 'p')
        ADVANCE(431);
      END_STATE();
    case 431:
      if (lookahead == 'o')
        ADVANCE(432);
      END_STATE();
    case 432:
      if (lookahead == 'r')
        ADVANCE(433);
      END_STATE();
    case 433:
      if (lookahead == 't')
        ADVANCE(434);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_foreign_export);
      END_STATE();
    case 435:
      if (lookahead == 'm')
        ADVANCE(436);
      END_STATE();
    case 436:
      if (lookahead == 'p')
        ADVANCE(437);
      END_STATE();
    case 437:
      if (lookahead == 'o')
        ADVANCE(438);
      END_STATE();
    case 438:
      if (lookahead == 'r')
        ADVANCE(439);
      END_STATE();
    case 439:
      if (lookahead == 't')
        ADVANCE(440);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 441:
      if (lookahead == 'v')
        ADVANCE(442);
      END_STATE();
    case 442:
      if (lookahead == 'm')
        ADVANCE(443);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_jvm);
      END_STATE();
    case 444:
      if (lookahead == 't')
        ADVANCE(445);
      END_STATE();
    case 445:
      if (lookahead == 'd')
        ADVANCE(446);
      END_STATE();
    case 446:
      if (lookahead == 'c')
        ADVANCE(447);
      END_STATE();
    case 447:
      if (lookahead == 'a')
        ADVANCE(448);
      END_STATE();
    case 448:
      if (lookahead == 'l')
        ADVANCE(449);
      END_STATE();
    case 449:
      if (lookahead == 'l')
        ADVANCE(450);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_stdcall);
      END_STATE();
    case 451:
      if (lookahead == 'h')
        ADVANCE(452);
      END_STATE();
    case 452:
      if (lookahead == 'e')
        ADVANCE(453);
      END_STATE();
    case 453:
      if (lookahead == 'r')
        ADVANCE(454);
      END_STATE();
    case 454:
      if (lookahead == 'e')
        ADVANCE(455);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 456:
      if (lookahead == '\n')
        ADVANCE(457);
      if (lookahead == '\r')
        ADVANCE(459);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(460);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(456);
      END_STATE();
    case 457:
      if (lookahead == '\n')
        ADVANCE(457);
      if (lookahead == '\r')
        ADVANCE(457);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(458);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(457);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 458:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(457);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 459:
      if (lookahead == '\n')
        ADVANCE(457);
      if (lookahead == '\r')
        ADVANCE(459);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(460);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(456);
      END_STATE();
    case 460:
      if (lookahead == 'n')
        SKIP(456);
      END_STATE();
    case 461:
      if (lookahead == '\n')
        ADVANCE(462);
      if (lookahead == '\r')
        ADVANCE(466);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(467);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(469);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(461);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(468);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 462:
      if (lookahead == '\n')
        ADVANCE(462);
      if (lookahead == '\r')
        ADVANCE(462);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(463);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(465);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(462);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(464);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'O')
        ADVANCE(187);
      if (lookahead == 'X')
        ADVANCE(189);
      if (lookahead == 'o')
        ADVANCE(187);
      if (lookahead == 'x')
        ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(464);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(464);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 465:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(462);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 466:
      if (lookahead == '\n')
        ADVANCE(462);
      if (lookahead == '\r')
        ADVANCE(466);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(467);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(469);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(461);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(468);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == 'O')
        ADVANCE(259);
      if (lookahead == 'X')
        ADVANCE(261);
      if (lookahead == 'o')
        ADVANCE(259);
      if (lookahead == 'x')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(468);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__integer_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(468);
      END_STATE();
    case 469:
      if (lookahead == 'n')
        SKIP(461);
      END_STATE();
    case 470:
      if (lookahead == '\n')
        ADVANCE(471);
      if (lookahead == '\r')
        ADVANCE(476);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(477);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '[')
        ADVANCE(478);
      if (lookahead == '\\')
        SKIP(479);
      if (lookahead == '_')
        ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(470);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 471:
      if (lookahead == '\n')
        ADVANCE(471);
      if (lookahead == '\r')
        ADVANCE(471);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(473);
      if (lookahead == '\\')
        ADVANCE(474);
      if (lookahead == '_')
        ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(471);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 472:
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(30);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 473:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ']')
        ADVANCE(73);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 474:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(471);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 476:
      if (lookahead == '\n')
        ADVANCE(471);
      if (lookahead == '\r')
        ADVANCE(476);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(477);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '[')
        ADVANCE(478);
      if (lookahead == '\\')
        SKIP(479);
      if (lookahead == '_')
        ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(470);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 477:
      if (lookahead == '-')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(115);
      END_STATE();
    case 478:
      if (lookahead == ']')
        ADVANCE(158);
      END_STATE();
    case 479:
      if (lookahead == 'n')
        SKIP(470);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 481:
      if (lookahead == '\n')
        ADVANCE(482);
      if (lookahead == '\r')
        ADVANCE(484);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(485);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(481);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 482:
      if (lookahead == '\n')
        ADVANCE(482);
      if (lookahead == '\r')
        ADVANCE(482);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(483);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(482);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 483:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(482);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 484:
      if (lookahead == '\n')
        ADVANCE(482);
      if (lookahead == '\r')
        ADVANCE(484);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(485);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(481);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 485:
      if (lookahead == 'n')
        SKIP(481);
      END_STATE();
    case 486:
      if (lookahead == '\n')
        ADVANCE(487);
      if (lookahead == '\r')
        ADVANCE(489);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(490);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(486);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 487:
      if (lookahead == '\n')
        ADVANCE(487);
      if (lookahead == '\r')
        ADVANCE(487);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(487);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 488:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(487);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 489:
      if (lookahead == '\n')
        ADVANCE(487);
      if (lookahead == '\r')
        ADVANCE(489);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(490);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(486);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 490:
      if (lookahead == 'n')
        SKIP(486);
      END_STATE();
    case 491:
      if (lookahead == '\t')
        SKIP(491);
      if (lookahead == '\n')
        ADVANCE(492);
      if (lookahead == '\r')
        ADVANCE(497);
      if (lookahead == ' ')
        ADVANCE(498);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(500);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == 8902)
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(501);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 492:
      if (lookahead == '\t')
        ADVANCE(492);
      if (lookahead == '\n')
        ADVANCE(492);
      if (lookahead == '\r')
        ADVANCE(492);
      if (lookahead == ' ')
        ADVANCE(493);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(494);
      if (lookahead == '\\')
        ADVANCE(495);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(492);
      if (lookahead == '\n')
        ADVANCE(492);
      if (lookahead == '\r')
        ADVANCE(492);
      if (lookahead == ' ')
        ADVANCE(493);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(494);
      if (lookahead == '\\')
        ADVANCE(495);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(492);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 497:
      if (lookahead == '\t')
        SKIP(491);
      if (lookahead == '\n')
        ADVANCE(492);
      if (lookahead == '\r')
        ADVANCE(497);
      if (lookahead == ' ')
        ADVANCE(498);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(500);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == 8902)
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(501);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 502:
      if (lookahead == '\t')
        ADVANCE(503);
      if (lookahead == '\n')
        ADVANCE(504);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(509);
      if (lookahead == ' ')
        ADVANCE(498);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(500);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == 8902)
        ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(501);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(505);
      if (lookahead == '\n')
        ADVANCE(504);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(506);
      if (lookahead == ' ')
        ADVANCE(507);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(494);
      if (lookahead == '\\')
        ADVANCE(508);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(496);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(505);
      if (lookahead == '\n')
        ADVANCE(504);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(506);
      if (lookahead == ' ')
        ADVANCE(507);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(494);
      if (lookahead == '\\')
        ADVANCE(508);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(496);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 506:
      if (lookahead == '\t')
        ADVANCE(505);
      if (lookahead == '\n')
        ADVANCE(504);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(506);
      if (lookahead == ' ')
        ADVANCE(507);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(494);
      if (lookahead == '\\')
        ADVANCE(508);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(496);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(505);
      if (lookahead == '\n')
        ADVANCE(504);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(506);
      if (lookahead == ' ')
        ADVANCE(507);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(494);
      if (lookahead == '\\')
        ADVANCE(508);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(496);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(506);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 509:
      if (lookahead == '\t')
        ADVANCE(503);
      if (lookahead == '\n')
        ADVANCE(504);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(509);
      if (lookahead == ' ')
        ADVANCE(498);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(500);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == 8902)
        ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(501);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 510:
      if (lookahead == '\n')
        ADVANCE(511);
      if (lookahead == '\r')
        ADVANCE(513);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(514);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(510);
      END_STATE();
    case 511:
      if (lookahead == '\n')
        ADVANCE(511);
      if (lookahead == '\r')
        ADVANCE(511);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(512);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(511);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 512:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(511);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 513:
      if (lookahead == '\n')
        ADVANCE(511);
      if (lookahead == '\r')
        ADVANCE(513);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(514);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(510);
      END_STATE();
    case 514:
      if (lookahead == 'n')
        SKIP(510);
      END_STATE();
    case 515:
      if (lookahead == '\n')
        ADVANCE(516);
      if (lookahead == '\r')
        ADVANCE(518);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '[')
        ADVANCE(478);
      if (lookahead == '\\')
        SKIP(519);
      if (lookahead == '_')
        ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(515);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 516:
      if (lookahead == '\n')
        ADVANCE(516);
      if (lookahead == '\r')
        ADVANCE(516);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(473);
      if (lookahead == '\\')
        ADVANCE(517);
      if (lookahead == '_')
        ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(516);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 517:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(516);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 518:
      if (lookahead == '\n')
        ADVANCE(516);
      if (lookahead == '\r')
        ADVANCE(518);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '[')
        ADVANCE(478);
      if (lookahead == '\\')
        SKIP(519);
      if (lookahead == '_')
        ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(515);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 519:
      if (lookahead == 'n')
        SKIP(515);
      END_STATE();
    case 520:
      if (lookahead == '\n')
        ADVANCE(521);
      if (lookahead == '\r')
        ADVANCE(523);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(524);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(520);
      END_STATE();
    case 521:
      if (lookahead == '\n')
        ADVANCE(521);
      if (lookahead == '\r')
        ADVANCE(521);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(522);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(521);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 522:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(521);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 523:
      if (lookahead == '\n')
        ADVANCE(521);
      if (lookahead == '\r')
        ADVANCE(523);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(524);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(520);
      END_STATE();
    case 524:
      if (lookahead == 'n')
        SKIP(520);
      END_STATE();
    case 525:
      if (lookahead == '\n')
        ADVANCE(526);
      if (lookahead == '\r')
        ADVANCE(528);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '[')
        ADVANCE(478);
      if (lookahead == '\\')
        SKIP(529);
      if (lookahead == '_')
        ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(525);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 526:
      if (lookahead == '\n')
        ADVANCE(526);
      if (lookahead == '\r')
        ADVANCE(526);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(473);
      if (lookahead == '\\')
        ADVANCE(527);
      if (lookahead == '_')
        ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(526);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 527:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(526);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 528:
      if (lookahead == '\n')
        ADVANCE(526);
      if (lookahead == '\r')
        ADVANCE(528);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '[')
        ADVANCE(478);
      if (lookahead == '\\')
        SKIP(529);
      if (lookahead == '_')
        ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(525);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 529:
      if (lookahead == 'n')
        SKIP(525);
      END_STATE();
    case 530:
      if (lookahead == '\n')
        ADVANCE(531);
      if (lookahead == '\r')
        ADVANCE(533);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(534);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(530);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 531:
      if (lookahead == '\n')
        ADVANCE(531);
      if (lookahead == '\r')
        ADVANCE(531);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(531);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 532:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(531);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 533:
      if (lookahead == '\n')
        ADVANCE(531);
      if (lookahead == '\r')
        ADVANCE(533);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(534);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(530);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 534:
      if (lookahead == 'n')
        SKIP(530);
      END_STATE();
    case 535:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(536);
      if (lookahead == '\r')
        ADVANCE(538);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(539);
      if (lookahead == 'c')
        ADVANCE(266);
      if (lookahead == 'd')
        ADVANCE(272);
      if (lookahead == 'f')
        ADVANCE(283);
      if (lookahead == 'i')
        ADVANCE(290);
      if (lookahead == 'n')
        ADVANCE(314);
      if (lookahead == 't')
        ADVANCE(321);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(535);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 536:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(536);
      if (lookahead == '\r')
        ADVANCE(536);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(537);
      if (lookahead == 'c')
        ADVANCE(194);
      if (lookahead == 'd')
        ADVANCE(200);
      if (lookahead == 'f')
        ADVANCE(211);
      if (lookahead == 'i')
        ADVANCE(218);
      if (lookahead == 'n')
        ADVANCE(242);
      if (lookahead == 't')
        ADVANCE(249);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(536);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      ADVANCE(8);
      END_STATE();
    case 537:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(536);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 538:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(536);
      if (lookahead == '\r')
        ADVANCE(538);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(539);
      if (lookahead == 'c')
        ADVANCE(266);
      if (lookahead == 'd')
        ADVANCE(272);
      if (lookahead == 'f')
        ADVANCE(283);
      if (lookahead == 'i')
        ADVANCE(290);
      if (lookahead == 'n')
        ADVANCE(314);
      if (lookahead == 't')
        ADVANCE(321);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(535);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 539:
      if (lookahead == 'n')
        SKIP(535);
      END_STATE();
    case 540:
      if (lookahead == '\n')
        ADVANCE(541);
      if (lookahead == '\r')
        ADVANCE(551);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(552);
      if (lookahead == 'a')
        ADVANCE(553);
      if (lookahead == 'h')
        ADVANCE(555);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(540);
      END_STATE();
    case 541:
      if (lookahead == '\n')
        ADVANCE(541);
      if (lookahead == '\r')
        ADVANCE(541);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(542);
      if (lookahead == 'a')
        ADVANCE(543);
      if (lookahead == 'h')
        ADVANCE(545);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(541);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 542:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(541);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 543:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(544);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 545:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(546);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 546:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(547);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 547:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(548);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 548:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(549);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 549:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(550);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 551:
      if (lookahead == '\n')
        ADVANCE(541);
      if (lookahead == '\r')
        ADVANCE(551);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(552);
      if (lookahead == 'a')
        ADVANCE(553);
      if (lookahead == 'h')
        ADVANCE(555);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(540);
      END_STATE();
    case 552:
      if (lookahead == 'n')
        SKIP(540);
      END_STATE();
    case 553:
      if (lookahead == 's')
        ADVANCE(554);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 555:
      if (lookahead == 'i')
        ADVANCE(556);
      END_STATE();
    case 556:
      if (lookahead == 'd')
        ADVANCE(557);
      END_STATE();
    case 557:
      if (lookahead == 'i')
        ADVANCE(558);
      END_STATE();
    case 558:
      if (lookahead == 'n')
        ADVANCE(559);
      END_STATE();
    case 559:
      if (lookahead == 'g')
        ADVANCE(560);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 561:
      if (lookahead == '\n')
        ADVANCE(562);
      if (lookahead == '\r')
        ADVANCE(565);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(477);
      if (lookahead == '.')
        ADVANCE(566);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(567);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(561);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 562:
      if (lookahead == '\n')
        ADVANCE(562);
      if (lookahead == '\r')
        ADVANCE(562);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == '.')
        ADVANCE(563);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(564);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(562);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 563:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(32);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 564:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(562);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 565:
      if (lookahead == '\n')
        ADVANCE(562);
      if (lookahead == '\r')
        ADVANCE(565);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(477);
      if (lookahead == '.')
        ADVANCE(566);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(567);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(561);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 566:
      if (lookahead == '.')
        ADVANCE(117);
      END_STATE();
    case 567:
      if (lookahead == 'n')
        SKIP(561);
      END_STATE();
    case 568:
      if (lookahead == '\n')
        ADVANCE(569);
      if (lookahead == '\r')
        ADVANCE(572);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(573);
      if (lookahead == 'd')
        ADVANCE(574);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(568);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 569:
      if (lookahead == '\n')
        ADVANCE(569);
      if (lookahead == '\r')
        ADVANCE(569);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(570);
      if (lookahead == 'd')
        ADVANCE(571);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(569);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 570:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(569);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 572:
      if (lookahead == '\n')
        ADVANCE(569);
      if (lookahead == '\r')
        ADVANCE(572);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(573);
      if (lookahead == 'd')
        ADVANCE(574);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(568);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 573:
      if (lookahead == 'n')
        SKIP(568);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'o')
        ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 575:
      if (lookahead == '\n')
        ADVANCE(576);
      if (lookahead == '\r')
        ADVANCE(578);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(579);
      if (lookahead == 'd')
        ADVANCE(574);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(575);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 576:
      if (lookahead == '\n')
        ADVANCE(576);
      if (lookahead == '\r')
        ADVANCE(576);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(577);
      if (lookahead == 'd')
        ADVANCE(571);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(576);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 577:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(576);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 578:
      if (lookahead == '\n')
        ADVANCE(576);
      if (lookahead == '\r')
        ADVANCE(578);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(579);
      if (lookahead == 'd')
        ADVANCE(574);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(575);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 579:
      if (lookahead == 'n')
        SKIP(575);
      END_STATE();
    case 580:
      if (lookahead == '\n')
        ADVANCE(581);
      if (lookahead == '\r')
        ADVANCE(588);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(589);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'w')
        ADVANCE(590);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(580);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 581:
      if (lookahead == '\n')
        ADVANCE(581);
      if (lookahead == '\r')
        ADVANCE(581);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(582);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'w')
        ADVANCE(583);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(581);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 582:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(581);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 588:
      if (lookahead == '\n')
        ADVANCE(581);
      if (lookahead == '\r')
        ADVANCE(588);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(589);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'w')
        ADVANCE(590);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(580);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 589:
      if (lookahead == 'n')
        SKIP(580);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'h')
        ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'r')
        ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 595:
      if (lookahead == '\n')
        ADVANCE(596);
      if (lookahead == '\r')
        ADVANCE(598);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(599);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(595);
      END_STATE();
    case 596:
      if (lookahead == '\n')
        ADVANCE(596);
      if (lookahead == '\r')
        ADVANCE(596);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(597);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(596);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 597:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(596);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 598:
      if (lookahead == '\n')
        ADVANCE(596);
      if (lookahead == '\r')
        ADVANCE(598);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(599);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(595);
      END_STATE();
    case 599:
      if (lookahead == 'n')
        SKIP(595);
      END_STATE();
    case 600:
      if (lookahead == '\n')
        ADVANCE(601);
      if (lookahead == '\r')
        ADVANCE(603);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(604);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(600);
      END_STATE();
    case 601:
      if (lookahead == '\n')
        ADVANCE(601);
      if (lookahead == '\r')
        ADVANCE(601);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(602);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(601);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 602:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(601);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 603:
      if (lookahead == '\n')
        ADVANCE(601);
      if (lookahead == '\r')
        ADVANCE(603);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(604);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(600);
      END_STATE();
    case 604:
      if (lookahead == 'n')
        SKIP(600);
      END_STATE();
    case 605:
      if (lookahead == '\n')
        ADVANCE(606);
      if (lookahead == '\r')
        ADVANCE(608);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(478);
      if (lookahead == '\\')
        SKIP(609);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(480);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(605);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 606:
      if (lookahead == '\n')
        ADVANCE(606);
      if (lookahead == '\r')
        ADVANCE(606);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(473);
      if (lookahead == '\\')
        ADVANCE(607);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(475);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(606);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 607:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(606);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 608:
      if (lookahead == '\n')
        ADVANCE(606);
      if (lookahead == '\r')
        ADVANCE(608);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(478);
      if (lookahead == '\\')
        SKIP(609);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(480);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(605);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 609:
      if (lookahead == 'n')
        SKIP(605);
      END_STATE();
    case 610:
      if (lookahead == '\n')
        ADVANCE(611);
      if (lookahead == '\r')
        ADVANCE(613);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(614);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(610);
      END_STATE();
    case 611:
      if (lookahead == '\n')
        ADVANCE(611);
      if (lookahead == '\r')
        ADVANCE(611);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(612);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(611);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 612:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(611);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 613:
      if (lookahead == '\n')
        ADVANCE(611);
      if (lookahead == '\r')
        ADVANCE(613);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(614);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(610);
      END_STATE();
    case 614:
      if (lookahead == 'n')
        SKIP(610);
      END_STATE();
    case 615:
      if (lookahead == '\n')
        ADVANCE(616);
      if (lookahead == '\r')
        ADVANCE(626);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(627);
      if (lookahead == 'd')
        ADVANCE(628);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(615);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 616:
      if (lookahead == '\n')
        ADVANCE(616);
      if (lookahead == '\r')
        ADVANCE(616);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(617);
      if (lookahead == 'd')
        ADVANCE(618);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(616);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 617:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(616);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 626:
      if (lookahead == '\n')
        ADVANCE(616);
      if (lookahead == '\r')
        ADVANCE(626);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(627);
      if (lookahead == 'd')
        ADVANCE(628);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(615);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 627:
      if (lookahead == 'n')
        SKIP(615);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'r')
        ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'i')
        ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'v')
        ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'i')
        ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'n')
        ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'g')
        ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 636:
      if (lookahead == '\n')
        ADVANCE(637);
      if (lookahead == '\r')
        ADVANCE(647);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(648);
      if (lookahead == 'd')
        ADVANCE(649);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(636);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 637:
      if (lookahead == '\n')
        ADVANCE(637);
      if (lookahead == '\r')
        ADVANCE(637);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(638);
      if (lookahead == 'd')
        ADVANCE(639);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(637);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 638:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(637);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 639:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(640);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 640:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(641);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 641:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(642);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 642:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(643);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 643:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(644);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 644:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(645);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 645:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(646);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 647:
      if (lookahead == '\n')
        ADVANCE(637);
      if (lookahead == '\r')
        ADVANCE(647);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(648);
      if (lookahead == 'd')
        ADVANCE(649);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(636);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 648:
      if (lookahead == 'n')
        SKIP(636);
      END_STATE();
    case 649:
      if (lookahead == 'e')
        ADVANCE(650);
      END_STATE();
    case 650:
      if (lookahead == 'r')
        ADVANCE(651);
      END_STATE();
    case 651:
      if (lookahead == 'i')
        ADVANCE(652);
      END_STATE();
    case 652:
      if (lookahead == 'v')
        ADVANCE(653);
      END_STATE();
    case 653:
      if (lookahead == 'i')
        ADVANCE(654);
      END_STATE();
    case 654:
      if (lookahead == 'n')
        ADVANCE(655);
      END_STATE();
    case 655:
      if (lookahead == 'g')
        ADVANCE(656);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_deriving);
      END_STATE();
    case 657:
      if (lookahead == '\n')
        ADVANCE(658);
      if (lookahead == '\r')
        ADVANCE(660);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(661);
      if (lookahead == 'd')
        ADVANCE(628);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(657);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 658:
      if (lookahead == '\n')
        ADVANCE(658);
      if (lookahead == '\r')
        ADVANCE(658);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(659);
      if (lookahead == 'd')
        ADVANCE(618);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(658);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 659:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(658);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 660:
      if (lookahead == '\n')
        ADVANCE(658);
      if (lookahead == '\r')
        ADVANCE(660);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(661);
      if (lookahead == 'd')
        ADVANCE(628);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(657);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 661:
      if (lookahead == 'n')
        SKIP(657);
      END_STATE();
    case 662:
      if (lookahead == '\n')
        ADVANCE(663);
      if (lookahead == '\r')
        ADVANCE(715);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == 'A')
        ADVANCE(716);
      if (lookahead == 'B')
        ADVANCE(719);
      if (lookahead == 'C')
        ADVANCE(723);
      if (lookahead == 'D')
        ADVANCE(727);
      if (lookahead == 'E')
        ADVANCE(737);
      if (lookahead == 'F')
        ADVANCE(748);
      if (lookahead == 'G')
        ADVANCE(751);
      if (lookahead == 'H')
        ADVANCE(752);
      if (lookahead == 'L')
        ADVANCE(753);
      if (lookahead == 'N')
        ADVANCE(754);
      if (lookahead == 'O')
        ADVANCE(755);
      if (lookahead == 'R')
        ADVANCE(756);
      if (lookahead == 'S')
        ADVANCE(757);
      if (lookahead == 'U')
        ADVANCE(758);
      if (lookahead == 'V')
        ADVANCE(759);
      if (lookahead == 'X')
        ADVANCE(760);
      if (lookahead == '\\')
        ADVANCE(500);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 'a')
        ADVANCE(761);
      if (lookahead == 'b')
        ADVANCE(762);
      if (lookahead == 'f')
        ADVANCE(763);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(764);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == 'x')
        ADVANCE(765);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(662);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(501);
      END_STATE();
    case 663:
      if (lookahead == '\n')
        ADVANCE(663);
      if (lookahead == '\r')
        ADVANCE(663);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == 'A')
        ADVANCE(664);
      if (lookahead == 'B')
        ADVANCE(667);
      if (lookahead == 'C')
        ADVANCE(671);
      if (lookahead == 'D')
        ADVANCE(675);
      if (lookahead == 'E')
        ADVANCE(685);
      if (lookahead == 'F')
        ADVANCE(696);
      if (lookahead == 'G')
        ADVANCE(699);
      if (lookahead == 'H')
        ADVANCE(700);
      if (lookahead == 'L')
        ADVANCE(701);
      if (lookahead == 'N')
        ADVANCE(702);
      if (lookahead == 'O')
        ADVANCE(703);
      if (lookahead == 'R')
        ADVANCE(704);
      if (lookahead == 'S')
        ADVANCE(705);
      if (lookahead == 'U')
        ADVANCE(706);
      if (lookahead == 'V')
        ADVANCE(707);
      if (lookahead == 'X')
        ADVANCE(708);
      if (lookahead == '\\')
        ADVANCE(709);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == 'a')
        ADVANCE(710);
      if (lookahead == 'b')
        ADVANCE(711);
      if (lookahead == 'f')
        ADVANCE(712);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(713);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(714);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(496);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 664:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(665);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 665:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(666);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 667:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(668);
      if (lookahead == 'S')
        ADVANCE(670);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 668:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(669);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 671:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(672);
      if (lookahead == 'R')
        ADVANCE(674);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 672:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(673);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 675:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(676);
      if (lookahead == 'E')
        ADVANCE(681);
      if (lookahead == 'L')
        ADVANCE(683);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 676:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '1')
        ADVANCE(677);
      if (lookahead == '2')
        ADVANCE(678);
      if (lookahead == '3')
        ADVANCE(679);
      if (lookahead == '4')
        ADVANCE(680);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 681:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(682);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_DEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 683:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(684);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 685:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(686);
      if (lookahead == 'N')
        ADVANCE(687);
      if (lookahead == 'O')
        ADVANCE(689);
      if (lookahead == 'S')
        ADVANCE(691);
      if (lookahead == 'T')
        ADVANCE(693);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 687:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'Q')
        ADVANCE(688);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 689:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(690);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_EOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 691:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(692);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 693:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(694);
      if (lookahead == 'X')
        ADVANCE(695);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 696:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(697);
      if (lookahead == 'S')
        ADVANCE(698);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 699:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(45);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 700:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(47);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 701:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(49);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 702:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(51);
      if (lookahead == 'U')
        ADVANCE(53);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 704:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 705:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'I')
        ADVANCE(58);
      if (lookahead == 'O')
        ADVANCE(59);
      if (lookahead == 'P')
        ADVANCE(61);
      if (lookahead == 'T')
        ADVANCE(62);
      if (lookahead == 'U')
        ADVANCE(64);
      if (lookahead == 'Y')
        ADVANCE(66);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 706:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(69);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 707:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(71);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(663);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 715:
      if (lookahead == '\n')
        ADVANCE(663);
      if (lookahead == '\r')
        ADVANCE(715);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == 'A')
        ADVANCE(716);
      if (lookahead == 'B')
        ADVANCE(719);
      if (lookahead == 'C')
        ADVANCE(723);
      if (lookahead == 'D')
        ADVANCE(727);
      if (lookahead == 'E')
        ADVANCE(737);
      if (lookahead == 'F')
        ADVANCE(748);
      if (lookahead == 'G')
        ADVANCE(751);
      if (lookahead == 'H')
        ADVANCE(752);
      if (lookahead == 'L')
        ADVANCE(753);
      if (lookahead == 'N')
        ADVANCE(754);
      if (lookahead == 'O')
        ADVANCE(755);
      if (lookahead == 'R')
        ADVANCE(756);
      if (lookahead == 'S')
        ADVANCE(757);
      if (lookahead == 'U')
        ADVANCE(758);
      if (lookahead == 'V')
        ADVANCE(759);
      if (lookahead == 'X')
        ADVANCE(760);
      if (lookahead == '\\')
        ADVANCE(500);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 'a')
        ADVANCE(761);
      if (lookahead == 'b')
        ADVANCE(762);
      if (lookahead == 'f')
        ADVANCE(763);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(764);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == 'x')
        ADVANCE(765);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(662);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(501);
      END_STATE();
    case 716:
      if (lookahead == 'C')
        ADVANCE(717);
      END_STATE();
    case 717:
      if (lookahead == 'K')
        ADVANCE(718);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 719:
      if (lookahead == 'E')
        ADVANCE(720);
      if (lookahead == 'S')
        ADVANCE(722);
      END_STATE();
    case 720:
      if (lookahead == 'L')
        ADVANCE(721);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 723:
      if (lookahead == 'A')
        ADVANCE(724);
      if (lookahead == 'R')
        ADVANCE(726);
      END_STATE();
    case 724:
      if (lookahead == 'N')
        ADVANCE(725);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 727:
      if (lookahead == 'C')
        ADVANCE(728);
      if (lookahead == 'E')
        ADVANCE(733);
      if (lookahead == 'L')
        ADVANCE(735);
      END_STATE();
    case 728:
      if (lookahead == '1')
        ADVANCE(729);
      if (lookahead == '2')
        ADVANCE(730);
      if (lookahead == '3')
        ADVANCE(731);
      if (lookahead == '4')
        ADVANCE(732);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 733:
      if (lookahead == 'L')
        ADVANCE(734);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 735:
      if (lookahead == 'E')
        ADVANCE(736);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 737:
      if (lookahead == 'M')
        ADVANCE(738);
      if (lookahead == 'N')
        ADVANCE(739);
      if (lookahead == 'O')
        ADVANCE(741);
      if (lookahead == 'S')
        ADVANCE(743);
      if (lookahead == 'T')
        ADVANCE(745);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 739:
      if (lookahead == 'Q')
        ADVANCE(740);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 741:
      if (lookahead == 'T')
        ADVANCE(742);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 743:
      if (lookahead == 'C')
        ADVANCE(744);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 745:
      if (lookahead == 'B')
        ADVANCE(746);
      if (lookahead == 'X')
        ADVANCE(747);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 748:
      if (lookahead == 'F')
        ADVANCE(749);
      if (lookahead == 'S')
        ADVANCE(750);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 751:
      if (lookahead == 'S')
        ADVANCE(130);
      END_STATE();
    case 752:
      if (lookahead == 'T')
        ADVANCE(132);
      END_STATE();
    case 753:
      if (lookahead == 'F')
        ADVANCE(134);
      END_STATE();
    case 754:
      if (lookahead == 'A')
        ADVANCE(136);
      if (lookahead == 'U')
        ADVANCE(138);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 756:
      if (lookahead == 'S')
        ADVANCE(141);
      END_STATE();
    case 757:
      if (lookahead == 'I')
        ADVANCE(143);
      if (lookahead == 'O')
        ADVANCE(144);
      if (lookahead == 'P')
        ADVANCE(146);
      if (lookahead == 'T')
        ADVANCE(147);
      if (lookahead == 'U')
        ADVANCE(149);
      if (lookahead == 'Y')
        ADVANCE(151);
      END_STATE();
    case 758:
      if (lookahead == 'S')
        ADVANCE(154);
      END_STATE();
    case 759:
      if (lookahead == 'T')
        ADVANCE(156);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 766:
      if (lookahead == '\t')
        ADVANCE(503);
      if (lookahead == '\n')
        ADVANCE(767);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(778);
      if (lookahead == ' ')
        ADVANCE(498);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == 'A')
        ADVANCE(779);
      if (lookahead == 'B')
        ADVANCE(780);
      if (lookahead == 'C')
        ADVANCE(781);
      if (lookahead == 'D')
        ADVANCE(782);
      if (lookahead == 'E')
        ADVANCE(783);
      if (lookahead == 'F')
        ADVANCE(784);
      if (lookahead == 'G')
        ADVANCE(129);
      if (lookahead == 'H')
        ADVANCE(131);
      if (lookahead == 'L')
        ADVANCE(133);
      if (lookahead == 'N')
        ADVANCE(135);
      if (lookahead == 'O')
        ADVANCE(755);
      if (lookahead == 'R')
        ADVANCE(140);
      if (lookahead == 'S')
        ADVANCE(142);
      if (lookahead == 'U')
        ADVANCE(153);
      if (lookahead == 'V')
        ADVANCE(155);
      if (lookahead == 'X')
        ADVANCE(760);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(500);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'a')
        ADVANCE(761);
      if (lookahead == 'b')
        ADVANCE(762);
      if (lookahead == 'f')
        ADVANCE(763);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(764);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == 'x')
        ADVANCE(765);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == 8902)
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(501);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(768);
      if (lookahead == '\n')
        ADVANCE(767);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(769);
      if (lookahead == ' ')
        ADVANCE(770);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'A')
        ADVANCE(771);
      if (lookahead == 'B')
        ADVANCE(772);
      if (lookahead == 'C')
        ADVANCE(773);
      if (lookahead == 'D')
        ADVANCE(774);
      if (lookahead == 'E')
        ADVANCE(775);
      if (lookahead == 'F')
        ADVANCE(776);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'O')
        ADVANCE(703);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(708);
      if (lookahead == '[')
        ADVANCE(494);
      if (lookahead == '\\')
        ADVANCE(777);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(710);
      if (lookahead == 'b')
        ADVANCE(711);
      if (lookahead == 'f')
        ADVANCE(712);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(713);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(714);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(496);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(768);
      if (lookahead == '\n')
        ADVANCE(767);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(769);
      if (lookahead == ' ')
        ADVANCE(770);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'A')
        ADVANCE(771);
      if (lookahead == 'B')
        ADVANCE(772);
      if (lookahead == 'C')
        ADVANCE(773);
      if (lookahead == 'D')
        ADVANCE(774);
      if (lookahead == 'E')
        ADVANCE(775);
      if (lookahead == 'F')
        ADVANCE(776);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'O')
        ADVANCE(703);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(708);
      if (lookahead == '[')
        ADVANCE(494);
      if (lookahead == '\\')
        ADVANCE(777);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(710);
      if (lookahead == 'b')
        ADVANCE(711);
      if (lookahead == 'f')
        ADVANCE(712);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(713);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(714);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(496);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 769:
      if (lookahead == '\t')
        ADVANCE(768);
      if (lookahead == '\n')
        ADVANCE(767);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(769);
      if (lookahead == ' ')
        ADVANCE(770);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'A')
        ADVANCE(771);
      if (lookahead == 'B')
        ADVANCE(772);
      if (lookahead == 'C')
        ADVANCE(773);
      if (lookahead == 'D')
        ADVANCE(774);
      if (lookahead == 'E')
        ADVANCE(775);
      if (lookahead == 'F')
        ADVANCE(776);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'O')
        ADVANCE(703);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(708);
      if (lookahead == '[')
        ADVANCE(494);
      if (lookahead == '\\')
        ADVANCE(777);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(710);
      if (lookahead == 'b')
        ADVANCE(711);
      if (lookahead == 'f')
        ADVANCE(712);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(713);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(714);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(496);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(768);
      if (lookahead == '\n')
        ADVANCE(767);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(769);
      if (lookahead == ' ')
        ADVANCE(770);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'A')
        ADVANCE(771);
      if (lookahead == 'B')
        ADVANCE(772);
      if (lookahead == 'C')
        ADVANCE(773);
      if (lookahead == 'D')
        ADVANCE(774);
      if (lookahead == 'E')
        ADVANCE(775);
      if (lookahead == 'F')
        ADVANCE(776);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'O')
        ADVANCE(703);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(708);
      if (lookahead == '[')
        ADVANCE(494);
      if (lookahead == '\\')
        ADVANCE(777);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(710);
      if (lookahead == 'b')
        ADVANCE(711);
      if (lookahead == 'f')
        ADVANCE(712);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(713);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(714);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(496);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(665);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(668);
      if (lookahead == 'S')
        ADVANCE(670);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(672);
      if (lookahead == 'R')
        ADVANCE(674);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(676);
      if (lookahead == 'E')
        ADVANCE(681);
      if (lookahead == 'L')
        ADVANCE(683);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(686);
      if (lookahead == 'N')
        ADVANCE(687);
      if (lookahead == 'O')
        ADVANCE(689);
      if (lookahead == 'S')
        ADVANCE(691);
      if (lookahead == 'T')
        ADVANCE(693);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(697);
      if (lookahead == 'S')
        ADVANCE(698);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(769);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 778:
      if (lookahead == '\t')
        ADVANCE(503);
      if (lookahead == '\n')
        ADVANCE(767);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(778);
      if (lookahead == ' ')
        ADVANCE(498);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == 'A')
        ADVANCE(779);
      if (lookahead == 'B')
        ADVANCE(780);
      if (lookahead == 'C')
        ADVANCE(781);
      if (lookahead == 'D')
        ADVANCE(782);
      if (lookahead == 'E')
        ADVANCE(783);
      if (lookahead == 'F')
        ADVANCE(784);
      if (lookahead == 'G')
        ADVANCE(129);
      if (lookahead == 'H')
        ADVANCE(131);
      if (lookahead == 'L')
        ADVANCE(133);
      if (lookahead == 'N')
        ADVANCE(135);
      if (lookahead == 'O')
        ADVANCE(755);
      if (lookahead == 'R')
        ADVANCE(140);
      if (lookahead == 'S')
        ADVANCE(142);
      if (lookahead == 'U')
        ADVANCE(153);
      if (lookahead == 'V')
        ADVANCE(155);
      if (lookahead == 'X')
        ADVANCE(760);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(500);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'a')
        ADVANCE(761);
      if (lookahead == 'b')
        ADVANCE(762);
      if (lookahead == 'f')
        ADVANCE(763);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(764);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == 'x')
        ADVANCE(765);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == 8902)
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(501);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(717);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(720);
      if (lookahead == 'S')
        ADVANCE(722);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(724);
      if (lookahead == 'R')
        ADVANCE(726);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(728);
      if (lookahead == 'E')
        ADVANCE(733);
      if (lookahead == 'L')
        ADVANCE(735);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(738);
      if (lookahead == 'N')
        ADVANCE(739);
      if (lookahead == 'O')
        ADVANCE(741);
      if (lookahead == 'S')
        ADVANCE(743);
      if (lookahead == 'T')
        ADVANCE(745);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(749);
      if (lookahead == 'S')
        ADVANCE(750);
      END_STATE();
    case 785:
      if (lookahead == '\n')
        ADVANCE(786);
      if (lookahead == '\r')
        ADVANCE(788);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '[')
        ADVANCE(478);
      if (lookahead == '\\')
        SKIP(789);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(480);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(785);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 786:
      if (lookahead == '\n')
        ADVANCE(786);
      if (lookahead == '\r')
        ADVANCE(786);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(473);
      if (lookahead == '\\')
        ADVANCE(787);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(475);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(786);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 787:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(786);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 788:
      if (lookahead == '\n')
        ADVANCE(786);
      if (lookahead == '\r')
        ADVANCE(788);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '[')
        ADVANCE(478);
      if (lookahead == '\\')
        SKIP(789);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(480);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(785);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 789:
      if (lookahead == 'n')
        SKIP(785);
      END_STATE();
    case 790:
      if (lookahead == '\n')
        ADVANCE(791);
      if (lookahead == '\r')
        ADVANCE(794);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(477);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(795);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(790);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(796);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 791:
      if (lookahead == '\n')
        ADVANCE(791);
      if (lookahead == '\r')
        ADVANCE(791);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(792);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(791);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(793);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 792:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(791);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(793);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(793);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 794:
      if (lookahead == '\n')
        ADVANCE(791);
      if (lookahead == '\r')
        ADVANCE(794);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(477);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(795);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(790);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(796);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 795:
      if (lookahead == 'n')
        SKIP(790);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(796);
      if (lookahead == '.')
        ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(796);
      END_STATE();
    case 797:
      if (lookahead == '\n')
        ADVANCE(798);
      if (lookahead == '\r')
        ADVANCE(810);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(811);
      if (lookahead == 's')
        ADVANCE(812);
      if (lookahead == 'u')
        ADVANCE(816);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(797);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 798:
      if (lookahead == '\n')
        ADVANCE(798);
      if (lookahead == '\r')
        ADVANCE(798);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(799);
      if (lookahead == 's')
        ADVANCE(800);
      if (lookahead == 'u')
        ADVANCE(804);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(798);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 799:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(798);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_safe);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_unsafe);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 810:
      if (lookahead == '\n')
        ADVANCE(798);
      if (lookahead == '\r')
        ADVANCE(810);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(811);
      if (lookahead == 's')
        ADVANCE(812);
      if (lookahead == 'u')
        ADVANCE(816);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(797);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 811:
      if (lookahead == 'n')
        SKIP(797);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'a')
        ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'f')
        ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_safe);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'n')
        ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 's')
        ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'a')
        ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'f')
        ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_unsafe);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 822:
      if (lookahead == '\n')
        ADVANCE(823);
      if (lookahead == '\r')
        ADVANCE(825);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(477);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '=')
        ADVANCE(408);
      if (lookahead == '\\')
        SKIP(826);
      if (lookahead == 'w')
        ADVANCE(590);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(822);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 823:
      if (lookahead == '\n')
        ADVANCE(823);
      if (lookahead == '\r')
        ADVANCE(823);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == '=')
        ADVANCE(356);
      if (lookahead == '\\')
        ADVANCE(824);
      if (lookahead == 'w')
        ADVANCE(583);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(823);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 824:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(823);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 825:
      if (lookahead == '\n')
        ADVANCE(823);
      if (lookahead == '\r')
        ADVANCE(825);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(477);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '=')
        ADVANCE(408);
      if (lookahead == '\\')
        SKIP(826);
      if (lookahead == 'w')
        ADVANCE(590);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(822);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 826:
      if (lookahead == 'n')
        SKIP(822);
      END_STATE();
    case 827:
      if (lookahead == '\n')
        ADVANCE(828);
      if (lookahead == '\r')
        ADVANCE(830);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(831);
      if (lookahead == 'd')
        ADVANCE(628);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(827);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 828:
      if (lookahead == '\n')
        ADVANCE(828);
      if (lookahead == '\r')
        ADVANCE(828);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(829);
      if (lookahead == 'd')
        ADVANCE(618);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(828);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 829:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(828);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 830:
      if (lookahead == '\n')
        ADVANCE(828);
      if (lookahead == '\r')
        ADVANCE(830);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(831);
      if (lookahead == 'd')
        ADVANCE(628);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(827);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 831:
      if (lookahead == 'n')
        SKIP(827);
      END_STATE();
    case 832:
      if (lookahead == '\n')
        ADVANCE(833);
      if (lookahead == '\r')
        ADVANCE(835);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(836);
      if (lookahead == 'd')
        ADVANCE(649);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(832);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 833:
      if (lookahead == '\n')
        ADVANCE(833);
      if (lookahead == '\r')
        ADVANCE(833);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(834);
      if (lookahead == 'd')
        ADVANCE(639);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(833);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 834:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(833);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 835:
      if (lookahead == '\n')
        ADVANCE(833);
      if (lookahead == '\r')
        ADVANCE(835);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(836);
      if (lookahead == 'd')
        ADVANCE(649);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(832);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 836:
      if (lookahead == 'n')
        SKIP(832);
      END_STATE();
    case 837:
      if (lookahead == '\n')
        ADVANCE(838);
      if (lookahead == '\r')
        ADVANCE(840);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(841);
      if (lookahead == 'd')
        ADVANCE(649);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(837);
      END_STATE();
    case 838:
      if (lookahead == '\n')
        ADVANCE(838);
      if (lookahead == '\r')
        ADVANCE(838);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(839);
      if (lookahead == 'd')
        ADVANCE(639);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(838);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 839:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(838);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 840:
      if (lookahead == '\n')
        ADVANCE(838);
      if (lookahead == '\r')
        ADVANCE(840);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(841);
      if (lookahead == 'd')
        ADVANCE(649);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(837);
      END_STATE();
    case 841:
      if (lookahead == 'n')
        SKIP(837);
      END_STATE();
    case 842:
      if (lookahead == '\n')
        ADVANCE(843);
      if (lookahead == '\r')
        ADVANCE(845);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(846);
      if (lookahead == 'd')
        ADVANCE(649);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(842);
      END_STATE();
    case 843:
      if (lookahead == '\n')
        ADVANCE(843);
      if (lookahead == '\r')
        ADVANCE(843);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(844);
      if (lookahead == 'd')
        ADVANCE(639);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(843);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 844:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(843);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 845:
      if (lookahead == '\n')
        ADVANCE(843);
      if (lookahead == '\r')
        ADVANCE(845);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(846);
      if (lookahead == 'd')
        ADVANCE(649);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(842);
      END_STATE();
    case 846:
      if (lookahead == 'n')
        SKIP(842);
      END_STATE();
    case 847:
      if (lookahead == '\n')
        ADVANCE(848);
      if (lookahead == '\r')
        ADVANCE(850);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(851);
      if (lookahead == 'd')
        ADVANCE(628);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(847);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 848:
      if (lookahead == '\n')
        ADVANCE(848);
      if (lookahead == '\r')
        ADVANCE(848);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(849);
      if (lookahead == 'd')
        ADVANCE(618);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(848);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 849:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(848);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 850:
      if (lookahead == '\n')
        ADVANCE(848);
      if (lookahead == '\r')
        ADVANCE(850);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(851);
      if (lookahead == 'd')
        ADVANCE(628);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(847);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 851:
      if (lookahead == 'n')
        SKIP(847);
      END_STATE();
    case 852:
      if (lookahead == '\n')
        ADVANCE(853);
      if (lookahead == '\r')
        ADVANCE(855);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(856);
      if (lookahead == 'd')
        ADVANCE(628);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(852);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 853:
      if (lookahead == '\n')
        ADVANCE(853);
      if (lookahead == '\r')
        ADVANCE(853);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(854);
      if (lookahead == 'd')
        ADVANCE(618);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(853);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 854:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(853);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 855:
      if (lookahead == '\n')
        ADVANCE(853);
      if (lookahead == '\r')
        ADVANCE(855);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(856);
      if (lookahead == 'd')
        ADVANCE(628);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(852);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 856:
      if (lookahead == 'n')
        SKIP(852);
      END_STATE();
    case 857:
      if (lookahead == '\n')
        ADVANCE(858);
      if (lookahead == '\r')
        ADVANCE(860);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(861);
      if (lookahead == 'd')
        ADVANCE(628);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(857);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 858:
      if (lookahead == '\n')
        ADVANCE(858);
      if (lookahead == '\r')
        ADVANCE(858);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(859);
      if (lookahead == 'd')
        ADVANCE(618);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(858);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 859:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(858);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 860:
      if (lookahead == '\n')
        ADVANCE(858);
      if (lookahead == '\r')
        ADVANCE(860);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(861);
      if (lookahead == 'd')
        ADVANCE(628);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(857);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 861:
      if (lookahead == 'n')
        SKIP(857);
      END_STATE();
    case 862:
      if (lookahead == '\n')
        ADVANCE(863);
      if (lookahead == '\r')
        ADVANCE(865);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(477);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(866);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(862);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(796);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 863:
      if (lookahead == '\n')
        ADVANCE(863);
      if (lookahead == '\r')
        ADVANCE(863);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(864);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(863);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(793);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 864:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(863);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 865:
      if (lookahead == '\n')
        ADVANCE(863);
      if (lookahead == '\r')
        ADVANCE(865);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(477);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(866);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(862);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(796);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 866:
      if (lookahead == 'n')
        SKIP(862);
      END_STATE();
    case 867:
      if (lookahead == '\n')
        ADVANCE(868);
      if (lookahead == '\r')
        ADVANCE(870);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(871);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(867);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 868:
      if (lookahead == '\n')
        ADVANCE(868);
      if (lookahead == '\r')
        ADVANCE(868);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(869);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(868);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 869:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(868);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 870:
      if (lookahead == '\n')
        ADVANCE(868);
      if (lookahead == '\r')
        ADVANCE(870);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(871);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(867);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 871:
      if (lookahead == 'n')
        SKIP(867);
      END_STATE();
    case 872:
      if (lookahead == '\n')
        ADVANCE(873);
      if (lookahead == '\r')
        ADVANCE(875);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(477);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(876);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(872);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(796);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 873:
      if (lookahead == '\n')
        ADVANCE(873);
      if (lookahead == '\r')
        ADVANCE(873);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(874);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(873);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(793);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 874:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(873);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 875:
      if (lookahead == '\n')
        ADVANCE(873);
      if (lookahead == '\r')
        ADVANCE(875);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(477);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(876);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(872);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(796);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 876:
      if (lookahead == 'n')
        SKIP(872);
      END_STATE();
    case 877:
      if (lookahead == '\n')
        ADVANCE(878);
      if (lookahead == '\r')
        ADVANCE(880);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(500);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(877);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      END_STATE();
    case 878:
      if (lookahead == '\n')
        ADVANCE(878);
      if (lookahead == '\r')
        ADVANCE(878);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(494);
      if (lookahead == '\\')
        ADVANCE(879);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(878);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(878);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 880:
      if (lookahead == '\n')
        ADVANCE(878);
      if (lookahead == '\r')
        ADVANCE(880);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(500);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(877);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      END_STATE();
    case 881:
      if (lookahead == '\n')
        ADVANCE(882);
      if (lookahead == '\r')
        ADVANCE(885);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(886);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(887);
      END_STATE();
    case 882:
      if (lookahead == '\n')
        ADVANCE(882);
      if (lookahead == '\r')
        ADVANCE(882);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(883);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(884);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 883:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(882);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 885:
      if (lookahead == '\n')
        ADVANCE(882);
      if (lookahead == '\r')
        ADVANCE(885);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(886);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(887);
      END_STATE();
    case 886:
      if (lookahead == 'n')
        SKIP(881);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 888:
      if (lookahead == '\n')
        ADVANCE(889);
      if (lookahead == '\r')
        ADVANCE(892);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(893);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(888);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(894);
      END_STATE();
    case 889:
      if (lookahead == '\n')
        ADVANCE(889);
      if (lookahead == '\r')
        ADVANCE(889);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(890);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(891);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 890:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(889);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 892:
      if (lookahead == '\n')
        ADVANCE(889);
      if (lookahead == '\r')
        ADVANCE(892);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(893);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(888);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(894);
      END_STATE();
    case 893:
      if (lookahead == 'n')
        SKIP(888);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 895:
      if (lookahead == '\n')
        ADVANCE(896);
      if (lookahead == '\r')
        ADVANCE(898);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(477);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(899);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(895);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 896:
      if (lookahead == '\n')
        ADVANCE(896);
      if (lookahead == '\r')
        ADVANCE(896);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(897);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(896);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 897:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(896);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 898:
      if (lookahead == '\n')
        ADVANCE(896);
      if (lookahead == '\r')
        ADVANCE(898);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(477);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(899);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(895);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 899:
      if (lookahead == 'n')
        SKIP(895);
      END_STATE();
    case 900:
      if (lookahead == '\n')
        ADVANCE(901);
      if (lookahead == '\r')
        ADVANCE(903);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(904);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(900);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 901:
      if (lookahead == '\n')
        ADVANCE(901);
      if (lookahead == '\r')
        ADVANCE(901);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(902);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(901);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 902:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(901);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 903:
      if (lookahead == '\n')
        ADVANCE(901);
      if (lookahead == '\r')
        ADVANCE(903);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(904);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(900);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 904:
      if (lookahead == 'n')
        SKIP(900);
      END_STATE();
    case 905:
      if (lookahead == '\n')
        ADVANCE(906);
      if (lookahead == '\r')
        ADVANCE(908);
      if (lookahead == '-')
        ADVANCE(477);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(909);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(905);
      END_STATE();
    case 906:
      if (lookahead == '\n')
        ADVANCE(906);
      if (lookahead == '\r')
        ADVANCE(906);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(907);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(906);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 907:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(906);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 908:
      if (lookahead == '\n')
        ADVANCE(906);
      if (lookahead == '\r')
        ADVANCE(908);
      if (lookahead == '-')
        ADVANCE(477);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(909);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(905);
      END_STATE();
    case 909:
      if (lookahead == 'n')
        SKIP(905);
      END_STATE();
    case 910:
      if (lookahead == '\n')
        ADVANCE(911);
      if (lookahead == '\r')
        ADVANCE(913);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(477);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(914);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(910);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 911:
      if (lookahead == '\n')
        ADVANCE(911);
      if (lookahead == '\r')
        ADVANCE(911);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(912);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(911);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 912:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(911);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 913:
      if (lookahead == '\n')
        ADVANCE(911);
      if (lookahead == '\r')
        ADVANCE(913);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(477);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(914);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(910);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 914:
      if (lookahead == 'n')
        SKIP(910);
      END_STATE();
    case 915:
      if (lookahead == '\n')
        ADVANCE(916);
      if (lookahead == '\r')
        ADVANCE(918);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(919);
      if (lookahead == 'c')
        ADVANCE(266);
      if (lookahead == 'd')
        ADVANCE(272);
      if (lookahead == 'f')
        ADVANCE(283);
      if (lookahead == 'i')
        ADVANCE(290);
      if (lookahead == 'n')
        ADVANCE(314);
      if (lookahead == 't')
        ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(915);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 916:
      if (lookahead == '\n')
        ADVANCE(916);
      if (lookahead == '\r')
        ADVANCE(916);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(917);
      if (lookahead == 'c')
        ADVANCE(194);
      if (lookahead == 'd')
        ADVANCE(200);
      if (lookahead == 'f')
        ADVANCE(211);
      if (lookahead == 'i')
        ADVANCE(218);
      if (lookahead == 'n')
        ADVANCE(242);
      if (lookahead == 't')
        ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(916);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 917:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(916);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 918:
      if (lookahead == '\n')
        ADVANCE(916);
      if (lookahead == '\r')
        ADVANCE(918);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(919);
      if (lookahead == 'c')
        ADVANCE(266);
      if (lookahead == 'd')
        ADVANCE(272);
      if (lookahead == 'f')
        ADVANCE(283);
      if (lookahead == 'i')
        ADVANCE(290);
      if (lookahead == 'n')
        ADVANCE(314);
      if (lookahead == 't')
        ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(915);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 919:
      if (lookahead == 'n')
        SKIP(915);
      END_STATE();
    case 920:
      if (lookahead == '\n')
        ADVANCE(921);
      if (lookahead == '\r')
        ADVANCE(923);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(924);
      if (lookahead == 'h')
        ADVANCE(555);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(920);
      END_STATE();
    case 921:
      if (lookahead == '\n')
        ADVANCE(921);
      if (lookahead == '\r')
        ADVANCE(921);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(922);
      if (lookahead == 'h')
        ADVANCE(545);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(921);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 922:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(921);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 923:
      if (lookahead == '\n')
        ADVANCE(921);
      if (lookahead == '\r')
        ADVANCE(923);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(924);
      if (lookahead == 'h')
        ADVANCE(555);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(920);
      END_STATE();
    case 924:
      if (lookahead == 'n')
        SKIP(920);
      END_STATE();
    case 925:
      if (lookahead == '\n')
        ADVANCE(926);
      if (lookahead == '\r')
        ADVANCE(930);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(931);
      if (lookahead == 'i')
        ADVANCE(932);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(925);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 926:
      if (lookahead == '\n')
        ADVANCE(926);
      if (lookahead == '\r')
        ADVANCE(926);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(927);
      if (lookahead == 'i')
        ADVANCE(928);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(926);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 927:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(926);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 930:
      if (lookahead == '\n')
        ADVANCE(926);
      if (lookahead == '\r')
        ADVANCE(930);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(931);
      if (lookahead == 'i')
        ADVANCE(932);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(925);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 931:
      if (lookahead == 'n')
        SKIP(925);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'n')
        ADVANCE(933);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'f')
        ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 934:
      if (lookahead == '\n')
        ADVANCE(935);
      if (lookahead == '\r')
        ADVANCE(937);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(938);
      if (lookahead == 'i')
        ADVANCE(932);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(934);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 935:
      if (lookahead == '\n')
        ADVANCE(935);
      if (lookahead == '\r')
        ADVANCE(935);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(936);
      if (lookahead == 'i')
        ADVANCE(928);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(935);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 936:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(935);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 937:
      if (lookahead == '\n')
        ADVANCE(935);
      if (lookahead == '\r')
        ADVANCE(937);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(938);
      if (lookahead == 'i')
        ADVANCE(932);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(934);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 938:
      if (lookahead == 'n')
        SKIP(934);
      END_STATE();
    case 939:
      if (lookahead == '\n')
        ADVANCE(940);
      if (lookahead == '\r')
        ADVANCE(942);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(943);
      if (lookahead == 'd')
        ADVANCE(628);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(939);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 940:
      if (lookahead == '\n')
        ADVANCE(940);
      if (lookahead == '\r')
        ADVANCE(940);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(941);
      if (lookahead == 'd')
        ADVANCE(618);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(940);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 941:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(940);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 942:
      if (lookahead == '\n')
        ADVANCE(940);
      if (lookahead == '\r')
        ADVANCE(942);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(943);
      if (lookahead == 'd')
        ADVANCE(628);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(939);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 943:
      if (lookahead == 'n')
        SKIP(939);
      END_STATE();
    case 944:
      if (lookahead == '\n')
        ADVANCE(945);
      if (lookahead == '\r')
        ADVANCE(947);
      if (lookahead == '-')
        ADVANCE(477);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(948);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(944);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 945:
      if (lookahead == '\n')
        ADVANCE(945);
      if (lookahead == '\r')
        ADVANCE(945);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(946);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(945);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 946:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(945);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 947:
      if (lookahead == '\n')
        ADVANCE(945);
      if (lookahead == '\r')
        ADVANCE(947);
      if (lookahead == '-')
        ADVANCE(477);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(948);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(944);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 948:
      if (lookahead == 'n')
        SKIP(944);
      END_STATE();
    case 949:
      if (lookahead == '\t')
        ADVANCE(503);
      if (lookahead == '\n')
        ADVANCE(950);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(955);
      if (lookahead == ' ')
        ADVANCE(498);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(500);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(501);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(951);
      if (lookahead == '\n')
        ADVANCE(950);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(952);
      if (lookahead == ' ')
        ADVANCE(953);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(494);
      if (lookahead == '\\')
        ADVANCE(954);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(951);
      if (lookahead == '\n')
        ADVANCE(950);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(952);
      if (lookahead == ' ')
        ADVANCE(953);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(494);
      if (lookahead == '\\')
        ADVANCE(954);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 952:
      if (lookahead == '\t')
        ADVANCE(951);
      if (lookahead == '\n')
        ADVANCE(950);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(952);
      if (lookahead == ' ')
        ADVANCE(953);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(494);
      if (lookahead == '\\')
        ADVANCE(954);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(951);
      if (lookahead == '\n')
        ADVANCE(950);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(952);
      if (lookahead == ' ')
        ADVANCE(953);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(494);
      if (lookahead == '\\')
        ADVANCE(954);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(952);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 955:
      if (lookahead == '\t')
        ADVANCE(503);
      if (lookahead == '\n')
        ADVANCE(950);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(955);
      if (lookahead == ' ')
        ADVANCE(498);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(500);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(501);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 956:
      if (lookahead == '\n')
        ADVANCE(957);
      if (lookahead == '\r')
        ADVANCE(959);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(477);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(960);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(956);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(796);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 957:
      if (lookahead == '\n')
        ADVANCE(957);
      if (lookahead == '\r')
        ADVANCE(957);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(958);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(957);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(793);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 958:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(957);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 959:
      if (lookahead == '\n')
        ADVANCE(957);
      if (lookahead == '\r')
        ADVANCE(959);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(477);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(960);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(956);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(796);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 960:
      if (lookahead == 'n')
        SKIP(956);
      END_STATE();
    case 961:
      if (lookahead == '\n')
        ADVANCE(962);
      if (lookahead == '\r')
        ADVANCE(964);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(965);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(961);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 962:
      if (lookahead == '\n')
        ADVANCE(962);
      if (lookahead == '\r')
        ADVANCE(962);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(963);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(962);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 963:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(962);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 964:
      if (lookahead == '\n')
        ADVANCE(962);
      if (lookahead == '\r')
        ADVANCE(964);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(965);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(961);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 965:
      if (lookahead == 'n')
        SKIP(961);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 181},
  [2] = {.lex_state = 326},
  [3] = {.lex_state = 326},
  [4] = {.lex_state = 351},
  [5] = {.lex_state = 181},
  [6] = {.lex_state = 456, .external_lex_state = 2},
  [7] = {.lex_state = 181},
  [8] = {.lex_state = 181},
  [9] = {.lex_state = 461},
  [10] = {.lex_state = 181},
  [11] = {.lex_state = 181},
  [12] = {.lex_state = 181},
  [13] = {.lex_state = 470, .external_lex_state = 3},
  [14] = {.lex_state = 481, .external_lex_state = 3},
  [15] = {.lex_state = 486, .external_lex_state = 3},
  [16] = {.lex_state = 491},
  [17] = {.lex_state = 502},
  [18] = {.lex_state = 486, .external_lex_state = 3},
  [19] = {.lex_state = 181},
  [20] = {.lex_state = 510, .external_lex_state = 3},
  [21] = {.lex_state = 510, .external_lex_state = 3},
  [22] = {.lex_state = 181},
  [23] = {.lex_state = 515, .external_lex_state = 3},
  [24] = {.lex_state = 515, .external_lex_state = 3},
  [25] = {.lex_state = 510, .external_lex_state = 3},
  [26] = {.lex_state = 510, .external_lex_state = 3},
  [27] = {.lex_state = 520, .external_lex_state = 3},
  [28] = {.lex_state = 525, .external_lex_state = 3},
  [29] = {.lex_state = 530, .external_lex_state = 3},
  [30] = {.lex_state = 535},
  [31] = {.lex_state = 351},
  [32] = {.lex_state = 326},
  [33] = {.lex_state = 540, .external_lex_state = 3},
  [34] = {.lex_state = 351},
  [35] = {.lex_state = 351},
  [36] = {.lex_state = 561},
  [37] = {.lex_state = 568, .external_lex_state = 4},
  [38] = {.lex_state = 575},
  [39] = {.lex_state = 510, .external_lex_state = 3},
  [40] = {.lex_state = 181},
  [41] = {.lex_state = 580},
  [42] = {.lex_state = 181},
  [43] = {.lex_state = 351},
  [44] = {.lex_state = 580},
  [45] = {.lex_state = 181},
  [46] = {.lex_state = 580},
  [47] = {.lex_state = 595, .external_lex_state = 3},
  [48] = {.lex_state = 486},
  [49] = {.lex_state = 600, .external_lex_state = 3},
  [50] = {.lex_state = 605},
  [51] = {.lex_state = 610, .external_lex_state = 3},
  [52] = {.lex_state = 610, .external_lex_state = 3},
  [53] = {.lex_state = 351},
  [54] = {.lex_state = 595, .external_lex_state = 3},
  [55] = {.lex_state = 615, .external_lex_state = 3},
  [56] = {.lex_state = 181},
  [57] = {.lex_state = 636, .external_lex_state = 3},
  [58] = {.lex_state = 657, .external_lex_state = 3},
  [59] = {.lex_state = 561},
  [60] = {.lex_state = 181},
  [61] = {.lex_state = 181},
  [62] = {.lex_state = 461},
  [63] = {.lex_state = 181},
  [64] = {.lex_state = 461},
  [65] = {.lex_state = 515, .external_lex_state = 3},
  [66] = {.lex_state = 181},
  [67] = {.lex_state = 181},
  [68] = {.lex_state = 181},
  [69] = {.lex_state = 181},
  [70] = {.lex_state = 181},
  [71] = {.lex_state = 181},
  [72] = {.lex_state = 662},
  [73] = {.lex_state = 502},
  [74] = {.lex_state = 502},
  [75] = {.lex_state = 502},
  [76] = {.lex_state = 502},
  [77] = {.lex_state = 486, .external_lex_state = 3},
  [78] = {.lex_state = 502},
  [79] = {.lex_state = 502},
  [80] = {.lex_state = 766},
  [81] = {.lex_state = 502},
  [82] = {.lex_state = 502},
  [83] = {.lex_state = 535},
  [84] = {.lex_state = 486, .external_lex_state = 3},
  [85] = {.lex_state = 510, .external_lex_state = 3},
  [86] = {.lex_state = 785},
  [87] = {.lex_state = 605},
  [88] = {.lex_state = 605},
  [89] = {.lex_state = 605},
  [90] = {.lex_state = 785},
  [91] = {.lex_state = 605},
  [92] = {.lex_state = 491},
  [93] = {.lex_state = 502},
  [94] = {.lex_state = 785},
  [95] = {.lex_state = 181},
  [96] = {.lex_state = 181},
  [97] = {.lex_state = 605},
  [98] = {.lex_state = 181},
  [99] = {.lex_state = 605},
  [100] = {.lex_state = 785},
  [101] = {.lex_state = 785},
  [102] = {.lex_state = 790},
  [103] = {.lex_state = 510, .external_lex_state = 3},
  [104] = {.lex_state = 456, .external_lex_state = 2},
  [105] = {.lex_state = 561},
  [106] = {.lex_state = 351},
  [107] = {.lex_state = 540, .external_lex_state = 3},
  [108] = {.lex_state = 561},
  [109] = {.lex_state = 326},
  [110] = {.lex_state = 181},
  [111] = {.lex_state = 510, .external_lex_state = 3},
  [112] = {.lex_state = 797},
  [113] = {.lex_state = 797},
  [114] = {.lex_state = 510, .external_lex_state = 3},
  [115] = {.lex_state = 181},
  [116] = {.lex_state = 580},
  [117] = {.lex_state = 510, .external_lex_state = 3},
  [118] = {.lex_state = 461},
  [119] = {.lex_state = 510, .external_lex_state = 3},
  [120] = {.lex_state = 568, .external_lex_state = 4},
  [121] = {.lex_state = 568, .external_lex_state = 4},
  [122] = {.lex_state = 510, .external_lex_state = 3},
  [123] = {.lex_state = 575},
  [124] = {.lex_state = 575},
  [125] = {.lex_state = 181},
  [126] = {.lex_state = 461},
  [127] = {.lex_state = 580},
  [128] = {.lex_state = 181},
  [129] = {.lex_state = 456, .external_lex_state = 2},
  [130] = {.lex_state = 461},
  [131] = {.lex_state = 822},
  [132] = {.lex_state = 822},
  [133] = {.lex_state = 580},
  [134] = {.lex_state = 580},
  [135] = {.lex_state = 456, .external_lex_state = 2},
  [136] = {.lex_state = 580},
  [137] = {.lex_state = 351},
  [138] = {.lex_state = 600, .external_lex_state = 3},
  [139] = {.lex_state = 600, .external_lex_state = 3},
  [140] = {.lex_state = 600, .external_lex_state = 3},
  [141] = {.lex_state = 351},
  [142] = {.lex_state = 610, .external_lex_state = 3},
  [143] = {.lex_state = 610, .external_lex_state = 3},
  [144] = {.lex_state = 595, .external_lex_state = 3},
  [145] = {.lex_state = 595, .external_lex_state = 3},
  [146] = {.lex_state = 636, .external_lex_state = 3},
  [147] = {.lex_state = 827, .external_lex_state = 3},
  [148] = {.lex_state = 832, .external_lex_state = 3},
  [149] = {.lex_state = 561},
  [150] = {.lex_state = 837, .external_lex_state = 3},
  [151] = {.lex_state = 842, .external_lex_state = 3},
  [152] = {.lex_state = 510, .external_lex_state = 3},
  [153] = {.lex_state = 847, .external_lex_state = 3},
  [154] = {.lex_state = 852, .external_lex_state = 3},
  [155] = {.lex_state = 857, .external_lex_state = 3},
  [156] = {.lex_state = 827, .external_lex_state = 3},
  [157] = {.lex_state = 181},
  [158] = {.lex_state = 181},
  [159] = {.lex_state = 862},
  [160] = {.lex_state = 867},
  [161] = {.lex_state = 461},
  [162] = {.lex_state = 790},
  [163] = {.lex_state = 461},
  [164] = {.lex_state = 872},
  [165] = {.lex_state = 486, .external_lex_state = 3},
  [166] = {.lex_state = 181},
  [167] = {.lex_state = 181},
  [168] = {.lex_state = 877},
  [169] = {.lex_state = 881},
  [170] = {.lex_state = 888},
  [171] = {.lex_state = 181},
  [172] = {.lex_state = 502},
  [173] = {.lex_state = 502},
  [174] = {.lex_state = 877},
  [175] = {.lex_state = 881},
  [176] = {.lex_state = 888},
  [177] = {.lex_state = 502},
  [178] = {.lex_state = 502},
  [179] = {.lex_state = 486, .external_lex_state = 3},
  [180] = {.lex_state = 895, .external_lex_state = 3},
  [181] = {.lex_state = 895, .external_lex_state = 3},
  [182] = {.lex_state = 486, .external_lex_state = 3},
  [183] = {.lex_state = 486, .external_lex_state = 3},
  [184] = {.lex_state = 486, .external_lex_state = 3},
  [185] = {.lex_state = 181},
  [186] = {.lex_state = 900},
  [187] = {.lex_state = 351},
  [188] = {.lex_state = 181},
  [189] = {.lex_state = 181},
  [190] = {.lex_state = 181},
  [191] = {.lex_state = 900},
  [192] = {.lex_state = 181},
  [193] = {.lex_state = 181},
  [194] = {.lex_state = 605},
  [195] = {.lex_state = 502},
  [196] = {.lex_state = 515},
  [197] = {.lex_state = 561},
  [198] = {.lex_state = 461},
  [199] = {.lex_state = 785},
  [200] = {.lex_state = 790},
  [201] = {.lex_state = 905, .external_lex_state = 3},
  [202] = {.lex_state = 790},
  [203] = {.lex_state = 910, .external_lex_state = 3},
  [204] = {.lex_state = 181},
  [205] = {.lex_state = 510, .external_lex_state = 3},
  [206] = {.lex_state = 905, .external_lex_state = 3},
  [207] = {.lex_state = 790},
  [208] = {.lex_state = 351},
  [209] = {.lex_state = 905, .external_lex_state = 3},
  [210] = {.lex_state = 461},
  [211] = {.lex_state = 905, .external_lex_state = 3},
  [212] = {.lex_state = 535},
  [213] = {.lex_state = 915, .external_lex_state = 4},
  [214] = {.lex_state = 535},
  [215] = {.lex_state = 181},
  [216] = {.lex_state = 351},
  [217] = {.lex_state = 181},
  [218] = {.lex_state = 181},
  [219] = {.lex_state = 456, .external_lex_state = 2},
  [220] = {.lex_state = 326},
  [221] = {.lex_state = 510, .external_lex_state = 3},
  [222] = {.lex_state = 510, .external_lex_state = 3},
  [223] = {.lex_state = 181},
  [224] = {.lex_state = 920, .external_lex_state = 3},
  [225] = {.lex_state = 561},
  [226] = {.lex_state = 486},
  [227] = {.lex_state = 502},
  [228] = {.lex_state = 486},
  [229] = {.lex_state = 510, .external_lex_state = 3},
  [230] = {.lex_state = 181},
  [231] = {.lex_state = 486},
  [232] = {.lex_state = 486},
  [233] = {.lex_state = 510, .external_lex_state = 3},
  [234] = {.lex_state = 181},
  [235] = {.lex_state = 568, .external_lex_state = 4},
  [236] = {.lex_state = 510, .external_lex_state = 3},
  [237] = {.lex_state = 568, .external_lex_state = 4},
  [238] = {.lex_state = 575},
  [239] = {.lex_state = 575},
  [240] = {.lex_state = 181},
  [241] = {.lex_state = 351},
  [242] = {.lex_state = 181},
  [243] = {.lex_state = 351},
  [244] = {.lex_state = 456, .external_lex_state = 2},
  [245] = {.lex_state = 580},
  [246] = {.lex_state = 580},
  [247] = {.lex_state = 925, .external_lex_state = 4},
  [248] = {.lex_state = 934},
  [249] = {.lex_state = 510, .external_lex_state = 3},
  [250] = {.lex_state = 461},
  [251] = {.lex_state = 580},
  [252] = {.lex_state = 456, .external_lex_state = 2},
  [253] = {.lex_state = 580},
  [254] = {.lex_state = 510, .external_lex_state = 3},
  [255] = {.lex_state = 610, .external_lex_state = 3},
  [256] = {.lex_state = 600, .external_lex_state = 3},
  [257] = {.lex_state = 610, .external_lex_state = 3},
  [258] = {.lex_state = 351},
  [259] = {.lex_state = 610, .external_lex_state = 3},
  [260] = {.lex_state = 595, .external_lex_state = 3},
  [261] = {.lex_state = 832, .external_lex_state = 3},
  [262] = {.lex_state = 837, .external_lex_state = 3},
  [263] = {.lex_state = 510, .external_lex_state = 3},
  [264] = {.lex_state = 827, .external_lex_state = 3},
  [265] = {.lex_state = 827, .external_lex_state = 3},
  [266] = {.lex_state = 486},
  [267] = {.lex_state = 510, .external_lex_state = 3},
  [268] = {.lex_state = 181},
  [269] = {.lex_state = 842, .external_lex_state = 3},
  [270] = {.lex_state = 461},
  [271] = {.lex_state = 486},
  [272] = {.lex_state = 939, .external_lex_state = 3},
  [273] = {.lex_state = 939, .external_lex_state = 3},
  [274] = {.lex_state = 842, .external_lex_state = 3},
  [275] = {.lex_state = 939, .external_lex_state = 3},
  [276] = {.lex_state = 827, .external_lex_state = 3},
  [277] = {.lex_state = 181},
  [278] = {.lex_state = 837, .external_lex_state = 3},
  [279] = {.lex_state = 561},
  [280] = {.lex_state = 872},
  [281] = {.lex_state = 790},
  [282] = {.lex_state = 944, .external_lex_state = 3},
  [283] = {.lex_state = 510, .external_lex_state = 3},
  [284] = {.lex_state = 181},
  [285] = {.lex_state = 181},
  [286] = {.lex_state = 881},
  [287] = {.lex_state = 881},
  [288] = {.lex_state = 888},
  [289] = {.lex_state = 888},
  [290] = {.lex_state = 502},
  [291] = {.lex_state = 502},
  [292] = {.lex_state = 502},
  [293] = {.lex_state = 502},
  [294] = {.lex_state = 949},
  [295] = {.lex_state = 949},
  [296] = {.lex_state = 486, .external_lex_state = 3},
  [297] = {.lex_state = 486, .external_lex_state = 3},
  [298] = {.lex_state = 486, .external_lex_state = 3},
  [299] = {.lex_state = 181},
  [300] = {.lex_state = 785},
  [301] = {.lex_state = 605},
  [302] = {.lex_state = 785},
  [303] = {.lex_state = 486},
  [304] = {.lex_state = 785},
  [305] = {.lex_state = 515},
  [306] = {.lex_state = 515},
  [307] = {.lex_state = 785},
  [308] = {.lex_state = 181},
  [309] = {.lex_state = 515},
  [310] = {.lex_state = 900},
  [311] = {.lex_state = 491},
  [312] = {.lex_state = 900},
  [313] = {.lex_state = 900},
  [314] = {.lex_state = 900},
  [315] = {.lex_state = 900},
  [316] = {.lex_state = 605},
  [317] = {.lex_state = 605},
  [318] = {.lex_state = 605},
  [319] = {.lex_state = 605},
  [320] = {.lex_state = 181},
  [321] = {.lex_state = 181},
  [322] = {.lex_state = 181},
  [323] = {.lex_state = 790},
  [324] = {.lex_state = 181},
  [325] = {.lex_state = 956},
  [326] = {.lex_state = 790},
  [327] = {.lex_state = 561},
  [328] = {.lex_state = 181},
  [329] = {.lex_state = 181},
  [330] = {.lex_state = 561},
  [331] = {.lex_state = 181},
  [332] = {.lex_state = 561},
  [333] = {.lex_state = 956},
  [334] = {.lex_state = 956},
  [335] = {.lex_state = 181},
  [336] = {.lex_state = 790},
  [337] = {.lex_state = 790},
  [338] = {.lex_state = 790},
  [339] = {.lex_state = 790},
  [340] = {.lex_state = 944, .external_lex_state = 3},
  [341] = {.lex_state = 944, .external_lex_state = 3},
  [342] = {.lex_state = 790},
  [343] = {.lex_state = 944, .external_lex_state = 3},
  [344] = {.lex_state = 181},
  [345] = {.lex_state = 790},
  [346] = {.lex_state = 510, .external_lex_state = 3},
  [347] = {.lex_state = 790},
  [348] = {.lex_state = 790},
  [349] = {.lex_state = 181},
  [350] = {.lex_state = 510, .external_lex_state = 3},
  [351] = {.lex_state = 915, .external_lex_state = 4},
  [352] = {.lex_state = 535},
  [353] = {.lex_state = 486},
  [354] = {.lex_state = 351},
  [355] = {.lex_state = 181},
  [356] = {.lex_state = 561},
  [357] = {.lex_state = 181},
  [358] = {.lex_state = 920, .external_lex_state = 3},
  [359] = {.lex_state = 561},
  [360] = {.lex_state = 486},
  [361] = {.lex_state = 510, .external_lex_state = 3},
  [362] = {.lex_state = 181},
  [363] = {.lex_state = 510, .external_lex_state = 3},
  [364] = {.lex_state = 181},
  [365] = {.lex_state = 961},
  [366] = {.lex_state = 502},
  [367] = {.lex_state = 510, .external_lex_state = 3},
  [368] = {.lex_state = 486},
  [369] = {.lex_state = 181},
  [370] = {.lex_state = 486},
  [371] = {.lex_state = 510, .external_lex_state = 3},
  [372] = {.lex_state = 181},
  [373] = {.lex_state = 181},
  [374] = {.lex_state = 181},
  [375] = {.lex_state = 351},
  [376] = {.lex_state = 510, .external_lex_state = 3},
  [377] = {.lex_state = 456, .external_lex_state = 2},
  [378] = {.lex_state = 510, .external_lex_state = 3},
  [379] = {.lex_state = 510, .external_lex_state = 3},
  [380] = {.lex_state = 925, .external_lex_state = 4},
  [381] = {.lex_state = 510, .external_lex_state = 3},
  [382] = {.lex_state = 934},
  [383] = {.lex_state = 351},
  [384] = {.lex_state = 510, .external_lex_state = 3},
  [385] = {.lex_state = 456, .external_lex_state = 2},
  [386] = {.lex_state = 610, .external_lex_state = 3},
  [387] = {.lex_state = 837, .external_lex_state = 3},
  [388] = {.lex_state = 510, .external_lex_state = 3},
  [389] = {.lex_state = 181},
  [390] = {.lex_state = 842, .external_lex_state = 3},
  [391] = {.lex_state = 181},
  [392] = {.lex_state = 181},
  [393] = {.lex_state = 181},
  [394] = {.lex_state = 939, .external_lex_state = 3},
  [395] = {.lex_state = 939, .external_lex_state = 3},
  [396] = {.lex_state = 837, .external_lex_state = 3},
  [397] = {.lex_state = 510, .external_lex_state = 3},
  [398] = {.lex_state = 837, .external_lex_state = 3},
  [399] = {.lex_state = 881},
  [400] = {.lex_state = 888},
  [401] = {.lex_state = 502},
  [402] = {.lex_state = 949},
  [403] = {.lex_state = 486, .external_lex_state = 3},
  [404] = {.lex_state = 181},
  [405] = {.lex_state = 351},
  [406] = {.lex_state = 181},
  [407] = {.lex_state = 351},
  [408] = {.lex_state = 785},
  [409] = {.lex_state = 785},
  [410] = {.lex_state = 785},
  [411] = {.lex_state = 181},
  [412] = {.lex_state = 181},
  [413] = {.lex_state = 461},
  [414] = {.lex_state = 785},
  [415] = {.lex_state = 785},
  [416] = {.lex_state = 785},
  [417] = {.lex_state = 605},
  [418] = {.lex_state = 181},
  [419] = {.lex_state = 900},
  [420] = {.lex_state = 605},
  [421] = {.lex_state = 486},
  [422] = {.lex_state = 181},
  [423] = {.lex_state = 181},
  [424] = {.lex_state = 181},
  [425] = {.lex_state = 181},
  [426] = {.lex_state = 181},
  [427] = {.lex_state = 905, .external_lex_state = 3},
  [428] = {.lex_state = 181},
  [429] = {.lex_state = 790},
  [430] = {.lex_state = 956},
  [431] = {.lex_state = 790},
  [432] = {.lex_state = 956},
  [433] = {.lex_state = 181},
  [434] = {.lex_state = 790},
  [435] = {.lex_state = 905, .external_lex_state = 3},
  [436] = {.lex_state = 181},
  [437] = {.lex_state = 790},
  [438] = {.lex_state = 351},
  [439] = {.lex_state = 181},
  [440] = {.lex_state = 790},
  [441] = {.lex_state = 790},
  [442] = {.lex_state = 790},
  [443] = {.lex_state = 181},
  [444] = {.lex_state = 790},
  [445] = {.lex_state = 790},
  [446] = {.lex_state = 905, .external_lex_state = 3},
  [447] = {.lex_state = 790},
  [448] = {.lex_state = 944, .external_lex_state = 3},
  [449] = {.lex_state = 181},
  [450] = {.lex_state = 944, .external_lex_state = 3},
  [451] = {.lex_state = 944, .external_lex_state = 3},
  [452] = {.lex_state = 790},
  [453] = {.lex_state = 510, .external_lex_state = 3},
  [454] = {.lex_state = 510, .external_lex_state = 3},
  [455] = {.lex_state = 915, .external_lex_state = 4},
  [456] = {.lex_state = 181},
  [457] = {.lex_state = 510, .external_lex_state = 3},
  [458] = {.lex_state = 181},
  [459] = {.lex_state = 486},
  [460] = {.lex_state = 351},
  [461] = {.lex_state = 181},
  [462] = {.lex_state = 181},
  [463] = {.lex_state = 510, .external_lex_state = 3},
  [464] = {.lex_state = 181},
  [465] = {.lex_state = 181},
  [466] = {.lex_state = 181},
  [467] = {.lex_state = 486},
  [468] = {.lex_state = 510, .external_lex_state = 3},
  [469] = {.lex_state = 561},
  [470] = {.lex_state = 181},
  [471] = {.lex_state = 961},
  [472] = {.lex_state = 510, .external_lex_state = 3},
  [473] = {.lex_state = 181},
  [474] = {.lex_state = 181},
  [475] = {.lex_state = 181},
  [476] = {.lex_state = 510, .external_lex_state = 3},
  [477] = {.lex_state = 925, .external_lex_state = 4},
  [478] = {.lex_state = 510, .external_lex_state = 3},
  [479] = {.lex_state = 510, .external_lex_state = 3},
  [480] = {.lex_state = 934},
  [481] = {.lex_state = 510, .external_lex_state = 3},
  [482] = {.lex_state = 510, .external_lex_state = 3},
  [483] = {.lex_state = 510, .external_lex_state = 3},
  [484] = {.lex_state = 510, .external_lex_state = 3},
  [485] = {.lex_state = 181},
  [486] = {.lex_state = 842, .external_lex_state = 3},
  [487] = {.lex_state = 842, .external_lex_state = 3},
  [488] = {.lex_state = 461},
  [489] = {.lex_state = 181},
  [490] = {.lex_state = 461},
  [491] = {.lex_state = 561},
  [492] = {.lex_state = 181},
  [493] = {.lex_state = 510, .external_lex_state = 3},
  [494] = {.lex_state = 181},
  [495] = {.lex_state = 515},
  [496] = {.lex_state = 785},
  [497] = {.lex_state = 515},
  [498] = {.lex_state = 785},
  [499] = {.lex_state = 351},
  [500] = {.lex_state = 181},
  [501] = {.lex_state = 900},
  [502] = {.lex_state = 181},
  [503] = {.lex_state = 486},
  [504] = {.lex_state = 181},
  [505] = {.lex_state = 956},
  [506] = {.lex_state = 181},
  [507] = {.lex_state = 956},
  [508] = {.lex_state = 181},
  [509] = {.lex_state = 181},
  [510] = {.lex_state = 905, .external_lex_state = 3},
  [511] = {.lex_state = 956},
  [512] = {.lex_state = 956},
  [513] = {.lex_state = 956},
  [514] = {.lex_state = 790},
  [515] = {.lex_state = 181},
  [516] = {.lex_state = 790},
  [517] = {.lex_state = 905, .external_lex_state = 3},
  [518] = {.lex_state = 956},
  [519] = {.lex_state = 790},
  [520] = {.lex_state = 351},
  [521] = {.lex_state = 956},
  [522] = {.lex_state = 790},
  [523] = {.lex_state = 944, .external_lex_state = 3},
  [524] = {.lex_state = 181},
  [525] = {.lex_state = 944, .external_lex_state = 3},
  [526] = {.lex_state = 915, .external_lex_state = 4},
  [527] = {.lex_state = 181},
  [528] = {.lex_state = 181},
  [529] = {.lex_state = 181},
  [530] = {.lex_state = 181},
  [531] = {.lex_state = 181},
  [532] = {.lex_state = 561},
  [533] = {.lex_state = 181},
  [534] = {.lex_state = 181},
  [535] = {.lex_state = 181},
  [536] = {.lex_state = 510, .external_lex_state = 3},
  [537] = {.lex_state = 925, .external_lex_state = 4},
  [538] = {.lex_state = 934},
  [539] = {.lex_state = 510, .external_lex_state = 3},
  [540] = {.lex_state = 181},
  [541] = {.lex_state = 842, .external_lex_state = 3},
  [542] = {.lex_state = 461},
  [543] = {.lex_state = 181},
  [544] = {.lex_state = 486},
  [545] = {.lex_state = 181},
  [546] = {.lex_state = 461},
  [547] = {.lex_state = 561},
  [548] = {.lex_state = 181},
  [549] = {.lex_state = 956},
  [550] = {.lex_state = 956},
  [551] = {.lex_state = 956},
  [552] = {.lex_state = 956},
  [553] = {.lex_state = 181},
  [554] = {.lex_state = 790},
  [555] = {.lex_state = 944, .external_lex_state = 3},
  [556] = {.lex_state = 181},
  [557] = {.lex_state = 510, .external_lex_state = 3},
  [558] = {.lex_state = 181},
  [559] = {.lex_state = 181},
  [560] = {.lex_state = 181},
  [561] = {.lex_state = 181},
  [562] = {.lex_state = 561},
  [563] = {.lex_state = 181},
  [564] = {.lex_state = 181},
  [565] = {.lex_state = 181},
  [566] = {.lex_state = 181},
  [567] = {.lex_state = 181},
  [568] = {.lex_state = 956},
  [569] = {.lex_state = 510, .external_lex_state = 3},
  [570] = {.lex_state = 181},
  [571] = {.lex_state = 181},
  [572] = {.lex_state = 181},
  [573] = {.lex_state = 181},
  [574] = {.lex_state = 181},
  [575] = {.lex_state = 181},
  [576] = {.lex_state = 510, .external_lex_state = 3},
  [577] = {.lex_state = 181},
  [578] = {.lex_state = 181},
  [579] = {.lex_state = 181},
  [580] = {.lex_state = 181},
  [581] = {.lex_state = 510, .external_lex_state = 3},
};

enum {
  ts_external_token__layout_semicolon,
  ts_external_token__layout_open_brace,
  ts_external_token__layout_close_brace,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__layout_semicolon] = sym__layout_semicolon,
  [ts_external_token__layout_open_brace] = sym__layout_open_brace,
  [ts_external_token__layout_close_brace] = sym__layout_close_brace,
};

static bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__layout_semicolon] = true,
    [ts_external_token__layout_open_brace] = true,
    [ts_external_token__layout_close_brace] = true,
  },
  [2] = {
    [ts_external_token__layout_open_brace] = true,
  },
  [3] = {
    [ts_external_token__layout_semicolon] = true,
  },
  [4] = {
    [ts_external_token__layout_close_brace] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__layout_semicolon] = ACTIONS(1),
    [sym__layout_open_brace] = ACTIONS(1),
    [sym__layout_close_brace] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(3),
    [anon_sym_DOT_DOT] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(3),
    [anon_sym__] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(3),
    [anon_sym_DASH_GT] = ACTIONS(3),
    [sym_unit_type] = ACTIONS(3),
    [sym_list_constructor] = ACTIONS(3),
    [sym_function_constructor] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(3),
    [anon_sym_EQ_GT] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(3),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(7),
    [sym__ascii_large] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(3),
    [anon_sym_1] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(3),
    [anon_sym_CARET] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(3),
    [anon_sym_LT_DASH] = ACTIONS(3),
    [sym__vertical_tab] = ACTIONS(3),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(7),
    [anon_sym_n] = ACTIONS(3),
    [anon_sym_r] = ACTIONS(3),
    [anon_sym_t] = ACTIONS(3),
    [anon_sym_v] = ACTIONS(3),
    [anon_sym_NUL] = ACTIONS(3),
    [anon_sym_SOH] = ACTIONS(3),
    [anon_sym_STX] = ACTIONS(3),
    [anon_sym_HT] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(3),
    [anon_sym_VT] = ACTIONS(3),
    [anon_sym_SO] = ACTIONS(3),
    [anon_sym_SI] = ACTIONS(3),
    [anon_sym_NAK] = ACTIONS(3),
    [anon_sym_SYN] = ACTIONS(3),
    [anon_sym_SUB] = ACTIONS(3),
    [anon_sym_GS] = ACTIONS(3),
    [anon_sym_RS] = ACTIONS(3),
    [anon_sym_US] = ACTIONS(3),
    [anon_sym_SP] = ACTIONS(3),
    [sym__integer_literal] = ACTIONS(7),
  },
  [1] = {
    [sym_module] = STATE(19),
    [sym_import] = STATE(20),
    [sym__declaration] = STATE(21),
    [sym_function_declaration] = STATE(20),
    [sym_function_head] = STATE(22),
    [sym__variable] = STATE(23),
    [sym_qualified_variable_identifier] = STATE(24),
    [sym__expression] = STATE(20),
    [sym_foreign] = STATE(20),
    [sym_default] = STATE(20),
    [sym_do_expression] = STATE(25),
    [sym_type_class] = STATE(20),
    [sym_type_class_instance] = STATE(20),
    [sym__general_declaration] = STATE(20),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym_algebraic_datatype] = STATE(20),
    [sym_newtype] = STATE(20),
    [sym_type_synonym] = STATE(20),
    [sym__literal] = STATE(25),
    [sym__identifier] = STATE(27),
    [sym_variable_identifier] = STATE(28),
    [sym_constructor_identifier] = STATE(29),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_module_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_module] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_foreign] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_class] = ACTIONS(21),
    [anon_sym_instance] = ACTIONS(23),
    [anon_sym_infixl] = ACTIONS(25),
    [anon_sym_infixr] = ACTIONS(25),
    [anon_sym_infix] = ACTIONS(25),
    [anon_sym_data] = ACTIONS(27),
    [anon_sym_newtype] = ACTIONS(29),
    [anon_sym_type] = ACTIONS(31),
    [sym__variable_pattern] = ACTIONS(33),
    [sym__constructor_pattern] = ACTIONS(35),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [2] = {
    [sym_module_identifier] = ACTIONS(45),
    [sym_comment] = ACTIONS(5),
  },
  [3] = {
    [anon_sym_qualified] = ACTIONS(47),
    [sym_module_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(5),
  },
  [4] = {
    [sym_foreign_import] = STATE(35),
    [anon_sym_import] = ACTIONS(51),
    [sym_foreign_export] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
  },
  [5] = {
    [anon_sym_LPAREN] = ACTIONS(55),
    [sym_comment] = ACTIONS(5),
  },
  [6] = {
    [sym_statement_list] = STATE(39),
    [sym__layout_open_brace] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_comment] = ACTIONS(5),
  },
  [7] = {
    [sym_context] = STATE(42),
    [sym_class] = STATE(43),
    [sym_constructor_identifier] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(61),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [8] = {
    [sym_context] = STATE(45),
    [sym_class] = STATE(43),
    [sym_constructor_identifier] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(61),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [9] = {
    [sym__op] = STATE(51),
    [sym_variable_symbol] = STATE(52),
    [sym_constructor_symbol] = STATE(52),
    [sym_integer] = STATE(53),
    [sym__variable_symbol] = STATE(54),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_DOT] = ACTIONS(65),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(65),
    [anon_sym_DOLLAR] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(65),
    [anon_sym_1] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_CARET] = ACTIONS(65),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [10] = {
    [sym_context] = STATE(56),
    [sym_class] = STATE(43),
    [sym_simple_type] = STATE(57),
    [sym_constructor_identifier] = STATE(58),
    [anon_sym_LPAREN] = ACTIONS(61),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [11] = {
    [sym_context] = STATE(60),
    [sym_class] = STATE(43),
    [sym_simple_type] = STATE(61),
    [sym_constructor_identifier] = STATE(62),
    [anon_sym_LPAREN] = ACTIONS(61),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [12] = {
    [sym_simple_type] = STATE(63),
    [sym_constructor_identifier] = STATE(64),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [13] = {
    [sym__layout_semicolon] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_COLON_COLON] = ACTIONS(79),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [sym_list_constructor] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(81),
    [sym__constructor_pattern] = ACTIONS(81),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym__integer_literal] = ACTIONS(79),
    [sym__octal_literal] = ACTIONS(79),
    [sym__hexidecimal_literal] = ACTIONS(79),
  },
  [14] = {
    [sym__layout_semicolon] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_COLON_COLON] = ACTIONS(85),
    [sym__variable_pattern] = ACTIONS(87),
    [sym_comment] = ACTIONS(5),
  },
  [15] = {
    [sym__layout_semicolon] = ACTIONS(89),
    [anon_sym_SEMI] = ACTIONS(91),
    [sym__variable_pattern] = ACTIONS(91),
    [sym__constructor_pattern] = ACTIONS(93),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym__integer_literal] = ACTIONS(91),
    [sym__octal_literal] = ACTIONS(91),
    [sym__hexidecimal_literal] = ACTIONS(91),
  },
  [16] = {
    [sym__graphic] = STATE(69),
    [sym__small] = STATE(70),
    [sym__large] = STATE(70),
    [sym__symbol] = STATE(70),
    [sym__special] = STATE(70),
    [sym__escape] = STATE(69),
    [anon_sym_SEMI] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_EQ] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_AT] = ACTIONS(97),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_BANG] = ACTIONS(97),
    [anon_sym_DOT] = ACTIONS(97),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(105),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(99),
    [sym__ascii_large] = ACTIONS(107),
    [anon_sym_POUND] = ACTIONS(97),
    [anon_sym_DOLLAR] = ACTIONS(97),
    [anon_sym_PERCENT] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(97),
    [anon_sym_1] = ACTIONS(97),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(97),
    [anon_sym_GT] = ACTIONS(97),
    [anon_sym_QMARK] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(97),
    [anon_sym_TILDE] = ACTIONS(97),
    [anon_sym_BSLASH] = ACTIONS(109),
    [sym__space] = ACTIONS(103),
  },
  [17] = {
    [sym__gap] = STATE(76),
    [sym__graphic] = STATE(76),
    [sym__small] = STATE(78),
    [sym__large] = STATE(78),
    [sym__symbol] = STATE(78),
    [sym__special] = STATE(78),
    [sym__escape] = STATE(76),
    [aux_sym_string_repeat1] = STATE(82),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_AT] = ACTIONS(113),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_COLON] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_BANG] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(113),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(115),
    [sym__ascii_large] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(113),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_PERCENT] = ACTIONS(113),
    [anon_sym_AMP] = ACTIONS(113),
    [anon_sym_1] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_CARET] = ACTIONS(113),
    [anon_sym_TILDE] = ACTIONS(113),
    [anon_sym_BSLASH] = ACTIONS(125),
    [sym__space] = ACTIONS(127),
    [sym__newline] = ACTIONS(127),
    [sym__tab] = ACTIONS(127),
    [sym__vertical_tab] = ACTIONS(127),
  },
  [18] = {
    [sym__layout_semicolon] = ACTIONS(129),
    [anon_sym_SEMI] = ACTIONS(131),
    [sym__variable_pattern] = ACTIONS(131),
    [sym__constructor_pattern] = ACTIONS(133),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(131),
    [sym__integer_literal] = ACTIONS(131),
    [sym__octal_literal] = ACTIONS(131),
    [sym__hexidecimal_literal] = ACTIONS(131),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [sym_comment] = ACTIONS(5),
  },
  [20] = {
    [sym__layout_semicolon] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(139),
    [sym_comment] = ACTIONS(5),
  },
  [21] = {
    [sym__layout_semicolon] = ACTIONS(141),
    [anon_sym_SEMI] = ACTIONS(143),
    [sym_comment] = ACTIONS(5),
  },
  [22] = {
    [sym_function_body] = STATE(85),
    [anon_sym_EQ] = ACTIONS(145),
    [sym_comment] = ACTIONS(5),
  },
  [23] = {
    [sym__function_pattern] = STATE(94),
    [sym_tuple_pattern] = STATE(88),
    [sym_parenthesized_pattern] = STATE(88),
    [sym_as_pattern] = STATE(88),
    [sym_wildcard] = STATE(88),
    [sym__variable] = STATE(95),
    [sym_qualified_variable_identifier] = STATE(96),
    [sym__literal] = STATE(88),
    [sym__identifier] = STATE(97),
    [sym_simple_type] = STATE(98),
    [sym_variable_identifier] = STATE(99),
    [sym_constructor_identifier] = STATE(100),
    [sym_integer] = STATE(91),
    [sym_char] = STATE(91),
    [sym_string] = STATE(91),
    [aux_sym_function_head_repeat1] = STATE(101),
    [sym__layout_semicolon] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym__] = ACTIONS(153),
    [sym_list_constructor] = ACTIONS(155),
    [sym__variable_pattern] = ACTIONS(157),
    [sym__constructor_pattern] = ACTIONS(159),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(161),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [24] = {
    [sym__layout_semicolon] = ACTIONS(167),
    [anon_sym_SEMI] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym__] = ACTIONS(169),
    [sym_list_constructor] = ACTIONS(169),
    [sym__variable_pattern] = ACTIONS(171),
    [sym__constructor_pattern] = ACTIONS(171),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(171),
    [anon_sym_SQUOTE] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym__integer_literal] = ACTIONS(169),
    [sym__octal_literal] = ACTIONS(169),
    [sym__hexidecimal_literal] = ACTIONS(169),
  },
  [25] = {
    [sym__layout_semicolon] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(149),
    [sym_comment] = ACTIONS(5),
  },
  [26] = {
    [sym__layout_semicolon] = ACTIONS(173),
    [anon_sym_SEMI] = ACTIONS(175),
    [sym_comment] = ACTIONS(5),
  },
  [27] = {
    [sym__layout_semicolon] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_COLON_COLON] = ACTIONS(177),
    [sym_comment] = ACTIONS(5),
  },
  [28] = {
    [sym__layout_semicolon] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym__] = ACTIONS(169),
    [anon_sym_COLON_COLON] = ACTIONS(181),
    [sym_list_constructor] = ACTIONS(169),
    [sym__variable_pattern] = ACTIONS(171),
    [sym__constructor_pattern] = ACTIONS(171),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(171),
    [anon_sym_SQUOTE] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym__integer_literal] = ACTIONS(169),
    [sym__octal_literal] = ACTIONS(169),
    [sym__hexidecimal_literal] = ACTIONS(169),
  },
  [29] = {
    [sym__layout_semicolon] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(181),
    [anon_sym_COLON_COLON] = ACTIONS(181),
    [sym__variable_pattern] = ACTIONS(181),
    [sym__constructor_pattern] = ACTIONS(183),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(183),
    [anon_sym_SQUOTE] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [sym__integer_literal] = ACTIONS(181),
    [sym__octal_literal] = ACTIONS(181),
    [sym__hexidecimal_literal] = ACTIONS(181),
  },
  [30] = {
    [sym_import] = STATE(20),
    [sym__declaration] = STATE(103),
    [sym_function_declaration] = STATE(20),
    [sym_function_head] = STATE(22),
    [sym__variable] = STATE(23),
    [sym_qualified_variable_identifier] = STATE(24),
    [sym__expression] = STATE(20),
    [sym_foreign] = STATE(20),
    [sym_default] = STATE(20),
    [sym_do_expression] = STATE(25),
    [sym_type_class] = STATE(20),
    [sym_type_class_instance] = STATE(20),
    [sym__general_declaration] = STATE(20),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym_algebraic_datatype] = STATE(20),
    [sym_newtype] = STATE(20),
    [sym_type_synonym] = STATE(20),
    [sym__literal] = STATE(25),
    [sym__identifier] = STATE(27),
    [sym_variable_identifier] = STATE(28),
    [sym_constructor_identifier] = STATE(29),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(185),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_foreign] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_class] = ACTIONS(21),
    [anon_sym_instance] = ACTIONS(23),
    [anon_sym_infixl] = ACTIONS(25),
    [anon_sym_infixr] = ACTIONS(25),
    [anon_sym_infix] = ACTIONS(25),
    [anon_sym_data] = ACTIONS(27),
    [anon_sym_newtype] = ACTIONS(29),
    [anon_sym_type] = ACTIONS(31),
    [sym__variable_pattern] = ACTIONS(33),
    [sym__constructor_pattern] = ACTIONS(35),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [31] = {
    [sym_module_exports] = STATE(106),
    [anon_sym_where] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(5),
  },
  [32] = {
    [sym_module_identifier] = ACTIONS(191),
    [sym_comment] = ACTIONS(5),
  },
  [33] = {
    [sym_import_specification] = STATE(111),
    [sym__layout_semicolon] = ACTIONS(193),
    [anon_sym_SEMI] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_as] = ACTIONS(199),
    [anon_sym_hiding] = ACTIONS(201),
    [sym_comment] = ACTIONS(5),
  },
  [34] = {
    [anon_sym_ccall] = ACTIONS(203),
    [anon_sym_stdcall] = ACTIONS(203),
    [anon_sym_cplusplus] = ACTIONS(203),
    [anon_sym_jvm] = ACTIONS(203),
    [anon_sym_dotnet] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
  },
  [35] = {
    [sym_calling_convention] = STATE(113),
    [anon_sym_ccall] = ACTIONS(205),
    [anon_sym_stdcall] = ACTIONS(205),
    [anon_sym_cplusplus] = ACTIONS(205),
    [anon_sym_jvm] = ACTIONS(205),
    [anon_sym_dotnet] = ACTIONS(205),
    [sym_comment] = ACTIONS(5),
  },
  [36] = {
    [sym__identifier] = STATE(115),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [anon_sym_RPAREN] = ACTIONS(207),
    [sym__variable_pattern] = ACTIONS(209),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [37] = {
    [sym__variable] = STATE(25),
    [sym_qualified_variable_identifier] = STATE(24),
    [sym__expression] = STATE(119),
    [sym_do_expression] = STATE(25),
    [sym__statement] = STATE(120),
    [sym__literal] = STATE(25),
    [sym_variable_identifier] = STATE(24),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_statement_list_repeat1] = STATE(121),
    [sym__layout_close_brace] = ACTIONS(211),
    [anon_sym_do] = ACTIONS(19),
    [sym__variable_pattern] = ACTIONS(33),
    [sym__constructor_pattern] = ACTIONS(213),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [38] = {
    [sym__variable] = STATE(25),
    [sym_qualified_variable_identifier] = STATE(24),
    [sym__expression] = STATE(122),
    [sym_do_expression] = STATE(25),
    [sym__statement] = STATE(123),
    [sym__literal] = STATE(25),
    [sym_variable_identifier] = STATE(24),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_statement_list_repeat1] = STATE(124),
    [anon_sym_RBRACE] = ACTIONS(215),
    [anon_sym_do] = ACTIONS(19),
    [sym__variable_pattern] = ACTIONS(33),
    [sym__constructor_pattern] = ACTIONS(213),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [39] = {
    [sym__layout_semicolon] = ACTIONS(217),
    [anon_sym_SEMI] = ACTIONS(219),
    [sym_comment] = ACTIONS(5),
  },
  [40] = {
    [sym_class] = STATE(125),
    [sym_constructor_identifier] = STATE(126),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [41] = {
    [anon_sym_where] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_BQUOTE] = ACTIONS(85),
    [anon_sym_COLON_COLON] = ACTIONS(85),
    [sym__variable_pattern] = ACTIONS(221),
    [sym_comment] = ACTIONS(5),
  },
  [42] = {
    [sym_constructor_identifier] = STATE(127),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [43] = {
    [anon_sym_EQ_GT] = ACTIONS(223),
    [sym_comment] = ACTIONS(5),
  },
  [44] = {
    [sym_variable_identifier] = STATE(132),
    [aux_sym_type_class_repeat1] = STATE(133),
    [anon_sym_where] = ACTIONS(225),
    [anon_sym_LPAREN] = ACTIONS(227),
    [sym__variable_pattern] = ACTIONS(229),
    [sym_comment] = ACTIONS(5),
  },
  [45] = {
    [sym_constructor_identifier] = STATE(134),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [46] = {
    [sym_variable_identifier] = STATE(132),
    [aux_sym_type_class_repeat1] = STATE(136),
    [anon_sym_where] = ACTIONS(231),
    [anon_sym_LPAREN] = ACTIONS(227),
    [sym__variable_pattern] = ACTIONS(229),
    [sym_comment] = ACTIONS(5),
  },
  [47] = {
    [sym__layout_semicolon] = ACTIONS(233),
    [anon_sym_SEMI] = ACTIONS(235),
    [anon_sym_COMMA] = ACTIONS(235),
    [anon_sym_DASH] = ACTIONS(235),
    [anon_sym_BANG] = ACTIONS(235),
    [anon_sym_DOT] = ACTIONS(235),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(235),
    [anon_sym_DOLLAR] = ACTIONS(235),
    [anon_sym_PERCENT] = ACTIONS(235),
    [anon_sym_AMP] = ACTIONS(235),
    [anon_sym_1] = ACTIONS(235),
    [anon_sym_PLUS] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(235),
    [anon_sym_LT] = ACTIONS(235),
    [anon_sym_GT] = ACTIONS(235),
    [anon_sym_QMARK] = ACTIONS(235),
    [anon_sym_CARET] = ACTIONS(235),
  },
  [48] = {
    [sym__identifier] = STATE(137),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym__variable_pattern] = ACTIONS(209),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [49] = {
    [sym__constructor_symbol] = STATE(139),
    [aux_sym_constructor_symbol_repeat1] = STATE(140),
    [sym__layout_semicolon] = ACTIONS(237),
    [anon_sym_SEMI] = ACTIONS(239),
    [anon_sym_COMMA] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(241),
    [anon_sym_COLON] = ACTIONS(241),
    [anon_sym_BANG] = ACTIONS(241),
    [anon_sym_DOT] = ACTIONS(241),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(241),
    [anon_sym_DOLLAR] = ACTIONS(241),
    [anon_sym_PERCENT] = ACTIONS(241),
    [anon_sym_AMP] = ACTIONS(241),
    [anon_sym_1] = ACTIONS(241),
    [anon_sym_PLUS] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(241),
    [anon_sym_LT] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(241),
    [anon_sym_QMARK] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(241),
  },
  [50] = {
    [anon_sym_RBRACE] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym__] = ACTIONS(131),
    [anon_sym_BQUOTE] = ACTIONS(131),
    [anon_sym_COLON] = ACTIONS(131),
    [sym_list_constructor] = ACTIONS(131),
    [anon_sym_BANG] = ACTIONS(131),
    [sym__variable_pattern] = ACTIONS(133),
    [sym__constructor_pattern] = ACTIONS(133),
    [anon_sym_DOT] = ACTIONS(131),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(131),
    [anon_sym_POUND] = ACTIONS(131),
    [anon_sym_DOLLAR] = ACTIONS(131),
    [anon_sym_PERCENT] = ACTIONS(131),
    [anon_sym_AMP] = ACTIONS(131),
    [anon_sym_1] = ACTIONS(131),
    [anon_sym_PLUS] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(131),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_QMARK] = ACTIONS(131),
    [anon_sym_CARET] = ACTIONS(131),
    [sym__integer_literal] = ACTIONS(131),
    [sym__octal_literal] = ACTIONS(131),
    [sym__hexidecimal_literal] = ACTIONS(131),
  },
  [51] = {
    [aux_sym_fixity_repeat1] = STATE(142),
    [sym__layout_semicolon] = ACTIONS(243),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(247),
    [sym_comment] = ACTIONS(5),
  },
  [52] = {
    [sym__layout_semicolon] = ACTIONS(249),
    [anon_sym_SEMI] = ACTIONS(251),
    [anon_sym_COMMA] = ACTIONS(251),
    [sym_comment] = ACTIONS(5),
  },
  [53] = {
    [sym__op] = STATE(143),
    [sym_variable_symbol] = STATE(52),
    [sym_constructor_symbol] = STATE(52),
    [sym__variable_symbol] = STATE(54),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_DOT] = ACTIONS(65),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(65),
    [anon_sym_DOLLAR] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(65),
    [anon_sym_1] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_CARET] = ACTIONS(65),
  },
  [54] = {
    [sym__variable_symbol] = STATE(144),
    [aux_sym_variable_symbol_repeat1] = STATE(145),
    [sym__layout_semicolon] = ACTIONS(253),
    [anon_sym_SEMI] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_DOT] = ACTIONS(65),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(65),
    [anon_sym_DOLLAR] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(65),
    [anon_sym_1] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_CARET] = ACTIONS(65),
  },
  [55] = {
    [sym__layout_semicolon] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(85),
    [anon_sym_deriving] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(85),
    [sym__variable_pattern] = ACTIONS(221),
    [sym__constructor_pattern] = ACTIONS(221),
    [sym_comment] = ACTIONS(5),
  },
  [56] = {
    [sym_simple_type] = STATE(146),
    [sym_constructor_identifier] = STATE(147),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [57] = {
    [sym_constructors] = STATE(150),
    [sym_constructor] = STATE(151),
    [sym_deriving] = STATE(152),
    [sym_constructor_identifier] = STATE(153),
    [sym__layout_semicolon] = ACTIONS(257),
    [anon_sym_SEMI] = ACTIONS(259),
    [anon_sym_EQ] = ACTIONS(261),
    [anon_sym_deriving] = ACTIONS(263),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [58] = {
    [sym_variable_identifier] = STATE(155),
    [aux_sym_type_class_repeat1] = STATE(156),
    [sym__layout_semicolon] = ACTIONS(265),
    [anon_sym_SEMI] = ACTIONS(267),
    [anon_sym_LPAREN] = ACTIONS(227),
    [anon_sym_EQ] = ACTIONS(267),
    [anon_sym_deriving] = ACTIONS(267),
    [sym__variable_pattern] = ACTIONS(269),
    [sym__constructor_pattern] = ACTIONS(271),
    [sym_comment] = ACTIONS(5),
  },
  [59] = {
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_DASH_GT] = ACTIONS(85),
    [sym__variable_pattern] = ACTIONS(85),
    [sym__constructor_pattern] = ACTIONS(221),
    [sym_comment] = ACTIONS(5),
  },
  [60] = {
    [sym_simple_type] = STATE(157),
    [sym_constructor_identifier] = STATE(64),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [61] = {
    [anon_sym_EQ] = ACTIONS(273),
    [sym_comment] = ACTIONS(5),
  },
  [62] = {
    [sym_variable_identifier] = STATE(160),
    [aux_sym_type_class_repeat1] = STATE(161),
    [anon_sym_LPAREN] = ACTIONS(227),
    [anon_sym_EQ] = ACTIONS(267),
    [sym__variable_pattern] = ACTIONS(275),
    [sym_comment] = ACTIONS(5),
  },
  [63] = {
    [anon_sym_EQ] = ACTIONS(277),
    [sym_comment] = ACTIONS(5),
  },
  [64] = {
    [sym_variable_identifier] = STATE(164),
    [aux_sym_type_class_repeat1] = STATE(161),
    [anon_sym_EQ] = ACTIONS(267),
    [sym__variable_pattern] = ACTIONS(279),
    [sym_comment] = ACTIONS(5),
  },
  [65] = {
    [sym__layout_semicolon] = ACTIONS(281),
    [anon_sym_SEMI] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(283),
    [anon_sym__] = ACTIONS(283),
    [sym_list_constructor] = ACTIONS(283),
    [sym__variable_pattern] = ACTIONS(285),
    [sym__constructor_pattern] = ACTIONS(285),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(285),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_DQUOTE] = ACTIONS(283),
    [sym__integer_literal] = ACTIONS(283),
    [sym__octal_literal] = ACTIONS(283),
    [sym__hexidecimal_literal] = ACTIONS(283),
  },
  [66] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(287),
  },
  [67] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(289),
  },
  [68] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(291),
  },
  [69] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(293),
  },
  [70] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(295),
  },
  [71] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(297),
  },
  [72] = {
    [sym__char_escape] = STATE(167),
    [sym__ascii] = STATE(167),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(299),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(301),
    [anon_sym_AMP] = ACTIONS(299),
    [anon_sym_CARET] = ACTIONS(303),
    [anon_sym_BSLASH] = ACTIONS(299),
    [anon_sym_x] = ACTIONS(305),
    [anon_sym_X] = ACTIONS(305),
    [anon_sym_o] = ACTIONS(307),
    [anon_sym_O] = ACTIONS(307),
    [anon_sym_a] = ACTIONS(299),
    [anon_sym_b] = ACTIONS(299),
    [anon_sym_f] = ACTIONS(299),
    [anon_sym_n] = ACTIONS(299),
    [anon_sym_r] = ACTIONS(299),
    [anon_sym_t] = ACTIONS(299),
    [anon_sym_v] = ACTIONS(299),
    [anon_sym_NUL] = ACTIONS(309),
    [anon_sym_SOH] = ACTIONS(309),
    [anon_sym_STX] = ACTIONS(309),
    [anon_sym_ETX] = ACTIONS(309),
    [anon_sym_EOT] = ACTIONS(309),
    [anon_sym_ENQ] = ACTIONS(309),
    [anon_sym_ACK] = ACTIONS(309),
    [anon_sym_BEL] = ACTIONS(309),
    [anon_sym_BS] = ACTIONS(309),
    [anon_sym_HT] = ACTIONS(309),
    [anon_sym_LF] = ACTIONS(309),
    [anon_sym_VT] = ACTIONS(309),
    [anon_sym_FF] = ACTIONS(309),
    [anon_sym_CR] = ACTIONS(309),
    [anon_sym_SO] = ACTIONS(309),
    [anon_sym_SI] = ACTIONS(309),
    [anon_sym_DLE] = ACTIONS(309),
    [anon_sym_DC1] = ACTIONS(309),
    [anon_sym_DC2] = ACTIONS(309),
    [anon_sym_DC3] = ACTIONS(309),
    [anon_sym_DC4] = ACTIONS(309),
    [anon_sym_NAK] = ACTIONS(309),
    [anon_sym_SYN] = ACTIONS(309),
    [anon_sym_ETB] = ACTIONS(309),
    [anon_sym_CAN] = ACTIONS(309),
    [anon_sym_EM] = ACTIONS(309),
    [anon_sym_SUB] = ACTIONS(309),
    [anon_sym_ESC] = ACTIONS(309),
    [anon_sym_FS] = ACTIONS(309),
    [anon_sym_GS] = ACTIONS(309),
    [anon_sym_RS] = ACTIONS(309),
    [anon_sym_US] = ACTIONS(309),
    [anon_sym_SP] = ACTIONS(309),
    [anon_sym_DEL] = ACTIONS(309),
  },
  [73] = {
    [anon_sym_SEMI] = ACTIONS(311),
    [anon_sym_LBRACE] = ACTIONS(311),
    [anon_sym_RBRACE] = ACTIONS(311),
    [anon_sym_LPAREN] = ACTIONS(311),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_EQ] = ACTIONS(311),
    [anon_sym_DASH] = ACTIONS(311),
    [anon_sym_AT] = ACTIONS(311),
    [anon_sym__] = ACTIONS(311),
    [anon_sym_BQUOTE] = ACTIONS(311),
    [anon_sym_COLON] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(311),
    [anon_sym_RBRACK] = ACTIONS(311),
    [anon_sym_PIPE] = ACTIONS(311),
    [anon_sym_BANG] = ACTIONS(311),
    [anon_sym_DOT] = ACTIONS(311),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(311),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(311),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(311),
    [sym__ascii_large] = ACTIONS(311),
    [anon_sym_POUND] = ACTIONS(311),
    [anon_sym_DOLLAR] = ACTIONS(311),
    [anon_sym_PERCENT] = ACTIONS(311),
    [anon_sym_AMP] = ACTIONS(311),
    [anon_sym_1] = ACTIONS(311),
    [anon_sym_PLUS] = ACTIONS(311),
    [anon_sym_SLASH] = ACTIONS(311),
    [anon_sym_LT] = ACTIONS(311),
    [anon_sym_GT] = ACTIONS(311),
    [anon_sym_QMARK] = ACTIONS(311),
    [anon_sym_CARET] = ACTIONS(311),
    [anon_sym_TILDE] = ACTIONS(311),
    [anon_sym_BSLASH] = ACTIONS(311),
    [sym__space] = ACTIONS(311),
    [sym__newline] = ACTIONS(311),
    [sym__tab] = ACTIONS(311),
    [sym__vertical_tab] = ACTIONS(311),
  },
  [74] = {
    [anon_sym_SEMI] = ACTIONS(313),
    [anon_sym_LBRACE] = ACTIONS(313),
    [anon_sym_RBRACE] = ACTIONS(313),
    [anon_sym_LPAREN] = ACTIONS(313),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_EQ] = ACTIONS(313),
    [anon_sym_DASH] = ACTIONS(313),
    [anon_sym_AT] = ACTIONS(313),
    [anon_sym__] = ACTIONS(313),
    [anon_sym_BQUOTE] = ACTIONS(313),
    [anon_sym_COLON] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(313),
    [anon_sym_RBRACK] = ACTIONS(313),
    [anon_sym_PIPE] = ACTIONS(313),
    [anon_sym_BANG] = ACTIONS(313),
    [anon_sym_DOT] = ACTIONS(313),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(313),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(313),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(313),
    [sym__ascii_large] = ACTIONS(313),
    [anon_sym_POUND] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(313),
    [anon_sym_PERCENT] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(313),
    [anon_sym_1] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(313),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_QMARK] = ACTIONS(313),
    [anon_sym_CARET] = ACTIONS(313),
    [anon_sym_TILDE] = ACTIONS(313),
    [anon_sym_BSLASH] = ACTIONS(313),
    [sym__space] = ACTIONS(313),
    [sym__newline] = ACTIONS(313),
    [sym__tab] = ACTIONS(313),
    [sym__vertical_tab] = ACTIONS(313),
  },
  [75] = {
    [anon_sym_SEMI] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(315),
    [anon_sym_RBRACE] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(315),
    [anon_sym_AT] = ACTIONS(315),
    [anon_sym__] = ACTIONS(315),
    [anon_sym_BQUOTE] = ACTIONS(315),
    [anon_sym_COLON] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_RBRACK] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_BANG] = ACTIONS(315),
    [anon_sym_DOT] = ACTIONS(315),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(315),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(315),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(315),
    [sym__ascii_large] = ACTIONS(315),
    [anon_sym_POUND] = ACTIONS(315),
    [anon_sym_DOLLAR] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(315),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_1] = ACTIONS(315),
    [anon_sym_PLUS] = ACTIONS(315),
    [anon_sym_SLASH] = ACTIONS(315),
    [anon_sym_LT] = ACTIONS(315),
    [anon_sym_GT] = ACTIONS(315),
    [anon_sym_QMARK] = ACTIONS(315),
    [anon_sym_CARET] = ACTIONS(315),
    [anon_sym_TILDE] = ACTIONS(315),
    [anon_sym_BSLASH] = ACTIONS(315),
    [sym__space] = ACTIONS(315),
    [sym__newline] = ACTIONS(315),
    [sym__tab] = ACTIONS(315),
    [sym__vertical_tab] = ACTIONS(315),
  },
  [76] = {
    [anon_sym_SEMI] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_RBRACE] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(317),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_DASH] = ACTIONS(317),
    [anon_sym_AT] = ACTIONS(317),
    [anon_sym__] = ACTIONS(317),
    [anon_sym_BQUOTE] = ACTIONS(317),
    [anon_sym_COLON] = ACTIONS(317),
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_RBRACK] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_BANG] = ACTIONS(317),
    [anon_sym_DOT] = ACTIONS(317),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(317),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(317),
    [sym__ascii_large] = ACTIONS(317),
    [anon_sym_POUND] = ACTIONS(317),
    [anon_sym_DOLLAR] = ACTIONS(317),
    [anon_sym_PERCENT] = ACTIONS(317),
    [anon_sym_AMP] = ACTIONS(317),
    [anon_sym_1] = ACTIONS(317),
    [anon_sym_PLUS] = ACTIONS(317),
    [anon_sym_SLASH] = ACTIONS(317),
    [anon_sym_LT] = ACTIONS(317),
    [anon_sym_GT] = ACTIONS(317),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_CARET] = ACTIONS(317),
    [anon_sym_TILDE] = ACTIONS(317),
    [anon_sym_BSLASH] = ACTIONS(317),
    [sym__space] = ACTIONS(317),
    [sym__newline] = ACTIONS(317),
    [sym__tab] = ACTIONS(317),
    [sym__vertical_tab] = ACTIONS(317),
  },
  [77] = {
    [sym__layout_semicolon] = ACTIONS(319),
    [anon_sym_SEMI] = ACTIONS(321),
    [sym__variable_pattern] = ACTIONS(321),
    [sym__constructor_pattern] = ACTIONS(323),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(323),
    [anon_sym_SQUOTE] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(321),
    [sym__integer_literal] = ACTIONS(321),
    [sym__octal_literal] = ACTIONS(321),
    [sym__hexidecimal_literal] = ACTIONS(321),
  },
  [78] = {
    [anon_sym_SEMI] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(325),
    [anon_sym_RBRACE] = ACTIONS(325),
    [anon_sym_LPAREN] = ACTIONS(325),
    [anon_sym_RPAREN] = ACTIONS(325),
    [anon_sym_EQ] = ACTIONS(325),
    [anon_sym_DASH] = ACTIONS(325),
    [anon_sym_AT] = ACTIONS(325),
    [anon_sym__] = ACTIONS(325),
    [anon_sym_BQUOTE] = ACTIONS(325),
    [anon_sym_COLON] = ACTIONS(325),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_RBRACK] = ACTIONS(325),
    [anon_sym_PIPE] = ACTIONS(325),
    [anon_sym_BANG] = ACTIONS(325),
    [anon_sym_DOT] = ACTIONS(325),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(325),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(325),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(325),
    [sym__ascii_large] = ACTIONS(325),
    [anon_sym_POUND] = ACTIONS(325),
    [anon_sym_DOLLAR] = ACTIONS(325),
    [anon_sym_PERCENT] = ACTIONS(325),
    [anon_sym_AMP] = ACTIONS(325),
    [anon_sym_1] = ACTIONS(325),
    [anon_sym_PLUS] = ACTIONS(325),
    [anon_sym_SLASH] = ACTIONS(325),
    [anon_sym_LT] = ACTIONS(325),
    [anon_sym_GT] = ACTIONS(325),
    [anon_sym_QMARK] = ACTIONS(325),
    [anon_sym_CARET] = ACTIONS(325),
    [anon_sym_TILDE] = ACTIONS(325),
    [anon_sym_BSLASH] = ACTIONS(325),
    [sym__space] = ACTIONS(325),
    [sym__newline] = ACTIONS(325),
    [sym__tab] = ACTIONS(325),
    [sym__vertical_tab] = ACTIONS(325),
  },
  [79] = {
    [anon_sym_SEMI] = ACTIONS(327),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_RBRACE] = ACTIONS(327),
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym_RPAREN] = ACTIONS(327),
    [anon_sym_EQ] = ACTIONS(327),
    [anon_sym_DASH] = ACTIONS(327),
    [anon_sym_AT] = ACTIONS(327),
    [anon_sym__] = ACTIONS(327),
    [anon_sym_BQUOTE] = ACTIONS(327),
    [anon_sym_COLON] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(327),
    [anon_sym_RBRACK] = ACTIONS(327),
    [anon_sym_PIPE] = ACTIONS(327),
    [anon_sym_BANG] = ACTIONS(327),
    [anon_sym_DOT] = ACTIONS(327),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(327),
    [anon_sym_DQUOTE] = ACTIONS(327),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(327),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(327),
    [sym__ascii_large] = ACTIONS(327),
    [anon_sym_POUND] = ACTIONS(327),
    [anon_sym_DOLLAR] = ACTIONS(327),
    [anon_sym_PERCENT] = ACTIONS(327),
    [anon_sym_AMP] = ACTIONS(327),
    [anon_sym_1] = ACTIONS(327),
    [anon_sym_PLUS] = ACTIONS(327),
    [anon_sym_SLASH] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(327),
    [anon_sym_QMARK] = ACTIONS(327),
    [anon_sym_CARET] = ACTIONS(327),
    [anon_sym_TILDE] = ACTIONS(327),
    [anon_sym_BSLASH] = ACTIONS(327),
    [sym__space] = ACTIONS(327),
    [sym__newline] = ACTIONS(327),
    [sym__tab] = ACTIONS(327),
    [sym__vertical_tab] = ACTIONS(327),
  },
  [80] = {
    [sym__char_escape] = STATE(173),
    [sym__ascii] = STATE(173),
    [anon_sym_SEMI] = ACTIONS(313),
    [anon_sym_LBRACE] = ACTIONS(313),
    [anon_sym_RBRACE] = ACTIONS(313),
    [anon_sym_LPAREN] = ACTIONS(313),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_EQ] = ACTIONS(313),
    [anon_sym_DASH] = ACTIONS(313),
    [anon_sym_AT] = ACTIONS(313),
    [anon_sym__] = ACTIONS(313),
    [anon_sym_BQUOTE] = ACTIONS(313),
    [anon_sym_COLON] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(313),
    [anon_sym_RBRACK] = ACTIONS(313),
    [anon_sym_PIPE] = ACTIONS(313),
    [anon_sym_BANG] = ACTIONS(313),
    [anon_sym_DOT] = ACTIONS(313),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(329),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(331),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(313),
    [sym__ascii_large] = ACTIONS(313),
    [anon_sym_POUND] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(313),
    [anon_sym_PERCENT] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(329),
    [anon_sym_1] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(313),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_QMARK] = ACTIONS(313),
    [anon_sym_CARET] = ACTIONS(333),
    [anon_sym_TILDE] = ACTIONS(313),
    [anon_sym_BSLASH] = ACTIONS(329),
    [sym__space] = ACTIONS(313),
    [sym__newline] = ACTIONS(313),
    [sym__tab] = ACTIONS(313),
    [sym__vertical_tab] = ACTIONS(313),
    [anon_sym_x] = ACTIONS(335),
    [anon_sym_X] = ACTIONS(335),
    [anon_sym_o] = ACTIONS(337),
    [anon_sym_O] = ACTIONS(337),
    [anon_sym_a] = ACTIONS(329),
    [anon_sym_b] = ACTIONS(329),
    [anon_sym_f] = ACTIONS(329),
    [anon_sym_n] = ACTIONS(329),
    [anon_sym_r] = ACTIONS(329),
    [anon_sym_t] = ACTIONS(329),
    [anon_sym_v] = ACTIONS(329),
    [anon_sym_NUL] = ACTIONS(339),
    [anon_sym_SOH] = ACTIONS(339),
    [anon_sym_STX] = ACTIONS(339),
    [anon_sym_ETX] = ACTIONS(339),
    [anon_sym_EOT] = ACTIONS(339),
    [anon_sym_ENQ] = ACTIONS(339),
    [anon_sym_ACK] = ACTIONS(339),
    [anon_sym_BEL] = ACTIONS(339),
    [anon_sym_BS] = ACTIONS(339),
    [anon_sym_HT] = ACTIONS(339),
    [anon_sym_LF] = ACTIONS(339),
    [anon_sym_VT] = ACTIONS(339),
    [anon_sym_FF] = ACTIONS(339),
    [anon_sym_CR] = ACTIONS(339),
    [anon_sym_SO] = ACTIONS(339),
    [anon_sym_SI] = ACTIONS(339),
    [anon_sym_DLE] = ACTIONS(339),
    [anon_sym_DC1] = ACTIONS(339),
    [anon_sym_DC2] = ACTIONS(339),
    [anon_sym_DC3] = ACTIONS(339),
    [anon_sym_DC4] = ACTIONS(339),
    [anon_sym_NAK] = ACTIONS(339),
    [anon_sym_SYN] = ACTIONS(339),
    [anon_sym_ETB] = ACTIONS(339),
    [anon_sym_CAN] = ACTIONS(339),
    [anon_sym_EM] = ACTIONS(339),
    [anon_sym_SUB] = ACTIONS(339),
    [anon_sym_ESC] = ACTIONS(339),
    [anon_sym_FS] = ACTIONS(339),
    [anon_sym_GS] = ACTIONS(339),
    [anon_sym_RS] = ACTIONS(339),
    [anon_sym_US] = ACTIONS(339),
    [anon_sym_SP] = ACTIONS(339),
    [anon_sym_DEL] = ACTIONS(339),
  },
  [81] = {
    [anon_sym_SEMI] = ACTIONS(341),
    [anon_sym_LBRACE] = ACTIONS(341),
    [anon_sym_RBRACE] = ACTIONS(341),
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(341),
    [anon_sym_EQ] = ACTIONS(341),
    [anon_sym_DASH] = ACTIONS(341),
    [anon_sym_AT] = ACTIONS(341),
    [anon_sym__] = ACTIONS(341),
    [anon_sym_BQUOTE] = ACTIONS(341),
    [anon_sym_COLON] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(341),
    [anon_sym_RBRACK] = ACTIONS(341),
    [anon_sym_PIPE] = ACTIONS(341),
    [anon_sym_BANG] = ACTIONS(341),
    [anon_sym_DOT] = ACTIONS(341),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(341),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(341),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(341),
    [sym__ascii_large] = ACTIONS(341),
    [anon_sym_POUND] = ACTIONS(341),
    [anon_sym_DOLLAR] = ACTIONS(341),
    [anon_sym_PERCENT] = ACTIONS(341),
    [anon_sym_AMP] = ACTIONS(341),
    [anon_sym_1] = ACTIONS(341),
    [anon_sym_PLUS] = ACTIONS(341),
    [anon_sym_SLASH] = ACTIONS(341),
    [anon_sym_LT] = ACTIONS(341),
    [anon_sym_GT] = ACTIONS(341),
    [anon_sym_QMARK] = ACTIONS(341),
    [anon_sym_CARET] = ACTIONS(341),
    [anon_sym_TILDE] = ACTIONS(341),
    [anon_sym_BSLASH] = ACTIONS(341),
    [sym__space] = ACTIONS(341),
    [sym__newline] = ACTIONS(341),
    [sym__tab] = ACTIONS(341),
    [sym__vertical_tab] = ACTIONS(341),
  },
  [82] = {
    [sym__gap] = STATE(178),
    [sym__graphic] = STATE(178),
    [sym__small] = STATE(78),
    [sym__large] = STATE(78),
    [sym__symbol] = STATE(78),
    [sym__special] = STATE(78),
    [sym__escape] = STATE(178),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_AT] = ACTIONS(113),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_COLON] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_BANG] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(113),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(343),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(115),
    [sym__ascii_large] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(113),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_PERCENT] = ACTIONS(113),
    [anon_sym_AMP] = ACTIONS(113),
    [anon_sym_1] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_CARET] = ACTIONS(113),
    [anon_sym_TILDE] = ACTIONS(113),
    [anon_sym_BSLASH] = ACTIONS(125),
    [sym__space] = ACTIONS(127),
    [sym__newline] = ACTIONS(127),
    [sym__tab] = ACTIONS(127),
    [sym__vertical_tab] = ACTIONS(127),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(347),
    [anon_sym_RBRACE] = ACTIONS(349),
    [anon_sym_import] = ACTIONS(349),
    [anon_sym_foreign] = ACTIONS(349),
    [anon_sym_default] = ACTIONS(349),
    [anon_sym_do] = ACTIONS(349),
    [anon_sym_class] = ACTIONS(349),
    [anon_sym_instance] = ACTIONS(349),
    [anon_sym_infixl] = ACTIONS(349),
    [anon_sym_infixr] = ACTIONS(349),
    [anon_sym_infix] = ACTIONS(349),
    [anon_sym_data] = ACTIONS(349),
    [anon_sym_newtype] = ACTIONS(349),
    [anon_sym_type] = ACTIONS(349),
    [sym__variable_pattern] = ACTIONS(351),
    [sym__constructor_pattern] = ACTIONS(351),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(351),
    [anon_sym_SQUOTE] = ACTIONS(349),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [sym__integer_literal] = ACTIONS(349),
    [sym__octal_literal] = ACTIONS(349),
    [sym__hexidecimal_literal] = ACTIONS(349),
  },
  [84] = {
    [sym_general_constructor] = STATE(182),
    [sym__literal] = STATE(182),
    [sym__identifier] = STATE(182),
    [sym_variable_identifier] = STATE(29),
    [sym_constructor_identifier] = STATE(183),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_function_body_repeat1] = STATE(184),
    [sym__layout_semicolon] = ACTIONS(353),
    [anon_sym_SEMI] = ACTIONS(355),
    [sym__variable_pattern] = ACTIONS(357),
    [sym__constructor_pattern] = ACTIONS(359),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [85] = {
    [sym__layout_semicolon] = ACTIONS(361),
    [anon_sym_SEMI] = ACTIONS(363),
    [sym_comment] = ACTIONS(5),
  },
  [86] = {
    [sym__function_pattern] = STATE(187),
    [sym_tuple_pattern] = STATE(88),
    [sym_parenthesized_pattern] = STATE(88),
    [sym__pattern] = STATE(188),
    [sym_negative_literal] = STATE(189),
    [sym_general_constructor] = STATE(189),
    [sym_as_pattern] = STATE(88),
    [sym_wildcard] = STATE(88),
    [sym__variable] = STATE(190),
    [sym_qualified_variable_identifier] = STATE(96),
    [sym__literal] = STATE(88),
    [sym__identifier] = STATE(97),
    [sym_simple_type] = STATE(98),
    [sym_variable_identifier] = STATE(99),
    [sym_constructor_identifier] = STATE(191),
    [sym_integer] = STATE(91),
    [sym_char] = STATE(91),
    [sym_string] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(365),
    [anon_sym__] = ACTIONS(153),
    [sym_list_constructor] = ACTIONS(155),
    [sym__variable_pattern] = ACTIONS(157),
    [sym__constructor_pattern] = ACTIONS(367),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(161),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [87] = {
    [anon_sym_LPAREN] = ACTIONS(369),
    [anon_sym_COMMA] = ACTIONS(369),
    [anon_sym_RPAREN] = ACTIONS(369),
    [anon_sym_EQ] = ACTIONS(369),
    [anon_sym_DASH] = ACTIONS(369),
    [anon_sym__] = ACTIONS(369),
    [anon_sym_BQUOTE] = ACTIONS(369),
    [anon_sym_COLON] = ACTIONS(369),
    [sym_list_constructor] = ACTIONS(369),
    [anon_sym_BANG] = ACTIONS(369),
    [sym__variable_pattern] = ACTIONS(371),
    [sym__constructor_pattern] = ACTIONS(371),
    [anon_sym_DOT] = ACTIONS(369),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(371),
    [anon_sym_SQUOTE] = ACTIONS(369),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [anon_sym_POUND] = ACTIONS(369),
    [anon_sym_DOLLAR] = ACTIONS(369),
    [anon_sym_PERCENT] = ACTIONS(369),
    [anon_sym_AMP] = ACTIONS(369),
    [anon_sym_1] = ACTIONS(369),
    [anon_sym_PLUS] = ACTIONS(369),
    [anon_sym_SLASH] = ACTIONS(369),
    [anon_sym_LT] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(369),
    [anon_sym_QMARK] = ACTIONS(369),
    [anon_sym_CARET] = ACTIONS(369),
    [sym__integer_literal] = ACTIONS(369),
    [sym__octal_literal] = ACTIONS(369),
    [sym__hexidecimal_literal] = ACTIONS(369),
  },
  [88] = {
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_COMMA] = ACTIONS(373),
    [anon_sym_RPAREN] = ACTIONS(373),
    [anon_sym_EQ] = ACTIONS(373),
    [anon_sym_DASH] = ACTIONS(373),
    [anon_sym__] = ACTIONS(373),
    [anon_sym_BQUOTE] = ACTIONS(373),
    [anon_sym_COLON] = ACTIONS(373),
    [sym_list_constructor] = ACTIONS(373),
    [anon_sym_BANG] = ACTIONS(373),
    [sym__variable_pattern] = ACTIONS(375),
    [sym__constructor_pattern] = ACTIONS(375),
    [anon_sym_DOT] = ACTIONS(373),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(375),
    [anon_sym_SQUOTE] = ACTIONS(373),
    [anon_sym_DQUOTE] = ACTIONS(373),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_DOLLAR] = ACTIONS(373),
    [anon_sym_PERCENT] = ACTIONS(373),
    [anon_sym_AMP] = ACTIONS(373),
    [anon_sym_1] = ACTIONS(373),
    [anon_sym_PLUS] = ACTIONS(373),
    [anon_sym_SLASH] = ACTIONS(373),
    [anon_sym_LT] = ACTIONS(373),
    [anon_sym_GT] = ACTIONS(373),
    [anon_sym_QMARK] = ACTIONS(373),
    [anon_sym_CARET] = ACTIONS(373),
    [sym__integer_literal] = ACTIONS(373),
    [sym__octal_literal] = ACTIONS(373),
    [sym__hexidecimal_literal] = ACTIONS(373),
  },
  [89] = {
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_AT] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_list_constructor] = ACTIONS(79),
    [anon_sym_BANG] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(81),
    [sym__constructor_pattern] = ACTIONS(81),
    [anon_sym_DOT] = ACTIONS(79),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [anon_sym_POUND] = ACTIONS(79),
    [anon_sym_DOLLAR] = ACTIONS(79),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(79),
    [anon_sym_1] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(79),
    [sym__integer_literal] = ACTIONS(79),
    [sym__octal_literal] = ACTIONS(79),
    [sym__hexidecimal_literal] = ACTIONS(79),
  },
  [90] = {
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym__] = ACTIONS(85),
    [sym_list_constructor] = ACTIONS(85),
    [sym__variable_pattern] = ACTIONS(221),
    [sym__constructor_pattern] = ACTIONS(221),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(221),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym__integer_literal] = ACTIONS(85),
    [sym__octal_literal] = ACTIONS(85),
    [sym__hexidecimal_literal] = ACTIONS(85),
  },
  [91] = {
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_EQ] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(91),
    [anon_sym__] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(91),
    [sym_list_constructor] = ACTIONS(91),
    [anon_sym_BANG] = ACTIONS(91),
    [sym__variable_pattern] = ACTIONS(93),
    [sym__constructor_pattern] = ACTIONS(93),
    [anon_sym_DOT] = ACTIONS(91),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_POUND] = ACTIONS(91),
    [anon_sym_DOLLAR] = ACTIONS(91),
    [anon_sym_PERCENT] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(91),
    [anon_sym_1] = ACTIONS(91),
    [anon_sym_PLUS] = ACTIONS(91),
    [anon_sym_SLASH] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(91),
    [anon_sym_GT] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(91),
    [anon_sym_CARET] = ACTIONS(91),
    [sym__integer_literal] = ACTIONS(91),
    [sym__octal_literal] = ACTIONS(91),
    [sym__hexidecimal_literal] = ACTIONS(91),
  },
  [92] = {
    [sym__graphic] = STATE(193),
    [sym__small] = STATE(70),
    [sym__large] = STATE(70),
    [sym__symbol] = STATE(70),
    [sym__special] = STATE(70),
    [sym__escape] = STATE(193),
    [anon_sym_SEMI] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_EQ] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_AT] = ACTIONS(97),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_BANG] = ACTIONS(97),
    [anon_sym_DOT] = ACTIONS(97),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(377),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(105),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(99),
    [sym__ascii_large] = ACTIONS(107),
    [anon_sym_POUND] = ACTIONS(97),
    [anon_sym_DOLLAR] = ACTIONS(97),
    [anon_sym_PERCENT] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(97),
    [anon_sym_1] = ACTIONS(97),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(97),
    [anon_sym_GT] = ACTIONS(97),
    [anon_sym_QMARK] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(97),
    [anon_sym_TILDE] = ACTIONS(97),
    [anon_sym_BSLASH] = ACTIONS(109),
    [sym__space] = ACTIONS(377),
  },
  [93] = {
    [sym__gap] = STATE(76),
    [sym__graphic] = STATE(76),
    [sym__small] = STATE(78),
    [sym__large] = STATE(78),
    [sym__symbol] = STATE(78),
    [sym__special] = STATE(78),
    [sym__escape] = STATE(76),
    [aux_sym_string_repeat1] = STATE(195),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_AT] = ACTIONS(113),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_COLON] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_BANG] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(113),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(115),
    [sym__ascii_large] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(113),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_PERCENT] = ACTIONS(113),
    [anon_sym_AMP] = ACTIONS(113),
    [anon_sym_1] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_CARET] = ACTIONS(113),
    [anon_sym_TILDE] = ACTIONS(113),
    [anon_sym_BSLASH] = ACTIONS(125),
    [sym__space] = ACTIONS(127),
    [sym__newline] = ACTIONS(127),
    [sym__tab] = ACTIONS(127),
    [sym__vertical_tab] = ACTIONS(127),
  },
  [94] = {
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_EQ] = ACTIONS(381),
    [anon_sym__] = ACTIONS(381),
    [sym_list_constructor] = ACTIONS(381),
    [sym__variable_pattern] = ACTIONS(383),
    [sym__constructor_pattern] = ACTIONS(383),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(383),
    [anon_sym_SQUOTE] = ACTIONS(381),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [sym__integer_literal] = ACTIONS(381),
    [sym__octal_literal] = ACTIONS(381),
    [sym__hexidecimal_literal] = ACTIONS(381),
  },
  [95] = {
    [anon_sym_AT] = ACTIONS(385),
    [sym_comment] = ACTIONS(5),
  },
  [96] = {
    [anon_sym_AT] = ACTIONS(169),
    [sym_comment] = ACTIONS(5),
  },
  [97] = {
    [anon_sym_LBRACE] = ACTIONS(387),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_COMMA] = ACTIONS(373),
    [anon_sym_RPAREN] = ACTIONS(373),
    [anon_sym_EQ] = ACTIONS(373),
    [anon_sym_DASH] = ACTIONS(373),
    [anon_sym__] = ACTIONS(373),
    [anon_sym_BQUOTE] = ACTIONS(373),
    [anon_sym_COLON] = ACTIONS(373),
    [sym_list_constructor] = ACTIONS(373),
    [anon_sym_BANG] = ACTIONS(373),
    [sym__variable_pattern] = ACTIONS(375),
    [sym__constructor_pattern] = ACTIONS(375),
    [anon_sym_DOT] = ACTIONS(373),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(375),
    [anon_sym_SQUOTE] = ACTIONS(373),
    [anon_sym_DQUOTE] = ACTIONS(373),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_DOLLAR] = ACTIONS(373),
    [anon_sym_PERCENT] = ACTIONS(373),
    [anon_sym_AMP] = ACTIONS(373),
    [anon_sym_1] = ACTIONS(373),
    [anon_sym_PLUS] = ACTIONS(373),
    [anon_sym_SLASH] = ACTIONS(373),
    [anon_sym_LT] = ACTIONS(373),
    [anon_sym_GT] = ACTIONS(373),
    [anon_sym_QMARK] = ACTIONS(373),
    [anon_sym_CARET] = ACTIONS(373),
    [sym__integer_literal] = ACTIONS(373),
    [sym__octal_literal] = ACTIONS(373),
    [sym__hexidecimal_literal] = ACTIONS(373),
  },
  [98] = {
    [anon_sym_LBRACE] = ACTIONS(387),
    [sym_comment] = ACTIONS(5),
  },
  [99] = {
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_EQ] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(169),
    [anon_sym__] = ACTIONS(181),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [anon_sym_COLON] = ACTIONS(181),
    [sym_list_constructor] = ACTIONS(181),
    [anon_sym_BANG] = ACTIONS(181),
    [sym__variable_pattern] = ACTIONS(183),
    [sym__constructor_pattern] = ACTIONS(183),
    [anon_sym_DOT] = ACTIONS(181),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(183),
    [anon_sym_SQUOTE] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(181),
    [anon_sym_DOLLAR] = ACTIONS(181),
    [anon_sym_PERCENT] = ACTIONS(181),
    [anon_sym_AMP] = ACTIONS(181),
    [anon_sym_1] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_LT] = ACTIONS(181),
    [anon_sym_GT] = ACTIONS(181),
    [anon_sym_QMARK] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(181),
    [sym__integer_literal] = ACTIONS(181),
    [sym__octal_literal] = ACTIONS(181),
    [sym__hexidecimal_literal] = ACTIONS(181),
  },
  [100] = {
    [sym_variable_identifier] = STATE(164),
    [aux_sym_type_class_repeat1] = STATE(198),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_EQ] = ACTIONS(181),
    [anon_sym__] = ACTIONS(181),
    [sym_list_constructor] = ACTIONS(181),
    [sym__variable_pattern] = ACTIONS(183),
    [sym__constructor_pattern] = ACTIONS(183),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(183),
    [anon_sym_SQUOTE] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [sym__integer_literal] = ACTIONS(181),
    [sym__octal_literal] = ACTIONS(181),
    [sym__hexidecimal_literal] = ACTIONS(181),
  },
  [101] = {
    [sym__function_pattern] = STATE(199),
    [sym_tuple_pattern] = STATE(88),
    [sym_parenthesized_pattern] = STATE(88),
    [sym_as_pattern] = STATE(88),
    [sym_wildcard] = STATE(88),
    [sym__variable] = STATE(95),
    [sym_qualified_variable_identifier] = STATE(96),
    [sym__literal] = STATE(88),
    [sym__identifier] = STATE(97),
    [sym_simple_type] = STATE(98),
    [sym_variable_identifier] = STATE(99),
    [sym_constructor_identifier] = STATE(100),
    [sym_integer] = STATE(91),
    [sym_char] = STATE(91),
    [sym_string] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_EQ] = ACTIONS(389),
    [anon_sym__] = ACTIONS(153),
    [sym_list_constructor] = ACTIONS(155),
    [sym__variable_pattern] = ACTIONS(157),
    [sym__constructor_pattern] = ACTIONS(159),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(161),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [102] = {
    [sym_type] = STATE(205),
    [sym__generic_type_constructor] = STATE(206),
    [sym_tupling_constructor] = STATE(201),
    [sym_tuple] = STATE(206),
    [sym_list] = STATE(206),
    [sym_parenthesized_constructor] = STATE(206),
    [sym_context] = STATE(207),
    [sym_class] = STATE(208),
    [sym_variable_identifier] = STATE(209),
    [sym_constructor_identifier] = STATE(210),
    [sym__type_constructors] = STATE(201),
    [sym_qualified_type_constructor] = STATE(211),
    [anon_sym_LPAREN] = ACTIONS(391),
    [sym_unit_type] = ACTIONS(393),
    [sym_list_constructor] = ACTIONS(393),
    [sym_function_constructor] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(395),
    [sym__variable_pattern] = ACTIONS(397),
    [sym__constructor_pattern] = ACTIONS(399),
    [sym_module_identifier] = ACTIONS(401),
    [sym_comment] = ACTIONS(5),
  },
  [103] = {
    [sym__layout_semicolon] = ACTIONS(403),
    [anon_sym_SEMI] = ACTIONS(405),
    [sym_comment] = ACTIONS(5),
  },
  [104] = {
    [sym_declarations] = STATE(215),
    [sym__layout_open_brace] = ACTIONS(407),
    [anon_sym_LBRACE] = ACTIONS(409),
    [sym_comment] = ACTIONS(5),
  },
  [105] = {
    [sym_export] = STATE(217),
    [sym__identifier] = STATE(218),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [anon_sym_RPAREN] = ACTIONS(411),
    [sym__variable_pattern] = ACTIONS(209),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [106] = {
    [anon_sym_where] = ACTIONS(413),
    [sym_comment] = ACTIONS(5),
  },
  [107] = {
    [sym_import_specification] = STATE(221),
    [sym__layout_semicolon] = ACTIONS(415),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_as] = ACTIONS(419),
    [anon_sym_hiding] = ACTIONS(201),
    [sym_comment] = ACTIONS(5),
  },
  [108] = {
    [sym__identifier] = STATE(223),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [anon_sym_RPAREN] = ACTIONS(421),
    [sym__variable_pattern] = ACTIONS(209),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [109] = {
    [sym_module_identifier] = ACTIONS(423),
    [sym_comment] = ACTIONS(5),
  },
  [110] = {
    [anon_sym_LPAREN] = ACTIONS(425),
    [sym_comment] = ACTIONS(5),
  },
  [111] = {
    [sym__layout_semicolon] = ACTIONS(415),
    [anon_sym_SEMI] = ACTIONS(417),
    [sym_comment] = ACTIONS(5),
  },
  [112] = {
    [anon_sym_unsafe] = ACTIONS(427),
    [anon_sym_safe] = ACTIONS(427),
    [sym__variable_pattern] = ACTIONS(429),
    [sym__constructor_pattern] = ACTIONS(429),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(427),
  },
  [113] = {
    [sym_safety] = STATE(228),
    [sym_type_signature] = STATE(229),
    [sym__identifier] = STATE(230),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym_string] = STATE(231),
    [anon_sym_unsafe] = ACTIONS(431),
    [anon_sym_safe] = ACTIONS(431),
    [sym__variable_pattern] = ACTIONS(229),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(433),
  },
  [114] = {
    [sym__layout_semicolon] = ACTIONS(435),
    [anon_sym_SEMI] = ACTIONS(437),
    [sym_comment] = ACTIONS(5),
  },
  [115] = {
    [aux_sym_export_repeat1] = STATE(234),
    [anon_sym_COMMA] = ACTIONS(439),
    [anon_sym_RPAREN] = ACTIONS(441),
    [sym_comment] = ACTIONS(5),
  },
  [116] = {
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_EQ] = ACTIONS(181),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [anon_sym_COLON_COLON] = ACTIONS(181),
    [sym_comment] = ACTIONS(5),
  },
  [117] = {
    [sym__layout_semicolon] = ACTIONS(443),
    [anon_sym_SEMI] = ACTIONS(445),
    [sym_comment] = ACTIONS(5),
  },
  [118] = {
    [sym__variable_pattern] = ACTIONS(87),
    [sym_comment] = ACTIONS(5),
  },
  [119] = {
    [sym__layout_semicolon] = ACTIONS(447),
    [anon_sym_SEMI] = ACTIONS(449),
    [sym_comment] = ACTIONS(5),
  },
  [120] = {
    [sym__layout_close_brace] = ACTIONS(451),
    [anon_sym_do] = ACTIONS(453),
    [sym__variable_pattern] = ACTIONS(455),
    [sym__constructor_pattern] = ACTIONS(455),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(455),
    [anon_sym_SQUOTE] = ACTIONS(453),
    [anon_sym_DQUOTE] = ACTIONS(453),
    [sym__integer_literal] = ACTIONS(453),
    [sym__octal_literal] = ACTIONS(453),
    [sym__hexidecimal_literal] = ACTIONS(453),
  },
  [121] = {
    [sym__variable] = STATE(25),
    [sym_qualified_variable_identifier] = STATE(24),
    [sym__expression] = STATE(119),
    [sym_do_expression] = STATE(25),
    [sym__statement] = STATE(237),
    [sym__literal] = STATE(25),
    [sym_variable_identifier] = STATE(24),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [sym__layout_close_brace] = ACTIONS(457),
    [anon_sym_do] = ACTIONS(19),
    [sym__variable_pattern] = ACTIONS(33),
    [sym__constructor_pattern] = ACTIONS(213),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [122] = {
    [sym__layout_semicolon] = ACTIONS(459),
    [anon_sym_SEMI] = ACTIONS(461),
    [sym_comment] = ACTIONS(5),
  },
  [123] = {
    [anon_sym_RBRACE] = ACTIONS(453),
    [anon_sym_do] = ACTIONS(453),
    [sym__variable_pattern] = ACTIONS(455),
    [sym__constructor_pattern] = ACTIONS(455),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(455),
    [anon_sym_SQUOTE] = ACTIONS(453),
    [anon_sym_DQUOTE] = ACTIONS(453),
    [sym__integer_literal] = ACTIONS(453),
    [sym__octal_literal] = ACTIONS(453),
    [sym__hexidecimal_literal] = ACTIONS(453),
  },
  [124] = {
    [sym__variable] = STATE(25),
    [sym_qualified_variable_identifier] = STATE(24),
    [sym__expression] = STATE(122),
    [sym_do_expression] = STATE(25),
    [sym__statement] = STATE(239),
    [sym__literal] = STATE(25),
    [sym_variable_identifier] = STATE(24),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [anon_sym_RBRACE] = ACTIONS(463),
    [anon_sym_do] = ACTIONS(19),
    [sym__variable_pattern] = ACTIONS(33),
    [sym__constructor_pattern] = ACTIONS(213),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [125] = {
    [aux_sym_context_repeat1] = STATE(242),
    [anon_sym_COMMA] = ACTIONS(465),
    [anon_sym_RPAREN] = ACTIONS(467),
    [sym_comment] = ACTIONS(5),
  },
  [126] = {
    [sym_variable_identifier] = STATE(243),
    [anon_sym_LPAREN] = ACTIONS(227),
    [sym__variable_pattern] = ACTIONS(209),
    [sym_comment] = ACTIONS(5),
  },
  [127] = {
    [sym_variable_identifier] = STATE(245),
    [aux_sym_type_class_repeat1] = STATE(246),
    [anon_sym_where] = ACTIONS(469),
    [sym__variable_pattern] = ACTIONS(229),
    [sym_comment] = ACTIONS(5),
  },
  [128] = {
    [sym__constructor_pattern] = ACTIONS(471),
    [sym_comment] = ACTIONS(5),
  },
  [129] = {
    [sym_general_declarations] = STATE(249),
    [sym__layout_open_brace] = ACTIONS(473),
    [anon_sym_LBRACE] = ACTIONS(475),
    [sym_comment] = ACTIONS(5),
  },
  [130] = {
    [sym_variable_identifier] = STATE(164),
    [aux_sym_type_class_repeat1] = STATE(250),
    [sym__variable_pattern] = ACTIONS(275),
    [sym_comment] = ACTIONS(5),
  },
  [131] = {
    [anon_sym_where] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_COLON_COLON] = ACTIONS(79),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [anon_sym_EQ_GT] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(81),
    [sym_comment] = ACTIONS(5),
  },
  [132] = {
    [anon_sym_where] = ACTIONS(477),
    [anon_sym_EQ_GT] = ACTIONS(479),
    [sym__variable_pattern] = ACTIONS(481),
    [sym_comment] = ACTIONS(5),
  },
  [133] = {
    [sym_variable_identifier] = STATE(251),
    [anon_sym_where] = ACTIONS(469),
    [sym__variable_pattern] = ACTIONS(229),
    [sym_comment] = ACTIONS(5),
  },
  [134] = {
    [sym_variable_identifier] = STATE(245),
    [aux_sym_type_class_repeat1] = STATE(253),
    [anon_sym_where] = ACTIONS(483),
    [sym__variable_pattern] = ACTIONS(229),
    [sym_comment] = ACTIONS(5),
  },
  [135] = {
    [sym_general_declarations] = STATE(254),
    [sym__layout_open_brace] = ACTIONS(473),
    [anon_sym_LBRACE] = ACTIONS(475),
    [sym_comment] = ACTIONS(5),
  },
  [136] = {
    [sym_variable_identifier] = STATE(251),
    [anon_sym_where] = ACTIONS(483),
    [sym__variable_pattern] = ACTIONS(229),
    [sym_comment] = ACTIONS(5),
  },
  [137] = {
    [anon_sym_BQUOTE] = ACTIONS(485),
    [sym_comment] = ACTIONS(5),
  },
  [138] = {
    [sym__layout_semicolon] = ACTIONS(487),
    [anon_sym_SEMI] = ACTIONS(489),
    [anon_sym_COMMA] = ACTIONS(489),
    [anon_sym_DASH] = ACTIONS(489),
    [anon_sym_COLON] = ACTIONS(489),
    [anon_sym_BANG] = ACTIONS(489),
    [anon_sym_DOT] = ACTIONS(489),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(489),
    [anon_sym_DOLLAR] = ACTIONS(489),
    [anon_sym_PERCENT] = ACTIONS(489),
    [anon_sym_AMP] = ACTIONS(489),
    [anon_sym_1] = ACTIONS(489),
    [anon_sym_PLUS] = ACTIONS(489),
    [anon_sym_SLASH] = ACTIONS(489),
    [anon_sym_LT] = ACTIONS(489),
    [anon_sym_GT] = ACTIONS(489),
    [anon_sym_QMARK] = ACTIONS(489),
    [anon_sym_CARET] = ACTIONS(489),
  },
  [139] = {
    [sym__layout_semicolon] = ACTIONS(491),
    [anon_sym_SEMI] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(493),
    [anon_sym_DASH] = ACTIONS(493),
    [anon_sym_COLON] = ACTIONS(493),
    [anon_sym_BANG] = ACTIONS(493),
    [anon_sym_DOT] = ACTIONS(493),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(493),
    [anon_sym_DOLLAR] = ACTIONS(493),
    [anon_sym_PERCENT] = ACTIONS(493),
    [anon_sym_AMP] = ACTIONS(493),
    [anon_sym_1] = ACTIONS(493),
    [anon_sym_PLUS] = ACTIONS(493),
    [anon_sym_SLASH] = ACTIONS(493),
    [anon_sym_LT] = ACTIONS(493),
    [anon_sym_GT] = ACTIONS(493),
    [anon_sym_QMARK] = ACTIONS(493),
    [anon_sym_CARET] = ACTIONS(493),
  },
  [140] = {
    [sym__constructor_symbol] = STATE(256),
    [sym__layout_semicolon] = ACTIONS(495),
    [anon_sym_SEMI] = ACTIONS(497),
    [anon_sym_COMMA] = ACTIONS(497),
    [anon_sym_DASH] = ACTIONS(241),
    [anon_sym_COLON] = ACTIONS(241),
    [anon_sym_BANG] = ACTIONS(241),
    [anon_sym_DOT] = ACTIONS(241),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(241),
    [anon_sym_DOLLAR] = ACTIONS(241),
    [anon_sym_PERCENT] = ACTIONS(241),
    [anon_sym_AMP] = ACTIONS(241),
    [anon_sym_1] = ACTIONS(241),
    [anon_sym_PLUS] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(241),
    [anon_sym_LT] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(241),
    [anon_sym_QMARK] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(241),
  },
  [141] = {
    [sym__op] = STATE(257),
    [sym_variable_symbol] = STATE(52),
    [sym_constructor_symbol] = STATE(52),
    [sym__variable_symbol] = STATE(54),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_DOT] = ACTIONS(65),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(65),
    [anon_sym_DOLLAR] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(65),
    [anon_sym_1] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_CARET] = ACTIONS(65),
  },
  [142] = {
    [sym__layout_semicolon] = ACTIONS(499),
    [anon_sym_SEMI] = ACTIONS(501),
    [anon_sym_COMMA] = ACTIONS(503),
    [sym_comment] = ACTIONS(5),
  },
  [143] = {
    [aux_sym_fixity_repeat1] = STATE(259),
    [sym__layout_semicolon] = ACTIONS(499),
    [anon_sym_SEMI] = ACTIONS(501),
    [anon_sym_COMMA] = ACTIONS(247),
    [sym_comment] = ACTIONS(5),
  },
  [144] = {
    [sym__layout_semicolon] = ACTIONS(505),
    [anon_sym_SEMI] = ACTIONS(507),
    [anon_sym_COMMA] = ACTIONS(507),
    [anon_sym_DASH] = ACTIONS(507),
    [anon_sym_BANG] = ACTIONS(507),
    [anon_sym_DOT] = ACTIONS(507),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(507),
    [anon_sym_DOLLAR] = ACTIONS(507),
    [anon_sym_PERCENT] = ACTIONS(507),
    [anon_sym_AMP] = ACTIONS(507),
    [anon_sym_1] = ACTIONS(507),
    [anon_sym_PLUS] = ACTIONS(507),
    [anon_sym_SLASH] = ACTIONS(507),
    [anon_sym_LT] = ACTIONS(507),
    [anon_sym_GT] = ACTIONS(507),
    [anon_sym_QMARK] = ACTIONS(507),
    [anon_sym_CARET] = ACTIONS(507),
  },
  [145] = {
    [sym__variable_symbol] = STATE(260),
    [sym__layout_semicolon] = ACTIONS(509),
    [anon_sym_SEMI] = ACTIONS(511),
    [anon_sym_COMMA] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_DOT] = ACTIONS(65),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(65),
    [anon_sym_DOLLAR] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(65),
    [anon_sym_1] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_CARET] = ACTIONS(65),
  },
  [146] = {
    [sym_constructors] = STATE(262),
    [sym_constructor] = STATE(151),
    [sym_deriving] = STATE(263),
    [sym_constructor_identifier] = STATE(153),
    [sym__layout_semicolon] = ACTIONS(513),
    [anon_sym_SEMI] = ACTIONS(515),
    [anon_sym_EQ] = ACTIONS(517),
    [anon_sym_deriving] = ACTIONS(263),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [147] = {
    [sym_variable_identifier] = STATE(265),
    [aux_sym_type_class_repeat1] = STATE(156),
    [sym__layout_semicolon] = ACTIONS(265),
    [anon_sym_SEMI] = ACTIONS(267),
    [anon_sym_EQ] = ACTIONS(267),
    [anon_sym_deriving] = ACTIONS(267),
    [sym__variable_pattern] = ACTIONS(519),
    [sym__constructor_pattern] = ACTIONS(271),
    [sym_comment] = ACTIONS(5),
  },
  [148] = {
    [sym_constructors] = STATE(262),
    [sym_constructor] = STATE(151),
    [sym_deriving] = STATE(263),
    [sym_constructor_identifier] = STATE(153),
    [sym__layout_semicolon] = ACTIONS(513),
    [anon_sym_SEMI] = ACTIONS(515),
    [anon_sym_deriving] = ACTIONS(263),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [149] = {
    [sym__identifier] = STATE(267),
    [sym_variable_identifier] = STATE(29),
    [sym_constructor_identifier] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(521),
    [sym__variable_pattern] = ACTIONS(397),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [150] = {
    [sym_deriving] = STATE(263),
    [sym__layout_semicolon] = ACTIONS(513),
    [anon_sym_SEMI] = ACTIONS(515),
    [anon_sym_deriving] = ACTIONS(263),
    [sym_comment] = ACTIONS(5),
  },
  [151] = {
    [aux_sym_constructors_repeat1] = STATE(269),
    [sym__layout_semicolon] = ACTIONS(523),
    [anon_sym_SEMI] = ACTIONS(525),
    [anon_sym_PIPE] = ACTIONS(527),
    [anon_sym_deriving] = ACTIONS(525),
    [sym_comment] = ACTIONS(5),
  },
  [152] = {
    [sym__layout_semicolon] = ACTIONS(513),
    [anon_sym_SEMI] = ACTIONS(515),
    [sym_comment] = ACTIONS(5),
  },
  [153] = {
    [sym_strict] = STATE(272),
    [sym__identifier] = STATE(272),
    [sym_variable_identifier] = STATE(273),
    [sym_constructor_identifier] = STATE(273),
    [sym_fields] = STATE(274),
    [aux_sym_constructor_repeat1] = STATE(275),
    [sym__layout_semicolon] = ACTIONS(529),
    [anon_sym_SEMI] = ACTIONS(531),
    [anon_sym_LBRACE] = ACTIONS(533),
    [anon_sym_PIPE] = ACTIONS(531),
    [anon_sym_deriving] = ACTIONS(531),
    [anon_sym_BANG] = ACTIONS(535),
    [sym__variable_pattern] = ACTIONS(269),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [154] = {
    [sym__layout_semicolon] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_EQ_GT] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_deriving] = ACTIONS(79),
    [anon_sym_BANG] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(81),
    [sym__constructor_pattern] = ACTIONS(81),
    [sym_comment] = ACTIONS(5),
  },
  [155] = {
    [sym__layout_semicolon] = ACTIONS(537),
    [anon_sym_SEMI] = ACTIONS(477),
    [anon_sym_EQ] = ACTIONS(477),
    [anon_sym_EQ_GT] = ACTIONS(479),
    [anon_sym_deriving] = ACTIONS(477),
    [sym__variable_pattern] = ACTIONS(481),
    [sym__constructor_pattern] = ACTIONS(481),
    [sym_comment] = ACTIONS(5),
  },
  [156] = {
    [sym_variable_identifier] = STATE(276),
    [sym__layout_semicolon] = ACTIONS(539),
    [anon_sym_SEMI] = ACTIONS(541),
    [anon_sym_EQ] = ACTIONS(541),
    [anon_sym_deriving] = ACTIONS(541),
    [sym__variable_pattern] = ACTIONS(519),
    [sym__constructor_pattern] = ACTIONS(543),
    [sym_comment] = ACTIONS(5),
  },
  [157] = {
    [anon_sym_EQ] = ACTIONS(545),
    [sym_comment] = ACTIONS(5),
  },
  [158] = {
    [sym_new_constructor] = STATE(278),
    [sym_constructor_identifier] = STATE(279),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [159] = {
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [sym_unit_type] = ACTIONS(79),
    [sym_list_constructor] = ACTIONS(79),
    [sym_function_constructor] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(79),
    [anon_sym_EQ_GT] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(79),
    [sym__constructor_pattern] = ACTIONS(81),
    [sym_module_identifier] = ACTIONS(81),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym__integer_literal] = ACTIONS(79),
    [sym__octal_literal] = ACTIONS(79),
    [sym__hexidecimal_literal] = ACTIONS(79),
  },
  [160] = {
    [anon_sym_EQ] = ACTIONS(477),
    [anon_sym_EQ_GT] = ACTIONS(479),
    [sym__variable_pattern] = ACTIONS(477),
    [sym_comment] = ACTIONS(5),
  },
  [161] = {
    [sym_variable_identifier] = STATE(280),
    [anon_sym_EQ] = ACTIONS(541),
    [sym__variable_pattern] = ACTIONS(279),
    [sym_comment] = ACTIONS(5),
  },
  [162] = {
    [sym_type] = STATE(283),
    [sym__generic_type_constructor] = STATE(206),
    [sym_tupling_constructor] = STATE(201),
    [sym_tuple] = STATE(206),
    [sym_list] = STATE(206),
    [sym_parenthesized_constructor] = STATE(206),
    [sym_variable_identifier] = STATE(209),
    [sym__type_constructors] = STATE(201),
    [sym_qualified_type_constructor] = STATE(211),
    [anon_sym_LPAREN] = ACTIONS(547),
    [sym_unit_type] = ACTIONS(393),
    [sym_list_constructor] = ACTIONS(393),
    [sym_function_constructor] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(395),
    [sym__variable_pattern] = ACTIONS(397),
    [sym__constructor_pattern] = ACTIONS(549),
    [sym_module_identifier] = ACTIONS(401),
    [sym_comment] = ACTIONS(5),
  },
  [163] = {
    [anon_sym_EQ] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(79),
    [sym_comment] = ACTIONS(5),
  },
  [164] = {
    [anon_sym_LBRACE] = ACTIONS(477),
    [anon_sym_LPAREN] = ACTIONS(477),
    [anon_sym_COMMA] = ACTIONS(477),
    [anon_sym_RPAREN] = ACTIONS(477),
    [anon_sym_EQ] = ACTIONS(477),
    [anon_sym_DASH_GT] = ACTIONS(477),
    [sym_unit_type] = ACTIONS(477),
    [sym_list_constructor] = ACTIONS(477),
    [sym_function_constructor] = ACTIONS(477),
    [anon_sym_LBRACK] = ACTIONS(477),
    [anon_sym_RBRACK] = ACTIONS(477),
    [sym__variable_pattern] = ACTIONS(477),
    [sym__constructor_pattern] = ACTIONS(481),
    [sym_module_identifier] = ACTIONS(481),
    [sym_comment] = ACTIONS(5),
  },
  [165] = {
    [sym__layout_semicolon] = ACTIONS(551),
    [anon_sym_SEMI] = ACTIONS(553),
    [sym__variable_pattern] = ACTIONS(553),
    [sym__constructor_pattern] = ACTIONS(555),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(555),
    [anon_sym_SQUOTE] = ACTIONS(553),
    [anon_sym_DQUOTE] = ACTIONS(553),
    [sym__integer_literal] = ACTIONS(553),
    [sym__octal_literal] = ACTIONS(553),
    [sym__hexidecimal_literal] = ACTIONS(553),
  },
  [166] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(557),
  },
  [167] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(559),
  },
  [168] = {
    [sym__cntrl] = STATE(285),
    [anon_sym_AT] = ACTIONS(561),
    [anon_sym__] = ACTIONS(561),
    [anon_sym_LBRACK] = ACTIONS(561),
    [anon_sym_RBRACK] = ACTIONS(561),
    [sym_comment] = ACTIONS(101),
    [sym__ascii_large] = ACTIONS(561),
    [anon_sym_CARET] = ACTIONS(561),
    [anon_sym_BSLASH] = ACTIONS(561),
  },
  [169] = {
    [aux_sym__escape_repeat1] = STATE(287),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(563),
  },
  [170] = {
    [aux_sym__escape_repeat2] = STATE(289),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(565),
  },
  [171] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(567),
  },
  [172] = {
    [anon_sym_SEMI] = ACTIONS(569),
    [anon_sym_LBRACE] = ACTIONS(569),
    [anon_sym_RBRACE] = ACTIONS(569),
    [anon_sym_LPAREN] = ACTIONS(569),
    [anon_sym_RPAREN] = ACTIONS(569),
    [anon_sym_EQ] = ACTIONS(569),
    [anon_sym_DASH] = ACTIONS(569),
    [anon_sym_AT] = ACTIONS(569),
    [anon_sym__] = ACTIONS(569),
    [anon_sym_BQUOTE] = ACTIONS(569),
    [anon_sym_COLON] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(569),
    [anon_sym_RBRACK] = ACTIONS(569),
    [anon_sym_PIPE] = ACTIONS(569),
    [anon_sym_BANG] = ACTIONS(569),
    [anon_sym_DOT] = ACTIONS(569),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(569),
    [anon_sym_DQUOTE] = ACTIONS(569),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(569),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(569),
    [sym__ascii_large] = ACTIONS(569),
    [anon_sym_POUND] = ACTIONS(569),
    [anon_sym_DOLLAR] = ACTIONS(569),
    [anon_sym_PERCENT] = ACTIONS(569),
    [anon_sym_AMP] = ACTIONS(569),
    [anon_sym_1] = ACTIONS(569),
    [anon_sym_PLUS] = ACTIONS(569),
    [anon_sym_SLASH] = ACTIONS(569),
    [anon_sym_LT] = ACTIONS(569),
    [anon_sym_GT] = ACTIONS(569),
    [anon_sym_QMARK] = ACTIONS(569),
    [anon_sym_CARET] = ACTIONS(569),
    [anon_sym_TILDE] = ACTIONS(569),
    [anon_sym_BSLASH] = ACTIONS(569),
    [sym__space] = ACTIONS(569),
    [sym__newline] = ACTIONS(569),
    [sym__tab] = ACTIONS(569),
    [sym__vertical_tab] = ACTIONS(569),
  },
  [173] = {
    [anon_sym_SEMI] = ACTIONS(571),
    [anon_sym_LBRACE] = ACTIONS(571),
    [anon_sym_RBRACE] = ACTIONS(571),
    [anon_sym_LPAREN] = ACTIONS(571),
    [anon_sym_RPAREN] = ACTIONS(571),
    [anon_sym_EQ] = ACTIONS(571),
    [anon_sym_DASH] = ACTIONS(571),
    [anon_sym_AT] = ACTIONS(571),
    [anon_sym__] = ACTIONS(571),
    [anon_sym_BQUOTE] = ACTIONS(571),
    [anon_sym_COLON] = ACTIONS(571),
    [anon_sym_LBRACK] = ACTIONS(571),
    [anon_sym_RBRACK] = ACTIONS(571),
    [anon_sym_PIPE] = ACTIONS(571),
    [anon_sym_BANG] = ACTIONS(571),
    [anon_sym_DOT] = ACTIONS(571),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(571),
    [anon_sym_DQUOTE] = ACTIONS(571),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(571),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(571),
    [sym__ascii_large] = ACTIONS(571),
    [anon_sym_POUND] = ACTIONS(571),
    [anon_sym_DOLLAR] = ACTIONS(571),
    [anon_sym_PERCENT] = ACTIONS(571),
    [anon_sym_AMP] = ACTIONS(571),
    [anon_sym_1] = ACTIONS(571),
    [anon_sym_PLUS] = ACTIONS(571),
    [anon_sym_SLASH] = ACTIONS(571),
    [anon_sym_LT] = ACTIONS(571),
    [anon_sym_GT] = ACTIONS(571),
    [anon_sym_QMARK] = ACTIONS(571),
    [anon_sym_CARET] = ACTIONS(571),
    [anon_sym_TILDE] = ACTIONS(571),
    [anon_sym_BSLASH] = ACTIONS(571),
    [sym__space] = ACTIONS(571),
    [sym__newline] = ACTIONS(571),
    [sym__tab] = ACTIONS(571),
    [sym__vertical_tab] = ACTIONS(571),
  },
  [174] = {
    [sym__cntrl] = STATE(291),
    [anon_sym_AT] = ACTIONS(573),
    [anon_sym__] = ACTIONS(573),
    [anon_sym_LBRACK] = ACTIONS(573),
    [anon_sym_RBRACK] = ACTIONS(573),
    [sym_comment] = ACTIONS(101),
    [sym__ascii_large] = ACTIONS(573),
    [anon_sym_CARET] = ACTIONS(573),
    [anon_sym_BSLASH] = ACTIONS(573),
  },
  [175] = {
    [aux_sym__escape_repeat1] = STATE(293),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(575),
  },
  [176] = {
    [aux_sym__escape_repeat2] = STATE(295),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(577),
  },
  [177] = {
    [anon_sym_SEMI] = ACTIONS(579),
    [anon_sym_LBRACE] = ACTIONS(579),
    [anon_sym_RBRACE] = ACTIONS(579),
    [anon_sym_LPAREN] = ACTIONS(579),
    [anon_sym_RPAREN] = ACTIONS(579),
    [anon_sym_EQ] = ACTIONS(579),
    [anon_sym_DASH] = ACTIONS(579),
    [anon_sym_AT] = ACTIONS(579),
    [anon_sym__] = ACTIONS(579),
    [anon_sym_BQUOTE] = ACTIONS(579),
    [anon_sym_COLON] = ACTIONS(579),
    [anon_sym_LBRACK] = ACTIONS(579),
    [anon_sym_RBRACK] = ACTIONS(579),
    [anon_sym_PIPE] = ACTIONS(579),
    [anon_sym_BANG] = ACTIONS(579),
    [anon_sym_DOT] = ACTIONS(579),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(579),
    [anon_sym_DQUOTE] = ACTIONS(579),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(579),
    [sym__ascii_large] = ACTIONS(579),
    [anon_sym_POUND] = ACTIONS(579),
    [anon_sym_DOLLAR] = ACTIONS(579),
    [anon_sym_PERCENT] = ACTIONS(579),
    [anon_sym_AMP] = ACTIONS(579),
    [anon_sym_1] = ACTIONS(579),
    [anon_sym_PLUS] = ACTIONS(579),
    [anon_sym_SLASH] = ACTIONS(579),
    [anon_sym_LT] = ACTIONS(579),
    [anon_sym_GT] = ACTIONS(579),
    [anon_sym_QMARK] = ACTIONS(579),
    [anon_sym_CARET] = ACTIONS(579),
    [anon_sym_TILDE] = ACTIONS(579),
    [anon_sym_BSLASH] = ACTIONS(579),
    [sym__space] = ACTIONS(579),
    [sym__newline] = ACTIONS(579),
    [sym__tab] = ACTIONS(579),
    [sym__vertical_tab] = ACTIONS(579),
  },
  [178] = {
    [anon_sym_SEMI] = ACTIONS(581),
    [anon_sym_LBRACE] = ACTIONS(581),
    [anon_sym_RBRACE] = ACTIONS(581),
    [anon_sym_LPAREN] = ACTIONS(581),
    [anon_sym_RPAREN] = ACTIONS(581),
    [anon_sym_EQ] = ACTIONS(581),
    [anon_sym_DASH] = ACTIONS(581),
    [anon_sym_AT] = ACTIONS(581),
    [anon_sym__] = ACTIONS(581),
    [anon_sym_BQUOTE] = ACTIONS(581),
    [anon_sym_COLON] = ACTIONS(581),
    [anon_sym_LBRACK] = ACTIONS(581),
    [anon_sym_RBRACK] = ACTIONS(581),
    [anon_sym_PIPE] = ACTIONS(581),
    [anon_sym_BANG] = ACTIONS(581),
    [anon_sym_DOT] = ACTIONS(581),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(581),
    [anon_sym_DQUOTE] = ACTIONS(581),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(581),
    [sym__ascii_large] = ACTIONS(581),
    [anon_sym_POUND] = ACTIONS(581),
    [anon_sym_DOLLAR] = ACTIONS(581),
    [anon_sym_PERCENT] = ACTIONS(581),
    [anon_sym_AMP] = ACTIONS(581),
    [anon_sym_1] = ACTIONS(581),
    [anon_sym_PLUS] = ACTIONS(581),
    [anon_sym_SLASH] = ACTIONS(581),
    [anon_sym_LT] = ACTIONS(581),
    [anon_sym_GT] = ACTIONS(581),
    [anon_sym_QMARK] = ACTIONS(581),
    [anon_sym_CARET] = ACTIONS(581),
    [anon_sym_TILDE] = ACTIONS(581),
    [anon_sym_BSLASH] = ACTIONS(581),
    [sym__space] = ACTIONS(581),
    [sym__newline] = ACTIONS(581),
    [sym__tab] = ACTIONS(581),
    [sym__vertical_tab] = ACTIONS(581),
  },
  [179] = {
    [sym__layout_semicolon] = ACTIONS(583),
    [anon_sym_SEMI] = ACTIONS(585),
    [sym__variable_pattern] = ACTIONS(585),
    [sym__constructor_pattern] = ACTIONS(587),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(587),
    [anon_sym_SQUOTE] = ACTIONS(585),
    [anon_sym_DQUOTE] = ACTIONS(585),
    [sym__integer_literal] = ACTIONS(585),
    [sym__octal_literal] = ACTIONS(585),
    [sym__hexidecimal_literal] = ACTIONS(585),
  },
  [180] = {
    [sym__layout_semicolon] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(79),
    [sym__constructor_pattern] = ACTIONS(81),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym__integer_literal] = ACTIONS(79),
    [sym__octal_literal] = ACTIONS(79),
    [sym__hexidecimal_literal] = ACTIONS(79),
  },
  [181] = {
    [sym__layout_semicolon] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_DASH_GT] = ACTIONS(85),
    [sym__variable_pattern] = ACTIONS(85),
    [sym__constructor_pattern] = ACTIONS(221),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(221),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym__integer_literal] = ACTIONS(85),
    [sym__octal_literal] = ACTIONS(85),
    [sym__hexidecimal_literal] = ACTIONS(85),
  },
  [182] = {
    [sym__layout_semicolon] = ACTIONS(589),
    [anon_sym_SEMI] = ACTIONS(591),
    [sym__variable_pattern] = ACTIONS(591),
    [sym__constructor_pattern] = ACTIONS(593),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(593),
    [anon_sym_SQUOTE] = ACTIONS(591),
    [anon_sym_DQUOTE] = ACTIONS(591),
    [sym__integer_literal] = ACTIONS(591),
    [sym__octal_literal] = ACTIONS(591),
    [sym__hexidecimal_literal] = ACTIONS(591),
  },
  [183] = {
    [sym__literal] = STATE(296),
    [sym_variable_identifier] = STATE(296),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_general_constructor_repeat1] = STATE(297),
    [sym__layout_semicolon] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(181),
    [sym__variable_pattern] = ACTIONS(357),
    [sym__constructor_pattern] = ACTIONS(183),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [184] = {
    [sym_general_constructor] = STATE(298),
    [sym__literal] = STATE(298),
    [sym__identifier] = STATE(298),
    [sym_variable_identifier] = STATE(29),
    [sym_constructor_identifier] = STATE(183),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [sym__layout_semicolon] = ACTIONS(595),
    [anon_sym_SEMI] = ACTIONS(597),
    [sym__variable_pattern] = ACTIONS(357),
    [sym__constructor_pattern] = ACTIONS(359),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [185] = {
    [anon_sym_LPAREN] = ACTIONS(599),
    [sym_comment] = ACTIONS(5),
  },
  [186] = {
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_BQUOTE] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(85),
    [sym__variable_pattern] = ACTIONS(85),
    [anon_sym_DOT] = ACTIONS(85),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(221),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_POUND] = ACTIONS(85),
    [anon_sym_DOLLAR] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(85),
    [anon_sym_AMP] = ACTIONS(85),
    [anon_sym_1] = ACTIONS(85),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_QMARK] = ACTIONS(85),
    [anon_sym_CARET] = ACTIONS(85),
    [sym__integer_literal] = ACTIONS(85),
    [sym__octal_literal] = ACTIONS(85),
    [sym__hexidecimal_literal] = ACTIONS(85),
  },
  [187] = {
    [sym__op] = STATE(305),
    [sym_variable_symbol] = STATE(306),
    [sym_constructor_symbol] = STATE(306),
    [sym__variable_symbol] = STATE(307),
    [aux_sym_tuple_pattern_repeat1] = STATE(308),
    [anon_sym_COMMA] = ACTIONS(601),
    [anon_sym_RPAREN] = ACTIONS(603),
    [anon_sym_DASH] = ACTIONS(605),
    [anon_sym_BQUOTE] = ACTIONS(607),
    [anon_sym_COLON] = ACTIONS(609),
    [anon_sym_BANG] = ACTIONS(605),
    [anon_sym_DOT] = ACTIONS(605),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(605),
    [anon_sym_DOLLAR] = ACTIONS(605),
    [anon_sym_PERCENT] = ACTIONS(605),
    [anon_sym_AMP] = ACTIONS(605),
    [anon_sym_1] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(605),
    [anon_sym_SLASH] = ACTIONS(605),
    [anon_sym_LT] = ACTIONS(605),
    [anon_sym_GT] = ACTIONS(605),
    [anon_sym_QMARK] = ACTIONS(605),
    [anon_sym_CARET] = ACTIONS(605),
  },
  [188] = {
    [aux_sym_tuple_pattern_repeat1] = STATE(308),
    [anon_sym_COMMA] = ACTIONS(601),
    [anon_sym_RPAREN] = ACTIONS(603),
    [sym_comment] = ACTIONS(5),
  },
  [189] = {
    [anon_sym_COMMA] = ACTIONS(611),
    [anon_sym_RPAREN] = ACTIONS(611),
    [sym_comment] = ACTIONS(5),
  },
  [190] = {
    [anon_sym_AT] = ACTIONS(613),
    [sym_comment] = ACTIONS(5),
  },
  [191] = {
    [sym__literal] = STATE(313),
    [sym_variable_identifier] = STATE(314),
    [sym_integer] = STATE(310),
    [sym_char] = STATE(310),
    [sym_string] = STATE(310),
    [aux_sym_general_constructor_repeat1] = STATE(315),
    [aux_sym_type_class_repeat1] = STATE(198),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_BANG] = ACTIONS(181),
    [sym__variable_pattern] = ACTIONS(275),
    [anon_sym_DOT] = ACTIONS(181),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(615),
    [anon_sym_SQUOTE] = ACTIONS(617),
    [anon_sym_DQUOTE] = ACTIONS(433),
    [anon_sym_POUND] = ACTIONS(181),
    [anon_sym_DOLLAR] = ACTIONS(181),
    [anon_sym_PERCENT] = ACTIONS(181),
    [anon_sym_AMP] = ACTIONS(181),
    [anon_sym_1] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_LT] = ACTIONS(181),
    [anon_sym_GT] = ACTIONS(181),
    [anon_sym_QMARK] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(181),
    [sym__integer_literal] = ACTIONS(619),
    [sym__octal_literal] = ACTIONS(619),
    [sym__hexidecimal_literal] = ACTIONS(619),
  },
  [192] = {
    [anon_sym_AT] = ACTIONS(283),
    [sym_comment] = ACTIONS(5),
  },
  [193] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(621),
  },
  [194] = {
    [anon_sym_RBRACE] = ACTIONS(321),
    [anon_sym_LPAREN] = ACTIONS(321),
    [anon_sym_COMMA] = ACTIONS(321),
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_EQ] = ACTIONS(321),
    [anon_sym_DASH] = ACTIONS(321),
    [anon_sym__] = ACTIONS(321),
    [anon_sym_BQUOTE] = ACTIONS(321),
    [anon_sym_COLON] = ACTIONS(321),
    [sym_list_constructor] = ACTIONS(321),
    [anon_sym_BANG] = ACTIONS(321),
    [sym__variable_pattern] = ACTIONS(323),
    [sym__constructor_pattern] = ACTIONS(323),
    [anon_sym_DOT] = ACTIONS(321),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(323),
    [anon_sym_SQUOTE] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(321),
    [anon_sym_POUND] = ACTIONS(321),
    [anon_sym_DOLLAR] = ACTIONS(321),
    [anon_sym_PERCENT] = ACTIONS(321),
    [anon_sym_AMP] = ACTIONS(321),
    [anon_sym_1] = ACTIONS(321),
    [anon_sym_PLUS] = ACTIONS(321),
    [anon_sym_SLASH] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(321),
    [anon_sym_GT] = ACTIONS(321),
    [anon_sym_QMARK] = ACTIONS(321),
    [anon_sym_CARET] = ACTIONS(321),
    [sym__integer_literal] = ACTIONS(321),
    [sym__octal_literal] = ACTIONS(321),
    [sym__hexidecimal_literal] = ACTIONS(321),
  },
  [195] = {
    [sym__gap] = STATE(178),
    [sym__graphic] = STATE(178),
    [sym__small] = STATE(78),
    [sym__large] = STATE(78),
    [sym__symbol] = STATE(78),
    [sym__special] = STATE(78),
    [sym__escape] = STATE(178),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_AT] = ACTIONS(113),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_COLON] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_BANG] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(113),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(343),
    [anon_sym_DQUOTE] = ACTIONS(623),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(115),
    [sym__ascii_large] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(113),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_PERCENT] = ACTIONS(113),
    [anon_sym_AMP] = ACTIONS(113),
    [anon_sym_1] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_CARET] = ACTIONS(113),
    [anon_sym_TILDE] = ACTIONS(113),
    [anon_sym_BSLASH] = ACTIONS(125),
    [sym__space] = ACTIONS(127),
    [sym__newline] = ACTIONS(127),
    [sym__tab] = ACTIONS(127),
    [sym__vertical_tab] = ACTIONS(127),
  },
  [196] = {
    [sym__function_pattern] = STATE(318),
    [sym_tuple_pattern] = STATE(88),
    [sym_parenthesized_pattern] = STATE(88),
    [sym_as_pattern] = STATE(88),
    [sym_wildcard] = STATE(88),
    [sym__variable] = STATE(95),
    [sym_qualified_variable_identifier] = STATE(96),
    [sym__literal] = STATE(88),
    [sym__identifier] = STATE(97),
    [sym_simple_type] = STATE(98),
    [sym_variable_identifier] = STATE(99),
    [sym_constructor_identifier] = STATE(100),
    [sym_integer] = STATE(91),
    [sym_char] = STATE(91),
    [sym_string] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym__] = ACTIONS(153),
    [sym_list_constructor] = ACTIONS(155),
    [sym__variable_pattern] = ACTIONS(157),
    [sym__constructor_pattern] = ACTIONS(159),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(161),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [197] = {
    [sym_labels] = STATE(320),
    [sym_label] = STATE(321),
    [sym__identifier] = STATE(322),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [anon_sym_RBRACE] = ACTIONS(625),
    [sym__variable_pattern] = ACTIONS(209),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [198] = {
    [sym_variable_identifier] = STATE(280),
    [anon_sym_LBRACE] = ACTIONS(541),
    [sym__variable_pattern] = ACTIONS(275),
    [sym_comment] = ACTIONS(5),
  },
  [199] = {
    [anon_sym_LPAREN] = ACTIONS(627),
    [anon_sym_EQ] = ACTIONS(627),
    [anon_sym__] = ACTIONS(627),
    [sym_list_constructor] = ACTIONS(627),
    [sym__variable_pattern] = ACTIONS(629),
    [sym__constructor_pattern] = ACTIONS(629),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(629),
    [anon_sym_SQUOTE] = ACTIONS(627),
    [anon_sym_DQUOTE] = ACTIONS(627),
    [sym__integer_literal] = ACTIONS(627),
    [sym__octal_literal] = ACTIONS(627),
    [sym__hexidecimal_literal] = ACTIONS(627),
  },
  [200] = {
    [sym_type] = STATE(329),
    [sym__generic_type_constructor] = STATE(330),
    [sym_tupling_constructor] = STATE(325),
    [sym_tuple] = STATE(330),
    [sym_list] = STATE(330),
    [sym_parenthesized_constructor] = STATE(330),
    [sym_class] = STATE(331),
    [sym_variable_identifier] = STATE(332),
    [sym_constructor_identifier] = STATE(126),
    [sym__type_constructors] = STATE(325),
    [sym_qualified_type_constructor] = STATE(333),
    [anon_sym_LPAREN] = ACTIONS(631),
    [anon_sym_COMMA] = ACTIONS(633),
    [sym_unit_type] = ACTIONS(635),
    [sym_list_constructor] = ACTIONS(635),
    [sym_function_constructor] = ACTIONS(635),
    [anon_sym_LBRACK] = ACTIONS(637),
    [sym__variable_pattern] = ACTIONS(639),
    [sym__constructor_pattern] = ACTIONS(641),
    [sym_module_identifier] = ACTIONS(643),
    [sym_comment] = ACTIONS(5),
  },
  [201] = {
    [sym__layout_semicolon] = ACTIONS(645),
    [anon_sym_SEMI] = ACTIONS(647),
    [anon_sym_DASH_GT] = ACTIONS(647),
    [sym_comment] = ACTIONS(5),
  },
  [202] = {
    [sym_type] = STATE(336),
    [sym__generic_type_constructor] = STATE(337),
    [sym_tupling_constructor] = STATE(325),
    [sym_tuple] = STATE(337),
    [sym_list] = STATE(337),
    [sym_parenthesized_constructor] = STATE(337),
    [sym_variable_identifier] = STATE(338),
    [sym__type_constructors] = STATE(325),
    [sym_qualified_type_constructor] = STATE(333),
    [aux_sym_list_repeat1] = STATE(339),
    [anon_sym_LPAREN] = ACTIONS(631),
    [sym_unit_type] = ACTIONS(635),
    [sym_list_constructor] = ACTIONS(635),
    [sym_function_constructor] = ACTIONS(635),
    [anon_sym_LBRACK] = ACTIONS(637),
    [sym__variable_pattern] = ACTIONS(275),
    [sym__constructor_pattern] = ACTIONS(649),
    [sym_module_identifier] = ACTIONS(651),
    [sym_comment] = ACTIONS(5),
  },
  [203] = {
    [sym_variable_identifier] = STATE(340),
    [aux_sym_type_class_repeat1] = STATE(341),
    [sym__layout_semicolon] = ACTIONS(653),
    [anon_sym_SEMI] = ACTIONS(655),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_DASH_GT] = ACTIONS(655),
    [sym__variable_pattern] = ACTIONS(85),
    [sym_comment] = ACTIONS(5),
  },
  [204] = {
    [sym_constructor_identifier] = STATE(343),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(344),
    [sym__constructor_pattern] = ACTIONS(359),
    [anon_sym_DOT] = ACTIONS(657),
    [sym_comment] = ACTIONS(5),
  },
  [205] = {
    [sym__layout_semicolon] = ACTIONS(659),
    [anon_sym_SEMI] = ACTIONS(661),
    [sym_comment] = ACTIONS(5),
  },
  [206] = {
    [sym__layout_semicolon] = ACTIONS(663),
    [anon_sym_SEMI] = ACTIONS(665),
    [anon_sym_DASH_GT] = ACTIONS(667),
    [sym_comment] = ACTIONS(5),
  },
  [207] = {
    [sym_type] = STATE(346),
    [sym__generic_type_constructor] = STATE(206),
    [sym_tupling_constructor] = STATE(201),
    [sym_tuple] = STATE(206),
    [sym_list] = STATE(206),
    [sym_parenthesized_constructor] = STATE(206),
    [sym_variable_identifier] = STATE(209),
    [sym__type_constructors] = STATE(201),
    [sym_qualified_type_constructor] = STATE(211),
    [anon_sym_LPAREN] = ACTIONS(547),
    [sym_unit_type] = ACTIONS(393),
    [sym_list_constructor] = ACTIONS(393),
    [sym_function_constructor] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(395),
    [sym__variable_pattern] = ACTIONS(397),
    [sym__constructor_pattern] = ACTIONS(549),
    [sym_module_identifier] = ACTIONS(401),
    [sym_comment] = ACTIONS(5),
  },
  [208] = {
    [anon_sym_EQ_GT] = ACTIONS(669),
    [sym_comment] = ACTIONS(5),
  },
  [209] = {
    [sym__layout_semicolon] = ACTIONS(671),
    [anon_sym_SEMI] = ACTIONS(673),
    [anon_sym_DASH_GT] = ACTIONS(675),
    [sym_comment] = ACTIONS(5),
  },
  [210] = {
    [sym_variable_identifier] = STATE(243),
    [anon_sym_LPAREN] = ACTIONS(227),
    [sym__variable_pattern] = ACTIONS(639),
    [sym_comment] = ACTIONS(5),
  },
  [211] = {
    [sym__layout_semicolon] = ACTIONS(677),
    [anon_sym_SEMI] = ACTIONS(679),
    [anon_sym_DASH_GT] = ACTIONS(679),
    [sym_comment] = ACTIONS(5),
  },
  [212] = {
    [ts_builtin_sym_end] = ACTIONS(681),
    [anon_sym_RBRACE] = ACTIONS(683),
    [anon_sym_import] = ACTIONS(683),
    [anon_sym_foreign] = ACTIONS(683),
    [anon_sym_default] = ACTIONS(683),
    [anon_sym_do] = ACTIONS(683),
    [anon_sym_class] = ACTIONS(683),
    [anon_sym_instance] = ACTIONS(683),
    [anon_sym_infixl] = ACTIONS(683),
    [anon_sym_infixr] = ACTIONS(683),
    [anon_sym_infix] = ACTIONS(683),
    [anon_sym_data] = ACTIONS(683),
    [anon_sym_newtype] = ACTIONS(683),
    [anon_sym_type] = ACTIONS(683),
    [sym__variable_pattern] = ACTIONS(685),
    [sym__constructor_pattern] = ACTIONS(685),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(685),
    [anon_sym_SQUOTE] = ACTIONS(683),
    [anon_sym_DQUOTE] = ACTIONS(683),
    [sym__integer_literal] = ACTIONS(683),
    [sym__octal_literal] = ACTIONS(683),
    [sym__hexidecimal_literal] = ACTIONS(683),
  },
  [213] = {
    [sym_import] = STATE(20),
    [sym__declaration] = STATE(350),
    [sym_function_declaration] = STATE(20),
    [sym_function_head] = STATE(22),
    [sym__variable] = STATE(23),
    [sym_qualified_variable_identifier] = STATE(24),
    [sym__expression] = STATE(20),
    [sym_foreign] = STATE(20),
    [sym_default] = STATE(20),
    [sym_do_expression] = STATE(25),
    [sym_type_class] = STATE(20),
    [sym_type_class_instance] = STATE(20),
    [sym__general_declaration] = STATE(20),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym_algebraic_datatype] = STATE(20),
    [sym_newtype] = STATE(20),
    [sym_type_synonym] = STATE(20),
    [sym__literal] = STATE(25),
    [sym__identifier] = STATE(27),
    [sym_variable_identifier] = STATE(28),
    [sym_constructor_identifier] = STATE(29),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_module_repeat1] = STATE(351),
    [sym__layout_close_brace] = ACTIONS(687),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_foreign] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_class] = ACTIONS(21),
    [anon_sym_instance] = ACTIONS(23),
    [anon_sym_infixl] = ACTIONS(25),
    [anon_sym_infixr] = ACTIONS(25),
    [anon_sym_infix] = ACTIONS(25),
    [anon_sym_data] = ACTIONS(27),
    [anon_sym_newtype] = ACTIONS(29),
    [anon_sym_type] = ACTIONS(31),
    [sym__variable_pattern] = ACTIONS(33),
    [sym__constructor_pattern] = ACTIONS(35),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [214] = {
    [sym_import] = STATE(20),
    [sym__declaration] = STATE(21),
    [sym_function_declaration] = STATE(20),
    [sym_function_head] = STATE(22),
    [sym__variable] = STATE(23),
    [sym_qualified_variable_identifier] = STATE(24),
    [sym__expression] = STATE(20),
    [sym_foreign] = STATE(20),
    [sym_default] = STATE(20),
    [sym_do_expression] = STATE(25),
    [sym_type_class] = STATE(20),
    [sym_type_class_instance] = STATE(20),
    [sym__general_declaration] = STATE(20),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym_algebraic_datatype] = STATE(20),
    [sym_newtype] = STATE(20),
    [sym_type_synonym] = STATE(20),
    [sym__literal] = STATE(25),
    [sym__identifier] = STATE(27),
    [sym_variable_identifier] = STATE(28),
    [sym_constructor_identifier] = STATE(29),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_module_repeat1] = STATE(352),
    [anon_sym_RBRACE] = ACTIONS(689),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_foreign] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_class] = ACTIONS(21),
    [anon_sym_instance] = ACTIONS(23),
    [anon_sym_infixl] = ACTIONS(25),
    [anon_sym_infixr] = ACTIONS(25),
    [anon_sym_infix] = ACTIONS(25),
    [anon_sym_data] = ACTIONS(27),
    [anon_sym_newtype] = ACTIONS(29),
    [anon_sym_type] = ACTIONS(31),
    [sym__variable_pattern] = ACTIONS(33),
    [sym__constructor_pattern] = ACTIONS(35),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [215] = {
    [ts_builtin_sym_end] = ACTIONS(691),
    [sym_comment] = ACTIONS(5),
  },
  [216] = {
    [anon_sym_where] = ACTIONS(693),
    [sym_comment] = ACTIONS(5),
  },
  [217] = {
    [aux_sym_module_exports_repeat1] = STATE(355),
    [anon_sym_COMMA] = ACTIONS(695),
    [anon_sym_RPAREN] = ACTIONS(697),
    [sym_comment] = ACTIONS(5),
  },
  [218] = {
    [anon_sym_LPAREN] = ACTIONS(699),
    [anon_sym_COMMA] = ACTIONS(701),
    [anon_sym_RPAREN] = ACTIONS(701),
    [sym_comment] = ACTIONS(5),
  },
  [219] = {
    [sym_declarations] = STATE(357),
    [sym__layout_open_brace] = ACTIONS(407),
    [anon_sym_LBRACE] = ACTIONS(409),
    [sym_comment] = ACTIONS(5),
  },
  [220] = {
    [sym_module_identifier] = ACTIONS(703),
    [sym_comment] = ACTIONS(5),
  },
  [221] = {
    [sym__layout_semicolon] = ACTIONS(705),
    [anon_sym_SEMI] = ACTIONS(707),
    [sym_comment] = ACTIONS(5),
  },
  [222] = {
    [sym__layout_semicolon] = ACTIONS(709),
    [anon_sym_SEMI] = ACTIONS(711),
    [sym_comment] = ACTIONS(5),
  },
  [223] = {
    [aux_sym_import_specification_repeat1] = STATE(362),
    [anon_sym_LPAREN] = ACTIONS(713),
    [anon_sym_COMMA] = ACTIONS(715),
    [anon_sym_RPAREN] = ACTIONS(717),
    [sym_comment] = ACTIONS(5),
  },
  [224] = {
    [sym_import_specification] = STATE(363),
    [sym__layout_semicolon] = ACTIONS(705),
    [anon_sym_SEMI] = ACTIONS(707),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_hiding] = ACTIONS(201),
    [sym_comment] = ACTIONS(5),
  },
  [225] = {
    [sym__identifier] = STATE(364),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [anon_sym_RPAREN] = ACTIONS(717),
    [sym__variable_pattern] = ACTIONS(209),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [226] = {
    [sym__variable_pattern] = ACTIONS(719),
    [sym__constructor_pattern] = ACTIONS(721),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(719),
  },
  [227] = {
    [sym__gap] = STATE(76),
    [sym__graphic] = STATE(76),
    [sym__small] = STATE(78),
    [sym__large] = STATE(78),
    [sym__symbol] = STATE(78),
    [sym__special] = STATE(78),
    [sym__escape] = STATE(76),
    [aux_sym_string_repeat1] = STATE(366),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_AT] = ACTIONS(113),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_COLON] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_BANG] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(113),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(723),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(115),
    [sym__ascii_large] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(113),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_PERCENT] = ACTIONS(113),
    [anon_sym_AMP] = ACTIONS(113),
    [anon_sym_1] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_CARET] = ACTIONS(113),
    [anon_sym_TILDE] = ACTIONS(113),
    [anon_sym_BSLASH] = ACTIONS(125),
    [sym__space] = ACTIONS(127),
    [sym__newline] = ACTIONS(127),
    [sym__tab] = ACTIONS(127),
    [sym__vertical_tab] = ACTIONS(127),
  },
  [228] = {
    [sym_type_signature] = STATE(367),
    [sym__identifier] = STATE(230),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym_string] = STATE(368),
    [sym__variable_pattern] = ACTIONS(639),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(433),
  },
  [229] = {
    [sym__layout_semicolon] = ACTIONS(725),
    [anon_sym_SEMI] = ACTIONS(727),
    [sym_comment] = ACTIONS(5),
  },
  [230] = {
    [anon_sym_COLON_COLON] = ACTIONS(177),
    [sym_comment] = ACTIONS(5),
  },
  [231] = {
    [sym_type_signature] = STATE(367),
    [sym__identifier] = STATE(230),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym__variable_pattern] = ACTIONS(639),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [232] = {
    [sym__identifier] = STATE(369),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym__variable_pattern] = ACTIONS(209),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [233] = {
    [sym__layout_semicolon] = ACTIONS(729),
    [anon_sym_SEMI] = ACTIONS(731),
    [sym_comment] = ACTIONS(5),
  },
  [234] = {
    [anon_sym_COMMA] = ACTIONS(733),
    [anon_sym_RPAREN] = ACTIONS(735),
    [sym_comment] = ACTIONS(5),
  },
  [235] = {
    [sym__layout_close_brace] = ACTIONS(737),
    [anon_sym_do] = ACTIONS(739),
    [sym__variable_pattern] = ACTIONS(741),
    [sym__constructor_pattern] = ACTIONS(741),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(741),
    [anon_sym_SQUOTE] = ACTIONS(739),
    [anon_sym_DQUOTE] = ACTIONS(739),
    [sym__integer_literal] = ACTIONS(739),
    [sym__octal_literal] = ACTIONS(739),
    [sym__hexidecimal_literal] = ACTIONS(739),
  },
  [236] = {
    [sym__layout_semicolon] = ACTIONS(743),
    [anon_sym_SEMI] = ACTIONS(745),
    [sym_comment] = ACTIONS(5),
  },
  [237] = {
    [sym__layout_close_brace] = ACTIONS(747),
    [anon_sym_do] = ACTIONS(749),
    [sym__variable_pattern] = ACTIONS(751),
    [sym__constructor_pattern] = ACTIONS(751),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(751),
    [anon_sym_SQUOTE] = ACTIONS(749),
    [anon_sym_DQUOTE] = ACTIONS(749),
    [sym__integer_literal] = ACTIONS(749),
    [sym__octal_literal] = ACTIONS(749),
    [sym__hexidecimal_literal] = ACTIONS(749),
  },
  [238] = {
    [anon_sym_RBRACE] = ACTIONS(739),
    [anon_sym_do] = ACTIONS(739),
    [sym__variable_pattern] = ACTIONS(741),
    [sym__constructor_pattern] = ACTIONS(741),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(741),
    [anon_sym_SQUOTE] = ACTIONS(739),
    [anon_sym_DQUOTE] = ACTIONS(739),
    [sym__integer_literal] = ACTIONS(739),
    [sym__octal_literal] = ACTIONS(739),
    [sym__hexidecimal_literal] = ACTIONS(739),
  },
  [239] = {
    [anon_sym_RBRACE] = ACTIONS(749),
    [anon_sym_do] = ACTIONS(749),
    [sym__variable_pattern] = ACTIONS(751),
    [sym__constructor_pattern] = ACTIONS(751),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(751),
    [anon_sym_SQUOTE] = ACTIONS(749),
    [anon_sym_DQUOTE] = ACTIONS(749),
    [sym__integer_literal] = ACTIONS(749),
    [sym__octal_literal] = ACTIONS(749),
    [sym__hexidecimal_literal] = ACTIONS(749),
  },
  [240] = {
    [sym_class] = STATE(372),
    [sym_constructor_identifier] = STATE(126),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [241] = {
    [anon_sym_EQ_GT] = ACTIONS(753),
    [sym_comment] = ACTIONS(5),
  },
  [242] = {
    [anon_sym_COMMA] = ACTIONS(755),
    [anon_sym_RPAREN] = ACTIONS(757),
    [sym_comment] = ACTIONS(5),
  },
  [243] = {
    [anon_sym_COMMA] = ACTIONS(479),
    [anon_sym_RPAREN] = ACTIONS(479),
    [anon_sym_EQ_GT] = ACTIONS(479),
    [sym_comment] = ACTIONS(5),
  },
  [244] = {
    [sym_general_declarations] = STATE(376),
    [sym__layout_open_brace] = ACTIONS(473),
    [anon_sym_LBRACE] = ACTIONS(475),
    [sym_comment] = ACTIONS(5),
  },
  [245] = {
    [anon_sym_where] = ACTIONS(477),
    [sym__variable_pattern] = ACTIONS(481),
    [sym_comment] = ACTIONS(5),
  },
  [246] = {
    [sym_variable_identifier] = STATE(251),
    [anon_sym_where] = ACTIONS(759),
    [sym__variable_pattern] = ACTIONS(229),
    [sym_comment] = ACTIONS(5),
  },
  [247] = {
    [sym__general_declaration] = STATE(379),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym__identifier] = STATE(230),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [aux_sym_general_declarations_repeat1] = STATE(380),
    [sym__layout_close_brace] = ACTIONS(761),
    [anon_sym_infixl] = ACTIONS(25),
    [anon_sym_infixr] = ACTIONS(25),
    [anon_sym_infix] = ACTIONS(25),
    [sym__variable_pattern] = ACTIONS(229),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [248] = {
    [sym__general_declaration] = STATE(381),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym__identifier] = STATE(230),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [aux_sym_general_declarations_repeat1] = STATE(382),
    [anon_sym_RBRACE] = ACTIONS(763),
    [anon_sym_infixl] = ACTIONS(25),
    [anon_sym_infixr] = ACTIONS(25),
    [anon_sym_infix] = ACTIONS(25),
    [sym__variable_pattern] = ACTIONS(229),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [249] = {
    [sym__layout_semicolon] = ACTIONS(765),
    [anon_sym_SEMI] = ACTIONS(767),
    [sym_comment] = ACTIONS(5),
  },
  [250] = {
    [sym_variable_identifier] = STATE(280),
    [anon_sym_RPAREN] = ACTIONS(769),
    [sym__variable_pattern] = ACTIONS(275),
    [sym_comment] = ACTIONS(5),
  },
  [251] = {
    [anon_sym_where] = ACTIONS(771),
    [sym__variable_pattern] = ACTIONS(773),
    [sym_comment] = ACTIONS(5),
  },
  [252] = {
    [sym_general_declarations] = STATE(384),
    [sym__layout_open_brace] = ACTIONS(473),
    [anon_sym_LBRACE] = ACTIONS(475),
    [sym_comment] = ACTIONS(5),
  },
  [253] = {
    [sym_variable_identifier] = STATE(251),
    [anon_sym_where] = ACTIONS(775),
    [sym__variable_pattern] = ACTIONS(229),
    [sym_comment] = ACTIONS(5),
  },
  [254] = {
    [sym__layout_semicolon] = ACTIONS(777),
    [anon_sym_SEMI] = ACTIONS(779),
    [sym_comment] = ACTIONS(5),
  },
  [255] = {
    [sym__layout_semicolon] = ACTIONS(781),
    [anon_sym_SEMI] = ACTIONS(783),
    [anon_sym_COMMA] = ACTIONS(783),
    [sym_comment] = ACTIONS(5),
  },
  [256] = {
    [sym__layout_semicolon] = ACTIONS(785),
    [anon_sym_SEMI] = ACTIONS(787),
    [anon_sym_COMMA] = ACTIONS(787),
    [anon_sym_DASH] = ACTIONS(787),
    [anon_sym_COLON] = ACTIONS(787),
    [anon_sym_BANG] = ACTIONS(787),
    [anon_sym_DOT] = ACTIONS(787),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(787),
    [anon_sym_DOLLAR] = ACTIONS(787),
    [anon_sym_PERCENT] = ACTIONS(787),
    [anon_sym_AMP] = ACTIONS(787),
    [anon_sym_1] = ACTIONS(787),
    [anon_sym_PLUS] = ACTIONS(787),
    [anon_sym_SLASH] = ACTIONS(787),
    [anon_sym_LT] = ACTIONS(787),
    [anon_sym_GT] = ACTIONS(787),
    [anon_sym_QMARK] = ACTIONS(787),
    [anon_sym_CARET] = ACTIONS(787),
  },
  [257] = {
    [sym__layout_semicolon] = ACTIONS(789),
    [anon_sym_SEMI] = ACTIONS(791),
    [anon_sym_COMMA] = ACTIONS(791),
    [sym_comment] = ACTIONS(5),
  },
  [258] = {
    [sym__op] = STATE(386),
    [sym_variable_symbol] = STATE(52),
    [sym_constructor_symbol] = STATE(52),
    [sym__variable_symbol] = STATE(54),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_DOT] = ACTIONS(65),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(65),
    [anon_sym_DOLLAR] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(65),
    [anon_sym_1] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_CARET] = ACTIONS(65),
  },
  [259] = {
    [sym__layout_semicolon] = ACTIONS(793),
    [anon_sym_SEMI] = ACTIONS(795),
    [anon_sym_COMMA] = ACTIONS(503),
    [sym_comment] = ACTIONS(5),
  },
  [260] = {
    [sym__layout_semicolon] = ACTIONS(797),
    [anon_sym_SEMI] = ACTIONS(799),
    [anon_sym_COMMA] = ACTIONS(799),
    [anon_sym_DASH] = ACTIONS(799),
    [anon_sym_BANG] = ACTIONS(799),
    [anon_sym_DOT] = ACTIONS(799),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(799),
    [anon_sym_DOLLAR] = ACTIONS(799),
    [anon_sym_PERCENT] = ACTIONS(799),
    [anon_sym_AMP] = ACTIONS(799),
    [anon_sym_1] = ACTIONS(799),
    [anon_sym_PLUS] = ACTIONS(799),
    [anon_sym_SLASH] = ACTIONS(799),
    [anon_sym_LT] = ACTIONS(799),
    [anon_sym_GT] = ACTIONS(799),
    [anon_sym_QMARK] = ACTIONS(799),
    [anon_sym_CARET] = ACTIONS(799),
  },
  [261] = {
    [sym_constructors] = STATE(387),
    [sym_constructor] = STATE(151),
    [sym_deriving] = STATE(388),
    [sym_constructor_identifier] = STATE(153),
    [sym__layout_semicolon] = ACTIONS(801),
    [anon_sym_SEMI] = ACTIONS(803),
    [anon_sym_deriving] = ACTIONS(263),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [262] = {
    [sym_deriving] = STATE(388),
    [sym__layout_semicolon] = ACTIONS(801),
    [anon_sym_SEMI] = ACTIONS(803),
    [anon_sym_deriving] = ACTIONS(263),
    [sym_comment] = ACTIONS(5),
  },
  [263] = {
    [sym__layout_semicolon] = ACTIONS(801),
    [anon_sym_SEMI] = ACTIONS(803),
    [sym_comment] = ACTIONS(5),
  },
  [264] = {
    [sym__layout_semicolon] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_deriving] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(81),
    [sym__constructor_pattern] = ACTIONS(81),
    [sym_comment] = ACTIONS(5),
  },
  [265] = {
    [sym__layout_semicolon] = ACTIONS(537),
    [anon_sym_SEMI] = ACTIONS(477),
    [anon_sym_EQ] = ACTIONS(477),
    [anon_sym_deriving] = ACTIONS(477),
    [sym__variable_pattern] = ACTIONS(481),
    [sym__constructor_pattern] = ACTIONS(481),
    [sym_comment] = ACTIONS(5),
  },
  [266] = {
    [sym__identifier] = STATE(389),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym__variable_pattern] = ACTIONS(209),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [267] = {
    [sym__layout_semicolon] = ACTIONS(805),
    [anon_sym_SEMI] = ACTIONS(807),
    [sym_comment] = ACTIONS(5),
  },
  [268] = {
    [sym_constructor] = STATE(390),
    [sym_constructor_identifier] = STATE(153),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [269] = {
    [sym__layout_semicolon] = ACTIONS(809),
    [anon_sym_SEMI] = ACTIONS(811),
    [anon_sym_PIPE] = ACTIONS(813),
    [anon_sym_deriving] = ACTIONS(811),
    [sym_comment] = ACTIONS(5),
  },
  [270] = {
    [sym_field] = STATE(392),
    [sym_variable_identifier] = STATE(393),
    [sym__variable_pattern] = ACTIONS(639),
    [sym_comment] = ACTIONS(5),
  },
  [271] = {
    [sym__identifier] = STATE(394),
    [sym_variable_identifier] = STATE(273),
    [sym_constructor_identifier] = STATE(273),
    [sym__variable_pattern] = ACTIONS(815),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [272] = {
    [sym__layout_semicolon] = ACTIONS(817),
    [anon_sym_SEMI] = ACTIONS(819),
    [anon_sym_PIPE] = ACTIONS(819),
    [anon_sym_deriving] = ACTIONS(819),
    [anon_sym_BANG] = ACTIONS(819),
    [sym__variable_pattern] = ACTIONS(821),
    [sym__constructor_pattern] = ACTIONS(821),
    [sym_comment] = ACTIONS(5),
  },
  [273] = {
    [sym__layout_semicolon] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(181),
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_deriving] = ACTIONS(181),
    [anon_sym_BANG] = ACTIONS(181),
    [sym__variable_pattern] = ACTIONS(183),
    [sym__constructor_pattern] = ACTIONS(183),
    [sym_comment] = ACTIONS(5),
  },
  [274] = {
    [sym__layout_semicolon] = ACTIONS(823),
    [anon_sym_SEMI] = ACTIONS(825),
    [anon_sym_PIPE] = ACTIONS(825),
    [anon_sym_deriving] = ACTIONS(825),
    [sym_comment] = ACTIONS(5),
  },
  [275] = {
    [sym_strict] = STATE(395),
    [sym__identifier] = STATE(395),
    [sym_variable_identifier] = STATE(273),
    [sym_constructor_identifier] = STATE(273),
    [sym__layout_semicolon] = ACTIONS(823),
    [anon_sym_SEMI] = ACTIONS(825),
    [anon_sym_PIPE] = ACTIONS(825),
    [anon_sym_deriving] = ACTIONS(825),
    [anon_sym_BANG] = ACTIONS(535),
    [sym__variable_pattern] = ACTIONS(269),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [276] = {
    [sym__layout_semicolon] = ACTIONS(827),
    [anon_sym_SEMI] = ACTIONS(771),
    [anon_sym_EQ] = ACTIONS(771),
    [anon_sym_deriving] = ACTIONS(771),
    [sym__variable_pattern] = ACTIONS(773),
    [sym__constructor_pattern] = ACTIONS(773),
    [sym_comment] = ACTIONS(5),
  },
  [277] = {
    [sym_new_constructor] = STATE(396),
    [sym_constructor_identifier] = STATE(279),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [278] = {
    [sym_deriving] = STATE(397),
    [sym__layout_semicolon] = ACTIONS(829),
    [anon_sym_SEMI] = ACTIONS(831),
    [anon_sym_deriving] = ACTIONS(263),
    [sym_comment] = ACTIONS(5),
  },
  [279] = {
    [sym__identifier] = STATE(398),
    [sym_variable_identifier] = STATE(273),
    [sym_constructor_identifier] = STATE(273),
    [sym_fields] = STATE(398),
    [anon_sym_LBRACE] = ACTIONS(533),
    [sym__variable_pattern] = ACTIONS(815),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [280] = {
    [anon_sym_LBRACE] = ACTIONS(771),
    [anon_sym_LPAREN] = ACTIONS(771),
    [anon_sym_COMMA] = ACTIONS(771),
    [anon_sym_RPAREN] = ACTIONS(771),
    [anon_sym_EQ] = ACTIONS(771),
    [anon_sym_DASH_GT] = ACTIONS(771),
    [sym_unit_type] = ACTIONS(771),
    [sym_list_constructor] = ACTIONS(771),
    [sym_function_constructor] = ACTIONS(771),
    [anon_sym_LBRACK] = ACTIONS(771),
    [anon_sym_RBRACK] = ACTIONS(771),
    [sym__variable_pattern] = ACTIONS(771),
    [sym__constructor_pattern] = ACTIONS(773),
    [sym_module_identifier] = ACTIONS(773),
    [sym_comment] = ACTIONS(5),
  },
  [281] = {
    [sym_type] = STATE(329),
    [sym__generic_type_constructor] = STATE(330),
    [sym_tupling_constructor] = STATE(325),
    [sym_tuple] = STATE(330),
    [sym_list] = STATE(330),
    [sym_parenthesized_constructor] = STATE(330),
    [sym_variable_identifier] = STATE(332),
    [sym__type_constructors] = STATE(325),
    [sym_qualified_type_constructor] = STATE(333),
    [anon_sym_LPAREN] = ACTIONS(631),
    [anon_sym_COMMA] = ACTIONS(633),
    [sym_unit_type] = ACTIONS(635),
    [sym_list_constructor] = ACTIONS(635),
    [sym_function_constructor] = ACTIONS(635),
    [anon_sym_LBRACK] = ACTIONS(637),
    [sym__variable_pattern] = ACTIONS(639),
    [sym__constructor_pattern] = ACTIONS(649),
    [sym_module_identifier] = ACTIONS(643),
    [sym_comment] = ACTIONS(5),
  },
  [282] = {
    [sym_variable_identifier] = STATE(340),
    [aux_sym_type_class_repeat1] = STATE(341),
    [sym__layout_semicolon] = ACTIONS(653),
    [anon_sym_SEMI] = ACTIONS(655),
    [anon_sym_DASH_GT] = ACTIONS(655),
    [sym__variable_pattern] = ACTIONS(357),
    [sym_comment] = ACTIONS(5),
  },
  [283] = {
    [sym__layout_semicolon] = ACTIONS(833),
    [anon_sym_SEMI] = ACTIONS(835),
    [sym_comment] = ACTIONS(5),
  },
  [284] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(837),
  },
  [285] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(839),
  },
  [286] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(841),
  },
  [287] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(843),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(845),
  },
  [288] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(847),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(847),
  },
  [289] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(843),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(849),
  },
  [290] = {
    [anon_sym_SEMI] = ACTIONS(851),
    [anon_sym_LBRACE] = ACTIONS(851),
    [anon_sym_RBRACE] = ACTIONS(851),
    [anon_sym_LPAREN] = ACTIONS(851),
    [anon_sym_RPAREN] = ACTIONS(851),
    [anon_sym_EQ] = ACTIONS(851),
    [anon_sym_DASH] = ACTIONS(851),
    [anon_sym_AT] = ACTIONS(851),
    [anon_sym__] = ACTIONS(851),
    [anon_sym_BQUOTE] = ACTIONS(851),
    [anon_sym_COLON] = ACTIONS(851),
    [anon_sym_LBRACK] = ACTIONS(851),
    [anon_sym_RBRACK] = ACTIONS(851),
    [anon_sym_PIPE] = ACTIONS(851),
    [anon_sym_BANG] = ACTIONS(851),
    [anon_sym_DOT] = ACTIONS(851),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(851),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(851),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(851),
    [sym__ascii_large] = ACTIONS(851),
    [anon_sym_POUND] = ACTIONS(851),
    [anon_sym_DOLLAR] = ACTIONS(851),
    [anon_sym_PERCENT] = ACTIONS(851),
    [anon_sym_AMP] = ACTIONS(851),
    [anon_sym_1] = ACTIONS(851),
    [anon_sym_PLUS] = ACTIONS(851),
    [anon_sym_SLASH] = ACTIONS(851),
    [anon_sym_LT] = ACTIONS(851),
    [anon_sym_GT] = ACTIONS(851),
    [anon_sym_QMARK] = ACTIONS(851),
    [anon_sym_CARET] = ACTIONS(851),
    [anon_sym_TILDE] = ACTIONS(851),
    [anon_sym_BSLASH] = ACTIONS(851),
    [sym__space] = ACTIONS(851),
    [sym__newline] = ACTIONS(851),
    [sym__tab] = ACTIONS(851),
    [sym__vertical_tab] = ACTIONS(851),
  },
  [291] = {
    [anon_sym_SEMI] = ACTIONS(853),
    [anon_sym_LBRACE] = ACTIONS(853),
    [anon_sym_RBRACE] = ACTIONS(853),
    [anon_sym_LPAREN] = ACTIONS(853),
    [anon_sym_RPAREN] = ACTIONS(853),
    [anon_sym_EQ] = ACTIONS(853),
    [anon_sym_DASH] = ACTIONS(853),
    [anon_sym_AT] = ACTIONS(853),
    [anon_sym__] = ACTIONS(853),
    [anon_sym_BQUOTE] = ACTIONS(853),
    [anon_sym_COLON] = ACTIONS(853),
    [anon_sym_LBRACK] = ACTIONS(853),
    [anon_sym_RBRACK] = ACTIONS(853),
    [anon_sym_PIPE] = ACTIONS(853),
    [anon_sym_BANG] = ACTIONS(853),
    [anon_sym_DOT] = ACTIONS(853),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(853),
    [anon_sym_DQUOTE] = ACTIONS(853),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(853),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(853),
    [sym__ascii_large] = ACTIONS(853),
    [anon_sym_POUND] = ACTIONS(853),
    [anon_sym_DOLLAR] = ACTIONS(853),
    [anon_sym_PERCENT] = ACTIONS(853),
    [anon_sym_AMP] = ACTIONS(853),
    [anon_sym_1] = ACTIONS(853),
    [anon_sym_PLUS] = ACTIONS(853),
    [anon_sym_SLASH] = ACTIONS(853),
    [anon_sym_LT] = ACTIONS(853),
    [anon_sym_GT] = ACTIONS(853),
    [anon_sym_QMARK] = ACTIONS(853),
    [anon_sym_CARET] = ACTIONS(853),
    [anon_sym_TILDE] = ACTIONS(853),
    [anon_sym_BSLASH] = ACTIONS(853),
    [sym__space] = ACTIONS(853),
    [sym__newline] = ACTIONS(853),
    [sym__tab] = ACTIONS(853),
    [sym__vertical_tab] = ACTIONS(853),
  },
  [292] = {
    [anon_sym_SEMI] = ACTIONS(855),
    [anon_sym_LBRACE] = ACTIONS(855),
    [anon_sym_RBRACE] = ACTIONS(855),
    [anon_sym_LPAREN] = ACTIONS(855),
    [anon_sym_RPAREN] = ACTIONS(855),
    [anon_sym_EQ] = ACTIONS(855),
    [anon_sym_DASH] = ACTIONS(855),
    [anon_sym_AT] = ACTIONS(855),
    [anon_sym__] = ACTIONS(855),
    [anon_sym_BQUOTE] = ACTIONS(855),
    [anon_sym_COLON] = ACTIONS(855),
    [anon_sym_LBRACK] = ACTIONS(855),
    [anon_sym_RBRACK] = ACTIONS(855),
    [anon_sym_PIPE] = ACTIONS(855),
    [anon_sym_BANG] = ACTIONS(855),
    [anon_sym_DOT] = ACTIONS(855),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(855),
    [anon_sym_DQUOTE] = ACTIONS(855),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(855),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(855),
    [sym__ascii_large] = ACTIONS(855),
    [anon_sym_POUND] = ACTIONS(855),
    [anon_sym_DOLLAR] = ACTIONS(855),
    [anon_sym_PERCENT] = ACTIONS(855),
    [anon_sym_AMP] = ACTIONS(855),
    [anon_sym_1] = ACTIONS(855),
    [anon_sym_PLUS] = ACTIONS(855),
    [anon_sym_SLASH] = ACTIONS(855),
    [anon_sym_LT] = ACTIONS(855),
    [anon_sym_GT] = ACTIONS(855),
    [anon_sym_QMARK] = ACTIONS(855),
    [anon_sym_CARET] = ACTIONS(855),
    [anon_sym_TILDE] = ACTIONS(855),
    [anon_sym_BSLASH] = ACTIONS(855),
    [sym__space] = ACTIONS(855),
    [sym__newline] = ACTIONS(855),
    [sym__tab] = ACTIONS(855),
    [sym__vertical_tab] = ACTIONS(855),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(855),
  },
  [293] = {
    [anon_sym_SEMI] = ACTIONS(857),
    [anon_sym_LBRACE] = ACTIONS(857),
    [anon_sym_RBRACE] = ACTIONS(857),
    [anon_sym_LPAREN] = ACTIONS(857),
    [anon_sym_RPAREN] = ACTIONS(857),
    [anon_sym_EQ] = ACTIONS(857),
    [anon_sym_DASH] = ACTIONS(857),
    [anon_sym_AT] = ACTIONS(857),
    [anon_sym__] = ACTIONS(857),
    [anon_sym_BQUOTE] = ACTIONS(857),
    [anon_sym_COLON] = ACTIONS(857),
    [anon_sym_LBRACK] = ACTIONS(857),
    [anon_sym_RBRACK] = ACTIONS(857),
    [anon_sym_PIPE] = ACTIONS(857),
    [anon_sym_BANG] = ACTIONS(857),
    [anon_sym_DOT] = ACTIONS(857),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(857),
    [anon_sym_DQUOTE] = ACTIONS(857),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(857),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(857),
    [sym__ascii_large] = ACTIONS(857),
    [anon_sym_POUND] = ACTIONS(857),
    [anon_sym_DOLLAR] = ACTIONS(857),
    [anon_sym_PERCENT] = ACTIONS(857),
    [anon_sym_AMP] = ACTIONS(857),
    [anon_sym_1] = ACTIONS(857),
    [anon_sym_PLUS] = ACTIONS(857),
    [anon_sym_SLASH] = ACTIONS(857),
    [anon_sym_LT] = ACTIONS(857),
    [anon_sym_GT] = ACTIONS(857),
    [anon_sym_QMARK] = ACTIONS(857),
    [anon_sym_CARET] = ACTIONS(857),
    [anon_sym_TILDE] = ACTIONS(857),
    [anon_sym_BSLASH] = ACTIONS(857),
    [sym__space] = ACTIONS(857),
    [sym__newline] = ACTIONS(857),
    [sym__tab] = ACTIONS(857),
    [sym__vertical_tab] = ACTIONS(857),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(859),
  },
  [294] = {
    [anon_sym_SEMI] = ACTIONS(861),
    [anon_sym_LBRACE] = ACTIONS(861),
    [anon_sym_RBRACE] = ACTIONS(861),
    [anon_sym_LPAREN] = ACTIONS(861),
    [anon_sym_RPAREN] = ACTIONS(861),
    [anon_sym_EQ] = ACTIONS(861),
    [anon_sym_DASH] = ACTIONS(861),
    [anon_sym_AT] = ACTIONS(861),
    [anon_sym__] = ACTIONS(861),
    [anon_sym_BQUOTE] = ACTIONS(861),
    [anon_sym_COLON] = ACTIONS(861),
    [anon_sym_LBRACK] = ACTIONS(861),
    [anon_sym_RBRACK] = ACTIONS(861),
    [anon_sym_PIPE] = ACTIONS(861),
    [anon_sym_BANG] = ACTIONS(861),
    [anon_sym_DOT] = ACTIONS(861),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(861),
    [anon_sym_DQUOTE] = ACTIONS(861),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(861),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(861),
    [sym__ascii_large] = ACTIONS(861),
    [anon_sym_POUND] = ACTIONS(861),
    [anon_sym_DOLLAR] = ACTIONS(861),
    [anon_sym_PERCENT] = ACTIONS(861),
    [anon_sym_AMP] = ACTIONS(861),
    [anon_sym_1] = ACTIONS(861),
    [anon_sym_PLUS] = ACTIONS(861),
    [anon_sym_SLASH] = ACTIONS(861),
    [anon_sym_LT] = ACTIONS(861),
    [anon_sym_GT] = ACTIONS(861),
    [anon_sym_QMARK] = ACTIONS(861),
    [anon_sym_CARET] = ACTIONS(861),
    [anon_sym_TILDE] = ACTIONS(861),
    [anon_sym_BSLASH] = ACTIONS(861),
    [sym__space] = ACTIONS(861),
    [sym__newline] = ACTIONS(861),
    [sym__tab] = ACTIONS(861),
    [sym__vertical_tab] = ACTIONS(861),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(861),
  },
  [295] = {
    [anon_sym_SEMI] = ACTIONS(857),
    [anon_sym_LBRACE] = ACTIONS(857),
    [anon_sym_RBRACE] = ACTIONS(857),
    [anon_sym_LPAREN] = ACTIONS(857),
    [anon_sym_RPAREN] = ACTIONS(857),
    [anon_sym_EQ] = ACTIONS(857),
    [anon_sym_DASH] = ACTIONS(857),
    [anon_sym_AT] = ACTIONS(857),
    [anon_sym__] = ACTIONS(857),
    [anon_sym_BQUOTE] = ACTIONS(857),
    [anon_sym_COLON] = ACTIONS(857),
    [anon_sym_LBRACK] = ACTIONS(857),
    [anon_sym_RBRACK] = ACTIONS(857),
    [anon_sym_PIPE] = ACTIONS(857),
    [anon_sym_BANG] = ACTIONS(857),
    [anon_sym_DOT] = ACTIONS(857),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(857),
    [anon_sym_DQUOTE] = ACTIONS(857),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(857),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(857),
    [sym__ascii_large] = ACTIONS(857),
    [anon_sym_POUND] = ACTIONS(857),
    [anon_sym_DOLLAR] = ACTIONS(857),
    [anon_sym_PERCENT] = ACTIONS(857),
    [anon_sym_AMP] = ACTIONS(857),
    [anon_sym_1] = ACTIONS(857),
    [anon_sym_PLUS] = ACTIONS(857),
    [anon_sym_SLASH] = ACTIONS(857),
    [anon_sym_LT] = ACTIONS(857),
    [anon_sym_GT] = ACTIONS(857),
    [anon_sym_QMARK] = ACTIONS(857),
    [anon_sym_CARET] = ACTIONS(857),
    [anon_sym_TILDE] = ACTIONS(857),
    [anon_sym_BSLASH] = ACTIONS(857),
    [sym__space] = ACTIONS(857),
    [sym__newline] = ACTIONS(857),
    [sym__tab] = ACTIONS(857),
    [sym__vertical_tab] = ACTIONS(857),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(863),
  },
  [296] = {
    [sym__layout_semicolon] = ACTIONS(865),
    [anon_sym_SEMI] = ACTIONS(867),
    [sym__variable_pattern] = ACTIONS(867),
    [sym__constructor_pattern] = ACTIONS(869),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(869),
    [anon_sym_SQUOTE] = ACTIONS(867),
    [anon_sym_DQUOTE] = ACTIONS(867),
    [sym__integer_literal] = ACTIONS(867),
    [sym__octal_literal] = ACTIONS(867),
    [sym__hexidecimal_literal] = ACTIONS(867),
  },
  [297] = {
    [sym__literal] = STATE(403),
    [sym_variable_identifier] = STATE(403),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [sym__layout_semicolon] = ACTIONS(871),
    [anon_sym_SEMI] = ACTIONS(873),
    [sym__variable_pattern] = ACTIONS(873),
    [sym__constructor_pattern] = ACTIONS(875),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(875),
    [anon_sym_SQUOTE] = ACTIONS(873),
    [anon_sym_DQUOTE] = ACTIONS(873),
    [sym__integer_literal] = ACTIONS(873),
    [sym__octal_literal] = ACTIONS(873),
    [sym__hexidecimal_literal] = ACTIONS(873),
  },
  [298] = {
    [sym__layout_semicolon] = ACTIONS(877),
    [anon_sym_SEMI] = ACTIONS(879),
    [sym__variable_pattern] = ACTIONS(879),
    [sym__constructor_pattern] = ACTIONS(881),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(881),
    [anon_sym_SQUOTE] = ACTIONS(879),
    [anon_sym_DQUOTE] = ACTIONS(879),
    [sym__integer_literal] = ACTIONS(879),
    [sym__octal_literal] = ACTIONS(879),
    [sym__hexidecimal_literal] = ACTIONS(879),
  },
  [299] = {
    [sym__literal] = STATE(404),
    [sym_integer] = STATE(91),
    [sym_char] = STATE(91),
    [sym_string] = STATE(91),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(161),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [300] = {
    [sym__function_pattern] = STATE(405),
    [sym_tuple_pattern] = STATE(88),
    [sym_parenthesized_pattern] = STATE(88),
    [sym__pattern] = STATE(406),
    [sym_negative_literal] = STATE(189),
    [sym_general_constructor] = STATE(189),
    [sym_as_pattern] = STATE(88),
    [sym_wildcard] = STATE(88),
    [sym__variable] = STATE(190),
    [sym_qualified_variable_identifier] = STATE(96),
    [sym__literal] = STATE(88),
    [sym__identifier] = STATE(97),
    [sym_simple_type] = STATE(98),
    [sym_variable_identifier] = STATE(99),
    [sym_constructor_identifier] = STATE(191),
    [sym_integer] = STATE(91),
    [sym_char] = STATE(91),
    [sym_string] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(365),
    [anon_sym__] = ACTIONS(153),
    [sym_list_constructor] = ACTIONS(155),
    [sym__variable_pattern] = ACTIONS(157),
    [sym__constructor_pattern] = ACTIONS(367),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(161),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [301] = {
    [anon_sym_LPAREN] = ACTIONS(883),
    [anon_sym_COMMA] = ACTIONS(883),
    [anon_sym_RPAREN] = ACTIONS(883),
    [anon_sym_EQ] = ACTIONS(883),
    [anon_sym_DASH] = ACTIONS(883),
    [anon_sym__] = ACTIONS(883),
    [anon_sym_BQUOTE] = ACTIONS(883),
    [anon_sym_COLON] = ACTIONS(883),
    [sym_list_constructor] = ACTIONS(883),
    [anon_sym_BANG] = ACTIONS(883),
    [sym__variable_pattern] = ACTIONS(885),
    [sym__constructor_pattern] = ACTIONS(885),
    [anon_sym_DOT] = ACTIONS(883),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(885),
    [anon_sym_SQUOTE] = ACTIONS(883),
    [anon_sym_DQUOTE] = ACTIONS(883),
    [anon_sym_POUND] = ACTIONS(883),
    [anon_sym_DOLLAR] = ACTIONS(883),
    [anon_sym_PERCENT] = ACTIONS(883),
    [anon_sym_AMP] = ACTIONS(883),
    [anon_sym_1] = ACTIONS(883),
    [anon_sym_PLUS] = ACTIONS(883),
    [anon_sym_SLASH] = ACTIONS(883),
    [anon_sym_LT] = ACTIONS(883),
    [anon_sym_GT] = ACTIONS(883),
    [anon_sym_QMARK] = ACTIONS(883),
    [anon_sym_CARET] = ACTIONS(883),
    [sym__integer_literal] = ACTIONS(883),
    [sym__octal_literal] = ACTIONS(883),
    [sym__hexidecimal_literal] = ACTIONS(883),
  },
  [302] = {
    [anon_sym_LPAREN] = ACTIONS(235),
    [anon_sym_DASH] = ACTIONS(235),
    [anon_sym__] = ACTIONS(235),
    [sym_list_constructor] = ACTIONS(235),
    [anon_sym_BANG] = ACTIONS(235),
    [sym__variable_pattern] = ACTIONS(887),
    [sym__constructor_pattern] = ACTIONS(887),
    [anon_sym_DOT] = ACTIONS(235),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(887),
    [anon_sym_SQUOTE] = ACTIONS(235),
    [anon_sym_DQUOTE] = ACTIONS(235),
    [anon_sym_POUND] = ACTIONS(235),
    [anon_sym_DOLLAR] = ACTIONS(235),
    [anon_sym_PERCENT] = ACTIONS(235),
    [anon_sym_AMP] = ACTIONS(235),
    [anon_sym_1] = ACTIONS(235),
    [anon_sym_PLUS] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(235),
    [anon_sym_LT] = ACTIONS(235),
    [anon_sym_GT] = ACTIONS(235),
    [anon_sym_QMARK] = ACTIONS(235),
    [anon_sym_CARET] = ACTIONS(235),
    [sym__integer_literal] = ACTIONS(235),
    [sym__octal_literal] = ACTIONS(235),
    [sym__hexidecimal_literal] = ACTIONS(235),
  },
  [303] = {
    [sym__identifier] = STATE(407),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym__variable_pattern] = ACTIONS(209),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [304] = {
    [sym__constructor_symbol] = STATE(409),
    [aux_sym_constructor_symbol_repeat1] = STATE(410),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(889),
    [anon_sym__] = ACTIONS(239),
    [anon_sym_COLON] = ACTIONS(889),
    [sym_list_constructor] = ACTIONS(239),
    [anon_sym_BANG] = ACTIONS(889),
    [sym__variable_pattern] = ACTIONS(891),
    [sym__constructor_pattern] = ACTIONS(891),
    [anon_sym_DOT] = ACTIONS(889),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(891),
    [anon_sym_SQUOTE] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(239),
    [anon_sym_POUND] = ACTIONS(889),
    [anon_sym_DOLLAR] = ACTIONS(889),
    [anon_sym_PERCENT] = ACTIONS(889),
    [anon_sym_AMP] = ACTIONS(889),
    [anon_sym_1] = ACTIONS(889),
    [anon_sym_PLUS] = ACTIONS(889),
    [anon_sym_SLASH] = ACTIONS(889),
    [anon_sym_LT] = ACTIONS(889),
    [anon_sym_GT] = ACTIONS(889),
    [anon_sym_QMARK] = ACTIONS(889),
    [anon_sym_CARET] = ACTIONS(889),
    [sym__integer_literal] = ACTIONS(239),
    [sym__octal_literal] = ACTIONS(239),
    [sym__hexidecimal_literal] = ACTIONS(239),
  },
  [305] = {
    [sym__function_pattern] = STATE(411),
    [sym_tuple_pattern] = STATE(88),
    [sym_parenthesized_pattern] = STATE(88),
    [sym_as_pattern] = STATE(88),
    [sym_wildcard] = STATE(88),
    [sym__variable] = STATE(412),
    [sym_qualified_variable_identifier] = STATE(96),
    [sym__literal] = STATE(88),
    [sym__identifier] = STATE(97),
    [sym_simple_type] = STATE(98),
    [sym_variable_identifier] = STATE(99),
    [sym_constructor_identifier] = STATE(413),
    [sym_integer] = STATE(91),
    [sym_char] = STATE(91),
    [sym_string] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym__] = ACTIONS(153),
    [sym_list_constructor] = ACTIONS(155),
    [sym__variable_pattern] = ACTIONS(157),
    [sym__constructor_pattern] = ACTIONS(367),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(161),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [306] = {
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym__] = ACTIONS(251),
    [sym_list_constructor] = ACTIONS(251),
    [sym__variable_pattern] = ACTIONS(893),
    [sym__constructor_pattern] = ACTIONS(893),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(893),
    [anon_sym_SQUOTE] = ACTIONS(251),
    [anon_sym_DQUOTE] = ACTIONS(251),
    [sym__integer_literal] = ACTIONS(251),
    [sym__octal_literal] = ACTIONS(251),
    [sym__hexidecimal_literal] = ACTIONS(251),
  },
  [307] = {
    [sym__variable_symbol] = STATE(414),
    [aux_sym_variable_symbol_repeat1] = STATE(415),
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(605),
    [anon_sym__] = ACTIONS(255),
    [sym_list_constructor] = ACTIONS(255),
    [anon_sym_BANG] = ACTIONS(605),
    [sym__variable_pattern] = ACTIONS(895),
    [sym__constructor_pattern] = ACTIONS(895),
    [anon_sym_DOT] = ACTIONS(605),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(895),
    [anon_sym_SQUOTE] = ACTIONS(255),
    [anon_sym_DQUOTE] = ACTIONS(255),
    [anon_sym_POUND] = ACTIONS(605),
    [anon_sym_DOLLAR] = ACTIONS(605),
    [anon_sym_PERCENT] = ACTIONS(605),
    [anon_sym_AMP] = ACTIONS(605),
    [anon_sym_1] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(605),
    [anon_sym_SLASH] = ACTIONS(605),
    [anon_sym_LT] = ACTIONS(605),
    [anon_sym_GT] = ACTIONS(605),
    [anon_sym_QMARK] = ACTIONS(605),
    [anon_sym_CARET] = ACTIONS(605),
    [sym__integer_literal] = ACTIONS(255),
    [sym__octal_literal] = ACTIONS(255),
    [sym__hexidecimal_literal] = ACTIONS(255),
  },
  [308] = {
    [anon_sym_COMMA] = ACTIONS(897),
    [anon_sym_RPAREN] = ACTIONS(899),
    [sym_comment] = ACTIONS(5),
  },
  [309] = {
    [sym__function_pattern] = STATE(318),
    [sym_tuple_pattern] = STATE(88),
    [sym_parenthesized_pattern] = STATE(88),
    [sym_as_pattern] = STATE(88),
    [sym_wildcard] = STATE(88),
    [sym__variable] = STATE(190),
    [sym_qualified_variable_identifier] = STATE(96),
    [sym__literal] = STATE(88),
    [sym__identifier] = STATE(97),
    [sym_simple_type] = STATE(98),
    [sym_variable_identifier] = STATE(99),
    [sym_constructor_identifier] = STATE(413),
    [sym_integer] = STATE(91),
    [sym_char] = STATE(91),
    [sym_string] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym__] = ACTIONS(153),
    [sym_list_constructor] = ACTIONS(155),
    [sym__variable_pattern] = ACTIONS(157),
    [sym__constructor_pattern] = ACTIONS(367),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(161),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [310] = {
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [sym__variable_pattern] = ACTIONS(91),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym__integer_literal] = ACTIONS(91),
    [sym__octal_literal] = ACTIONS(91),
    [sym__hexidecimal_literal] = ACTIONS(91),
  },
  [311] = {
    [sym__graphic] = STATE(418),
    [sym__small] = STATE(70),
    [sym__large] = STATE(70),
    [sym__symbol] = STATE(70),
    [sym__special] = STATE(70),
    [sym__escape] = STATE(418),
    [anon_sym_SEMI] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_EQ] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_AT] = ACTIONS(97),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_BANG] = ACTIONS(97),
    [anon_sym_DOT] = ACTIONS(97),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(901),
    [anon_sym_DQUOTE] = ACTIONS(901),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(105),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(99),
    [sym__ascii_large] = ACTIONS(107),
    [anon_sym_POUND] = ACTIONS(97),
    [anon_sym_DOLLAR] = ACTIONS(97),
    [anon_sym_PERCENT] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(97),
    [anon_sym_1] = ACTIONS(97),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(97),
    [anon_sym_GT] = ACTIONS(97),
    [anon_sym_QMARK] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(97),
    [anon_sym_TILDE] = ACTIONS(97),
    [anon_sym_BSLASH] = ACTIONS(109),
    [sym__space] = ACTIONS(901),
  },
  [312] = {
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(131),
    [sym__variable_pattern] = ACTIONS(131),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(131),
    [sym__integer_literal] = ACTIONS(131),
    [sym__octal_literal] = ACTIONS(131),
    [sym__hexidecimal_literal] = ACTIONS(131),
  },
  [313] = {
    [anon_sym_COMMA] = ACTIONS(867),
    [anon_sym_RPAREN] = ACTIONS(867),
    [sym__variable_pattern] = ACTIONS(867),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(869),
    [anon_sym_SQUOTE] = ACTIONS(867),
    [anon_sym_DQUOTE] = ACTIONS(867),
    [sym__integer_literal] = ACTIONS(867),
    [sym__octal_literal] = ACTIONS(867),
    [sym__hexidecimal_literal] = ACTIONS(867),
  },
  [314] = {
    [anon_sym_LBRACE] = ACTIONS(477),
    [anon_sym_COMMA] = ACTIONS(867),
    [anon_sym_RPAREN] = ACTIONS(867),
    [sym__variable_pattern] = ACTIONS(903),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(869),
    [anon_sym_SQUOTE] = ACTIONS(867),
    [anon_sym_DQUOTE] = ACTIONS(867),
    [sym__integer_literal] = ACTIONS(867),
    [sym__octal_literal] = ACTIONS(867),
    [sym__hexidecimal_literal] = ACTIONS(867),
  },
  [315] = {
    [sym__literal] = STATE(419),
    [sym_variable_identifier] = STATE(419),
    [sym_integer] = STATE(310),
    [sym_char] = STATE(310),
    [sym_string] = STATE(310),
    [anon_sym_COMMA] = ACTIONS(873),
    [anon_sym_RPAREN] = ACTIONS(873),
    [sym__variable_pattern] = ACTIONS(275),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(615),
    [anon_sym_SQUOTE] = ACTIONS(617),
    [anon_sym_DQUOTE] = ACTIONS(433),
    [sym__integer_literal] = ACTIONS(619),
    [sym__octal_literal] = ACTIONS(619),
    [sym__hexidecimal_literal] = ACTIONS(619),
  },
  [316] = {
    [anon_sym_RBRACE] = ACTIONS(553),
    [anon_sym_LPAREN] = ACTIONS(553),
    [anon_sym_COMMA] = ACTIONS(553),
    [anon_sym_RPAREN] = ACTIONS(553),
    [anon_sym_EQ] = ACTIONS(553),
    [anon_sym_DASH] = ACTIONS(553),
    [anon_sym__] = ACTIONS(553),
    [anon_sym_BQUOTE] = ACTIONS(553),
    [anon_sym_COLON] = ACTIONS(553),
    [sym_list_constructor] = ACTIONS(553),
    [anon_sym_BANG] = ACTIONS(553),
    [sym__variable_pattern] = ACTIONS(555),
    [sym__constructor_pattern] = ACTIONS(555),
    [anon_sym_DOT] = ACTIONS(553),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(555),
    [anon_sym_SQUOTE] = ACTIONS(553),
    [anon_sym_DQUOTE] = ACTIONS(553),
    [anon_sym_POUND] = ACTIONS(553),
    [anon_sym_DOLLAR] = ACTIONS(553),
    [anon_sym_PERCENT] = ACTIONS(553),
    [anon_sym_AMP] = ACTIONS(553),
    [anon_sym_1] = ACTIONS(553),
    [anon_sym_PLUS] = ACTIONS(553),
    [anon_sym_SLASH] = ACTIONS(553),
    [anon_sym_LT] = ACTIONS(553),
    [anon_sym_GT] = ACTIONS(553),
    [anon_sym_QMARK] = ACTIONS(553),
    [anon_sym_CARET] = ACTIONS(553),
    [sym__integer_literal] = ACTIONS(553),
    [sym__octal_literal] = ACTIONS(553),
    [sym__hexidecimal_literal] = ACTIONS(553),
  },
  [317] = {
    [anon_sym_RBRACE] = ACTIONS(585),
    [anon_sym_LPAREN] = ACTIONS(585),
    [anon_sym_COMMA] = ACTIONS(585),
    [anon_sym_RPAREN] = ACTIONS(585),
    [anon_sym_EQ] = ACTIONS(585),
    [anon_sym_DASH] = ACTIONS(585),
    [anon_sym__] = ACTIONS(585),
    [anon_sym_BQUOTE] = ACTIONS(585),
    [anon_sym_COLON] = ACTIONS(585),
    [sym_list_constructor] = ACTIONS(585),
    [anon_sym_BANG] = ACTIONS(585),
    [sym__variable_pattern] = ACTIONS(587),
    [sym__constructor_pattern] = ACTIONS(587),
    [anon_sym_DOT] = ACTIONS(585),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(587),
    [anon_sym_SQUOTE] = ACTIONS(585),
    [anon_sym_DQUOTE] = ACTIONS(585),
    [anon_sym_POUND] = ACTIONS(585),
    [anon_sym_DOLLAR] = ACTIONS(585),
    [anon_sym_PERCENT] = ACTIONS(585),
    [anon_sym_AMP] = ACTIONS(585),
    [anon_sym_1] = ACTIONS(585),
    [anon_sym_PLUS] = ACTIONS(585),
    [anon_sym_SLASH] = ACTIONS(585),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_QMARK] = ACTIONS(585),
    [anon_sym_CARET] = ACTIONS(585),
    [sym__integer_literal] = ACTIONS(585),
    [sym__octal_literal] = ACTIONS(585),
    [sym__hexidecimal_literal] = ACTIONS(585),
  },
  [318] = {
    [anon_sym_LPAREN] = ACTIONS(906),
    [anon_sym_COMMA] = ACTIONS(906),
    [anon_sym_RPAREN] = ACTIONS(906),
    [anon_sym_EQ] = ACTIONS(906),
    [anon_sym_DASH] = ACTIONS(906),
    [anon_sym__] = ACTIONS(906),
    [anon_sym_BQUOTE] = ACTIONS(906),
    [anon_sym_COLON] = ACTIONS(906),
    [sym_list_constructor] = ACTIONS(906),
    [anon_sym_BANG] = ACTIONS(906),
    [sym__variable_pattern] = ACTIONS(908),
    [sym__constructor_pattern] = ACTIONS(908),
    [anon_sym_DOT] = ACTIONS(906),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(908),
    [anon_sym_SQUOTE] = ACTIONS(906),
    [anon_sym_DQUOTE] = ACTIONS(906),
    [anon_sym_POUND] = ACTIONS(906),
    [anon_sym_DOLLAR] = ACTIONS(906),
    [anon_sym_PERCENT] = ACTIONS(906),
    [anon_sym_AMP] = ACTIONS(906),
    [anon_sym_1] = ACTIONS(906),
    [anon_sym_PLUS] = ACTIONS(906),
    [anon_sym_SLASH] = ACTIONS(906),
    [anon_sym_LT] = ACTIONS(906),
    [anon_sym_GT] = ACTIONS(906),
    [anon_sym_QMARK] = ACTIONS(906),
    [anon_sym_CARET] = ACTIONS(906),
    [sym__integer_literal] = ACTIONS(906),
    [sym__octal_literal] = ACTIONS(906),
    [sym__hexidecimal_literal] = ACTIONS(906),
  },
  [319] = {
    [anon_sym_LPAREN] = ACTIONS(910),
    [anon_sym_COMMA] = ACTIONS(910),
    [anon_sym_RPAREN] = ACTIONS(910),
    [anon_sym_EQ] = ACTIONS(910),
    [anon_sym_DASH] = ACTIONS(910),
    [anon_sym__] = ACTIONS(910),
    [anon_sym_BQUOTE] = ACTIONS(910),
    [anon_sym_COLON] = ACTIONS(910),
    [sym_list_constructor] = ACTIONS(910),
    [anon_sym_BANG] = ACTIONS(910),
    [sym__variable_pattern] = ACTIONS(912),
    [sym__constructor_pattern] = ACTIONS(912),
    [anon_sym_DOT] = ACTIONS(910),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(912),
    [anon_sym_SQUOTE] = ACTIONS(910),
    [anon_sym_DQUOTE] = ACTIONS(910),
    [anon_sym_POUND] = ACTIONS(910),
    [anon_sym_DOLLAR] = ACTIONS(910),
    [anon_sym_PERCENT] = ACTIONS(910),
    [anon_sym_AMP] = ACTIONS(910),
    [anon_sym_1] = ACTIONS(910),
    [anon_sym_PLUS] = ACTIONS(910),
    [anon_sym_SLASH] = ACTIONS(910),
    [anon_sym_LT] = ACTIONS(910),
    [anon_sym_GT] = ACTIONS(910),
    [anon_sym_QMARK] = ACTIONS(910),
    [anon_sym_CARET] = ACTIONS(910),
    [sym__integer_literal] = ACTIONS(910),
    [sym__octal_literal] = ACTIONS(910),
    [sym__hexidecimal_literal] = ACTIONS(910),
  },
  [320] = {
    [anon_sym_RBRACE] = ACTIONS(914),
    [sym_comment] = ACTIONS(5),
  },
  [321] = {
    [aux_sym_labels_repeat1] = STATE(422),
    [anon_sym_RBRACE] = ACTIONS(916),
    [anon_sym_COMMA] = ACTIONS(918),
    [sym_comment] = ACTIONS(5),
  },
  [322] = {
    [anon_sym_EQ] = ACTIONS(920),
    [sym_comment] = ACTIONS(5),
  },
  [323] = {
    [sym_type] = STATE(425),
    [sym__generic_type_constructor] = STATE(330),
    [sym_tupling_constructor] = STATE(325),
    [sym_tuple] = STATE(330),
    [sym_list] = STATE(330),
    [sym_parenthesized_constructor] = STATE(330),
    [sym_variable_identifier] = STATE(332),
    [sym__type_constructors] = STATE(325),
    [sym_qualified_type_constructor] = STATE(333),
    [anon_sym_LPAREN] = ACTIONS(631),
    [anon_sym_COMMA] = ACTIONS(922),
    [sym_unit_type] = ACTIONS(635),
    [sym_list_constructor] = ACTIONS(635),
    [sym_function_constructor] = ACTIONS(635),
    [anon_sym_LBRACK] = ACTIONS(637),
    [sym__variable_pattern] = ACTIONS(639),
    [sym__constructor_pattern] = ACTIONS(649),
    [sym_module_identifier] = ACTIONS(643),
    [sym_comment] = ACTIONS(5),
  },
  [324] = {
    [aux_sym_tupling_constructor_repeat1] = STATE(428),
    [anon_sym_COMMA] = ACTIONS(924),
    [anon_sym_RPAREN] = ACTIONS(926),
    [sym_comment] = ACTIONS(5),
  },
  [325] = {
    [anon_sym_LPAREN] = ACTIONS(647),
    [anon_sym_COMMA] = ACTIONS(647),
    [anon_sym_RPAREN] = ACTIONS(647),
    [anon_sym_DASH_GT] = ACTIONS(647),
    [sym_unit_type] = ACTIONS(647),
    [sym_list_constructor] = ACTIONS(647),
    [sym_function_constructor] = ACTIONS(647),
    [anon_sym_LBRACK] = ACTIONS(647),
    [anon_sym_RBRACK] = ACTIONS(647),
    [sym__variable_pattern] = ACTIONS(647),
    [sym__constructor_pattern] = ACTIONS(928),
    [sym_module_identifier] = ACTIONS(928),
    [sym_comment] = ACTIONS(5),
  },
  [326] = {
    [sym_type] = STATE(336),
    [sym__generic_type_constructor] = STATE(337),
    [sym_tupling_constructor] = STATE(325),
    [sym_tuple] = STATE(337),
    [sym_list] = STATE(337),
    [sym_parenthesized_constructor] = STATE(337),
    [sym_variable_identifier] = STATE(338),
    [sym__type_constructors] = STATE(325),
    [sym_qualified_type_constructor] = STATE(333),
    [aux_sym_list_repeat1] = STATE(429),
    [anon_sym_LPAREN] = ACTIONS(631),
    [sym_unit_type] = ACTIONS(635),
    [sym_list_constructor] = ACTIONS(635),
    [sym_function_constructor] = ACTIONS(635),
    [anon_sym_LBRACK] = ACTIONS(637),
    [sym__variable_pattern] = ACTIONS(275),
    [sym__constructor_pattern] = ACTIONS(649),
    [sym_module_identifier] = ACTIONS(651),
    [sym_comment] = ACTIONS(5),
  },
  [327] = {
    [sym_variable_identifier] = STATE(164),
    [aux_sym_type_class_repeat1] = STATE(430),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(655),
    [anon_sym_RPAREN] = ACTIONS(655),
    [anon_sym_DASH_GT] = ACTIONS(655),
    [sym__variable_pattern] = ACTIONS(85),
    [sym_comment] = ACTIONS(5),
  },
  [328] = {
    [sym_constructor_identifier] = STATE(432),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(433),
    [sym__constructor_pattern] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(930),
    [sym_comment] = ACTIONS(5),
  },
  [329] = {
    [aux_sym_tuple_repeat1] = STATE(436),
    [anon_sym_COMMA] = ACTIONS(932),
    [anon_sym_RPAREN] = ACTIONS(934),
    [sym_comment] = ACTIONS(5),
  },
  [330] = {
    [anon_sym_COMMA] = ACTIONS(665),
    [anon_sym_RPAREN] = ACTIONS(665),
    [anon_sym_DASH_GT] = ACTIONS(936),
    [sym_comment] = ACTIONS(5),
  },
  [331] = {
    [aux_sym_context_repeat1] = STATE(439),
    [anon_sym_COMMA] = ACTIONS(465),
    [anon_sym_RPAREN] = ACTIONS(938),
    [sym_comment] = ACTIONS(5),
  },
  [332] = {
    [anon_sym_COMMA] = ACTIONS(673),
    [anon_sym_RPAREN] = ACTIONS(673),
    [anon_sym_DASH_GT] = ACTIONS(940),
    [sym_comment] = ACTIONS(5),
  },
  [333] = {
    [anon_sym_LPAREN] = ACTIONS(679),
    [anon_sym_COMMA] = ACTIONS(679),
    [anon_sym_RPAREN] = ACTIONS(679),
    [anon_sym_DASH_GT] = ACTIONS(679),
    [sym_unit_type] = ACTIONS(679),
    [sym_list_constructor] = ACTIONS(679),
    [sym_function_constructor] = ACTIONS(679),
    [anon_sym_LBRACK] = ACTIONS(679),
    [anon_sym_RBRACK] = ACTIONS(679),
    [sym__variable_pattern] = ACTIONS(679),
    [sym__constructor_pattern] = ACTIONS(942),
    [sym_module_identifier] = ACTIONS(942),
    [sym_comment] = ACTIONS(5),
  },
  [334] = {
    [sym_variable_identifier] = STATE(164),
    [aux_sym_type_class_repeat1] = STATE(430),
    [anon_sym_LPAREN] = ACTIONS(655),
    [anon_sym_COMMA] = ACTIONS(655),
    [anon_sym_RPAREN] = ACTIONS(655),
    [anon_sym_DASH_GT] = ACTIONS(655),
    [sym_unit_type] = ACTIONS(655),
    [sym_list_constructor] = ACTIONS(655),
    [sym_function_constructor] = ACTIONS(655),
    [anon_sym_LBRACK] = ACTIONS(655),
    [anon_sym_RBRACK] = ACTIONS(655),
    [sym__variable_pattern] = ACTIONS(275),
    [sym__constructor_pattern] = ACTIONS(944),
    [sym_module_identifier] = ACTIONS(944),
    [sym_comment] = ACTIONS(5),
  },
  [335] = {
    [sym_constructor_identifier] = STATE(432),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(443),
    [sym__constructor_pattern] = ACTIONS(946),
    [anon_sym_DOT] = ACTIONS(948),
    [sym_comment] = ACTIONS(5),
  },
  [336] = {
    [anon_sym_LPAREN] = ACTIONS(950),
    [sym_unit_type] = ACTIONS(950),
    [sym_list_constructor] = ACTIONS(950),
    [sym_function_constructor] = ACTIONS(950),
    [anon_sym_LBRACK] = ACTIONS(950),
    [anon_sym_RBRACK] = ACTIONS(950),
    [sym__variable_pattern] = ACTIONS(950),
    [sym__constructor_pattern] = ACTIONS(952),
    [sym_module_identifier] = ACTIONS(952),
    [sym_comment] = ACTIONS(5),
  },
  [337] = {
    [anon_sym_LPAREN] = ACTIONS(665),
    [anon_sym_DASH_GT] = ACTIONS(954),
    [sym_unit_type] = ACTIONS(665),
    [sym_list_constructor] = ACTIONS(665),
    [sym_function_constructor] = ACTIONS(665),
    [anon_sym_LBRACK] = ACTIONS(665),
    [anon_sym_RBRACK] = ACTIONS(665),
    [sym__variable_pattern] = ACTIONS(665),
    [sym__constructor_pattern] = ACTIONS(956),
    [sym_module_identifier] = ACTIONS(956),
    [sym_comment] = ACTIONS(5),
  },
  [338] = {
    [anon_sym_LPAREN] = ACTIONS(673),
    [anon_sym_DASH_GT] = ACTIONS(958),
    [sym_unit_type] = ACTIONS(673),
    [sym_list_constructor] = ACTIONS(673),
    [sym_function_constructor] = ACTIONS(673),
    [anon_sym_LBRACK] = ACTIONS(673),
    [anon_sym_RBRACK] = ACTIONS(673),
    [sym__variable_pattern] = ACTIONS(673),
    [sym__constructor_pattern] = ACTIONS(960),
    [sym_module_identifier] = ACTIONS(960),
    [sym_comment] = ACTIONS(5),
  },
  [339] = {
    [sym_type] = STATE(447),
    [sym__generic_type_constructor] = STATE(337),
    [sym_tupling_constructor] = STATE(325),
    [sym_tuple] = STATE(337),
    [sym_list] = STATE(337),
    [sym_parenthesized_constructor] = STATE(337),
    [sym_variable_identifier] = STATE(338),
    [sym__type_constructors] = STATE(325),
    [sym_qualified_type_constructor] = STATE(333),
    [anon_sym_LPAREN] = ACTIONS(631),
    [sym_unit_type] = ACTIONS(635),
    [sym_list_constructor] = ACTIONS(635),
    [sym_function_constructor] = ACTIONS(635),
    [anon_sym_LBRACK] = ACTIONS(637),
    [anon_sym_RBRACK] = ACTIONS(962),
    [sym__variable_pattern] = ACTIONS(275),
    [sym__constructor_pattern] = ACTIONS(649),
    [sym_module_identifier] = ACTIONS(651),
    [sym_comment] = ACTIONS(5),
  },
  [340] = {
    [sym__layout_semicolon] = ACTIONS(537),
    [anon_sym_SEMI] = ACTIONS(477),
    [anon_sym_DASH_GT] = ACTIONS(477),
    [sym__variable_pattern] = ACTIONS(477),
    [sym_comment] = ACTIONS(5),
  },
  [341] = {
    [sym_variable_identifier] = STATE(448),
    [sym__layout_semicolon] = ACTIONS(964),
    [anon_sym_SEMI] = ACTIONS(966),
    [anon_sym_DASH_GT] = ACTIONS(966),
    [sym__variable_pattern] = ACTIONS(357),
    [sym_comment] = ACTIONS(5),
  },
  [342] = {
    [sym_constructor_identifier] = STATE(450),
    [sym__constructor_pattern] = ACTIONS(359),
    [sym_module_identifier] = ACTIONS(968),
    [sym_comment] = ACTIONS(5),
  },
  [343] = {
    [sym_variable_identifier] = STATE(340),
    [aux_sym_type_class_repeat1] = STATE(451),
    [sym__layout_semicolon] = ACTIONS(970),
    [anon_sym_SEMI] = ACTIONS(972),
    [anon_sym_DASH_GT] = ACTIONS(972),
    [sym__variable_pattern] = ACTIONS(357),
    [sym_comment] = ACTIONS(5),
  },
  [344] = {
    [sym_constructor_identifier] = STATE(450),
    [sym__constructor_pattern] = ACTIONS(359),
    [anon_sym_DOT] = ACTIONS(974),
    [sym_comment] = ACTIONS(5),
  },
  [345] = {
    [sym_type] = STATE(453),
    [sym__generic_type_constructor] = STATE(206),
    [sym_tupling_constructor] = STATE(201),
    [sym_tuple] = STATE(206),
    [sym_list] = STATE(206),
    [sym_parenthesized_constructor] = STATE(206),
    [sym_variable_identifier] = STATE(209),
    [sym__type_constructors] = STATE(201),
    [sym_qualified_type_constructor] = STATE(211),
    [anon_sym_LPAREN] = ACTIONS(547),
    [sym_unit_type] = ACTIONS(393),
    [sym_list_constructor] = ACTIONS(393),
    [sym_function_constructor] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(395),
    [sym__variable_pattern] = ACTIONS(397),
    [sym__constructor_pattern] = ACTIONS(549),
    [sym_module_identifier] = ACTIONS(401),
    [sym_comment] = ACTIONS(5),
  },
  [346] = {
    [sym__layout_semicolon] = ACTIONS(976),
    [anon_sym_SEMI] = ACTIONS(978),
    [sym_comment] = ACTIONS(5),
  },
  [347] = {
    [anon_sym_LPAREN] = ACTIONS(980),
    [sym_unit_type] = ACTIONS(980),
    [sym_list_constructor] = ACTIONS(980),
    [sym_function_constructor] = ACTIONS(980),
    [anon_sym_LBRACK] = ACTIONS(980),
    [sym__variable_pattern] = ACTIONS(980),
    [sym__constructor_pattern] = ACTIONS(471),
    [sym_module_identifier] = ACTIONS(471),
    [sym_comment] = ACTIONS(5),
  },
  [348] = {
    [sym_type] = STATE(454),
    [sym__generic_type_constructor] = STATE(206),
    [sym_tupling_constructor] = STATE(201),
    [sym_tuple] = STATE(206),
    [sym_list] = STATE(206),
    [sym_parenthesized_constructor] = STATE(206),
    [sym_variable_identifier] = STATE(209),
    [sym__type_constructors] = STATE(201),
    [sym_qualified_type_constructor] = STATE(211),
    [anon_sym_LPAREN] = ACTIONS(547),
    [sym_unit_type] = ACTIONS(393),
    [sym_list_constructor] = ACTIONS(393),
    [sym_function_constructor] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(395),
    [sym__variable_pattern] = ACTIONS(397),
    [sym__constructor_pattern] = ACTIONS(549),
    [sym_module_identifier] = ACTIONS(401),
    [sym_comment] = ACTIONS(5),
  },
  [349] = {
    [ts_builtin_sym_end] = ACTIONS(982),
    [sym_comment] = ACTIONS(5),
  },
  [350] = {
    [sym__layout_semicolon] = ACTIONS(984),
    [anon_sym_SEMI] = ACTIONS(986),
    [sym_comment] = ACTIONS(5),
  },
  [351] = {
    [sym_import] = STATE(20),
    [sym__declaration] = STATE(457),
    [sym_function_declaration] = STATE(20),
    [sym_function_head] = STATE(22),
    [sym__variable] = STATE(23),
    [sym_qualified_variable_identifier] = STATE(24),
    [sym__expression] = STATE(20),
    [sym_foreign] = STATE(20),
    [sym_default] = STATE(20),
    [sym_do_expression] = STATE(25),
    [sym_type_class] = STATE(20),
    [sym_type_class_instance] = STATE(20),
    [sym__general_declaration] = STATE(20),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym_algebraic_datatype] = STATE(20),
    [sym_newtype] = STATE(20),
    [sym_type_synonym] = STATE(20),
    [sym__literal] = STATE(25),
    [sym__identifier] = STATE(27),
    [sym_variable_identifier] = STATE(28),
    [sym_constructor_identifier] = STATE(29),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [sym__layout_close_brace] = ACTIONS(988),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_foreign] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_class] = ACTIONS(21),
    [anon_sym_instance] = ACTIONS(23),
    [anon_sym_infixl] = ACTIONS(25),
    [anon_sym_infixr] = ACTIONS(25),
    [anon_sym_infix] = ACTIONS(25),
    [anon_sym_data] = ACTIONS(27),
    [anon_sym_newtype] = ACTIONS(29),
    [anon_sym_type] = ACTIONS(31),
    [sym__variable_pattern] = ACTIONS(33),
    [sym__constructor_pattern] = ACTIONS(35),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [352] = {
    [sym_import] = STATE(20),
    [sym__declaration] = STATE(103),
    [sym_function_declaration] = STATE(20),
    [sym_function_head] = STATE(22),
    [sym__variable] = STATE(23),
    [sym_qualified_variable_identifier] = STATE(24),
    [sym__expression] = STATE(20),
    [sym_foreign] = STATE(20),
    [sym_default] = STATE(20),
    [sym_do_expression] = STATE(25),
    [sym_type_class] = STATE(20),
    [sym_type_class_instance] = STATE(20),
    [sym__general_declaration] = STATE(20),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym_algebraic_datatype] = STATE(20),
    [sym_newtype] = STATE(20),
    [sym_type_synonym] = STATE(20),
    [sym__literal] = STATE(25),
    [sym__identifier] = STATE(27),
    [sym_variable_identifier] = STATE(28),
    [sym_constructor_identifier] = STATE(29),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [anon_sym_RBRACE] = ACTIONS(990),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_foreign] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_class] = ACTIONS(21),
    [anon_sym_instance] = ACTIONS(23),
    [anon_sym_infixl] = ACTIONS(25),
    [anon_sym_infixr] = ACTIONS(25),
    [anon_sym_infix] = ACTIONS(25),
    [anon_sym_data] = ACTIONS(27),
    [anon_sym_newtype] = ACTIONS(29),
    [anon_sym_type] = ACTIONS(31),
    [sym__variable_pattern] = ACTIONS(33),
    [sym__constructor_pattern] = ACTIONS(35),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [353] = {
    [sym_export] = STATE(458),
    [sym__identifier] = STATE(218),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym__variable_pattern] = ACTIONS(209),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [354] = {
    [anon_sym_where] = ACTIONS(992),
    [sym_comment] = ACTIONS(5),
  },
  [355] = {
    [anon_sym_COMMA] = ACTIONS(994),
    [anon_sym_RPAREN] = ACTIONS(996),
    [sym_comment] = ACTIONS(5),
  },
  [356] = {
    [sym__identifier] = STATE(462),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [anon_sym_DOT_DOT] = ACTIONS(998),
    [sym__variable_pattern] = ACTIONS(209),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [357] = {
    [ts_builtin_sym_end] = ACTIONS(1000),
    [sym_comment] = ACTIONS(5),
  },
  [358] = {
    [sym_import_specification] = STATE(463),
    [sym__layout_semicolon] = ACTIONS(1002),
    [anon_sym_SEMI] = ACTIONS(1004),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_hiding] = ACTIONS(201),
    [sym_comment] = ACTIONS(5),
  },
  [359] = {
    [sym__identifier] = STATE(465),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [anon_sym_DOT_DOT] = ACTIONS(1006),
    [sym__variable_pattern] = ACTIONS(209),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [360] = {
    [sym__identifier] = STATE(466),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym__variable_pattern] = ACTIONS(209),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [361] = {
    [sym__layout_semicolon] = ACTIONS(1008),
    [anon_sym_SEMI] = ACTIONS(1010),
    [sym_comment] = ACTIONS(5),
  },
  [362] = {
    [anon_sym_COMMA] = ACTIONS(1012),
    [anon_sym_RPAREN] = ACTIONS(1014),
    [sym_comment] = ACTIONS(5),
  },
  [363] = {
    [sym__layout_semicolon] = ACTIONS(1002),
    [anon_sym_SEMI] = ACTIONS(1004),
    [sym_comment] = ACTIONS(5),
  },
  [364] = {
    [aux_sym_import_specification_repeat1] = STATE(470),
    [anon_sym_LPAREN] = ACTIONS(1016),
    [anon_sym_COMMA] = ACTIONS(715),
    [anon_sym_RPAREN] = ACTIONS(1014),
    [sym_comment] = ACTIONS(5),
  },
  [365] = {
    [anon_sym_COMMA] = ACTIONS(321),
    [anon_sym_RPAREN] = ACTIONS(321),
    [sym__variable_pattern] = ACTIONS(321),
    [sym__constructor_pattern] = ACTIONS(323),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(323),
    [anon_sym_SQUOTE] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(321),
    [sym__integer_literal] = ACTIONS(321),
    [sym__octal_literal] = ACTIONS(321),
    [sym__hexidecimal_literal] = ACTIONS(321),
  },
  [366] = {
    [sym__gap] = STATE(178),
    [sym__graphic] = STATE(178),
    [sym__small] = STATE(78),
    [sym__large] = STATE(78),
    [sym__symbol] = STATE(78),
    [sym__special] = STATE(78),
    [sym__escape] = STATE(178),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_AT] = ACTIONS(113),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_COLON] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_BANG] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(113),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(343),
    [anon_sym_DQUOTE] = ACTIONS(1018),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(115),
    [sym__ascii_large] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(113),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_PERCENT] = ACTIONS(113),
    [anon_sym_AMP] = ACTIONS(113),
    [anon_sym_1] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_CARET] = ACTIONS(113),
    [anon_sym_TILDE] = ACTIONS(113),
    [anon_sym_BSLASH] = ACTIONS(125),
    [sym__space] = ACTIONS(127),
    [sym__newline] = ACTIONS(127),
    [sym__tab] = ACTIONS(127),
    [sym__vertical_tab] = ACTIONS(127),
  },
  [367] = {
    [sym__layout_semicolon] = ACTIONS(1020),
    [anon_sym_SEMI] = ACTIONS(1022),
    [sym_comment] = ACTIONS(5),
  },
  [368] = {
    [sym_type_signature] = STATE(472),
    [sym__identifier] = STATE(230),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym__variable_pattern] = ACTIONS(639),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [369] = {
    [anon_sym_COMMA] = ACTIONS(1024),
    [anon_sym_RPAREN] = ACTIONS(1024),
    [sym_comment] = ACTIONS(5),
  },
  [370] = {
    [sym__identifier] = STATE(473),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym__variable_pattern] = ACTIONS(209),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [371] = {
    [sym__layout_semicolon] = ACTIONS(1026),
    [anon_sym_SEMI] = ACTIONS(1028),
    [sym_comment] = ACTIONS(5),
  },
  [372] = {
    [anon_sym_COMMA] = ACTIONS(1030),
    [anon_sym_RPAREN] = ACTIONS(1030),
    [sym_comment] = ACTIONS(5),
  },
  [373] = {
    [sym__constructor_pattern] = ACTIONS(1032),
    [sym_comment] = ACTIONS(5),
  },
  [374] = {
    [sym_class] = STATE(474),
    [sym_constructor_identifier] = STATE(126),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [375] = {
    [anon_sym_EQ_GT] = ACTIONS(1034),
    [sym_comment] = ACTIONS(5),
  },
  [376] = {
    [sym__layout_semicolon] = ACTIONS(1036),
    [anon_sym_SEMI] = ACTIONS(1038),
    [sym_comment] = ACTIONS(5),
  },
  [377] = {
    [sym_general_declarations] = STATE(476),
    [sym__layout_open_brace] = ACTIONS(473),
    [anon_sym_LBRACE] = ACTIONS(475),
    [sym_comment] = ACTIONS(5),
  },
  [378] = {
    [sym__layout_semicolon] = ACTIONS(1040),
    [anon_sym_SEMI] = ACTIONS(1042),
    [sym_comment] = ACTIONS(5),
  },
  [379] = {
    [sym__layout_semicolon] = ACTIONS(1044),
    [anon_sym_SEMI] = ACTIONS(1046),
    [sym_comment] = ACTIONS(5),
  },
  [380] = {
    [sym__general_declaration] = STATE(479),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym__identifier] = STATE(230),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym__layout_close_brace] = ACTIONS(1048),
    [anon_sym_infixl] = ACTIONS(25),
    [anon_sym_infixr] = ACTIONS(25),
    [anon_sym_infix] = ACTIONS(25),
    [sym__variable_pattern] = ACTIONS(229),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [381] = {
    [sym__layout_semicolon] = ACTIONS(1050),
    [anon_sym_SEMI] = ACTIONS(1052),
    [sym_comment] = ACTIONS(5),
  },
  [382] = {
    [sym__general_declaration] = STATE(481),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym__identifier] = STATE(230),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [anon_sym_RBRACE] = ACTIONS(1054),
    [anon_sym_infixl] = ACTIONS(25),
    [anon_sym_infixr] = ACTIONS(25),
    [anon_sym_infix] = ACTIONS(25),
    [sym__variable_pattern] = ACTIONS(229),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [383] = {
    [anon_sym_COMMA] = ACTIONS(1056),
    [anon_sym_RPAREN] = ACTIONS(1056),
    [anon_sym_EQ_GT] = ACTIONS(1056),
    [sym_comment] = ACTIONS(5),
  },
  [384] = {
    [sym__layout_semicolon] = ACTIONS(1058),
    [anon_sym_SEMI] = ACTIONS(1060),
    [sym_comment] = ACTIONS(5),
  },
  [385] = {
    [sym_general_declarations] = STATE(482),
    [sym__layout_open_brace] = ACTIONS(473),
    [anon_sym_LBRACE] = ACTIONS(475),
    [sym_comment] = ACTIONS(5),
  },
  [386] = {
    [sym__layout_semicolon] = ACTIONS(1062),
    [anon_sym_SEMI] = ACTIONS(1064),
    [anon_sym_COMMA] = ACTIONS(1064),
    [sym_comment] = ACTIONS(5),
  },
  [387] = {
    [sym_deriving] = STATE(483),
    [sym__layout_semicolon] = ACTIONS(1066),
    [anon_sym_SEMI] = ACTIONS(1068),
    [anon_sym_deriving] = ACTIONS(263),
    [sym_comment] = ACTIONS(5),
  },
  [388] = {
    [sym__layout_semicolon] = ACTIONS(1066),
    [anon_sym_SEMI] = ACTIONS(1068),
    [sym_comment] = ACTIONS(5),
  },
  [389] = {
    [aux_sym_export_repeat1] = STATE(485),
    [anon_sym_COMMA] = ACTIONS(439),
    [anon_sym_RPAREN] = ACTIONS(1070),
    [sym_comment] = ACTIONS(5),
  },
  [390] = {
    [sym__layout_semicolon] = ACTIONS(1072),
    [anon_sym_SEMI] = ACTIONS(1074),
    [anon_sym_PIPE] = ACTIONS(1074),
    [anon_sym_deriving] = ACTIONS(1074),
    [sym_comment] = ACTIONS(5),
  },
  [391] = {
    [sym_constructor] = STATE(486),
    [sym_constructor_identifier] = STATE(153),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [392] = {
    [aux_sym_fields_repeat1] = STATE(489),
    [anon_sym_RBRACE] = ACTIONS(1076),
    [anon_sym_COMMA] = ACTIONS(1078),
    [sym_comment] = ACTIONS(5),
  },
  [393] = {
    [aux_sym_field_repeat1] = STATE(492),
    [anon_sym_COMMA] = ACTIONS(1080),
    [anon_sym_COLON_COLON] = ACTIONS(1082),
    [sym_comment] = ACTIONS(5),
  },
  [394] = {
    [sym__layout_semicolon] = ACTIONS(1084),
    [anon_sym_SEMI] = ACTIONS(1086),
    [anon_sym_PIPE] = ACTIONS(1086),
    [anon_sym_deriving] = ACTIONS(1086),
    [anon_sym_BANG] = ACTIONS(1086),
    [sym__variable_pattern] = ACTIONS(1088),
    [sym__constructor_pattern] = ACTIONS(1088),
    [sym_comment] = ACTIONS(5),
  },
  [395] = {
    [sym__layout_semicolon] = ACTIONS(1090),
    [anon_sym_SEMI] = ACTIONS(1092),
    [anon_sym_PIPE] = ACTIONS(1092),
    [anon_sym_deriving] = ACTIONS(1092),
    [anon_sym_BANG] = ACTIONS(1092),
    [sym__variable_pattern] = ACTIONS(1094),
    [sym__constructor_pattern] = ACTIONS(1094),
    [sym_comment] = ACTIONS(5),
  },
  [396] = {
    [sym_deriving] = STATE(493),
    [sym__layout_semicolon] = ACTIONS(1096),
    [anon_sym_SEMI] = ACTIONS(1098),
    [anon_sym_deriving] = ACTIONS(263),
    [sym_comment] = ACTIONS(5),
  },
  [397] = {
    [sym__layout_semicolon] = ACTIONS(1096),
    [anon_sym_SEMI] = ACTIONS(1098),
    [sym_comment] = ACTIONS(5),
  },
  [398] = {
    [sym__layout_semicolon] = ACTIONS(1100),
    [anon_sym_SEMI] = ACTIONS(1102),
    [anon_sym_deriving] = ACTIONS(1102),
    [sym_comment] = ACTIONS(5),
  },
  [399] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1104),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1104),
  },
  [400] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1106),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(1106),
  },
  [401] = {
    [anon_sym_SEMI] = ACTIONS(1108),
    [anon_sym_LBRACE] = ACTIONS(1108),
    [anon_sym_RBRACE] = ACTIONS(1108),
    [anon_sym_LPAREN] = ACTIONS(1108),
    [anon_sym_RPAREN] = ACTIONS(1108),
    [anon_sym_EQ] = ACTIONS(1108),
    [anon_sym_DASH] = ACTIONS(1108),
    [anon_sym_AT] = ACTIONS(1108),
    [anon_sym__] = ACTIONS(1108),
    [anon_sym_BQUOTE] = ACTIONS(1108),
    [anon_sym_COLON] = ACTIONS(1108),
    [anon_sym_LBRACK] = ACTIONS(1108),
    [anon_sym_RBRACK] = ACTIONS(1108),
    [anon_sym_PIPE] = ACTIONS(1108),
    [anon_sym_BANG] = ACTIONS(1108),
    [anon_sym_DOT] = ACTIONS(1108),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(1108),
    [anon_sym_DQUOTE] = ACTIONS(1108),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(1108),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(1108),
    [sym__ascii_large] = ACTIONS(1108),
    [anon_sym_POUND] = ACTIONS(1108),
    [anon_sym_DOLLAR] = ACTIONS(1108),
    [anon_sym_PERCENT] = ACTIONS(1108),
    [anon_sym_AMP] = ACTIONS(1108),
    [anon_sym_1] = ACTIONS(1108),
    [anon_sym_PLUS] = ACTIONS(1108),
    [anon_sym_SLASH] = ACTIONS(1108),
    [anon_sym_LT] = ACTIONS(1108),
    [anon_sym_GT] = ACTIONS(1108),
    [anon_sym_QMARK] = ACTIONS(1108),
    [anon_sym_CARET] = ACTIONS(1108),
    [anon_sym_TILDE] = ACTIONS(1108),
    [anon_sym_BSLASH] = ACTIONS(1108),
    [sym__space] = ACTIONS(1108),
    [sym__newline] = ACTIONS(1108),
    [sym__tab] = ACTIONS(1108),
    [sym__vertical_tab] = ACTIONS(1108),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1108),
  },
  [402] = {
    [anon_sym_SEMI] = ACTIONS(1110),
    [anon_sym_LBRACE] = ACTIONS(1110),
    [anon_sym_RBRACE] = ACTIONS(1110),
    [anon_sym_LPAREN] = ACTIONS(1110),
    [anon_sym_RPAREN] = ACTIONS(1110),
    [anon_sym_EQ] = ACTIONS(1110),
    [anon_sym_DASH] = ACTIONS(1110),
    [anon_sym_AT] = ACTIONS(1110),
    [anon_sym__] = ACTIONS(1110),
    [anon_sym_BQUOTE] = ACTIONS(1110),
    [anon_sym_COLON] = ACTIONS(1110),
    [anon_sym_LBRACK] = ACTIONS(1110),
    [anon_sym_RBRACK] = ACTIONS(1110),
    [anon_sym_PIPE] = ACTIONS(1110),
    [anon_sym_BANG] = ACTIONS(1110),
    [anon_sym_DOT] = ACTIONS(1110),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(1110),
    [anon_sym_DQUOTE] = ACTIONS(1110),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(1110),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(1110),
    [sym__ascii_large] = ACTIONS(1110),
    [anon_sym_POUND] = ACTIONS(1110),
    [anon_sym_DOLLAR] = ACTIONS(1110),
    [anon_sym_PERCENT] = ACTIONS(1110),
    [anon_sym_AMP] = ACTIONS(1110),
    [anon_sym_1] = ACTIONS(1110),
    [anon_sym_PLUS] = ACTIONS(1110),
    [anon_sym_SLASH] = ACTIONS(1110),
    [anon_sym_LT] = ACTIONS(1110),
    [anon_sym_GT] = ACTIONS(1110),
    [anon_sym_QMARK] = ACTIONS(1110),
    [anon_sym_CARET] = ACTIONS(1110),
    [anon_sym_TILDE] = ACTIONS(1110),
    [anon_sym_BSLASH] = ACTIONS(1110),
    [sym__space] = ACTIONS(1110),
    [sym__newline] = ACTIONS(1110),
    [sym__tab] = ACTIONS(1110),
    [sym__vertical_tab] = ACTIONS(1110),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(1110),
  },
  [403] = {
    [sym__layout_semicolon] = ACTIONS(1112),
    [anon_sym_SEMI] = ACTIONS(1114),
    [sym__variable_pattern] = ACTIONS(1114),
    [sym__constructor_pattern] = ACTIONS(1116),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1116),
    [anon_sym_SQUOTE] = ACTIONS(1114),
    [anon_sym_DQUOTE] = ACTIONS(1114),
    [sym__integer_literal] = ACTIONS(1114),
    [sym__octal_literal] = ACTIONS(1114),
    [sym__hexidecimal_literal] = ACTIONS(1114),
  },
  [404] = {
    [anon_sym_RPAREN] = ACTIONS(1118),
    [sym_comment] = ACTIONS(5),
  },
  [405] = {
    [sym__op] = STATE(305),
    [sym_variable_symbol] = STATE(306),
    [sym_constructor_symbol] = STATE(306),
    [sym__variable_symbol] = STATE(307),
    [anon_sym_COMMA] = ACTIONS(1120),
    [anon_sym_RPAREN] = ACTIONS(1120),
    [anon_sym_DASH] = ACTIONS(605),
    [anon_sym_BQUOTE] = ACTIONS(607),
    [anon_sym_COLON] = ACTIONS(609),
    [anon_sym_BANG] = ACTIONS(605),
    [anon_sym_DOT] = ACTIONS(605),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(605),
    [anon_sym_DOLLAR] = ACTIONS(605),
    [anon_sym_PERCENT] = ACTIONS(605),
    [anon_sym_AMP] = ACTIONS(605),
    [anon_sym_1] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(605),
    [anon_sym_SLASH] = ACTIONS(605),
    [anon_sym_LT] = ACTIONS(605),
    [anon_sym_GT] = ACTIONS(605),
    [anon_sym_QMARK] = ACTIONS(605),
    [anon_sym_CARET] = ACTIONS(605),
  },
  [406] = {
    [anon_sym_COMMA] = ACTIONS(1120),
    [anon_sym_RPAREN] = ACTIONS(1120),
    [sym_comment] = ACTIONS(5),
  },
  [407] = {
    [anon_sym_BQUOTE] = ACTIONS(1122),
    [sym_comment] = ACTIONS(5),
  },
  [408] = {
    [anon_sym_LPAREN] = ACTIONS(489),
    [anon_sym_DASH] = ACTIONS(489),
    [anon_sym__] = ACTIONS(489),
    [anon_sym_COLON] = ACTIONS(489),
    [sym_list_constructor] = ACTIONS(489),
    [anon_sym_BANG] = ACTIONS(489),
    [sym__variable_pattern] = ACTIONS(1124),
    [sym__constructor_pattern] = ACTIONS(1124),
    [anon_sym_DOT] = ACTIONS(489),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1124),
    [anon_sym_SQUOTE] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(489),
    [anon_sym_POUND] = ACTIONS(489),
    [anon_sym_DOLLAR] = ACTIONS(489),
    [anon_sym_PERCENT] = ACTIONS(489),
    [anon_sym_AMP] = ACTIONS(489),
    [anon_sym_1] = ACTIONS(489),
    [anon_sym_PLUS] = ACTIONS(489),
    [anon_sym_SLASH] = ACTIONS(489),
    [anon_sym_LT] = ACTIONS(489),
    [anon_sym_GT] = ACTIONS(489),
    [anon_sym_QMARK] = ACTIONS(489),
    [anon_sym_CARET] = ACTIONS(489),
    [sym__integer_literal] = ACTIONS(489),
    [sym__octal_literal] = ACTIONS(489),
    [sym__hexidecimal_literal] = ACTIONS(489),
  },
  [409] = {
    [anon_sym_LPAREN] = ACTIONS(493),
    [anon_sym_DASH] = ACTIONS(493),
    [anon_sym__] = ACTIONS(493),
    [anon_sym_COLON] = ACTIONS(493),
    [sym_list_constructor] = ACTIONS(493),
    [anon_sym_BANG] = ACTIONS(493),
    [sym__variable_pattern] = ACTIONS(1126),
    [sym__constructor_pattern] = ACTIONS(1126),
    [anon_sym_DOT] = ACTIONS(493),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1126),
    [anon_sym_SQUOTE] = ACTIONS(493),
    [anon_sym_DQUOTE] = ACTIONS(493),
    [anon_sym_POUND] = ACTIONS(493),
    [anon_sym_DOLLAR] = ACTIONS(493),
    [anon_sym_PERCENT] = ACTIONS(493),
    [anon_sym_AMP] = ACTIONS(493),
    [anon_sym_1] = ACTIONS(493),
    [anon_sym_PLUS] = ACTIONS(493),
    [anon_sym_SLASH] = ACTIONS(493),
    [anon_sym_LT] = ACTIONS(493),
    [anon_sym_GT] = ACTIONS(493),
    [anon_sym_QMARK] = ACTIONS(493),
    [anon_sym_CARET] = ACTIONS(493),
    [sym__integer_literal] = ACTIONS(493),
    [sym__octal_literal] = ACTIONS(493),
    [sym__hexidecimal_literal] = ACTIONS(493),
  },
  [410] = {
    [sym__constructor_symbol] = STATE(496),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_DASH] = ACTIONS(889),
    [anon_sym__] = ACTIONS(497),
    [anon_sym_COLON] = ACTIONS(889),
    [sym_list_constructor] = ACTIONS(497),
    [anon_sym_BANG] = ACTIONS(889),
    [sym__variable_pattern] = ACTIONS(1128),
    [sym__constructor_pattern] = ACTIONS(1128),
    [anon_sym_DOT] = ACTIONS(889),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1128),
    [anon_sym_SQUOTE] = ACTIONS(497),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [anon_sym_POUND] = ACTIONS(889),
    [anon_sym_DOLLAR] = ACTIONS(889),
    [anon_sym_PERCENT] = ACTIONS(889),
    [anon_sym_AMP] = ACTIONS(889),
    [anon_sym_1] = ACTIONS(889),
    [anon_sym_PLUS] = ACTIONS(889),
    [anon_sym_SLASH] = ACTIONS(889),
    [anon_sym_LT] = ACTIONS(889),
    [anon_sym_GT] = ACTIONS(889),
    [anon_sym_QMARK] = ACTIONS(889),
    [anon_sym_CARET] = ACTIONS(889),
    [sym__integer_literal] = ACTIONS(497),
    [sym__octal_literal] = ACTIONS(497),
    [sym__hexidecimal_literal] = ACTIONS(497),
  },
  [411] = {
    [anon_sym_COMMA] = ACTIONS(1130),
    [anon_sym_RPAREN] = ACTIONS(1130),
    [sym_comment] = ACTIONS(5),
  },
  [412] = {
    [anon_sym_AT] = ACTIONS(1132),
    [sym_comment] = ACTIONS(5),
  },
  [413] = {
    [sym_variable_identifier] = STATE(164),
    [aux_sym_type_class_repeat1] = STATE(198),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_BANG] = ACTIONS(181),
    [sym__variable_pattern] = ACTIONS(275),
    [anon_sym_DOT] = ACTIONS(181),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(181),
    [anon_sym_DOLLAR] = ACTIONS(181),
    [anon_sym_PERCENT] = ACTIONS(181),
    [anon_sym_AMP] = ACTIONS(181),
    [anon_sym_1] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_LT] = ACTIONS(181),
    [anon_sym_GT] = ACTIONS(181),
    [anon_sym_QMARK] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(181),
  },
  [414] = {
    [anon_sym_LPAREN] = ACTIONS(507),
    [anon_sym_DASH] = ACTIONS(507),
    [anon_sym__] = ACTIONS(507),
    [sym_list_constructor] = ACTIONS(507),
    [anon_sym_BANG] = ACTIONS(507),
    [sym__variable_pattern] = ACTIONS(1134),
    [sym__constructor_pattern] = ACTIONS(1134),
    [anon_sym_DOT] = ACTIONS(507),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1134),
    [anon_sym_SQUOTE] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(507),
    [anon_sym_POUND] = ACTIONS(507),
    [anon_sym_DOLLAR] = ACTIONS(507),
    [anon_sym_PERCENT] = ACTIONS(507),
    [anon_sym_AMP] = ACTIONS(507),
    [anon_sym_1] = ACTIONS(507),
    [anon_sym_PLUS] = ACTIONS(507),
    [anon_sym_SLASH] = ACTIONS(507),
    [anon_sym_LT] = ACTIONS(507),
    [anon_sym_GT] = ACTIONS(507),
    [anon_sym_QMARK] = ACTIONS(507),
    [anon_sym_CARET] = ACTIONS(507),
    [sym__integer_literal] = ACTIONS(507),
    [sym__octal_literal] = ACTIONS(507),
    [sym__hexidecimal_literal] = ACTIONS(507),
  },
  [415] = {
    [sym__variable_symbol] = STATE(498),
    [anon_sym_LPAREN] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(605),
    [anon_sym__] = ACTIONS(511),
    [sym_list_constructor] = ACTIONS(511),
    [anon_sym_BANG] = ACTIONS(605),
    [sym__variable_pattern] = ACTIONS(1136),
    [sym__constructor_pattern] = ACTIONS(1136),
    [anon_sym_DOT] = ACTIONS(605),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1136),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_DQUOTE] = ACTIONS(511),
    [anon_sym_POUND] = ACTIONS(605),
    [anon_sym_DOLLAR] = ACTIONS(605),
    [anon_sym_PERCENT] = ACTIONS(605),
    [anon_sym_AMP] = ACTIONS(605),
    [anon_sym_1] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(605),
    [anon_sym_SLASH] = ACTIONS(605),
    [anon_sym_LT] = ACTIONS(605),
    [anon_sym_GT] = ACTIONS(605),
    [anon_sym_QMARK] = ACTIONS(605),
    [anon_sym_CARET] = ACTIONS(605),
    [sym__integer_literal] = ACTIONS(511),
    [sym__octal_literal] = ACTIONS(511),
    [sym__hexidecimal_literal] = ACTIONS(511),
  },
  [416] = {
    [sym__function_pattern] = STATE(499),
    [sym_tuple_pattern] = STATE(88),
    [sym_parenthesized_pattern] = STATE(88),
    [sym__pattern] = STATE(500),
    [sym_negative_literal] = STATE(189),
    [sym_general_constructor] = STATE(189),
    [sym_as_pattern] = STATE(88),
    [sym_wildcard] = STATE(88),
    [sym__variable] = STATE(190),
    [sym_qualified_variable_identifier] = STATE(96),
    [sym__literal] = STATE(88),
    [sym__identifier] = STATE(97),
    [sym_simple_type] = STATE(98),
    [sym_variable_identifier] = STATE(99),
    [sym_constructor_identifier] = STATE(191),
    [sym_integer] = STATE(91),
    [sym_char] = STATE(91),
    [sym_string] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(365),
    [anon_sym__] = ACTIONS(153),
    [sym_list_constructor] = ACTIONS(155),
    [sym__variable_pattern] = ACTIONS(157),
    [sym__constructor_pattern] = ACTIONS(367),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(161),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [417] = {
    [anon_sym_LPAREN] = ACTIONS(1138),
    [anon_sym_COMMA] = ACTIONS(1138),
    [anon_sym_RPAREN] = ACTIONS(1138),
    [anon_sym_EQ] = ACTIONS(1138),
    [anon_sym_DASH] = ACTIONS(1138),
    [anon_sym__] = ACTIONS(1138),
    [anon_sym_BQUOTE] = ACTIONS(1138),
    [anon_sym_COLON] = ACTIONS(1138),
    [sym_list_constructor] = ACTIONS(1138),
    [anon_sym_BANG] = ACTIONS(1138),
    [sym__variable_pattern] = ACTIONS(1140),
    [sym__constructor_pattern] = ACTIONS(1140),
    [anon_sym_DOT] = ACTIONS(1138),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1140),
    [anon_sym_SQUOTE] = ACTIONS(1138),
    [anon_sym_DQUOTE] = ACTIONS(1138),
    [anon_sym_POUND] = ACTIONS(1138),
    [anon_sym_DOLLAR] = ACTIONS(1138),
    [anon_sym_PERCENT] = ACTIONS(1138),
    [anon_sym_AMP] = ACTIONS(1138),
    [anon_sym_1] = ACTIONS(1138),
    [anon_sym_PLUS] = ACTIONS(1138),
    [anon_sym_SLASH] = ACTIONS(1138),
    [anon_sym_LT] = ACTIONS(1138),
    [anon_sym_GT] = ACTIONS(1138),
    [anon_sym_QMARK] = ACTIONS(1138),
    [anon_sym_CARET] = ACTIONS(1138),
    [sym__integer_literal] = ACTIONS(1138),
    [sym__octal_literal] = ACTIONS(1138),
    [sym__hexidecimal_literal] = ACTIONS(1138),
  },
  [418] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1142),
  },
  [419] = {
    [anon_sym_COMMA] = ACTIONS(1114),
    [anon_sym_RPAREN] = ACTIONS(1114),
    [sym__variable_pattern] = ACTIONS(1114),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1116),
    [anon_sym_SQUOTE] = ACTIONS(1114),
    [anon_sym_DQUOTE] = ACTIONS(1114),
    [sym__integer_literal] = ACTIONS(1114),
    [sym__octal_literal] = ACTIONS(1114),
    [sym__hexidecimal_literal] = ACTIONS(1114),
  },
  [420] = {
    [anon_sym_LPAREN] = ACTIONS(1144),
    [anon_sym_COMMA] = ACTIONS(1144),
    [anon_sym_RPAREN] = ACTIONS(1144),
    [anon_sym_EQ] = ACTIONS(1144),
    [anon_sym_DASH] = ACTIONS(1144),
    [anon_sym__] = ACTIONS(1144),
    [anon_sym_BQUOTE] = ACTIONS(1144),
    [anon_sym_COLON] = ACTIONS(1144),
    [sym_list_constructor] = ACTIONS(1144),
    [anon_sym_BANG] = ACTIONS(1144),
    [sym__variable_pattern] = ACTIONS(1146),
    [sym__constructor_pattern] = ACTIONS(1146),
    [anon_sym_DOT] = ACTIONS(1144),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1146),
    [anon_sym_SQUOTE] = ACTIONS(1144),
    [anon_sym_DQUOTE] = ACTIONS(1144),
    [anon_sym_POUND] = ACTIONS(1144),
    [anon_sym_DOLLAR] = ACTIONS(1144),
    [anon_sym_PERCENT] = ACTIONS(1144),
    [anon_sym_AMP] = ACTIONS(1144),
    [anon_sym_1] = ACTIONS(1144),
    [anon_sym_PLUS] = ACTIONS(1144),
    [anon_sym_SLASH] = ACTIONS(1144),
    [anon_sym_LT] = ACTIONS(1144),
    [anon_sym_GT] = ACTIONS(1144),
    [anon_sym_QMARK] = ACTIONS(1144),
    [anon_sym_CARET] = ACTIONS(1144),
    [sym__integer_literal] = ACTIONS(1144),
    [sym__octal_literal] = ACTIONS(1144),
    [sym__hexidecimal_literal] = ACTIONS(1144),
  },
  [421] = {
    [sym_label] = STATE(502),
    [sym__identifier] = STATE(322),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym__variable_pattern] = ACTIONS(209),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [422] = {
    [anon_sym_RBRACE] = ACTIONS(1148),
    [anon_sym_COMMA] = ACTIONS(1150),
    [sym_comment] = ACTIONS(5),
  },
  [423] = {
    [sym__literal] = STATE(504),
    [sym_integer] = STATE(91),
    [sym_char] = STATE(91),
    [sym_string] = STATE(91),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(161),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [424] = {
    [aux_sym_tupling_constructor_repeat1] = STATE(506),
    [anon_sym_COMMA] = ACTIONS(924),
    [anon_sym_RPAREN] = ACTIONS(1152),
    [sym_comment] = ACTIONS(5),
  },
  [425] = {
    [aux_sym_tuple_repeat1] = STATE(508),
    [anon_sym_COMMA] = ACTIONS(932),
    [anon_sym_RPAREN] = ACTIONS(1154),
    [sym_comment] = ACTIONS(5),
  },
  [426] = {
    [anon_sym_COMMA] = ACTIONS(1156),
    [anon_sym_RPAREN] = ACTIONS(1156),
    [sym_comment] = ACTIONS(5),
  },
  [427] = {
    [sym__layout_semicolon] = ACTIONS(1158),
    [anon_sym_SEMI] = ACTIONS(1160),
    [anon_sym_DASH_GT] = ACTIONS(1160),
    [sym_comment] = ACTIONS(5),
  },
  [428] = {
    [anon_sym_COMMA] = ACTIONS(1162),
    [anon_sym_RPAREN] = ACTIONS(1164),
    [sym_comment] = ACTIONS(5),
  },
  [429] = {
    [sym_type] = STATE(447),
    [sym__generic_type_constructor] = STATE(337),
    [sym_tupling_constructor] = STATE(325),
    [sym_tuple] = STATE(337),
    [sym_list] = STATE(337),
    [sym_parenthesized_constructor] = STATE(337),
    [sym_variable_identifier] = STATE(338),
    [sym__type_constructors] = STATE(325),
    [sym_qualified_type_constructor] = STATE(333),
    [anon_sym_LPAREN] = ACTIONS(631),
    [sym_unit_type] = ACTIONS(635),
    [sym_list_constructor] = ACTIONS(635),
    [sym_function_constructor] = ACTIONS(635),
    [anon_sym_LBRACK] = ACTIONS(637),
    [anon_sym_RBRACK] = ACTIONS(1166),
    [sym__variable_pattern] = ACTIONS(275),
    [sym__constructor_pattern] = ACTIONS(649),
    [sym_module_identifier] = ACTIONS(651),
    [sym_comment] = ACTIONS(5),
  },
  [430] = {
    [sym_variable_identifier] = STATE(280),
    [anon_sym_LPAREN] = ACTIONS(966),
    [anon_sym_COMMA] = ACTIONS(966),
    [anon_sym_RPAREN] = ACTIONS(966),
    [anon_sym_DASH_GT] = ACTIONS(966),
    [sym_unit_type] = ACTIONS(966),
    [sym_list_constructor] = ACTIONS(966),
    [sym_function_constructor] = ACTIONS(966),
    [anon_sym_LBRACK] = ACTIONS(966),
    [anon_sym_RBRACK] = ACTIONS(966),
    [sym__variable_pattern] = ACTIONS(275),
    [sym__constructor_pattern] = ACTIONS(1168),
    [sym_module_identifier] = ACTIONS(1168),
    [sym_comment] = ACTIONS(5),
  },
  [431] = {
    [sym_constructor_identifier] = STATE(512),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_module_identifier] = ACTIONS(968),
    [sym_comment] = ACTIONS(5),
  },
  [432] = {
    [sym_variable_identifier] = STATE(164),
    [aux_sym_type_class_repeat1] = STATE(513),
    [anon_sym_LPAREN] = ACTIONS(972),
    [anon_sym_COMMA] = ACTIONS(972),
    [anon_sym_RPAREN] = ACTIONS(972),
    [anon_sym_DASH_GT] = ACTIONS(972),
    [sym_unit_type] = ACTIONS(972),
    [sym_list_constructor] = ACTIONS(972),
    [sym_function_constructor] = ACTIONS(972),
    [anon_sym_LBRACK] = ACTIONS(972),
    [anon_sym_RBRACK] = ACTIONS(972),
    [sym__variable_pattern] = ACTIONS(275),
    [sym__constructor_pattern] = ACTIONS(1170),
    [sym_module_identifier] = ACTIONS(1170),
    [sym_comment] = ACTIONS(5),
  },
  [433] = {
    [sym_constructor_identifier] = STATE(512),
    [sym__constructor_pattern] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(1172),
    [sym_comment] = ACTIONS(5),
  },
  [434] = {
    [sym_type] = STATE(515),
    [sym__generic_type_constructor] = STATE(330),
    [sym_tupling_constructor] = STATE(325),
    [sym_tuple] = STATE(330),
    [sym_list] = STATE(330),
    [sym_parenthesized_constructor] = STATE(330),
    [sym_variable_identifier] = STATE(332),
    [sym__type_constructors] = STATE(325),
    [sym_qualified_type_constructor] = STATE(333),
    [anon_sym_LPAREN] = ACTIONS(631),
    [sym_unit_type] = ACTIONS(635),
    [sym_list_constructor] = ACTIONS(635),
    [sym_function_constructor] = ACTIONS(635),
    [anon_sym_LBRACK] = ACTIONS(637),
    [sym__variable_pattern] = ACTIONS(639),
    [sym__constructor_pattern] = ACTIONS(649),
    [sym_module_identifier] = ACTIONS(643),
    [sym_comment] = ACTIONS(5),
  },
  [435] = {
    [sym__layout_semicolon] = ACTIONS(1174),
    [anon_sym_SEMI] = ACTIONS(1177),
    [anon_sym_DASH_GT] = ACTIONS(1177),
    [sym_comment] = ACTIONS(5),
  },
  [436] = {
    [anon_sym_COMMA] = ACTIONS(1180),
    [anon_sym_RPAREN] = ACTIONS(1182),
    [sym_comment] = ACTIONS(5),
  },
  [437] = {
    [sym_type] = STATE(518),
    [sym__generic_type_constructor] = STATE(330),
    [sym_tupling_constructor] = STATE(325),
    [sym_tuple] = STATE(330),
    [sym_list] = STATE(330),
    [sym_parenthesized_constructor] = STATE(330),
    [sym_variable_identifier] = STATE(332),
    [sym__type_constructors] = STATE(325),
    [sym_qualified_type_constructor] = STATE(333),
    [anon_sym_LPAREN] = ACTIONS(631),
    [sym_unit_type] = ACTIONS(635),
    [sym_list_constructor] = ACTIONS(635),
    [sym_function_constructor] = ACTIONS(635),
    [anon_sym_LBRACK] = ACTIONS(637),
    [sym__variable_pattern] = ACTIONS(639),
    [sym__constructor_pattern] = ACTIONS(649),
    [sym_module_identifier] = ACTIONS(643),
    [sym_comment] = ACTIONS(5),
  },
  [438] = {
    [anon_sym_EQ_GT] = ACTIONS(1184),
    [sym_comment] = ACTIONS(5),
  },
  [439] = {
    [anon_sym_COMMA] = ACTIONS(755),
    [anon_sym_RPAREN] = ACTIONS(1186),
    [sym_comment] = ACTIONS(5),
  },
  [440] = {
    [sym_type] = STATE(521),
    [sym__generic_type_constructor] = STATE(330),
    [sym_tupling_constructor] = STATE(325),
    [sym_tuple] = STATE(330),
    [sym_list] = STATE(330),
    [sym_parenthesized_constructor] = STATE(330),
    [sym_variable_identifier] = STATE(332),
    [sym__type_constructors] = STATE(325),
    [sym_qualified_type_constructor] = STATE(333),
    [anon_sym_LPAREN] = ACTIONS(631),
    [sym_unit_type] = ACTIONS(635),
    [sym_list_constructor] = ACTIONS(635),
    [sym_function_constructor] = ACTIONS(635),
    [anon_sym_LBRACK] = ACTIONS(637),
    [sym__variable_pattern] = ACTIONS(639),
    [sym__constructor_pattern] = ACTIONS(649),
    [sym_module_identifier] = ACTIONS(643),
    [sym_comment] = ACTIONS(5),
  },
  [441] = {
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_DASH_GT] = ACTIONS(85),
    [sym_unit_type] = ACTIONS(85),
    [sym_list_constructor] = ACTIONS(85),
    [sym_function_constructor] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(85),
    [sym__variable_pattern] = ACTIONS(85),
    [sym__constructor_pattern] = ACTIONS(221),
    [sym_module_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(5),
  },
  [442] = {
    [sym_constructor_identifier] = STATE(512),
    [sym__constructor_pattern] = ACTIONS(946),
    [sym_module_identifier] = ACTIONS(968),
    [sym_comment] = ACTIONS(5),
  },
  [443] = {
    [sym_constructor_identifier] = STATE(512),
    [sym__constructor_pattern] = ACTIONS(946),
    [anon_sym_DOT] = ACTIONS(1188),
    [sym_comment] = ACTIONS(5),
  },
  [444] = {
    [sym_type] = STATE(518),
    [sym__generic_type_constructor] = STATE(337),
    [sym_tupling_constructor] = STATE(325),
    [sym_tuple] = STATE(337),
    [sym_list] = STATE(337),
    [sym_parenthesized_constructor] = STATE(337),
    [sym_variable_identifier] = STATE(338),
    [sym__type_constructors] = STATE(325),
    [sym_qualified_type_constructor] = STATE(333),
    [anon_sym_LPAREN] = ACTIONS(631),
    [sym_unit_type] = ACTIONS(635),
    [sym_list_constructor] = ACTIONS(635),
    [sym_function_constructor] = ACTIONS(635),
    [anon_sym_LBRACK] = ACTIONS(637),
    [sym__variable_pattern] = ACTIONS(275),
    [sym__constructor_pattern] = ACTIONS(649),
    [sym_module_identifier] = ACTIONS(651),
    [sym_comment] = ACTIONS(5),
  },
  [445] = {
    [sym_type] = STATE(521),
    [sym__generic_type_constructor] = STATE(337),
    [sym_tupling_constructor] = STATE(325),
    [sym_tuple] = STATE(337),
    [sym_list] = STATE(337),
    [sym_parenthesized_constructor] = STATE(337),
    [sym_variable_identifier] = STATE(338),
    [sym__type_constructors] = STATE(325),
    [sym_qualified_type_constructor] = STATE(333),
    [anon_sym_LPAREN] = ACTIONS(631),
    [sym_unit_type] = ACTIONS(635),
    [sym_list_constructor] = ACTIONS(635),
    [sym_function_constructor] = ACTIONS(635),
    [anon_sym_LBRACK] = ACTIONS(637),
    [sym__variable_pattern] = ACTIONS(275),
    [sym__constructor_pattern] = ACTIONS(649),
    [sym_module_identifier] = ACTIONS(651),
    [sym_comment] = ACTIONS(5),
  },
  [446] = {
    [sym__layout_semicolon] = ACTIONS(1190),
    [anon_sym_SEMI] = ACTIONS(1192),
    [anon_sym_DASH_GT] = ACTIONS(1192),
    [sym_comment] = ACTIONS(5),
  },
  [447] = {
    [anon_sym_LPAREN] = ACTIONS(1194),
    [sym_unit_type] = ACTIONS(1194),
    [sym_list_constructor] = ACTIONS(1194),
    [sym_function_constructor] = ACTIONS(1194),
    [anon_sym_LBRACK] = ACTIONS(1194),
    [anon_sym_RBRACK] = ACTIONS(1194),
    [sym__variable_pattern] = ACTIONS(1194),
    [sym__constructor_pattern] = ACTIONS(1196),
    [sym_module_identifier] = ACTIONS(1196),
    [sym_comment] = ACTIONS(5),
  },
  [448] = {
    [sym__layout_semicolon] = ACTIONS(827),
    [anon_sym_SEMI] = ACTIONS(771),
    [anon_sym_DASH_GT] = ACTIONS(771),
    [sym__variable_pattern] = ACTIONS(771),
    [sym_comment] = ACTIONS(5),
  },
  [449] = {
    [sym__constructor_pattern] = ACTIONS(1198),
    [anon_sym_DOT] = ACTIONS(1200),
    [sym_comment] = ACTIONS(5),
  },
  [450] = {
    [sym_variable_identifier] = STATE(340),
    [aux_sym_type_class_repeat1] = STATE(523),
    [sym__layout_semicolon] = ACTIONS(1202),
    [anon_sym_SEMI] = ACTIONS(1204),
    [anon_sym_DASH_GT] = ACTIONS(1204),
    [sym__variable_pattern] = ACTIONS(357),
    [sym_comment] = ACTIONS(5),
  },
  [451] = {
    [sym_variable_identifier] = STATE(448),
    [sym__layout_semicolon] = ACTIONS(1202),
    [anon_sym_SEMI] = ACTIONS(1204),
    [anon_sym_DASH_GT] = ACTIONS(1204),
    [sym__variable_pattern] = ACTIONS(357),
    [sym_comment] = ACTIONS(5),
  },
  [452] = {
    [sym_constructor_identifier] = STATE(525),
    [sym__constructor_pattern] = ACTIONS(359),
    [sym_module_identifier] = ACTIONS(1206),
    [sym_comment] = ACTIONS(5),
  },
  [453] = {
    [sym__layout_semicolon] = ACTIONS(1208),
    [anon_sym_SEMI] = ACTIONS(1210),
    [sym_comment] = ACTIONS(5),
  },
  [454] = {
    [sym__layout_semicolon] = ACTIONS(1212),
    [anon_sym_SEMI] = ACTIONS(1214),
    [sym_comment] = ACTIONS(5),
  },
  [455] = {
    [sym__layout_close_brace] = ACTIONS(347),
    [anon_sym_import] = ACTIONS(349),
    [anon_sym_foreign] = ACTIONS(349),
    [anon_sym_default] = ACTIONS(349),
    [anon_sym_do] = ACTIONS(349),
    [anon_sym_class] = ACTIONS(349),
    [anon_sym_instance] = ACTIONS(349),
    [anon_sym_infixl] = ACTIONS(349),
    [anon_sym_infixr] = ACTIONS(349),
    [anon_sym_infix] = ACTIONS(349),
    [anon_sym_data] = ACTIONS(349),
    [anon_sym_newtype] = ACTIONS(349),
    [anon_sym_type] = ACTIONS(349),
    [sym__variable_pattern] = ACTIONS(351),
    [sym__constructor_pattern] = ACTIONS(351),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(351),
    [anon_sym_SQUOTE] = ACTIONS(349),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [sym__integer_literal] = ACTIONS(349),
    [sym__octal_literal] = ACTIONS(349),
    [sym__hexidecimal_literal] = ACTIONS(349),
  },
  [456] = {
    [ts_builtin_sym_end] = ACTIONS(1216),
    [sym_comment] = ACTIONS(5),
  },
  [457] = {
    [sym__layout_semicolon] = ACTIONS(1218),
    [anon_sym_SEMI] = ACTIONS(1220),
    [sym_comment] = ACTIONS(5),
  },
  [458] = {
    [anon_sym_COMMA] = ACTIONS(1222),
    [anon_sym_RPAREN] = ACTIONS(1222),
    [sym_comment] = ACTIONS(5),
  },
  [459] = {
    [sym_export] = STATE(527),
    [sym__identifier] = STATE(218),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym__variable_pattern] = ACTIONS(209),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [460] = {
    [anon_sym_where] = ACTIONS(1224),
    [sym_comment] = ACTIONS(5),
  },
  [461] = {
    [anon_sym_RPAREN] = ACTIONS(1226),
    [sym_comment] = ACTIONS(5),
  },
  [462] = {
    [aux_sym_export_repeat1] = STATE(529),
    [anon_sym_COMMA] = ACTIONS(439),
    [anon_sym_RPAREN] = ACTIONS(1226),
    [sym_comment] = ACTIONS(5),
  },
  [463] = {
    [sym__layout_semicolon] = ACTIONS(1228),
    [anon_sym_SEMI] = ACTIONS(1230),
    [sym_comment] = ACTIONS(5),
  },
  [464] = {
    [anon_sym_RPAREN] = ACTIONS(1232),
    [sym_comment] = ACTIONS(5),
  },
  [465] = {
    [aux_sym_export_repeat1] = STATE(531),
    [anon_sym_COMMA] = ACTIONS(439),
    [anon_sym_RPAREN] = ACTIONS(1232),
    [sym_comment] = ACTIONS(5),
  },
  [466] = {
    [anon_sym_LPAREN] = ACTIONS(1234),
    [anon_sym_COMMA] = ACTIONS(1236),
    [anon_sym_RPAREN] = ACTIONS(1236),
    [sym_comment] = ACTIONS(5),
  },
  [467] = {
    [sym__identifier] = STATE(533),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym__variable_pattern] = ACTIONS(209),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [468] = {
    [sym__layout_semicolon] = ACTIONS(1238),
    [anon_sym_SEMI] = ACTIONS(1240),
    [sym_comment] = ACTIONS(5),
  },
  [469] = {
    [sym__identifier] = STATE(535),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [anon_sym_DOT_DOT] = ACTIONS(1242),
    [sym__variable_pattern] = ACTIONS(209),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [470] = {
    [anon_sym_COMMA] = ACTIONS(1012),
    [anon_sym_RPAREN] = ACTIONS(1244),
    [sym_comment] = ACTIONS(5),
  },
  [471] = {
    [anon_sym_COMMA] = ACTIONS(585),
    [anon_sym_RPAREN] = ACTIONS(585),
    [sym__variable_pattern] = ACTIONS(585),
    [sym__constructor_pattern] = ACTIONS(587),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(587),
    [anon_sym_SQUOTE] = ACTIONS(585),
    [anon_sym_DQUOTE] = ACTIONS(585),
    [sym__integer_literal] = ACTIONS(585),
    [sym__octal_literal] = ACTIONS(585),
    [sym__hexidecimal_literal] = ACTIONS(585),
  },
  [472] = {
    [sym__layout_semicolon] = ACTIONS(1246),
    [anon_sym_SEMI] = ACTIONS(1248),
    [sym_comment] = ACTIONS(5),
  },
  [473] = {
    [anon_sym_COMMA] = ACTIONS(1250),
    [anon_sym_RPAREN] = ACTIONS(1250),
    [sym_comment] = ACTIONS(5),
  },
  [474] = {
    [anon_sym_COMMA] = ACTIONS(1252),
    [anon_sym_RPAREN] = ACTIONS(1252),
    [sym_comment] = ACTIONS(5),
  },
  [475] = {
    [sym__constructor_pattern] = ACTIONS(1254),
    [sym_comment] = ACTIONS(5),
  },
  [476] = {
    [sym__layout_semicolon] = ACTIONS(1256),
    [anon_sym_SEMI] = ACTIONS(1258),
    [sym_comment] = ACTIONS(5),
  },
  [477] = {
    [sym__layout_close_brace] = ACTIONS(1260),
    [anon_sym_infixl] = ACTIONS(1262),
    [anon_sym_infixr] = ACTIONS(1262),
    [anon_sym_infix] = ACTIONS(1262),
    [sym__variable_pattern] = ACTIONS(1264),
    [sym__constructor_pattern] = ACTIONS(1264),
    [sym_comment] = ACTIONS(5),
  },
  [478] = {
    [sym__layout_semicolon] = ACTIONS(1266),
    [anon_sym_SEMI] = ACTIONS(1268),
    [sym_comment] = ACTIONS(5),
  },
  [479] = {
    [sym__layout_semicolon] = ACTIONS(1270),
    [anon_sym_SEMI] = ACTIONS(1272),
    [sym_comment] = ACTIONS(5),
  },
  [480] = {
    [anon_sym_RBRACE] = ACTIONS(1262),
    [anon_sym_infixl] = ACTIONS(1262),
    [anon_sym_infixr] = ACTIONS(1262),
    [anon_sym_infix] = ACTIONS(1262),
    [sym__variable_pattern] = ACTIONS(1264),
    [sym__constructor_pattern] = ACTIONS(1264),
    [sym_comment] = ACTIONS(5),
  },
  [481] = {
    [sym__layout_semicolon] = ACTIONS(1274),
    [anon_sym_SEMI] = ACTIONS(1276),
    [sym_comment] = ACTIONS(5),
  },
  [482] = {
    [sym__layout_semicolon] = ACTIONS(1278),
    [anon_sym_SEMI] = ACTIONS(1280),
    [sym_comment] = ACTIONS(5),
  },
  [483] = {
    [sym__layout_semicolon] = ACTIONS(1282),
    [anon_sym_SEMI] = ACTIONS(1284),
    [sym_comment] = ACTIONS(5),
  },
  [484] = {
    [sym__layout_semicolon] = ACTIONS(1286),
    [anon_sym_SEMI] = ACTIONS(1288),
    [sym_comment] = ACTIONS(5),
  },
  [485] = {
    [anon_sym_COMMA] = ACTIONS(733),
    [anon_sym_RPAREN] = ACTIONS(1290),
    [sym_comment] = ACTIONS(5),
  },
  [486] = {
    [sym__layout_semicolon] = ACTIONS(1292),
    [anon_sym_SEMI] = ACTIONS(1294),
    [anon_sym_PIPE] = ACTIONS(1294),
    [anon_sym_deriving] = ACTIONS(1294),
    [sym_comment] = ACTIONS(5),
  },
  [487] = {
    [sym__layout_semicolon] = ACTIONS(1296),
    [anon_sym_SEMI] = ACTIONS(1298),
    [anon_sym_PIPE] = ACTIONS(1298),
    [anon_sym_deriving] = ACTIONS(1298),
    [sym_comment] = ACTIONS(5),
  },
  [488] = {
    [sym_field] = STATE(540),
    [sym_variable_identifier] = STATE(393),
    [sym__variable_pattern] = ACTIONS(639),
    [sym_comment] = ACTIONS(5),
  },
  [489] = {
    [anon_sym_RBRACE] = ACTIONS(1300),
    [anon_sym_COMMA] = ACTIONS(1302),
    [sym_comment] = ACTIONS(5),
  },
  [490] = {
    [sym_variable_identifier] = STATE(543),
    [sym__variable_pattern] = ACTIONS(639),
    [sym_comment] = ACTIONS(5),
  },
  [491] = {
    [sym_strict] = STATE(545),
    [sym__identifier] = STATE(545),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [anon_sym_BANG] = ACTIONS(1304),
    [sym__variable_pattern] = ACTIONS(209),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [492] = {
    [anon_sym_COMMA] = ACTIONS(1306),
    [anon_sym_COLON_COLON] = ACTIONS(1308),
    [sym_comment] = ACTIONS(5),
  },
  [493] = {
    [sym__layout_semicolon] = ACTIONS(1310),
    [anon_sym_SEMI] = ACTIONS(1312),
    [sym_comment] = ACTIONS(5),
  },
  [494] = {
    [anon_sym_COMMA] = ACTIONS(1314),
    [anon_sym_RPAREN] = ACTIONS(1314),
    [sym_comment] = ACTIONS(5),
  },
  [495] = {
    [anon_sym_LPAREN] = ACTIONS(783),
    [anon_sym__] = ACTIONS(783),
    [sym_list_constructor] = ACTIONS(783),
    [sym__variable_pattern] = ACTIONS(1316),
    [sym__constructor_pattern] = ACTIONS(1316),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1316),
    [anon_sym_SQUOTE] = ACTIONS(783),
    [anon_sym_DQUOTE] = ACTIONS(783),
    [sym__integer_literal] = ACTIONS(783),
    [sym__octal_literal] = ACTIONS(783),
    [sym__hexidecimal_literal] = ACTIONS(783),
  },
  [496] = {
    [anon_sym_LPAREN] = ACTIONS(787),
    [anon_sym_DASH] = ACTIONS(787),
    [anon_sym__] = ACTIONS(787),
    [anon_sym_COLON] = ACTIONS(787),
    [sym_list_constructor] = ACTIONS(787),
    [anon_sym_BANG] = ACTIONS(787),
    [sym__variable_pattern] = ACTIONS(1318),
    [sym__constructor_pattern] = ACTIONS(1318),
    [anon_sym_DOT] = ACTIONS(787),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1318),
    [anon_sym_SQUOTE] = ACTIONS(787),
    [anon_sym_DQUOTE] = ACTIONS(787),
    [anon_sym_POUND] = ACTIONS(787),
    [anon_sym_DOLLAR] = ACTIONS(787),
    [anon_sym_PERCENT] = ACTIONS(787),
    [anon_sym_AMP] = ACTIONS(787),
    [anon_sym_1] = ACTIONS(787),
    [anon_sym_PLUS] = ACTIONS(787),
    [anon_sym_SLASH] = ACTIONS(787),
    [anon_sym_LT] = ACTIONS(787),
    [anon_sym_GT] = ACTIONS(787),
    [anon_sym_QMARK] = ACTIONS(787),
    [anon_sym_CARET] = ACTIONS(787),
    [sym__integer_literal] = ACTIONS(787),
    [sym__octal_literal] = ACTIONS(787),
    [sym__hexidecimal_literal] = ACTIONS(787),
  },
  [497] = {
    [sym__function_pattern] = STATE(318),
    [sym_tuple_pattern] = STATE(88),
    [sym_parenthesized_pattern] = STATE(88),
    [sym_as_pattern] = STATE(88),
    [sym_wildcard] = STATE(88),
    [sym__variable] = STATE(412),
    [sym_qualified_variable_identifier] = STATE(96),
    [sym__literal] = STATE(88),
    [sym__identifier] = STATE(97),
    [sym_simple_type] = STATE(98),
    [sym_variable_identifier] = STATE(99),
    [sym_constructor_identifier] = STATE(413),
    [sym_integer] = STATE(91),
    [sym_char] = STATE(91),
    [sym_string] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym__] = ACTIONS(153),
    [sym_list_constructor] = ACTIONS(155),
    [sym__variable_pattern] = ACTIONS(157),
    [sym__constructor_pattern] = ACTIONS(367),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(161),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [498] = {
    [anon_sym_LPAREN] = ACTIONS(799),
    [anon_sym_DASH] = ACTIONS(799),
    [anon_sym__] = ACTIONS(799),
    [sym_list_constructor] = ACTIONS(799),
    [anon_sym_BANG] = ACTIONS(799),
    [sym__variable_pattern] = ACTIONS(1320),
    [sym__constructor_pattern] = ACTIONS(1320),
    [anon_sym_DOT] = ACTIONS(799),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1320),
    [anon_sym_SQUOTE] = ACTIONS(799),
    [anon_sym_DQUOTE] = ACTIONS(799),
    [anon_sym_POUND] = ACTIONS(799),
    [anon_sym_DOLLAR] = ACTIONS(799),
    [anon_sym_PERCENT] = ACTIONS(799),
    [anon_sym_AMP] = ACTIONS(799),
    [anon_sym_1] = ACTIONS(799),
    [anon_sym_PLUS] = ACTIONS(799),
    [anon_sym_SLASH] = ACTIONS(799),
    [anon_sym_LT] = ACTIONS(799),
    [anon_sym_GT] = ACTIONS(799),
    [anon_sym_QMARK] = ACTIONS(799),
    [anon_sym_CARET] = ACTIONS(799),
    [sym__integer_literal] = ACTIONS(799),
    [sym__octal_literal] = ACTIONS(799),
    [sym__hexidecimal_literal] = ACTIONS(799),
  },
  [499] = {
    [sym__op] = STATE(305),
    [sym_variable_symbol] = STATE(306),
    [sym_constructor_symbol] = STATE(306),
    [sym__variable_symbol] = STATE(307),
    [anon_sym_COMMA] = ACTIONS(1322),
    [anon_sym_RPAREN] = ACTIONS(1322),
    [anon_sym_DASH] = ACTIONS(605),
    [anon_sym_BQUOTE] = ACTIONS(607),
    [anon_sym_COLON] = ACTIONS(609),
    [anon_sym_BANG] = ACTIONS(605),
    [anon_sym_DOT] = ACTIONS(605),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(605),
    [anon_sym_DOLLAR] = ACTIONS(605),
    [anon_sym_PERCENT] = ACTIONS(605),
    [anon_sym_AMP] = ACTIONS(605),
    [anon_sym_1] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(605),
    [anon_sym_SLASH] = ACTIONS(605),
    [anon_sym_LT] = ACTIONS(605),
    [anon_sym_GT] = ACTIONS(605),
    [anon_sym_QMARK] = ACTIONS(605),
    [anon_sym_CARET] = ACTIONS(605),
  },
  [500] = {
    [anon_sym_COMMA] = ACTIONS(1322),
    [anon_sym_RPAREN] = ACTIONS(1322),
    [sym_comment] = ACTIONS(5),
  },
  [501] = {
    [anon_sym_COMMA] = ACTIONS(553),
    [anon_sym_RPAREN] = ACTIONS(553),
    [sym__variable_pattern] = ACTIONS(553),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(555),
    [anon_sym_SQUOTE] = ACTIONS(553),
    [anon_sym_DQUOTE] = ACTIONS(553),
    [sym__integer_literal] = ACTIONS(553),
    [sym__octal_literal] = ACTIONS(553),
    [sym__hexidecimal_literal] = ACTIONS(553),
  },
  [502] = {
    [anon_sym_RBRACE] = ACTIONS(1324),
    [anon_sym_COMMA] = ACTIONS(1324),
    [sym_comment] = ACTIONS(5),
  },
  [503] = {
    [sym_label] = STATE(548),
    [sym__identifier] = STATE(322),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym__variable_pattern] = ACTIONS(209),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [504] = {
    [anon_sym_RBRACE] = ACTIONS(1326),
    [anon_sym_COMMA] = ACTIONS(1326),
    [sym_comment] = ACTIONS(5),
  },
  [505] = {
    [anon_sym_LPAREN] = ACTIONS(1160),
    [anon_sym_COMMA] = ACTIONS(1160),
    [anon_sym_RPAREN] = ACTIONS(1160),
    [anon_sym_DASH_GT] = ACTIONS(1160),
    [sym_unit_type] = ACTIONS(1160),
    [sym_list_constructor] = ACTIONS(1160),
    [sym_function_constructor] = ACTIONS(1160),
    [anon_sym_LBRACK] = ACTIONS(1160),
    [anon_sym_RBRACK] = ACTIONS(1160),
    [sym__variable_pattern] = ACTIONS(1160),
    [sym__constructor_pattern] = ACTIONS(1328),
    [sym_module_identifier] = ACTIONS(1328),
    [sym_comment] = ACTIONS(5),
  },
  [506] = {
    [anon_sym_COMMA] = ACTIONS(1162),
    [anon_sym_RPAREN] = ACTIONS(1330),
    [sym_comment] = ACTIONS(5),
  },
  [507] = {
    [anon_sym_LPAREN] = ACTIONS(1177),
    [anon_sym_COMMA] = ACTIONS(1177),
    [anon_sym_RPAREN] = ACTIONS(1177),
    [anon_sym_DASH_GT] = ACTIONS(1177),
    [sym_unit_type] = ACTIONS(1177),
    [sym_list_constructor] = ACTIONS(1177),
    [sym_function_constructor] = ACTIONS(1177),
    [anon_sym_LBRACK] = ACTIONS(1177),
    [anon_sym_RBRACK] = ACTIONS(1177),
    [sym__variable_pattern] = ACTIONS(1177),
    [sym__constructor_pattern] = ACTIONS(1332),
    [sym_module_identifier] = ACTIONS(1332),
    [sym_comment] = ACTIONS(5),
  },
  [508] = {
    [anon_sym_COMMA] = ACTIONS(1180),
    [anon_sym_RPAREN] = ACTIONS(1335),
    [sym_comment] = ACTIONS(5),
  },
  [509] = {
    [anon_sym_COMMA] = ACTIONS(1337),
    [anon_sym_RPAREN] = ACTIONS(1337),
    [sym_comment] = ACTIONS(5),
  },
  [510] = {
    [sym__layout_semicolon] = ACTIONS(1339),
    [anon_sym_SEMI] = ACTIONS(1341),
    [anon_sym_DASH_GT] = ACTIONS(1341),
    [sym_comment] = ACTIONS(5),
  },
  [511] = {
    [anon_sym_LPAREN] = ACTIONS(1192),
    [anon_sym_COMMA] = ACTIONS(1192),
    [anon_sym_RPAREN] = ACTIONS(1192),
    [anon_sym_DASH_GT] = ACTIONS(1192),
    [sym_unit_type] = ACTIONS(1192),
    [sym_list_constructor] = ACTIONS(1192),
    [sym_function_constructor] = ACTIONS(1192),
    [anon_sym_LBRACK] = ACTIONS(1192),
    [anon_sym_RBRACK] = ACTIONS(1192),
    [sym__variable_pattern] = ACTIONS(1192),
    [sym__constructor_pattern] = ACTIONS(1343),
    [sym_module_identifier] = ACTIONS(1343),
    [sym_comment] = ACTIONS(5),
  },
  [512] = {
    [sym_variable_identifier] = STATE(164),
    [aux_sym_type_class_repeat1] = STATE(551),
    [anon_sym_LPAREN] = ACTIONS(1204),
    [anon_sym_COMMA] = ACTIONS(1204),
    [anon_sym_RPAREN] = ACTIONS(1204),
    [anon_sym_DASH_GT] = ACTIONS(1204),
    [sym_unit_type] = ACTIONS(1204),
    [sym_list_constructor] = ACTIONS(1204),
    [sym_function_constructor] = ACTIONS(1204),
    [anon_sym_LBRACK] = ACTIONS(1204),
    [anon_sym_RBRACK] = ACTIONS(1204),
    [sym__variable_pattern] = ACTIONS(275),
    [sym__constructor_pattern] = ACTIONS(1345),
    [sym_module_identifier] = ACTIONS(1345),
    [sym_comment] = ACTIONS(5),
  },
  [513] = {
    [sym_variable_identifier] = STATE(280),
    [anon_sym_LPAREN] = ACTIONS(1204),
    [anon_sym_COMMA] = ACTIONS(1204),
    [anon_sym_RPAREN] = ACTIONS(1204),
    [anon_sym_DASH_GT] = ACTIONS(1204),
    [sym_unit_type] = ACTIONS(1204),
    [sym_list_constructor] = ACTIONS(1204),
    [sym_function_constructor] = ACTIONS(1204),
    [anon_sym_LBRACK] = ACTIONS(1204),
    [anon_sym_RBRACK] = ACTIONS(1204),
    [sym__variable_pattern] = ACTIONS(275),
    [sym__constructor_pattern] = ACTIONS(1345),
    [sym_module_identifier] = ACTIONS(1345),
    [sym_comment] = ACTIONS(5),
  },
  [514] = {
    [sym_constructor_identifier] = STATE(552),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_module_identifier] = ACTIONS(1206),
    [sym_comment] = ACTIONS(5),
  },
  [515] = {
    [anon_sym_COMMA] = ACTIONS(1347),
    [anon_sym_RPAREN] = ACTIONS(1347),
    [sym_comment] = ACTIONS(5),
  },
  [516] = {
    [sym_type] = STATE(553),
    [sym__generic_type_constructor] = STATE(330),
    [sym_tupling_constructor] = STATE(325),
    [sym_tuple] = STATE(330),
    [sym_list] = STATE(330),
    [sym_parenthesized_constructor] = STATE(330),
    [sym_variable_identifier] = STATE(332),
    [sym__type_constructors] = STATE(325),
    [sym_qualified_type_constructor] = STATE(333),
    [anon_sym_LPAREN] = ACTIONS(631),
    [sym_unit_type] = ACTIONS(635),
    [sym_list_constructor] = ACTIONS(635),
    [sym_function_constructor] = ACTIONS(635),
    [anon_sym_LBRACK] = ACTIONS(637),
    [sym__variable_pattern] = ACTIONS(639),
    [sym__constructor_pattern] = ACTIONS(649),
    [sym_module_identifier] = ACTIONS(643),
    [sym_comment] = ACTIONS(5),
  },
  [517] = {
    [sym__layout_semicolon] = ACTIONS(1349),
    [anon_sym_SEMI] = ACTIONS(1351),
    [anon_sym_DASH_GT] = ACTIONS(1351),
    [sym_comment] = ACTIONS(5),
  },
  [518] = {
    [anon_sym_LPAREN] = ACTIONS(1210),
    [anon_sym_COMMA] = ACTIONS(1210),
    [anon_sym_RPAREN] = ACTIONS(1210),
    [sym_unit_type] = ACTIONS(1210),
    [sym_list_constructor] = ACTIONS(1210),
    [sym_function_constructor] = ACTIONS(1210),
    [anon_sym_LBRACK] = ACTIONS(1210),
    [anon_sym_RBRACK] = ACTIONS(1210),
    [sym__variable_pattern] = ACTIONS(1210),
    [sym__constructor_pattern] = ACTIONS(1353),
    [sym_module_identifier] = ACTIONS(1353),
    [sym_comment] = ACTIONS(5),
  },
  [519] = {
    [anon_sym_LPAREN] = ACTIONS(1355),
    [sym_unit_type] = ACTIONS(1355),
    [sym_list_constructor] = ACTIONS(1355),
    [sym_function_constructor] = ACTIONS(1355),
    [anon_sym_LBRACK] = ACTIONS(1355),
    [sym__variable_pattern] = ACTIONS(1355),
    [sym__constructor_pattern] = ACTIONS(1032),
    [sym_module_identifier] = ACTIONS(1032),
    [sym_comment] = ACTIONS(5),
  },
  [520] = {
    [anon_sym_EQ_GT] = ACTIONS(1357),
    [sym_comment] = ACTIONS(5),
  },
  [521] = {
    [anon_sym_LPAREN] = ACTIONS(1214),
    [anon_sym_COMMA] = ACTIONS(1214),
    [anon_sym_RPAREN] = ACTIONS(1214),
    [sym_unit_type] = ACTIONS(1214),
    [sym_list_constructor] = ACTIONS(1214),
    [sym_function_constructor] = ACTIONS(1214),
    [anon_sym_LBRACK] = ACTIONS(1214),
    [anon_sym_RBRACK] = ACTIONS(1214),
    [sym__variable_pattern] = ACTIONS(1214),
    [sym__constructor_pattern] = ACTIONS(1359),
    [sym_module_identifier] = ACTIONS(1359),
    [sym_comment] = ACTIONS(5),
  },
  [522] = {
    [sym_constructor_identifier] = STATE(552),
    [sym__constructor_pattern] = ACTIONS(946),
    [sym_module_identifier] = ACTIONS(1206),
    [sym_comment] = ACTIONS(5),
  },
  [523] = {
    [sym_variable_identifier] = STATE(448),
    [sym__layout_semicolon] = ACTIONS(1361),
    [anon_sym_SEMI] = ACTIONS(1363),
    [anon_sym_DASH_GT] = ACTIONS(1363),
    [sym__variable_pattern] = ACTIONS(357),
    [sym_comment] = ACTIONS(5),
  },
  [524] = {
    [sym__constructor_pattern] = ACTIONS(1365),
    [anon_sym_DOT] = ACTIONS(1367),
    [sym_comment] = ACTIONS(5),
  },
  [525] = {
    [sym_variable_identifier] = STATE(340),
    [aux_sym_type_class_repeat1] = STATE(555),
    [sym__layout_semicolon] = ACTIONS(1361),
    [anon_sym_SEMI] = ACTIONS(1363),
    [anon_sym_DASH_GT] = ACTIONS(1363),
    [sym__variable_pattern] = ACTIONS(357),
    [sym_comment] = ACTIONS(5),
  },
  [526] = {
    [sym__layout_close_brace] = ACTIONS(681),
    [anon_sym_import] = ACTIONS(683),
    [anon_sym_foreign] = ACTIONS(683),
    [anon_sym_default] = ACTIONS(683),
    [anon_sym_do] = ACTIONS(683),
    [anon_sym_class] = ACTIONS(683),
    [anon_sym_instance] = ACTIONS(683),
    [anon_sym_infixl] = ACTIONS(683),
    [anon_sym_infixr] = ACTIONS(683),
    [anon_sym_infix] = ACTIONS(683),
    [anon_sym_data] = ACTIONS(683),
    [anon_sym_newtype] = ACTIONS(683),
    [anon_sym_type] = ACTIONS(683),
    [sym__variable_pattern] = ACTIONS(685),
    [sym__constructor_pattern] = ACTIONS(685),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(685),
    [anon_sym_SQUOTE] = ACTIONS(683),
    [anon_sym_DQUOTE] = ACTIONS(683),
    [sym__integer_literal] = ACTIONS(683),
    [sym__octal_literal] = ACTIONS(683),
    [sym__hexidecimal_literal] = ACTIONS(683),
  },
  [527] = {
    [anon_sym_COMMA] = ACTIONS(1369),
    [anon_sym_RPAREN] = ACTIONS(1369),
    [sym_comment] = ACTIONS(5),
  },
  [528] = {
    [anon_sym_COMMA] = ACTIONS(1371),
    [anon_sym_RPAREN] = ACTIONS(1371),
    [sym_comment] = ACTIONS(5),
  },
  [529] = {
    [anon_sym_COMMA] = ACTIONS(733),
    [anon_sym_RPAREN] = ACTIONS(1373),
    [sym_comment] = ACTIONS(5),
  },
  [530] = {
    [aux_sym_import_specification_repeat1] = STATE(558),
    [anon_sym_COMMA] = ACTIONS(715),
    [anon_sym_RPAREN] = ACTIONS(1375),
    [sym_comment] = ACTIONS(5),
  },
  [531] = {
    [anon_sym_COMMA] = ACTIONS(733),
    [anon_sym_RPAREN] = ACTIONS(1377),
    [sym_comment] = ACTIONS(5),
  },
  [532] = {
    [sym__identifier] = STATE(561),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [anon_sym_DOT_DOT] = ACTIONS(1379),
    [sym__variable_pattern] = ACTIONS(209),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [533] = {
    [anon_sym_LPAREN] = ACTIONS(1381),
    [anon_sym_COMMA] = ACTIONS(1383),
    [anon_sym_RPAREN] = ACTIONS(1383),
    [sym_comment] = ACTIONS(5),
  },
  [534] = {
    [anon_sym_RPAREN] = ACTIONS(1377),
    [sym_comment] = ACTIONS(5),
  },
  [535] = {
    [aux_sym_export_repeat1] = STATE(563),
    [anon_sym_COMMA] = ACTIONS(439),
    [anon_sym_RPAREN] = ACTIONS(1377),
    [sym_comment] = ACTIONS(5),
  },
  [536] = {
    [sym__layout_semicolon] = ACTIONS(1385),
    [anon_sym_SEMI] = ACTIONS(1387),
    [sym_comment] = ACTIONS(5),
  },
  [537] = {
    [sym__layout_close_brace] = ACTIONS(1389),
    [anon_sym_infixl] = ACTIONS(1391),
    [anon_sym_infixr] = ACTIONS(1391),
    [anon_sym_infix] = ACTIONS(1391),
    [sym__variable_pattern] = ACTIONS(1393),
    [sym__constructor_pattern] = ACTIONS(1393),
    [sym_comment] = ACTIONS(5),
  },
  [538] = {
    [anon_sym_RBRACE] = ACTIONS(1391),
    [anon_sym_infixl] = ACTIONS(1391),
    [anon_sym_infixr] = ACTIONS(1391),
    [anon_sym_infix] = ACTIONS(1391),
    [sym__variable_pattern] = ACTIONS(1393),
    [sym__constructor_pattern] = ACTIONS(1393),
    [sym_comment] = ACTIONS(5),
  },
  [539] = {
    [sym__layout_semicolon] = ACTIONS(1395),
    [anon_sym_SEMI] = ACTIONS(1397),
    [sym_comment] = ACTIONS(5),
  },
  [540] = {
    [anon_sym_RBRACE] = ACTIONS(1399),
    [anon_sym_COMMA] = ACTIONS(1399),
    [sym_comment] = ACTIONS(5),
  },
  [541] = {
    [sym__layout_semicolon] = ACTIONS(1401),
    [anon_sym_SEMI] = ACTIONS(1403),
    [anon_sym_PIPE] = ACTIONS(1403),
    [anon_sym_deriving] = ACTIONS(1403),
    [sym_comment] = ACTIONS(5),
  },
  [542] = {
    [sym_field] = STATE(564),
    [sym_variable_identifier] = STATE(393),
    [sym__variable_pattern] = ACTIONS(639),
    [sym_comment] = ACTIONS(5),
  },
  [543] = {
    [anon_sym_COMMA] = ACTIONS(1405),
    [anon_sym_COLON_COLON] = ACTIONS(1405),
    [sym_comment] = ACTIONS(5),
  },
  [544] = {
    [sym__identifier] = STATE(565),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym__variable_pattern] = ACTIONS(209),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [545] = {
    [anon_sym_RBRACE] = ACTIONS(1407),
    [anon_sym_COMMA] = ACTIONS(1407),
    [sym_comment] = ACTIONS(5),
  },
  [546] = {
    [sym_variable_identifier] = STATE(566),
    [sym__variable_pattern] = ACTIONS(639),
    [sym_comment] = ACTIONS(5),
  },
  [547] = {
    [sym_strict] = STATE(567),
    [sym__identifier] = STATE(567),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [anon_sym_BANG] = ACTIONS(1304),
    [sym__variable_pattern] = ACTIONS(209),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [548] = {
    [anon_sym_RBRACE] = ACTIONS(1409),
    [anon_sym_COMMA] = ACTIONS(1409),
    [sym_comment] = ACTIONS(5),
  },
  [549] = {
    [anon_sym_LPAREN] = ACTIONS(1341),
    [anon_sym_COMMA] = ACTIONS(1341),
    [anon_sym_RPAREN] = ACTIONS(1341),
    [anon_sym_DASH_GT] = ACTIONS(1341),
    [sym_unit_type] = ACTIONS(1341),
    [sym_list_constructor] = ACTIONS(1341),
    [sym_function_constructor] = ACTIONS(1341),
    [anon_sym_LBRACK] = ACTIONS(1341),
    [anon_sym_RBRACK] = ACTIONS(1341),
    [sym__variable_pattern] = ACTIONS(1341),
    [sym__constructor_pattern] = ACTIONS(1411),
    [sym_module_identifier] = ACTIONS(1411),
    [sym_comment] = ACTIONS(5),
  },
  [550] = {
    [anon_sym_LPAREN] = ACTIONS(1351),
    [anon_sym_COMMA] = ACTIONS(1351),
    [anon_sym_RPAREN] = ACTIONS(1351),
    [anon_sym_DASH_GT] = ACTIONS(1351),
    [sym_unit_type] = ACTIONS(1351),
    [sym_list_constructor] = ACTIONS(1351),
    [sym_function_constructor] = ACTIONS(1351),
    [anon_sym_LBRACK] = ACTIONS(1351),
    [anon_sym_RBRACK] = ACTIONS(1351),
    [sym__variable_pattern] = ACTIONS(1351),
    [sym__constructor_pattern] = ACTIONS(1413),
    [sym_module_identifier] = ACTIONS(1413),
    [sym_comment] = ACTIONS(5),
  },
  [551] = {
    [sym_variable_identifier] = STATE(280),
    [anon_sym_LPAREN] = ACTIONS(1363),
    [anon_sym_COMMA] = ACTIONS(1363),
    [anon_sym_RPAREN] = ACTIONS(1363),
    [anon_sym_DASH_GT] = ACTIONS(1363),
    [sym_unit_type] = ACTIONS(1363),
    [sym_list_constructor] = ACTIONS(1363),
    [sym_function_constructor] = ACTIONS(1363),
    [anon_sym_LBRACK] = ACTIONS(1363),
    [anon_sym_RBRACK] = ACTIONS(1363),
    [sym__variable_pattern] = ACTIONS(275),
    [sym__constructor_pattern] = ACTIONS(1415),
    [sym_module_identifier] = ACTIONS(1415),
    [sym_comment] = ACTIONS(5),
  },
  [552] = {
    [sym_variable_identifier] = STATE(164),
    [aux_sym_type_class_repeat1] = STATE(568),
    [anon_sym_LPAREN] = ACTIONS(1363),
    [anon_sym_COMMA] = ACTIONS(1363),
    [anon_sym_RPAREN] = ACTIONS(1363),
    [anon_sym_DASH_GT] = ACTIONS(1363),
    [sym_unit_type] = ACTIONS(1363),
    [sym_list_constructor] = ACTIONS(1363),
    [sym_function_constructor] = ACTIONS(1363),
    [anon_sym_LBRACK] = ACTIONS(1363),
    [anon_sym_RBRACK] = ACTIONS(1363),
    [sym__variable_pattern] = ACTIONS(275),
    [sym__constructor_pattern] = ACTIONS(1415),
    [sym_module_identifier] = ACTIONS(1415),
    [sym_comment] = ACTIONS(5),
  },
  [553] = {
    [anon_sym_COMMA] = ACTIONS(1417),
    [anon_sym_RPAREN] = ACTIONS(1417),
    [sym_comment] = ACTIONS(5),
  },
  [554] = {
    [anon_sym_LPAREN] = ACTIONS(1419),
    [sym_unit_type] = ACTIONS(1419),
    [sym_list_constructor] = ACTIONS(1419),
    [sym_function_constructor] = ACTIONS(1419),
    [anon_sym_LBRACK] = ACTIONS(1419),
    [sym__variable_pattern] = ACTIONS(1419),
    [sym__constructor_pattern] = ACTIONS(1254),
    [sym_module_identifier] = ACTIONS(1254),
    [sym_comment] = ACTIONS(5),
  },
  [555] = {
    [sym_variable_identifier] = STATE(448),
    [sym__layout_semicolon] = ACTIONS(1421),
    [anon_sym_SEMI] = ACTIONS(1423),
    [anon_sym_DASH_GT] = ACTIONS(1423),
    [sym__variable_pattern] = ACTIONS(357),
    [sym_comment] = ACTIONS(5),
  },
  [556] = {
    [anon_sym_COMMA] = ACTIONS(1425),
    [anon_sym_RPAREN] = ACTIONS(1425),
    [sym_comment] = ACTIONS(5),
  },
  [557] = {
    [sym__layout_semicolon] = ACTIONS(1427),
    [anon_sym_SEMI] = ACTIONS(1429),
    [sym_comment] = ACTIONS(5),
  },
  [558] = {
    [anon_sym_COMMA] = ACTIONS(1012),
    [anon_sym_RPAREN] = ACTIONS(1431),
    [sym_comment] = ACTIONS(5),
  },
  [559] = {
    [aux_sym_import_specification_repeat1] = STATE(570),
    [anon_sym_COMMA] = ACTIONS(715),
    [anon_sym_RPAREN] = ACTIONS(1431),
    [sym_comment] = ACTIONS(5),
  },
  [560] = {
    [anon_sym_RPAREN] = ACTIONS(1433),
    [sym_comment] = ACTIONS(5),
  },
  [561] = {
    [aux_sym_export_repeat1] = STATE(572),
    [anon_sym_COMMA] = ACTIONS(439),
    [anon_sym_RPAREN] = ACTIONS(1433),
    [sym_comment] = ACTIONS(5),
  },
  [562] = {
    [sym__identifier] = STATE(574),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [anon_sym_DOT_DOT] = ACTIONS(1435),
    [sym__variable_pattern] = ACTIONS(209),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [563] = {
    [anon_sym_COMMA] = ACTIONS(733),
    [anon_sym_RPAREN] = ACTIONS(1437),
    [sym_comment] = ACTIONS(5),
  },
  [564] = {
    [anon_sym_RBRACE] = ACTIONS(1439),
    [anon_sym_COMMA] = ACTIONS(1439),
    [sym_comment] = ACTIONS(5),
  },
  [565] = {
    [anon_sym_RBRACE] = ACTIONS(1086),
    [anon_sym_COMMA] = ACTIONS(1086),
    [sym_comment] = ACTIONS(5),
  },
  [566] = {
    [anon_sym_COMMA] = ACTIONS(1441),
    [anon_sym_COLON_COLON] = ACTIONS(1441),
    [sym_comment] = ACTIONS(5),
  },
  [567] = {
    [anon_sym_RBRACE] = ACTIONS(1443),
    [anon_sym_COMMA] = ACTIONS(1443),
    [sym_comment] = ACTIONS(5),
  },
  [568] = {
    [sym_variable_identifier] = STATE(280),
    [anon_sym_LPAREN] = ACTIONS(1423),
    [anon_sym_COMMA] = ACTIONS(1423),
    [anon_sym_RPAREN] = ACTIONS(1423),
    [anon_sym_DASH_GT] = ACTIONS(1423),
    [sym_unit_type] = ACTIONS(1423),
    [sym_list_constructor] = ACTIONS(1423),
    [sym_function_constructor] = ACTIONS(1423),
    [anon_sym_LBRACK] = ACTIONS(1423),
    [anon_sym_RBRACK] = ACTIONS(1423),
    [sym__variable_pattern] = ACTIONS(275),
    [sym__constructor_pattern] = ACTIONS(1445),
    [sym_module_identifier] = ACTIONS(1445),
    [sym_comment] = ACTIONS(5),
  },
  [569] = {
    [sym__layout_semicolon] = ACTIONS(1447),
    [anon_sym_SEMI] = ACTIONS(1449),
    [sym_comment] = ACTIONS(5),
  },
  [570] = {
    [anon_sym_COMMA] = ACTIONS(1012),
    [anon_sym_RPAREN] = ACTIONS(1451),
    [sym_comment] = ACTIONS(5),
  },
  [571] = {
    [anon_sym_COMMA] = ACTIONS(1453),
    [anon_sym_RPAREN] = ACTIONS(1453),
    [sym_comment] = ACTIONS(5),
  },
  [572] = {
    [anon_sym_COMMA] = ACTIONS(733),
    [anon_sym_RPAREN] = ACTIONS(1455),
    [sym_comment] = ACTIONS(5),
  },
  [573] = {
    [anon_sym_RPAREN] = ACTIONS(1455),
    [sym_comment] = ACTIONS(5),
  },
  [574] = {
    [aux_sym_export_repeat1] = STATE(578),
    [anon_sym_COMMA] = ACTIONS(439),
    [anon_sym_RPAREN] = ACTIONS(1455),
    [sym_comment] = ACTIONS(5),
  },
  [575] = {
    [aux_sym_import_specification_repeat1] = STATE(579),
    [anon_sym_COMMA] = ACTIONS(715),
    [anon_sym_RPAREN] = ACTIONS(1451),
    [sym_comment] = ACTIONS(5),
  },
  [576] = {
    [sym__layout_semicolon] = ACTIONS(1457),
    [anon_sym_SEMI] = ACTIONS(1459),
    [sym_comment] = ACTIONS(5),
  },
  [577] = {
    [anon_sym_COMMA] = ACTIONS(1461),
    [anon_sym_RPAREN] = ACTIONS(1461),
    [sym_comment] = ACTIONS(5),
  },
  [578] = {
    [anon_sym_COMMA] = ACTIONS(733),
    [anon_sym_RPAREN] = ACTIONS(1463),
    [sym_comment] = ACTIONS(5),
  },
  [579] = {
    [anon_sym_COMMA] = ACTIONS(1012),
    [anon_sym_RPAREN] = ACTIONS(1465),
    [sym_comment] = ACTIONS(5),
  },
  [580] = {
    [anon_sym_COMMA] = ACTIONS(1467),
    [anon_sym_RPAREN] = ACTIONS(1467),
    [sym_comment] = ACTIONS(5),
  },
  [581] = {
    [sym__layout_semicolon] = ACTIONS(1469),
    [anon_sym_SEMI] = ACTIONS(1471),
    [sym_comment] = ACTIONS(5),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [7] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 0),
  [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
  [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
  [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
  [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [33] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [35] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(14),
  [37] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(15),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
  [41] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(17),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
  [45] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(33),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
  [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(35),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(36),
  [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(38),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
  [63] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(47),
  [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
  [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(50),
  [73] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(55),
  [75] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_identifier, 1),
  [79] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_identifier, 1),
  [81] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_identifier, 1),
  [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_identifier, 1),
  [85] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_identifier, 1),
  [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
  [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [91] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [93] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [95] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(66),
  [97] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [99] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [101] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [103] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [105] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [107] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [109] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [111] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(73),
  [113] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(74),
  [115] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [117] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(76),
  [119] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(77),
  [121] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(78),
  [123] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(79),
  [125] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(80),
  [127] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(81),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declaration, 1),
  [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
  [143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
  [145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(84),
  [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
  [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(87),
  [155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
  [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(89),
  [159] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(90),
  [161] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(91),
  [163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(92),
  [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
  [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__variable, 1, .fragile = true),
  [169] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__variable, 1, .fragile = true),
  [171] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__variable, 1, .fragile = true),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__general_declaration, 1),
  [175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__general_declaration, 1),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(102),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [183] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(107),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 2),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(109),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign_import, 1),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(112),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(114),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
  [213] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(118),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(117),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do_expression, 2),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do_expression, 2),
  [221] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_identifier, 1),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(128),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(129),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
  [229] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(131),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(135),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__variable_symbol, 1),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__variable_symbol, 1),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 1),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(138),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 2),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 2),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(141),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 1),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 1),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 2),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(148),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(149),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [269] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(154),
  [271] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(158),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(159),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(162),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(163),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_variable_identifier, 2),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_variable_identifier, 2),
  [285] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_variable_identifier, 2),
  [287] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__special, 1),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__symbol, 1),
  [291] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__small, 1),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(165),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__graphic, 1),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__large, 1),
  [299] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(166),
  [301] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(167),
  [303] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(168),
  [305] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(169),
  [307] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(170),
  [309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(171),
  [311] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [313] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [315] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [317] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [321] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [323] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [325] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [327] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [329] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(172),
  [331] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(173),
  [333] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(174),
  [335] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(175),
  [337] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(176),
  [339] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(177),
  [341] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [343] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(178),
  [345] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(179),
  [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [349] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
  [351] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_body, 1),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_body, 1),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(180),
  [359] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(181),
  [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_declaration, 2),
  [363] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_declaration, 2),
  [365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(185),
  [367] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(186),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_wildcard, 1),
  [371] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_wildcard, 1),
  [373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__function_pattern, 1),
  [375] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__function_pattern, 1),
  [377] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(193),
  [379] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(194),
  [381] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_head_repeat1, 1),
  [383] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_head_repeat1, 1),
  [385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(196),
  [387] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(197),
  [389] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_head, 2),
  [391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(201),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(202),
  [397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(13),
  [399] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(203),
  [401] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(204),
  [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
  [405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(212),
  [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(213),
  [409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(214),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(216),
  [413] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(219),
  [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [417] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 3),
  [419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
  [421] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(222),
  [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(225),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_calling_convention, 1),
  [429] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_calling_convention, 1),
  [431] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(226),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
  [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 3),
  [437] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 3),
  [439] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(232),
  [441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 2),
  [445] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 2),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(235),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(235),
  [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [453] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [455] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(236),
  [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
  [461] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(238),
  [463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(236),
  [465] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(240),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(241),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(244),
  [471] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 2),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(248),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 1, .fragile = true),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 2),
  [481] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1, .fragile = true),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(252),
  [485] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(255),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__constructor_symbol, 1),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__constructor_symbol, 1),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 1),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_symbol_repeat1, 1),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 2),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 3),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 3),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(258),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2),
  [511] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 2),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 3),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(261),
  [519] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(264),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(266),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 1),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(268),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 1),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(270),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(271),
  [537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1, .fragile = true),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [543] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [545] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(277),
  [547] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(281),
  [549] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(282),
  [551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [553] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [555] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__char_escape, 1),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 2),
  [561] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(284),
  [563] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(286),
  [565] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(288),
  [567] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 1),
  [569] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [571] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [573] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(290),
  [575] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(292),
  [577] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(294),
  [579] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [581] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [585] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [587] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [589] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 1),
  [591] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_body_repeat1, 1),
  [593] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 1),
  [595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_body, 2),
  [597] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_body, 2),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(299),
  [601] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(300),
  [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(301),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(302),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(303),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(304),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 1),
  [613] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(309),
  [615] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(310),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(311),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(312),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(316),
  [623] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(317),
  [625] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(319),
  [627] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_head_repeat1, 2),
  [629] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_head_repeat1, 2),
  [631] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(323),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(324),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(325),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(326),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(131),
  [641] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(327),
  [643] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(328),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__generic_type_constructor, 1),
  [647] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__generic_type_constructor, 1),
  [649] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(334),
  [651] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(335),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [655] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(342),
  [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 3),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 3),
  [663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 1),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 1),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(345),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(347),
  [671] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [673] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [675] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(348),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [679] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [683] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 3),
  [685] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(349),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(349),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 2),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(353),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(354),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(356),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 1),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(358),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 4),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [713] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(359),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(360),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(361),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_safety, 1),
  [721] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_safety, 1),
  [723] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(365),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 4),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 4),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 4),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 4),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(370),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(371),
  [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
  [741] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 3),
  [745] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 3),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [751] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(373),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(374),
  [757] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(375),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(377),
  [761] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(378),
  [763] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(378),
  [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 4),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 4),
  [769] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(383),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 2),
  [773] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(385),
  [777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 4),
  [779] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 4),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 3),
  [785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 2),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_symbol_repeat1, 2),
  [789] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 2),
  [791] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 2),
  [793] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 4),
  [795] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 4),
  [797] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [799] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [801] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [803] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4),
  [805] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [807] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 2),
  [809] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [811] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [813] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(391),
  [815] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
  [817] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [819] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1),
  [821] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [825] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 2),
  [827] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [831] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [833] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [835] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4),
  [837] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [839] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [841] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [843] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [845] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(399),
  [847] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [849] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(400),
  [851] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [853] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [855] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [857] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [859] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(401),
  [861] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [863] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(402),
  [865] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_constructor_repeat1, 1, .fragile = true),
  [867] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_constructor_repeat1, 1, .fragile = true),
  [869] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_constructor_repeat1, 1, .fragile = true),
  [871] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_constructor, 2),
  [873] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_constructor, 2),
  [875] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_general_constructor, 2),
  [877] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 2),
  [879] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_body_repeat1, 2),
  [881] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 2),
  [883] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_pattern, 3),
  [885] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_pattern, 3),
  [887] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__variable_symbol, 1),
  [889] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(408),
  [891] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [893] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [895] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1),
  [897] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(416),
  [899] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(417),
  [901] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(418),
  [903] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_constructor_repeat1, 1, .fragile = true), REDUCE(aux_sym_type_class_repeat1, 1, .fragile = true),
  [906] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_as_pattern, 3),
  [908] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_as_pattern, 3),
  [910] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__function_pattern, 3),
  [912] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__function_pattern, 3),
  [914] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(420),
  [916] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_labels, 1),
  [918] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(421),
  [920] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(423),
  [922] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(424),
  [924] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(426),
  [926] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(427),
  [928] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__generic_type_constructor, 1),
  [930] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(431),
  [932] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(434),
  [934] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(435),
  [936] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(437),
  [938] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(438),
  [940] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(440),
  [942] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [944] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [946] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(441),
  [948] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(442),
  [950] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_list_repeat1, 1),
  [952] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 1),
  [954] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(444),
  [956] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 1),
  [958] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(445),
  [960] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [962] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(446),
  [964] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [966] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [968] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(449),
  [970] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [972] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [974] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(452),
  [976] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 4),
  [978] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 4),
  [980] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 2),
  [982] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 2),
  [984] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(455),
  [986] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(455),
  [988] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(456),
  [990] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(456),
  [992] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [994] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(459),
  [996] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(460),
  [998] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(461),
  [1000] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5),
  [1002] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [1004] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 5),
  [1006] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(464),
  [1008] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [1010] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [1012] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(467),
  [1014] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(468),
  [1016] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(469),
  [1018] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(471),
  [1020] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 5),
  [1022] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 5),
  [1024] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 2),
  [1026] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 5),
  [1028] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 5),
  [1030] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 2),
  [1032] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 4),
  [1034] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(475),
  [1036] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 5),
  [1038] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 5),
  [1040] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_declarations, 2),
  [1042] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_declarations, 2),
  [1044] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(477),
  [1046] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(477),
  [1048] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(478),
  [1050] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(480),
  [1052] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(480),
  [1054] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(478),
  [1056] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 4),
  [1058] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 5),
  [1060] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 5),
  [1062] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 3),
  [1064] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 3),
  [1066] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [1068] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 5),
  [1070] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(484),
  [1072] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [1074] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [1076] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(487),
  [1078] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(488),
  [1080] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(490),
  [1082] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(491),
  [1084] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [1086] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_strict, 2),
  [1088] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [1090] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [1092] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 2),
  [1094] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [1096] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [1098] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 5),
  [1100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [1102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 2),
  [1104] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [1106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [1108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [1110] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [1112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_constructor_repeat1, 2),
  [1114] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_constructor_repeat1, 2),
  [1116] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_constructor_repeat1, 2),
  [1118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(494),
  [1120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_pattern_repeat1, 2),
  [1122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(495),
  [1124] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__constructor_symbol, 1),
  [1126] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 1),
  [1128] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [1130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 3),
  [1132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(497),
  [1134] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [1136] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2),
  [1138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple_pattern, 4),
  [1140] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple_pattern, 4),
  [1142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(501),
  [1144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__function_pattern, 4),
  [1146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__function_pattern, 4),
  [1148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_labels, 2),
  [1150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(503),
  [1152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(505),
  [1154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(507),
  [1156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tupling_constructor_repeat1, 1),
  [1158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 3),
  [1160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tupling_constructor, 3),
  [1162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(509),
  [1164] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(510),
  [1166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(511),
  [1168] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [1170] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [1172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(514),
  [1174] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1177] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(516),
  [1182] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(517),
  [1184] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(519),
  [1186] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(520),
  [1188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(522),
  [1190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [1192] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3),
  [1194] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_list_repeat1, 2),
  [1196] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 2),
  [1198] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 2),
  [1200] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 2),
  [1202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1204] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1206] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(524),
  [1208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 3),
  [1210] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 3),
  [1212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1214] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 3),
  [1218] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(526),
  [1220] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(526),
  [1222] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [1224] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [1226] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(528),
  [1228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [1230] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 6),
  [1232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(530),
  [1234] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(532),
  [1236] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [1238] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [1240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [1242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(534),
  [1244] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(536),
  [1246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 6),
  [1248] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 6),
  [1250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 3),
  [1252] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 3),
  [1254] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 5),
  [1256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 6),
  [1258] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 6),
  [1260] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [1262] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [1264] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [1266] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_declarations, 3),
  [1268] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_declarations, 3),
  [1270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(537),
  [1272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(537),
  [1274] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(538),
  [1276] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(538),
  [1278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 6),
  [1280] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 6),
  [1282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [1284] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 6),
  [1286] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [1288] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 4),
  [1290] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(539),
  [1292] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1294] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1296] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [1298] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [1300] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(541),
  [1302] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(542),
  [1304] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(544),
  [1306] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(546),
  [1308] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(547),
  [1310] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 6),
  [1312] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 6),
  [1314] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_negative_literal, 4),
  [1316] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [1318] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 2),
  [1320] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [1322] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_pattern_repeat1, 3),
  [1324] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_labels_repeat1, 2),
  [1326] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_label, 3),
  [1328] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 3),
  [1330] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(549),
  [1332] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1335] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(550),
  [1337] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tupling_constructor_repeat1, 2),
  [1339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 4),
  [1341] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tupling_constructor, 4),
  [1343] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [1345] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1347] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [1349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 4),
  [1351] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 4),
  [1353] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 3),
  [1355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 4),
  [1357] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(554),
  [1359] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1363] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1365] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 3),
  [1367] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 3),
  [1369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [1371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 4),
  [1373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(556),
  [1375] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(557),
  [1377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(559),
  [1379] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(560),
  [1381] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(562),
  [1383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [1385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [1387] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [1389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1393] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [1397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 5),
  [1399] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [1401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [1403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [1405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [1407] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [1409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_labels_repeat1, 3),
  [1411] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 4),
  [1413] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple, 4),
  [1415] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1417] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_repeat1, 3),
  [1419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 5),
  [1421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 5),
  [1427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [1429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [1431] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(569),
  [1433] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(571),
  [1435] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(573),
  [1437] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(575),
  [1439] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [1441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [1443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [1445] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [1449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [1451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(576),
  [1453] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [1455] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(577),
  [1457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [1459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [1461] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [1463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(580),
  [1465] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(581),
  [1467] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [1469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [1471] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
};

void *tree_sitter_haskell_external_scanner_create();
void tree_sitter_haskell_external_scanner_destroy(void *);
bool tree_sitter_haskell_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_haskell_external_scanner_serialize(void *, char *);
void tree_sitter_haskell_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_haskell() {
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
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_haskell_external_scanner_create,
      tree_sitter_haskell_external_scanner_destroy,
      tree_sitter_haskell_external_scanner_scan,
      tree_sitter_haskell_external_scanner_serialize,
      tree_sitter_haskell_external_scanner_deserialize,
    },
  };
  return &language;
}
